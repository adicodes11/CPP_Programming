/*

You are running a website, and you are trying to calculate your advertising revenue. Write a program that allows you to enter 3 pieces of data:

- How many ads were watched.
- What percentage of users clicked on an ad.
- The average earnings per clicked ad.

Store those 3 values in a struct. Pass that struct to another function that prints each of the values. The print function should also print how much you made for that day (multiply the 3 fields together).

*/

#include <iostream>

struct AdRevenue
{   
    int adWatchCount{};
    double adClickCountPercentage{};
    const double averageEarningPerAd{4.4};
};

// Function to display the structure content
void displayAdRevenue(AdRevenue& a)
{
    std::cout << "Ad watch count           : " << a.adWatchCount << '\n';
    std::cout << "Ad click count percentage: " << a.adClickCountPercentage << "%\n";
    std::cout << "Average earning per ad   : " << a.averageEarningPerAd << '\n';
    std::cout << "Ad revenue today*        : " << a.adWatchCount * a.adClickCountPercentage * a.averageEarningPerAd << " Rupees\n";
}

int main()
{
    AdRevenue autoproposalai{120, 33.89};  // Not intialized average earning per ad parameter

    // Displaying the details
    displayAdRevenue(autoproposalai);


    return 0;
}



// Learn CPP Solution

/*

#include <iostream>

// First we need to define our Advertising struct
struct Advertising
{
    int adsShown {};
    double clickThroughRatePercentage {};
    double averageEarningsPerClick {};
};

Advertising getAdvertising()
{
    Advertising temp {};
    std::cout << "How many ads were shown today? ";
    std::cin >> temp.adsShown;
    std::cout << "What percentage of ads were clicked on by users? ";
    std::cin >> temp.clickThroughRatePercentage;
    std::cout << "What was the average earnings per click? ";
    std::cin >> temp.averageEarningsPerClick;

    return temp;
}

void printAdvertising(const Advertising& ad)
{
    std::cout << "Number of ads shown: " << ad.adsShown << '\n';
    std::cout << "Click through rate: " << ad.clickThroughRatePercentage << '\n';
    std::cout << "Average earnings per click: $" << ad.averageEarningsPerClick << '\n';

    // The following line is split up to reduce the length
    // We need to divide ad.clickThroughRatePercentage by 100 because it's a percent of 100, not a multiplier
    std::cout << "Total Earnings: $"
        << (ad.adsShown * ad.clickThroughRatePercentage / 100 * ad.averageEarningsPerClick) << '\n';
}

int main()
{
    // Declare an Advertising struct variable
    Advertising ad{ getAdvertising() };
    printAdvertising(ad);

    return 0;
}

*/