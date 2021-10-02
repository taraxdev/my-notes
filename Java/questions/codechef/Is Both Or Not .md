<h3>Problem Code:ISBOTH</h3>


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
		    int N = sc.nextInt();
      
		    //If N is divisible by 5 or 11 but not both then print "ONE"
		    if((N%5==0 && N%11!=0) || (N%5!=0 && N%11==0)){
		        System.out.println("ONE");
		    }
      
		    //If N is divisible by both 5 and 11 then print "BOTH"
		    else if(N%5==0 && N%11==0){
		        System.out.println("BOTH");
		    }
      
		    //If N is not divisible by 5 or 11 then print "NONE"
		    else if(N%5!=0 || N%11!=0){
		        System.out.println("NONE");
		    }
      
		}catch(Exception e){
		    return;
		}
	}
}


```
