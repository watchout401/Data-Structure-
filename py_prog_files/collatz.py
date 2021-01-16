def Collatz(number): 
      
    
    while (number!= 1): 
        print(number ,end = " ") 
  
        
        if number& 1: 
            number= 3 * number+ 1
  
        
        else: 
            number= number // 2
  
    
    print(number) 
  

number = int(input("Enter a number "))
Collatz(number) 