const taskInput = document.querySelector('#task');
const form = document.querySelector('#task-form');
const taskList = document.querySelector('.collection');

// form.addEventListener('submit', viewData);

// function viewData(e) {
//     console.log(taskInput.value);
//     e.preventDefault();
// }

/* <li class="collection-item" title="item no 5">
                                item-5
                                <a href="#" class="delete-item secondary-content">
                                    <i class="fa fa-remove"></i>
                                </a>
                            </li> */


form.addEventListener('submit', addTask);

function addTask(e) {
    // create li
    const li = document.createElement('li');
    // add class to li
    li.className = 'collection-item';

    // create text
    const text = document.createTextNode(taskInput.value);

    // append text to li
    li.appendChild(text);

    // create link
    const link = document.createElement('a');
    // add href to link
    link.setAttribute('href', '#');
    // add class to link
    link.className = 'delete-item secondary-content';
    // add cross icon to link
    link.innerHTML = ' <i class="fa fa-remove"></i>';

    // append link to li
    li.appendChild(link);

    // append li to ul==> taskList
    taskList.appendChild(li);

    e.preventDefault();
}