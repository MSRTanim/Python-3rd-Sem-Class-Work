class Person:
    def __init__(self, name, age): self.name, self.age = name, age
    def display(self): print(f"Name: {self.name}, Age: {self.age}")

class Employee(Person):
    def __init__(self, name, age, salary): super().__init__(name, age); self.salary = salary
    def display(self): super().display(); print(f"Salary: {self.salary}")

# Example usage
Person("Alice", 30).display()
Employee("Bob", 25, 50000).display()
