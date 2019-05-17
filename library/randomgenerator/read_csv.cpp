#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <map>

#include <stdlib.h>
#include <Eigen/Dense>
using Eigen::MatrixXd;

int main(int argc, char* argv[])
{
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " path_to_file" << std::endl;
        return (-1);
    }

    std::ifstream fin;
    fin.open(argv[1]);
    
    std::vector< std::vector<std::string> > rows;
    while(!fin.eof()) {
        std::string line;
        getline(fin, line);
        std::cout << line << std::endl;
        
        if (line.empty()) {
            continue;
        }
        std::stringstream ss(line);
        std::vector<std::string> columns;
        std::string columnValue;
        while(getline(ss,columnValue, ',')) {
            columns.push_back(columnValue);
        }
        if (columns.size() != 9) {
            continue; 
        }
        rows.push_back(columns);
    } 
    fin.close();

    MatrixXd serials(rows.size(), 7);
    std::cout << "construct matrix" << std::endl;
    for (int i=0; i< rows.size(); i++) {
        std::vector<std::string> columns = rows[i];
        serials(i, 0) = atoi(columns[2].c_str());
        serials(i, 1) = atoi(columns[3].c_str());
        serials(i, 2) = atoi(columns[4].c_str());
        serials(i, 3) = atoi(columns[5].c_str());
        serials(i, 4) = atoi(columns[6].c_str());
        serials(i, 5) = atoi(columns[7].c_str());
        serials(i, 6) = atoi(columns[8].c_str());
    } 
    std::cout << "matrix:" << std::endl;
    std::cout << serials << std::endl;
}
