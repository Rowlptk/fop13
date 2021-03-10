let val;

val = document;
val = document.body;
val = document.URL;

// single element selector
// getElementById
val = document.getElementById('main');
// querySelector
val = document.querySelector('#task-title');
let task = document.querySelector('h5');

// change style
task.style.color = 'yellow';
task.style.backgroundColor = 'black';
task.style.padding = '5px';

// change content
task.textContent = 'X-Men';
task.innerHTML = '<span style="font-size:2em">X</span>-MEN';

val = document.querySelector('.card-title');
val = document.querySelector('h5');
val = document.querySelector('li');
val = document.querySelector('ul li');
val = document.querySelector('li:last-child');
val = document.querySelector('li:first-child');
val = document.querySelector('li:nth-child(3)');
val = document.querySelector('li:nth-child(even)');
val = document.querySelector('li:nth-child(odd)');

// background-color ==> backgroundColor

// multiple element selector
// class selector
val = document.getElementsByClassName('collection-item');
val[1].style.color = 'yellow';

// tag selector
val = document.getElementsByTagName('li');

// querySelectorAll
val = document.querySelectorAll('ul.collection li.collection-item:nth-child(odd)');

val.forEach(function(item, index) {
    item.style.backgroundColor = 'grey';
    item.textContent = `Namaste ${index}`;
})
            // 0       1       2
// val = item-1, item-3, item-5

// item ==> item-1 ==> grey ==> Namaste 0
// item ==> item-3 ==> grey ==> Namaste 1
// item ==> item-5 ==> grey ==> Namaste 2




console.log(val);