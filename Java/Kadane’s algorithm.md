<h1 align = "center"> Kadane’s algorithm </h1>

> Kadane’s algorithm is an iterative dynamic programming algorithm in which we search for a maximum sum contiguous subarray within a one-dimensional numeric array.

<p align = "center"><img src = "https://lh3.googleusercontent.com/jRd7s5ZCzfv8kRoqPiOZkSBIy6nNdYPBXV2asMAg2XC4sSrPeLugkOrSEmQ_G8dBN9JDtWV2gfscilKeuHSYbthUlLZpx3GVjTK52JVEcuLGE6stg6H0IsrD9Mv_g5_lOT4EDlUw" width="500" ></p>

``` java
public class kadaneAlgo {
    public static void main(String[] args){
        int[] arr = {-2, -3, -4, -1, -2, -1, -5, -3};
        int ans = maxSumSubArray(arr);
        System.out.println("Maximum sum contiguous subarray is: " + ans);

    }

    static int maxSumSubArray(int[] a){
        int maxSum = 0;
        int currSum = 0;

        for (int i=0; i < a.length; i++){
            currSum = currSum + a[i];

            if (currSum > maxSum){
                maxSum = currSum;
            }
            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
    }
}
```
