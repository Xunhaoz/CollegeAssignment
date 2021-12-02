"""
Assignment 7
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
"""

record_list = []


def recursive(output, left, right):
    if left == 0 == right:
        record_list.append(output)
        return
    if left > 0:
        recursive(output + "(", left-1, right+1)
    if right > 0:
        recursive(output + ")", left, right-1)


fh = open("num.txt", "r")
num = eval(fh.read())
fh.close()

recursive('', num, 0)

fh = open("110502528.txt",'w')

if record_list[0]:
    print(f"{' '.join(record_list)}")
    fh.write(' '.join(record_list))
    fh.write("\n110502528 張勛皓")
else:
    print("none")
    fh.write("none")
    fh.write("\n110502528張勛皓")

fh.close()

