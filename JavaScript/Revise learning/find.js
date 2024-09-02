// Array.prototype.find() --> doesn't change the main array

var numbers = [1, 2, 3, 4, 5, 6, 7, 8];

// var result = numbers.find(function (currentValue) {
//   return currentValue > 5;
// });

// console.log(result);

var numbers = [1, 2, 3, 4, 5, 6, 7, 8];

var result = numbers.find(function (currentValue, currentIndex, arr) {
  if (currentValue > 5) {
    console.log("Current Index: ", currentIndex); // Print currentIndex
    console.log("Given array: ", arr); // Print array
    return true; // Return true if the condition is met
  }
});

console.log(result); // Print the first element that satisfies the condition
