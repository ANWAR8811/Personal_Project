const obj = {
  ami: "ami",
  tmi: function () {
    return this.ami + " Vat khai";
  },
  ki: function () {
    return this.tmi() + " vlo na";
  },
};

// console.log(obj.ami);
// console.log(obj["ami"]);
// console.log(obj.tmi);
console.log(obj.tmi());
console.log(obj.ki());
