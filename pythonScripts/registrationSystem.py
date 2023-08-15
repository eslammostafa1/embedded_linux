# import bcrypt
import json

def login ():
    pass

def signup ():
    print('\nsignup page\n')
    username = input('enter your username: ')
    email = input('enter your email: ')
    password = input('enter your new password: ')
    confirmPassword = input('confirm your new password: ')

    if password != confirmPassword:
        print('\npassword do not matching, please try again! \n')
        otherTry = input('\nDo you want enter password again ? y(yes) or n(no)')
        if otherTry.lower() == 'n':
            print('\nthank you for using our program.') 
            return
        else:
            signup()
    
    # hashPass = bcrypt.hashpw(password.encode("utf-8"), bcrypt.gensalt())

    userData = {
        "username": username,
        "email": email,
        "password": password
        # "password": hashPass.decode("utf-8")
    }
    
    with open('users.json', 'a') as userFile:
        userFile.write(json.dumps(userData) + '\n')

    print("{} signup successfully".format(username))


while True:
    print('\nregistration page\n')
    signup()

    