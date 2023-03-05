// // using var keyword

// var first = "hello";
// console.log(first);

// first = "gsdf";
// console.log(first);

// // using let keyword

// let second = "hello";
// console.log(second);

// second = "gsdf";
// console.log(second);

// // using const keyword

// const third = "hello";
// console.log(third);

// third = "gsdf";
// console.log(third);


// // ================================================


// // Normal function

// function random(name) {
//     console.log(name);
// }
// random ("dalsdf");

// // Arrow function

// const random2 = (name) => {
//     console.log(name);
// }
// random("xcvb");

// ====================================================

// Classes and Inheritance

// class human {
//     constructor(){
//         this.gender = "male";
//     }
//     printMyGender(){
//         console.log(this.gender);
//     }
// }

// class person extends human{
//     constructor(){
//         super();
//         this.name = "falgun";
//     }

//     printMyName(){
//         console.log(this.name);
//     }
// }

// const Person = new person();
// Person.printMyName();
// Person.printMyGender();


// ===================================================

// advanced Classes' Properties and Methods syntax

// class human {
//     gender = "male";
//     printMyGender = () => {
//         console.log(this.gender);
//     }
// }

// class person extends human{
//     name = "falgun";
    
//     printMyName = () => {
//         console.log(this.name);
//     }
// }

// const Person = new person();
// Person.printMyName();
// Person.printMyGender();


// ===================================================

// Spread Operator on arrays/variables and objects

// const numbers = [1, 2, 3];
// const newnumbers = [...numbers, 4];

// console.log(newnumbers);

// const person = {
//     name:"Max",
// }

// const newPerson =  {
//     ...person,
//     age:23,
// }

// console.log(newPerson);

// Rest Operstor

// const fun = (...args) => {
//     return args.filter(el => el === 1);
// }
// console.log(fun(1, 2, 3, 4));

// =================================================

// Destructuring Arrays and Objects

// const numbers = [1, 2, 3];
// [num1, , num3] = numbers;
// console.log(num1, num3);

// const {name} = person ={
//     name: "falgun",
//     age: 456,
// }

// console.log(name);

// ==================================================================

// Reference and primitive types

// const, var, let variables if assigned to another another 
// there value is just copied in new variable
// but when we does it in arrays and object the reference
// of the previous object or arrays is copied in new one
// and to add copy rather than of reference in new array or object
// we need to use spread operator

// let number = 1;
// let newnum = number;

// console.log(newnum);
// number = 2;
// console.log(newnum);

// let numbers = [1, 2, 3];
// let newnumber = numbers;

// console.log(newnumber);
// numbers = [1, 4];
// console.log(newnum);


// const person = {
//     name: 'MAx',
// }

// // const newPerson = person;
// const newPerson = {
//     ...person,
// }

// console.log(newPerson);
// person.name = 'dgdfs';
// console.log(newPerson);


// ========================================================
// Map funciton

// const numbers = [1, 2, 3];
// const doublenumbers = numbers.map((num) => {
//     return num * 2;
// });

// console.log(numbers);
// console.log(doublenumbers);


// ============================================================