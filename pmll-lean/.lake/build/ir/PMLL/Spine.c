// Lean compiler output
// Module: PMLL.Spine
// Imports: public import Init public meta import Init public import PMLL.Promise
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
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lp_pmll_PMLL_peek(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lp_pmll_PMLL_Silo_record(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_pmll_PMLL_Silo_empty(lean_object*);
lean_object* l_List_range(lean_object*);
LEAN_EXPORT uint8_t lp_pmll_PMLL_instDecidableEqPoint_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instDecidableEqPoint_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_pmll_PMLL_instDecidableEqPoint(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instDecidableEqPoint___boxed(lean_object*, lean_object*);
static const lean_string_object lp_pmll_PMLL_instReprPoint_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__0 = (const lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__0_value;
static const lean_string_object lp_pmll_PMLL_instReprPoint_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__1 = (const lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__1_value;
static lean_once_cell_t lp_pmll_PMLL_instReprPoint_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__2;
static lean_once_cell_t lp_pmll_PMLL_instReprPoint_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__3;
static const lean_ctor_object lp_pmll_PMLL_instReprPoint_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__0_value)}};
static const lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__4 = (const lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__4_value;
static const lean_ctor_object lp_pmll_PMLL_instReprPoint_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__1_value)}};
static const lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__5 = (const lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__5_value;
static const lean_string_object lp_pmll_PMLL_instReprPoint_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "reNum"};
static const lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__6 = (const lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__6_value;
static const lean_ctor_object lp_pmll_PMLL_instReprPoint_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__6_value)}};
static const lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__7 = (const lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__7_value;
static const lean_ctor_object lp_pmll_PMLL_instReprPoint_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__7_value)}};
static const lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__8 = (const lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__8_value;
static const lean_string_object lp_pmll_PMLL_instReprPoint_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__9 = (const lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__9_value;
static const lean_ctor_object lp_pmll_PMLL_instReprPoint_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__9_value)}};
static const lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__10 = (const lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__10_value;
static const lean_ctor_object lp_pmll_PMLL_instReprPoint_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__8_value),((lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__10_value)}};
static const lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__11 = (const lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__11_value;
static lean_once_cell_t lp_pmll_PMLL_instReprPoint_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__12;
static const lean_string_object lp_pmll_PMLL_instReprPoint_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__13 = (const lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__13_value;
static const lean_ctor_object lp_pmll_PMLL_instReprPoint_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__13_value)}};
static const lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__14 = (const lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__14_value;
static const lean_string_object lp_pmll_PMLL_instReprPoint_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "im"};
static const lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__15 = (const lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__15_value;
static const lean_ctor_object lp_pmll_PMLL_instReprPoint_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__15_value)}};
static const lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__16 = (const lean_object*)&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__16_value;
static lean_once_cell_t lp_pmll_PMLL_instReprPoint_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__17;
static lean_once_cell_t lp_pmll_PMLL_instReprPoint_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg___closed__18;
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprPoint_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprPoint_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_pmll_PMLL_instReprPoint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_pmll_PMLL_instReprPoint_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_pmll_PMLL_instReprPoint___closed__0 = (const lean_object*)&lp_pmll_PMLL_instReprPoint___closed__0_value;
LEAN_EXPORT const lean_object* lp_pmll_PMLL_instReprPoint = (const lean_object*)&lp_pmll_PMLL_instReprPoint___closed__0_value;
static lean_once_cell_t lp_pmll_PMLL_reflect___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_reflect___closed__0;
LEAN_EXPORT lean_object* lp_pmll_PMLL_reflect(lean_object*);
static const lean_string_object lp_pmll_PMLL_spineKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "spine:"};
static const lean_object* lp_pmll_PMLL_spineKey___closed__0 = (const lean_object*)&lp_pmll_PMLL_spineKey___closed__0_value;
LEAN_EXPORT lean_object* lp_pmll_PMLL_spineKey(lean_object*);
static const lean_string_object lp_pmll_List_foldl___at___00PMLL_plantSpineMisses_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "no zero in this iteration"};
static const lean_object* lp_pmll_List_foldl___at___00PMLL_plantSpineMisses_spec__0___closed__0 = (const lean_object*)&lp_pmll_List_foldl___at___00PMLL_plantSpineMisses_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00PMLL_plantSpineMisses_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_plantSpineMisses(lean_object*, lean_object*);
static const lean_string_object lp_pmll_PMLL_spinePromise___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "re=1/2 im="};
static const lean_object* lp_pmll_PMLL_spinePromise___closed__0 = (const lean_object*)&lp_pmll_PMLL_spinePromise___closed__0_value;
LEAN_EXPORT lean_object* lp_pmll_PMLL_spinePromise(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_spinePromise___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_spineChain(lean_object*);
LEAN_EXPORT uint8_t lp_pmll_PMLL_instDecidableEqPoint_decEq(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
lean_object* v_reNum_3_; lean_object* v_im_4_; lean_object* v_reNum_5_; lean_object* v_im_6_; uint8_t v___x_7_; 
v_reNum_3_ = lean_ctor_get(v_x_1_, 0);
v_im_4_ = lean_ctor_get(v_x_1_, 1);
v_reNum_5_ = lean_ctor_get(v_x_2_, 0);
v_im_6_ = lean_ctor_get(v_x_2_, 1);
v___x_7_ = lean_int_dec_eq(v_reNum_3_, v_reNum_5_);
if (v___x_7_ == 0)
{
return v___x_7_;
}
else
{
uint8_t v___x_8_; 
v___x_8_ = lean_int_dec_eq(v_im_4_, v_im_6_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instDecidableEqPoint_decEq___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = lp_pmll_PMLL_instDecidableEqPoint_decEq(v_x_9_, v_x_10_);
lean_dec_ref(v_x_10_);
lean_dec_ref(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t lp_pmll_PMLL_instDecidableEqPoint(lean_object* v_x_13_, lean_object* v_x_14_){
_start:
{
uint8_t v___x_15_; 
v___x_15_ = lp_pmll_PMLL_instDecidableEqPoint_decEq(v_x_13_, v_x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instDecidableEqPoint___boxed(lean_object* v_x_16_, lean_object* v_x_17_){
_start:
{
uint8_t v_res_18_; lean_object* v_r_19_; 
v_res_18_ = lp_pmll_PMLL_instDecidableEqPoint(v_x_16_, v_x_17_);
lean_dec_ref(v_x_17_);
lean_dec_ref(v_x_16_);
v_r_19_ = lean_box(v_res_18_);
return v_r_19_;
}
}
static lean_object* _init_lp_pmll_PMLL_instReprPoint_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = ((lean_object*)(lp_pmll_PMLL_instReprPoint_repr___redArg___closed__0));
v___x_23_ = lean_string_length(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_lp_pmll_PMLL_instReprPoint_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_obj_once(&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__2, &lp_pmll_PMLL_instReprPoint_repr___redArg___closed__2_once, _init_lp_pmll_PMLL_instReprPoint_repr___redArg___closed__2);
v___x_25_ = lean_nat_to_int(v___x_24_);
return v___x_25_;
}
}
static lean_object* _init_lp_pmll_PMLL_instReprPoint_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_unsigned_to_nat(9u);
v___x_43_ = lean_nat_to_int(v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_lp_pmll_PMLL_instReprPoint_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = lean_unsigned_to_nat(6u);
v___x_51_ = lean_nat_to_int(v___x_50_);
return v___x_51_;
}
}
static lean_object* _init_lp_pmll_PMLL_instReprPoint_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = lean_unsigned_to_nat(0u);
v___x_53_ = lean_nat_to_int(v___x_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprPoint_repr___redArg(lean_object* v_x_54_){
_start:
{
lean_object* v_reNum_55_; lean_object* v_im_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_110_; 
v_reNum_55_ = lean_ctor_get(v_x_54_, 0);
v_im_56_ = lean_ctor_get(v_x_54_, 1);
v_isSharedCheck_110_ = !lean_is_exclusive(v_x_54_);
if (v_isSharedCheck_110_ == 0)
{
v___x_58_ = v_x_54_;
v_isShared_59_ = v_isSharedCheck_110_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_im_56_);
lean_inc(v_reNum_55_);
lean_dec(v_x_54_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_110_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___y_61_; uint8_t v___y_62_; lean_object* v___y_63_; lean_object* v___y_64_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___y_81_; lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_77_ = ((lean_object*)(lp_pmll_PMLL_instReprPoint_repr___redArg___closed__10));
v___x_78_ = ((lean_object*)(lp_pmll_PMLL_instReprPoint_repr___redArg___closed__11));
v___x_79_ = lean_obj_once(&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__12, &lp_pmll_PMLL_instReprPoint_repr___redArg___closed__12_once, _init_lp_pmll_PMLL_instReprPoint_repr___redArg___closed__12);
v___x_102_ = lean_unsigned_to_nat(0u);
v___x_103_ = lean_obj_once(&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__18, &lp_pmll_PMLL_instReprPoint_repr___redArg___closed__18_once, _init_lp_pmll_PMLL_instReprPoint_repr___redArg___closed__18);
v___x_104_ = lean_int_dec_lt(v_reNum_55_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = l_Int_repr(v_reNum_55_);
lean_dec(v_reNum_55_);
v___x_106_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
v___y_81_ = v___x_106_;
goto v___jp_80_;
}
else
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = l_Int_repr(v_reNum_55_);
lean_dec(v_reNum_55_);
v___x_108_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
v___x_109_ = l_Repr_addAppParen(v___x_108_, v___x_102_);
v___y_81_ = v___x_109_;
goto v___jp_80_;
}
v___jp_60_:
{
lean_object* v___x_66_; 
lean_inc(v___y_61_);
if (v_isShared_59_ == 0)
{
lean_ctor_set_tag(v___x_58_, 4);
lean_ctor_set(v___x_58_, 1, v___y_64_);
lean_ctor_set(v___x_58_, 0, v___y_61_);
v___x_66_ = v___x_58_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v___y_61_);
lean_ctor_set(v_reuseFailAlloc_76_, 1, v___y_64_);
v___x_66_ = v_reuseFailAlloc_76_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_67_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set_uint8(v___x_67_, sizeof(void*)*1, v___y_62_);
v___x_68_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_68_, 0, v___y_63_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = lean_obj_once(&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__3, &lp_pmll_PMLL_instReprPoint_repr___redArg___closed__3_once, _init_lp_pmll_PMLL_instReprPoint_repr___redArg___closed__3);
v___x_70_ = ((lean_object*)(lp_pmll_PMLL_instReprPoint_repr___redArg___closed__4));
v___x_71_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
lean_ctor_set(v___x_71_, 1, v___x_68_);
v___x_72_ = ((lean_object*)(lp_pmll_PMLL_instReprPoint_repr___redArg___closed__5));
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_71_);
lean_ctor_set(v___x_73_, 1, v___x_72_);
v___x_74_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_69_);
lean_ctor_set(v___x_74_, 1, v___x_73_);
v___x_75_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_75_, 0, v___x_74_);
lean_ctor_set_uint8(v___x_75_, sizeof(void*)*1, v___y_62_);
return v___x_75_;
}
}
v___jp_80_:
{
lean_object* v___x_82_; uint8_t v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; uint8_t v___x_96_; 
v___x_82_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_79_);
lean_ctor_set(v___x_82_, 1, v___y_81_);
v___x_83_ = 0;
v___x_84_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_84_, 0, v___x_82_);
lean_ctor_set_uint8(v___x_84_, sizeof(void*)*1, v___x_83_);
v___x_85_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_78_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = ((lean_object*)(lp_pmll_PMLL_instReprPoint_repr___redArg___closed__14));
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_85_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = lean_box(1);
v___x_89_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_87_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = ((lean_object*)(lp_pmll_PMLL_instReprPoint_repr___redArg___closed__16));
v___x_91_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_89_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
v___x_92_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
lean_ctor_set(v___x_92_, 1, v___x_77_);
v___x_93_ = lean_obj_once(&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__17, &lp_pmll_PMLL_instReprPoint_repr___redArg___closed__17_once, _init_lp_pmll_PMLL_instReprPoint_repr___redArg___closed__17);
v___x_94_ = lean_unsigned_to_nat(0u);
v___x_95_ = lean_obj_once(&lp_pmll_PMLL_instReprPoint_repr___redArg___closed__18, &lp_pmll_PMLL_instReprPoint_repr___redArg___closed__18_once, _init_lp_pmll_PMLL_instReprPoint_repr___redArg___closed__18);
v___x_96_ = lean_int_dec_lt(v_im_56_, v___x_95_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = l_Int_repr(v_im_56_);
lean_dec(v_im_56_);
v___x_98_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
v___y_61_ = v___x_93_;
v___y_62_ = v___x_83_;
v___y_63_ = v___x_92_;
v___y_64_ = v___x_98_;
goto v___jp_60_;
}
else
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = l_Int_repr(v_im_56_);
lean_dec(v_im_56_);
v___x_100_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
v___x_101_ = l_Repr_addAppParen(v___x_100_, v___x_94_);
v___y_61_ = v___x_93_;
v___y_62_ = v___x_83_;
v___y_63_ = v___x_92_;
v___y_64_ = v___x_101_;
goto v___jp_60_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprPoint_repr(lean_object* v_x_111_, lean_object* v_prec_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = lp_pmll_PMLL_instReprPoint_repr___redArg(v_x_111_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprPoint_repr___boxed(lean_object* v_x_114_, lean_object* v_prec_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = lp_pmll_PMLL_instReprPoint_repr(v_x_114_, v_prec_115_);
lean_dec(v_prec_115_);
return v_res_116_;
}
}
static lean_object* _init_lp_pmll_PMLL_reflect___closed__0(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(2u);
v___x_120_ = lean_nat_to_int(v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_reflect(lean_object* v_p_121_){
_start:
{
lean_object* v_reNum_122_; lean_object* v_im_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_133_; 
v_reNum_122_ = lean_ctor_get(v_p_121_, 0);
v_im_123_ = lean_ctor_get(v_p_121_, 1);
v_isSharedCheck_133_ = !lean_is_exclusive(v_p_121_);
if (v_isSharedCheck_133_ == 0)
{
v___x_125_ = v_p_121_;
v_isShared_126_ = v_isSharedCheck_133_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_im_123_);
lean_inc(v_reNum_122_);
lean_dec(v_p_121_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_133_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_131_; 
v___x_127_ = lean_obj_once(&lp_pmll_PMLL_reflect___closed__0, &lp_pmll_PMLL_reflect___closed__0_once, _init_lp_pmll_PMLL_reflect___closed__0);
v___x_128_ = lean_int_sub(v___x_127_, v_reNum_122_);
lean_dec(v_reNum_122_);
v___x_129_ = lean_int_neg(v_im_123_);
lean_dec(v_im_123_);
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 1, v___x_129_);
lean_ctor_set(v___x_125_, 0, v___x_128_);
v___x_131_ = v___x_125_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_128_);
lean_ctor_set(v_reuseFailAlloc_132_, 1, v___x_129_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_spineKey(lean_object* v_i_135_){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_136_ = ((lean_object*)(lp_pmll_PMLL_spineKey___closed__0));
v___x_137_ = l_Nat_reprFast(v_i_135_);
v___x_138_ = lean_string_append(v___x_136_, v___x_137_);
lean_dec_ref(v___x_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00PMLL_plantSpineMisses_spec__0(lean_object* v_x_140_, lean_object* v_x_141_){
_start:
{
if (lean_obj_tag(v_x_141_) == 0)
{
return v_x_140_;
}
else
{
lean_object* v_head_142_; lean_object* v_tail_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v_head_142_ = lean_ctor_get(v_x_141_, 0);
lean_inc_n(v_head_142_, 2);
v_tail_143_ = lean_ctor_get(v_x_141_, 1);
lean_inc(v_tail_143_);
lean_dec_ref_known(v_x_141_, 2);
v___x_144_ = lp_pmll_PMLL_spineKey(v_head_142_);
v___x_145_ = ((lean_object*)(lp_pmll_List_foldl___at___00PMLL_plantSpineMisses_spec__0___closed__0));
v___x_146_ = lp_pmll_PMLL_Silo_record(v_x_140_, v_head_142_, v___x_144_, v___x_145_);
lean_dec(v_head_142_);
v_x_140_ = v___x_146_;
v_x_141_ = v_tail_143_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_plantSpineMisses(lean_object* v_fuel_148_, lean_object* v_s_149_){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = l_List_range(v_fuel_148_);
v___x_151_ = lp_pmll_List_foldl___at___00PMLL_plantSpineMisses_spec__0(v_s_149_, v___x_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_spinePromise(lean_object* v_s_153_, lean_object* v_i_154_){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
lean_inc(v_i_154_);
v___x_155_ = lp_pmll_PMLL_spineKey(v_i_154_);
v___x_156_ = lp_pmll_PMLL_peek(v_s_153_, v___x_155_);
if (lean_obj_tag(v___x_156_) == 0)
{
lean_object* v___x_157_; 
lean_dec(v_i_154_);
v___x_157_ = lean_box(0);
return v___x_157_;
}
else
{
lean_object* v_val_158_; lean_object* v___x_159_; uint8_t v___x_160_; 
v_val_158_ = lean_ctor_get(v___x_156_, 0);
lean_inc(v_val_158_);
lean_dec_ref_known(v___x_156_, 1);
v___x_159_ = ((lean_object*)(lp_pmll_List_foldl___at___00PMLL_plantSpineMisses_spec__0___closed__0));
v___x_160_ = lean_string_dec_eq(v_val_158_, v___x_159_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; 
lean_dec(v_i_154_);
v___x_161_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_161_, 0, v_val_158_);
lean_ctor_set_uint8(v___x_161_, sizeof(void*)*1, v___x_160_);
return v___x_161_;
}
else
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
lean_dec(v_val_158_);
v___x_162_ = ((lean_object*)(lp_pmll_PMLL_spinePromise___closed__0));
v___x_163_ = lean_unsigned_to_nat(1u);
v___x_164_ = lean_nat_add(v_i_154_, v___x_163_);
lean_dec(v_i_154_);
v___x_165_ = l_Nat_reprFast(v___x_164_);
v___x_166_ = lean_string_append(v___x_162_, v___x_165_);
lean_dec_ref(v___x_165_);
v___x_167_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_167_, 0, v___x_166_);
lean_ctor_set_uint8(v___x_167_, sizeof(void*)*1, v___x_160_);
return v___x_167_;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_spinePromise___boxed(lean_object* v_s_168_, lean_object* v_i_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = lp_pmll_PMLL_spinePromise(v_s_168_, v_i_169_);
lean_dec_ref(v_s_168_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_spineChain(lean_object* v_fuel_171_){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_172_ = lean_unsigned_to_nat(2u);
v___x_173_ = lean_nat_add(v_fuel_171_, v___x_172_);
v___x_174_ = lp_pmll_PMLL_Silo_empty(v___x_173_);
v___x_175_ = lp_pmll_PMLL_plantSpineMisses(v_fuel_171_, v___x_174_);
return v___x_175_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_pmll_PMLL_Promise(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_pmll_PMLL_Spine(uint8_t builtin) {
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
res = initialize_pmll_PMLL_Promise(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
