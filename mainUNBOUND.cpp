// #define PRINT

#include <algorithm>
#include <iostream>
#include <vector>


#include "LinearConstrainSystem.hpp"
#include "Tableau.hpp"


int main() {
    // creating a new instance of LinearConstrainSystem<double>
    LinearConstrainSystem<double> lcs;

    // aadding following constrains to system:

    lcs.add_constrain({ 1, -4 }, 8, LinearConstrainSystem<double>::ConstrainType::LE);
    lcs.add_constrain({ -1, 1 }, 6, LinearConstrainSystem<double>::ConstrainType::LE);
    lcs.add_constrain({ -3, 2 }, 5, LinearConstrainSystem<double>::ConstrainType::LE);

    // checking if the system is feasible
    lcs.is_feasible();

    // creating a vector for objective function coefficients
    std::vector<double> c = { 2, 5 };

    // creating a vector for optimal solution
    std::vector<double> solution;

    // performing optimization for constrain system with objective function c*x
    LinearConstrainSystem<double>::SolutionType result = lcs.optimize(solution, c, LinearConstrainSystem<double>::OptimizationType::MAX);



    return 0;
}