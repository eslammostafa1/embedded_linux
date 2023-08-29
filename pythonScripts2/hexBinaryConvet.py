file1 = open('hexfile.txt', 'r+')
lines = file1.readlines()

binary_strings = []
for line in lines:
    hex_value = line.strip()
    binary_value = bin(int(hex_value, 16))[2:].zfill(len(hex_value) * 4)
    binary_strings.append(binary_value)

with open('myfileBin.txt', 'w') as file2:
    file2.write('\n'.join(binary_strings))

print(lines)