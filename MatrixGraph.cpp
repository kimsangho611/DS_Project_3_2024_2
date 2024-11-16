#include "MatrixGraph.h"

MatrixGraph::MatrixGraph(bool type, int size) : Graph(type, size)
{
	m_Mat = new int*[size];
	for(int i=0; i<size; i++)
	{
		m_Mat[i] = new int[size];
		memset(m_Mat[i], 0, sizeof(int)*size);
	}
}

MatrixGraph::~MatrixGraph()
{
	for(int i=0; i<getSize(); i++)
	{
		delete[] m_Mat[i];
	}
	delete[] m_Mat;
}

void MatrixGraph::getAdjacentEdges(int vertex, map<int, int>* m)
{

}

void MatrixGraph::insertEdge(int from, int to, int weight)
{
	
}

bool MatrixGraph::printGraph()
{
	if( m_Size < 0 )
		return 0;

	cout<<"Graph is MatrixGraph!"<<endl;

	cout<<'\t';
	for(int i=0; i<m_Size; i++)
	{
		cout<<"["<<i<<"]"<<'\t';
	}
	cout<<endl;

	for(int i=0; i<m_Size; i++)
	{
		cout<<"["<<i<<"]";
		for(int j=0; j<m_Size && cout<<'\t'; j++)
		{
			cout<<m_Mat[i][j];
		}
		cout<<endl;
	}
	return 1;
}
