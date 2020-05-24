#algorithm is ready 
x=int(input())

def binary(arr,x,l,r):
    if l>r:
        return -1
    elif l<=r:
        mid = int((l+r)/2)         
        if arr[mid]==x:
            return mid
        elif arr[mid]>x:
            return binary(arr,x,l,mid-1)
        elif arr[mid]<x:
            return binary(arr,x,mid+1,r)
    

arr=[1,2,3,5,63,74,86,156,463,957]
    
result = binary(arr,x,0,len(arr)-1)

if result!=-1:
    print("The element is at index" ,result)
    
else:
    print("The element is not present in the array")