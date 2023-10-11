from math import pow
def square_matrix_simple(matrix=[]):
	for sublist in matrix:
		for num in range(len(sublist)):
			sublist[num] **= 2
	return matrix		