<h1>Summary</h1>
-

<h1 align = "center"> Go Language </h1>

> Go is a statically typed, compiled programming language designed at Google. Go is syntactically similar to C, but with memory safety, garbage collection, structural typing, and CSP-style concurrency.

<h2> Hello World </h2>

<h4>File Structure</h4>

```
golang
├── 01hello
    ├── main.go
    └── go.mod
```


```go
//go.mod                                |
//command --> go mod init hello         |
                                        |
module hello                            |
                                        |
go 1.17                                 |
                                        |
-----------------------------------------

//main.go
package main

import "fmt"

func main() {
	fmt.Println("Hello World") // fmt stands for the Format package.
}
//go run main.go
```

<h2> Types </h2>

* Case Insensitive; almost
* Variable type should be known in advance
* Everything is a Type

<h2> Variables </h2>

```go
package main

import "fmt"

func main() {

	var username string = "Akshay"
	fmt.Println(username)
	fmt.Printf("Variable of type: %T \n", username)

	var num int
	fmt.Println(num)
	fmt.Printf("Variable of type: %T \n", num)

	var isLoggedIn bool = true
	fmt.Println(isLoggedIn)
	fmt.Printf("Variable of type: %T \n", isLoggedIn)

	// no var style

	numberOfUsers := 5000
	fmt.Println(numberOfUsers)

}
```
<h2>  </h2>

<h2>  </h2>
