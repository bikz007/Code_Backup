////////////////////////////////////////////////////////////////////////////////
//   ____  ____  
//  /   /\/   /  
// /___/  \  /   
// \   \   \/    
//  \   \        Copyright (c) 2003-2004 Xilinx, Inc.
//  /   /        All Right Reserved. 
// /___/   /\   
// \   \  /  \  
//  \___\/\___\ 
////////////////////////////////////////////////////////////////////////////////

#ifndef H_workM_f_u_l_l___s_u_b_t_r_a_c_t_o_r___s_H
#define H_workM_f_u_l_l___s_u_b_t_r_a_c_t_o_r___s_H

#ifdef _MSC_VER
#pragma warning(disable: 4355)
#endif

#ifdef __MINGW32__
#include "xsimMinGW.h"
#else
#include "xsim.h"
#endif

class workM_f_u_l_l___s_u_b_t_r_a_c_t_o_r___s : public HSim__s5{
public: 
    workM_f_u_l_l___s_u_b_t_r_a_c_t_o_r___s(const char *instname);
    ~workM_f_u_l_l___s_u_b_t_r_a_c_t_o_r___s();
    void setDefparam();
    void constructObject();
    void moduleInstantiate(HSimConfigDecl *cfg);
    void connectSigs();
    void reset();
    virtual void archImplement();
    HSim__s1 us[2];
    HSim__s3 uv[3];
};

#endif
