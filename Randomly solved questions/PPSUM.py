# This function will help me to get the sum 
# of the number passed from 0 to the number n.
def sum(n):
    add = 0
    while(n!=0):
        add = add + n
        n = n-1 
    return add


# Here i would be calling the sum function and get the repition of sum.
def add(n,d):
    add_sum = sum(n)
    i = 1
    while(i<(d-1)):
        add_sum = sum(add_sum)
        i += 1
    return add_sum


# Here i will be taking the input and store it in the array.
T = int(input(" Enter T here: "))
i = 0
take = [T]
while(i<T):
    n,d = int(input().split(' '))
    take[i][0] = n
    take[i][1] = d
    i += 1

# Here i will be calling the add function and get the output as desired.
i = 0
while(i<T):
    print(add(take[i][0],take[i][1]))






