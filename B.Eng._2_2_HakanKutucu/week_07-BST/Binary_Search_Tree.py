class Node:
	def __init__(self, key):
		self.key = key
		self.left = None
		self.right = None


def insert(node, key):
	if node is None:
		return Node(key)

	if key < node.key:
		node.left = insert(node.left, key)
	elif key > node.key:
		node.right = insert(node.right, key)

	return node


def search(root, key):
	if root is None or root.key == key:
		return root

	if root.key < key:
		return search(root.right, key)

	return search(root.left, key)


def preorder(root):
    if(root != None):
        print(root.key, end=" ")
        preorder(root.left)
        preorder(root.right)


def inorder(root):
    if(root != None):
        inorder(root.left)
        print(root.key, end=" ")
        inorder(root.right)


def postorder(root):
    if(root != None):
        postorder(root.left)
        postorder(root.right)
        print(root.key, end=" ")
    



root = None
root = insert(root, 8)
insert(root, 6)
insert(root, 9)
insert(root, 11)
insert(root, 4)
insert(root, 7)
insert(root, 2)

print("\nPreordered BST  =", end = " ")
preorder(root)
print("\nInordered BST   =", end = " ")
inorder(root)
print("\nPostordered BST =", end = " ")
postorder(root)
