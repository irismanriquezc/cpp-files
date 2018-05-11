import pickle

fileObject =open("homework1.txt", "wb")

with open("image_matrix", "wb") as my_file:
	my_list = pickle.dump(my_file, fileObject)

	print(my_list)
	print(my_list[0])






