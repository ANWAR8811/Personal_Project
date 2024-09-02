function Person(fn, ln, a) {
  this.fn = fn;
  this.ln = ln;
  this.a = a;

  this.fullName = function () {
    return this.fn + " " + this.ln;
  };
}

const p1 = new Person("rana", "ahamed", 88);
const p2 = new Person("rna", "ahamed", 77);

// console.log(p1.fullName);

Person.prototype.country = "Bangladesh";

// console.log(p2.country);

// console.dir(Person);

const a = [1, 2, 3, 4, 5];

for (let x of a) {
  console.log(x);
}

// console.log(x);  // it will show error coz trying to access outside of the block scope
