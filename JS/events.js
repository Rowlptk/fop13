let val = document.querySelector('.clear-tasks');

// val.addEventListener('click', function(e) {
//     console.log('I am Clicked!');
//     e.preventDefault();
// })



val.addEventListener('click', myFunction);


function myFunction(e) {
    console.log('I am Clicked!');
    console.log(e);
    console.log(e.type);
    console.log(e.target);
    console.log(e.target.id);

    e.preventDefault();
}

// click, dblclick, mouseup, mousedown, mouseover, mouseout,
// mousemove...
// keyup, keydown, keypress
// focus, blur, submit

const card = document.querySelector('.card');

card.addEventListener('mousemove', runEvent);


function runEvent(e) {
    document.body.style.backgroundColor = `rgb(${e.offsetX},${e.offsetY},120)`;
}


// event deligation


console.log(val);



// x = 3
// x += 2;

// x = x + 2


// let total = 0, count = 1

// while (count <=10) {
//     total += count;
//     count +=1;

// }
// console.log(total);


// 0+1+2+3+4+5+6+7+8+9+10 ==> 55

// total = 0+1=>1+2=> 3+3==> 6+4 ==> 10 +5==> 15 + 6 ==> 21 + 7 ==> 28+ 8 ==> 36 + 9 ==> 45 + 10 ==> 55
// count = 1+1 => 2 ==> 3==> 4 ==> 5 ==> 6 ==> 7 ==> 8 ==> 9 ==> 10 ==> 11
// 11<= 10














