class Node(self,e,n):
    self.elem = e
    self.next = n


arr = [10,20,30,40,50]
head = Node(arr[0],None)
tail = head
for i in range(1,len(arr)):
    n = None(arr[i],None)
    tail.next = n
    tail = tail.next