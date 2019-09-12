#pragma once
#include<vector>

class Factory;
class DisplayBase;

class DataSource
{
	std::vector<int> m_Data;
	Factory* m_pFactory;
	DisplayBase* m_pDisplayBase;

public:
	DataSource();
	void Query();
	void Update(std::size_t index, int NewData);
	void Delete(std::size_t index);
	void Display();
	void SetFactory(Factory* f);
	~DataSource();
};

