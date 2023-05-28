// var students = [
//   {
//     id: 1,
//     name: "John",
//     age: 20,
//   },
//   {
//     id: 2,
//     name: "Jane",
//     age: 30,
//   },
//   {
//     id: 3,
//     name: "Joe",
//     age: 40,
//   },
//   {
//     id: 4,
//     name: "Jim",
//     age: 50,
//   }
// ];

// // console.log(students);

// function getStudent() {
//     return students.filter(function(student) {
//         return student.age > 30;
//         });
// }

// console.log(getStudent())

// var students = [
//   {
//     id: 1,
//     name: "John",
//     age: 20,
//   },
//   {
//     id: 2,
//     name: "Jane",
//     age: 30,
//   },
//   {
//     id: 3,
//     name: "Joe",
//     age: 40,
//   },
//   {
//     id: 4,
//     name: "Jim",
//     age: 50,
//   },
// ];

// // console.log(students);

// function getStudent() {
//   return students
//     .filter(function (student) {
//       return student.age > 30;
//     })
//     .map(function (studentName) {
//       return studentName.name;
//     });
// }

// console.log(getStudent());

// Using arrow function 😴

// var students = [
//   {
//     id: 1,
//     name: "John",
//     age: 20,
//   },
//   {
//     id: 2,
//     name: "Jane",
//     age: 30,
//   },
//   {
//     id: 3,
//     name: "Joe",
//     age: 40,
//   },
//   {
//     id: 4,
//     name: "Jim",
//     age: 50,
//   },
// ];

// // console.log(students);

// // function getStudent1() {
// //   return students
// //     .filter(function (student) {
// //       return student.age > 30;
// //     })
// //     .map(function (studentName) {
// //       return studentName.name;
// //     });
// // }

// const getStudent2 = () => {
//     return students.filter((x) =>  x.age > 30).map((y) => y.name)
// }

// console.log(getStudent2());


var students = [
    {
      id: 1,
      name: "John",
      age: 20,
    },
    {
      id: 2,
      name: "Jane",
      age: 30,
    },
    {
      id: 3,
      name: "Joe",
      age: 40,
    },
    {
      id: 4,
      name: "Jim",
      age: 50,
    },
  ];
  
  const getStudent2 = () => {
      return students.filter((x) =>  x.age > 30).map((y) => y.name)
  }
  
  console.log(getStudent2());
  