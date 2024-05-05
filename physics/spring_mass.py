# Write a program that plots the motion of a mass oscillating at
# the end of a spring. The force on the mass should be given by
# F = −mg + kx.

# Force on the mass is , F = -mg - kx

import matplotlib.pyplot as plt
import numpy as np

tau = 3.0  # Total time
N = 1000  # Number of time steps
dt = tau / float(N - 1)  # Time step
k = 3.5  # Spring constant
m = 0.2  # Mass, in kg
g = 9.8  # Gravity, in m/s^2
xo = 0.0  # Initial position
vo = 0.0  # Initial velocity

y = np.zeros([N, 2])
y[0, 0] = xo
y[0, 1] = vo

def SHO(state, time):
    g0 = state[1]
    g1 = -k / m * state[0] - g 
    return np.array([g0, g1])

# Time array
time = np.linspace(0, tau, N)

for j in range(N - 1):
    y[j + 1] = y[j] + dt * SHO(y[j], time[j])

X = [y[j, 0] for j in range(N)]
Y = [y[j, 1] for j in range(N)]

plt.plot(time, X, label="Position")
plt.plot(time, Y, label="Velocity")
plt.xlabel("Time")
plt.ylabel("Position/Velocity")
plt.legend()
plt.show()

