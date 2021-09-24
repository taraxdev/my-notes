<h2> Summary </h2>

- [Binary Search](https://github.com/taraxdev/my-notes/new/master#-binary-search-)
- [Time complexity](https://github.com/taraxdev/my-notes/new/master#-time-and-space-complexity-)
- [Binary Search with Recursion](https://github.com/taraxdev/my-notes/new/master#binary-search-with-recursion)

<h1 align = "center"> Binary Search </h1>

> Binary search is a 'divide and conquer' algorithm which requires the initial array to be sorted before searching.It works by repeatedly dividing in half the portion of the list that could contain the item, until you've narrowed down the possible locations to just one.

- Binary search is an efficient algorithm for finding an item from a sorted list of items.

<h2> Time and Space complexity </h2>

- The best-case time complexity → <b>O(1)</b> <i> when the central index would directly match the desired value.</i>
- The worst-case time complexity  → <b>O(log n)</b>. 

```java
public class binary {
  public static void main (String[] args){
		int arr[] = {-18, -12, -4, 0, 2, 3, 4, 15, 16, 18, 22, 45, 89};
		int target = 18;
		int ans = BinarySearch(arr, target);
    System.out.println(ans);
	}
	static int BinarySearch(int[] arr, int target ){
		int start = 0;
		int end = arr.length - 1;
	  
		while (start <= end){
			int mid = start + (end - start)/2;
	  
			if (target < arr[mid]){
				end = mid - 1;
			} else if (target > arr[mid]){
				start = mid + 1;
			}else{
				return mid;
			}
		}
		return -1;
	}
}
```

### [Binary Search with Recursion](https://github.com/taraxdev/my-notes/blob/master/Java/Recursion.md#binary-search-with-recursion)

```java
public class notes{
  public static void main(String [] args){
    int[] arr = {15,23,54,65,87};
    int target = 87;
    System.out.print(binary(arr,target, 0, arr.length - 1));
  }
  static int binary(int[] arr, int target, int start, int end){
    if (start > end){
      return -1;
    }
    int middle = start + (end - start)/2;

    if (arr[middle] == target){
      return middle;
    }
    if (arr[middle] < target){
      return binary(arr, target, middle + 1, end);
    }
    return binary(arr, target, start, middle - 1);
  }
}
```
