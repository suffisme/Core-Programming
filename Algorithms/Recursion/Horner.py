x = input("Enter the value of x : ")

print("Enter no of coefficients ! :")
n=int(input())
print("\n")
A=[]
print("Enter values starting from An\n")
for i in range(n):
    p=int(input())
    A.append(p)

def Horner(x,A):
	if len(A)==1:
	    return A[0]
	else:
	    return (Horner(x,A[0:n-1])*x + A[-1])


print(Horner(x,A))