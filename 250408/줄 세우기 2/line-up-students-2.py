class Person:
    def __init__(self, number, height, weight):
        self.number = number
        self.height = height
        self.weight = weight
n = int(input())
    
people = []

for i in range(1, n + 1):
    height, weight = tuple(input().split())
    people.append(Person(i, int(height), int(weight)))

people.sort(key = lambda x: (x.height, -x.weight))

for el in people:
    print(el.height, el.weight, el.number)

