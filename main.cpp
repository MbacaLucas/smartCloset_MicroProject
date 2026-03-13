#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

struct Category
{
    int id;
    std::string name;
};

struct Garment
{
    int id;
    int categoryId;
    std::string description;
    std::string color;
};

int main()
{
    std::vector<Category> categories{{1, "Top"}, {2, "Bottom"}, {3, "Shoes"}};
    std::vector<Garment> garmets{};

    bool keepRunning{true};
    char addNewItem{};

    while (keepRunning)
    {
        Garment newGarment{};
        int optionCategory{};
        bool isValid{false};
        do
        {
            std::cout << "---GARMENT CLOSET---\n";
            for (const auto &category : categories)
            {
                std::cout << "[" << category.id << "]." << category.name;
            };

            std::cout << "\nChoice: ";
            std::cin >> optionCategory;

            for (const auto &category : categories)
            {
                if (optionCategory == category.id)
                {
                    isValid = true;
                    break;
                }
            }
        } while (!isValid);

        newGarment.categoryId = optionCategory;
        newGarment.id = garmets.size() + 1;

        std::cout << "Enter the garment name: ";
        std::getline(std::cin >> std::ws, newGarment.description);

        std::cout << "Enter the color: ";
        std::cin >> newGarment.color;

        garmets.push_back(newGarment);

        std::cout << "would you like add another one? (y/n)";
        std::cin >> addNewItem;

        if (addNewItem == 'n' || addNewItem == 'N')
        {
            keepRunning = false;
        }
    }
    std::cout << std::left
              << std::setw(5) << "ID"
              << std::setw(15) << "color"
              << std::setw(25) << "Description"
              << "Category\n";
    std::cout << std::string(60, '-') << '\n';

    for (const auto &garment : garmets)
    {
        auto it = std::find_if(categories.begin(), categories.end(), [garment](const Category &c)
                               { return c.id == garment.categoryId; });

        if (it != categories.end())
        {
            std::cout << std::left
                      << std::setw(5) << garment.id
                      << std::setw(15) << garment.color
                      << std::setw(25) << garment.description
                      << it->name << '\n';
        }
    }

    return 0;
}