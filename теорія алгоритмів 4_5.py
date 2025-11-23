strings = []

while True:
    s = input("Введіть рядок (або 'exit' для виходу): ")
    if s == 'exit':
        break
    strings.append(s)

if strings:
    print("Найдовший рядок:", max(strings, key=len))
else:
    print("Список порожній")
