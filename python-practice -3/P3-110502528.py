"""
Practice 3
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
"""


def creat_file(file_name, content):
    fh = open(file_name, "w")
    fh.write(content)
    fh.close()


file_name = input("Creat a file: ")
content = input("Write something: ")
creat_file(file_name, content)
print(f"File name: {file_name}")
print(f"Content: {content}")