// Log to console
console.log("Hello World 2021!");

// let ,const ==> var

// string
let greetings = "Hello";
console.log(greetings);
console.log(typeof(greetings));

// Number
greetings = 9.987;
console.log(typeof(greetings));

// boolean
greetings = true;
console.log(typeof(greetings));

// undefined
let greet;
console.log(typeof(greet));

// object ==> {}
greet = null;
console.log(typeof(greet));

// derived
// Array
greet = [1, 2.3, "hello" , true, null, undefined];
console.log(greet[2]);
console.log(typeof(greet));

console.log(greet);

for(let i = 0; i < greet.length; i++) {
    console.log(typeof(greet[i]));
}

// Object literals

let address = {
    country: "Nepal",
    state: "Three",
    city: "Kathmandu",
    zipcode: 44600
}

console.log(address);
console.log(address.country);
console.log(address['country']);


const x = 3;
console.log(x);
x = 4;
// console.log(x);











