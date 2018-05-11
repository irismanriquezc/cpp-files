#objects


veloB = int(prompt("Enter the velocity of both cars"))
massR = int(prompt("Enter the mass of the red car"))
massB = int(prompt("Enter the mass of the blue car"))

#m = mass R 
#m = mass B
#v = VeloB

keOfRed = (massR * (veloB * veloB))/2
keOfBlue = (massB * (veloB * veloB))/2
momentumOfRed =  (massR * veloB)
momentumOfBlue = (massB * veloB)



print("Kinetic Energy of red cart: " + keOfRed + "Joules")
print("Kinetic Energy of blue cart: " + keOfBlue + "Joules")
print("Momentum of blue cart: " + momentumOfBlue + "kg/m/s")
print("Momentum of red cart: " + momentumOfRed + "kg/m/s")











cart1 = box(pos=vector(-500,9,0), size=vector(20,12,8), color=color.red)
cart2 = box(pos=vector(-500,-9,0), size=vector(20,12,8), color=color.blue)
track = box(pos=vector(0,0,0), size=vector(1000,35,2), color=color.white)

attach_trail(cart1, type='spheres')
attach_trail(cart2, type='spheres')

#initial values
vel1= veloB/massR
vel2= veloB/massB
v1 = vec(vel1,0,0)
v2 = vec(vel2,0,0)

#animation loop
delta_t = 0.2
t = 0
while t < 750:
    rate(500)
    cart1.pos = cart1.pos + v1*delta_t
    cart2.pos = cart2.pos + v2*delta_t
    t = t + delta_t
#    if cart1.pos.x <= track.pos.x
#    v1 = vec(0,0,0)
#    
