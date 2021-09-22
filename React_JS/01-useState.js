import { useState } from "react";

const Home = () =>{
    const [name,setName] = useState("Akshay");
    const [age,setAge] = useState(25);

    const clickHandle = () =>{
        setName("Rohan");
        setAge(30);
    }
    return(
        <div className="home">
            <h1>Homepage</h1>
            <p>My name is {name} and I am {age} years old</p>
            <button onClick={clickHandle}>button</button>
        </div>
    );
}

export default Home;
