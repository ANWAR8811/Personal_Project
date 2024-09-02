const obj = {
  ami: "nai",
  tmi: function () {
    console.log("Vat khai");
  },
};

console.log(obj.ami);
console.log(obj["ami"]);
console.log(obj.tmi);
console.log(obj.tmi());
