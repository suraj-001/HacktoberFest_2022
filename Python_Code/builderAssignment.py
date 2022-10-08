class Rectangle:
    def __init__(self, shape) -> None:
        self.shape = shape
        self.length = None
        self.width = None
    
    def perimeter(self):
        return 2*(self.length + self.width)

    def area(self):
        return self.length * self.width

    def __str__(self) -> str:
        info = (f'Shape: {self.shape}',
                f'Perimeter: {self.perimeter()}',
                f'Area: {self.area():.2f}')
        return '\n'.join(info)

class RectangleBuilder:
    def __init__(self) -> None:
        self.rectangle = Rectangle('Rectangle')

    def configure_length(self, length):
        self.rectangle.length = length
    
    def configure_width(self, width):
        self.rectangle.width  = width

class ShapeCreator:
    def __init__(self) -> None:
        self.builder = None

    def construct_rectangle(self, length, width):
        self.builder = RectangleBuilder()
        [step for step in (self.builder.configure_length(length),
                           self.builder.configure_width(width))]
    
    @property
    def rectangle(self):
        return self.builder.rectangle

def main():
    shapes = ShapeCreator()
    shapes.construct_rectangle(length=15, width=12)
    rectangle = shapes.rectangle
    print(rectangle)

if __name__ == '__main__':
    print('Builder Method')
    main()