package main

import "sort"

func P2_getMax2(data []int) int {
	max := data[0]
	maxCount := 0
	size := len(data)
	curr := data[0]
	currCount := 0 
	sort.Ints(data)


	for i := 1; i < size; i++ {
		if data[i] == data[i-1]{
			currCount++
		}else{
			currCount =1
			curr = data[i]
		}

		if currCount > maxCount {
			maxCount = currCount
			max = curr
		}
	}

	return max
}


