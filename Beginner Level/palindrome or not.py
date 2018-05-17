n=int(raw_input())
t=n
rev=0
while n>0:
    rem=n%10;
    rev=rev*10+rem
    n=n/10
print(rev)  
if (t == rev):
    print("yes")
else:
    print("no")
    
