
def sum (x, y):
    return x + y

def sub (x, y):
    return x - y

def mult (x, y):
    return x * y

def divide (x, y):
    return x / y
    
print('welcome in the simple python calculator')

while True:
    print('press 1 for sum ')
    print('press 2 for substarct ')
    print('press 3 for multiply ')
    print('press 4 for divide ')
    print('press 9 for exit ')

    operation = int(input(' enter 1 or 2 or 3 or 4 or 9: '))


    if operation == 9:
        print('thank you for using our program.') 
        break

    if operation in (1,2,3,4,9):

        x = int(input('enter first number: '))
        y = int(input('enter second number: '))

        if operation == 1 :
            result = sum (x,y)
            print('{} + {} = '.format(x,y), result)
        elif operation == 2:
            result = sub (x,y)
            print('{} - {} = '.format(x,y), result)
        elif operation == 3:
            result = mult (x,y)
            print('{} * {} = '.format(x,y), result)       
        elif operation == 4:
            result = divide (x,y)
            print('{} / {} = '.format(x,y), result) 
        otherCalculation = input('Do you want another calculation ? y(yes) or n(no)')
        if otherCalculation == 'n':
            print('thank you for using our program.') 
            break
    else:
        print('please enter valid value, follow the steps, try again.\n\n')

