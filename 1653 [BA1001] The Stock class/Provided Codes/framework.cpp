// =====================
// framework source code
// =====================
#include <iostream>
#include <iomanip>

#include "source.h"
using namespace std;

void print(Stock &obj)
{
  cout << fixed << setprecision(2) 
  << obj.getSymbol() << " " << obj.getName() << " " << obj.getPreviousClosingPrice() << " " << obj.getCurrentPrice() << " " 
  << obj.changePercent()
  << endl;
}


int main() {
	Stock obj1("SUNW","Sun Microsystems Inc");
	obj1.setPreviousClosingPrice(100);
	obj1.setCurrentPrice(90);
	print(obj1);
	//Stock obj2("A", "A Inc");
	//print(obj2);

	return 0;
}
                                
