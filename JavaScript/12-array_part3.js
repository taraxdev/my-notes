//fill in Array
var arr = [26,13,56,76,83,42,61,65];
console.log(arr.fill("app", 3 ,7));

//filter in array
const num = [24,45,65,76,84,43,65,56];
const ans = num.filter((e)=>(e%2==0));
console.log(ans);

//slice in array
var user = ["ak", "rohan", "abhi", "sam", "john", "greet"];
console.log(user.slice(1,3));

//splice in array
var users = ["ak", "rohan", "abhi", "sam", "john", "greet"];
users.splice(1, 3, "ok");
console.log(users);
