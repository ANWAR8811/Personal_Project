class Book:
    def __init__(self,name,author):
        self.name = name
        self.author = author
        self.price = 0

    def set_price(self,price):
        self.price = price
    def get_price(self):
        return self.price
    def details(self):
        print('Book name: ',self.name,
              '\nAuthor: ',self.author,
              '\nPrice: ',self.price,'Taka')

b1 = Book("Opekkha", "Humayun Ahmed")
b1.details()

b1.set_price(255)
#print(b1.get_price())
b1.details()