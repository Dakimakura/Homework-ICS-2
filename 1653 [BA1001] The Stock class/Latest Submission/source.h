#include <string>
using namespace std;

class Stock
{
  private:
  	string s, n;
   double p, c;
  public:
    Stock(string symbol, string name){
      s = symbol;
      n = name;
    }
    string getSymbol(){
      return s;
    }
    string getName(){
      return n;
    }
    double getPreviousClosingPrice(){
      return p;
    }
    double getCurrentPrice(){
      return c;
    }
    void setPreviousClosingPrice(double previousClosingPrice){
      p = previousClosingPrice;
    }
    void setCurrentPrice(double currentPrice){
      c = currentPrice;
    }
    double changePercent(){
      return c / p;
    }   
};