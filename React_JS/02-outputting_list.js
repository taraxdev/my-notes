import { useState } from "react";

const Home = () =>{
    const [blogs,setBlogs] = useState([
        {
            title: "Welcome Buddy",
            body: "Lorem Ipsum is simply dummy text of the printing and typesetting industry. ",
            author: "AK",
            id: 1
        },
        {
            title: "Hello Internet World",
            body: "Lorem Ipsum has been the industry's standard dummy text ever since the 1500s",
            author: "Sam",
            id: 2
        },
        {
            title: "Web dev and ui",
            body: "when an unknown printer took a galley of type and scrambled it to make a type specimen book.",
            author: "Zen",
            id: 3
        }
    ])
    return(
        <div className="home">
            {
                blogs.map((blog) => (
                    <div className="blog-preview" key={blog.id}>
                        <h2>{blog.title}</h2>
                        <p>Written by {blog.author}</p>
                    </div>
                ))
            }
        </div>
    );
}

export default Home;
