<h3> Problem Code: AIRLINE </h3>

```java
import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	   try{
	       Scanner num = new Scanner(System.in);
	    int t = num.nextInt();

	    while(t-->0){
	        int a = num.nextInt();
    		int b = num.nextInt();
    		int c = num.nextInt();
    		int d = num.nextInt();
    		int e = num.nextInt();

    		if(a<=e || b<=e || c<=e){
                if(a+b <= d && c<=e)System.out.println("YES");
                else if(b+c<=d && a<=e)System.out.println("YES");
                else if(a+c<=d && b<=e)System.out.println("YES");
                else System.out.println("NO");
    		}
    		else{
    		    System.out.println("NO");    
	        }
	    }
	   }catch(Exception e){
	       return;
	   }
	}
}
```
