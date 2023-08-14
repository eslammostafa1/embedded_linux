import bcrypt
import json

def login ():
    pass

def signup ():
    username = input('enter your username: ')
    email = input('enter your email: ')
    password = input('enter your new password: ')
    confirmPassword = input('confirm your new password: ')

    if password != confirmPassword:
        print('\npassword do not matching, please try again! \n')
        otherTry = input('\nDo you want enter password again ? y(yes) or n(no)')
        if otherTry == 'n':
            print('\nthank you for using our program.') 
            return
        else:
            signup()
    
    hash_pass = bcrypt.hashpw(password , bcrypt.gensalt())

    user_data = {
        "username": username,
        "email": email,
        "password": hash_pass
    }
    
    with open('users.json', 'a') as userFile:
        userFile.write(json.dumps(user_data) + '\n')

    print("{} signup successfully".format(username))


while True:
    print('\nregistration page\n')
    signup()

    