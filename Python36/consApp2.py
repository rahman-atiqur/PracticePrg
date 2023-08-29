# ---------------------------------------------------------
#               Author: Md Atiqur Rahman                   
# ---------------------------------------------------------

def cls():
    print('\n'*50)
      
def main():
    cls()
    
    #in-line anonymous functions
    get_bin=lambda x: format(x, 'b')

    mArg=int(input("Enter an input argument(number): "))
    cls()
        
    digits=0
    SdigVal=0
    aList=[]
    
    for i in range(0, mArg+1):              

        digVal=int(get_bin(i))      ##value of containing digits
        
        if digVal<mArg:             ##whether the value smaller than input argument
            SdigVal+=digVal
            aList.append(digVal)    ##adding digits to a list
        else:
            break

    # showing the outputs
    print('The input argument is : '+str(mArg))
    if len(aList)>1:
        print('\nContaining digits are : ')
        print(aList)
        print("\nSum of input arguments ="+str(SdigVal)) 
    else:
        print('\nContaining digit is : ')
        print(aList)     
        print("\nSum of input digits ="+str(SdigVal)) 
       
main()



    
