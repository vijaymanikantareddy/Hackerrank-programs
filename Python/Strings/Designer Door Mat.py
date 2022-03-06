a,b = input().split()
a = int(a)
b = int(b)
p = (b-3)//2
q = 1
m = (b-7)//2
for i in range(a):
    if i<(a//2):
        print('-'*p + '.|.'*q + '-'*p)
        p -= 3
        q += 2
    elif i==a//2:
        print(m*'-'+'WELCOME'+'-'*m)
        p+=3
        q-=2
    elif i>a//2:
        print('-'*p + '.|.'*q + '-'*p)
        p += 3
        q -= 2
