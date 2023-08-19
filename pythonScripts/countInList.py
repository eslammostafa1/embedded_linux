
list = []

len = int(input('enter the lenght of the list: '))

for unit in range(0, len):
    element = int(input(' enter the number {}: '.format(unit+1)))
    list.append(element)

value = int(input('enter the number you want to count: '))

count = list.count(value)

print('the value {} is repeated {} times.'.format(value,count))