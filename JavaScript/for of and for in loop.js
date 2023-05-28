// const names = ['s1', 's2', 's3']

// for (let name of names) {
//     console.log(name)
// }

// let student = {
//     name: 's1',
//     age: 18,
//     gender: 'male'
// }

// for (let x in student) {
//     console.log(x)
//     }

// var numbers = [10, 20, 30, 40];

// numbers.forEach(function(x) {           // Vul method likshilam 😐
//   console.log(x);
// });

// var numbers = [10, 20, 30, 40];

// numbers.forEach((x) => {
//   console.log(x);
// });

// var numbers = [10, 20, 30, 40];
// var squareNumbers = [];

// numbers.forEach((x) => {
//   squareNumbers.push(x * x);
// });

// var numbers = [10, 20, 30, 40];
// var squareNumbers = [];

// numbers.forEach((x) => {
//   squareNumbers.push(x * x);
// });

// console.log(squareNumbers); // Output: [100, 400, 900, 1600]


// var numbers = [10, 20, 30, 40];

// numbers.forEach((x, i, a) => {
//     a[i] = x +5
// });

// console.log(numbers);


// var numbers = [10, 20, 30, 40];
// var squareNumbers = numbers.map((x) => {
//   return (x * x);
// });

// console.log(squareNumbers);

var numbers = [10, 20, 3, 65, 2, 30, 40];
var filtered = numbers.filter((x) => {
  return (x > 10);
});

console.log(filtered);