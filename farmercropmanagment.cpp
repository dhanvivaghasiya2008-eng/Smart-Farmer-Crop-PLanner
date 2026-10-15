#include <iostream>
#include <string>
using namespace std;

class Farmer
{
public:
    string farmerName = "";
    float landArea = 0;

    void enterDetails()
    {
        cout << "Enter Farmer Name: ";
        getline(cin >> ws, farmerName);

        cout << "Enter Land Area (acres): ";
        cin >> landArea;

        cout << "\nFarmer details saved successfully!\n";
    }
};

class Crop
{
public:
    string cropName = "";
    float yield = 0, price = 0;

    float seedExpenses = 0, laborExpenses = 0;
    float machineExpenses = 0, packagingExpenses = 0;
    float transportationExpenses = 0, marketFees = 0;
    float extraExpenses = 0, irrigationCost = 0;

    void calculateProfit()
    {
        cout << "Enter Crop Name: ";
        getline(cin >> ws, cropName);

        cout << "Enter Expected Yield (1 quintals = 100 kg): ";
        cin >> yield;

        cout << "Enter Selling Price per Quintal: ";
        cin >> price;

        cout << "Enter Expenses of Seeds (Rs.): ";
        cin >> seedExpenses;

        cout << "Enter Expenses of Labor Charges (Rs.): ";
        cin >> laborExpenses;

        cout << "Enter Expenses of Machine Charges (Rs.): ";
        cin >> machineExpenses;

        cout << "Enter Expenses of Packaging (Rs.): ";
        cin >> packagingExpenses;

        cout << "Enter Expenses of Transportation (Rs.): ";
        cin >> transportationExpenses;

        cout << "Enter Expenses of Market Fees (Rs.): ";
        cin >> marketFees;

        cout << "Enter Expenses of Extra Charges (Rs.): ";
        cin >> extraExpenses;

        cout << "\nCrop details and expenses saved successfully!\n";

        float income = yield * price;

        float totalExpenses = seedExpenses + laborExpenses
                            + machineExpenses + packagingExpenses
                            + transportationExpenses + marketFees
                            + extraExpenses + irrigationCost;

        cout << "\n========== CROP PROFIT REPORT ==========\n";
        cout << "Crop Name       : " << cropName << endl;
        cout << "Total Income    : Rs. " << income << endl;
        cout << "crop Expenses  : Rs. " << totalExpenses << endl;
        cout << "crop Profit    : Rs. "
             << income - totalExpenses << endl;
        cout << "========================================\n";
    }


void irrigationRecord()
{
    string date, method;
    float water;

    if (cropName == "")
    {
        cout << "Please enter crop details first using Choice 2!\n";
        return;
    }

    cout << "\nCrop Name: " << cropName << endl;

    cout << "Enter Irrigation Date (DD/MM/YYYY): ";
    cin >> date;

    cout << "Enter Water Used (litres): ";
    cin >> water;

    cout << "Enter Irrigation Method (Drip/Sprinkler/Flood): ";
    getline(cin >> ws, method);

    cout << "Enter Irrigation Cost (Rs.): ";
    cin >> irrigationCost;

    cout << "\n======= IRRIGATION RECORD =======\n";
    cout << "Crop Name       : " << cropName << endl;
    cout << "Irrigation Date : " << date << endl;
    cout << "Water Used      : " << water << " litres\n";
    cout << "Method          : " << method << endl;
    cout << "Irrigation Cost : Rs. " << irrigationCost << endl;
    cout << "=================================\n";

    cout << "Irrigation record entered successfully!\n";
}



    void viewFarmReport(Farmer &f)
    {
        float income = yield * price;

        float totalExpenses = seedExpenses + laborExpenses
                            + machineExpenses + packagingExpenses
                            + transportationExpenses + marketFees
                            + extraExpenses + irrigationCost;

        float profit = income - totalExpenses;

        cout << "\n========== FARM REPORT ==========\n";
        cout << "Farmer Name          : " << f.farmerName << endl;
        cout << "Land Area            : " << f.landArea << " acres\n";
        cout << "Crop Name            : " << cropName << endl;
        cout << "Total Income         : Rs. " << income << endl;
        cout << "Seed Expenses        : Rs. " << seedExpenses << endl;
        cout << "Labor Expenses       : Rs. " << laborExpenses << endl;
        cout << "Machine Expenses     : Rs. " << machineExpenses << endl;
        cout << "Packaging Expenses   : Rs. " << packagingExpenses << endl;
        cout << "Transportation       : Rs. " << transportationExpenses << endl;
        cout << "Market Fees          : Rs. " << marketFees << endl;
        cout << "Extra Expenses       : Rs. " << extraExpenses << endl;
        cout << "Irrigation Expense   : Rs. " << irrigationCost << endl;
        cout << "---------------------------------\n";
        cout << "Total Expenses       : Rs. " << totalExpenses << endl;
        cout << "Total Profit         : Rs. " << profit << endl;
        cout << "=================================\n";
    }
};

int main()
{
    Farmer f;
    Crop c;
    int choice;

    do
    {
        cout << "\n================================\n";
        cout << "     SMART FARMER CROP PLANNER\n";
        cout << "================================\n";
        cout << "1. Enter Farmer Details\n";
        cout << "2. Crop Record\n";
        cout << "3. Irrigation Record\n";
        cout << "4. View Farm Report\n";
        cout << "5. Exit\n";
        cout << "================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            f.enterDetails();
            break;

        case 2:
            c.calculateProfit();
            break;

        case 3:
            c.irrigationRecord();
            break;

        case 4:
            c.viewFarmReport(f);
            break;

        case 5:
            cout << "Thank you for using Smart Farmer Crop Planner!\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
