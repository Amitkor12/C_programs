#include <iostream>
using namespace std;

class Rowvect;

class Matrix {
    private:
	    int mat_var;

    public:
	    Matrix(): mat_var(10){}
        friend Matrix dispaly(Matrix& m);
};

Matrix dispaly(Matrix& m)
{
    cout<<"the value of private variable : "<<m.mat_var<<endl;
    return m;
}


int main()
{
	Matrix m;
    dispaly(m);
	return 0;
}
