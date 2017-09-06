class Expr{
public:
	virtual Expr* newExpr();
	virtual Expr& clone();
	virtual Expr self();
	 // Expr self();
};
class BinaryExpr:public Expr{
public:
	virtual BinaryExpr* newExpr();
	virtual BinaryExpr& clone();
	virtual BinaryExpr self(); //error overridden virtual function is here
};

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}