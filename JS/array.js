const numbers = [43, 56, 33, 23, 44 , 36, 5];
const fruits = ['Apple', 'Banana', 'Orange', 'Pear'];
const mixed = [22, 'Hello', undefined, null, {a: 1, b: 1}, new Date()];

let val;

// Get Array length
val = numbers.length;

val = numbers[2];

console.log(val);

// numbers = [1, 2];

//mutating an array
// Adding value at the end
numbers.push(1000);
//Adding value to front
numbers.unshift(120);
// splice
 numbers.splice(3, 0, 900)
// end remove
numbers.pop();
// front remove
numbers.shift();
// splice
numbers.splice(2, 1);

console.log(numbers);

const person = {
    firstName: 'Steve',
    lastName: 'Smith',
    age: 36,
    email: 'steve@gmail.com',
    hobies: ['music', 'sports'],
    address: {
        city: 'Kathmandu',
        state: 'Three'
    },
    getBirthYear : function() {
        return 2021 - this.age;
    }
}

let student;

student = person;
student = person.firstName;
student = person['lastName'];
student = person.hobies[1];
student = person.address.city;
student = person.getBirthYear();

console.log(student);

// date Object
let today = new Date();
// let birthDay = new Date(1981, 0, 5, 12,45, 30, 122);

// ms
// 1970 jan 01 5: 30

//let birthDay = new Date(1630000000000)
//console.log(birthDay);

console.log(today.getFullYear());
console.log(today.getMonth() + 1);
console.log(today.getDate());
console.log(today.getDay() + 1);
console.log(today.getHours());
console.log(today.getMinutes());
console.log(today.getSeconds());
console.log(today.getMilliseconds());
console.log(today.getTime());


// digital clock
// countdown timer


// JS ==> Basics
// DOM ==> Document Object Model















