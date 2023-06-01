const p1ScoreDisplay = document.getElementById("p1Score");
const p2ScoreDisplay = document.getElementById("p2Score");
const wScoreDisplay = document.querySelector("p span");
const inputScore = document.getElementById("inputScore");
const p1Btn = document.getElementById("p1Btn");
const p2Btn = document.getElementById("p2Btn");
const resetBtn = document.getElementById("resetBtn");
// const color = document.querySelector(".winner");

let p1Score = 0;
let p2Score = 0;
let winningScore = 5;
gameOver = false;

p1Btn.addEventListener("click", () => {
  if (!gameOver) {
    // data change
    p1Score++;
    winner(p1Score, winningScore);
    // show changed data
    p1ScoreDisplay.textContent = p1Score;
  }
});

function winner(oldScore, winningScore) {
  if (oldScore === winningScore) {
    if (p1Score === winningScore) {
      p1ScoreDisplay.classList.add("winner");
    } else {
      p2ScoreDisplay.classList.add("winner");
    }

    gameOver = true;
    console.log("Game over");
    p1Btn.setAttribute("disabled", "disabled");
    p2Btn.setAttribute("disabled", "disabled");
  }
}

p2Btn.addEventListener("click", () => {
  if (!gameOver) {
    // data change
    p2Score++;
    winner(p2Score, winningScore);
    // show changed data
    p2ScoreDisplay.textContent = p2Score;
  }
});

// function reset() {
//   let p1Score = 0;
//   let p2Score = 0;
//   // const winningScore = 5;
//   gameOver = false;

//   p1ScoreDisplay.textContent = 0;
//   p2ScoreDisplay.textContent = 0;

//   p1ScoreDisplay.classList.remove("winner");
//   p2ScoreDisplay.classList.remove("winner");

//   p1Btn.removeAttribute("disabled");
//   p2Btn.removeAttribute("disabled");
// }

function reset() {
  p1Score = 0; // Update the variables without using "let"
  p2Score = 0; // Update the variables without using "let"
  winningScore = 5;
  gameOver = false;

  p1ScoreDisplay.textContent = 0;
  p2ScoreDisplay.textContent = 0;

  p1ScoreDisplay.classList.remove("winner");
  p2ScoreDisplay.classList.remove("winner");

  p1Btn.removeAttribute("disabled");
  p2Btn.removeAttribute("disabled");
}

inputScore.addEventListener("change", () => {
  console.log(typeof inputScore.value);
  winningScore = Number(inputScore.value);
  wScoreDisplay.textContent = inputScore.value;
  inputScore.value = "";
  reset();
});

resetBtn.addEventListener("click", reset);
