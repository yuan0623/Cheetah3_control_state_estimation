/*
 * Automatically Generated from Mathematica.
 * Mon 29 Jul 2019 15:08:36 GMT-04:00
 */

#ifndef SJ_4_FUNC_HH
#define SJ_4_FUNC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Sj_4_func_raw(double *p_output1, const double *var1);

  inline void Sj_4_func(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 18);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Sj_4_func_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // SJ_4_FUNC_HH
