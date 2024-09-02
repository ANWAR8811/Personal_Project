/**
 * All bugs fixed here
 */

// Globals =================================================------------
let toastContainer = null;
let toastTimeout = null;
const defaultColor = {
  red: 221,
  green: 222,
  blue: 238,
};

// onload handlers =================================================------------
window.onload = () => {
  main();
  updateColorCodeToDom(defaultColor);
};

// main or boot function =================================================------------
function main() {
  // dom references =================================================------------
  const generateRandomColorBtn = document.getElementById(
    "generate-random-color"
  );

  const colorModeHexInp = document.getElementById("input-hex");

  const colorSliderRed = document.getElementById("color-slider-red");
  const colorSliderGreen = document.getElementById("color-slider-green");
  const colorSliderBlue = document.getElementById("color-slider-blue");

  const copyToClipboardBtn = document.getElementById("copy-to-clipboard");

  // event listeners =================================================------------
  generateRandomColorBtn.addEventListener(
    "click",
    handleGenerateRandomColorBtn
  );

  colorModeHexInp.addEventListener("keyup", handleColorModeHexInp);

  colorSliderRed.addEventListener(
    "change",
    handleColorSliders(colorSliderRed, colorSliderGreen, colorSliderBlue)
  );
  colorSliderGreen.addEventListener(
    "change",
    handleColorSliders(colorSliderRed, colorSliderGreen, colorSliderBlue)
  );
  colorSliderBlue.addEventListener(
    "change",
    handleColorSliders(colorSliderRed, colorSliderGreen, colorSliderBlue)
  );

  copyToClipboardBtn.addEventListener("click", handleCopyToClipboard);
}

// event handlers =================================================------------
function handleGenerateRandomColorBtn() {
  const color = generateColorDecimal();
  updateColorCodeToDom(color);
}

function handleColorModeHexInp(e) {
  const hexColor = e.target.value;

  if (hexColor.length > 6) {
    generateToastMessage(
      "Hexadecimal codes cannot exceed 6 characters",
      "error"
    );
    return;
  }

  if (hexColor) {
    this.value = hexColor.toUpperCase();
    if (isValidHex(hexColor)) {
      const color = hexToDecimalColors(hexColor);
      updateColorCodeToDom(color);
    }
  }
}

// ai function a jhamela ase --> ata bujhte hobe
// this is not actually a event handler
// inner return function is an event handler
function handleColorSliders(colorSliderRed, colorSliderGreen, colorSliderBlue) {
  return function () {
    const color = {
      red: parseInt(colorSliderRed.value),
      green: parseInt(colorSliderGreen.value),
      blue: parseInt(colorSliderBlue.value),
    };

    updateColorCodeToDom(color);
  };
}

function handleCopyToClipboard() {
  const colorModeRadios = document.getElementsByName("color-mode");

  const mode = getCheckedValueFromRadios(colorModeRadios);

  if (mode === null) {
    throw new Error("Invalid radio input");
  }

  if (toastContainer !== null) {
    toastContainer.remove();
    toastContainer = null;
  }

  if (mode === "hex") {
    const hexColor = document.getElementById("input-hex").value;

    if (hexColor && isValidHex(hexColor)) {
      navigator.clipboard.writeText(`#${hexColor}`);
      generateToastMessage(`#${hexColor} copied successfully`, "success");
    } else {
      alert("Invalid hex input");
    }
  } else {
    const rgbColor = document.getElementById("input-rgb").value;
    if (rgbColor) {
      navigator.clipboard.writeText(rgbColor);
      generateToastMessage(`${rgbColor} copied successfully`, "success");
    } else {
      alert("Invalid rgb input");
    }
  }
}

// dom functions =================================================------------

/**
 * generate a dynamic dom element to show the toast message
 * @param {string} msg
 * @param {string} type
 */
function generateToastMessage(msg, type) {
  if (toastContainer !== null) {
    toastContainer.remove();
    toastContainer = null;
    if (toastTimeout) {
      clearTimeout(toastTimeout);
    }
  }

  toastContainer = document.createElement("div");
  toastContainer.innerText = msg;
  toastContainer.className = `toast-message toast-message-slide-in ${
    type === "error" ? "toast-message-error" : ""
  }`;

  toastContainer.addEventListener("click", function () {
    toastContainer.classList.remove("toast-message-slide-in");
    toastContainer.classList.add("toast-message-slide-out");

    toastContainer.addEventListener("animationend", function () {
      toastContainer.remove();
      toastContainer = null;
    });
  });

  document.body.appendChild(toastContainer);

  // Set timeout to remove the toast message after 4 seconds
  toastTimeout = setTimeout(() => {
    if (toastContainer) {
      toastContainer.classList.remove("toast-message-slide-in");
      toastContainer.classList.add("toast-message-slide-out");

      toastContainer.addEventListener("animationend", function () {
        toastContainer.remove();
        toastContainer = null;
      });
    }
  }, 4000); // 4 seconds
}

/**
 * find the checked element from a list radio buttons
 * @param {Array} nodes
 * @returns {string | null}
 */
function getCheckedValueFromRadios(nodes) {
  let checkedValue = null;

  for (let i = 0; i < nodes.length; i++) {
    if (nodes[i].checked) {
      checkedValue = nodes[i].value;
      break;
    }
  }
  return checkedValue;
}

/**
 * update dom elements with calculated color values
 * @param {object} color
 */
function updateColorCodeToDom(color) {
  const hexColor = generateHexColor(color);
  const rgbColor = generateRGBColor(color);

  document.getElementById(
    "color-display"
  ).style.backgroundColor = `#${hexColor}`;

  document.getElementById("input-hex").value = hexColor;
  document.getElementById("input-rgb").value = rgbColor;

  document.getElementById("color-slider-red").value = color.red;
  document.getElementById("color-slider-red-label").innerText = color.red;

  document.getElementById("color-slider-green").value = color.green;
  document.getElementById("color-slider-green-label").innerText = color.green;

  document.getElementById("color-slider-blue").value = color.blue;
  document.getElementById("color-slider-blue-label").innerText = color.blue;
}

// util functions =================================================------------

/**
 * generate and return an object of three color decimal values
 * @returns {object}
 */

function generateColorDecimal() {
  const red = Math.floor(Math.random() * 255);
  const green = Math.floor(Math.random() * 255);
  const blue = Math.floor(Math.random() * 255);

  return {
    red,
    green,
    blue,
  };
}

/**
 * take a color object of three decimal values then return a hexadecimal color codes
 * @param {object} color
 * @returns {string} hexadecimal color codes
 */
function generateHexColor({ red, green, blue }) {
  const getTwoCode = (value) => {
    const hex = value.toString(16);
    return hex.length === 1 ? `0${hex}` : hex;
  };

  return `${getTwoCode(red)}${getTwoCode(green)}${getTwoCode(
    blue
  )}`.toUpperCase();
}

/**
 * take a color object of three decimal values then return a rgb color codes
 * @param {object} color
 * @returns {string} rgb color codes
 */
function generateRGBColor({ red, green, blue }) {
  return `rgb(${red}, ${green}, ${blue})`;
}

/**
 * convert hex color to decimal color object
 * @param {string} hex
 * @returns {object} color
 */
function hexToDecimalColors(hex) {
  const red = parseInt(hex.slice(0, 2), 16);
  const green = parseInt(hex.slice(2, 4), 16);
  const blue = parseInt(hex.slice(4), 16);

  return {
    red,
    green,
    blue,
  };
}

/**
 * validate hex color code
 * @param {string} color
 * @returns {boolean}
 */
function isValidHex(color) {
  if (color.length !== 6) return false;
  return /^[0-9A-Fa-f]{6}$/i.test(color);
}
