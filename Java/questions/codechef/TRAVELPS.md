<h3> Travel Pass </h3>

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
		    while(t-->0){
		        int n = num.nextInt();
                int a = num.nextInt();
                int b = num.nextInt();
                String s = num.nextInt();

                int o = 0;
                int z = 0;
                for(int i = 0; i < n; i++){
                    if(s[i] == "0"){
                        z++;
                    }else{
                        o++;
                    }
                    System.out.println((o*a)+(z*b));
                }
		    }

		}catch(Exception e){
		    return;
		}
	}
}

```
