// const task1 = () => {
//     return new Promise((resolve, reject) => {
//         resolve('Task 1 is  completed');
//     })
// }
// const task2 = () => {
//     return new Promise((resolve, reject) => {
//         resolve('Task 2 is  completed');
//     })
// }
// const task3 = () => {
//     return new Promise((resolve, reject) => {
//         resolve('Task 3 is  completed');
//     })
// }
// const task4 = () => {
//     return new Promise((resolve, reject) => {
//         resolve('Task 4 is  completed');
//     })
// }


// task1().then((res) => console.log(res))
// .then(task2).then((res) => console.log(res))
// .then(task3).then((res) => console.log(res))
// .then(task4).then((res) => console.log(res));



const task1 = () => {
    return new Promise((resolve, reject) => {
        resolve('Task 1 is completed');
    })
}
const task2 = () => {
    return new Promise((resolve, reject) => {
        // resolve('Task 2 is  completed');
        reject('Task 2 is not completed');
    })
}
const task3 = () => {
    return new Promise((resolve, reject) => {
        setTimeout(() => resolve('Task 3 is completed. It might take time'), 2000);
    })
}
const task4 = () => {
    return new Promise((resolve, reject) => {
        resolve('Task 4 is completed');
    })
}


task1().then((res) => console.log(res))
.then(task2).then((res) => console.log(res))
.then(task3).then((res) => console.log(res))
.then(task4).then((res) => console.log(res)).catch((err) => console.log(err));