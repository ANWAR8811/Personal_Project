class Cat:
    def __init__(self, color, action):
        self.color = color
        self.action = action

    def view(self, num, clr):
        num += "5"
        #clr1 = clr
        #clr1[0] = 'Green'
        clr[0] = 'Green'
        print('Method inside:', num)
        print('Method inside:', clr)


colors = ['Black', 'Red', 'Yellow', 'Blue']
c1 = Cat('White', 'jumping')
x = "55"
c1.view(x, colors)               # x, pass by value
print('Method outside', x)      # colors, pass by reference
print('Method outside', colors)