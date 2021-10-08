<h1 align = "center">Two Sum</h1>

<h3> Brute Force Approch </h3>
    
```java
class Solution {
    public int[] twoSum(int[] nums, int target) 
    {
        for (int i=0; i< nums.length; i++)
        {
            for(int j=i+1; j< nums.length; j++ )
            {
                int temp = target - nums[i];
                if(comp == nums[j])
                {
                    return new int[] { i, j };
                }
            }
        }return new int[]{};
    }
}
```
    
    
 <h3> HashMap Approach </h3>

```java
class Solution {
    public int[] twoSum(int[] nums, int target) 
    {
        Map<Integer, Integer> num_map = new HashMap<>();
        
        for(int i = 0; i < nums.length; i++)
        {
            int complement = target - nums[i];
            
            if(num_map.containsKey(complement))
            {
                return new int[] {num_map.get(complement), i};
            }
            num_map.put(nums[i], i);
        }
        throw new IllegalArgumentException("no match found");
    }
}
```
