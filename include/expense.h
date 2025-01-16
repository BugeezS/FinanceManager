#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>
#include <vector>

class Expense {
    private:
        std::string category;
        std::string description;
        double amount;
        std::string date;
    public:
        //Constructor
        Expense(const std::string category, std::string description, double amount, std::string date);

        //Getter
        std::string getCategory() const;
        std::string getDescription() const;
        double getAmount() const;
        std::string getDate() const;

        void setCategory(const std::string& category);
        void setDescription(const std::string& description);
        void setAmount(double amount);
        void setDate(const std::string& date);

        static double calculateTotalExpense(const std::vector<Expense>& expenses);


};
#endif
