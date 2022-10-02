import sys
import hashlib


# Function for converting user password into MD5 Hash
# This function uses the hashlib library to convert the user password (string) into hash

def MD5ConversionFunc(userPass, Type):
    original = userPass
    userType = Type

    hashed = hashlib.md5(original.encode())  # uses hashlib to encode hashed password

    hashed2 = hashed.hexdigest()  # returns the digest for the hashed pass; returns as string containing only -
    # hexadecimals

    passwordCheck(hashed2, userType)

    return hashed2  # Returns hashed password for unit testing


# Function for checking the user's password against the stored passwords
# Passwords are stored in the lists

def passwordCheck(password, zooType):
    userPass = password
    userType = zooType

    # Lists to store pre-determined passwords

    keeperPass = ["ab9ac4a5c3aa13bd24dfa37f115add67", "1fdf2b14636c6dc1d762dd76013e5f89"]
    adminPass = ["0dd194018cc268c52ea5ebf40b2717fc", "328d19e88efd94b99840e5d3b336fac6"]
    vetPass = ["d5c432448471de4566d327fb9e60ae80", "49638bba7f87b4f3ed5fe90c9c0f66fd"]

    # Check if user password is within one of the lists; also checks user type to ensure correct file is viewed
    # Once verification is performed, FileOpen is called to open the correct file

    if userPass in keeperPass and userType == "zookeeper":
        FileOpen(userType)

    elif userPass in adminPass and userType == "admin":
        FileOpen(userType)

    elif userPass in vetPass and userType == "veterinarian":
        FileOpen(userType)

    else:
        print("\nInvalid Password!\n")  # If password is invalid ; returns to login loop


# File for opening and reading .txt files. Each file is related to one of the three user types

def FileOpen(userFileSelect):
    if userFileSelect == "zookeeper":  # Reads the zookeeper file and prints
        file1 = open("zooKeeper.txt", "r")
        print(file1.read())
        print("\n")
        LogOut()

    if userFileSelect == "admin":  # Reads the admin file and prints
        file2 = open("admin.txt", "r")
        print(file2.read())
        print("\n")
        LogOut()

    if userFileSelect == "veterinarian":  # Reads the veterinarian file and prints
        file3 = open("veterinarian.txt", "r")
        print(file3.read())
        print("\n")
        LogOut()


# Logout function - Simple menu interface to see if user wants to log out of the system or not

def LogOut():

    logoutLoop = True

    print("Logout/return to menu or exit?")
    print("1 - Logout and return to menu")
    print("2 - Exit")

    while logoutLoop:  # Logout loop is used to ensure user is kept in logout menu until they select 1 or 2

        logoutSelection = input()

        if logoutSelection == '1':
            logoutLoop = False
            main()  # Returns user to main function

        elif logoutSelection == '2':
            print("Goodbye!")
            sys.exit()  # Exits / terminates the program

        else:
            print("Error, please type 1 or 2\n")
            continue


# Main function; contains most the primary menu login system and asks for user password and username

def main():
    menu = True
    attempts = 3

    print("Welcome to the authentication system.")

    while menu:  # Menu loop for login attempts

        print("Please enter a number to continue: \n1-Login \n2-Exit")
        menuSelection = input()

        if menuSelection == '1':  # Menu selection 1
            while attempts != 0:  # Attempts counter; user only has 3 attempts
                print("Enter Username: ")
                userName = input()  # Collect username

                print("Enter Password: ")
                userPass = input()  # Collect user password

                if userName in ["griffin.keys", "donald.monkey"]:
                    userType = "zookeeper"  # Assigns user type zookeeper
                    MD5ConversionFunc(userPass, userType)  # Calls md5 password conversion
                    attempts -= 1  # Subtracts 1 attempt from counter

                elif userName in ["rosario.dawson", "bruce.grizzlybear"]:
                    userType = "admin"
                    MD5ConversionFunc(userPass, userType)
                    attempts -= 1

                elif userName in ["bernie.gorilla", "jerome.grizzlybear"]:
                    userType = "veterinarian"
                    MD5ConversionFunc(userPass, userType)
                    attempts -= 1

                else:
                    print("Invalid user name!\n")
                    attempts -= 1  # Subtracts 1 attempt from counter
                    print(attempts, "Attempt(s) left\n")

                    if attempts == 0:
                        print("\nOut of login attempts. Goodbye!")
                        sys.exit()  # Exits if logout attempts are reached

                    continue  # Loop

            break  # Loop

        if menuSelection == '2':  # Menu selection 2

            yesNoLoop = True  # Variable for loop
            while yesNoLoop:  # Loop for yes or no choice

                print("Are you sure you want to exit? (y/n)")
                yesNo = input()

                if yesNo in ['y', 'Y']:
                    print("Goodbye!")
                    sys.exit()  # Exits if user input is Y or y

                elif yesNo in ['n', 'N']:
                    yesNoLoop = False  # Ends loop and returns to main if user input is n or N
                    main()

                else:
                    print("Error, please type y or n!")  # Error message ( not y/Y or n/N)
                    continue # Loop
        else:
            print("\nError, please enter 1 or 2\n\n")  # Menu options, if user does not input 1 or  2
            continue  # Loop


if __name__ == "__main__":
    main()