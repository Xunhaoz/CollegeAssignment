"""
Assignment 5
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
"""

dic = {0: '0', 1: '1', 10: '2', 11: '3', 100: '4', 101: '5', 110: '6', 111: '7', 1000: '8', 1001: '9', 1010: 'A',
       1011: 'B', 1100: 'C', 1101: 'D', 1110: 'E', 1111: 'F'}

bin = input("Binary: ")
while bin != '-1':
    check_num = 1
    for i in range(len(bin)):
        if bin[i] != '0' and bin[i] != '1':
            check_num = 0

    if check_num:
        bin = int(bin)
        hex = ''
        i = 0
        while bin > 0:
            hex += dic[bin % 10000]
            bin = bin // 10000

        print(f"Hexadecimal: {hex[::-1]}")
        bin = input("Binary: ")
    else:
        bin = input("Not Binary Number! \nBinary: ")