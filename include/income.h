#ifndef INCOME_H
#define INCOME_H

#include <string>
#include <vector>

class Income {
    private:
        std::string source;
        double amount;
        std::string date;
    public:
        //Constructor
        Income(const std::string source, double amount, std::string date);

        //Getter
        std::string getSource() const;
        double getAmount() const;
        std::string getDate() const;

        //Setter
        void setSource(const std::string& source);
        void setAmount(double amount);
        void setDate(const std::string& date);

        // Static: Manage multiple incomes

        static double calculateTotalIncome(const std::vector<Income>& incomes);

};

#endif