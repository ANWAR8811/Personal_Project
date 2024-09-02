const p = {
  n: "rana",
  a: 55,
  d: new Date(),
  m: function () {
    return 30;
  },
  get hudai() {
    return this.n + " " + this.a;
  },
  s: "",
  set lang(l) {
    this.s = l;
  },
};

const pA = Object.values(p);
// console.log(pA);

// for (let x of pA) {
//   console.log(x);
// }

// console.log(JSON.stringify(p));

p.m = p.m.toString();

// console.log(JSON.stringify(p));

// console.log(p.hudai);
// console.log(p.m());  // it shows error coz it says m is not a function

p.lang = "kolom";
// console.log(p.s);

Object.defineProperty(p, "jnina", {
  get: function () {
    return "kisu akta dilam";
  },
});

console.log(p.jnina);
