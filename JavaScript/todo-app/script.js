import { Todo } from "./class.js";

// finding all elements
const todoForm = document.querySelector(".todo-form");
const todoInput = document.querySelector("#inputTodo");
const todoLists = document.getElementById("lists");
const messageElement = document.getElementById("message");

// showMessages
const showMessage = (text, status) => {
  messageElement.textContent = text;
  messageElement.classList.add(`bg-${status}`);
  setTimeout(() => {
    messageElement.textContent = "";
    messageElement.classList.remove(`bg-${status}`);
  }, 2000);
};

// createTodo
const createTodo = (newTodo) => {
  const todoElement = document.createElement("li");
  todoElement.id = newTodo.todoId;
  todoElement.classList.add("li-style");
  todoElement.innerHTML = `
      <span> ${newTodo.todoValue} </span>
      <span> <button class="btn" id="deleteButton"> <i class="fa fa-trash"> </i> </button> </span>
    `;
  todoLists.appendChild(todoElement);

  const deleteButton = todoElement.querySelector("#deleteButton");
  deleteButton.addEventListener("click", deleteTodo);

  // Store todoId and todoValue in local storage
  const todoData = { todoId, todoValue };
  const todos = getTodoFromLocalStorage();
  todos.push(todoData);
  localStorage.setItem("mytodos", JSON.stringify(todos));
};

// deleteTodo
const deleteTodo = (event) => {
  const selectedTodo = event.target.parentElement.parentElement;
  todoLists.removeChild(selectedTodo);
  showMessage("Todo is deleted", "danger");

  const todos = getTodoFromLocalStorage();
  const updatedTodos = todos.filter((todo) => todo.todoId !== selectedTodo.id);
  localStorage.setItem("mytodos", JSON.stringify(updatedTodos));
};

// getTodoFromLocalStorage
const getTodoFromLocalStorage = () => {
  return localStorage.getItem("mytodos")
    ? JSON.parse(localStorage.getItem("mytodos"))
    : [];
};

// // addTodo
// const addTodo = (event) => {
//   event.preventDefault();
//   const todoValue = todoInput.value;

//   // unique id
//   const todoId = Date.now().toString();

//   const newTodo = new Todo(todoId, todoValue);
//   //   console.log(newTodo);

//   //   createTodo(todoId, todoValue);
//   createTodo(newTodo);
//   showMessage("Todo added successfully", "success");

//   // add todo local storage
//   const todos = getTodoFromLocalStorage();
//   todos.push(newTodo);
//   localStorage.setItem("mytodos", JSON.stringify(todos));

//   todoInput.value = "";
// };

// ...

// addTodo
const addTodo = (event) => {
  event.preventDefault();
  const todoValue = todoInput.value;

  // unique id
  const todoId = Date.now().toString();

  const newTodo = new Todo(todoId, todoValue);
  createTodo(newTodo);
  showMessage("Todo added successfully", "success");

  // Retrieve existing todos from local storage
  const todos = getTodoFromLocalStorage();

  // Push the new todo into the existing todos array
  todos.push(newTodo);

  // Store the updated todos array back into local storage
  localStorage.setItem("mytodos", JSON.stringify(todos));

  todoInput.value = "";
};

// ...

// loadTodos
const loadTodos = () => {
  const todoInput = getTodoFromLocalStorage();
  todoInput.map((todo) => createTodo(todo));
};

// adding listeners
todoForm.addEventListener("submit", addTodo);
window.addEventListener("DOMContentLoaded", loadTodos);
