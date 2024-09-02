const searchInput = document.querySelector(".search");
const display = document.querySelector(".result");
const thanks = document.querySelector(".thanks");

// function show() {
//   console.log(this);
//   display.innerHTML = this.value;
//   setTimeout(function () {
//     thanks.innerHTML = `You have typed: ${this.value}`;
//   }, 1000);
// }

// searchInput.addEventListener("keyup", show);

searchInput.addEventListener("keyup", () => {
  display.innerHTML = this.value;
});
