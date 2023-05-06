#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <chrono>
#include <filesystem>
#include <regex>
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;
namespace fs = std::filesystem;

struct DataEntry {
    std::string column_1; // Replace with actual column name
    std::string column_2; // Replace with actual column name
    // Add more columns as needed
};

void loadDataFrame(const fs::path& file_path, std::vector<DataEntry>& data_entries) {
    // Implement the function to read the Excel file and fill the data_entries vector
    // Example: Use a library like xlnt (https://github.com/tfussell/xlnt) to read Excel files in C++

    // ...
}

int main() {
    auto start_time = std::chrono::steady_clock::now();

    fs::path path = "path/to/your/Excel/files/*.xlsx"; // Replace with actual path
    std::vector<fs::path> files;
    std::regex exclusion_regex(".*(PLACEHOLDER_1|\\$|PLACEHOLDER_2).*"); // Replace placeholders with actual exclusions

    // Uncomment and modify the following line to add more exclusions
    // std::regex exclusion_regex(".*(PLACEHOLDER_1|\\$|PLACEHOLDER_2|PLACEHOLDER_3).*");

    for (const auto& entry : fs::directory_iterator(path.parent_path())) {
        if (entry.is_regular_file() &&
            entry.path().extension() == path.extension() &&
            !std::regex_match(entry.path().string(), exclusion_regex)) {
            files.push_back(entry.path());
        }
    }

    std::sort(files.begin(), files.end(), [](const fs::path& a, const fs::path& b) {
        return fs::last_write_time(a) < fs::last_write_time(b);
    });

    std::vector<DataEntry> data_entries;

    for (const auto& file : files) {
        loadDataFrame(file, data_entries);
    }

    auto end_time = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsed_seconds = end_time - start_time;

    std::cout << "Elapsed time: " << elapsed_seconds.count() << " seconds" << std::endl;

    // Add code for data manipulation, filtering, and plotting with matplotlib-cpp

    // Example: Filtering data_entries based on a specific condition
    // std::vector<DataEntry> filtered_data;
    // for (const auto& entry : data_entries) {
    //     if (/* Some condition based on entry */) {
    //         filtered_data.push_back(entry);
    //     }
    // }

    // Example: Plotting data using matplotlib-cpp
    // std::vector<double> x_values, y_values;
    // for (const auto& entry : filtered_data) {
    //     x_values.push_back(/* Value from entry (e.g., date) */);
    //     y_values.push_back(/* Value from entry (e.g., weight) */);
    // }

    // plt::plot(x_values, y_values);
    // plt::xlabel("X-Axis Label");
    // plt::ylabel("Y-Axis Label");
    // plt::title("Plot Title");
    // plt::show();

    return 0;
}
