"""
Exam 1
Name: 張勛皓
Student Number: 110502528
Course 2021-CE1003-A
"""
while 1:
    try:
        N = int(input())
        W = int(input())
        H = int(input())
        T = int(input())
        F = int(input())
        S = input()

        for i in range(F):
            for k in range(T):
                for j in range(N * W):
                    print(S, end='')
                print()

            for j in range(H - 2 * T):
                for l in range(N):
                    for k in range(T):
                        print(S, end='')
                    for k in range(W - (2 * T)):
                        print(' ', end='')
                    for k in range(T):
                        print(S, end='')
                print()

            for k in range(T):
                for j in range(N * W):
                    print(S, end='')
                print()
    except ValueError:
        break
