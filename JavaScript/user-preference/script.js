// Findings starts here
const selectFontSize = document.getElementById("selectFontSize");
const selectBgColor = document.getElementById("selectBgColor");
const resetButton = document.getElementById("resetButton");
const mainElement = document.querySelector("main");
// Findings ends here

const setValues = (fontS, bColor) => {
  selectFontSize.value = fontS;
  selectBgColor.value = bColor;

  mainElement.style.fontSize = fontS;
  mainElement.style.backgroundColor = bColor;
};

const intialSetup = () => {
  const bColor = localStorage.getItem("bgColor");
  const fontS = localStorage.getItem("fontSize");

  if (bColor && fontS) {
    setValues(fontS, bColor);
  }
  if (!bColor && !fontS) {
    setValues("16px", "aquamarine");
  }
  if (!bColor && fontS) {
    setValues(fontS, "aquamarine");
  }
  if (bColor && !fontS) {
    setValues("16px", bColor);
  }
};

const changeFontSize = (e) => {
  //   console.log(e.target.value);
  const selectedFontSize = e.target.value;
  mainElement.style.fontSize = selectedFontSize;
  localStorage.setItem("fontSize", selectedFontSize);
};
const changeBgColor = (e) => {
  //   console.log(e.target.value);
  const selectedBgColor = e.target.value;
  mainElement.style.backgroundColor = selectedBgColor;
  localStorage.setItem("bgColor", selectedBgColor);
};
const clearLocalStorage = (e) => {
  localStorage.removeItem("bgColor");
  localStorage.removeItem("fontSize");
  setValues("16px", "aquamarine");
};

// add event listener starts here
selectFontSize.addEventListener("change", changeFontSize);
selectBgColor.addEventListener("change", changeBgColor);
resetButton.addEventListener("click", clearLocalStorage);
// add event listener ends here

intialSetup();
