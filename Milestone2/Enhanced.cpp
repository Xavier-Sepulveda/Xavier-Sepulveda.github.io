//header files

#include <GLFW\glfw3.h>
#include "linmath.h" // linear math library - provides the most used types required for programming computer graphics:
#include <stdlib.h> // standard library that defines four variable types, several macros, and various functions for performing general functions
#include <stdio.h> // header file used for various functions for performing input and output
#include <conio.h> //header file used to provide console input/output
#include <iostream> //header file which contains definitions of objects for standard input/output stream
#include <vector> // used to tell  the compiler to not only use this code, but to also compile a file called vector
#include <windows.h> // header file that contains the declarations for the functions in the Windows API


using namespace std;

const float DEG2RAD = 3.14159 / 180; // Converts degrees to radians

void processInput(GLFWwindow* window);

enum BRICKTYPE { REFLECTIVE, DESTRUCTABLE };
enum ONOFF { ON, OFF };

class Brick
{
public:
	float red, green, blue;
	float x, y, width;
	BRICKTYPE brick_type;
	ONOFF onoff;
	
	//defines brick object data
	Brick(BRICKTYPE bt, float xx, float yy, float ww, float rr, float gg, float bb)
	{
		brick_type = bt; x = xx; y = yy, width = ww; red = rr, green = gg, blue = bb;
		onoff = ON;
	};
	
	// Function to draw brick when on
	void drawBrick()
	{
		if (onoff == ON)
		{
			double halfside = width / 2;

			glColor3d(red, green, blue);
			glBegin(GL_POLYGON);

			glVertex2d(x + halfside, y + halfside);
			glVertex2d(x + halfside, y - halfside);
			glVertex2d(x - halfside, y - halfside);
			glVertex2d(x - halfside, y + halfside);

			glVertex2d(x + halfside, y + halfside);
			glVertex2d(x + halfside, y - halfside);
			glVertex2d(x - halfside, y - halfside);
			glVertex2d(x - halfside, y + halfside);

			glEnd();
		}
	}
};

 // defines circle object data
class Circle 
{
public:
	float red, green, blue;
	float radius;
	float x;
	float y;
	float speed = 0.02; // By adjusting the speed, i can control how fst the circles move
	int direction; // 1=up 2=right 3=down 4=left 5 = up right   6 = up left  7 = down right  8= down left
	
	Circle(double xx, double yy, double rr, int dir, float rad, float r, float g, float b)
	{
		x = xx;
		y = yy;
		radius = rr;
		red = r;
		green = g;
		blue = b;
		radius = rad;
		direction = dir;
	}
	
	//Checks if circle hit a brick, if reflective the circle will continue moving, if destructable brick disappears 
	void CheckCollision(Brick* brk)
	{
		if (brk->brick_type == REFLECTIVE)
		{
			if ((x > brk->x - brk->width && x <= brk->x + brk->width) && (y > brk->y - brk->width && y <= brk->y + brk->width))
			{
				direction = GetRandomDirection();
				x = x + 0.03;
				y = y + 0.04;
			}
		}
		else if (brk->brick_type == DESTRUCTABLE)
		{
			if ((x > brk->x - brk->width && x <= brk->x + brk->width) && (y > brk->y - brk->width && y <= brk->y + brk->width))
			{
				brk->onoff = OFF;
			}
		}
	}
	
	//attempted to check for circle collision

	/*void CheckCollision(Circle* circ)
	{
		if ((x > circ->x - circ->radius && x <= circ->x + circ->radius) && (y > circ->y - circ->radius && y <= circ->y + circ->radius))

		{
			direction = GetRandomDirection();
			x = x + 0.03;
			y = y + 0.04;
		}

	}*/
	
	// Function to randomize the direction the circle will go
	int GetRandomDirection()
	{
		return (rand() % 8) + 1;
	}
	
	// to Change the direction of the circles
	void MoveOneStep()
	{
		if (direction == 1 || direction == 5 || direction == 6)  // up
		{
			if (y > -1 + radius)
			{
				y -= speed;
			}
			else
			{
				direction = GetRandomDirection();
			}
		}

		if (direction == 2 || direction == 5 || direction == 7)  // right
		{
			if (x < 1 - radius)
			{
				x += speed;
			}
			else
			{
				direction = GetRandomDirection();
			}
		}

		if (direction == 3 || direction == 7 || direction == 8)  // down
		{
			if (y < 1 - radius) {
				y += speed;
			}
			else
			{
				direction = GetRandomDirection();
			}
		}

		if (direction == 4 || direction == 6 || direction == 8)  // left
		{
			if (x > -1 + radius) {
				x -= speed;
			}
			else
			{
				direction = GetRandomDirection();
			}
		}
	}
	
	// Function to create the circles using the built in fuctions provided by the header files
	void DrawCircle()
	{
		glColor3f(red, green, blue);
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++) {
			float degInRad = i * DEG2RAD;
			glVertex2f((cos(degInRad) * radius) + x, (sin(degInRad) * radius) + y);
		}
		glEnd();
	}
};


vector<Circle> world;


int main(void) {
	srand(time(NULL));

	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
	GLFWwindow* window = glfwCreateWindow(480, 480, "Xavier's Random World of Circles", NULL, NULL); //Changed to Display my name in the top of window
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);

	Brick brick(REFLECTIVE, 0.5, -0.4, 0.2, 0.258824, 0.258824, 0.435294); // Added additional Bricks to create my shape
	Brick brick2(DESTRUCTABLE, -0.5, 0.4, 0.2, 0.0, 1.0, 1.0);
	Brick brick3(DESTRUCTABLE, -0.5, -0.4, 0.2, 0, 0, 1);
	Brick brick4(REFLECTIVE, 0, .15, 0.2, 1.0, 0.0, 0.0);

	Brick brick5(REFLECTIVE, 0.5, 0.4, 0.2, 1.00, 0.11, 0.68);
	//Brick brick6(DESTRUCTABLE, 0, .75, 0.2, 0, 1, 0);
	Brick brick7(DESTRUCTABLE, 0, -.75, 0.2, 0.22, 0.69, 0.87);
	Brick brick8(DESTRUCTABLE, -.8, 0, 0.2, 0.0, 1.0, 0.0);
	Brick brick9(DESTRUCTABLE, .8, 0, 0.2, 1.0, 1.0, 0.0);


	// Creates how the window will look
	while (!glfwWindowShouldClose(window)) {
		//Setup View
		float ratio;
		int width, height;
		glfwGetFramebufferSize(window, &width, &height);
		ratio = width / (float)height;
		glViewport(0, 0, width, height);
		glClear(GL_COLOR_BUFFER_BIT);

		processInput(window);

		// Detects the movement with in the "world" 
		for (int i = 0; i < world.size(); i++)
		{
			world[i].CheckCollision(&brick);
			world[i].CheckCollision(&brick2);
			world[i].CheckCollision(&brick3);
			world[i].CheckCollision(&brick4);
			world[i].CheckCollision(&brick5);
			//world[i].CheckCollision(&brick6);
			world[i].CheckCollision(&brick7);
			world[i].CheckCollision(&brick8);
			world[i].CheckCollision(&brick9);

			world[i].MoveOneStep();
			world[i].DrawCircle();

		}

		brick.drawBrick();
		brick2.drawBrick();
		brick3.drawBrick();
		brick4.drawBrick();

		brick5.drawBrick();
		//brick6.drawBrick();
		brick7.drawBrick();
		brick8.drawBrick();
		brick9.drawBrick();


		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate;
	exit(EXIT_SUCCESS);
}

// proccess when keys are pressed to exit the program or Shoot circles out
void processInput(GLFWwindow* window) 
{
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);

	if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS)
	{
		double r, g, b;
		r = rand() / 10000;
		g = rand() / 10000;
		b = rand() / 10000;
		Circle B(0, 0, 02, 2, 0.05, r, g, b);
		world.push_back(B);
	}
}