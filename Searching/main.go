package main

import "fmt"

func main() {
	data := []int{1, 2, 2, 3, 3, 3, 4, 5, 5, 5, 5}

	result := P2_getMax1(data)

	fmt.Printf("Most frequently occurring element is: %d\n", result)
}