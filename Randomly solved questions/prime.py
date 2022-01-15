def prime(n):
    count = 0
    for i in range(1,n): 
        if(n%i==0):     # do keep in mind that we cannot divide a number with 0.
            count += 1
    if(count>1):
        print n, " is Not Prime"
    else:
        print n, " is a Prime number"




for i in range(2,11):
    prime(i)
 

 print