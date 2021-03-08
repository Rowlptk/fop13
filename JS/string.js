const firstName = 'William';
const lastName = 'Johnson';
const age = 36;
const str = 'Hello there my name is Brad';

let val;

// concatenation
val = firstName + lastName;
val = firstName + "\n" + lastName;

// Append
val = 'Brad';
// val = val + " Traversy";
val += ' Traversy';

// Length
val = str.length;
val = firstName.length;

// lower and upper
val = firstName.toLowerCase();
val = firstName.toUpperCase();

val = firstName[5];

// indexOf()

let myStr = "Hello There this is a javaScript Class";
val = myStr.indexOf('isq');

// slice()
val = myStr.slice(-4);

// Split()
val = myStr.split(" ")

// replace()
myStr1 = "Hello there my name is brad, brad Brad, BRAD, bRAd"
val = myStr1.replace(/brad/gi, 'sushil');

console.log(val);