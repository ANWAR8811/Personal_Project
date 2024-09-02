const points = [40, 100, 1, 25, 4, 44, 3, 50];

points.sort(function (a, b) {
  return a - b;
});

console.log("Ascending order:", points);

points.sort(function (a, b) {
  return b - a;
});

console.log("Descending order:", points);

points.sort(function (a, b) {
  return 0.5 - Math.random();
});

console.log("Random order:", points);
