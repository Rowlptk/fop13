// Log to console

console.log("Hello World 2021!");

// let, const ==> var

// string
let greetings = "Hello";
console.log(greetings);
console.log(typeof(greetings));

// Number
greetings = 8.987;
console.log(greetings);
console.log(typeof(greetings));

// boolean
greetings = true;
console.log(greetings);
console.log(typeof(greetings));

// undefined
let greet;
console.log(greet);
console.log(typeof(greet));

// object ==> {}
greet = null;
console.log(greet);
console.log(typeof(greet));

// derived
// Array
greet = [1, 2.3, 'hello', true, null, undefined];
console.log(greet);
console.log(typeof(greet));

// Object literals
let address = {country: 'Nepal', state: 'Three', city: 'Kathmandu', zipcode: 44600}
console.log(address);
console.log(typeof(address));

let x = 4;
console.log(x);
x = 'apple';
console.log(x)

const y = 5;
console.log(y);
//y = 8;
console.log(y);

// typecasting
// string to Number
let val1 = '5';
let val2 = '6';
val1 = Number(val1);
val2 = Number(val2);
let val = val1 + val2;
console.log(val);


val = Number(true);
val = Number(false);
val = Number(null);
val = Number('hello');
// NaN ==> Number a Number
val = Number('5.5');
val = Number('5 5');


val = String(5);
console.log(typeof(val));

let sum1 = '5' + 6 + 7;
let sum2 = 5 + 6 + '7';

console.log(sum1, sum2);

console.log(val);

// Math object
const num1 = 100;
const num2 = 50;

let res;

// Simple math with numbers
res = num1 + num2;
res = num1 - num2;
res = num1 * num2;
res = num1 % num2;
res = 2 ** 4;
console.log(res);

// Math object
res = Math.PI;
res = Math.E;
res = Math.round(2.5);
res = Math.ceil(2.001);
res = Math.floor(2.99);
res = Math.sqrt(64);
res = Math.random();

res = Math.ceil(Math.random()*6);

// 1 to 6
// 0.0001*6==>0.0006==>1
// 0.9999*6==>5.9999==>6

// 0 to <1
console.log(res);


// floor==> 2, ceil ==> 3
/*
Math = {
    PI: 3.1415
}
*/




