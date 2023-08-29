import os,time
os.system("cls")
##time.sleep(2)

def cls():
    print('\n'*50)
def add(num1,num2):
    return num1+num2
def substract(num1,num2):
    return num1-num2
def multiply(num1,num2):
    return num1*num2
def division(num1,num2):
    return num1/num2

def main():
    ##cls()
    
    val1=int(input("Enter 1st number: ")) 
    val2=int(input("enter 2nd number: "))
    operation=input("Enter the operation (+,-,*/): " )

    print("\n")

    if operation not in ("+-*/"):
        print("Invalid operation ("+operation+") had been entered!!")
        print("\nYou must enter + or - or * or /")
    else:
        
        if operation=='+':
            print("The Result is : "+str(add(val1,val2)))
        elif operation=="-":
            print("The Result is : "+str(substract(val1,val2)))
        elif operation=='*':
            print("The Result is : "+str(multiply(val1,val2)))
        elif operation=='/':
            print("The Result is : "+str(division(val1,val2),2))
        print('\nThanks for choosing python....')       
main()

