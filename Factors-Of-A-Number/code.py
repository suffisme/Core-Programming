import math  
  
def factors(n) : 
    flist = []  
    for i in range(1, int(math.sqrt(n) + 1)) : 
          
        if (n % i == 0) : 
            if (n / i == i) : 
                print (i, end=" ") 
            else : 
                print (i, end=" ") 
                flist.append(int(n / i))    
    for i in flist[::-1] : 
        print (i, end=" ") 

a=input() 
factors(a)
