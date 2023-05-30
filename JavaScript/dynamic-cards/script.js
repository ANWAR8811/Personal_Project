// dummy data

// const posts = [
//   {
//     title: "this is title of post 1",
//     body: "this is body of post 1",
//   },
//   {
//     title: "this is title of post 2",
//     body: "this is body of post 2",
//   },
//   {
//     title: "this is title of post 3",
//     body: "this is body of post 3",
//   },
//   {
//     title: "this is title of post 4",
//     body: "this is body of post 4",
//   },
//   {
//     title: "this is title of post 5",
//     body: "this is body of post 5",
//   },
//   {
//     title: "this is title of post 6",
//     body: "this is body of post 6",
//   },
//   {
//     title: "this is title of post 7",
//     body: "this is body of post 7",
//   },
//   {
//     title: "this is title of post 8",
//     body: "this is body of post 8",
//   },
// ];

{
  /*<div class="post">
        <h4 class="post-title">post title 1</h4>
        <p class="post-body">post description 1</p>
      </div>*/
}

// fetch data starts here

// console.log(axios);

const fetctData = async (url) => {
  try {
    const res = await axios(url);
    //   console.log(res.data);
    return res.data;
  } catch (e) {
    throw new Error("Error fetching");
  }
};

// fetch data ends here

// selections start here

const postsElement = document.querySelector(".posts");

const loadAllData = async () => {
  const posts = await fetctData("https://jsonplaceholder.typicode.com/posts");
  posts.map((post) => {
    // console.log(post);
    const postElement = document.createElement("div");
    postElement.classList.add("post");
    postElement.innerHTML = `
        <h4 class="post-title">${post.title}</h4>
        <p class="post-body">${post.body}</p>
    `;
    postsElement.appendChild(postElement);
  });
};

loadAllData();

// selections ends here
