import sys

a, b = 0.1, 0.2
if len(sys.argv) >= 3:
    a = float(sys.argv[1])
    b = float(sys.argv[2])

print(f"{a + b:.17g}")