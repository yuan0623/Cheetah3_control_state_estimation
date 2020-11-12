function c_vec=compute_drift(q,dq)


    c_vec=zeros(18,1);
    
    c_vec=Ce1_vec1_plane(q,dq)+c_vec;
    c_vec=Ce1_vec2_plane(q,dq)+c_vec;
    c_vec=Ce1_vec3_plane(q,dq)+c_vec;
    c_vec=Ce1_vec4_plane(q,dq)+c_vec;
    c_vec=Ce1_vec5_plane(q,dq)+c_vec;
    c_vec=Ce1_vec6_plane(q,dq)+c_vec;
    c_vec=Ce1_vec7_plane(q,dq)+c_vec;
    c_vec=Ce1_vec8_plane(q,dq)+c_vec;
    c_vec=Ce1_vec9_plane(q,dq)+c_vec;
    c_vec=Ce1_vec10_plane(q,dq)+c_vec;
    c_vec=Ce1_vec11_plane(q,dq)+c_vec;
    c_vec=Ce1_vec12_plane(q,dq)+c_vec;
    c_vec=Ce1_vec13_plane(q,dq)+c_vec;
    c_vec=Ce1_vec14_plane(q,dq)+c_vec;
    c_vec=Ce1_vec15_plane(q,dq)+c_vec;
    c_vec=Ce1_vec16_plane(q,dq)+c_vec;
    c_vec=Ce1_vec17_plane(q,dq)+c_vec;
    c_vec=Ce1_vec18_plane(q,dq)+c_vec;
    
    
    
    c_vec=Ce2_vec1_plane(q,dq)+c_vec;
    c_vec=Ce2_vec2_plane(q,dq)+c_vec;
    c_vec=Ce2_vec3_plane(q,dq)+c_vec;
    c_vec=Ce2_vec4_plane(q,dq)+c_vec;
    c_vec=Ce2_vec5_plane(q,dq)+c_vec;
    c_vec=Ce2_vec6_plane(q,dq)+c_vec;
    c_vec=Ce2_vec7_plane(q,dq)+c_vec;
    c_vec=Ce2_vec8_plane(q,dq)+c_vec;
    c_vec=Ce2_vec9_plane(q,dq)+c_vec;
    c_vec=Ce2_vec10_plane(q,dq)+c_vec;
    c_vec=Ce2_vec11_plane(q,dq)+c_vec;
    c_vec=Ce2_vec12_plane(q,dq)+c_vec;
    c_vec=Ce2_vec13_plane(q,dq)+c_vec;
    c_vec=Ce2_vec14_plane(q,dq)+c_vec;
    c_vec=Ce2_vec15_plane(q,dq)+c_vec;
    c_vec=Ce2_vec16_plane(q,dq)+c_vec;
    c_vec=Ce2_vec17_plane(q,dq)+c_vec;
    c_vec=Ce2_vec18_plane(q,dq)+c_vec;
    
    
    c_vec=Ce3_vec1_plane(q,dq)+c_vec;
    c_vec=Ce3_vec2_plane(q,dq)+c_vec;
    c_vec=Ce3_vec3_plane(q,dq)+c_vec;
    c_vec=Ce3_vec4_plane(q,dq)+c_vec;
    c_vec=Ce3_vec5_plane(q,dq)+c_vec;
    c_vec=Ce3_vec6_plane(q,dq)+c_vec;
    c_vec=Ce3_vec7_plane(q,dq)+c_vec;
    c_vec=Ce3_vec8_plane(q,dq)+c_vec;
    c_vec=Ce3_vec9_plane(q,dq)+c_vec;
    c_vec=Ce3_vec10_plane(q,dq)+c_vec;
    c_vec=Ce3_vec11_plane(q,dq)+c_vec;
    c_vec=Ce3_vec12_plane(q,dq)+c_vec;
    c_vec=Ce3_vec13_plane(q,dq)+c_vec;
    c_vec=Ce3_vec14_plane(q,dq)+c_vec;
    c_vec=Ce3_vec15_plane(q,dq)+c_vec;
    c_vec=Ce3_vec16_plane(q,dq)+c_vec;
    c_vec=Ce3_vec17_plane(q,dq)+c_vec;
    c_vec=Ce3_vec18_plane(q,dq)+c_vec;
    

    
    
    
    %G=Ge_vec_NaoH25V50(q,dq);

    c_vec=-c_vec-Ge_vec_plane(q,dq);

end