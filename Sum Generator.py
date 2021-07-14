import random
import time

def  play():
    p = "y"
    while p == "y":
        mode = input("Input the mode: ")
        time1 = input("Input solving time: ")
        time1 = int(time1)

        #Addition
        if mode == "a":
            a1 = random.randint(0,250)
            a2 = random.randint(0,250)
            ans = a1 + a2
            print("Solve " + str(a1) + " + " + str(a2))
            timethen = time.perf_counter()
            ans2 = input()
            timeafter = time.perf_counter()
            if int(ans) == int(ans2):
                if timeafter - timethen < time1:
                    print("Well done you solved it.")
                else:
                    print("Sorry, you ran out of time")
            elif int(ans) != int(ans2):
                    print("Sorry, incorrect answer. The answer was "+str(ans))

        #Multiplication
        if mode == "m":
            a1 = random.randint(0,30)
            a2 = random.randint(0,30)
            ans = a1*a2
            print("Solve " + str(a1) + " x " + str(a2))
            timethen = time.perf_counter()
            ans2 = input()
            timeafter = time.perf_counter()
            if int(ans) == int(ans2):
                if timeafter - timethen < time1:
                    print("Well done you solved it.")
                else:
                    print("Sorry, you ran out of time")
            elif int(ans) != int(ans2):
                    print("Sorry, incorrect answer. The answer was "+str(ans))

        #Subtraction
        if mode == "s":
            a1 = random.randint(0,250)
            a2 = random.randint(0,250)
            ans = a1 - a2
            print("Solve " + str(a1) + " - " + str(a2))
            timethen = time.perf_counter()
            ans2 = input()
            timeafter = time.perf_counter()
            if int(ans) == int(ans2):
                if timeafter - timethen < time1:
                    print("Well done you solved it.")
                else:
                    print("Sorry, you ran out of time")
            elif int(ans) != int(ans2):
                    print("Sorry, incorrect answer. The answer was "+str(ans))

        #Division
        if mode == "d":
            a1 = random.randint(0,300)
            a2 = random.randint(0,60)*a1
            ans = a2 / a1
            print("Solve " + str(a2) + " ÷ " + str(a1))
            timethen = time.perf_counter()
            ans2 = input()
            timeafter = time.perf_counter()
            if int(ans) == int(ans2):
                if timeafter - timethen < time1:
                    print("Well done you solved it.")
                else:
                    print("Sorry, you ran out of time")
            elif int(ans) != int(ans2):
                    print("Sorry, incorrect answer. The answer was "+str(ans))
        p = input("Input 'y' to play again")
play()
