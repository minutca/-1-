B = int(input("Введіть число B: "))
start = min(A, B)
end = max(A, B)
suma = 0
for i in range(start + 1, end):
    suma += i

print("Сума всіх чисел між", A, "і", B, "дорівнює:", suma)
