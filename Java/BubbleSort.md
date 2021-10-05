<h1 align = "center"> Bubble Sort </h1>

<p align = "center"><img src = "https://i1.faceprep.in/fp/articles/img/71784_1580551129.png" width="500" ></p>


```java
import java.util.Arrays;

public class bubblesort {
    public static void main(String [] args){
        int[] arr = {5,9,1,2,4};
        bubble(arr);
        System.out.println(Arrays.toString(arr));
    }
    static void bubble(int[] arr){
        for(int i = 0; i < arr.length; i++){ // runs the steps n-1 times
            for (int j = 1; j < arr.length - i; j++){ // for each step max item comes last
                if(arr[j] < arr[j-1]){ // swap if item is smaller than previous item
                    //swap
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                }
            }
        }
    }
}

```
