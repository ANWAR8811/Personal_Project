// function square(x) {
//     console.log(x * x);
// }

// function higherOrder(num, square) {
//     square(num);
// }

// higherOrder(3, square);

const taskOne = (callback) => {
  console.log("task1");
  callback();
};

const taskTwo = (callback) => {
  setTimeout(() => {
    console.log("task2, Data loading");
    callback();
  }, 4000);
};

const taskThree = (callback) => {
  console.log("task3");
  callback();
};
const taskFour = (callback) => {
  console.log("task4");
  callback();
};
const taskFive = (callback) => {
  console.log("task5");
  callback();
};

taskOne(() => {
  taskTwo(() => {
    taskThree(() => {
      taskFour(() => {
        taskFive(() => {
          console.log("task end");
        });
      });
    });
  });
});
