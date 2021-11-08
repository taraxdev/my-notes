<h2>Find Largest number </h2>

```java

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		try{
		    Scanner sc = new Scanner(System.in);
		    int A = sc.nextInt();
		    int B = sc.nextInt();
		    int C = sc.nextInt();
		    
		    int temp,largest;
		    temp = A>B ? A:B;    // variable = Expression1 ? Expression: Expression3
                    /* 
                    
                    if(Expression1)
                    {
                        variable = Expression2;
                    }
                    else
                    {
                        variable = Expression3;
                    }
                    */
		    
		    largest = C>temp ? C:temp;
		    
		    System.out.println(largest);
		    
		}catch(Exception e){
		    return;
		}
	}
}


```
