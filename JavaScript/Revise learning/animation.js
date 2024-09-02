function myMove() {
  const animate = document.getElementById("animate");
  let position = 0;

  const interval = setInterval(frame, 5);

  function frame() {
    if (position < 350) {
      position++;

      animate.style.top = position + "px";
      animate.style.left = position + "px";
    } else {
      clearInterval(interval);
    }
  }
}

// myMove();
