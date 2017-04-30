 class Account{
   private:
    int id;
    double balance, rate;
   public:
    Account(){
         id = 0;
         balance = 0;
         rate = 0;
       }
    Account(int a, double b, double c){
         id = a;
         balance = b;
         rate = c;
       }
    double getMonthlyInterestRate(){
         return rate/12;
       }
    void setId(int a){
         id = a;
       }
    void setBalance(double b){
         balance = b;
       }
    void setAnnualInterestRate(double c){
         rate = c;
       }
    int getId(){
         return id;
       }
    double getBalance(){
         return balance;
       }
 };