#pragma once
#include<iostream>
using namespace std;

namespace my
{
	enum Color
	{
		RED,
		BLACK
	};

	template<class T>
	struct RBTreeNode
	{
		RBTreeNode<T>* _left;
		RBTreeNode<T>* _right;
		RBTreeNode<T>* _parent;
		T _data;
		Color _col;

		RBTreeNode(const T& data)
			: _left(nullptr)
			, _right(nullptr)
			, _parent(nullptr)
			, _data(data)
			, _col(RED)
		{}
	};

	template<class T, class Ref, class Ptr>
	struct RBTreeIterator
	{
		typedef RBTreeNode<T> Node;
		typedef RBTreeIterator<T, T&, T*> Iterator;
		typedef RBTreeIterator<T, Ref, Ptr> Self;
		Node* _node;

		RBTreeIterator(Node* node)
			: _node(node)
		{}

		RBTreeIterator(const Iterator& it)
			: _node(it._node)
		{}

		Ref operator*()
		{
			return _node->_data;
		}

		Ptr operator->()
		{
			return &(operator*());
		}

		Self& operator++()
		{
			if (_node->_right)//�Ҳ�Ϊ�գ�����������������
			{
				Node* subLeft = _node->_right;
				while (subLeft->_left)
				{
					subLeft = subLeft->_left;
				}
				_node = subLeft;
			}
			else//��Ϊ�գ������Һ����Ǹ�������Ǹ�����
			{
				Node* parent = _node->_parent;
				Node* cur = _node;
				while (parent && parent->_right == cur)
				{
					cur = parent;
					parent = cur->_parent;
				}
				_node = parent;
			}
			return *this;
		}

		Self operator++(int)
		{
			Self tmp = *this;
			++*this;
			return tmp;
		}

		Self& operator--()
		{
			if (_node->_left)//��Ϊ�գ��������������ҽ��
			{
				Node* subRight = _node->_left;
				while (subRight->_right)
				{
					subRight = subRight->_right;
				}
				_node = subRight;
			}
			else//��Ϊ�գ������Һ����Ǹ����ҵ��Ǹ�����
			{
				Node* parent = _node->_parent;
				Node* cur = _node;
				while (parent && parent->_left == cur)
				{
					cur = parent;
					parent = cur->_parent;
				}
				_node = parent;
			}
			return *this;
		}

		Self operator--(int)
		{
			Self tmp = *this;
			--*this;
			return tmp;
		}

		bool operator!=(const Self& s)
		{
			return _node != s._node;
		}

		bool operator==(const Self& s)
		{
			return _node == s._node;
		}
	};

	template<class K, class T, class KeyOfT>
	class RBTree
	{
	protected:
		typedef RBTreeNode<T> Node;
	public:
		typedef RBTreeIterator<T, T&, T*> iterator;
		typedef RBTreeIterator<T, const T&, const T*> const_iterator;

		iterator begin()
		{
			Node* cur = _root;
			while (cur->_left)
			{
				cur = cur->_left;
			}
			return iterator(cur);
		}

		const_iterator begin() const
		{
			Node* cur = _root;
			while (cur->_left)
			{
				cur = cur->_left;
			}
			return const_iterator(cur);
		}

		iterator end()
		{
			return iterator(nullptr);
		}

		const_iterator end() const
		{
			return const_iterator(nullptr);
		}

		~RBTree()
		{
			Destroy(_root);
		}

		iterator Find(const K& key)
		{
			if (_root == nullptr)
			{
				return iterator(nullptr);
			}

			KeyOfT kot;
			Node* cur = _root;
			while (cur)
			{
				if (kot(cur->_data) < key)
				{
					cur = cur->_right;
				}
				else if (kot(cur->_data) > key)
				{
					cur = cur->_left;
				}
				else
				{
					return iterator(cur);
				}
			}

			return iterator(nullptr);
		}

		pair<iterator, bool> Insert(const T& data)
		{
			if (_root == nullptr)
			{
				_root = new Node(data);
				_root->_col = BLACK;
				return make_pair(iterator(_root), true);
			}

			KeyOfT kot;
			Node* parent = nullptr;
			Node* cur = _root;
			while (cur)
			{
				if (kot(cur->_data) < kot(data))
				{
					parent = cur;
					cur = cur->_right;
				}
				else if (kot(cur->_data) > kot(data))
				{
					parent = cur;
					cur = cur->_left;
				}
				else
				{
					return make_pair(iterator(cur), false);
				}
			}

			Node* newnode = new Node(data);
			cur = newnode;
			if (kot(parent->_data) < kot(data))
			{
				parent->_right = cur;
			}
			else
			{
				parent->_left = cur;
			}
			cur->_parent = parent;

			while (parent && parent->_col == RED)
			{
				Node* grandparent = parent->_parent;
				if (grandparent->_right == parent)//uncle����parent����
				{
					Node* uncle = grandparent->_left;
					if (uncle && uncle->_col == RED)//uncleΪ�죬��ɫ+���ϵ���
					{
						parent->_col = uncle->_col = BLACK;
						grandparent->_col = RED;

						cur = grandparent;
						parent = cur->_parent;
					}
					else//uncleΪ�ջ�Ϊ�ڣ���ɫ+��ת
					{
						if (parent->_right == cur)//����
						{
							RotateL(grandparent);
							parent->_col = BLACK;
							grandparent->_col = RED;
						}
						else//������
						{
							RotateR(parent);
							RotateL(grandparent);
							cur->_col = BLACK;
							grandparent->_col = RED;
						}
					}
				}
				else//parent����uncle����
				{
					Node* uncle = grandparent->_right;
					if (uncle && uncle->_col == RED)
					{
						parent->_col = uncle->_col = BLACK;
						grandparent->_col = RED;

						cur = grandparent;
						parent = cur->_parent;
					}
					else
					{
						if (parent->_left == cur)//�ҵ���
						{
							RotateR(grandparent);
							parent->_col = BLACK;
							grandparent->_col = RED;
						}
						else//������
						{
							RotateL(parent);
							RotateR(grandparent);
							cur->_col = BLACK;
							grandparent->_col = RED;
						}
					}
				}
			}
			_root->_col = BLACK;

			return make_pair(iterator(newnode), true);
		}

		void InOrder()
		{
			_InOrder(_root);
			cout << endl;
		}

		bool IsBalance()
		{
			if (_root && _root->_col == RED)
			{
				cout << "�����Ϊ��ɫ" << endl;
				return false;
			}

			int benchMark = 0;
			Node* cur = _root;
			while (cur)
			{
				if (cur->_col == BLACK)
				{
					++benchMark;
				}
				cur = cur->_right;
			}

			return Check(_root, 0, benchMark);
		}
	protected:
		void Destroy(Node*& root)
		{
			if (root == nullptr)
			{
				return;
			}

			Destroy(root->_left);
			Destroy(root->_right);
			delete root;
			root = nullptr;
		}

		void RotateL(Node* parent)
		{
			Node* grandparent = parent->_parent;
			Node* subR = parent->_right;
			Node* subRL = subR->_left;

			parent->_right = subRL;
			if (subRL)
			{
				subRL->_parent = parent;
			}

			subR->_left = parent;
			parent->_parent = subR;

			if (grandparent)
			{
				if (grandparent->_right == parent)
				{
					grandparent->_right = subR;
				}
				else
				{
					grandparent->_left = subR;
				}
			}
			else
			{
				_root = subR;
			}
			subR->_parent = grandparent;
		}

		void RotateR(Node* parent)
		{
			Node* grandparent = parent->_parent;
			Node* subL = parent->_left;
			Node* subLR = subL->_right;

			parent->_left = subLR;
			if (subLR)
			{
				subLR->_parent = parent;
			}

			subL->_right = parent;
			parent->_parent = subL;

			if (grandparent)
			{
				if (grandparent->_right == parent)
				{
					grandparent->_right = subL;
				}
				else
				{
					grandparent->_left = subL;
				}
			}
			else
			{
				_root = subL;
			}
			subL->_parent = grandparent;
		}

		void _InOrder(Node* root)
		{
			if (root == nullptr)
			{
				return;
			}

			_InOrder(root->_left);
			cout << KeyOfT()(root->_data) << " ";
			_InOrder(root->_right);
		}

		bool Check(Node* root, int blackNum, int benchMark)
		{
			if (root == nullptr)
			{
				if (blackNum != benchMark)
				{
					cout << "ĳ��·����ɫ������������" << endl;
					return false;
				}
				return true;
			}

			if (root->_col == BLACK)
			{
				++blackNum;
			}

			if (root->_col == RED && root->_parent && root->_parent->_col == RED)
			{
				cout << "���������ĺ�ɫ���" << endl;
				return false;
			}

			return Check(root->_left, blackNum, benchMark)
				&& Check(root->_right, blackNum, benchMark);
		}
	protected:
		Node* _root = nullptr;
	};
}