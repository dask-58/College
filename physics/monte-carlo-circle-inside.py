import random
import numpy as np
import matplotlib.pyplot as plt

num_points = 100
x = np.random.uniform(-1, 1, num_points)
y = np.random.uniform(-1, 1, num_points)

center_x, center_y = 0, 0
radius = 0.5

fig, ax = plt.subplots()

circle = plt.Circle((center_x, center_y), radius, fill=False, color='k')
ax.add_artist(circle)

inside = np.sqrt(x**2 + y**2) <= radius
ax.scatter(x[inside], y[inside], color='g')
ax.scatter(x[~inside], y[~inside], color='r')

ax.set_xlim([-1, 1])
ax.set_ylim([-1, 1])
ax.set_xlabel('X')
ax.set_ylabel('Y')
ax.legend()

plt.show()
