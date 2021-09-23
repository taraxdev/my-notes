# <h1 align = "center"> HashMap </h1>
- doesn't have order
- HashMap is similar to HashTable, but it is unsynchronized.
<img src = "https://javatutorial.net/wp-content/uploads/2017/09/java-initialize-hashmap-1280x720.png" width="500">

```
import java.util.HashMap;
public class HashMapIntro {
    public static void main(String[] args){
        HashMap<String, Integer> happy = new HashMap<String, Integer>();
        happy.put("a", 10);
        happy.put("b", 22);
        happy.put("c", 35);
        System.out.print(happy);
    }
}
```
