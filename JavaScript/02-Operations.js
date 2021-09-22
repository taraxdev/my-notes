// D = (L-S)/L * 100

var discount;
var listPrice = 799;
var subPrice = 199;
discount = (listPrice - subPrice)/listPrice * 100;
console.log(Math.round(discount) + "% discount");