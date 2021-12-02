"""
Assignment 3
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
"""

def find_factor(number):
    for i in range(1, number+1):
        if number % i == 0:
            fh.write(f"{i} {find_prime(i)} \n")

def find_prime(number):
    if number == 0 or number == 1:
        return "N"
    check_num = 0
    for i in range(2, number):
        if number % i == 0:
            check_num = 1
            break
    if check_num:
        return "N"
    else:
        return "Y"


fh = open("test.txt", "r")
numbers = fh.read()
fh.close()
l = numbers.split()
l = list(map(int, l))

fh = open("answer.txt", "w")
for key, i in enumerate(l):
    fh.write(f"Number_{key+1}: {i}\n")
    find_factor(i)
    fh.write("\n")
fh.close()