#pragma once

struct Node
{
	int m_weight;
	char m_symbol;
	Node* m_parent;
	Node* m_childLeft;
	Node* m_childRight;

	Node() :	m_weight(0), 
				m_symbol(' '), 
				m_parent(nullptr), 
				m_childLeft(nullptr), 
				m_childRight(nullptr)

					}
};

class Huffman
{
public:
	Huffman();


	~Huffman();

private:

};

