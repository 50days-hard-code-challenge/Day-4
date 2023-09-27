#count digits
def countDigits(n: int) -> int:
    c=0
    m=n
    while n>0:
        x=n%10
        if x!=0:
            if m%x==0:
                c=c+1 
        n=n//10

    return c
    pass
  n=int(input())  

#check palindrome
m=n
pal=0
while n>0:
    x=n%10
    pal=pal*10+x
    n=n//10
if(pal==m):
    print("true")
else:
    print("false")
