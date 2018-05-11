scene.title = "Current and Resistance\n Velocity of ball"

R = 15
V = int(prompt("What is the voltage?"))

background= color.magenta

ballR=sphere( pos=vec(-1.1,-.01,0),
            size=3*vec(.3,.3,0.1), color= color.red )



HwallTop = box(pos = vec(0,1.5,0), size = vec(10.1,0.1,0.1), color = color.blue)
HwallBottom = box(pos = vec(0,-1.5,0), size = vec(10.1,0.1,0.1), color = color.blue)
VwallRight = box(pos = vec(5,0,0), size = vec(0.1,3,0.1), color = color.green)
VwallLeft = box(pos = vec(-5,0,0), size = vec(0.1,3,0.1), color = color.green)

topC = box(pos = vec(-.12,.9,0), size = vec(2.1,0.1,0.1), color = color.white)
bottomC= box(pos = vec(-.08,-.9,0), size = vec(2.1,0.1,0.1), color = color.white)

wallIN = box(pos = vec(0.9,.6,0), size = vec(0.05,.5,0.1), color = color.white)
wallINB = box(pos = vec(0.95,-.6,0), size = vec(0.05,.5,0.1), color = color.white)

wallIN = box(pos = vec(-1.14,.6,0), size = vec(0.05,.5,0.1), color = color.white)
wallINB = box(pos = vec(-1.15,-.6,0), size = vec(0.05,.5,0.1), color = color.white)



spring = helix( pos=vec(0.98,-.4,0),
                    size=vec(.8,.8,.5), axis = vec(0,4,0) )
                    
                    
ball = sphere(pos = vec(2,0.0,0), radius = 0.15, color = color.white,
make_trail=True, trail_type='points',trail_color = color.white, interval=4, retain=50)

ball.velocity = vec(12,-9,0)
ball.mass = 0.25
ball.p = ball.velocity * ball.mass
g = vec(0,0,0)
Fnet = g * ball.mass 
dt = 0.001
t = 0
hit = 0


p = series( color=color.red, 
                 label='Velocity' )


for i in range(7,12,0.9): 
    rate(65)
    p.plot(i+3, 9+5*sin(i))
  
scene.caption = "Vary the speed of ball: \n\n"

def setspeed(s):
    wt.text = '{:1.2f}'.format(s.value)
    ball.velocity = vec(s.value,s.value,0)
    ball.mass = 0.25
    ball.p = ball.velocity * ball.mass
sl = slider(min=10, max=20, value=15, bind=setspeed, right=15)

wt = wtext(text='{:1.2f}'.format(sl.value))
scene.append_to_caption(' meters/s\n')


def massB(m):
    wt.text = '{:1.2f}'.format(m.value)
    ball.velocity = vec(12,-9,0)
    ball.mass = m.value
    ball.p = ball.velocity * ball.mass
    g = vec(0,0,0)
    Fnet = g * ball.mass 

sli = slider(min=.50, max=3, value=1.5, bind=massB, right=15)    
wt = wtext(text='{:1.2f}'.format(sli.value))

scene.append_to_caption(' Kg\n As you can tell, the bigger the mass the slower it will move no matter the velocity\n')


current = V/R
print("The current flowing through this white circuit is "+ current+ " Watts")

while t < 90:
    rate(300)
    ball.pos = ball.pos + (ball.p/ball.mass) * dt
    ball.p = ball.p + Fnet * dt
    t = t + dt
    
    if ball.pos.x < (VwallLeft.pos.x + ball.radius):
        ball.p.x = -ball.p.x
        hit += 1
    if hit % 2 == 0:
        h = 0
            
    if ball.pos.x > (VwallRight.pos.x - ball.radius):
        ball.p.x = -ball.p.x
        ball.color = color.blue
    
    if ball.pos.y < (HwallBottom.pos.y + ball.radius):
        ball.p.y = -ball.p.y
        ball.interval = 10
        
    if ball.pos.y  >(HwallTop.pos.y - ball.radius):
        ball.p.y = -ball.p.y
      
      

