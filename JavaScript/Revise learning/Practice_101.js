// function getRandomNumber(min, max) {
//   return Math.floor(Math.random() * (max - min + 1)) + min;
// }

// console.log(getRandomNumber(1, 6));

// const names = [
//   "Alice",
//   "Bob",
//   "Charlie",
//   "David",
//   "Ella",
//   "Frank",
//   "Grace",
//   "Hannah",
//   "Ian",
//   "Julia",
// ];

// console.log(names.sort());

const vowels = ["a", "e", "i", "o", "u", "A", "E", "I", "O", "U"];

function countVowels(sentence) {
  let count = 0;
  const letters = Array.from(sentence);

  letters.forEach(function (value) {
    if (vowels.includes(value)) {
      count += 1;
    }
  });

  return count;
}

console.log(countVowels("Napa extra is for fever"));
