"""
Assignment 5
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
"""


def bin_to_dec(enter):
    dig = 0
    outer = 0
    while enter > 0:
        outer += (enter % 10) * (2 ** dig)
        enter = enter // 10
        dig += 1
    return outer


def dec_to_bin(enter):
    dig = 1
    outer = 0
    while enter > 0:
        outer += (enter % 2) * dig
        enter = enter // 2
        dig *= 10
    return outer


bin = input("")
while bin != '-1':
    symble = ''

    if '+' in bin:
        symble = '+'
    else:
        symble = '-'


    bin = list(map(int, bin.split(symble)))

    if symble == '+':
        result = bin_to_dec(bin[0]) + bin_to_dec(bin[1])
    else:
        result = bin_to_dec(bin[0]) - bin_to_dec(bin[1])

    print(dec_to_bin(result))
    bin = input("")
