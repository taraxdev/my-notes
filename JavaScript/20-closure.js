function sayhello(){
    var firstName = "sam";
    console.log("I am dam");

    function sayFirstName(){
        console.log(firstName);
    }
    return sayFirstName;
}

var value = sayhello();
value();

function addition(x){
    return function(y){
        return x+y;
    };
}

var add = addition(5);
console.log(add(15));

console.log(addition(5)(8)); //curring