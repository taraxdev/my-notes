// function declaration are scanned and made available
tipper("20");
function tipper(a){
    var bill = parseInt(a);
    console.log(bill + 5);
}

var biggTipper = function (a){
    var bill = parseInt(a);
    console.log(bill + 15);
}
biggTipper("50");

// varible declaration are scanned and made undefined
console.log("//line number 15// " + name);
var name = "Akshay";

function sayName(){
    var name = "Ramesh";
    console.log("//line number 20// " + name);
}
sayName();

console.log("//line number 16// " + name);