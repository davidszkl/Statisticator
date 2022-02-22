#include <iostream>
#include <cstddef>
#include <vector>
#include <utility>

using namespace std;

namespace Statisticator 
{
enum TableType {
	II,
	ID,
	IS,
	DI,
	DD,
	DS,
	SI,
	SD,
	SS
};

class table
{
public:

	table();
	table(const table& cpy);
	virtual ~table();

	virtual table& operator= (const table& rhs);

	size_t	_size;
};

class tableII : public table
{
public:
	tableII();
	friend std::ostream& operator<<(ostream& os, const tableII& rhs);
	std::vector<std::pair<int, int> > _entry;
};

class tableID : public table
{
public:
	tableID();
	tableID& operator=(const tableID& rhs);
	std::vector<std::pair<int, double> > _entry;
};

class tableIS : public table
{
public:
	tableIS();
	tableIS& operator=(const tableIS& rhs);
	std::vector<std::pair<int, std::string> > _entry;
};

class tableDI : public table
{
public:
	tableDI();
	tableDI& operator=(const tableDI& rhs);
	std::vector<std::pair<double, int> > _entry;
};

class tableDD : public table
{
public:
	tableDD();
	tableDD& operator=(const tableDD& rhs);
	std::vector<std::pair<double, double> > _entry;
};

class tableDS : public table
{
public:
	tableDS();
	tableDS& operator=(const tableDS& rhs);
	std::vector<std::pair<double, std::string> > _entry;
};

class tableSI : public table
{
public:
	tableSI();
	tableSI& operator=(const tableSI& rhs);
	std::vector<std::pair<std::string, int> > _entry;
};

class tableSD : public table
{
public:
	tableSD();
	tableSD& operator=(const tableSD& rhs);
	std::vector<std::pair<std::string, double> > _entry;
};

class tableSS : public table
{
public:
	tableSS();
	tableSS& operator=(const tableSS& rhs);
	std::vector<std::pair<std::string, std::string> > _entry;
};

};