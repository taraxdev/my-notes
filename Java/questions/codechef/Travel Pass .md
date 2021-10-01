<h1 align="cneter"> Travel Pass  </h1>
<h3>Problem Code: TRAVELPS</h3>

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
	        Scanner num = new Scanner(System.in);
		    int t = num.nextInt();
		    while(t-- >0){
		        int n = num.nextInt();
                	int a = num.nextInt();
                	int b = num.nextInt();
		
                	num.nextLine();
			String s = num.nextLine();
			char[] charArr = s.toCharArray();

			int o = 0; //countZero
			int z = 0; //countOne
			
			for(int i = 0; i < n; i++){
			    if(charArr[i]=='0') o++;
				else z++;
			    }
			    System.out.println(a*o+b*z);
			}
		    }
	            
	    catch(Exception e){
	        return;
	    }
	}
}
```
