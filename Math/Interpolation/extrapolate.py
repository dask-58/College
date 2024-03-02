def interpolate(d, x):
    if x < d[0][0]:
        ans = d[0][1] + (x - d[0][0]) * ((d[1][1] - d[0][1]) / (d[1][0] - d[0][0]))
        return ans
    elif x > d[-1][0]:
        ans = d[-1][1] + (x - d[-1][0]) * ((d[-1][1] - d[-2][1]) / (d[-1][0] - d[-2][0]))
        return ans
    else:
        for i in range(len(d) - 1):
            if d[i][0] <= x <= d[i + 1][0]:
                ans = d[i][1] + (x - d[i][0]) * ((d[i + 1][1] - d[i][1]) / (d[i + 1][0] - d[i][0]))
                return ans

data = [[2023, 12], [2024, 14], [2025, 14.86], [2026, 15]]
year = 2027

print(interpolate(data, year))
