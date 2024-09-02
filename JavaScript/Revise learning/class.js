class Car {
  constructor(brand) {
    this.carName = brand;
  }

  present() {
    return "I have a " + this.carName;
  }
}

class Model extends Car {
  constructor(brand, model) {
    super(brand);
    this.model = model;
  }

  show() {
    return this.present() + ", it is a " + this.model;
  }
}

let myCar = new Model("Ford", "Mustang");

console.log(myCar.show());

// class Car {
//   constructor(name, year) {
//     this.name = name;
//     this.year = year;
//   }

//   run() {
//     console.log(`${this.name} is running`);
//   }
// }

// const bmw = new Car("BMW", 2088);

// bmw.run();
