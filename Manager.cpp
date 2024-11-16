#include "Manager.h"

Manager::Manager()
{
	graph = nullptr;
	fout.open("log.txt", ios::app);
	load = 0;
}

Manager::~Manager()
{
	if(load)
		delete graph;
	fout.close();
}

void Manager::run(const char* command_txt){
	ifstream fin;
	fin.open(command_txt);
		
	if(!fin)
	{
		fout<<"[ERROR] command file open error!"<<endl;
		return;
	}
	
	char* str=NULL;
	char* str2=NULL;
	char buf[129]={0};

	while(fin.getline(buf, 128))
	{

	}	
	fin.close();
}

bool Manager::LOAD(char* filename)
{

}

bool Manager::PRINT()
{
	if(graph->printGraph())
		return true;
	return false;
}

bool Manager::mBFS(int vertex)
{

}

bool Manager::mDFS(int vertex)
{

}


bool Manager::mDFS_R(int vertex)
{

}

bool Manager::mDIJKSTRA(int vertex)
{

}

bool Manager::mKRUSKAL()
{

}

bool Manager::mBELLMANFORD(int s_vertex, int e_vertex)
{

}

bool Manager::mFLOYD()
{

}

void Manager::printErrorCode(int n)
{
	fout<<"======== ERROR ========"<<endl;
	fout<<n<<endl;
	fout<<"======================="<<endl;
}
