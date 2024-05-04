class Node:
    def __init__(self, data=None):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        last_node = self.head
        while last_node.next:
            last_node = last_node.next
        last_node.next = new_node

def mergeLL(h1, h2):
    dummy = Node()
    cur = dummy
    while h1 and h2:
        if h1.data > h2.data:
            cur.next = h2
            h2 = h2.next
        else:
            cur.next = h1
            h1 = h1.next
        cur = cur.next
    if h1:
        cur.next = h1
    else:
        cur.next = h2
    return dummy.next

# Example usage
h1 = LinkedList()
h1.append(2)
h1.append(4)
h1.append(6)
h1.append(8)

h2 = LinkedList()
h2.append(1)
h2.append(3)
h2.append(5)
h2.append(7)

new_head = mergeLL(h1.head, h2.head)

def printLL(head):
    cur = head
    while cur:
        print(cur.data, end=" ")
        cur = cur.next
    print()

print("Merged Linked List:")
printLL(new_head)

