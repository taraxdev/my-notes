//BlogList.js
const BlogList = ({blogs, title }) => {
    return (
        <div className="blog-list">
            <h2>{ title }</h2>
            {
                blogs.map((blog) => (
                    <div className="blog-preview" key={blog.id}>
                        <h2>{blog.title}</h2>
                        <p>Written by {blog.author}</p>
                    </div>
                ))}
        </div>
    );
}

export default BlogList;

//Home.js
import { useState } from "react";
import BlogList from "./BlogList";

const Home = () =>{
    const [blogs,setBlogs] = useState([
        {
            title: "Welcome Buddy",
            body: "Lorem Ipsum is simply dummy text of the printing and typesetting industry. ",
            author: "Ak",
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
            author: "Ak",
            id: 3
        }
    ])
    return(
        <div className="home">
            <BlogList blogs={blogs} title="All Blogs"/>
            <BlogList blogs={blogs.filter((blog)=>(blog.author == "Ak"))} title="Ak's Blog"/> // reusing function
        </div>
    );
}

export default Home;
