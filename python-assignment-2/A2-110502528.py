"""
Assignment 2
name: 張勛皓
Student Number:110502528
Course 2021-CE1003-A
"""
l = [0,0,0,0,0]
str = input("Input String: ")
for i in str:
    if i == 'a':
        l[0] = l[0]+1
    elif i == 'e':
        l[1] = l[1] + 1
    elif i == 'i':
        l[2] = l[2] + 1
    elif i == 'o':
        l[3] = l[3] + 1
    elif i == 'u':
        l[4] = l[4] + 1

print(f"a: {l[0]},e: {l[1]},i: {l[2]},o: {l[3]},u: {l[4]}")