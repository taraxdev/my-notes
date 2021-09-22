var name = "akshay";
console.log("//line number 3// " + name);

function sayName(){
    var name = "ramesh";
    console.log("//line number 6// " + name);
    sayNameTwo();

    function sayNameTwo(){
        console.log("//line number 10// " + name);
    }
}
sayName();