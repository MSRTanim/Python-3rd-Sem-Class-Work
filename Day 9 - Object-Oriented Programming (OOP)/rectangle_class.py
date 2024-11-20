class Rectangle:
    def __init__(self, length, width):
        self.length, self.width = length, width

    def area(self): return self.length * self.width
    def perimeter(self): return 2 * (self.length + self.width)

# Example usage
rect = Rectangle(5, 3)
print("Area:", rect.area())
print("Perimeter:", rect.perimeter())
