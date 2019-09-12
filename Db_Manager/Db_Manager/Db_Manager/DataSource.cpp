#include <random>
#include "DataSource.h"
#include "Factory.h"

DataSource::DataSource()
{
}

#if 0
DataSource::DataSource(DisplayBase* p_DisplayBase)
{
	m_pDisplayBase = p_DisplayBase;
}
#endif


DataSource::~DataSource()
{
	delete m_pDisplayBase;
}

void DataSource::Query()
{
	m_Data.clear();
	std::default_random_engine engine;
	std::uniform_int_distribution<int> distribution{ 0, 100 };
	for (std::size_t index = 0; index < 10; index++){
		m_Data.push_back(distribution( engine ));
	}
}

void DataSource::Update(std::size_t index, int NewVal)
{
	m_Data[index] = NewVal;
}

void DataSource::Delete(std::size_t index)
{
	m_Data.erase(m_Data.begin() + index);
}

void DataSource::Display()
{
	if (!m_pDisplayBase)
		m_pDisplayBase = m_pFactory->Create();

	m_pDisplayBase->Display(m_Data);
}

void DataSource::SetFactory(Factory* f)
{
	m_pFactory = f;
}

#if 0
void DataSource::Display()
{
	m_pDisplayBase->Display(m_Data);
}
#endif