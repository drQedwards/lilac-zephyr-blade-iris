// Lean compiler output
// Module: PMLL.Promise
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
lean_object* lp_pmll_PMLL_peek(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lp_pmll_instBEqOption_beq___at___00PMLL_peek_spec__0(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_pmll_PMLL_refine(lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lp_pmll_PMLL_Silo_record(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lp_pmll_PMLL_Silo_empty(lean_object*);
extern lean_object* lp_pmll_PMLL_satExample;
lean_object* lp_pmll_PMLL_budgetFor(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_pending_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_pending_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_ready_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_ready_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_pmll_PMLL_instReprPromise_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "PMLL.Promise.pending"};
static const lean_object* lp_pmll_PMLL_instReprPromise_repr___closed__0 = (const lean_object*)&lp_pmll_PMLL_instReprPromise_repr___closed__0_value;
static const lean_ctor_object lp_pmll_PMLL_instReprPromise_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprPromise_repr___closed__0_value)}};
static const lean_object* lp_pmll_PMLL_instReprPromise_repr___closed__1 = (const lean_object*)&lp_pmll_PMLL_instReprPromise_repr___closed__1_value;
static lean_once_cell_t lp_pmll_PMLL_instReprPromise_repr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprPromise_repr___closed__2;
static lean_once_cell_t lp_pmll_PMLL_instReprPromise_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprPromise_repr___closed__3;
static const lean_string_object lp_pmll_PMLL_instReprPromise_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "PMLL.Promise.ready"};
static const lean_object* lp_pmll_PMLL_instReprPromise_repr___closed__4 = (const lean_object*)&lp_pmll_PMLL_instReprPromise_repr___closed__4_value;
static const lean_ctor_object lp_pmll_PMLL_instReprPromise_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprPromise_repr___closed__4_value)}};
static const lean_object* lp_pmll_PMLL_instReprPromise_repr___closed__5 = (const lean_object*)&lp_pmll_PMLL_instReprPromise_repr___closed__5_value;
static const lean_ctor_object lp_pmll_PMLL_instReprPromise_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprPromise_repr___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_pmll_PMLL_instReprPromise_repr___closed__6 = (const lean_object*)&lp_pmll_PMLL_instReprPromise_repr___closed__6_value;
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprPromise_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprPromise_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_pmll_PMLL_instReprPromise___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_pmll_PMLL_instReprPromise_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_pmll_PMLL_instReprPromise___closed__0 = (const lean_object*)&lp_pmll_PMLL_instReprPromise___closed__0_value;
LEAN_EXPORT const lean_object* lp_pmll_PMLL_instReprPromise = (const lean_object*)&lp_pmll_PMLL_instReprPromise___closed__0_value;
LEAN_EXPORT uint8_t lp_pmll_PMLL_instDecidableEqPromise_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instDecidableEqPromise_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_pmll_PMLL_instDecidableEqPromise(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instDecidableEqPromise___boxed(lean_object*, lean_object*);
static const lean_string_object lp_pmll_PMLL_iterKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "iter:"};
static const lean_object* lp_pmll_PMLL_iterKey___closed__0 = (const lean_object*)&lp_pmll_PMLL_iterKey___closed__0_value;
LEAN_EXPORT lean_object* lp_pmll_PMLL_iterKey(lean_object*);
static const lean_string_object lp_pmll_PMLL_solKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sol"};
static const lean_object* lp_pmll_PMLL_solKey___closed__0 = (const lean_object*)&lp_pmll_PMLL_solKey___closed__0_value;
LEAN_EXPORT const lean_object* lp_pmll_PMLL_solKey = (const lean_object*)&lp_pmll_PMLL_solKey___closed__0_value;
static const lean_string_object lp_pmll_PMLL_deposit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "no solution in this iteration"};
static const lean_object* lp_pmll_PMLL_deposit___closed__0 = (const lean_object*)&lp_pmll_PMLL_deposit___closed__0_value;
LEAN_EXPORT lean_object* lp_pmll_PMLL_deposit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00PMLL_iterations_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_iterations(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_mapTR_loop___at___00PMLL_peekPast_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_mapTR_loop___at___00PMLL_peekPast_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_peekPast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_peekPast___boxed(lean_object*, lean_object*);
static const lean_string_object lp_pmll_List_foldl___at___00PMLL_renderAsg_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* lp_pmll_List_foldl___at___00PMLL_renderAsg_spec__0___closed__0 = (const lean_object*)&lp_pmll_List_foldl___at___00PMLL_renderAsg_spec__0___closed__0_value;
static const lean_string_object lp_pmll_List_foldl___at___00PMLL_renderAsg_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "=false"};
static const lean_object* lp_pmll_List_foldl___at___00PMLL_renderAsg_spec__0___closed__1 = (const lean_object*)&lp_pmll_List_foldl___at___00PMLL_renderAsg_spec__0___closed__1_value;
static const lean_string_object lp_pmll_List_foldl___at___00PMLL_renderAsg_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "=true"};
static const lean_object* lp_pmll_List_foldl___at___00PMLL_renderAsg_spec__0___closed__2 = (const lean_object*)&lp_pmll_List_foldl___at___00PMLL_renderAsg_spec__0___closed__2_value;
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00PMLL_renderAsg_spec__0(lean_object*, lean_object*);
static const lean_ctor_object lp_pmll_PMLL_renderAsg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_pmll_PMLL_renderAsg___closed__0 = (const lean_object*)&lp_pmll_PMLL_renderAsg___closed__0_value;
static const lean_string_object lp_pmll_PMLL_renderAsg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* lp_pmll_PMLL_renderAsg___closed__1 = (const lean_object*)&lp_pmll_PMLL_renderAsg___closed__1_value;
LEAN_EXPORT lean_object* lp_pmll_PMLL_renderAsg(lean_object*);
static const lean_ctor_object lp_pmll_List_all___at___00PMLL_resolveFrom_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_deposit___closed__0_value)}};
static const lean_object* lp_pmll_List_all___at___00PMLL_resolveFrom_spec__0___closed__0 = (const lean_object*)&lp_pmll_List_all___at___00PMLL_resolveFrom_spec__0___closed__0_value;
LEAN_EXPORT uint8_t lp_pmll_List_all___at___00PMLL_resolveFrom_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_all___at___00PMLL_resolveFrom_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_resolveFrom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_resolveFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_pmll_PMLL_resolveUnknown___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_resolveUnknown___closed__0;
LEAN_EXPORT lean_object* lp_pmll_PMLL_resolveUnknown(lean_object*);
static const lean_string_object lp_pmll_PMLL_resolveKnown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "x1=false x2=true"};
static const lean_object* lp_pmll_PMLL_resolveKnown___closed__0 = (const lean_object*)&lp_pmll_PMLL_resolveKnown___closed__0_value;
LEAN_EXPORT lean_object* lp_pmll_PMLL_resolveKnown(lean_object*);
static lean_once_cell_t lp_pmll_PMLL_unknownSolution___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_unknownSolution___closed__0;
LEAN_EXPORT lean_object* lp_pmll_PMLL_unknownSolution;
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = lp_pmll_PMLL_Promise_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 0)
{
return v_k_6_;
}
else
{
lean_object* v_solution_7_; uint8_t v_wasUnknown_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v_solution_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_solution_7_);
v_wasUnknown_8_ = lean_ctor_get_uint8(v_t_5_, sizeof(void*)*1);
lean_dec_ref_known(v_t_5_, 1);
v___x_9_ = lean_box(v_wasUnknown_8_);
v___x_10_ = lean_apply_2(v_k_6_, v_solution_7_, v___x_9_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, lean_object* v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lp_pmll_PMLL_Promise_ctorElim___redArg(v_t_13_, v_k_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_ctorElim___boxed(lean_object* v_motive_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = lp_pmll_PMLL_Promise_ctorElim(v_motive_17_, v_ctorIdx_18_, v_t_19_, v_h_20_, v_k_21_);
lean_dec(v_ctorIdx_18_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_pending_elim___redArg(lean_object* v_t_23_, lean_object* v_pending_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lp_pmll_PMLL_Promise_ctorElim___redArg(v_t_23_, v_pending_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_pending_elim(lean_object* v_motive_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_pending_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lp_pmll_PMLL_Promise_ctorElim___redArg(v_t_27_, v_pending_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_ready_elim___redArg(lean_object* v_t_31_, lean_object* v_ready_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lp_pmll_PMLL_Promise_ctorElim___redArg(v_t_31_, v_ready_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Promise_ready_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_ready_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lp_pmll_PMLL_Promise_ctorElim___redArg(v_t_35_, v_ready_37_);
return v___x_38_;
}
}
static lean_object* _init_lp_pmll_PMLL_instReprPromise_repr___closed__2(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_unsigned_to_nat(2u);
v___x_43_ = lean_nat_to_int(v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_lp_pmll_PMLL_instReprPromise_repr___closed__3(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = lean_unsigned_to_nat(1u);
v___x_45_ = lean_nat_to_int(v___x_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprPromise_repr(lean_object* v_x_52_, lean_object* v_prec_53_){
_start:
{
lean_object* v___y_55_; 
if (lean_obj_tag(v_x_52_) == 0)
{
lean_object* v___x_61_; uint8_t v___x_62_; 
v___x_61_ = lean_unsigned_to_nat(1024u);
v___x_62_ = lean_nat_dec_le(v___x_61_, v_prec_53_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; 
v___x_63_ = lean_obj_once(&lp_pmll_PMLL_instReprPromise_repr___closed__2, &lp_pmll_PMLL_instReprPromise_repr___closed__2_once, _init_lp_pmll_PMLL_instReprPromise_repr___closed__2);
v___y_55_ = v___x_63_;
goto v___jp_54_;
}
else
{
lean_object* v___x_64_; 
v___x_64_ = lean_obj_once(&lp_pmll_PMLL_instReprPromise_repr___closed__3, &lp_pmll_PMLL_instReprPromise_repr___closed__3_once, _init_lp_pmll_PMLL_instReprPromise_repr___closed__3);
v___y_55_ = v___x_64_;
goto v___jp_54_;
}
}
else
{
lean_object* v_solution_65_; uint8_t v_wasUnknown_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_90_; 
v_solution_65_ = lean_ctor_get(v_x_52_, 0);
v_wasUnknown_66_ = lean_ctor_get_uint8(v_x_52_, sizeof(void*)*1);
v_isSharedCheck_90_ = !lean_is_exclusive(v_x_52_);
if (v_isSharedCheck_90_ == 0)
{
v___x_68_ = v_x_52_;
v_isShared_69_ = v_isSharedCheck_90_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_solution_65_);
lean_dec(v_x_52_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_90_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v___y_71_; lean_object* v___x_86_; uint8_t v___x_87_; 
v___x_86_ = lean_unsigned_to_nat(1024u);
v___x_87_ = lean_nat_dec_le(v___x_86_, v_prec_53_);
if (v___x_87_ == 0)
{
lean_object* v___x_88_; 
v___x_88_ = lean_obj_once(&lp_pmll_PMLL_instReprPromise_repr___closed__2, &lp_pmll_PMLL_instReprPromise_repr___closed__2_once, _init_lp_pmll_PMLL_instReprPromise_repr___closed__2);
v___y_71_ = v___x_88_;
goto v___jp_70_;
}
else
{
lean_object* v___x_89_; 
v___x_89_ = lean_obj_once(&lp_pmll_PMLL_instReprPromise_repr___closed__3, &lp_pmll_PMLL_instReprPromise_repr___closed__3_once, _init_lp_pmll_PMLL_instReprPromise_repr___closed__3);
v___y_71_ = v___x_89_;
goto v___jp_70_;
}
v___jp_70_:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; uint8_t v___x_81_; lean_object* v___x_83_; 
v___x_72_ = lean_box(1);
v___x_73_ = ((lean_object*)(lp_pmll_PMLL_instReprPromise_repr___closed__6));
v___x_74_ = l_String_quote(v_solution_65_);
v___x_75_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_73_);
lean_ctor_set(v___x_76_, 1, v___x_75_);
v___x_77_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
lean_ctor_set(v___x_77_, 1, v___x_72_);
v___x_78_ = l_Bool_repr___redArg(v_wasUnknown_66_);
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_77_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
lean_inc(v___y_71_);
v___x_80_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_80_, 0, v___y_71_);
lean_ctor_set(v___x_80_, 1, v___x_79_);
v___x_81_ = 0;
if (v_isShared_69_ == 0)
{
lean_ctor_set_tag(v___x_68_, 6);
lean_ctor_set(v___x_68_, 0, v___x_80_);
v___x_83_ = v___x_68_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v___x_80_);
v___x_83_ = v_reuseFailAlloc_85_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
lean_object* v___x_84_; 
lean_ctor_set_uint8(v___x_83_, sizeof(void*)*1, v___x_81_);
v___x_84_ = l_Repr_addAppParen(v___x_83_, v_prec_53_);
return v___x_84_;
}
}
}
}
v___jp_54_:
{
lean_object* v___x_56_; lean_object* v___x_57_; uint8_t v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_56_ = ((lean_object*)(lp_pmll_PMLL_instReprPromise_repr___closed__1));
lean_inc(v___y_55_);
v___x_57_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_57_, 0, v___y_55_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
v___x_58_ = 0;
v___x_59_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_59_, 0, v___x_57_);
lean_ctor_set_uint8(v___x_59_, sizeof(void*)*1, v___x_58_);
v___x_60_ = l_Repr_addAppParen(v___x_59_, v_prec_53_);
return v___x_60_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprPromise_repr___boxed(lean_object* v_x_91_, lean_object* v_prec_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = lp_pmll_PMLL_instReprPromise_repr(v_x_91_, v_prec_92_);
lean_dec(v_prec_92_);
return v_res_93_;
}
}
LEAN_EXPORT uint8_t lp_pmll_PMLL_instDecidableEqPromise_decEq(lean_object* v_x_96_, lean_object* v_x_97_){
_start:
{
if (lean_obj_tag(v_x_96_) == 0)
{
if (lean_obj_tag(v_x_97_) == 0)
{
uint8_t v___x_98_; 
v___x_98_ = 1;
return v___x_98_;
}
else
{
uint8_t v___x_99_; 
v___x_99_ = 0;
return v___x_99_;
}
}
else
{
if (lean_obj_tag(v_x_97_) == 0)
{
uint8_t v___x_100_; 
v___x_100_ = 0;
return v___x_100_;
}
else
{
lean_object* v_solution_101_; uint8_t v_wasUnknown_102_; lean_object* v_solution_103_; uint8_t v_wasUnknown_104_; uint8_t v___x_105_; 
v_solution_101_ = lean_ctor_get(v_x_96_, 0);
v_wasUnknown_102_ = lean_ctor_get_uint8(v_x_96_, sizeof(void*)*1);
v_solution_103_ = lean_ctor_get(v_x_97_, 0);
v_wasUnknown_104_ = lean_ctor_get_uint8(v_x_97_, sizeof(void*)*1);
v___x_105_ = lean_string_dec_eq(v_solution_101_, v_solution_103_);
if (v___x_105_ == 0)
{
return v___x_105_;
}
else
{
if (v_wasUnknown_104_ == 0)
{
if (v_wasUnknown_102_ == 0)
{
return v___x_105_;
}
else
{
return v_wasUnknown_104_;
}
}
else
{
return v_wasUnknown_102_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instDecidableEqPromise_decEq___boxed(lean_object* v_x_106_, lean_object* v_x_107_){
_start:
{
uint8_t v_res_108_; lean_object* v_r_109_; 
v_res_108_ = lp_pmll_PMLL_instDecidableEqPromise_decEq(v_x_106_, v_x_107_);
lean_dec(v_x_107_);
lean_dec(v_x_106_);
v_r_109_ = lean_box(v_res_108_);
return v_r_109_;
}
}
LEAN_EXPORT uint8_t lp_pmll_PMLL_instDecidableEqPromise(lean_object* v_x_110_, lean_object* v_x_111_){
_start:
{
uint8_t v___x_112_; 
v___x_112_ = lp_pmll_PMLL_instDecidableEqPromise_decEq(v_x_110_, v_x_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instDecidableEqPromise___boxed(lean_object* v_x_113_, lean_object* v_x_114_){
_start:
{
uint8_t v_res_115_; lean_object* v_r_116_; 
v_res_115_ = lp_pmll_PMLL_instDecidableEqPromise(v_x_113_, v_x_114_);
lean_dec(v_x_114_);
lean_dec(v_x_113_);
v_r_116_ = lean_box(v_res_115_);
return v_r_116_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_iterKey(lean_object* v_i_118_){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_119_ = ((lean_object*)(lp_pmll_PMLL_iterKey___closed__0));
v___x_120_ = l_Nat_reprFast(v_i_118_);
v___x_121_ = lean_string_append(v___x_119_, v___x_120_);
lean_dec_ref(v___x_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_deposit(lean_object* v_s_125_, lean_object* v_i_126_){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
lean_inc(v_i_126_);
v___x_127_ = lp_pmll_PMLL_iterKey(v_i_126_);
v___x_128_ = ((lean_object*)(lp_pmll_PMLL_deposit___closed__0));
v___x_129_ = lp_pmll_PMLL_Silo_record(v_s_125_, v_i_126_, v___x_127_, v___x_128_);
lean_dec(v_i_126_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00PMLL_iterations_spec__0(lean_object* v_x_130_, lean_object* v_x_131_){
_start:
{
if (lean_obj_tag(v_x_131_) == 0)
{
return v_x_130_;
}
else
{
lean_object* v_head_132_; lean_object* v_tail_133_; lean_object* v___x_134_; 
v_head_132_ = lean_ctor_get(v_x_131_, 0);
lean_inc(v_head_132_);
v_tail_133_ = lean_ctor_get(v_x_131_, 1);
lean_inc(v_tail_133_);
lean_dec_ref_known(v_x_131_, 2);
v___x_134_ = lp_pmll_PMLL_deposit(v_x_130_, v_head_132_);
v_x_130_ = v___x_134_;
v_x_131_ = v_tail_133_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_iterations(lean_object* v_fuel_136_, lean_object* v_s_137_){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = l_List_range(v_fuel_136_);
v___x_139_ = lp_pmll_List_foldl___at___00PMLL_iterations_spec__0(v_s_137_, v___x_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_mapTR_loop___at___00PMLL_peekPast_spec__0(lean_object* v_s_140_, lean_object* v_a_141_, lean_object* v_a_142_){
_start:
{
if (lean_obj_tag(v_a_141_) == 0)
{
lean_object* v___x_143_; 
v___x_143_ = l_List_reverse___redArg(v_a_142_);
return v___x_143_;
}
else
{
lean_object* v_head_144_; lean_object* v_tail_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_155_; 
v_head_144_ = lean_ctor_get(v_a_141_, 0);
v_tail_145_ = lean_ctor_get(v_a_141_, 1);
v_isSharedCheck_155_ = !lean_is_exclusive(v_a_141_);
if (v_isSharedCheck_155_ == 0)
{
v___x_147_ = v_a_141_;
v_isShared_148_ = v_isSharedCheck_155_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_tail_145_);
lean_inc(v_head_144_);
lean_dec(v_a_141_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_155_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_152_; 
v___x_149_ = lp_pmll_PMLL_iterKey(v_head_144_);
v___x_150_ = lp_pmll_PMLL_peek(v_s_140_, v___x_149_);
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 1, v_a_142_);
lean_ctor_set(v___x_147_, 0, v___x_150_);
v___x_152_ = v___x_147_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v___x_150_);
lean_ctor_set(v_reuseFailAlloc_154_, 1, v_a_142_);
v___x_152_ = v_reuseFailAlloc_154_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
v_a_141_ = v_tail_145_;
v_a_142_ = v___x_152_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_mapTR_loop___at___00PMLL_peekPast_spec__0___boxed(lean_object* v_s_156_, lean_object* v_a_157_, lean_object* v_a_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = lp_pmll_List_mapTR_loop___at___00PMLL_peekPast_spec__0(v_s_156_, v_a_157_, v_a_158_);
lean_dec_ref(v_s_156_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_peekPast(lean_object* v_s_160_, lean_object* v_fuel_161_){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_162_ = l_List_range(v_fuel_161_);
v___x_163_ = lean_box(0);
v___x_164_ = lp_pmll_List_mapTR_loop___at___00PMLL_peekPast_spec__0(v_s_160_, v___x_162_, v___x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_peekPast___boxed(lean_object* v_s_165_, lean_object* v_fuel_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = lp_pmll_PMLL_peekPast(v_s_165_, v_fuel_166_);
lean_dec_ref(v_s_165_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00PMLL_renderAsg_spec__0(lean_object* v_x_171_, lean_object* v_x_172_){
_start:
{
if (lean_obj_tag(v_x_172_) == 0)
{
return v_x_171_;
}
else
{
lean_object* v_head_173_; lean_object* v_tail_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_217_; 
v_head_173_ = lean_ctor_get(v_x_172_, 0);
v_tail_174_ = lean_ctor_get(v_x_172_, 1);
v_isSharedCheck_217_ = !lean_is_exclusive(v_x_172_);
if (v_isSharedCheck_217_ == 0)
{
v___x_176_ = v_x_172_;
v_isShared_177_ = v_isSharedCheck_217_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_tail_174_);
lean_inc(v_head_173_);
lean_dec(v_x_172_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_217_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v_fst_178_; lean_object* v_snd_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_216_; 
v_fst_178_ = lean_ctor_get(v_x_171_, 0);
v_snd_179_ = lean_ctor_get(v_x_171_, 1);
v_isSharedCheck_216_ = !lean_is_exclusive(v_x_171_);
if (v_isSharedCheck_216_ == 0)
{
v___x_181_ = v_x_171_;
v_isShared_182_ = v_isSharedCheck_216_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_snd_179_);
lean_inc(v_fst_178_);
lean_dec(v_x_171_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_216_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___y_184_; 
if (lean_obj_tag(v_head_173_) == 0)
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
lean_del_object(v___x_181_);
lean_del_object(v___x_176_);
v___x_196_ = lean_unsigned_to_nat(1u);
v___x_197_ = lean_nat_add(v_snd_179_, v___x_196_);
lean_dec(v_snd_179_);
v___x_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_198_, 0, v_fst_178_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v_x_171_ = v___x_198_;
v_x_172_ = v_tail_174_;
goto _start;
}
else
{
lean_object* v_val_200_; uint8_t v___x_201_; 
v_val_200_ = lean_ctor_get(v_head_173_, 0);
lean_inc(v_val_200_);
lean_dec_ref_known(v_head_173_, 1);
v___x_201_ = lean_unbox(v_val_200_);
lean_dec(v_val_200_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_202_ = ((lean_object*)(lp_pmll_List_foldl___at___00PMLL_renderAsg_spec__0___closed__0));
v___x_203_ = lean_unsigned_to_nat(1u);
v___x_204_ = lean_nat_add(v_snd_179_, v___x_203_);
v___x_205_ = l_Nat_reprFast(v___x_204_);
v___x_206_ = lean_string_append(v___x_202_, v___x_205_);
lean_dec_ref(v___x_205_);
v___x_207_ = ((lean_object*)(lp_pmll_List_foldl___at___00PMLL_renderAsg_spec__0___closed__1));
v___x_208_ = lean_string_append(v___x_206_, v___x_207_);
v___y_184_ = v___x_208_;
goto v___jp_183_;
}
else
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_209_ = ((lean_object*)(lp_pmll_List_foldl___at___00PMLL_renderAsg_spec__0___closed__0));
v___x_210_ = lean_unsigned_to_nat(1u);
v___x_211_ = lean_nat_add(v_snd_179_, v___x_210_);
v___x_212_ = l_Nat_reprFast(v___x_211_);
v___x_213_ = lean_string_append(v___x_209_, v___x_212_);
lean_dec_ref(v___x_212_);
v___x_214_ = ((lean_object*)(lp_pmll_List_foldl___at___00PMLL_renderAsg_spec__0___closed__2));
v___x_215_ = lean_string_append(v___x_213_, v___x_214_);
v___y_184_ = v___x_215_;
goto v___jp_183_;
}
}
v___jp_183_:
{
lean_object* v___x_185_; lean_object* v___x_187_; 
v___x_185_ = lean_box(0);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 1, v___x_185_);
lean_ctor_set(v___x_176_, 0, v___y_184_);
v___x_187_ = v___x_176_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___y_184_);
lean_ctor_set(v_reuseFailAlloc_195_, 1, v___x_185_);
v___x_187_ = v_reuseFailAlloc_195_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_192_; 
v___x_188_ = l_List_appendTR___redArg(v_fst_178_, v___x_187_);
v___x_189_ = lean_unsigned_to_nat(1u);
v___x_190_ = lean_nat_add(v_snd_179_, v___x_189_);
lean_dec(v_snd_179_);
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 1, v___x_190_);
lean_ctor_set(v___x_181_, 0, v___x_188_);
v___x_192_ = v___x_181_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_188_);
lean_ctor_set(v_reuseFailAlloc_194_, 1, v___x_190_);
v___x_192_ = v_reuseFailAlloc_194_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
v_x_171_ = v___x_192_;
v_x_172_ = v_tail_174_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_renderAsg(lean_object* v_a_222_){
_start:
{
lean_object* v___x_223_; lean_object* v_parts_224_; lean_object* v_fst_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_223_ = ((lean_object*)(lp_pmll_PMLL_renderAsg___closed__0));
v_parts_224_ = lp_pmll_List_foldl___at___00PMLL_renderAsg_spec__0(v___x_223_, v_a_222_);
v_fst_225_ = lean_ctor_get(v_parts_224_, 0);
lean_inc(v_fst_225_);
lean_dec_ref(v_parts_224_);
v___x_226_ = ((lean_object*)(lp_pmll_PMLL_renderAsg___closed__1));
v___x_227_ = l_String_intercalate(v___x_226_, v_fst_225_);
return v___x_227_;
}
}
LEAN_EXPORT uint8_t lp_pmll_List_all___at___00PMLL_resolveFrom_spec__0(lean_object* v_x_230_){
_start:
{
if (lean_obj_tag(v_x_230_) == 0)
{
uint8_t v___x_231_; 
v___x_231_ = 1;
return v___x_231_;
}
else
{
lean_object* v_head_232_; lean_object* v_tail_233_; lean_object* v___x_234_; uint8_t v___x_235_; 
v_head_232_ = lean_ctor_get(v_x_230_, 0);
v_tail_233_ = lean_ctor_get(v_x_230_, 1);
v___x_234_ = ((lean_object*)(lp_pmll_List_all___at___00PMLL_resolveFrom_spec__0___closed__0));
v___x_235_ = lp_pmll_instBEqOption_beq___at___00PMLL_peek_spec__0(v_head_232_, v___x_234_);
if (v___x_235_ == 0)
{
return v___x_235_;
}
else
{
v_x_230_ = v_tail_233_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_all___at___00PMLL_resolveFrom_spec__0___boxed(lean_object* v_x_237_){
_start:
{
uint8_t v_res_238_; lean_object* v_r_239_; 
v_res_238_ = lp_pmll_List_all___at___00PMLL_resolveFrom_spec__0(v_x_237_);
lean_dec(v_x_237_);
v_r_239_ = lean_box(v_res_238_);
return v_r_239_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_resolveFrom(lean_object* v_s_240_, lean_object* v_fuel_241_, lean_object* v_n_242_, lean_object* v_clauses_243_, lean_object* v_budget_244_){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = ((lean_object*)(lp_pmll_PMLL_solKey___closed__0));
v___x_246_ = lp_pmll_PMLL_peek(v_s_240_, v___x_245_);
if (lean_obj_tag(v___x_246_) == 0)
{
lean_object* v_past_247_; uint8_t v_missed_248_; 
lean_inc(v_fuel_241_);
v_past_247_ = lp_pmll_PMLL_peekPast(v_s_240_, v_fuel_241_);
v_missed_248_ = lp_pmll_List_all___at___00PMLL_resolveFrom_spec__0(v_past_247_);
if (v_missed_248_ == 0)
{
lean_object* v___x_249_; 
lean_dec(v_past_247_);
lean_dec(v_budget_244_);
lean_dec(v_clauses_243_);
lean_dec(v_n_242_);
lean_dec(v_fuel_241_);
v___x_249_ = lean_box(0);
return v___x_249_;
}
else
{
lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_250_ = l_List_lengthTR___redArg(v_past_247_);
lean_dec(v_past_247_);
v___x_251_ = lean_nat_dec_eq(v___x_250_, v_fuel_241_);
lean_dec(v_fuel_241_);
lean_dec(v___x_250_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; 
lean_dec(v_budget_244_);
lean_dec(v_clauses_243_);
lean_dec(v_n_242_);
v___x_252_ = lean_box(0);
return v___x_252_;
}
else
{
lean_object* v___x_253_; lean_object* v_fst_254_; uint8_t v___x_255_; 
v___x_253_ = lp_pmll_PMLL_refine(v_n_242_, v_clauses_243_, v_budget_244_);
v_fst_254_ = lean_ctor_get(v___x_253_, 0);
v___x_255_ = lean_unbox(v_fst_254_);
if (v___x_255_ == 1)
{
lean_object* v_snd_256_; 
v_snd_256_ = lean_ctor_get(v___x_253_, 1);
lean_inc(v_snd_256_);
lean_dec_ref(v___x_253_);
if (lean_obj_tag(v_snd_256_) == 1)
{
lean_object* v_val_257_; lean_object* v_a_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v_val_257_ = lean_ctor_get(v_snd_256_, 0);
lean_inc(v_val_257_);
lean_dec_ref_known(v_snd_256_, 1);
v_a_258_ = lean_ctor_get(v_val_257_, 2);
lean_inc(v_a_258_);
lean_dec(v_val_257_);
v___x_259_ = lp_pmll_PMLL_renderAsg(v_a_258_);
v___x_260_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_260_, 0, v___x_259_);
lean_ctor_set_uint8(v___x_260_, sizeof(void*)*1, v_missed_248_);
return v___x_260_;
}
else
{
lean_object* v___x_261_; 
lean_dec(v_snd_256_);
v___x_261_ = lean_box(0);
return v___x_261_;
}
}
else
{
lean_object* v___x_262_; 
lean_dec_ref(v___x_253_);
v___x_262_ = lean_box(0);
return v___x_262_;
}
}
}
}
else
{
lean_object* v_val_263_; uint8_t v___x_264_; lean_object* v___x_265_; 
lean_dec(v_budget_244_);
lean_dec(v_clauses_243_);
lean_dec(v_n_242_);
lean_dec(v_fuel_241_);
v_val_263_ = lean_ctor_get(v___x_246_, 0);
lean_inc(v_val_263_);
lean_dec_ref_known(v___x_246_, 1);
v___x_264_ = 0;
v___x_265_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_265_, 0, v_val_263_);
lean_ctor_set_uint8(v___x_265_, sizeof(void*)*1, v___x_264_);
return v___x_265_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_resolveFrom___boxed(lean_object* v_s_266_, lean_object* v_fuel_267_, lean_object* v_n_268_, lean_object* v_clauses_269_, lean_object* v_budget_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = lp_pmll_PMLL_resolveFrom(v_s_266_, v_fuel_267_, v_n_268_, v_clauses_269_, v_budget_270_);
lean_dec_ref(v_s_266_);
return v_res_271_;
}
}
static lean_object* _init_lp_pmll_PMLL_resolveUnknown___closed__0(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_272_ = lean_unsigned_to_nat(2u);
v___x_273_ = lp_pmll_PMLL_budgetFor(v___x_272_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_resolveUnknown(lean_object* v_fuel_274_){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v_s_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_275_ = lean_unsigned_to_nat(2u);
v___x_276_ = lean_nat_add(v_fuel_274_, v___x_275_);
v___x_277_ = lp_pmll_PMLL_Silo_empty(v___x_276_);
lean_inc(v_fuel_274_);
v_s_278_ = lp_pmll_PMLL_iterations(v_fuel_274_, v___x_277_);
v___x_279_ = lp_pmll_PMLL_satExample;
v___x_280_ = lean_obj_once(&lp_pmll_PMLL_resolveUnknown___closed__0, &lp_pmll_PMLL_resolveUnknown___closed__0_once, _init_lp_pmll_PMLL_resolveUnknown___closed__0);
v___x_281_ = lp_pmll_PMLL_resolveFrom(v_s_278_, v_fuel_274_, v___x_275_, v___x_279_, v___x_280_);
lean_dec_ref(v_s_278_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_resolveKnown(lean_object* v_fuel_283_){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v_s_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v_s_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_284_ = lean_unsigned_to_nat(2u);
v___x_285_ = lean_nat_add(v_fuel_283_, v___x_284_);
v___x_286_ = lp_pmll_PMLL_Silo_empty(v___x_285_);
lean_inc(v_fuel_283_);
v_s_287_ = lp_pmll_PMLL_iterations(v_fuel_283_, v___x_286_);
v___x_288_ = ((lean_object*)(lp_pmll_PMLL_solKey___closed__0));
v___x_289_ = ((lean_object*)(lp_pmll_PMLL_resolveKnown___closed__0));
v_s_290_ = lp_pmll_PMLL_Silo_record(v_s_287_, v_fuel_283_, v___x_288_, v___x_289_);
v___x_291_ = lp_pmll_PMLL_satExample;
v___x_292_ = lean_obj_once(&lp_pmll_PMLL_resolveUnknown___closed__0, &lp_pmll_PMLL_resolveUnknown___closed__0_once, _init_lp_pmll_PMLL_resolveUnknown___closed__0);
v___x_293_ = lp_pmll_PMLL_resolveFrom(v_s_290_, v_fuel_283_, v___x_284_, v___x_291_, v___x_292_);
lean_dec_ref(v_s_290_);
return v___x_293_;
}
}
static lean_object* _init_lp_pmll_PMLL_unknownSolution___closed__0(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_unsigned_to_nat(4u);
v___x_295_ = lp_pmll_PMLL_resolveUnknown(v___x_294_);
return v___x_295_;
}
}
static lean_object* _init_lp_pmll_PMLL_unknownSolution(void){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = lean_obj_once(&lp_pmll_PMLL_unknownSolution___closed__0, &lp_pmll_PMLL_unknownSolution___closed__0_once, _init_lp_pmll_PMLL_unknownSolution___closed__0);
return v___x_296_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_pmll_PMLL(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_pmll_PMLL_Promise(uint8_t builtin) {
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
lp_pmll_PMLL_unknownSolution = _init_lp_pmll_PMLL_unknownSolution();
lean_mark_persistent(lp_pmll_PMLL_unknownSolution);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
