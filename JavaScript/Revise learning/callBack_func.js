// Asynchronous operation with a callback function
function fetchData(url, callback) {
  // Simulating asynchronous data fetching
  setTimeout(function () {
    const data = "Some data retrieved from " + url;
    callback(data); // Calling the callback function with the retrieved data
  }, 1000); // Simulating a delay of 1 second
}

// Callback function to handle retrieved data
function processData(data) {
  console.log("Processing data:", data);
}

// Using the fetchData function with a callback
fetchData("https://example.com/api/data", processData);

// function fetchData(url, callback) {
//   // Simulating asynchronous operation
//   setTimeout(function () {
//     // After some time, invoke the callback function with data
//     var data = { name: "John", age: 30 };
//     callback(data);
//   }, 1000); // Simulate a delay of 1 second
// }

// // Inline definition of callback function
// fetchData("example.com/api/data", function (data) {
//   console.log("Data received:", data);
// });

// function fetchData(url, callback) {
//   // Simulating asynchronous operation
//   setTimeout(function () {
//     // After some time, invoke the callback function with data
//     var data = { name: "John", age: 30 };
//     callback(data);
//   }, 1000); // Simulate a delay of 1 second
// }

// // Definition of callback function
// function processReceivedData(data) {
//   console.log("Data received:", data);
// }

// // Pass the callback function as an argument
// fetchData("example.com/api/data", processReceivedData);
