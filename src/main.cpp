#include "../mlx/mlx.h"
#include <iostream>
#include <vector>
#include <utility>



class Study
{
public:

	Study();
	Study(const Study& cpy);
	~Study();

	Study& operator= (const Study& rhs);

private:
	//array of tables of possibly different types
};

int main()
{
	Study study;
	return 0;
}