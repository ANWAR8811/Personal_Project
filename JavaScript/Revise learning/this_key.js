// var javascript = {
//   name: "JavaScript",
//   libraries: ["React", "Angular", "Vue"],
//   printLibraries: function () {
//     var self = this;
//     this.libraries.forEach(function (a) {
//       //console.log(this);
//       console.log(`${self.name} loves ${a}`);
//     });
//   },
// };

// javascript.printLibraries();

var javascript = {
  name: "JavaScript",
  libraries: ["React", "Angular", "Vue"],
  printLibraries: function () {
    this.libraries.forEach((a) => console.log(`${this.name} loves ${a}`));
  },
};

javascript.printLibraries();
