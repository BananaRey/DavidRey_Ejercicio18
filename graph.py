import numpy as np
import matplotlib.pyplot as plt

archivo=np.loadtxt('puntos2.txt')

x=archivo[:,0]
y=archivo[:,1]
plt.plot(x,y)
plt.show()
plt.savefig('primera_derivada.png')
