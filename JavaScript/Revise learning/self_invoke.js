// (function () {
//   console.log("Self invoking function");    // IIFE
// })();

// const x = {
//   a: function () {
//     console.log(this);
//   },
// };

// x.a();

// Define a simple function
function greet(name) {
  console.log("Hello, " + name + "!");
}

// Example of invoking the function
greet("Alice"); // Invoking the function directly by using its name followed by parentheses

// Example of calling the function
const person = {
  name: "Bob",
};

greet.call(null, "Bob"); // Using the call method to call the function with a specific context and arguments
