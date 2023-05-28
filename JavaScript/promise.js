// const p1 = new Promise((resolve, reject) => {
//   let completedPromise = false;
//   if (completedPromise) {
//     resolve("Promsie completed");
//   } else {
//     reject(new Error("Promise not completed"));
//   }
// });

// const p2 = new Promise((resolve, reject) => {
//   resolve("Promise solved");
// });

// // console.log(p1)

// p1.then((res) => {
//   console.log(res);
// }).catch((err) => {
//   console.log(err);
// });

// p2.then((res) => {
//   console.log(res);
// });
// console.log("end");


// const p1 = new Promise((resolve, reject) => {
//   let completedPromise = true;
//   if (completedPromise) {
//     resolve("Promise completed");
//   } else {
//     reject(new Error("Promise not completed"));
//   }
// });

// const p2 = new Promise((resolve, reject) => {
//   resolve("Promise solved");
// });

// // p1.then((res) => {
// //   console.log(res);
// // }).catch((err) => {
// //   console.log(err);
// // });

// // p2.then((res) => {
// //   console.log(res);
// // });

// Promise.all([p1, p2]).then((res => {
//   console.log(res)
// }))
// console.log("end");


const p1 = new Promise((resolve, reject) => {
  setTimeout(() => resolve("Promise 1 completed"), 2000)
});

const p2 = new Promise((resolve, reject) => {
  setTimeout(() => resolve("Promise 2 completed"), 1000)
});

// p1.then((res) => {
//   console.log(res);
// }).catch((err) => {
//   console.log(err);
// });

// p2.then((res) => {
//   console.log(res);
// });

Promise.race([p1, p2]).then((res => {
  console.log(res)
}))
console.log("end");
