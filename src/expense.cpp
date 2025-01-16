#include <expense.h>

Expense::Expense(const std::string category, std::string description, double amount, std::string date ) : category(category), description(description), amount(amount), date(date){}

//Getter Implementation 
std::string Expense::getCategory() const { return category;}
std::string Expense::getDescription() const { return description;}
double Expense::getAmount() const { return amount;}
std::string Expense::getDate() const {return date;}

//Setter Implementation
void Expense::setCategory(const std::string& category) { this -> category = category;}
void Expense::setDescription(const std::string& description) { this -> description = description;}
void Expense::setAmount(double amount) { this -> amount = amount;}
void Expense::setDate(const std::string& date ) { this -> date = date;}

double Expense::calculateTotalExpense(const std::vector<Expense>& expenses) {
    double total = 0;
    for (const auto& expense : expenses) {
        total += expense.getAmount();
    }
    return total;
}