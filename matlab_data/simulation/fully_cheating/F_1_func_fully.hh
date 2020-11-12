/*
 * Automatically Generated from Mathematica.
 * Fri 10 May 2019 20:22:34 GMT-04:00
 */

#ifndef F_1_FUNC_FULLY_HH
#define F_1_FUNC_FULLY_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void F_1_func_fully_raw(double *p_output1, const double *var1);

  inline void F_1_func_fully(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 12, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    F_1_func_fully_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // F_1_FUNC_FULLY_HH
