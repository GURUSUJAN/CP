t=int(input())
for i in range(t):
    arr_det=input().split(' ')
    arr=input().split(' ')
    l_odd,l_even=[],[]
    for j in range(int(arr_det[0])):
        if int(arr[j])%2==0:l_even.append(int(arr[j]))
        else:l_odd.append(int(arr[j]))
    if len(l_odd)==len(arr):print(0)
    else:
        if  int(arr_det[1])%2!=0:print(len(l_even)//2+len(l_even)%2)
        elif int(arr_det[1])%2==0 and len(l_odd)!=0:print(len(l_even))
        else:print(-1)
