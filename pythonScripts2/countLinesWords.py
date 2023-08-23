
while True:
    data = input("enter file content: ")
    file = open("testFile.txt","a")
    file.write(data+'\n')
    choice = input('\nDo you want to enter data to file? y(yes) n(no)\n')
    if choice.lower() == 'n':
        break

with open("testFile.txt", "r") as file:
    lines = file.readlines()
linesNum = len(lines)
print(f"number of lines: {linesNum}")

with open("testFile.txt", "r") as file:
    lines = file.read()
wordsNum = len(lines.split())
print(f"number of words: {wordsNum}")
