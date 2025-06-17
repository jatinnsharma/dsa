package main

func P3_getMax3(data []int) int {
	max:= data[0]
	maxCount := 0
	size := len(data)
	counts := make(map[int]int)

	for i := 0; i < size; i++ {
		counts[data[i]]++
		if counts[data[i]] > maxCount {
			maxCount = counts[data[i]]
			max = data[i]
		}
	}
	return max

}