from math import pow
def square_matrix_simple(matrix=[]):
	new_matrix = [[num ** 2 for num in sublist] for sublist in matrix]
	return new_matrix
	