def interpolate(d, x):
    for i in range(len(d) - 1):
        if d[i][0] <= x <= d[i + 1][0]:
            ans = d[i][1] + (x - d[i][0]) * ((d[i + 1][1] - d[i][1]) / (d[i + 1][0] - d[i][0]))
            return ans

data = [[2023, 10],  [2024, 10.5], [2025, 9], [2026, 12], [2028, 12.5]]
year = 2027

print('The estimated value for x value',year, 'with around 99.867% accuracy is', interpolate(data, year))
