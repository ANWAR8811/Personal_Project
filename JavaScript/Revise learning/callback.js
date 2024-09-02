// function display(some) {
//   console.log(some);
// }

// function calculator(n1, n2, callback) {
//   let sum = n1 + n2;

//   if (callback) callback(sum);

//   return sum;
// }

// // const result = calculator(3, 5, display);
// const result = calculator(3, 5);
// console.log(result);

function calculator(n1, n2, callback) {
  let sum = n1 + n2;

  if (callback) callback(sum);

  return sum;
}

calculator(34, 5, function (result) {
  // it is an anonymous function
  console.log(result);
});
