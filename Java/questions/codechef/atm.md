<h1 align = "center"> ATM </h1>
<h4>Problem Code: HS08TEST</h4>

------------------------------------
```java
import java.util.Scanner;

public class atm {
    public static void main(String[] args) {
        float currentBal = 120;
        float widrawAmount;
        float bankCharge = 0.50f;

        Scanner s = new Scanner(System.in);
        System.out.print("Please enter the amount: ");
        widrawAmount = s.nextInt();

        if(widrawAmount % 5 == 0 && widrawAmount > 0.00 && widrawAmount < 2000){
            if (widrawAmount + bankCharge < currentBal){
                currentBal = currentBal - widrawAmount - bankCharge;
                System.out.print("Your Current Balance is: " + currentBal);
            }else {
                System.out.print("Sorry,Enter amount exceeds Current Balance, Please try again");
            }
        }else{
            System.out.print("cash machine only accepts the transaction in multiples of 5");
        }
    }
}

```
