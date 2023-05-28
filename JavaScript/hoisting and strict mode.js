// x = 20
// console.log(x)
// var x

"use strict"

// function sum(x, y, ...z) {
//     console.log(`x = ${x}, y = ${y}, z = ${z}`)
// }

// sum(12,3,4,56,7,56,5,3)

// function add(x,y,z) {
//     return x + y + z;
// }

// let nums = [2,3,54,4]
// let addNums = add(...nums)
// console.log(addNums)

let p1 = {
    name: "John",
    age: 20
}

let p2 = {
    nationality: "Bangladesh",
    height: 180
}

let p = {...p1, ...p2}
console.log(p)