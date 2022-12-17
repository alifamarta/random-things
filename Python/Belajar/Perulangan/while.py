jawab = 'ya'
hitung = 0

while(jawab == 'ya'):
    hitung += 1
    jawab = input("ulang lagi tidak ? ")
    if jawab == 'tidak':
        break

print(f"Total perulangan: {hitung}")