package main

func P2_getMax1(data []int) int {
	max := data[0]
	maxCount := 0
	size := len(data)

	for i := 0; i < size; i++ {
		count := 0
		for j := 0; j < size; j++ {
			if data[j] == data[i] {
				count++
			}
		}

		if count > maxCount {
			max = data[i]
			maxCount = count
		}
	}

	return max
}


