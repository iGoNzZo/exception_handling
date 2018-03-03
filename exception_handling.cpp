#include<iostream>

using namespace std;

void depth1(int d);
void depth2(int d);
void depth3(int d);
void depth4(int d);
void depth5(int d);
void depth6(int d);
void depth7(int d);
void depth8(int d);
void depth9(int d);
void depth10(int d);

int main()	{
	int depth;
	cout << "Enter a value between 0 & 9: ";
	cin >> depth;
	
	try	{
		if(depth <= 0)	{
			throw depth;
		}
		else	{
			depth1(depth);
		}
	}
	catch(int d){
		cout << "Thrown at depth: " << d << " from main\n";
	}
}

void depth1(int d)	{
	try	{
		if(d <= 1)	{
			throw d;
		}
		else	{
			depth2(d);
		}
	}
	catch(int d){
		cout << "Thrown at depth: " << d << " from depth1 function\n";
	}
}

void depth2(int d)	{
	try	{
		if(d <= 2)	{
			throw d;
		}
		else	{
			depth3(d);
		}
	}
	catch(int d){
		cout << "Thrown at depth: " << d << " from depth2 function\n";
	}
}

void depth3(int d)	{
	try	{
		if(d <= 3)	{
			throw d;
		}
		else	{
			depth4(d);
		}
	}
	catch(int d){
		cout << "Thrown at depth: " << d << " from depth3 function\n";
	}
}

void depth4(int d)	{
	try	{
		if(d <= 4)	{
			throw d;
		}
		else	{
			depth5(d);
		}
	}
	catch(int d){
		cout << "Thrown at depth: " << d << " from depth4 function\n";
	}
}

void depth5(int d)	{
	try	{
		if(d <= 5)	{
			throw d;
		}
		else	{
			depth6(d);
		}
	}
	catch(int d){
		cout << "Thrown at depth: " << d << " from depth5 function\n";
	}
}

void depth6(int d)	{
	try	{
		if(d <= 6)	{
			throw d;
		}
		else	{
			depth7(d);
		}
	}
	catch(int d){
		cout << "Thrown at depth: " << d << " from depth6 function\n";
	}
}

void depth7(int d)	{
	try	{
		if(d <= 7)	{
			throw d;
		}
		else	{
			depth8(d);
		}
	}
	catch(int d){
		cout << "Thrown at depth: " << d << " from depth7 function\n";
	}
}

void depth8(int d)	{
	try	{
		if(d <= 8)	{
			throw d;
		}
		else	{
			depth9(d);
		}
	}
	catch(int d){
		cout << "Thrown at depth: " << d << " from depth8 function\n";
	}
}

void depth9(int d)	{
	try	{
		if(d <= 9)	{
			throw d;
		}
		else	{
			depth10(d);
		}
	}
	catch(int d){
		cout << "Thrown at depth: " << d << " from depth9 function\n";
	}
}

void depth10(int d)	{
	try	{
		if(d <= 10)	{
			throw d;
		}
		else	{
			cout << "made it to the end wihtout throwing exception. \n";
		}
	}
	catch(int d){
		cout << "Thrown at depth: " << d << " from depth10 function\n";
	}
}