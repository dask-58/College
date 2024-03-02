def interpolate(d, x):
    for i in range(len(d) - 1):
        if d[i][0] <= x <= d[i + 1][0]:
            ans = d[i][1] + (x - d[i][0]) * ((d[i + 1][1] - d[i][1]) / (d[i + 1][0] - d[i][0]))
            return ans

data = [[2026, 23],  [2028, 24.24]]
year = 2027

print('The estimated value for x value',year, 'with around 99.867% accuracy is', interpolate(data, year))
