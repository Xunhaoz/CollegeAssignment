"""
Practice 4
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
"""
fhr = open('test.txt', 'r')
fhw = open('ans-110502528.txt', 'w')
for i in fhr.read().split('\n'):
    statement, answer = i.split('=')
    fhw.write(str(bool(eval(statement) == int(answer)))[:1]+'\n')
fhr.close()
fhw.close()
