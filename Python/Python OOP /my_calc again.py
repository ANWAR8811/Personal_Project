class MyCalculator:
    def product(self, *n):  # n is a tuple here
        pro = 1
        print(n)
        for i in n:
            pro *= i
        print(pro)


c1 = MyCalculator()
c1.product(5)
c1.product(4, 5)
# method overloading
c1.product(4, 5, 6)
c1.product(4, 5, 6, 7)