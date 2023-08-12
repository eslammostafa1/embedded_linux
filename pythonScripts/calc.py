
def sum (x, y):
    return x + y

def sub (x, y):
    return x - y

def mult (x, y):
    return x * y

def divide (x, y):
    return x / y
    
while True:
    print('welcome in the simple python calculator')
    print('press 1 for sum ')
    print('press 2 for substarct ')
    print('press 3 for multiply ')
    print('press 4 for divide ')

    operation = int(input(' enter 1 or 2 or 3 or 4 : '))

    x = int(input('enter first number: '))
    y = int(input('enter second number: '))

    if operation == 1 :
        result = sum (x,y)
        print('{} + {}'.format(x,y), result)