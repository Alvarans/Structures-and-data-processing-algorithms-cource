#include "Node.h"
#include <stack>
#include <string>
#include <iostream>
using namespace std;
class Tree {
private:
	Node* root; // Корень дерева
	int bincom;
public:
	Tree() {
		root = nullptr;
		bincom = 0;
	}

	Node* get_root() const { return root; }

	void add(string str) {
		str.push_back('*');
		if (root == nullptr)
			root = new Node(str[0]);
		Node* current = root;
		for (int i = 0; i < str.length() - 1; ++i) {
			while (current->value != str[i])
				if (current->right != nullptr)
					current = current->right;
				else
					break;
			if (current->value != str[i]) {
				current->right = new Node(str[i]);
				current = current->right;
			}
			if (current->down == nullptr)
				current->down = new Node(str[i + 1]);
			current = current->down;
		}
	}

	bool search(string str) {
		bincom = 0;
		str.push_back('*');
		if (root == nullptr) {
			bincom++;
			return false;
		}
		Node* current = root;
		for (int i = 0; i < str.length(); ++i) {
			while (current->value != str[i]) {
				bincom += 2;
				if (current->right != nullptr)
					current = current->right;
				else
					break;
			}
			bincom++;
			if (current->value != str[i])
				return false;
			current = current->down;
			bincom++;
			if (str[i] == '*')
				return true;
		}
		return false;
	}

	int get_bincom() {
		return bincom;
	}
	void clear(Node* r) {
		Node* current = r;
		if (current->down != nullptr) clear(current->down);
		if (current->right != nullptr) clear(current->right);
		delete r;
	}
};
