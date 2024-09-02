const sentence =
  "JavaScript, a dynamic programming language, drives interactive web applications with \
  ease. It's pivotal for modern web development, enhancing UIs and enabling seamless API \
  communication. With event-driven and asynchronous features, it ensures responsive user \
  experiences. Supported by robust libraries like React and Angular, JavaScript \
  accelerates development and fuels innovation. As a cornerstone of client-side \
  scripting, it evolves alongside web technology, empowering developers to innovate \
  further.";

const matches = sentence.match(/with/gi);
// console.log(matches);

const occurrences = matches ? matches.length : 0;
// console.log(occurrences);

// const pos = sentence.search(/with/i);
// console.log(pos);

let pos = sentence.search(/withs/i);
pos = pos >= 0 ? pos : "not found";
// console.log(pos);

function linearSearch(a, v) {
  let length = a.length;
  for (let i = 0; i < length; i++) {
    if (a[i] === v) {
      return i;
    }
  }

  return "not found";
}

// console.log(linearSearch(["a", "b", "c"], "e"));

function longestString(strs) {
  let longestWord = "";

  for (st of strs) {
    if (st.length > longestWord.length) {
      longestWord = st;
    }
  }

  return [longestWord, strs.indexOf(longestWord)];
}

// console.log(longestString(["ami", "na", "Rana", "koi"]));

function fizzBuzz(number) {
  for (let i = 1; i <= number; i++) {
    if (i % 15 === 0) {
      console.log(`${i} is FizzBuzz`);
    } else if (i % 3 === 0) {
      console.log(`${i} is Fizz`);
    } else if (i % 5 === 0) {
      console.log(`${i} is Buzz`);
    }
  }
}

// fizzBuzz(100);

const mixedArray = [
  "a",
  false,
  "b",
  "",
  "c",
  undefined,
  true,
  "d",
  0,
  null,
  "e",
  "fizz",
  NaN,
];

// const trueArray = mixedArray.filter(function (element) {
//   if (element) {
//     return true;
//   } else {
//     return false;
//   }
// });

const trueArray = mixedArray.filter(Boolean);

// console.log(trueArray);

const mixedObject = {
  a: "ami",
  b: false,
  c: "b",
  d: "",
  e: "c",
  f: undefined,
  g: true,
  h: "d",
  i: 0,
  j: null,
  k: "e",
  l: "fizz",
  m: NaN,
};

const truelyObject = function (obj) {
  for (let i in obj) {
    if (!obj[i]) {
      delete obj[i];
    }
  }
  return obj;
};
console.log(truelyObject(mixedObject));
