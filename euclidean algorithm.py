def gcd(a,b):
    while (a != 0 and b != 0):
        if a > b:
            a = a%b
        else:
            b = b%a
    return a + b

def gcdn(numberlist):
    gcd = 0
    for i in range(len(numberlist)-1):
        a = numberlist[i]
        b = numberlist[i+1]
        while (a != 0 and b != 0):
            if a > b:
                a = a%b
            else:
                b = b%a
        gcd = a + b
    return gcd
        
    

print(gcd(int(input("a=")),int(input("b="))))
print(gcdn(list(map(int, input("input with spaces between numbers: ").split(" ")))))