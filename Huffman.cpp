#include "Huffman.h"


Huffman::Huffman()
{
}

Huffman::Huffman(std::string i_strForCodding)
{
	m_escape = new Node();
	
	Node* _leaf = new Node();
	_leaf->m_symbol = i_strForCodding[0];

	m_root = new Node();

	m_root->m_childLeft		= m_escape;
	m_escape->m_parent		= m_root;
	m_root->m_childRight	= _leaf;
	_leaf->m_parent			= m_root;

	m_strForCodding = i_strForCodding;
}

void Huffman::AddNewSymbolInTree(char i_symbol)
{
	Node* _leaf = new Node();
	_leaf->m_symbol = i_symbol;

	Node* _node = new Node();
	_node->m_childLeft = m_escape;
	m_escape->m_parent = _node;

	_node->m_childRight = _leaf;
	_leaf->m_parent = _node;
}

void Huffman::IncreaseWeight(Node& i_leaf)
{
	++i_leaf.m_weight;
	while (i_leaf.m_parent != nullptr)
	{
		i_leaf = *i_leaf.m_parent;
		++i_leaf.m_weight;
	}
}

bool Huffman::VerifyTree()
{

}

void Huffman::AddSymbolInTree(char i_symbol)
{
	for (int i = 0; i < m_vecTree.size(); i++)
	{
		if (m_vecTree[i]->m_symbol == i_symbol)
		{
			return;
		}
	}
	AddNewSymbolInTree(i_symbol);
}

void Huffman::CorrectWeight()
{

}

void Huffman::RunCodding()
{
	for (int i = 0; i < m_strForCodding.size(); i++)
	{
		AddSymbolInTree(m_strForCodding[i]);
		//IncreaseWeight();
	}
}

void Huffman::SetStrForCodding(std::string i_strForCodding)
{
	m_strForCodding = i_strForCodding;
}

std::string Huffman::GetStrForCodding() const
{
	return m_strForCodding;
}

Huffman::~Huffman()
{
}
