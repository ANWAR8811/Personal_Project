from multipledispatch import dispatch
#import dispatch
class Anything:
    @dispatch(int, int)
    def something(self, a, b):
        print(a*b)

    @dispatch(int, int, int)
    def something(self, a, b, c):
        print(a*b*c)


a1 = Anything()
a1.something(4, 5)
a1.something(4, 5, 6)