package main

import (
   "fmt"
   "goh/factorial"
)

func main() {
	input := 10
	fmt.Printf( "Factorial of %d is %d\n", input, factorial.Factorial( input ) )
}
