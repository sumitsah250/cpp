a, b = 1, 2
s = 0
while a <= 4_000_000:
    if a % 2 == 0:
        s += a
    a, b = b, a + b

print(s)

#4613732
