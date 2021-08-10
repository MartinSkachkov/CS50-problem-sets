import csv

file = open("phonebook.csv", "a")

name = input("name: ")
num = input("num: ")

writer = csv.writer(file)
writer.writerow([name, num])

file.close()
