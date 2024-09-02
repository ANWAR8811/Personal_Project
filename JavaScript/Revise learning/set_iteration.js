// Create a Set
const letters = new Set(["a", "b", "c", "b"]);

const myIterator = letters.values();

let text = "";
for (let entry of myIterator) {
  text += entry;
}

// console.log(text);

// for (let x of letters) {
//   console.log(x);
// }

console.log(Object.entries(letters));
