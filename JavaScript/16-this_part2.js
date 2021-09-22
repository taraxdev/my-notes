//for all regular function call, this points to window object
console.log(this); // gives empty object in node
//gives global object at browser

var user = {
    firstName: "akshay",
    courseCount: 2,
    getCourseCount: function () {
        console.log("line 9", this); 
        function sayHello1(){
            console.log("Hello This");
            console.log("line 12", this);

        }
        sayHello1();
    }
    
};

user.getCourseCount(); // it doesn't count as a regular function call

function sayHello(){
    console.log("Hello World");
}

sayHello(); // count as a regular function call