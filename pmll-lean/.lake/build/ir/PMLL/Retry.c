// Lean compiler output
// Module: PMLL.Retry
// Imports: public import Init public meta import Init public import PMLL
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
lean_object* lp_pmll_PMLL_propagate(lean_object*, lean_object*, lean_object*);
uint8_t lp_pmll_List_any___at___00PMLL_checkConflict_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lp_pmll_PMLL_firstOpen(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_pmll_PMLL_setAsg(lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_pow(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_once_cell_t lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_php(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_pmll_PMLL_dpllBranches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_pmll_PMLL_dpllBranches___closed__0 = (const lean_object*)&lp_pmll_PMLL_dpllBranches___closed__0_value;
static const lean_ctor_object lp_pmll_PMLL_dpllBranches___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_pmll_PMLL_dpllBranches___closed__1 = (const lean_object*)&lp_pmll_PMLL_dpllBranches___closed__1_value;
static const lean_ctor_object lp_pmll_PMLL_dpllBranches___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_pmll_PMLL_dpllBranches___closed__2 = (const lean_object*)&lp_pmll_PMLL_dpllBranches___closed__2_value;
LEAN_EXPORT lean_object* lp_pmll_PMLL_dpllBranches(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_dpllBranches___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__7_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__7_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__5_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__5_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__3_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_phpBranchCount(lean_object*);
LEAN_EXPORT uint8_t lp_pmll_PMLL_underQuadratic(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_underQuadratic___boxed(lean_object*);
static lean_once_cell_t lp_pmll_PMLL_peqnpClaim___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_pmll_PMLL_peqnpClaim___closed__0;
static lean_once_cell_t lp_pmll_PMLL_peqnpClaim___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_pmll_PMLL_peqnpClaim___closed__1;
static lean_once_cell_t lp_pmll_PMLL_peqnpClaim___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_pmll_PMLL_peqnpClaim___closed__2;
static lean_once_cell_t lp_pmll_PMLL_peqnpClaim___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_pmll_PMLL_peqnpClaim___closed__3;
LEAN_EXPORT uint8_t lp_pmll_PMLL_peqnpClaim;
static lean_object* _init_lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(1u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg(lean_object* v_a_3_, lean_object* v_holes_4_, lean_object* v_range_5_, lean_object* v_b_6_, lean_object* v_i_7_){
_start:
{
lean_object* v_stop_8_; lean_object* v_step_9_; uint8_t v___x_10_; 
v_stop_8_ = lean_ctor_get(v_range_5_, 1);
v_step_9_ = lean_ctor_get(v_range_5_, 2);
v___x_10_ = lean_nat_dec_lt(v_i_7_, v_stop_8_);
if (v___x_10_ == 0)
{
lean_dec(v_i_7_);
lean_dec(v_holes_4_);
lean_dec(v_a_3_);
return v_b_6_;
}
else
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_11_ = lean_box(0);
lean_inc(v_a_3_);
v___x_12_ = lean_nat_to_int(v_a_3_);
lean_inc(v_holes_4_);
v___x_13_ = lean_nat_to_int(v_holes_4_);
v___x_14_ = lean_int_mul(v___x_12_, v___x_13_);
lean_dec(v___x_13_);
lean_dec(v___x_12_);
lean_inc(v_i_7_);
v___x_15_ = lean_nat_to_int(v_i_7_);
v___x_16_ = lean_int_add(v___x_14_, v___x_15_);
lean_dec(v___x_15_);
lean_dec(v___x_14_);
v___x_17_ = lean_obj_once(&lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg___closed__0, &lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg___closed__0_once, _init_lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg___closed__0);
v___x_18_ = lean_int_add(v___x_16_, v___x_17_);
lean_dec(v___x_16_);
v___x_19_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
lean_ctor_set(v___x_19_, 1, v___x_11_);
v___x_20_ = l_List_appendTR___redArg(v_b_6_, v___x_19_);
v___x_21_ = lean_nat_add(v_i_7_, v_step_9_);
lean_dec(v_i_7_);
v_b_6_ = v___x_20_;
v_i_7_ = v___x_21_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg___boxed(lean_object* v_a_23_, lean_object* v_holes_24_, lean_object* v_range_25_, lean_object* v_b_26_, lean_object* v_i_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg(v_a_23_, v_holes_24_, v_range_25_, v_b_26_, v_i_27_);
lean_dec_ref(v_range_25_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0___redArg(lean_object* v_holes_29_, lean_object* v_a_30_, lean_object* v_range_31_, lean_object* v_b_32_, lean_object* v_i_33_){
_start:
{
lean_object* v_stop_34_; lean_object* v_step_35_; uint8_t v___x_36_; 
v_stop_34_ = lean_ctor_get(v_range_31_, 1);
v_step_35_ = lean_ctor_get(v_range_31_, 2);
v___x_36_ = lean_nat_dec_lt(v_i_33_, v_stop_34_);
if (v___x_36_ == 0)
{
lean_dec(v_i_33_);
lean_dec(v_a_30_);
lean_dec(v_holes_29_);
return v_b_32_;
}
else
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_37_ = lean_box(0);
lean_inc(v_a_30_);
v___x_38_ = lean_nat_to_int(v_a_30_);
lean_inc(v_holes_29_);
v___x_39_ = lean_nat_to_int(v_holes_29_);
v___x_40_ = lean_int_mul(v___x_38_, v___x_39_);
lean_dec(v___x_39_);
lean_dec(v___x_38_);
lean_inc(v_i_33_);
v___x_41_ = lean_nat_to_int(v_i_33_);
v___x_42_ = lean_int_add(v___x_40_, v___x_41_);
lean_dec(v___x_41_);
lean_dec(v___x_40_);
v___x_43_ = lean_obj_once(&lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg___closed__0, &lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg___closed__0_once, _init_lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg___closed__0);
v___x_44_ = lean_int_add(v___x_42_, v___x_43_);
lean_dec(v___x_42_);
v___x_45_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_45_, 0, v___x_44_);
lean_ctor_set(v___x_45_, 1, v___x_37_);
v___x_46_ = l_List_appendTR___redArg(v_b_32_, v___x_45_);
v___x_47_ = lean_nat_add(v_i_33_, v_step_35_);
lean_dec(v_i_33_);
v___x_48_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg(v_a_30_, v_holes_29_, v_range_31_, v___x_46_, v___x_47_);
return v___x_48_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0___redArg___boxed(lean_object* v_holes_49_, lean_object* v_a_50_, lean_object* v_range_51_, lean_object* v_b_52_, lean_object* v_i_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0___redArg(v_holes_49_, v_a_50_, v_range_51_, v_b_52_, v_i_53_);
lean_dec_ref(v_range_51_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__3___redArg(lean_object* v_holes_55_, lean_object* v_range_56_, lean_object* v_b_57_, lean_object* v_i_58_){
_start:
{
lean_object* v_stop_59_; lean_object* v_step_60_; uint8_t v___x_61_; 
v_stop_59_ = lean_ctor_get(v_range_56_, 1);
v_step_60_ = lean_ctor_get(v_range_56_, 2);
v___x_61_ = lean_nat_dec_lt(v_i_58_, v_stop_59_);
if (v___x_61_ == 0)
{
lean_dec(v_i_58_);
lean_dec(v_holes_55_);
return v_b_57_;
}
else
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v_cs_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_62_ = lean_unsigned_to_nat(0u);
v___x_63_ = lean_unsigned_to_nat(1u);
v_cs_64_ = lean_box(0);
lean_inc_n(v_holes_55_, 2);
v___x_65_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_65_, 0, v___x_62_);
lean_ctor_set(v___x_65_, 1, v_holes_55_);
lean_ctor_set(v___x_65_, 2, v___x_63_);
lean_inc(v_i_58_);
v___x_66_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0___redArg(v_holes_55_, v_i_58_, v___x_65_, v_cs_64_, v___x_62_);
lean_dec_ref_known(v___x_65_, 3);
v___x_67_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set(v___x_67_, 1, v_cs_64_);
v___x_68_ = l_List_appendTR___redArg(v_b_57_, v___x_67_);
v___x_69_ = lean_nat_add(v_i_58_, v_step_60_);
lean_dec(v_i_58_);
v_b_57_ = v___x_68_;
v_i_58_ = v___x_69_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__3___redArg___boxed(lean_object* v_holes_71_, lean_object* v_range_72_, lean_object* v_b_73_, lean_object* v_i_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__3___redArg(v_holes_71_, v_range_72_, v_b_73_, v_i_74_);
lean_dec_ref(v_range_72_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1___redArg___lam__0(lean_object* v_holes_76_, lean_object* v_p_77_, lean_object* v_h_78_){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_79_ = lean_nat_to_int(v_p_77_);
v___x_80_ = lean_nat_to_int(v_holes_76_);
v___x_81_ = lean_int_mul(v___x_79_, v___x_80_);
lean_dec(v___x_80_);
lean_dec(v___x_79_);
v___x_82_ = lean_nat_to_int(v_h_78_);
v___x_83_ = lean_int_add(v___x_81_, v___x_82_);
lean_dec(v___x_82_);
lean_dec(v___x_81_);
v___x_84_ = lean_obj_once(&lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg___closed__0, &lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg___closed__0_once, _init_lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg___closed__0);
v___x_85_ = lean_int_add(v___x_83_, v___x_84_);
lean_dec(v___x_83_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1_spec__2___redArg(lean_object* v_holes_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_range_89_, lean_object* v_b_90_, lean_object* v_i_91_){
_start:
{
lean_object* v_stop_92_; lean_object* v_step_93_; uint8_t v___x_94_; 
v_stop_92_ = lean_ctor_get(v_range_89_, 1);
v_step_93_ = lean_ctor_get(v_range_89_, 2);
v___x_94_ = lean_nat_dec_lt(v_i_91_, v_stop_92_);
if (v___x_94_ == 0)
{
lean_dec(v_i_91_);
lean_dec(v_a_88_);
lean_dec(v_a_87_);
lean_dec(v_holes_86_);
return v_b_90_;
}
else
{
lean_object* v_cs_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v_cs_95_ = lean_box(0);
lean_inc_n(v_a_88_, 2);
lean_inc(v_a_87_);
lean_inc_n(v_holes_86_, 2);
v___x_96_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1___redArg___lam__0(v_holes_86_, v_a_87_, v_a_88_);
v___x_97_ = lean_int_neg(v___x_96_);
lean_dec(v___x_96_);
lean_inc(v_i_91_);
v___x_98_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1___redArg___lam__0(v_holes_86_, v_i_91_, v_a_88_);
v___x_99_ = lean_int_neg(v___x_98_);
lean_dec(v___x_98_);
v___x_100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set(v___x_100_, 1, v_cs_95_);
v___x_101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_97_);
lean_ctor_set(v___x_101_, 1, v___x_100_);
v___x_102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set(v___x_102_, 1, v_cs_95_);
v___x_103_ = l_List_appendTR___redArg(v_b_90_, v___x_102_);
v___x_104_ = lean_nat_add(v_i_91_, v_step_93_);
lean_dec(v_i_91_);
v_b_90_ = v___x_103_;
v_i_91_ = v___x_104_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1_spec__2___redArg___boxed(lean_object* v_holes_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_range_109_, lean_object* v_b_110_, lean_object* v_i_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1_spec__2___redArg(v_holes_106_, v_a_107_, v_a_108_, v_range_109_, v_b_110_, v_i_111_);
lean_dec_ref(v_range_109_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1___redArg(lean_object* v_holes_113_, lean_object* v_a_114_, lean_object* v_a_115_, lean_object* v_range_116_, lean_object* v_b_117_, lean_object* v_i_118_){
_start:
{
lean_object* v_stop_119_; lean_object* v_step_120_; uint8_t v___x_121_; 
v_stop_119_ = lean_ctor_get(v_range_116_, 1);
v_step_120_ = lean_ctor_get(v_range_116_, 2);
v___x_121_ = lean_nat_dec_lt(v_i_118_, v_stop_119_);
if (v___x_121_ == 0)
{
lean_dec(v_i_118_);
lean_dec(v_a_115_);
lean_dec(v_a_114_);
lean_dec(v_holes_113_);
return v_b_117_;
}
else
{
lean_object* v_cs_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v_cs_122_ = lean_box(0);
lean_inc_n(v_a_115_, 2);
lean_inc(v_a_114_);
lean_inc_n(v_holes_113_, 2);
v___x_123_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1___redArg___lam__0(v_holes_113_, v_a_114_, v_a_115_);
v___x_124_ = lean_int_neg(v___x_123_);
lean_dec(v___x_123_);
lean_inc(v_i_118_);
v___x_125_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1___redArg___lam__0(v_holes_113_, v_i_118_, v_a_115_);
v___x_126_ = lean_int_neg(v___x_125_);
lean_dec(v___x_125_);
v___x_127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
lean_ctor_set(v___x_127_, 1, v_cs_122_);
v___x_128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_124_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
v___x_129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
lean_ctor_set(v___x_129_, 1, v_cs_122_);
v___x_130_ = l_List_appendTR___redArg(v_b_117_, v___x_129_);
v___x_131_ = lean_nat_add(v_i_118_, v_step_120_);
lean_dec(v_i_118_);
v___x_132_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1_spec__2___redArg(v_holes_113_, v_a_114_, v_a_115_, v_range_116_, v___x_130_, v___x_131_);
return v___x_132_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1___redArg___boxed(lean_object* v_holes_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_range_136_, lean_object* v_b_137_, lean_object* v_i_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1___redArg(v_holes_133_, v_a_134_, v_a_135_, v_range_136_, v_b_137_, v_i_138_);
lean_dec_ref(v_range_136_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2_spec__4___redArg(lean_object* v_pigeons_140_, lean_object* v_holes_141_, lean_object* v_a_142_, lean_object* v_range_143_, lean_object* v_b_144_, lean_object* v_i_145_){
_start:
{
lean_object* v_stop_146_; lean_object* v_step_147_; uint8_t v___x_148_; 
v_stop_146_ = lean_ctor_get(v_range_143_, 1);
v_step_147_ = lean_ctor_get(v_range_143_, 2);
v___x_148_ = lean_nat_dec_lt(v_i_145_, v_stop_146_);
if (v___x_148_ == 0)
{
lean_dec(v_i_145_);
lean_dec(v_a_142_);
lean_dec(v_holes_141_);
lean_dec(v_pigeons_140_);
return v_b_144_;
}
else
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_149_ = lean_unsigned_to_nat(1u);
v___x_150_ = lean_nat_add(v_i_145_, v___x_149_);
lean_inc(v_pigeons_140_);
lean_inc(v___x_150_);
v___x_151_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v_pigeons_140_);
lean_ctor_set(v___x_151_, 2, v___x_149_);
lean_inc(v_a_142_);
lean_inc(v_i_145_);
lean_inc(v_holes_141_);
v___x_152_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1___redArg(v_holes_141_, v_i_145_, v_a_142_, v___x_151_, v_b_144_, v___x_150_);
lean_dec_ref_known(v___x_151_, 3);
v___x_153_ = lean_nat_add(v_i_145_, v_step_147_);
lean_dec(v_i_145_);
v_b_144_ = v___x_152_;
v_i_145_ = v___x_153_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2_spec__4___redArg___boxed(lean_object* v_pigeons_155_, lean_object* v_holes_156_, lean_object* v_a_157_, lean_object* v_range_158_, lean_object* v_b_159_, lean_object* v_i_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2_spec__4___redArg(v_pigeons_155_, v_holes_156_, v_a_157_, v_range_158_, v_b_159_, v_i_160_);
lean_dec_ref(v_range_158_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2___redArg(lean_object* v_holes_162_, lean_object* v_a_163_, lean_object* v_pigeons_164_, lean_object* v_range_165_, lean_object* v_b_166_, lean_object* v_i_167_){
_start:
{
lean_object* v_stop_168_; lean_object* v_step_169_; uint8_t v___x_170_; 
v_stop_168_ = lean_ctor_get(v_range_165_, 1);
v_step_169_ = lean_ctor_get(v_range_165_, 2);
v___x_170_ = lean_nat_dec_lt(v_i_167_, v_stop_168_);
if (v___x_170_ == 0)
{
lean_dec(v_i_167_);
lean_dec(v_pigeons_164_);
lean_dec(v_a_163_);
lean_dec(v_holes_162_);
return v_b_166_;
}
else
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_171_ = lean_unsigned_to_nat(1u);
v___x_172_ = lean_nat_add(v_i_167_, v___x_171_);
lean_inc(v_pigeons_164_);
lean_inc(v___x_172_);
v___x_173_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
lean_ctor_set(v___x_173_, 1, v_pigeons_164_);
lean_ctor_set(v___x_173_, 2, v___x_171_);
lean_inc(v_a_163_);
lean_inc(v_i_167_);
lean_inc(v_holes_162_);
v___x_174_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1___redArg(v_holes_162_, v_i_167_, v_a_163_, v___x_173_, v_b_166_, v___x_172_);
lean_dec_ref_known(v___x_173_, 3);
v___x_175_ = lean_nat_add(v_i_167_, v_step_169_);
lean_dec(v_i_167_);
v___x_176_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2_spec__4___redArg(v_pigeons_164_, v_holes_162_, v_a_163_, v_range_165_, v___x_174_, v___x_175_);
return v___x_176_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2___redArg___boxed(lean_object* v_holes_177_, lean_object* v_a_178_, lean_object* v_pigeons_179_, lean_object* v_range_180_, lean_object* v_b_181_, lean_object* v_i_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2___redArg(v_holes_177_, v_a_178_, v_pigeons_179_, v_range_180_, v_b_181_, v_i_182_);
lean_dec_ref(v_range_180_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__4___redArg(lean_object* v_holes_184_, lean_object* v_pigeons_185_, lean_object* v___x_186_, lean_object* v_range_187_, lean_object* v_b_188_, lean_object* v_i_189_){
_start:
{
lean_object* v_stop_190_; lean_object* v_step_191_; uint8_t v___x_192_; 
v_stop_190_ = lean_ctor_get(v_range_187_, 1);
v_step_191_ = lean_ctor_get(v_range_187_, 2);
v___x_192_ = lean_nat_dec_lt(v_i_189_, v_stop_190_);
if (v___x_192_ == 0)
{
lean_dec(v_i_189_);
lean_dec(v_pigeons_185_);
lean_dec(v_holes_184_);
return v_b_188_;
}
else
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_193_ = lean_unsigned_to_nat(0u);
lean_inc(v_pigeons_185_);
lean_inc(v_i_189_);
lean_inc(v_holes_184_);
v___x_194_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2___redArg(v_holes_184_, v_i_189_, v_pigeons_185_, v___x_186_, v_b_188_, v___x_193_);
v___x_195_ = lean_nat_add(v_i_189_, v_step_191_);
lean_dec(v_i_189_);
v_b_188_ = v___x_194_;
v_i_189_ = v___x_195_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__4___redArg___boxed(lean_object* v_holes_197_, lean_object* v_pigeons_198_, lean_object* v___x_199_, lean_object* v_range_200_, lean_object* v_b_201_, lean_object* v_i_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__4___redArg(v_holes_197_, v_pigeons_198_, v___x_199_, v_range_200_, v_b_201_, v_i_202_);
lean_dec_ref(v_range_200_);
lean_dec_ref(v___x_199_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_php(lean_object* v_pigeons_204_, lean_object* v_holes_205_){
_start:
{
lean_object* v_cs_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v_cs_206_ = lean_box(0);
v___x_207_ = lean_unsigned_to_nat(0u);
v___x_208_ = lean_unsigned_to_nat(1u);
lean_inc(v_pigeons_204_);
v___x_209_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_209_, 0, v___x_207_);
lean_ctor_set(v___x_209_, 1, v_pigeons_204_);
lean_ctor_set(v___x_209_, 2, v___x_208_);
lean_inc_n(v_holes_205_, 2);
v___x_210_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__3___redArg(v_holes_205_, v___x_209_, v_cs_206_, v___x_207_);
v___x_211_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_211_, 0, v___x_207_);
lean_ctor_set(v___x_211_, 1, v_holes_205_);
lean_ctor_set(v___x_211_, 2, v___x_208_);
v___x_212_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__4___redArg(v_holes_205_, v_pigeons_204_, v___x_209_, v___x_211_, v___x_210_, v___x_207_);
lean_dec_ref_known(v___x_211_, 3);
lean_dec_ref_known(v___x_209_, 3);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0(lean_object* v_holes_213_, lean_object* v_a_214_, lean_object* v_range_215_, lean_object* v_b_216_, lean_object* v_i_217_, lean_object* v_hs_218_, lean_object* v_hl_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0___redArg(v_holes_213_, v_a_214_, v_range_215_, v_b_216_, v_i_217_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0___boxed(lean_object* v_holes_221_, lean_object* v_a_222_, lean_object* v_range_223_, lean_object* v_b_224_, lean_object* v_i_225_, lean_object* v_hs_226_, lean_object* v_hl_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0(v_holes_221_, v_a_222_, v_range_223_, v_b_224_, v_i_225_, v_hs_226_, v_hl_227_);
lean_dec_ref(v_range_223_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1(lean_object* v_holes_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_range_232_, lean_object* v_b_233_, lean_object* v_i_234_, lean_object* v_hs_235_, lean_object* v_hl_236_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1___redArg(v_holes_229_, v_a_230_, v_a_231_, v_range_232_, v_b_233_, v_i_234_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1___boxed(lean_object* v_holes_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_range_241_, lean_object* v_b_242_, lean_object* v_i_243_, lean_object* v_hs_244_, lean_object* v_hl_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1(v_holes_238_, v_a_239_, v_a_240_, v_range_241_, v_b_242_, v_i_243_, v_hs_244_, v_hl_245_);
lean_dec_ref(v_range_241_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2(lean_object* v_holes_247_, lean_object* v_a_248_, lean_object* v_pigeons_249_, lean_object* v_range_250_, lean_object* v_b_251_, lean_object* v_i_252_, lean_object* v_hs_253_, lean_object* v_hl_254_){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2___redArg(v_holes_247_, v_a_248_, v_pigeons_249_, v_range_250_, v_b_251_, v_i_252_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2___boxed(lean_object* v_holes_256_, lean_object* v_a_257_, lean_object* v_pigeons_258_, lean_object* v_range_259_, lean_object* v_b_260_, lean_object* v_i_261_, lean_object* v_hs_262_, lean_object* v_hl_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2(v_holes_256_, v_a_257_, v_pigeons_258_, v_range_259_, v_b_260_, v_i_261_, v_hs_262_, v_hl_263_);
lean_dec_ref(v_range_259_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__3(lean_object* v_holes_265_, lean_object* v_range_266_, lean_object* v_b_267_, lean_object* v_i_268_, lean_object* v_hs_269_, lean_object* v_hl_270_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__3___redArg(v_holes_265_, v_range_266_, v_b_267_, v_i_268_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__3___boxed(lean_object* v_holes_272_, lean_object* v_range_273_, lean_object* v_b_274_, lean_object* v_i_275_, lean_object* v_hs_276_, lean_object* v_hl_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__3(v_holes_272_, v_range_273_, v_b_274_, v_i_275_, v_hs_276_, v_hl_277_);
lean_dec_ref(v_range_273_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__4(lean_object* v_holes_279_, lean_object* v_pigeons_280_, lean_object* v___x_281_, lean_object* v_range_282_, lean_object* v_b_283_, lean_object* v_i_284_, lean_object* v_hs_285_, lean_object* v_hl_286_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__4___redArg(v_holes_279_, v_pigeons_280_, v___x_281_, v_range_282_, v_b_283_, v_i_284_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__4___boxed(lean_object* v_holes_288_, lean_object* v_pigeons_289_, lean_object* v___x_290_, lean_object* v_range_291_, lean_object* v_b_292_, lean_object* v_i_293_, lean_object* v_hs_294_, lean_object* v_hl_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__4(v_holes_288_, v_pigeons_289_, v___x_290_, v_range_291_, v_b_292_, v_i_293_, v_hs_294_, v_hl_295_);
lean_dec_ref(v_range_291_);
lean_dec_ref(v___x_290_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0(lean_object* v_a_297_, lean_object* v_holes_298_, lean_object* v_range_299_, lean_object* v_b_300_, lean_object* v_i_301_, lean_object* v_hs_302_, lean_object* v_hl_303_){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___redArg(v_a_297_, v_holes_298_, v_range_299_, v_b_300_, v_i_301_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0___boxed(lean_object* v_a_305_, lean_object* v_holes_306_, lean_object* v_range_307_, lean_object* v_b_308_, lean_object* v_i_309_, lean_object* v_hs_310_, lean_object* v_hl_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__0_spec__0(v_a_305_, v_holes_306_, v_range_307_, v_b_308_, v_i_309_, v_hs_310_, v_hl_311_);
lean_dec_ref(v_range_307_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1_spec__2(lean_object* v_holes_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_range_316_, lean_object* v_b_317_, lean_object* v_i_318_, lean_object* v_hs_319_, lean_object* v_hl_320_){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1_spec__2___redArg(v_holes_313_, v_a_314_, v_a_315_, v_range_316_, v_b_317_, v_i_318_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1_spec__2___boxed(lean_object* v_holes_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_range_325_, lean_object* v_b_326_, lean_object* v_i_327_, lean_object* v_hs_328_, lean_object* v_hl_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__1_spec__2(v_holes_322_, v_a_323_, v_a_324_, v_range_325_, v_b_326_, v_i_327_, v_hs_328_, v_hl_329_);
lean_dec_ref(v_range_325_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2_spec__4(lean_object* v_pigeons_331_, lean_object* v_holes_332_, lean_object* v_a_333_, lean_object* v_range_334_, lean_object* v_b_335_, lean_object* v_i_336_, lean_object* v_hs_337_, lean_object* v_hl_338_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2_spec__4___redArg(v_pigeons_331_, v_holes_332_, v_a_333_, v_range_334_, v_b_335_, v_i_336_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2_spec__4___boxed(lean_object* v_pigeons_340_, lean_object* v_holes_341_, lean_object* v_a_342_, lean_object* v_range_343_, lean_object* v_b_344_, lean_object* v_i_345_, lean_object* v_hs_346_, lean_object* v_hl_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php_spec__2_spec__4(v_pigeons_340_, v_holes_341_, v_a_342_, v_range_343_, v_b_344_, v_i_345_, v_hs_346_, v_hl_347_);
lean_dec_ref(v_range_343_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_dpllBranches(lean_object* v_n_361_, lean_object* v_clauses_362_, lean_object* v_a_363_, lean_object* v_depth_364_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = lp_pmll_PMLL_propagate(v_n_361_, v_clauses_362_, v_a_363_);
if (lean_obj_tag(v___x_365_) == 0)
{
lean_object* v___x_366_; 
v___x_366_ = ((lean_object*)(lp_pmll_PMLL_dpllBranches___closed__0));
return v___x_366_;
}
else
{
lean_object* v_val_367_; uint8_t v___x_368_; 
v_val_367_ = lean_ctor_get(v___x_365_, 0);
lean_inc(v_val_367_);
lean_dec_ref_known(v___x_365_, 1);
v___x_368_ = lp_pmll_List_any___at___00PMLL_checkConflict_spec__0(v_n_361_, v_val_367_, v_clauses_362_);
if (v___x_368_ == 0)
{
lean_object* v___x_369_; 
v___x_369_ = lp_pmll_PMLL_firstOpen(v_val_367_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v___x_370_; 
lean_dec(v_val_367_);
v___x_370_ = ((lean_object*)(lp_pmll_PMLL_dpllBranches___closed__1));
return v___x_370_;
}
else
{
lean_object* v_val_371_; lean_object* v_zero_372_; uint8_t v_isZero_373_; 
v_val_371_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_val_371_);
lean_dec_ref_known(v___x_369_, 1);
v_zero_372_ = lean_unsigned_to_nat(0u);
v_isZero_373_ = lean_nat_dec_eq(v_depth_364_, v_zero_372_);
if (v_isZero_373_ == 1)
{
lean_object* v___x_374_; 
lean_dec(v_val_371_);
lean_dec(v_val_367_);
v___x_374_ = ((lean_object*)(lp_pmll_PMLL_dpllBranches___closed__2));
return v___x_374_;
}
else
{
lean_object* v_one_375_; lean_object* v_n_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v_fst_379_; uint8_t v___x_380_; 
v_one_375_ = lean_unsigned_to_nat(1u);
v_n_376_ = lean_nat_sub(v_depth_364_, v_one_375_);
lean_inc(v_val_371_);
lean_inc(v_val_367_);
v___x_377_ = lp_pmll_PMLL_setAsg(v_val_367_, v_val_371_, v___x_368_);
v___x_378_ = lp_pmll_PMLL_dpllBranches(v_n_361_, v_clauses_362_, v___x_377_, v_n_376_);
v_fst_379_ = lean_ctor_get(v___x_378_, 0);
v___x_380_ = lean_unbox(v_fst_379_);
if (v___x_380_ == 2)
{
lean_object* v_snd_381_; uint8_t v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v_fst_385_; lean_object* v_snd_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_395_; 
v_snd_381_ = lean_ctor_get(v___x_378_, 1);
lean_inc(v_snd_381_);
lean_dec_ref(v___x_378_);
v___x_382_ = 1;
v___x_383_ = lp_pmll_PMLL_setAsg(v_val_367_, v_val_371_, v___x_382_);
v___x_384_ = lp_pmll_PMLL_dpllBranches(v_n_361_, v_clauses_362_, v___x_383_, v_n_376_);
lean_dec(v_n_376_);
v_fst_385_ = lean_ctor_get(v___x_384_, 0);
v_snd_386_ = lean_ctor_get(v___x_384_, 1);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_384_);
if (v_isSharedCheck_395_ == 0)
{
v___x_388_ = v___x_384_;
v_isShared_389_ = v_isSharedCheck_395_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_snd_386_);
lean_inc(v_fst_385_);
lean_dec(v___x_384_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_395_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_393_; 
v___x_390_ = lean_nat_add(v_snd_381_, v_snd_386_);
lean_dec(v_snd_386_);
lean_dec(v_snd_381_);
v___x_391_ = lean_nat_add(v___x_390_, v_one_375_);
lean_dec(v___x_390_);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 1, v___x_391_);
v___x_393_ = v___x_388_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_fst_385_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v___x_391_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
else
{
lean_object* v_snd_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_404_; 
lean_inc(v_fst_379_);
lean_dec(v_n_376_);
lean_dec(v_val_371_);
lean_dec(v_val_367_);
v_snd_396_ = lean_ctor_get(v___x_378_, 1);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_404_ == 0)
{
lean_object* v_unused_405_; 
v_unused_405_ = lean_ctor_get(v___x_378_, 0);
lean_dec(v_unused_405_);
v___x_398_ = v___x_378_;
v_isShared_399_ = v_isSharedCheck_404_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_snd_396_);
lean_dec(v___x_378_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_404_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_400_; lean_object* v___x_402_; 
v___x_400_ = lean_nat_add(v_snd_396_, v_one_375_);
lean_dec(v_snd_396_);
if (v_isShared_399_ == 0)
{
lean_ctor_set(v___x_398_, 1, v___x_400_);
v___x_402_ = v___x_398_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_fst_379_);
lean_ctor_set(v_reuseFailAlloc_403_, 1, v___x_400_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
}
}
}
}
}
}
else
{
lean_object* v___x_406_; 
lean_dec(v_val_367_);
v___x_406_ = ((lean_object*)(lp_pmll_PMLL_dpllBranches___closed__0));
return v___x_406_;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_dpllBranches___boxed(lean_object* v_n_407_, lean_object* v_clauses_408_, lean_object* v_a_409_, lean_object* v_depth_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = lp_pmll_PMLL_dpllBranches(v_n_407_, v_clauses_408_, v_a_409_, v_depth_410_);
lean_dec(v_depth_410_);
lean_dec(v_clauses_408_);
lean_dec(v_n_407_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__7_splitter___redArg(lean_object* v_x_412_, lean_object* v_h__1_413_, lean_object* v_h__2_414_){
_start:
{
if (lean_obj_tag(v_x_412_) == 0)
{
lean_object* v___x_415_; lean_object* v___x_416_; 
lean_dec(v_h__2_414_);
v___x_415_ = lean_box(0);
v___x_416_ = lean_apply_1(v_h__1_413_, v___x_415_);
return v___x_416_;
}
else
{
lean_object* v_val_417_; lean_object* v___x_418_; 
lean_dec(v_h__1_413_);
v_val_417_ = lean_ctor_get(v_x_412_, 0);
lean_inc(v_val_417_);
lean_dec_ref_known(v_x_412_, 1);
v___x_418_ = lean_apply_1(v_h__2_414_, v_val_417_);
return v___x_418_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__7_splitter(lean_object* v_motive_419_, lean_object* v_x_420_, lean_object* v_h__1_421_, lean_object* v_h__2_422_){
_start:
{
if (lean_obj_tag(v_x_420_) == 0)
{
lean_object* v___x_423_; lean_object* v___x_424_; 
lean_dec(v_h__2_422_);
v___x_423_ = lean_box(0);
v___x_424_ = lean_apply_1(v_h__1_421_, v___x_423_);
return v___x_424_;
}
else
{
lean_object* v_val_425_; lean_object* v___x_426_; 
lean_dec(v_h__1_421_);
v_val_425_ = lean_ctor_get(v_x_420_, 0);
lean_inc(v_val_425_);
lean_dec_ref_known(v_x_420_, 1);
v___x_426_ = lean_apply_1(v_h__2_422_, v_val_425_);
return v___x_426_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__5_splitter___redArg(lean_object* v_x_427_, lean_object* v_h__1_428_, lean_object* v_h__2_429_){
_start:
{
if (lean_obj_tag(v_x_427_) == 0)
{
lean_object* v___x_430_; lean_object* v___x_431_; 
lean_dec(v_h__2_429_);
v___x_430_ = lean_box(0);
v___x_431_ = lean_apply_1(v_h__1_428_, v___x_430_);
return v___x_431_;
}
else
{
lean_object* v_val_432_; lean_object* v___x_433_; 
lean_dec(v_h__1_428_);
v_val_432_ = lean_ctor_get(v_x_427_, 0);
lean_inc(v_val_432_);
lean_dec_ref_known(v_x_427_, 1);
v___x_433_ = lean_apply_1(v_h__2_429_, v_val_432_);
return v___x_433_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__5_splitter(lean_object* v_motive_434_, lean_object* v_x_435_, lean_object* v_h__1_436_, lean_object* v_h__2_437_){
_start:
{
if (lean_obj_tag(v_x_435_) == 0)
{
lean_object* v___x_438_; lean_object* v___x_439_; 
lean_dec(v_h__2_437_);
v___x_438_ = lean_box(0);
v___x_439_ = lean_apply_1(v_h__1_436_, v___x_438_);
return v___x_439_;
}
else
{
lean_object* v_val_440_; lean_object* v___x_441_; 
lean_dec(v_h__1_436_);
v_val_440_ = lean_ctor_get(v_x_435_, 0);
lean_inc(v_val_440_);
lean_dec_ref_known(v_x_435_, 1);
v___x_441_ = lean_apply_1(v_h__2_437_, v_val_440_);
return v___x_441_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__3_splitter___redArg(lean_object* v_depth_442_, lean_object* v_h__1_443_, lean_object* v_h__2_444_){
_start:
{
lean_object* v_zero_445_; uint8_t v_isZero_446_; 
v_zero_445_ = lean_unsigned_to_nat(0u);
v_isZero_446_ = lean_nat_dec_eq(v_depth_442_, v_zero_445_);
if (v_isZero_446_ == 1)
{
lean_object* v___x_447_; lean_object* v___x_448_; 
lean_dec(v_h__2_444_);
v___x_447_ = lean_box(0);
v___x_448_ = lean_apply_1(v_h__1_443_, v___x_447_);
return v___x_448_;
}
else
{
lean_object* v_one_449_; lean_object* v_n_450_; lean_object* v___x_451_; 
lean_dec(v_h__1_443_);
v_one_449_ = lean_unsigned_to_nat(1u);
v_n_450_ = lean_nat_sub(v_depth_442_, v_one_449_);
v___x_451_ = lean_apply_1(v_h__2_444_, v_n_450_);
return v___x_451_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__3_splitter___redArg___boxed(lean_object* v_depth_452_, lean_object* v_h__1_453_, lean_object* v_h__2_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__3_splitter___redArg(v_depth_452_, v_h__1_453_, v_h__2_454_);
lean_dec(v_depth_452_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__3_splitter(lean_object* v_motive_456_, lean_object* v_depth_457_, lean_object* v_h__1_458_, lean_object* v_h__2_459_){
_start:
{
lean_object* v_zero_460_; uint8_t v_isZero_461_; 
v_zero_460_ = lean_unsigned_to_nat(0u);
v_isZero_461_ = lean_nat_dec_eq(v_depth_457_, v_zero_460_);
if (v_isZero_461_ == 1)
{
lean_object* v___x_462_; lean_object* v___x_463_; 
lean_dec(v_h__2_459_);
v___x_462_ = lean_box(0);
v___x_463_ = lean_apply_1(v_h__1_458_, v___x_462_);
return v___x_463_;
}
else
{
lean_object* v_one_464_; lean_object* v_n_465_; lean_object* v___x_466_; 
lean_dec(v_h__1_458_);
v_one_464_ = lean_unsigned_to_nat(1u);
v_n_465_ = lean_nat_sub(v_depth_457_, v_one_464_);
v___x_466_ = lean_apply_1(v_h__2_459_, v_n_465_);
return v___x_466_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__3_splitter___boxed(lean_object* v_motive_467_, lean_object* v_depth_468_, lean_object* v_h__1_469_, lean_object* v_h__2_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__3_splitter(v_motive_467_, v_depth_468_, v_h__1_469_, v_h__2_470_);
lean_dec(v_depth_468_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__1_splitter___redArg(lean_object* v_x_472_, lean_object* v_h__1_473_, lean_object* v_h__2_474_, lean_object* v_h__3_475_){
_start:
{
lean_object* v_fst_476_; uint8_t v___x_477_; 
v_fst_476_ = lean_ctor_get(v_x_472_, 0);
v___x_477_ = lean_unbox(v_fst_476_);
switch(v___x_477_)
{
case 0:
{
lean_object* v_snd_478_; lean_object* v___x_479_; 
lean_dec(v_h__3_475_);
lean_dec(v_h__1_473_);
v_snd_478_ = lean_ctor_get(v_x_472_, 1);
lean_inc(v_snd_478_);
lean_dec_ref(v_x_472_);
v___x_479_ = lean_apply_1(v_h__2_474_, v_snd_478_);
return v___x_479_;
}
case 1:
{
lean_object* v_snd_480_; lean_object* v___x_481_; 
lean_dec(v_h__3_475_);
lean_dec(v_h__2_474_);
v_snd_480_ = lean_ctor_get(v_x_472_, 1);
lean_inc(v_snd_480_);
lean_dec_ref(v_x_472_);
v___x_481_ = lean_apply_1(v_h__1_473_, v_snd_480_);
return v___x_481_;
}
default: 
{
lean_object* v_snd_482_; lean_object* v___x_483_; 
lean_dec(v_h__2_474_);
lean_dec(v_h__1_473_);
v_snd_482_ = lean_ctor_get(v_x_472_, 1);
lean_inc(v_snd_482_);
lean_dec_ref(v_x_472_);
v___x_483_ = lean_apply_1(v_h__3_475_, v_snd_482_);
return v___x_483_;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_Retry_0__PMLL_dpllBranches_match__1_splitter(lean_object* v_motive_484_, lean_object* v_x_485_, lean_object* v_h__1_486_, lean_object* v_h__2_487_, lean_object* v_h__3_488_){
_start:
{
lean_object* v_fst_489_; uint8_t v___x_490_; 
v_fst_489_ = lean_ctor_get(v_x_485_, 0);
v___x_490_ = lean_unbox(v_fst_489_);
switch(v___x_490_)
{
case 0:
{
lean_object* v_snd_491_; lean_object* v___x_492_; 
lean_dec(v_h__3_488_);
lean_dec(v_h__1_486_);
v_snd_491_ = lean_ctor_get(v_x_485_, 1);
lean_inc(v_snd_491_);
lean_dec_ref(v_x_485_);
v___x_492_ = lean_apply_1(v_h__2_487_, v_snd_491_);
return v___x_492_;
}
case 1:
{
lean_object* v_snd_493_; lean_object* v___x_494_; 
lean_dec(v_h__3_488_);
lean_dec(v_h__2_487_);
v_snd_493_ = lean_ctor_get(v_x_485_, 1);
lean_inc(v_snd_493_);
lean_dec_ref(v_x_485_);
v___x_494_ = lean_apply_1(v_h__1_486_, v_snd_493_);
return v___x_494_;
}
default: 
{
lean_object* v_snd_495_; lean_object* v___x_496_; 
lean_dec(v_h__2_487_);
lean_dec(v_h__1_486_);
v_snd_495_ = lean_ctor_get(v_x_485_, 1);
lean_inc(v_snd_495_);
lean_dec_ref(v_x_485_);
v___x_496_ = lean_apply_1(v_h__3_488_, v_snd_495_);
return v___x_496_;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_phpBranchCount(lean_object* v_k_497_){
_start:
{
lean_object* v___x_498_; lean_object* v_holes_499_; lean_object* v_n_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v_snd_507_; 
v___x_498_ = lean_unsigned_to_nat(1u);
v_holes_499_ = lean_nat_sub(v_k_497_, v___x_498_);
v_n_500_ = lean_nat_mul(v_k_497_, v_holes_499_);
v___x_501_ = lp_pmll_PMLL_php(v_k_497_, v_holes_499_);
v___x_502_ = lean_box(0);
lean_inc(v_n_500_);
v___x_503_ = l_List_replicateTR___redArg(v_n_500_, v___x_502_);
v___x_504_ = lean_unsigned_to_nat(2u);
v___x_505_ = lean_nat_add(v_n_500_, v___x_504_);
v___x_506_ = lp_pmll_PMLL_dpllBranches(v_n_500_, v___x_501_, v___x_503_, v___x_505_);
lean_dec(v___x_505_);
lean_dec(v___x_501_);
lean_dec(v_n_500_);
v_snd_507_ = lean_ctor_get(v___x_506_, 1);
lean_inc(v_snd_507_);
lean_dec_ref(v___x_506_);
return v_snd_507_;
}
}
LEAN_EXPORT uint8_t lp_pmll_PMLL_underQuadratic(lean_object* v_k_508_){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; uint8_t v___x_515_; 
lean_inc(v_k_508_);
v___x_509_ = lp_pmll_PMLL_phpBranchCount(v_k_508_);
v___x_510_ = lean_unsigned_to_nat(1u);
v___x_511_ = lean_nat_sub(v_k_508_, v___x_510_);
v___x_512_ = lean_nat_mul(v_k_508_, v___x_511_);
lean_dec(v___x_511_);
lean_dec(v_k_508_);
v___x_513_ = lean_unsigned_to_nat(2u);
v___x_514_ = lean_nat_pow(v___x_512_, v___x_513_);
lean_dec(v___x_512_);
v___x_515_ = lean_nat_dec_le(v___x_509_, v___x_514_);
lean_dec(v___x_514_);
lean_dec(v___x_509_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_underQuadratic___boxed(lean_object* v_k_516_){
_start:
{
uint8_t v_res_517_; lean_object* v_r_518_; 
v_res_517_ = lp_pmll_PMLL_underQuadratic(v_k_516_);
v_r_518_ = lean_box(v_res_517_);
return v_r_518_;
}
}
static uint8_t _init_lp_pmll_PMLL_peqnpClaim___closed__0(void){
_start:
{
lean_object* v___x_519_; uint8_t v___x_520_; 
v___x_519_ = lean_unsigned_to_nat(4u);
v___x_520_ = lp_pmll_PMLL_underQuadratic(v___x_519_);
return v___x_520_;
}
}
static uint8_t _init_lp_pmll_PMLL_peqnpClaim___closed__1(void){
_start:
{
lean_object* v___x_521_; uint8_t v___x_522_; 
v___x_521_ = lean_unsigned_to_nat(5u);
v___x_522_ = lp_pmll_PMLL_underQuadratic(v___x_521_);
return v___x_522_;
}
}
static uint8_t _init_lp_pmll_PMLL_peqnpClaim___closed__2(void){
_start:
{
lean_object* v___x_523_; uint8_t v___x_524_; 
v___x_523_ = lean_unsigned_to_nat(6u);
v___x_524_ = lp_pmll_PMLL_underQuadratic(v___x_523_);
return v___x_524_;
}
}
static uint8_t _init_lp_pmll_PMLL_peqnpClaim___closed__3(void){
_start:
{
lean_object* v___x_525_; uint8_t v___x_526_; 
v___x_525_ = lean_unsigned_to_nat(7u);
v___x_526_ = lp_pmll_PMLL_underQuadratic(v___x_525_);
return v___x_526_;
}
}
static uint8_t _init_lp_pmll_PMLL_peqnpClaim(void){
_start:
{
uint8_t v___x_527_; 
v___x_527_ = lean_uint8_once(&lp_pmll_PMLL_peqnpClaim___closed__0, &lp_pmll_PMLL_peqnpClaim___closed__0_once, _init_lp_pmll_PMLL_peqnpClaim___closed__0);
if (v___x_527_ == 0)
{
return v___x_527_;
}
else
{
uint8_t v___x_528_; 
v___x_528_ = lean_uint8_once(&lp_pmll_PMLL_peqnpClaim___closed__1, &lp_pmll_PMLL_peqnpClaim___closed__1_once, _init_lp_pmll_PMLL_peqnpClaim___closed__1);
if (v___x_528_ == 0)
{
return v___x_528_;
}
else
{
uint8_t v___x_529_; 
v___x_529_ = lean_uint8_once(&lp_pmll_PMLL_peqnpClaim___closed__2, &lp_pmll_PMLL_peqnpClaim___closed__2_once, _init_lp_pmll_PMLL_peqnpClaim___closed__2);
if (v___x_529_ == 0)
{
return v___x_529_;
}
else
{
uint8_t v___x_530_; 
v___x_530_ = lean_uint8_once(&lp_pmll_PMLL_peqnpClaim___closed__3, &lp_pmll_PMLL_peqnpClaim___closed__3_once, _init_lp_pmll_PMLL_peqnpClaim___closed__3);
return v___x_530_;
}
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_pmll_PMLL(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_pmll_PMLL_Retry(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_pmll_PMLL(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_pmll_PMLL_peqnpClaim = _init_lp_pmll_PMLL_peqnpClaim();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
