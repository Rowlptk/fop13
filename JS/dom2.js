// parent/children/siblings
let val;

const list = document.querySelector('ul');
const listItem = document.querySelector('li:first-child');

val = list.children[4].children[0];

val = listItem.parentElement.parentElement;

val = listItem.nextElementSibling.nextElementSibling.nextElementSibling.previousElementSibling;



// Create Element
{/* <li class="collection-item">
    item-6
    <a href="#" class="delete-item secondary-content">
        <i class="fa fa-remove"></i>
    </a>
</li> */}

// create element
const li = document.createElement('li');

// add class
li.className = 'collection-item';

// add id
li.id = 'new-item';

// add attribute
li.setAttribute('title', 'Item No 6');

// create text
const text = document.createTextNode('item-6');

// append
li.appendChild(text);

// create link
const link = document.createElement('a');

// add class to link
link.className = 'delete-item secondary-content';

// add href to link
link.setAttribute('href', '#');

// add html to link
link.innerHTML = '<i class="fa fa-remove"></i>';

// append link to li
li.appendChild(link);

// add li to ul in html file
document.querySelector('ul').appendChild(li);


document.querySelector('li:last-child').remove();

// document.querySelector('.card').remove();

// console.log(link);
console.log(val);