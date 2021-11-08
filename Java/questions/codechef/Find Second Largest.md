<h2>Problem Code: SECLAR</h2>

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
		    int A = sc.nextInt();
		    int B = sc.nextInt();
		    int C = sc.nextInt();
		    
		    if (A>=B && A>=C){
		        if(B>=C){
		            System.out.println(B);
		        }else{
		            System.out.println(C);
		        }
		    }
        else if(B>=C){
		        if(A>=C){
		            System.out.println(A);
		        }else{
		            System.out.println(C);
		        }
		    }
        else{
		        if (A>=B){
		            System.out.println(A);
		        }else{
		            System.out.println(B);
		        }
		    }
		    
		}catch(Exception e){
		    return;
		}
	}
}


```
