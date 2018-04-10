import numpy as np
import matplotlib.pyplot as plt

archivo=np.loadtxt('puntos.txt')

x=archivo[:,0]
y=archivo[:,1]
z=archivo[:,2]
plt.plot(x,y)
plt.savefig('segunda_derivada.png')
plt.close()
plt.plot(z,y)
plt.savefig('ZvsY.png')
