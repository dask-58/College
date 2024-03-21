epsilon = 0.00001

def f(x):
    return x ** 3 - x - 1

def root(a, b):
    if f(a) * f(b) >= 0:
        print('Invalid Choice for a and b.')
        return
    c = a
    i = 0
    while b - a >= epsilon:
        c = a + (b - a) / 2
        if f(c) == 0.0:
            print('The root is : ', c)
            return
        if f(a) * f(c) < 0:
            b = c
        elif f(b) * f(c) < 0:
            a = c
        i += 1

    print("Root is : ", c, 'Correct upto 5 decimal places.')
    print('Found the root in ', i, ' iterations')

def main():
    try:
        a = float(input("Enter initial value for a: "))
        b = float(input("Enter initial value for b: "))
        root(a, b)
    except ValueError:
        print("Please enter valid floating-point numbers.")

if __name__ == "__main__":
    main()