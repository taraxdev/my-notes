// admin, tester, moderator, 
var user = "abc";

switch(user){
    case "admin":
    console.log("full permission alloted!");
    break;
    case "tester":
    console.log("only testing permission alloted!");
    break;
    case "moderator":
    console.log("moderation permission alloted!");
    break;
    default :
    console.log("Trial user only");
    break;
}
