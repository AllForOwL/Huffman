#pragma once

#include <string>
#include <vector>

struct Node
{
	int		m_weight;
	char	m_symbol;
	Node*	m_parent;
	Node*	m_childLeft;
	Node*	m_childRight;

	Node() :	m_weight(0), 
				m_symbol(' '),
				m_parent(nullptr), 
				m_childLeft(nullptr), 
				m_childRight(nullptr)
	{

	}
	Node(int i_weight) :	m_weight(i_weight), 
							m_symbol(' '),
							m_parent(nullptr), 
							m_childLeft(nullptr), 
							m_childRight(nullptr)
	{

	}
};

class Huffman
{
public:
	Huffman(std::string i_strForCodding);

	void RunCodding();
	void AddSymbolInTree(char i_symbol);
	void AddNewSymbolInTree(char i_symbol);
	void IncreaseWeight(Node& i_leaf);
	bool VerifyTree();
	void CorrectWeight();
	void SetStrForCodding(std::string i_strForCodding);
	std::string GetStrForCodding() const;

	~Huffman();

private:
	Huffman();
	std::string			m_strForCodding;
	Node*				m_root;
	Node*				m_escape;
	std::vector<Node*>	m_vecTree;
};

