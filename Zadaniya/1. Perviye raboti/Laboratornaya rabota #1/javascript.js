'use strict';

let x = Number(prompt("Введите x: "));
let y = +prompt("Введите y: ");

let numInExp = x / (2 * y) /// число для exp
let numInSqrt = Math.abs(Math.sin(Math.pow(y, 3))); /// число в корне

let numChisl = Math.exp(numInExp) + Math.sqrt(numInSqrt); /// числитель

let numZnam = 2.5 * Math.pow(Math.cos(x), 2); /// знаменатель

let numA = Math.pow(10, 4); /// первое число после d =

let answ = numA * (numChisl / numZnam);

alert("Ответ: " + answ.toFixed(3));