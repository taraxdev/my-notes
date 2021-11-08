<h2>217. Contains Duplicate</h2> 

```java
import java.util.*;

class Solution {
    public boolean containsDuplicate(int[] nums) {
        try{
            Arrays.sort(nums);
            for(int i = 1; i < nums.length; i++){
                
                if(nums[i]==nums[i-1]){
                    
                    return true;
                }
        } return false;
        }catch(Exception e){
            return false;
        }
        
    }
}

```
