#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
	int key;
	struct Node *left, *right;
};

struct Node* newNode(int item) {
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	if (!node) {
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	node->key = item;
	node->left = node->right = NULL;
	return node;
}

// Insertion (returns new root)
struct Node* insertRec(struct Node* root, int key) {
	if (root == NULL)
		return newNode(key);

	if (key < root->key)
		root->left = insertRec(root->left, key);
	else if (key > root->key)
		root->right = insertRec(root->right, key);

	return root;
}

// Find node with minimum key in a tree
struct Node* minValueNode(struct Node* node) {
	struct Node* current = node;
	while (current && current->left != NULL)
		current = current->left;
	return current;
}

// Deletion (returns new root)
struct Node* deleteRec(struct Node* root, int key) {
	if (root == NULL)
		return root;

	if (key < root->key)
		root->left = deleteRec(root->left, key);
	else if (key > root->key)
		root->right = deleteRec(root->right, key);
	else {
		// node with only one child or no child
		if (root->left == NULL) {
			struct Node* temp = root->right;
			free(root);
			return temp;
		} else if (root->right == NULL) {
			struct Node* temp = root->left;
			free(root);
			return temp;
		}

		// node with two children: get inorder successor (smallest in the right subtree)
		struct Node* temp = minValueNode(root->right);

		// copy the inorder successor's content to this node
		root->key = temp->key;

		// delete the inorder successor
		root->right = deleteRec(root->right, temp->key);
	}

	return root;
}

// Search
bool searchRec(struct Node* root, int key) {
	if (root == NULL)
		return false;
	if (root->key == key)
		return true;
	if (root->key < key)
		return searchRec(root->right, key);
	return searchRec(root->left, key);
}

// Traversals
void inorderRec(struct Node* root) {
	if (root != NULL) {
		inorderRec(root->left);
		printf("%d ", root->key);
		inorderRec(root->right);
	}
}

void preorderRec(struct Node* root) {
	if (root != NULL) {
		printf("%d ", root->key);
		preorderRec(root->left);
		preorderRec(root->right);
	}
}

void postorderRec(struct Node* root) {
	if (root != NULL) {
		postorderRec(root->left);
		postorderRec(root->right);
		printf("%d ", root->key);
	}
}

int main(void) {
	struct Node* root = NULL;

	// Inserting elements
	root = insertRec(root, 50);
	root = insertRec(root, 30);
	root = insertRec(root, 20);
	root = insertRec(root, 40);
	root = insertRec(root, 70);
	root = insertRec(root, 60);
	root = insertRec(root, 80);

	printf("Inorder traversal:\n");
	inorderRec(root);
	printf("\n\n");

	// Deleting elements
	root = deleteRec(root, 20);
	root = deleteRec(root, 30);

	printf("Inorder traversal after deletion:\n");
	inorderRec(root);
	printf("\n\n");

	// Searching for an element
	int searchKey = 70;
	printf("Is %d present in the tree? %s\n\n", searchKey,
		   searchRec(root, searchKey) ? "true" : "false");

	// Traversals
	printf("Preorder traversal:\n");
	preorderRec(root);
	printf("\n\n");

	printf("Postorder traversal:\n");
	postorderRec(root);
	printf("\n");

	return 0;
}

