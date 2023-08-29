import os,time
os.system("cls")
##time.sleep(2)

def cls():
    print('\n'*50)

def decToBin(n):
    if n==0:
        return ''
    else:
        return decToBin(n/2) + str(n%2)
def main():
    ##cls()
    
    val1=int(input("Enter 1st number: "))
    

    print("\n")

    print("The Result is : "+decToBin(val1))
    

main()

