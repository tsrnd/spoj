package main

import (
	"fmt"
	"strconv"
)

func main() {
	var n1, n2 int
	fmt.Scanf("%d", &n1)
	fmt.Scanf("%d", &n2)

	res := ""
	for i := n1; i <= n2; i++ {
		if isPrime(i) {
			if res == "" {
				res = strconv.Itoa(i)
				continue
			}
			res = fmt.Sprintf("%s %d", res, i)
		}
	}
	fmt.Println(res)
}

func isPrime(n int) bool {
	if n == 1 {
		return false
	}
	for i := 2; i*i <= n; i++ {
		if n%i == 0 {
			return false
		}
	}
	return true
}
