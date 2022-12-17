daftar = [1, 5, 7, 9, 6, 11]

new = list(filter(lambda x: (x%2 == 0), daftar))

print(new)

new_bruh = list(map(lambda x: x * 2, daftar))

print(new_bruh)