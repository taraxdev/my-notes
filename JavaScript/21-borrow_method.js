const user = {
    firstName: "Akshay",
    position: "admin",
    age: 22,
    getinfo: function(){
        console.log(`
        Hello, my name is ${this.firstName},
        I am currently working as a ${this.position}
        I am ${this.age} years old
        `)
    }
}
 /* getinfo;    --> reference to that method
    getinfo();  --> calling that method      */

user.getinfo();

const user2 = {
    firstName: "Ramesh",
    position: "Trainee",
    age: 20,
}

// user.getinfo.bind(user2)(); 
// var userr = user.getinfo.bind(user2);
// userr();

user.getinfo.call(user2);