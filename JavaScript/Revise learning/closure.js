// function temporary() {
//   let counter = 0;

//   return function () {
//     counter++;
//   };
// }

// const add = temporary();

// add();
// // console.log(add());
// add();

// console.dir(add);

function outerFunction() {
  let outerVariable = "I am from the outer function";

  function innerFunction() {
    console.log(outerVariable); // Accessing outerVariable from the outer scope
  }

  return innerFunction;
}

const closure = outerFunction(); // Returns the inner function

closure(); // Logs: "I am from the outer function"
