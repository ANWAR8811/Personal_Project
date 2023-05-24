class Car:
    #constructor
    def __init__(self,name,model):
        self.name = name        #instance variable
        self.model = model      #instance variable
        self.wheel = 4          #instance variable

    def view(self):                 #instance method
        print("Model year of this ",self.name,
              'is',self.model)
        print('It is a', self.wheel,'wheel car')

c1 = Car('BMW',2016)
c1.view()