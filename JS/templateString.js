const name1 = "John";
const age = 22;
const job = 'Web Developer';
const city = 'Kathmandu';

let html;
// traditional way
html = '<ul><li>Name : ' + name1 + '</li><li>Age : ' + age + '</li><li>Job : ' + job + '</li><li>City : ' + city + '</li></ul>';

// template string
html = `
        <ul>
        <li>name : ${name1}</li>
        <li>age : ${age}</li>
        <li>job: ${job}</li>
        <li>city: ${city}</li>
        <li>${23+45}</li>
        <li>${age > 30? 'Over 30' : 'Under 30'}</li>
        </ul>`

        

document.body.innerHTML = html;


// array, object, date
// DOM manipulation








