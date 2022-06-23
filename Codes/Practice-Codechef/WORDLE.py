# cook your dish here
x=int(input())
y=0
while int(x)>y:
    
    s=input()
    t=input()
    ans=""
    if(len(s)==len(t)):
        for i in range(len(s)):
            if(s[i]==t[i]):
                ans=ans+"G"
              
            else:
                ans=ans+"B"
    print(ans)
    ans=""
              
    x=x-1
