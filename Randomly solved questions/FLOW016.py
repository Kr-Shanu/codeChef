a, b = int(input("Enter two numbers here").split())
value = 1
if(b>a):
    b,a = a,b
# for i in range(b): ->  i donot want to take it in this way, i want to go from last to 1.
#     if(((i+1)%b == 0) and ((i+1)%a == 0)):
#         value = i+1
#         break
temp = b
while(temp>0):
    if(((temp)%b == 0) and ((temp)%a == 0)):
         value = temp
         break
    temp -= 1
    
print(value)




