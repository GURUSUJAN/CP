# cook your dish here
t=int(input())
for i in range(t):
    n=int(input())
    b=input()
    c=0
    for i in b:
        if i=='1':
            c=c+1
    c=c+(120-n)
    if(c>=(120*75/100)):
        print('YES')
    else:
        print('NO')
