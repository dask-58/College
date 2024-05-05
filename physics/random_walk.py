import random
import matplotlib.pyplot as plt
x, y = 0, 0
N = 2000
n = 1
pos = [(x, y)]

for i in range(N):
  d = random.choice(['u', 'l', 'r', 'd'])
  if d == 'u':
    y += n
  elif d == 'l':
    x -= n
  elif d == 'd':
    y -= n
  else:
    x += n

  pos.append((x, y))

x_coords, y_coords = zip(*pos)
fig, ax = plt.subplots()
ax.plot(x_coords, y_coords)
ax.set_title('Random Walk Simulation')
ax.set_xlabel('X')
ax.set_ylabel('Y')

plt.show()
