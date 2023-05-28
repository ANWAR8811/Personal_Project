// localStorage.setItem("userName", "Rana Ahamed");
// localStorage.setItem("password", "ami vat khai 4322");

// const userNames = localStorage.getItem("userName");
// const userPassword = localStorage.getItem("password");
// console.log("userName: " + userNames, userPassword);

// localStorage.setItem("userName", "Anwar Hossain");
// localStorage.setItem("password", "ki jni vai k3212");

// localStorage.removeItem("userName");
// localStorage.removeItem("password");

// const countries = ["austria", "canada", "japanese", "malaysia"];
// localStorage.setItem("userName", JSON.stringify(countries));

// const countryList = JSON.parse(localStorage.getItem("userName"));
// console.log("countryList: " + countryList);

// localStorage.clear();

// const userNames = ["Rana", "Mar", "May", "Jun", "Jul"];
// sessionStorage.setItem("userName", JSON.stringify(userNames));

// const names = sessionStorage.getItem("userName");
// console.log("userNames: " + names);

// sessionStorage.clear();

// const user = { id: 101, name: "Rana", age: 22 };
// sessionStorage.setItem("userInformation", JSON.stringify(user));

// const userInfo = JSON.parse(sessionStorage.getItem("userInformation"));
// console.log("userInfo: ", userInfo);

// sessionStorage.clear();

document.cookie = "userName=Rana; expires=Sun, 28 May 2023 3:54:00 GMT";
console.log("document.cookie: ", document.cookie);
