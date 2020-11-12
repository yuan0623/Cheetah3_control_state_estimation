/*
 * Automatically Generated from Mathematica.
 * Sun 26 May 2019 16:50:07 GMT-04:00
 */

#ifndef HC_REDUCED_1_FUNC_HH
#define HC_REDUCED_1_FUNC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void hc_reduced_1_func_raw(double *p_output1, const double *var1);

  inline void hc_reduced_1_func(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 11, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    hc_reduced_1_func_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // HC_REDUCED_1_FUNC_HH
