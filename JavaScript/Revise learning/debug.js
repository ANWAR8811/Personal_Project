class Person {
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }

  play(status) {
    console.log(`${this.name} aged ${this.age} is playing ${status}`);
  }
}

const p1 = new Person("Rana");
p1.play("horrible");
