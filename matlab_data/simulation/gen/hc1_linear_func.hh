/*
 * Automatically Generated from Mathematica.
 * Sat 6 Jul 2019 20:01:38 GMT-04:00
 */

#ifndef HC1_LINEAR_FUNC_HH
#define HC1_LINEAR_FUNC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void hc1_linear_func_raw(double *p_output1, const double *var1);

  inline void hc1_linear_func(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 11, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    hc1_linear_func_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // HC1_LINEAR_FUNC_HH
