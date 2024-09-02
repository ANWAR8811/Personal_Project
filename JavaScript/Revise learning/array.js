const fruits = ["mango", "banana", "orange", "lemon"];

fruits.splice(2, 0, "Napa", "Extra");

console.log(fruits);

fruits.splice(3, 2, "Injection", "Aropen");
console.log(fruits);

fruits.splice(4, 1);
console.log(fruits);
