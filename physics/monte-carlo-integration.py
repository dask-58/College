throws = 2000000
inside_circle = 0
i = 0
radius = 1
while i < throws:
    # Choose random X and Y centered around 0,0
    x = rd.uniform(-radius, radius)
    y = rd.uniform(-radius, radius)
    # If the point is inside circle, increase variable
    if x**2 + y**2 <= radius**2:
        inside_circle += 1
    i += 1

# Calculate area and print; should be closer to Pi with increasing number of throws
area = (((2 * radius) ** 2) * inside_circle) / throws
print("monte area: ", area, "real area : ", np.pi)
