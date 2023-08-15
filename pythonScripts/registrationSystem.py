import json
import os 

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
    
    userData = {
        "username": username,
        "email": email,
        "password": password
    }
    filename = 'users.json'
    file_exists = os.path.isfile(filename)

    if file_exists:
        with open(filename, 'r') as userFile:
            dictObj = json.load(userFile)
    else:
        dictObj = []
    
    dictObj.append(userData)

    with open(filename, 'w') as userFile:
        json.dump(dictObj, userFile, 
                        indent=4,  
                        separators=(',',': '))
        
while True:
    print('\nregistration page\n')
    signup()

    