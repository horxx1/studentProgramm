/// Variant 1
'use strict';

let x = Number(prompt("Введите первое число(x): "));
let y = +prompt("Введите второе число(y): ");
let c = +prompt("Введите третье число(c): ");
let d = +prompt("Введите четвёртое число(d): ");

let e;

if(x * y > 3) {
    let uslovie1 = Math.pow(x, 3);
    let dlyaUsloviya1 = Math.pow(Math.log10(x * y), c * d);

    if(uslovie1 < dlyaUsloviya1) {
        uslovie1 = dlyaUsloviya1;
    }
    e = uslovie1;
}

if (0 <= (x * y) <= 3) {
    let dlyaUsloviya2 = c * x;
    if(dlyaUsloviya2 < (d * y)) {
        dlyaUsloviya2 = d * y;
    }

    let uslovie2 = x;
    
    if(uslovie2 > y) {
        uslovie2 = y;
    }

    if(uslovie2 > dlyaUsloviya2) {
        uslovie2 = dlyaUsloviya2;
    }
    e = (3 * uslovie2);
}

if ((x * y) < 0) {
    let uslovie3 = Math.pow(2, (c * d)) - x;
    e = uslovie3;
}

alert("Ответ: " + e);