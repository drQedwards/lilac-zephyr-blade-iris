// Lean compiler output
// Module: PMLL.Continue
// Imports: public import Init public meta import Init public import PMLL.Retry public import PMLL.Develop
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
lean_object* l_List_range(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00PMLL_fact_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00PMLL_fact_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_fact(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00PMLL_fact_spec__0(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
return v_x_1_;
}
else
{
lean_object* v_head_3_; lean_object* v_tail_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v_head_3_ = lean_ctor_get(v_x_2_, 0);
v_tail_4_ = lean_ctor_get(v_x_2_, 1);
v___x_5_ = lean_unsigned_to_nat(1u);
v___x_6_ = lean_nat_add(v_head_3_, v___x_5_);
v___x_7_ = lean_nat_mul(v_x_1_, v___x_6_);
lean_dec(v___x_6_);
lean_dec(v_x_1_);
v_x_1_ = v___x_7_;
v_x_2_ = v_tail_4_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00PMLL_fact_spec__0___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = lp_pmll_List_foldl___at___00PMLL_fact_spec__0(v_x_9_, v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_fact(lean_object* v_n_12_){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_13_ = lean_unsigned_to_nat(1u);
v___x_14_ = l_List_range(v_n_12_);
v___x_15_ = lp_pmll_List_foldl___at___00PMLL_fact_spec__0(v___x_13_, v___x_14_);
lean_dec(v___x_14_);
return v___x_15_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_pmll_PMLL_Retry(uint8_t builtin);
lean_object* initialize_pmll_PMLL_Develop(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_pmll_PMLL_Continue(uint8_t builtin) {
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
res = initialize_pmll_PMLL_Retry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_pmll_PMLL_Develop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
