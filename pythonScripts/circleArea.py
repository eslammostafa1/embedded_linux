import math

def circleArea(r):
    area = math.pi * pow(r,2)
    return print('the area of the circle: {}'.format(area))

while True:
    print('\nwelcome to the program calculate circle area.')
    r = int(input('enter the circle raduis: '))
    circleArea(r)
    choice = input('do you want to calculate anther circle? y(yes) n(no)')
    if choice.lower() == 'n':
        break
    

