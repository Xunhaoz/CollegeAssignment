"""
Assignment 7
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
"""


def g_forward(arr_seat):
    distant = 0
    temp = []
    for i in arr_seat:
        if i == '0':
            distant += 1
            temp.append(str(distant))
        elif i == '1':
            distant = 0
            temp.append(str(distant))
    return list(map(int, temp))


def g_back(arr_seat):
    distant = 0
    temp = []
    for i in arr_seat[::-1]:
        if i == '0':
            distant += 1
            temp.append(str(distant))
        elif i == '1':
            distant = 0
            temp.append(str(distant))
    temp.reverse()
    return list(map(int, temp))


fh = open("seat.txt", "r")
seat = fh.read()
fh.close()

forward = g_forward(seat)
back = g_back(seat)
max_pos = 0
max_person = []

for i in range(len(forward)):
    forward[i] = min(forward[i], back[i])
    if forward[i] > max_pos:
        max_pos = forward[i]
        max_person.clear()
        max_person.append(i)
    elif forward[i] == max_pos:
        max_person.append(i)

max_person = list(map(str, max_person))
print(f"L = {max_pos}, i = {', '.join(max_person)}" )