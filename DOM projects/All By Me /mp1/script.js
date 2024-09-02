let div = null;

window.onload = () => {
  main();
};

function main() {
  const root = document.getElementById("root");
  const change_btn = document.getElementById("change-btn");
  const copy_btn = document.getElementById("copy-btn");
  const inout = document.getElementById("inout");

  change_btn.addEventListener("click", () => {
    const color = generateHexColor();
    root.style.backgroundColor = color;

    inout.value = color;
  });

  //   copy_btn.addEventListener("click", () => {
  //     navigator.clipboard.writeText(inout.value);
  //   });

  copy_btn.addEventListener("click", () => {
    if (div !== null) {
      div.remove();
      div = null;
    }

    if (isValidHex(inout.value)) {
      navigator.clipboard.writeText(inout.value);
      generateToastMessage(`${inout.value} copied`);
    } else {
      alert("Invalid color code");
    }

    // my style
    /*navigator.clipboard.writeText(inout.value).then(() => {
      const originalText = copy_btn.innerText;
      copy_btn.innerText = "Color code copied";
      copy_btn.style.backgroundColor = "#fffaaa";

      generateToastMessage(`${inout.value}  copied`);

      setTimeout(() => {
        copy_btn.innerText = originalText;
        copy_btn.style.backgroundColor = "";
      }, 4000);
    });*/
  });

  inout.addEventListener("keyup", function (e) {
    const color = e.target.value;

    if (color && isValidHex(color)) {
      root.style.backgroundColor = color;
    }
  });
}

function generateHexColor() {
  const red = Math.floor(Math.random() * 255);
  const green = Math.floor(Math.random() * 255);
  const blue = Math.floor(Math.random() * 255);

  return `#${red.toString(16)}${green.toString(16)}${blue.toString(16)}`;
}

function generateToastMessage(msg) {
  div = document.createElement("div");
  div.innerText = msg;

  div.className = "toast-message toast-message-slide-in";

  div.addEventListener("click", () => {
    div.classList.remove("toast-message-slide-in");
    div.classList.add("toast-message-slide-out");

    div.addEventListener("animationend", () => {
      div.remove();
      div = null;
    });
  });

  //   div.addEventListener("click", function () {
  //     div.remove();
  //   });

  document.body.appendChild(div);

  //   setTimeout(() => {
  //     document.body.removeChild(div);
  //   }, 4000);
}

// function generateToastMessage(msg) {
//   const div = document.createElement("div");
//   div.innerText = msg;
//   div.style.position = "fixed";
//   div.style.bottom = "10px";
//   div.style.left = "50%";
//   div.style.transform = "translateX(-50%)";
//   div.style.backgroundColor = "rgba(0, 0, 0, 0.7)";
//   div.style.color = "white";
//   div.style.padding = "10px";
//   div.style.borderRadius = "5px";
//   div.style.boxShadow = "0 0 10px rgba(0, 0, 0, 0.5)";
//   div.style.zIndex = "1000";

//   document.body.appendChild(div);

//   setTimeout(() => {
//     document.body.removeChild(div); // Corrected method
//   }, 4000);
// }

/**
 *
 * @param {string} color
 */

function isValidHex(color) {
  if (color.length !== 7) return false;
  if (color[0] !== "#") return false;

  color = color.substring(1);
  return /^[0-9A-Fa-f]{6}$/i.test(color);
}
