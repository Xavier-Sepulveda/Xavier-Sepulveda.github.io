# Xavier Sepulveda - SNHU Capstone 

------------------------------------------------------------

## Table of Contents
* Self Assesment
* Code review
* Coding Collision
* Zoo Monitoring
* Animal Shelter Database

------------------------------------------------------------

## Self-Assesment

### Overview:
While working toward completing my Computer Science degree at Southern New Hampshire University, I was able to experience and work with different aspects of computer sciences. From working in a team environment, learning about different computer languages, and how the different aspects of computer sciences relate to what we may see in the field. Throughout my schooling I worked on a number of assignments that I believe show some of my abilities and strengths. Some assignments will be included in this ePortfolio to showcase some of those abilities such as the Coding Collision assignment, Zoo Monitoring assignment, and the Animal Shelter Database assignment. The aspects learned from these assignments have helped to give me the skills needed to become a strong employee within the computer science industry. I will touch upon some specific courses, and how they helped to give me a better understanding of the following topics.

### Collaborating in a team environment:
I current work in IT, with a team of 6 of us. My day to day includes troubleshooting software issues, along with distributing and re-imaging laptops. It important to be able to collaborate in the field. I have learned a lot from the senior level employees where I work. I think it is important to be able to work in a team environment, and some of the courses I have taken have help me to be a beneficial member of my team. In CS-310 Collaboration and Team Project, we learned how to collaborate on a software project. We were tasked with contributing our own portions of code into a juke box program, and push those changes using git. In this course we were introduced to collaboration strategies, and how to utilize industry-standard tools and techniques. 

### Communicating to Stakeholders:
I learned about communicating to stakeholders when taking CS-250 Software Development Lifecycle. In this course we learned how to identify and apply appropriate software development lifecycle models and methodologies. Stakeholders are the people who are affected by the outcome of a software development project, so as a developer knowing the requirement to a project relate heavily to the stakeholders. They want to know that the needs of the company/end user are fulfilled. For example, the projects included in this ePortfolio have expected outcomes/requirements. Stakeholders are looking to see that those outcomes/requirements are what is expected, to have a completed project.

### Data Structures and Algorithms:
I learned about multiple aspects related to data structures and algorithms from a number of courses I’ve taken. To name a few, IT-145 Foundation in Application Development, CS-260 Data Structures and Algorithms, and CS-320 Software Testing, Automation, and Quality Assurance. You will see some direct examples of things learned when looking at the included artifacts, such as how data structures differ among different computer languages.  In CS-320 Software Testing, Automation, and Quality Assurance we learned how to structure test cases, so they pass the proper information and be sure the proper outcome is reached. 

### Software Engineering and Databases:
There were also a number of course I’ve taken to gain skills and understanding in software engineering and databases. You will be able to see me showcase my ability to create a RESTful API. The RESTful API will use GET, POST, PUT, and DELETE requests to update data stored in a database. Some other examples come from courses like CS-405 Secure Coding, where we learned techniques and strategies to mitigate vulnerabilities within software. In CS-410 Reverse Software Engineering, I learned how to reverse engineer code. this is a good skill because it helps if a program need to be recreated to run on a different operating system, or if the legacy code needs to be updated to today’s standards.

### Security:
Many courses touched upon the importance of security. You can see some aspects put into place such as the authentication function utilized in the Zoo Monitoring Application, or the technique used to connect to my database for the Animal Shelter Database. Another course that touched upon the aspect of security was CS-405 Secure Coding. I learned how to put a security policy together, which included a Defense in Depth approach, principles to follow, and coding standards.

------------------------------------------------------------

## Milestone 1 - Code Review
My Code review can be found here: https://www.screencast.com/t/nRuNcNOj 

------------------------------------------------------------

## Milestone 2 - Enhancement One: Software Design and Engineering

### Artifact Description
My Artifact for milestone two is based off an assignment from my CS-330 Computational Graphics and Visualization course, Coding Collisions World of Circle. What happens is there are squares displayed. From the center square, colored circles are shot out and bounce around the window. The program is written with functions that will detect collisions. Once a collision is made, it will trigger another action. The circles may continue to bounce off the walls or squares, or the squares will disappear. 

### Reason for Inclusion
I chose to include this artifact because it shows some understanding in computer graphics, while also showing skill using OpenGL and working with C++. OpenGL provides a huge set of functions that allows me to manipulate the graphics. I think this helps to showcase my ability to use well-founded and innovative techniques, skills, and tools in computing practices for the purpose of implementing computer solutions that deliver value and accomplish industry-specific goals. By utilizing OpenGL’s large set of functions, I am able to end up with more seamless program. It is also used in the industry because the speed at which it processes the images, by using the GPU rather than a normal processor. To enhance the project, I will alter some of the functions to change the layout of the squares, along with changing the speed of the circles. I also added squares, making them into a shape of a heart. In line comments will show where the changes have been made, along with pictures of the difference between the original version versus the new enhanced version. By using the built in OpenGl functions I am able to create the window we are viewing, and configure it using the prefixed options by using the GLFW library and linking it to the project. 

Screencast of original running https://www.screencast.com/t/OCDR9678D
Screencast of enhanced running 

If you look at the main() function I added the additional brick objects to create my heart shape. To do so, I needed to adjust the points at which the brick sits on the x and y axis of the window.  I have also modified the float speed of the circles to come out faster. While attempting to alter some more I created a CheckCollision(Circle* circ) function for the circles, but wasn’t able to implement it properly. I have added my name to the window title and adjusted the size of the window as well. By utilizing the functions provided by the header files I was able to create the updated window using the glfwCreateWindow to create the window object.

### Reflect
While working on this project I faced many challenges. OpenGL is great for what I was trying to accomplish but when doing research and attempting to complete my goal, I realized that a missing header file will keep the program from functioning. Its important to be sure that the necessary files are included. I was able to ultimately change the look and functionality of my artifact. This project helped me to understand what goes into computer graphics. There are alternatives to computing graphics, but I learned that OpenGL is good for developing graphics because it’s designed to be platform-agnostic. The course that his artifact is from taught me some of the basics of that. I had no idea how a simple game like Pong can be created using some of the topics I learned. The Checkcollision() function from my artifact functions similar to what is happening in Pong. The skilled learned from working with assignments like this can be used to create animations and video games. I am happy that I was able to change the look and some of the functionality of my artifact, but was upset that I wasn’t able to get my CheckCollision(Circle* circ) function to work out. This assignment has helped me to value the things I learned. I was able to work with OpenGL, which is used throughout the industry when it comes to computing graphics. I had no idea how I was going to place the addition bricks, but thinking back to what I learned from CS-330 Computational Graphics and Visualization and some research, I was able to create the heart shape. Some of computer science practices and standards came to mind as well, such as leaving comments in the code to let the user know what is happening (or supposed to happen). This help when multiple people are working on a single project, so they know what’s going on. 



