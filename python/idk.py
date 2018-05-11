def averageOfPositive(lst) :
   sum = 0
   count = 0
   for i in range(len(lst)) :
      if lst[i] > 0 :
         sum += lst[i]
         count += 1
   return sum / count
