class Student {
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }

  test() {
    console.log("hello");
  }

  exampleFunction() {
    let array = [1, 2, 3];
    array.find(function () {
      this.test(); // Using 'this.test' as a callback function
    }, this);
  }
}

let student = new Student("sumit", 35);

student.exampleFunction(); // Calling exampleFunction method of Student instance
