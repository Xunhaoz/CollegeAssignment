"""
Assignment 4
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
"""

fh = open("score.txt", "r")
line_list = []
for i in fh.read().split('\n'):
    line_list.append(i.split())
fh.close()


for i in range(1, len(line_list)):
    sum = 0
    for j in range(1, len(line_list[i])):
        sum += int(line_list[i][j])

    line_list[i].append(sum/(len(line_list[i])-1))

fh = open('score_110502528.txt','w')
for i in range(0,len(line_list)):
    for j in line_list[i]:
        fh.write(str(j)+' ')
    fh.write('\n')
fh.close()