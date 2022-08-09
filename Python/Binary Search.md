```python
def binarysearch(arr, target):
    left = 0
    right = len(arr)-1

    while(left<=right):
        mid = (left+right)//2

        if(arr[mid]==target):
            return mid
        elif(arr[mid]<target):
            left = mid+1
        else:
            right = mid-1
    return -1


arr = [2,4,5,6,7,8,15]
target = 70

result = binarysearch(arr, target)

if result != -1:
    print("element present %d" % result)
else:
    print("-1")



```
