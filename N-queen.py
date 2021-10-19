n=int(input("Enter the no.of Queens : "))
column = [0]*(n+1)

def queen(n):
    row = 1
    column[row] = 0
    count =0
    while(row!=0):
        while(True):
            column[row]+=1
            if(column[row]<=n and not place(row)):
                continue
            else:
                break
        if(column[row]<=n):
            if(row == n):
                count+=1
                print_sol(row,count)
            else:
                row+=1
                column[row] = 0
        else:
            row-=1
    print("Total no.of solutions : ",count)

def place(row):
    for i in range(1,row):
        if(column[i]==column[row] or abs(column[i]-column[row])==abs(i-row)):
            return False
    return True

def print_sol(n,count):
    print("Solution #",count,sep='')
    for i in range(1,n+1):
        for j in range(1,n+1):
            if(column[j]==i):
                print("Q  ",end="")
            else:
                print("*  ",end="")
        print()
        

queen(n)