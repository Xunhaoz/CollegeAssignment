"""
Assignment 6
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
"""


def f(N):
    if N >= 10:
        return 1 + f(N - 22) + f(f(N - 30) - 30)
    elif 5 <= N <= 9:
        return 2 + f(N-2)
    elif N <= 4:
        return 3


while True:
    user = input("Please input the variable of f(N): ")
    if user == '0':
        break
    try:
        user = int(user)
        if user < 0:
            print("Input should be a positive integer! ")
            continue
        elif user > 500:
            print("Integer should less than 500 or equal to 500!")
            continue
        print(f(user))

    except ValueError:
        print("Input should be a positive integer! ")
        continue
