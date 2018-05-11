values = []

#TODO use a for loop to fill the list with the values 
#     0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2

count = 0
for p in range(0,18):
  values.append(count)
  count = count + 1
  if(count>=3):
     count = 0

print(values)
print(values)

