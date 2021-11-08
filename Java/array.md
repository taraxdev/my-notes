<h2> Print basic array </h2>


```java
import java.util.*;
class array2d{
  public static void main(String [] args){
  
    int[] arr={1,2,3,4,5};
    
    for(int i=0;i<arr.length;i++){
      System.out.println(arr[i]);
    }
  }
}
```

<img src = "https://github.com/taraxdev/my-notes/blob/master/Java/assets/array1.png" width="700">

<h2>Array with user input (size and element)</h2>

```java
import java.util.*;
class array2d{
  public static void main(String [] args){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the size of array: ");
    int n = sc.nextInt();
    int[] arr = new int[n];


    for(int i=0; i< arr.length; i++){
      arr[i] = sc.nextInt();
    }
    for(int i=0; i<arr.length; i++){
      System.out.println(arr[i]);
    }
  }
}
```
