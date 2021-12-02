"""
Practice 6
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
"""


def F(n):
    if n > 0 and n % 2 == 0:
        return 2 + F(n / 2)
    elif n > 0:
        sum = 0
        while n > 0:
            sum += n % 10
            n = n // 10
        return 3 + F(sum - 5)
    else:
        return 0

fh = open("test.txt", 'r')

for line in fh:
    print(F(int(line)))
