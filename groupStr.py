#Given an array of strings, group anagrams together.

def ana(str):
    dict={}
    for words in str:
        sortedword = ''.join(sorted(words))
        if sortedword not in dict:
            dict[sortedword] = [words]
        else:
            dict[sortedword].append(words)
    
    result = []
    for items in dict.values():
        result.append(items)
    
    print("The new grouped array is: ",result)
    
arr=[]
n=int(input("Enter the size of array: "))
print("Enter the strings: ",end=' ')
for i in range(n):
    arr.append(input())
ana(arr)