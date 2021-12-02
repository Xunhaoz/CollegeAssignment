"""
Assignment 4
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
"""

fh = open("score_110502528.txt", "r")
line_list = []
for i in fh.read().split('\n'):
    line_list.append(i.split())
line_list.pop()
fh.close()

search_dic = {line_list[i][0]: {line_list[0][j]: line_list[i][j]  for j in range(1, len(line_list[i]))} for i in range(1, len(line_list))}

subject = input('查詢項目: ')
subject = subject[:1].upper() + subject[1:].lower()
name = input('姓名: ')
name = name[:1].upper() + name[1:].lower()
try:
    print(f'{name} {subject} {search_dic[name][subject]}')
except:
    exit()
