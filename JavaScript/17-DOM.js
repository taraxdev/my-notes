//setTimeout(function, milliseconds) & setInterval(function, milliseconds)

var counter = document.querySelector(".counter");
var follower = document.querySelector(".followers");
/*
just for practice 
var counter = document.getElementById("a");
var follower = document.getElementById("b");
 */

let count = 1;
setInterval(() => {
    if(count < 1000){
        count++;
        counter.innerText= count;
    }
}, 1)

setTimeout(() => {
    follower.innerText = "You Won!";
},4000)