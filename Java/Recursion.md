<h1 align = "center"> Recursion </h1>
<p align = "center">
<img src = "https://github.com/taraxdev/my-notes/blob/master/Java/assets/recursion_1.jpg" width="500"> </br>
<img src = "https://github.com/taraxdev/my-notes/blob/master/Java/assets/recursion_2.jpg" width="500">

### Find the nth fibonacii number
```
public class notes{
  public static void main(String [] args){
    System.out.print(fibo(9));
  }
  static int fibo(int a){
    //base case
    if (a < 2){
      return (a);
    }
    //formula
    return fibo(a-1) + fibo(a-2);
  }
}
```

<p align = "center"><img src = "https://github.com/taraxdev/my-notes/blob/master/Java/assets/recursion_3.jpg" width="500"></p>

### Binary Search with Recursion

```
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

<p align = "center"><img src = "https://github.com/taraxdev/my-notes/blob/master/Java/assets/recursion_4.jpg" width="500"></p>
