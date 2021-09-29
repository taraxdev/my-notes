<h1>Summary</h1>

- [Bitwise](https://github.com/taraxdev/my-notes/blob/master/Java/Bitwise%20+%20Number%20System.md#-bitwise-)
  - [Operators](https://github.com/taraxdev/my-notes/blob/master/Java/Bitwise%20+%20Number%20System.md#-operators-)
    - [AND](https://github.com/taraxdev/my-notes/blob/master/Java/Bitwise%20+%20Number%20System.md#-and-)
    - [OR](https://github.com/taraxdev/my-notes/blob/master/Java/Bitwise%20+%20Number%20System.md#-or-)
    - [XOR](https://github.com/taraxdev/my-notes/blob/master/Java/Bitwise%20+%20Number%20System.md#-xor-)
    - [Complement](https://github.com/taraxdev/my-notes/blob/master/Java/Bitwise%20+%20Number%20System.md#-complement-)
    - [Left Shift Operator](https://github.com/taraxdev/my-notes/blob/master/Java/Bitwise%20+%20Number%20System.md#-left-shift-operator--)
    - [Right Shift Operator](https://github.com/taraxdev/my-notes/blob/master/Java/Bitwise%20+%20Number%20System.md#-right-shift-operator--)
- [Number System](https://github.com/taraxdev/my-notes/blob/master/Java/Bitwise%20+%20Number%20System.md#-number-system-)
  - [Decimal](https://github.com/taraxdev/my-notes/blob/master/Java/Bitwise%20+%20Number%20System.md#-decimal-)
  - [Binary](https://github.com/taraxdev/my-notes/blob/master/Java/Bitwise%20+%20Number%20System.md#-binary-)
  - [Octal](https://github.com/taraxdev/my-notes/blob/master/Java/Bitwise%20+%20Number%20System.md#-octal-)
  - [Hexadecimal](https://github.com/taraxdev/my-notes/blob/master/Java/Bitwise%20+%20Number%20System.md#-hexadecimal-)
- [Number System Conversion](https://github.com/taraxdev/my-notes/blob/master/Java/Bitwise%20+%20Number%20System.md#-number-system-conversion--)
  - [Decimal to base](https://github.com/taraxdev/my-notes/blob/master/Java/Bitwise%20+%20Number%20System.md#--1-decimal-to-base-b-)  
  - [Base to decimal](https://github.com/taraxdev/my-notes/blob/master/Java/Bitwise%20+%20Number%20System.md#-2-base-b-to-decimal-)
    
    
<h1 align = "center"> Bitwise </h1>

> Bitwise is a level of operations that involves working with individual bits, which are the smallest units of data in a computer. 

<h2 > Operators </h2>

<h4> AND </h4>

| a | b |a &b |
|---|:-:| -:  |
| 0 | 0 | 0   |
| 0 | 1 | 0   |
| 1 | 0 | 0   |
| 1 | 1 | 1   |

<h4> OR </h4>

| a | b |a OR b|
|---|:-:| ----:|
| 0 | 0 | 0    |
| 0 | 1 | 1    |
| 1 | 0 | 1    |
| 1 | 1 | 1    |

<h4> XOR (^)</h4>

| a | b |a ^ b|
|---|:-:| ---:|
| 0 | 0 | 0   |
| 0 | 1 | 1   |
| 1 | 0 | 1   |
| 1 | 1 | 0   |

<h4> Complement (~)</h4>

- a = 10110

<h4> Left Shift Operator (<<) </h4>
  
 Q) 1010 << 1 ==> 10100
 
  ```  a << 1 = 2a ``` <br>
  ```  a << b = a*2^b ``` 
  
<h4> Right Shift Operator (>>) </h4>

 Q) 0011001 >> 1 ==> 00100
 
  ``` a >> b = a/2^b ``` 

<h1 align = "center"> Number System </h1>

<h4> Decimal </h4>

``` 0, 1, 2, 3, 4, 5, 6, 7, 8, 9  ```

```Base: 10```


<h4> Binary </h4>

```0 & 1```

```Base: 2```


<h4> Octal </h4>

```0, 1, 2, 3, 4, 5, 6, 7```

``` Base: 8 ```


<!-- Eg : 0, 1, 2, 3, 4, 5, 6, 7, 10, 11, 12, 13, 14, 15, 16, 17, 20, 21, 22, 23, 24, 25, 26, 27 -->

<h4> Hexadecimal </h4>

```0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F```

```Base: 16```

--------------------------------------------------------------------------------------------------

<h3 align = "center"> Number System Conversion  </h3>

<h3>  1) Decimal to Base b </h3>

<b>Q) Convert (17)<sub>10</sub> to base 2 </b>

> Keep dividing by base, take remainders, write in opposite

```
  2|_ 17--  |remainder
  2|_ 8 ->  |1
  2|_ 4 ->  |0
  2|_ 2 ->  |0
   |_ 1
```

<h3> (1001) <sub>2</sub> = (17) <sub>10</sub> </h3>

<b>Q) Convert (17)<sub>10</sub> to base 8 </b>

```

  8|_ 17--  |remainder
  2|_ 2 ->  |1

```

<h3> (21) <sub>8</sub> = (17) <sub>10</sub> </h3>

####################################################################

<h3> 2) Base b to Decimal </h3>

> Multiply and add the power of base with digits.

<b>Q) Convert base (10001)sub>2</sub> to base 10 </b>

 <h3>= (1 * 2<sup>4</sup>) + (0 * 2<sup>3</sup>) + (0 * 2<sup>2</sup>) + (0 * 2<sup>1</sup>) + (1 * 2<sup>0 </sup>) </h3>
 <h3>= 16 + 0 + 0 + 0 + 1  => (17)<sub>10</sub> </h3>
 
 <b>Q) Convert base (21)sub>8</sub> to base 10 </b>

 <h3>= (2 * 8<sup>1</sup>) + (1 * 8<sup>0 </sup>) </h3>
 <h3>= 16 + 1  => (17)<sub>10</sub> </h3>
  
<h1 align = "center"> Questions </h1>
