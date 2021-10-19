#Merge sort

def MergeSort(arr,low,high):
    if low<high:
       mid=(low+high)//2
       MergeSort(arr,low,mid)
       MergeSort(arr,mid+1,high)
       Merge(arr,low,mid,mid+1,high)

def Merge(arr,i1,j1,i2,j2):
    temp=[0]*10000
    i=i1
    j=i2
    k=0
    while(i<=j1 and j<=j2):
        if(arr[i]<arr[j]):
            temp[k]=arr[i];
            k+=1
            i+=1
        else:
            temp[k]=arr[j];
            k+=1
            j+=1
    while(i<=j1):
        temp[k]=arr[i];
        k+=1
        i+=1
    while(j<=j2):    
        temp[k]=arr[j];
        k+=1
        j+=1
    j=0
    for i in range(i1,j2+1):
        arr[i]=temp[j]
        j+=1

arr = list(map(int,input("Enter the elements(seperated by spaces): ").split(' ')))
MergeSort(arr,0,len(arr)-1)
print(f"The elements in sorted order: {arr}")