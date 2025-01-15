#include <income.h>


Income::Income(const std::string source, double amount, std::string date) : source(source), amount(amount), date(date)
{
}

//Getter Implementation
std::string Income::getSource() const { return source;}
double Income::getAmount() const { return amount;}
std::string Income::getDate() const {return date;}

//Setter Implementation
void Income::setSource(const std::string& source ) { this -> source = source;}
void Income::setAmount(double amount) { this -> amount = amount;}
void Income::setDate(const std::string& date ) { this -> date = date;}

//Calculate total income 

double Income::calculateTotalIncome(const std::vector<Income>& incomes) {
    double total = 0 ;
    for (const auto& income : incomes) {
        total += income.getAmount();
    }
    return total;
}
