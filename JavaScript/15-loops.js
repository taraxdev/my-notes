//for loop
var state = ["Kashmir", "Pubjab", 1999, "Delhi", "Mumbai", "Goa"];
for(i=0;i<state.length;i++){
    if (typeof state[i] !== "string") break;
    console.log(state[i]);
}

//for each
console.log("\nline number 11");
var myState = ["Kashmir", "Pubjab", 1999, "Delhi", "Mumbai", "Goa"];
myState.forEach((s) => (console.log(s)));

//for of
console.log("\nline number 18");
const service = ["youtube", "facebook", "netflix", "instagram"];
for(const n of service){
    console.log(n);
}

//for in --> used to call inside a object
console.log("\nline number 28");
const social = {
    yt: "youtube",
    fb: "facebook",
    ig: "instagram",
};
for(const n in social){
    console.log(`key: ${n}, fullform: ${social[n]}`);
}