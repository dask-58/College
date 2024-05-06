from pylab import *
from scipy.integrate import odeint

N = 2000  # number of steps to take

"""
We actually have FOUR parameters to track, here:
L, L dot, theta, and theta dot.
So instead of the usual Nx2 array, make it Nx4.
Each 4-element row will be used for the state of
the system at one instant, and each instant is
separated by time dt. I'll use the order given above.
"""

y = zeros([4])
Lo = 1.0  # unstretched spring length
L = 1.0  # Initial stretch of spring
v_o = 0.0  # initial velocity
theta_o = 0.3  # radians
omega_o = 0.0  # initial angular velocity

y[0] = L  # set initial state
y[1] = v_o
y[2] = theta_o
y[3] = omega_o

time = linspace(0, 25, N)
k = 3.5  # spring constant, in N/m
m = 0.2  # mass, in kg
gravity = 9.8  # g, in m/s^2


def spring_pendulum(y, time):
    """
    This defines the set of differential equations
    we are solving. Note that there are more than
    just the usual two derivatives!
    """
    g0 = y[1]
    g1 = (Lo + y[0]) * y[3] * y[3] - k / m * y[0] + gravity * cos(y[2])
    g2 = y[3]
    g3 = -(gravity * sin(y[2]) + 2.0 * y[1] * y[3]) / (Lo + y[0])
    return array([g0, g1, g2, g3])


# Now we do the calculations.
answer = odeint(spring_pendulum, y, time)

# Now graph the results.
# rather than graph in terms of t, I'm going
# to graph the track the mass takes in 2D.
# This will require that I change L, theta data
# to x, y data.
xdata = (Lo + answer[:, 0]) * sin(answer[:, 2])
ydata = -(Lo + answer[:, 0]) * cos(answer[:, 2])

plot(xdata, ydata, "r-")
xlabel("Horizontal position")
ylabel("Vertical position")
show()
