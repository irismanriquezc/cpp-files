	PI = 3.141592653589793
	diameter = float(input("Diameter: "))

	diameter1 = float((4*PI*((diameter/2)**3))/3)

	diameter += 1

	diameter2 = float((4*PI*((diameter/2)**3))/3)
	Growth = diameter2-diameter1

	diameter += 1


	diameter3 = float((4*PI*((diameter/2)**3))/3)
	Growth1= diameter3-diameter2

	print "Diameter: " + str(diameter)
	print "Growth: " + str(Growth)
	print "Growth: " + str(Growth1)  	
