const task1 = () => {
  return new Promise((resolve, reject) => {
    resolve("Task 1 is completed");
  });
};
const task2 = () => {
  return new Promise((resolve, reject) => {
    resolve("Task 2 is  completed");
    // reject('Task 2 is not completed');
  });
};
const task3 = () => {
  return new Promise((resolve, reject) => {
    setTimeout(() => resolve("Task 3 is completed. It might take time"), 2000);
  });
};
const task4 = () => {
  return new Promise((resolve, reject) => {
    // resolve('Task 4 is completed');
    reject("Task 4 is not completed");
  });
};

// async function callAll() {
const callAll = async () => {
  try {
    const t1 = await task1();
    console.log(t1);
    const t2 = await task2();
    console.log(t2);
    const t3 = await task3();
    console.log(t3);
    const t4 = await task4();
    console.log(t4);
  } catch (e) {
    console.error(e);
  }
};

callAll();
