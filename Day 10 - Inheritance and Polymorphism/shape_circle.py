class Shape:
    def area(self): return "Undefined for generic shapes."

class Circle(Shape):
    def __init__(self, radius): self.radius = radius
    def area(self): return 3.14159 * self.radius ** 2

# Example usage
print(Shape().area())
print(f"Circle area: {Circle(5).area():.2f}")
