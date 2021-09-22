//Method --> function inside class
var user = {
    firstName : "Akshay",
    courseList: [],
    // method is used here
    buyCourse : function (courseName){
        this.courseList.push(courseName); //*this* refer to user
    },
    getCourseCount : function (){
        return `${this.firstName} has bought ${this.courseList.length} number of courses`; //*this* refer to user
    },
};
//method to be called in functionName()
console.log(user.getCourseCount()); 
user.buyCourse("React js");
// console.log(user.getCourseCount()); 
user.buyCourse("MERN");
console.log(user.getCourseCount()); 
console.log(user.courseList); 
