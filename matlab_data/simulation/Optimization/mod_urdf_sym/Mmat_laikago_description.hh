/*
 * Automatically Generated from Mathematica.
 * Tue 10 Dec 2019 16:03:27 GMT-05:00
 */

#ifndef MMAT_LAIKAGO_DESCRIPTION_HH
#define MMAT_LAIKAGO_DESCRIPTION_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Mmat_laikago_description_raw(double *p_output1, const double *var1);

  inline void Mmat_laikago_description(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 18);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Mmat_laikago_description_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // MMAT_LAIKAGO_DESCRIPTION_HH
