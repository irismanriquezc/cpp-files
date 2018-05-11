import numpy as np
import matplotlib.pyplot as plt
from scipy.io.wavfile import write
import math

samples_s = 44_100  # samples per second
duration_s = 4.0    # 4 seconds

# our x-axis values
x_vals = np.arange(duration_s * samples_s)

freq = 260                  # frequency
ang_freq = 2*np.pi*freq     # angular frequency

y_vals = .3*np.sin(ang_freq * x_vals / samples_s)
vals1= 1*np.sin(ang_freq * x_vals / samples_s)
"""
uncomment below code if you want to plot
"""
# plt.ylim(-1,1)
# plt.scatter(x_vals, y_vals, s=4)
# plt.plot(x_vals, y_vals)
# plt.show()

# 32,767
scale = int( (math.pow(2,16) / 2) - 1 )

y_vals = y_vals * scale
vals1= vals1*scale
y_vals = np.int16(y_vals)
vals1 = np.int16(vals1)
y_vals= y_vals+vals1
write('new.wav', samples_s, y_vals)
