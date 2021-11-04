```
 import java.util.*;
class pattern{
  public static void main(String [] args){
    // pattern1();
    // pattern2();
    // pattern3();
    // pattern4();
    // pattern5();
    pattern28();

  }

  static void pattern1(){
    // int n = 5;
    /*
      *
      * *
      * * *
      * * * *
      * * * * *
    */
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    for(int i=1;i<=n;i++){
      for(int j=0;j<i;j++){
        System.out.print("*");
      }
      System.out.println(" ");
    }
  }

  static void pattern2(){
    /*
      * * * * *
      * * * * *
      * * * * *
      * * * * *
      * * * * *
    */
    int n = 5;
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        System.out.print("* ");
      }
      System.out.println(" ");
    }
  }

  static void pattern3(){
    /*
      * * * * *
      * * * *
      * * *
      * *
      *
    */
    int n = 5;
    int r = 0;
    for(int i=1;i<=n ;i++){
      for(int j=0;j<n-r ;j++){
        System.out.print("* ");
      }
      r++;
      System.out.println(" ");
    }

  }

  static void pattern4(){
    /*
      1
      1 2
      1 2 3
      1 2 3 4
      1 2 3 4 5
    */

    int n = 5;
    for(int row=1;row<=n;row++){
      for(int col=1;col<=row;col++){
        System.out.print(col + " ");
      }

      System.out.println("");
    }
  }

  static void pattern5(){
    /*
      *
      * *
      * * *
      * * * *
      * * * * *
      * * * *
      * * *
      * *
      *
    */
    int n = 5;
    /*
    //Brute Force Approach
        for (int i=1; i<=n;i++){
          for(int j=0; j<i;j++){
            System.out.print("* ");
          }
            System.out.println("");
        }
        int r = 1;
        for(int i=0; i<n; i++){
          for(int j=0; j<n-r ; j++){
            System.out.print("* ");
          }
          r++;
          System.out.println("");
        }
    */

    for (int i=1; i<=2*n; i++){
      int totalcol = i > n ? 2*n - i : i ; //ternary
      for(int j=0; j< totalcol; j++){
        System.out.print("* ");
      }
        System.out.println();
    }

  }

  static void pattern28(){

  }
  /*
         *
        * *
       * * *
      * * * *
     * * * * *
      * * * *
       * * *
        * *
         *
  */

  int n = 5;
   for(int i=0; i< 2 * n; i++){
     int totalColInRow = i > n ? 2*n - i : i;

     int totalSpaces = n - totalColInRow;
     for(int i=0; i < totalSpaces; i++){
       System.out.print(" ");
     }

     for(int j=0; j<totalColInRow; j++){
       System.out.print("* ");
     }
     System.out.println();
   }

}


```
