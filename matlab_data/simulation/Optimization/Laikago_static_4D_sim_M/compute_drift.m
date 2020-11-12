function c_vec=compute_drift(q,dq)

    c_vec=zeros(18,1);
    
    c_vec=Ce1_vec1_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec2_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec3_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec4_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec5_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec6_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec7_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec8_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec9_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec10_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec11_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec12_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec13_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec14_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec15_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec16_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec17_laikago_description(q,dq)+c_vec;
    c_vec=Ce1_vec18_laikago_description(q,dq)+c_vec;
    
    
    
    c_vec=Ce2_vec1_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec2_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec3_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec4_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec5_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec6_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec7_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec8_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec9_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec10_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec11_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec12_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec13_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec14_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec15_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec16_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec17_laikago_description(q,dq)+c_vec;
    c_vec=Ce2_vec18_laikago_description(q,dq)+c_vec;
    
    
    c_vec=Ce3_vec1_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec2_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec3_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec4_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec5_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec6_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec7_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec8_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec9_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec10_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec11_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec12_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec13_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec14_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec15_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec16_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec17_laikago_description(q,dq)+c_vec;
    c_vec=Ce3_vec18_laikago_description(q,dq)+c_vec;

      
    %G=Ge_vec_NaoH25V50(q,dq);

    c_vec=-c_vec-Ge_vec_laikago_description(q,dq);

end