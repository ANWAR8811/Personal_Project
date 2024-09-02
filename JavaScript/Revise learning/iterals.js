const points = [40, 100, 1, 25, 4, 44, 3, 50];

// function twoTimes(value) {
//   return value * 2;
// }

// const newPoints = points.map(twoTimes);

// console.log(newPoints);

// function filterPoints(value) {
//   return value > 25;
// }

// const afterFilter = points.filter(filterPoints);
// console.log(afterFilter);

const nums = [4, 7, 1, 8, 5, 2];

function reducePoints(total, value) {
  console.log(total);
  console.log("--------------------------------");
  return total + value;
}

const afterReduce = nums.reduce(reducePoints);

console.log(afterReduce);
