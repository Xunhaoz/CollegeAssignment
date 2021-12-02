"""
Practice 5
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
"""


bin = input("NUM(BIN) : ")
while bin != '-1':
    # 檢查二進位
    check = False
    for i in bin:
        if i != '1' and i != '0':
            check = True

    if check:
        print("Not Binary Number !")
        print()
    else:
        tem = int(bin, base = 2)*16
        print(f"NUM(DEC) after X16 : {tem}")
        print(f"NUM(OCT) : {str(oct(tem)[2:])}")
        print()

    bin = input("NUM(BIN) : ")
