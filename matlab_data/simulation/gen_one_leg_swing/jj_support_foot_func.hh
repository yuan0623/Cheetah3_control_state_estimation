/*
 * Automatically Generated from Mathematica.
 * Fri 7 Aug 2020 14:46:45 GMT-04:00
 */

#ifndef JJ_SUPPORT_FOOT_FUNC_HH
#define JJ_SUPPORT_FOOT_FUNC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void jj_support_foot_func_raw(double *p_output1, const double *var1,const double *var2);

  inline void jj_support_foot_func(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 9, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    jj_support_foot_func_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JJ_SUPPORT_FOOT_FUNC_HH
