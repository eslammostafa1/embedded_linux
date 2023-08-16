import json
import os 

def login ():
    print('\nlogin page\n')
    email = input('enter your email: ')
    password = input('enter your your password: ')

    filename = 'users.json'

    if not os.path.isfile(filename):
        print("User data file doesn't exist.")
        return

    if os.path.getsize(filename) == 0:
        print("User data file is empty.")
        return

    with open(filename, 'r') as userFile:
        userData = json.load(userFile)

    for user in userData:
        if user['email'] == email and user['password'] == password:
            print('login successfully')
            break
    
    otherTry = input('\nUser not found.\nDo you want to login again ? y(yes) or n(no)')
    if otherTry.lower() == 'n':
        print('\nthank you for using our program.') 
        return
    else:
        login()


            

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
            dictObj = json.loads(userFile)
    else:
        dictObj = []
    
    dictObj.append(userData)

    with open(filename, 'w') as userFile:
        json.dump(dictObj, userFile, 
                        indent=4,  
                        separators=(',',': '))
        
while True:
    print('\nregistration page\n------------------------------')
    choice = input('\n press 1 for login\n press 2 for signup \n')
    if choice == '1':
        login()
    elif choice == '2':
        signup()
    else:
        print('invaild input, please try again. ')

    