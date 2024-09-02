const person = {
  fullName: function (city, coutry) {
    return (
      this.firstName + " " + this.lastName + ` lives in ${city}, ${coutry}`
    );
  },
};
const person1 = {
  firstName: "John",
  lastName: "Doe",
};
const person2 = {
  firstName: "Mary",
  lastName: "Doe",
};

// This will return "John Doe":
console.log(person.fullName.call(person2, "dhaka", "bangladesh"));
