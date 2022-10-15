# Xavier Sepulveda - SNHU Capstone 

------------------------------------------------------------

## Table of Contents
* Self Assesment
* Code review (Milestone 1)
* Coding Collision (Milestone 2)
* Zoo Monitoring (Milestone 3)
* Animal Shelter Database (Milestone 4)

------------------------------------------------------------

## Self-Assesment

### Overview:
While working toward completing my Computer Science degree at Southern New Hampshire University, I was able to experience and work with different aspects of computer sciences. From working in a team environment, learning about different computer languages, and how the different aspects of computer sciences relate to what we may see in the field. Throughout my schooling I worked on a number of assignments that I believe show some of my abilities and strengths. Some assignments will be included in this ePortfolio to showcase some of those abilities such as the Coding Collision assignment, Zoo Monitoring assignment, and the Animal Shelter Database assignment. The aspects learned from these assignments have helped to give me the skills needed to become a strong employee within the computer science industry. I believe this ePortfolio itself follows the outcome of designing, developing, and delivering professional-quality oral, written, and visual communications that are coherent, technically sound, and appropriately adapted to specific audiences and contexts. This will be used to showcase my ability to work with multiple aspects of computer science, making me a good candidate for employment.  I will touch upon some specific courses, and how they helped to give me a better understanding of the following topics.

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
My Code review can be found here: [Code Review](https://www.screencast.com/t/nRuNcNOj "Video Link")  or at https://www.screencast.com/t/nRuNcNOj

------------------------------------------------------------

## Milestone 2 - Enhancement One: Software Design and Engineering

### Artifact Description
My Artifact for milestone two is based off an assignment from my CS-330 Computational Graphics and Visualization course, Coding Collisions World of Circle. What happens is there are squares displayed. From the center square, colored circles are shot out and bounce around the window. The program is written with functions that will detect collisions. Once a collision is made, it will trigger another action. The circles may continue to bounce off the walls or squares, or the squares will disappear. 

### Reason for Inclusion
I chose to include this artifact because it shows some understanding in computer graphics, while also showing skill using OpenGL and working with C++. OpenGL provides a huge set of functions that allows me to manipulate the graphics. I think this helps to showcase my ability to use well-founded and innovative techniques, skills, and tools in computing practices for the purpose of implementing computer solutions that deliver value and accomplish industry-specific goals. By utilizing OpenGL’s large set of functions, I am able to end up with more seamless program. It is also used in the industry because the speed at which it processes the images, by using the GPU rather than a normal processor. To enhance the project, I will alter some of the functions to change the layout of the squares, along with changing the speed of the circles. I also added squares, making the layout of the bricks different. By addiing  In line comments will show where the changes have been made, along with pictures of the difference between the original version versus the new enhanced version. By using the built in OpenGl functions I am able to create the window we are viewing, and configure it using the prefixed options by using the GLFW library and linking it to the project. 

### Orgininal 
![image](/assets/images/originalCollision.png)
### To see screencast of original running [Click Here!](https://www.screencast.com/t/OCDR9678D "Video Link") or at https://www.screencast.com/t/OCDR9678D
For Original Artifact Code [Click Here!](https://github.com/Xavier-Sepulveda/Xavier-Sepulveda.github.io/blob/main/Milestone2/Original.cpp)

### Enhanced
![image](/assets/images/Enhanced.png)
### To see screencast of enhanced running [Click Here!](https://www.screencast.com/t/yuLxCZhzq "Video Link") or at https://www.screencast.com/t/yuLxCZhzq
For Enhanced Artifact Code [Click Here!](https://github.com/Xavier-Sepulveda/Xavier-Sepulveda.github.io/blob/main/Milestone2/Enhanced.cpp)

By using OpenGL's built in functions, I was able to make the window bigger and changed the window title. If you look at the main() function I added the additional brick objects to create my new brick layout with different colors. To do so, I needed to adjust the points at which the brick sits on the x and y axis of the window.  I have also modified the float speed of the circles to come out faster. Altering the DrawCircle() method I was able to cut the circle in half, to make them look like flying saucers/ ufos buy changing the for loop. I added additional speeds in the circle class. Those were used in the if statements to change speed of circle/ufo. While attempting to alter some more, I created a CheckCollision(Circle* circ) function for the circles, but wasn’t able to implement it properly. I have added my name to the window title and adjusted the size of the window as well by updating the main() function. By utilizing the functions provided by the header files I was able to create the updated window using the glfwCreateWindow to create the window object. 

### Reflect
While working on this project I faced many challenges. OpenGL is great for what I was trying to accomplish but when doing research and attempting to complete my goal, I realized that a missing header file will keep the program from functioning. Its important to be sure that the necessary files are included. I was able to ultimately change the look and functionality of my artifact. This project helped me to understand what goes into computer graphics. There are alternatives to computing graphics, but I learned that OpenGL is good for developing graphics because it’s designed to be platform-agnostic. The course that his artifact is from taught me some of the basics of that. I had no idea how a simple game like Pong can be created using some of the topics I learned. The Checkcollision() function from my artifact functions similar to what is happening in Pong. The skills learned from working with assignments like this can be used to create animations and video games. I am happy that I was able to change the look and some of the functionality of my artifact, but was upset that I wasn’t able to get my CheckCollision(Circle* circ) function to work out. This assignment has helped me to value the things I learned. I was able to work with OpenGL, which is used throughout the industry when it comes to computing graphics. I had no idea how I was going to place the addition bricks, but thinking back to what I learned from CS-330 Computational Graphics and Visualization and some research, I was able to create the new layout, along with making the circles look like ufos. Some of computer science practices and standards came to mind as well, such as leaving comments in the code to let the user know what is happening (or supposed to happen). This helps when multiple people are working on a single project, so they know what’s going on. 

------------------------------------------------------------

## Milestone 3 - Enhancement Two: Algorithms and Data Structure

### Artifact Description
My Artifact for milestone three is based off of an assignment I had worked with in my IT-145 Found in Application Development course. This assignment consisted of creating an authentication system that allowed employees to log in and display the proper message, depending on who is logging in. The system should prompt the user to either log in or exit. When the user chooses the login option, the system then ask for a username and password. The system would then check what they entered against the stored password. If correct, it will display what is in the text file that goes with that particular employee. If the incorrect credentials are entered the system will let the user know how many attempts are left, and allow the user to try again. If all attempts are unsuccessful, then the system will display an “out of attempts” message and exit the program.

### Reason for Inclusion

I included this artifact because I believe it helps to showcase my ability to work with data structures and algorithms, while also being able to refactor the code to function as a python application.  This I believe this follows the course outcome of designing and evaluating computing solutions that solve a given problem using algorithmic principles and computer science practices and standards appropriate to its solution. Being able to convert a program to a different language is a good skill to have in this industry. It also touches upon developing a security mindset that anticipates adversarial exploits in software architecture and designs. 

 I needed to be able to convert the Java functions into python functions which shows my ability to work with the algorithms and data structures. For example, the MD5 hash conversion. The original code included a standard Java MD5 conversion, while the converted python version includes a more simplistic MD5 conversion. I also created test for the enhanced artifact. Having unit tests allows for the execution of a functional project. This aligns with the outcome designing and evaluating computing solutions that solve a given problem using algorithmic principles and computer science practices and standards appropriate to its solution. Its important to test. Testing allows developers to know if the program will behave as expected.

 There were also a number of errors within the original code that did not allow the program to function properly. The updated/enhanced version includes an overall better structured layout. The data structures in the enhancement allow the program to be more efficient. If you look at the main AuthenticationSystem function, compared the main function in the enhanced version, it is a lot more efficient, east to use, and readable. The original Java code had long statements to check. It checked for user type, the converted password, and checked if they equal to the hashed password data. The improved version needs to just check what the username is, then utilizing the other functions, it makes sure the password is correct and allows for the program to display the text file that goes with the expected user. To improve the functionality, and touch base on the algorithms and data structure aspect for this section, I used a list to store the user passwords in a separate function. Originally the authorization was granted by going through some pretty long comparison statements that were in the original version's main function. This covers the course outcome of designing and evaluating computing solutions that solve a given problem. Also, inline comments let other know what’s happening within the code, which help to employ strategies for building collaborative environments. Others are able to look at the code and know what the functions are supposed to do. 

### Orgininal Files
[Click Here!](https://github.com/Xavier-Sepulveda/Xavier-Sepulveda.github.io/tree/main/Milestone3/OriginalCode)

### Enhanced Files
[Click Here!](https://github.com/Xavier-Sepulveda/Xavier-Sepulveda.github.io/tree/main/Milestone3/EnhancedCode)

### Reflect
I was able to get the program fully functioning. I needed to do some additional research to refresh my memory on how the Java functions would need to be set up to work correctly when converted to Python. While working on this I realized the importance of comments. Knowing what each section of code is doing makes it easier to understand what the expected outcome is. For this purpose, better comments in the original version would have made it easier to convert. I did run into some trouble when trying to test the conversion function. Luckily it was little syntax issues. This made me more aware of taking my time and not rushing. Along with trying to make more useability when working with the functions, so the code isn’t as messy. While working through this I learned about alternative hashing methods that could have been used to make the program more secure. This touches upon the outcome of developing with a security mindset. I also tried to leave clear comments before each portion of the enhanced code to allow other developers the ability to know what’s happening, and make changed if needed. This helps with employing Strategies for building a collaborative environment. Working through this also allowed me to brush up on the differences between computer languages. Many courses gave me the basics, but this made me realize that I need to continue to practice to help retain the knowledge gained. The two languages used are similar but do have its differences. The original code itself wasn’t too complicated, but I needed to brush up on how to make the Java functions work when converted to Python. Knowing how the data needed to be structured caused me to have to kind of relearn the basics of Python. I remember from early courses, Python looking very clear and easier to understand, which is why I choose Python for this piece of my project.

------------------------------------------------------------

## Milestone 4 - Database

### Artifact Description
The artifact selected for this portion of the project was the Salvare Search for Rescue Web Application. This comes from CS 340 Client/Server Development course. The original application was developed in Python with the Dash framework and a non-relational database, MongoDB. It was also created using a virtual machine provided by the school, utilizing PyMongo and Jupyter Notebook. 

### Reason for Inclusion
To modify/ enhance the previous project, I decided to Create REST API using MongoDB. I will include some screen shots to the previous project, along with screen shots of the updated version to show my ability to work with databases.  Also, showing how I am able to work with other languages since the new version is created as a MongoDB and using Javascript. I believe this will cover almost every course outcome. There are aspects of using a security mindset when accessing the database, using tools(Postman) to test, designing a new project with a similar outcome as the original, and inline comment to employ collaborative environments. 

For Original Artifact Code [Click Here!](https://github.com/Xavier-Sepulveda/Xavier-Sepulveda.github.io/tree/main/Milestone4/Original)
For Enhanced Artifact Code [Click Here!]

You will be able to see everything mentioned below, and how it lines up if you look at the enhanced code, and read the comments. The comments in the app.js covers the outcome of employing strategies for building collaborative environments, by letting a new viewer know what’s happening within the code. To start, I began by using different packages to create alternative RESTful services. Using express, I was able to create a RESTful API service to maintain the server and use nodemon to help run the main application. By configuring the express app using the express package I am able to create the server by including some middleware and routes (API services). For the new version I used different routes to allow the user to navigate where needed. I created alternative CRUD functions like the GET() method to Fetch the data, POST() method to push the data,  Patch() to update the data, and the Delete() method to delete the data. If you look below, you can see the old CRUD functions compared to the newly refined routes. 

### Original CRUD Functions
![image](/assets/images/OriginalCRUD.png)
### Enhanced
![image](/assets/images/EnhancedMethods.png)

With the CRUD functions stored in our routes file rather than in the main code like the previous version. To configure MongoDB with this RESTful API, I installed the mongoose package. This allowed me to configure and connect mongo DB to this project. Below will be a snippet of how I connected to the original vs the updated version.
### Original Connection Method
![image](/assets/images/OriginalConnection.png)

To cover the outcome of developing with a security mindset that anticipates adversarial exploits in software architecture and designs to expose potential vulnerabilities, mitigate design flaws, and ensure privacy and enhanced security of data and resources, I altered where the connection string lives, so it isn’t visible in the main code. The original had the connection string in the code making it available to be seen easily. To improve the design and make the system more secure I separated the connection string from the main code. To demonstrate an ability to use well-founded and innovative techniques, skills, and tools in computing practices for the purpose of implementing computer solutions that deliver value and accomplish industry-specific goals, I incorporated using additional packages such as the dotenv, express, mongoose, nodemon, and body-parser. I will go over why the dotenv package was used. To hide the connection string with the credentials, I installed the dotenv package. This allows me to configure the environment, protecting my password so it is not visible. This lets the program load the variable from the .env file rather than displaying in the app.js code. The connection string is then stored in the .env file and imported into the app.js file.
### Connection String From .env File
![image](/assets/images/EnvConnection.png)
### From app.js File
![image](/assets/images/AppConnection.png)

To cover the outcome of develop a security mindset that anticipates adversarial exploits in software architecture and designs to expose potential vulnerabilities, mitigate design flaws, and ensure privacy and enhanced security of data and resources. In my MongoDB I created a new user admin with password admin to provide access to the database. This admin was created with read and write permissions. We can see in both the original and updated version the string holds the log in credential. By storing that string in the .env file it shows I’m trying to create the new version with more of a security mindset. For security purposes I can make it so the database is only accessible from a particular IP address. For this project I left it open to allow access from anywhere.

I utilized the mongoose.connect class to connect my MongoDB. Using the URL for the data base with the user credentials and a call back function with a console log to show that we are connected to the database. Using the callback function with a consol log shows the use of well-founded and innovative techniques, skills, and tools in computing practices, because it will keep a log of events, and let the developer know if things are functioning as intended.
### Terminal Message to Know We Are Connected
![image](/assets/images/ConsolLog.png)

To show the use of best practices by being able to validate function and methods are working properly I used Postman, an API platform used for API testing. This helps to monitor if the routes are performing as intended. From there I am able to utilize a GUI where I can obtain different types of responses that will need to be validated. Using a third-party platform like Postman, also covers the outcome of demonstrating an ability to use well-founded and innovative techniques, skills, and tools in computing practices.
### Postman Image
![image](/assets/images/Postman1.png)
### Postman Image
![image](/assets/images/Postman2.png)




