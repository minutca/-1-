N = int(input("Введіть число N: "))

suma = 0
for i in range(1, N + 1):
    suma += i

print("Сума елементів списку від 1 до", N, "дорівнює:", suma)
