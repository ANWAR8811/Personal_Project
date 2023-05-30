let totalAttempts = 5;
let attempts = 0;
let totalwins = 0;
let totalloss = 0;

// Finding elements

const form = document.querySelector("form");
const cardBody = document.querySelector(".card-body");
const guessingNumber = document.querySelector("#guessingNumber");
const checkButton = document.querySelector("#check");
const resultText = cardBody.querySelector(".resultText");
const lostWonMessage = document.createElement("p");
const remainingAttempts = cardBody.querySelector(".remainingAttempts");

form.addEventListener("submit", (e) => {
  e.preventDefault();
  //   console.log("submitted successfully");
  //   console.log(guessingNumber.value);

  attempts++;
  if (attempts === 5) {
    guessingNumber.disabled = true;
    checkButton.disabled = true;
  }
  if (attempts < 6) {
    let guessNum = Number(guessingNumber.value);
    checkResult(guessNum);
    remainingAttempts.innerHTML = `Remaining attempts: ${
      totalAttempts - attempts
    }`;
  }
  guessingNumber.value = "";
});

function checkResult(number) {
  //   console.log(number);
  let hudai = getRandomNumber(5);
  //   console.log(hudai);

  // if (guessingNumber === hudai) {
  if (number === hudai) {
    resultText.innerHTML = `You have won🥳.`;
    totalwins++;
  } else {
    resultText.innerHTML = `You have lost😑 Random number was ${hudai}.`;
    totalloss++;
  }
  lostWonMessage.innerHTML = `Won: ${totalwins}, Lost: ${totalloss}`;
  lostWonMessage.classList.add("large-text");
  //   lostWonMessage.classList.add("large-text", "center-text", "middle-align");

  cardBody.appendChild(lostWonMessage);
}

function getRandomNumber(limit) {
  let randomNumber = Math.floor(Math.random() * limit) + 1;
  return randomNumber;
}
