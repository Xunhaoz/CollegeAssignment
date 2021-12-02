"""
Assignment 7
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
"""

number_dic = {str(i): [chr(i * 3 + k + 91) for k in range(3)] for i in range(2, 10)}
number_dic['7'] = ['p', 'q', 'r', 's']
number_dic['8'] = ['t', 'u', 'v']
number_dic['9'] = ['w', 'x', 'y', 'z']

record_list = []


def recursive(num_list, record_string):
    if not num_list:
        record_list.append(record_string)
        return

    for i in number_dic[num_list[len(num_list)-1]]:
        recursive(num_list[0:len(num_list)-1], record_string + i)


fh = open('digit.txt', 'r')
num = [i for i in fh.read()[::-1]]
fh.close()

fh = open('110502528.txt', 'w')
if num[len(num) - 1] == '1':
    print('none')
    fh.write('none')
    fh.write('\n110502528張勛皓')
else:
    recursive(num, '')
    print(' '.join(record_list))
    fh.write(' '.join(record_list))
    fh.write('\n110502528張勛皓')
