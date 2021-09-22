//Array Part 2
function isEven(element){
    if (element % 2 == 0){
        return true;
    }
    return false;
}
console.log("//line number 8// " + isEven(4));

//Arrow function
var isEven2 = (element) => {
    return element % 2 == 0;
}
console.log("//line number 13// " + isEven2(5));

//Callback 
var result = [2, 4, 6, 8].every(isEven);
console.log("//line number 18// " + result);

var result = [2, 3, 6, 8].every((e) => (e%2 == 0));
console.log("//line number 21// " + result);