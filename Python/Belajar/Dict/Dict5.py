dict = {
    'Name' : 'Udin Gambut',
    'Age' : '19',
    'Class' : 'Second'
}

name = dict["Name"]
age = dict["Age"]

print (name,age)

kelas = dict.get("Class")

print(kelas)

Klass = dict.get("Class", "Alternate value")

print (Klass)