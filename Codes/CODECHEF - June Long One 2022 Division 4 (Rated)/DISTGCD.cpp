import math 
for i in range(int(input())):
    n = 0
    l=list(map(int,input().split()))
    a=l[0]
    b=l[1]
    count=0
    n=abs(b-a)
    c=int(math.sqrt(n))
    for i in range(1,c+1):
        if(n%i==0):
            if(n/i==i):
                count=count+1
            else:
                count=count+2;
    print(count)
