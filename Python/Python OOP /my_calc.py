class MyCalculator:
    def product(self, n1, n2=None, n3=None):
        if n1 != None and n2 != None and n3 != None:
             print(n1*n2*n3)
        elif n1 != None and n2 != None:
            print(n1 * n2)
        else:
            print(n1 * 1)

c1 = MyCalculator()
c1.product(4)
c1.product(4, 5)
# method overloading
c1.product(4, 5, 6)
