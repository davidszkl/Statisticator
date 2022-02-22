#include "types.hpp"
using namespace std;
namespace Statisticator
{

table::table(): _size(0){}
table::table(const table& cpy) {*this = cpy;}
table::~table(){}

tableII::tableII(): table::table() {}
ostream& operator<<(ostream& os, const tableII& rhs) {
	for (size_t n = 0; n < rhs._entry.size(); n++) {
		os << "[" << rhs._entry[n].first << "][" << rhs._entry[n].second << "]";
	}
	return os;
}

class tableID : public table
{
public:
	std::vector<std::pair<int, double> > _entry;
};

class tableIS : public table
{
public:
	std::vector<std::pair<int, std::string> > _entry;
};

class tableDI : public table
{
public:
	std::vector<std::pair<double, int> > _entry;
};

class tableDD : public table
{
public:
	std::vector<std::pair<double, double> > _entry;
};

class tableDS : public table
{
public:
	std::vector<std::pair<double, std::string> > _entry;
};

class tableSI : public table
{
public:
	std::vector<std::pair<std::string, int> > _entry;
};

class tableSD : public table
{
public:
	std::vector<std::pair<std::string, double> > _entry;
};

class tableSS : public table
{
public:
	std::vector<std::pair<std::string, std::string> > _entry;
};

};