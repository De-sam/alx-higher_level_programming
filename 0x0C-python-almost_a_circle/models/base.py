#!/usr/bin/python3

class Base:
	"""base model.

	This model represents the base for other classes inside thsi project

	Private Class Attributes:
	
	__nb_objects(int): Number of instances (bases)

	"""
	__nb_objects = 0
	def __init__(self, id=None):
		"""
		initializing new base

		args:
		     id(int): idemtity numner of the new bases
		"""

		if id is not None:
			self.id = id
		else:
			Base.__nb_objects += 1
			self.id = Base.__nb_objects