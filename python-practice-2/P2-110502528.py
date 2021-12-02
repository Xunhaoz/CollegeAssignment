""""
Practice 2
Name: 張勛皓
Student Number: 110502528
Course: 2021-CE1003-A
"""

import random
flag = random.randint(1,100)
a = int(input("輸入一數字 : "))
time = 1
while a != flag:
    if flag > a:
        print(f"比 {a} 還要大")
    if flag < a:
        print(f"比 {a} 還要小")
    time = time+1
    a = int(input("輸入一數字 : "))

print(f"猜對了!總共猜了 {time} 次")
