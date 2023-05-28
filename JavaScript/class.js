class Student {
    constructor(name, age) {
        this.name = name
        this.age = age
    }

    set sname(n) {
        this.name = n
    }
}

let s1 = new Student("Rana Ahamed", 104);
console.log(s1);

s1.sname = "Anwar"
console.log(s1);