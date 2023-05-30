const slideshowElements = document.querySelectorAll(".slideshow-element");
console.log(slideshowElements);

let countElements = 1;

setInterval(() => {
  countElements++;
  let currentSlide = document.querySelector(".current");

  currentSlide.classList.remove("current");
  if (countElements > slideshowElements.length) {
    slideshowElements[0].classList.add("current");
    countElements = 1;
  } else {
    currentSlide.nextElementSibling.classList.add("current");
  }
}, 2000);
