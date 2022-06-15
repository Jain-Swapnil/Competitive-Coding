from collections import Counter
for i in range(int(input())):
    n = int(input())
    a =input()
    c=""
    ans=""
    count=0
    split_str = [a[i:i+2] for i in range(0, n, 2)]
    for j in range(0,len(split_str)):
        if(split_str[j]=='00'):
            ans=ans+'A'
        elif(split_str[j]=='01'):
            ans=ans+'T'
        elif(split_str[j]=='10'):
            ans=ans+'C'
        elif(split_str[j]=='11'):
            ans=ans+'G'
    print(ans)
   
        
    
    
 
