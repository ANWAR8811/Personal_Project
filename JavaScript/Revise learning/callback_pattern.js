const paymentSuccess = true;
const marks = 90;

function enroll(callback) {
  console.log("Course enrollment is in progress");

  setTimeout(function () {
    if (paymentSuccess) {
      callback();
    } else {
      console.log("Payment failed");
    }
  }, 2000);
}

function progress(callback) {
  console.log("Course on progress");

  setTimeout(function () {
    if (marks >= 80) {
      callback();
    } else {
      console.log("You have not got enough marks to get the certificate");
    }
  }, 3000);
}

function getCertificate(callback) {
  console.log("Preparing your certificate");

  setTimeout(function () {
    console.log("Congratulations you got the certificate");
  }, 1000);
}

// enroll(progress);
// progress(getCertificate);  // avabe call korle ultapalta vabe output ase
// getCertificate();

enroll(function () {
  progress(getCertificate);
});
