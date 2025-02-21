const paymentSuccess = true;
const marks = 90;

function enroll() {
  console.log("Course enrollment is in progress");

  const promise = new Promise(function (resolve, reject) {
    setTimeout(function () {
      if (paymentSuccess) {
        resolve();
      } else {
        reject("Payment Failed");
      }
    }, 2000);
  });
  return promise;
}

function progress() {
  console.log("Course on progress...");

  const promise = new Promise(function (resolve, reject) {
    setTimeout(function () {
      if (marks >= 80) {
        resolve();
      } else {
        reject("You don't have enough marks to get the certificate");
      }
    }, 3000);
  });
  return promise;
}

function getCertificate() {
  console.log("Preparing your certificate...");

  const promise = Promise.resolve(
    "Your certificate is ready to be sent to the server"
  );

  //   const promise = new Promise(function (resolve) {
  //     setTimeout(function () {
  //       resolve("Your certificate is ready to be sent to the server");
  //     }, 1000);
  //   });
  return promise;
}

enroll()
  .then(progress)
  .then(getCertificate)
  .then(function (value) {
    console.log(value);
  })
  .catch(function (err) {
    console.log(err);
  });
