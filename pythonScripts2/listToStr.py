lst = []
lst = [item for item in input("Enter the list items: ").split()]
print(lst)

with open("list.txt", "w") as file:
    file.write(" ".join(lst))

data = open("list.txt" , "r")
print(data.read())