"""
Exam 2
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
"""
award = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
fh_num = open('num.txt', 'r')
num_list = list(fh_num.read().split('\n'))
fh_num.close()
fh_invoice = open('invoice.txt', 'r')
invoice_list = list(fh_invoice.read().split('\n'))
fh_invoice.close()


def check_award(x, correct):
    award_num = 0
    for i in range(len(x) - 1, -1, -1):
        if x[i] == correct[i]:
            award_num += 1
        else:
            break
    return award_num


counts = 0
for i in invoice_list:
    counts += 1
    if i == num_list[0]:
        award[0] += 1
    elif i == num_list[1]:
        award[1] += 1
    elif i[5:8] == num_list[2][5:8]:

        award[10 - check_award(i, num_list[2])] += 1
    elif i[5:8] == num_list[3][5:8]:

        award[10 - check_award(i, num_list[3])] += 1
    elif i[5:8] == num_list[4][5:8]:

        award[10 - check_award(i, num_list[4])] += 1
    elif i[5:8] == num_list[5]:
        award[7] += 1
    elif i[5:8] == num_list[6]:
        award[7] += 1
    elif i[5:8] == num_list[7]:
        award[7] += 1

for i in award:
    counts -= i
award[8] = counts
award[9] = 10000000 * award[0] + 2000000 * award[1] + 200000 * award[2] + 40000 * award[3] \
           + 10000 * award[4] + 4000 * award[5] + 1000 * award[6] + 200 * award[7]
print(f'特別獎 : {award[0]}' )
print(f'特獎 : {award[1]}')
print(f'頭獎 : {award[2]}')
print(f'二獎 : {award[3]}')
print(f'三獎 : {award[4]}')
print(f'四獎 : {award[5]}')
print(f'五獎 : {award[6]}')
print(f'六獎 : {award[7]}')
print(f'沒中獎 : {award[8]}')
print(award[9])


