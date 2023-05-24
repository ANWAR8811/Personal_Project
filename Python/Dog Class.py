class Dog:
    #constructor
    def __init__(self,name,color):
        self.name = name
        self.color = color

    def update_color(self,color):
        self.color = color

    def poke(self):
        print(self.color,self.name, 'is smiling')

d1 = Dog('Rover','Brown')
d2 = Dog('Tomy','White')

d1.poke()
d1.update_color('Black')
d1.poke()
d2.poke()
d2.color = 'Grey'
d2.poke()

print(d1.__dict__)
print(d2.__dict__)

print(dir(d1))      #shows all attributal method