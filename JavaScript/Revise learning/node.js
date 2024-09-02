const p = document.createElement("p");
const n = document.createTextNode("Hudai kortesi");

p.appendChild(n);

e = document.getElementById("div1");

e.appendChild(p);

const p2 = document.getElementById("p2");

e.insertBefore(n, p2);

const p1 = document.getElementById("p1");

p1.remove();
