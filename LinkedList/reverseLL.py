from LinkedList import linked_list

def reverseLL(head):
    new_node = None
    while head:
        t = head.next
        head.next = new_node
        new_node = head
        head = t
    return new_node

my_list = linked_list()
my_list.append(1)
my_list.append(2)
my_list.append(3)
my_list.append(4)
reverse_head = reverseLL(my_list.head)
def printLL(head):
    cur = head
    while cur.next != None:
        print(cur.data, end=" ")
        cur = cur.next
    print()

printLL(reverse_head)
