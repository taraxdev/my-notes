// admin, tester, moderator, 

function getAuth (user, role){
    switch (role) {
        case "admin":
            return `${user} full permission alloted!`;
            // break; // not necessary
        case "tester":
            return `${user} only testing permission alloted!`;
            // break; // not necessary
        case "moderator":
            return `${user} moderation permission alloted!`;
            // break; // not necessary
    
        default:
            return `${user} is just a Trial user only`
            // break;
    }
}

console.log(getAuth("Akshay", "tester"));