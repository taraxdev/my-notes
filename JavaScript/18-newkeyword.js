var user = function (firstName, age) {
    this.firstName = firstName,
    this.age = age,
    this.getage = function(){
        console.log(`${this.firstName} is somewhere around ${this.age} years old`);
    };
};

var akshay = new user("akshay", 22);
console.log(akshay);
var vivek = new user("vivek", 25);
console.log(vivek);
