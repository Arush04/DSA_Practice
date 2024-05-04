class node:
    def __init__(self, data=None):
        self.data = data
        self.next = None

class linked_list:
    def __init__(self):
        self.head = node()

    def append(self, data):
        new_node = node(data)
        cur = self.head
        while cur.next != None:
            cur = cur.next
        cur.next = new_node
    
    def length(self):
        length = 0
        cur = self.head
        while cur.next != None:
            cur = cur.next
            length += 1
        return length

    def printLL(self):
        elements = []
        cur = self.head
        while cur.next != None:
            cur = cur.next
            elements.append(cur.data)
        print(elements)

    def get(self, index):
        idx = 0
        cur = self.head
        if self.length() <= index:
            return
        while True:
            cur = cur.next
            if idx == index:
                return cur.data
            idx += 1

    def erase(self, index):
        idx = 0
        cur = self.head
        if self.length() <= index:
            return
        while True:
            last_node = cur
            cur = cur.next
            if idx == index:
                last_node.next = cur.next
                return
            idx += 1

