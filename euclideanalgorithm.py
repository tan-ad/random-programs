def gcdalg(a,b):
    a = abs(a)
    b = abs(b)
    while (a != 0 and b != 0):
        if a > b:
            a = a%b
        else:
            b = b%a
    return a + b

def gcdalgn(numberlist):
    gcd = numberlist[0]
    for i in range(1, len(numberlist)):
        gcd = gcdalg(gcd,numberlist[i])
    return gcd

vals= list(map(int, input("input with spaces between numbers: ").split(" "))))
print(gcdalgn(vals))