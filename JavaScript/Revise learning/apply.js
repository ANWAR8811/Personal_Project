// const person = {
//   fullName: function (city, coutry) {
//     return (
//       this.firstName + " " + this.lastName + ` lives in ${city}, ${coutry}`
//     );
//   },
// };
// const person1 = {
//   firstName: "John",
//   lastName: "Doe",
// };
// const person2 = {
//   firstName: "Mary",
//   lastName: "Doe",
// };

// // This will return "John Doe":
// console.log(person.fullName.apply(person2, ["dhaka", "bangladesh"]));

// console.log(Math.max(1, 3, 4, 2));

// console.log(Math.max.apply(null, [2, 3, 4, 5]));

"use strict";

function greet() {
  console.log("Hello, " + this.name);
}

const person = { name: "John" };

// Strict mode
greet.apply(person); // Outputs: "Hello, John"

// Non-strict mode
greet.apply("world"); // Outputs: "Hello, undefined" (uses the global object as 'this')
