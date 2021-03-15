// Event Deligation

// if parent is clickable then its children elements are also clickable

const card = document.querySelector('.card');

card.addEventListener('click', deleteItem);

function deleteItem(e) {
    if(e.target.classList.contains('fa-remove')) {
        //console.log(e.target);
        e.target.parentElement.parentElement.remove();
    }
    e.preventDefault();
}

console.log(card);



