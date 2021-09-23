#구구단 출력 문제 8번

def Problem06():
    colors = ["red", "green", "blue"]
    for x in colors:
        print(x)


def Problem07():

    a = int(input("a 정수를 입력해주세요 "))
    b = int(input("b 정수를 입력해주세요 "))
    sum = 0
    for x in range(a, b+1):
        sum += a
        a += 1
    print(sum)

def Problem08():
    number = int(input("출력할 구구단 번호를 입력하세요"))

    for x in range(1, 10):
        print(number, " x ", x, " = ", number*x)

#구구단 출력 문제 9번

def Problem09():
    for x in range(2, 10):
        print("====== [" + str(x) + "단] ======")
        for y in range(1, 10):
            print(x, "X", y, "=", x*y)
    print("====================")

#구구단 출력 문제 10번

def Problem10():
    for m in range(2, 10):
        for n in range(1, 10):  # 단 수가 안에 들어왔다.
            print(f'{n} x {m} = {n * m}', end='\t')
        print()

def add(a, b):
    result = a + b
    return result

    add_result = add(100, 200)
    print(add_result)