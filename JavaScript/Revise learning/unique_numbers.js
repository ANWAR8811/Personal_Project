const numbers = [2, 3, 5, 2, 1, 7, 3, 6, 6, 5, 8, 4];

const duplicates = numbers.filter(function (value, index, array) {
  return array.indexOf(value) === index;
});

console.log(duplicates);
