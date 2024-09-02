let a = "Ami ar tmi vat khabo, tmi chaile na kheteo paro";

let result = a.search(/chaile/i);

console.log(result);

let rep = a.replace(/tmi/i, "tumi");

console.log(rep);

let repl = a.replace(/tmi/gi, "tumi");

console.log(repl);
