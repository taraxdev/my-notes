
<h2> Problem Code:RNGEODD </h2>

```java
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		try{
		    Scanner sc = new Scanner(System.in);
		    
		   // You're given two numbers L and R
		    int L = sc.nextInt();
		    int R = sc.nextInt();
		    
		    
		    for(int i = L; i<= R; i++){         // for loop for numbers between L and R
		        while(i%2!=0){                  // while loop to check number not divisible by 2
		            System.out.println(i);
		            i++;
		        }
		    }
		}catch(Exception e){
		    return;
		}
	}
}


```
