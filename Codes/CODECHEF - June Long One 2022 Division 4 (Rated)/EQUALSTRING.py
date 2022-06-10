from collections import Counter
for i in range(int(input())):
    n = int(input())
    a = input()
    b = input()
    c=""
    count=0
    for i in range(0,n):
        if(a[i] != b[i]):
            count=count+1
            c=c+b[i]
    d=Counter(c)
    for i in d:
	    if(d[i]>1):
	        count=count-d[i]+1
    print(count)
