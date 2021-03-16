const taskInput = document.querySelector('#task');
const form = document.querySelector('#task-form');
const taskList = document.querySelector('.collection');
const clearBtn = document.querySelector('.clear-tasks');
const filter = document.querySelector('#filter');

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

// add task event
form.addEventListener('submit', addTask);
// remove task event
taskList.addEventListener('click', removeTask);
// clear task event
clearBtn.addEventListener('click', clearTask);
// filter task event
filter.addEventListener('keyup', filterTask);


// filter Task
function filterTask(e) {
    const text = e.target.value.toLowerCase();
    const li = document.querySelectorAll('.collection-item');
    li.forEach(function(task) {
        const item = task.firstChild.textContent.toLowerCase();
        if(item.indexOf(text) != -1) {
            task.style.display = 'block';
        } else {
            task.style.display = 'none';
        }
    })
}

// clear Task
function clearTask(e) {
    if(confirm('Are You Sure?')) {
        taskList.innerHTML = '';
    }
    e.preventDefault();
}


// Remove Task
function removeTask(e) {
    if(e.target.classList.contains('fa-remove')) {
        if(confirm('Are you Sure?')) {
            e.target.parentElement.parentElement.remove();
        }
    }
}


// Add Task
function addTask(e) {
    if(taskInput.value == ''){
        alert("Add a Task");
    }
    else {
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

    }
    taskInput.value = '';

    e.preventDefault();
}