// Lean compiler output
// Module: PMLL
// Imports: public import Init public meta import Init
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
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_setTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_unresolved_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_unresolved_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_unresolved_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_unresolved_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_sat_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_sat_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_sat_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_sat_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_unsat_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_unsat_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_unsat_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_unsat_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_pmll_PMLL_Flag_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_pmll_PMLL_instDecidableEqFlag(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instDecidableEqFlag___boxed(lean_object*, lean_object*);
static const lean_string_object lp_pmll_PMLL_instReprFlag_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "PMLL.Flag.unresolved"};
static const lean_object* lp_pmll_PMLL_instReprFlag_repr___closed__0 = (const lean_object*)&lp_pmll_PMLL_instReprFlag_repr___closed__0_value;
static const lean_ctor_object lp_pmll_PMLL_instReprFlag_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprFlag_repr___closed__0_value)}};
static const lean_object* lp_pmll_PMLL_instReprFlag_repr___closed__1 = (const lean_object*)&lp_pmll_PMLL_instReprFlag_repr___closed__1_value;
static const lean_string_object lp_pmll_PMLL_instReprFlag_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PMLL.Flag.sat"};
static const lean_object* lp_pmll_PMLL_instReprFlag_repr___closed__2 = (const lean_object*)&lp_pmll_PMLL_instReprFlag_repr___closed__2_value;
static const lean_ctor_object lp_pmll_PMLL_instReprFlag_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprFlag_repr___closed__2_value)}};
static const lean_object* lp_pmll_PMLL_instReprFlag_repr___closed__3 = (const lean_object*)&lp_pmll_PMLL_instReprFlag_repr___closed__3_value;
static const lean_string_object lp_pmll_PMLL_instReprFlag_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "PMLL.Flag.unsat"};
static const lean_object* lp_pmll_PMLL_instReprFlag_repr___closed__4 = (const lean_object*)&lp_pmll_PMLL_instReprFlag_repr___closed__4_value;
static const lean_ctor_object lp_pmll_PMLL_instReprFlag_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprFlag_repr___closed__4_value)}};
static const lean_object* lp_pmll_PMLL_instReprFlag_repr___closed__5 = (const lean_object*)&lp_pmll_PMLL_instReprFlag_repr___closed__5_value;
static lean_once_cell_t lp_pmll_PMLL_instReprFlag_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprFlag_repr___closed__6;
static lean_once_cell_t lp_pmll_PMLL_instReprFlag_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprFlag_repr___closed__7;
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprFlag_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprFlag_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_pmll_PMLL_instReprFlag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_pmll_PMLL_instReprFlag_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_pmll_PMLL_instReprFlag___closed__0 = (const lean_object*)&lp_pmll_PMLL_instReprFlag___closed__0_value;
LEAN_EXPORT const lean_object* lp_pmll_PMLL_instReprFlag = (const lean_object*)&lp_pmll_PMLL_instReprFlag___closed__0_value;
LEAN_EXPORT uint8_t lp_pmll_PMLL_instInhabitedFlag_default;
LEAN_EXPORT uint8_t lp_pmll_PMLL_instInhabitedFlag;
static lean_once_cell_t lp_pmll_PMLL_litVar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_litVar___closed__0;
LEAN_EXPORT lean_object* lp_pmll_PMLL_litVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_litVar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_readAsg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_readAsg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_pmll_PMLL_litSat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_litSat___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_pmll_PMLL_litOpen(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_litOpen___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_pmll_List_any___at___00PMLL_clauseConflict_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_any___at___00PMLL_clauseConflict_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_pmll_List_any___at___00PMLL_clauseConflict_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_any___at___00PMLL_clauseConflict_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_pmll_PMLL_clauseConflict(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_clauseConflict___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_pmll_List_any___at___00PMLL_checkConflict_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_any___at___00PMLL_checkConflict_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_pmll_PMLL_checkConflict(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_checkConflict___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_pmll_List_all___at___00PMLL_allAssigned_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_all___at___00PMLL_allAssigned_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_pmll_PMLL_allAssigned(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_allAssigned___boxed(lean_object*);
static const lean_ctor_object lp_pmll_PMLL_firstOpen___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_pmll_PMLL_firstOpen___closed__0 = (const lean_object*)&lp_pmll_PMLL_firstOpen___closed__0_value;
LEAN_EXPORT lean_object* lp_pmll_PMLL_firstOpen(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_firstOpen___boxed(lean_object*);
static const lean_array_object lp_pmll_PMLL_setAsg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_pmll_PMLL_setAsg___closed__0 = (const lean_object*)&lp_pmll_PMLL_setAsg___closed__0_value;
LEAN_EXPORT lean_object* lp_pmll_PMLL_setAsg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_pmll_PMLL_setAsg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_sat_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_sat_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_conflict_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_conflict_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_unit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_unit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_multi_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_multi_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_pmll_PMLL_instDecidableEqLook_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instDecidableEqLook_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_pmll_PMLL_instDecidableEqLook(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instDecidableEqLook___boxed(lean_object*, lean_object*);
static const lean_string_object lp_pmll_PMLL_instReprLook_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "PMLL.Look.conflict"};
static const lean_object* lp_pmll_PMLL_instReprLook_repr___closed__0 = (const lean_object*)&lp_pmll_PMLL_instReprLook_repr___closed__0_value;
static const lean_ctor_object lp_pmll_PMLL_instReprLook_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprLook_repr___closed__0_value)}};
static const lean_object* lp_pmll_PMLL_instReprLook_repr___closed__1 = (const lean_object*)&lp_pmll_PMLL_instReprLook_repr___closed__1_value;
static const lean_string_object lp_pmll_PMLL_instReprLook_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PMLL.Look.sat"};
static const lean_object* lp_pmll_PMLL_instReprLook_repr___closed__2 = (const lean_object*)&lp_pmll_PMLL_instReprLook_repr___closed__2_value;
static const lean_ctor_object lp_pmll_PMLL_instReprLook_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprLook_repr___closed__2_value)}};
static const lean_object* lp_pmll_PMLL_instReprLook_repr___closed__3 = (const lean_object*)&lp_pmll_PMLL_instReprLook_repr___closed__3_value;
static const lean_string_object lp_pmll_PMLL_instReprLook_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "PMLL.Look.multi"};
static const lean_object* lp_pmll_PMLL_instReprLook_repr___closed__4 = (const lean_object*)&lp_pmll_PMLL_instReprLook_repr___closed__4_value;
static const lean_ctor_object lp_pmll_PMLL_instReprLook_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprLook_repr___closed__4_value)}};
static const lean_object* lp_pmll_PMLL_instReprLook_repr___closed__5 = (const lean_object*)&lp_pmll_PMLL_instReprLook_repr___closed__5_value;
static const lean_string_object lp_pmll_PMLL_instReprLook_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "PMLL.Look.unit"};
static const lean_object* lp_pmll_PMLL_instReprLook_repr___closed__6 = (const lean_object*)&lp_pmll_PMLL_instReprLook_repr___closed__6_value;
static const lean_ctor_object lp_pmll_PMLL_instReprLook_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprLook_repr___closed__6_value)}};
static const lean_object* lp_pmll_PMLL_instReprLook_repr___closed__7 = (const lean_object*)&lp_pmll_PMLL_instReprLook_repr___closed__7_value;
static const lean_ctor_object lp_pmll_PMLL_instReprLook_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprLook_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_pmll_PMLL_instReprLook_repr___closed__8 = (const lean_object*)&lp_pmll_PMLL_instReprLook_repr___closed__8_value;
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprLook_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprLook_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_pmll_PMLL_instReprLook___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_pmll_PMLL_instReprLook_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_pmll_PMLL_instReprLook___closed__0 = (const lean_object*)&lp_pmll_PMLL_instReprLook___closed__0_value;
LEAN_EXPORT const lean_object* lp_pmll_PMLL_instReprLook = (const lean_object*)&lp_pmll_PMLL_instReprLook___closed__0_value;
LEAN_EXPORT lean_object* lp_pmll_List_forIn_x27_loop___at___00PMLL_lookClause_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_forIn_x27_loop___at___00PMLL_lookClause_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_pmll_PMLL_lookClause___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_lookClause___closed__0;
static lean_once_cell_t lp_pmll_PMLL_lookClause___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_lookClause___closed__1;
LEAN_EXPORT lean_object* lp_pmll_PMLL_lookClause(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_lookClause___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_forIn_x27_loop___at___00PMLL_lookClause_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_forIn_x27_loop___at___00PMLL_lookClause_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_conflict_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_conflict_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_changed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_changed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_fixed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_fixed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_pass_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_pass_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_pass(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_pass___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_propagate_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_propagate_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_propagate(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_propagate___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_dpll(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_dpll___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_dpll_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_dpll_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_lookClause_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_lookClause_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_propagate_go_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_propagate_go_match__3_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_propagate_go_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_propagate_go_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_dpll_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_dpll_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__0 = (const lean_object*)&lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__0_value;
static const lean_ctor_object lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__0_value)}};
static const lean_object* lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__1 = (const lean_object*)&lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__1_value;
static const lean_string_object lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__2 = (const lean_object*)&lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__2_value;
static const lean_ctor_object lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__2_value)}};
static const lean_object* lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__3 = (const lean_object*)&lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__3_value;
LEAN_EXPORT lean_object* lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__4___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__4___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__4_spec__7_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__4_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__4(lean_object*, lean_object*);
static const lean_string_object lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__0 = (const lean_object*)&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__0_value;
static const lean_ctor_object lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__0_value)}};
static const lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__1 = (const lean_object*)&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__1_value;
static const lean_string_object lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__2 = (const lean_object*)&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__2_value;
static const lean_string_object lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__3 = (const lean_object*)&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__3_value;
static const lean_ctor_object lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__3_value)}};
static const lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__4 = (const lean_object*)&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__4_value;
static const lean_ctor_object lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__5 = (const lean_object*)&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__5_value;
static const lean_string_object lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__6 = (const lean_object*)&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__6_value;
static lean_once_cell_t lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__7;
static lean_once_cell_t lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__8;
static const lean_ctor_object lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__2_value)}};
static const lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__9 = (const lean_object*)&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__9_value;
static const lean_ctor_object lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__6_value)}};
static const lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__10 = (const lean_object*)&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__10_value;
LEAN_EXPORT lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1_spec__4_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__0 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__0_value;
static const lean_string_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__1 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__1_value;
static const lean_ctor_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__1_value)}};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__2 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__2_value;
static const lean_ctor_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__2_value)}};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__3 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__3_value;
static const lean_string_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__4 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__4_value;
static const lean_ctor_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__4_value)}};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__5 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__5_value;
static const lean_ctor_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__3_value),((lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__5_value)}};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__6 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__6_value;
static lean_once_cell_t lp_pmll_PMLL_instReprCert_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__7;
static const lean_string_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "clauses"};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__8 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__8_value;
static const lean_ctor_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__8_value)}};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__9 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__9_value;
static lean_once_cell_t lp_pmll_PMLL_instReprCert_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__10;
static const lean_string_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__11 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__11_value;
static const lean_ctor_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__11_value)}};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__12 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__12_value;
static const lean_string_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "complete"};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__13 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__13_value;
static const lean_ctor_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__13_value)}};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__14 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__14_value;
static const lean_string_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__15 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__15_value;
static const lean_ctor_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__15_value)}};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__16 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__16_value;
static const lean_string_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "clear"};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__17 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__17_value;
static const lean_ctor_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__17_value)}};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__18 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__18_value;
static const lean_string_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__19 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__19_value;
static lean_once_cell_t lp_pmll_PMLL_instReprCert_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__20;
static lean_once_cell_t lp_pmll_PMLL_instReprCert_repr___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__21;
static const lean_ctor_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__0_value)}};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__22 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__22_value;
static const lean_ctor_object lp_pmll_PMLL_instReprCert_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__19_value)}};
static const lean_object* lp_pmll_PMLL_instReprCert_repr___redArg___closed__23 = (const lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__23_value;
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprCert_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprCert_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprCert_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_pmll_PMLL_instReprCert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_pmll_PMLL_instReprCert_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_pmll_PMLL_instReprCert___closed__0 = (const lean_object*)&lp_pmll_PMLL_instReprCert___closed__0_value;
LEAN_EXPORT const lean_object* lp_pmll_PMLL_instReprCert = (const lean_object*)&lp_pmll_PMLL_instReprCert___closed__0_value;
static const lean_ctor_object lp_pmll_PMLL_refine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_pmll_PMLL_refine___closed__0 = (const lean_object*)&lp_pmll_PMLL_refine___closed__0_value;
LEAN_EXPORT lean_object* lp_pmll_PMLL_refine(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_Option_repr___at___00PMLL_instReprSlot_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_Option_repr___at___00PMLL_instReprSlot_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_pmll_PMLL_instReprSlot_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* lp_pmll_PMLL_instReprSlot_repr___redArg___closed__0 = (const lean_object*)&lp_pmll_PMLL_instReprSlot_repr___redArg___closed__0_value;
static const lean_ctor_object lp_pmll_PMLL_instReprSlot_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprSlot_repr___redArg___closed__0_value)}};
static const lean_object* lp_pmll_PMLL_instReprSlot_repr___redArg___closed__1 = (const lean_object*)&lp_pmll_PMLL_instReprSlot_repr___redArg___closed__1_value;
static const lean_ctor_object lp_pmll_PMLL_instReprSlot_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_instReprSlot_repr___redArg___closed__1_value)}};
static const lean_object* lp_pmll_PMLL_instReprSlot_repr___redArg___closed__2 = (const lean_object*)&lp_pmll_PMLL_instReprSlot_repr___redArg___closed__2_value;
static const lean_ctor_object lp_pmll_PMLL_instReprSlot_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprSlot_repr___redArg___closed__2_value),((lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__5_value)}};
static const lean_object* lp_pmll_PMLL_instReprSlot_repr___redArg___closed__3 = (const lean_object*)&lp_pmll_PMLL_instReprSlot_repr___redArg___closed__3_value;
static lean_once_cell_t lp_pmll_PMLL_instReprSlot_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprSlot_repr___redArg___closed__4;
static const lean_string_object lp_pmll_PMLL_instReprSlot_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "content"};
static const lean_object* lp_pmll_PMLL_instReprSlot_repr___redArg___closed__5 = (const lean_object*)&lp_pmll_PMLL_instReprSlot_repr___redArg___closed__5_value;
static const lean_ctor_object lp_pmll_PMLL_instReprSlot_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprSlot_repr___redArg___closed__5_value)}};
static const lean_object* lp_pmll_PMLL_instReprSlot_repr___redArg___closed__6 = (const lean_object*)&lp_pmll_PMLL_instReprSlot_repr___redArg___closed__6_value;
static const lean_string_object lp_pmll_PMLL_instReprSlot_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "resolved"};
static const lean_object* lp_pmll_PMLL_instReprSlot_repr___redArg___closed__7 = (const lean_object*)&lp_pmll_PMLL_instReprSlot_repr___redArg___closed__7_value;
static const lean_ctor_object lp_pmll_PMLL_instReprSlot_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprSlot_repr___redArg___closed__7_value)}};
static const lean_object* lp_pmll_PMLL_instReprSlot_repr___redArg___closed__8 = (const lean_object*)&lp_pmll_PMLL_instReprSlot_repr___redArg___closed__8_value;
static lean_once_cell_t lp_pmll_PMLL_instReprSlot_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprSlot_repr___redArg___closed__9;
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprSlot_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprSlot_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprSlot_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_pmll_PMLL_instReprSlot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_pmll_PMLL_instReprSlot_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_pmll_PMLL_instReprSlot___closed__0 = (const lean_object*)&lp_pmll_PMLL_instReprSlot___closed__0_value;
LEAN_EXPORT const lean_object* lp_pmll_PMLL_instReprSlot = (const lean_object*)&lp_pmll_PMLL_instReprSlot___closed__0_value;
static const lean_ctor_object lp_pmll_PMLL_instInhabitedSlot_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_pmll_PMLL_instInhabitedSlot_default___closed__0 = (const lean_object*)&lp_pmll_PMLL_instInhabitedSlot_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_pmll_PMLL_instInhabitedSlot_default = (const lean_object*)&lp_pmll_PMLL_instInhabitedSlot_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_pmll_PMLL_instInhabitedSlot = (const lean_object*)&lp_pmll_PMLL_instInhabitedSlot_default___closed__0_value;
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00PMLL_instReprSilo_repr_spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00PMLL_instReprSilo_repr_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_Std_Format_joinSep___at___00Array_repr___at___00PMLL_instReprSilo_repr_spec__1_spec__1(lean_object*, lean_object*);
static const lean_string_object lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__0 = (const lean_object*)&lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__0_value;
static lean_once_cell_t lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__1;
static lean_once_cell_t lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__2;
static const lean_ctor_object lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__0_value)}};
static const lean_object* lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__3 = (const lean_object*)&lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__3_value;
static const lean_string_object lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__4 = (const lean_object*)&lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__4_value;
static const lean_ctor_object lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__4_value)}};
static const lean_object* lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__5 = (const lean_object*)&lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__5_value;
LEAN_EXPORT lean_object* lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__0(lean_object*);
static const lean_string_object lp_pmll_PMLL_instReprSilo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tree"};
static const lean_object* lp_pmll_PMLL_instReprSilo_repr___redArg___closed__0 = (const lean_object*)&lp_pmll_PMLL_instReprSilo_repr___redArg___closed__0_value;
static const lean_ctor_object lp_pmll_PMLL_instReprSilo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprSilo_repr___redArg___closed__0_value)}};
static const lean_object* lp_pmll_PMLL_instReprSilo_repr___redArg___closed__1 = (const lean_object*)&lp_pmll_PMLL_instReprSilo_repr___redArg___closed__1_value;
static const lean_ctor_object lp_pmll_PMLL_instReprSilo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_instReprSilo_repr___redArg___closed__1_value)}};
static const lean_object* lp_pmll_PMLL_instReprSilo_repr___redArg___closed__2 = (const lean_object*)&lp_pmll_PMLL_instReprSilo_repr___redArg___closed__2_value;
static const lean_ctor_object lp_pmll_PMLL_instReprSilo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprSilo_repr___redArg___closed__2_value),((lean_object*)&lp_pmll_PMLL_instReprCert_repr___redArg___closed__5_value)}};
static const lean_object* lp_pmll_PMLL_instReprSilo_repr___redArg___closed__3 = (const lean_object*)&lp_pmll_PMLL_instReprSilo_repr___redArg___closed__3_value;
static lean_once_cell_t lp_pmll_PMLL_instReprSilo_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprSilo_repr___redArg___closed__4;
static const lean_string_object lp_pmll_PMLL_instReprSilo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "slots"};
static const lean_object* lp_pmll_PMLL_instReprSilo_repr___redArg___closed__5 = (const lean_object*)&lp_pmll_PMLL_instReprSilo_repr___redArg___closed__5_value;
static const lean_ctor_object lp_pmll_PMLL_instReprSilo_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_instReprSilo_repr___redArg___closed__5_value)}};
static const lean_object* lp_pmll_PMLL_instReprSilo_repr___redArg___closed__6 = (const lean_object*)&lp_pmll_PMLL_instReprSilo_repr___redArg___closed__6_value;
static lean_once_cell_t lp_pmll_PMLL_instReprSilo_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_instReprSilo_repr___redArg___closed__7;
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprSilo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprSilo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprSilo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_pmll_PMLL_instReprSilo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_pmll_PMLL_instReprSilo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_pmll_PMLL_instReprSilo___closed__0 = (const lean_object*)&lp_pmll_PMLL_instReprSilo___closed__0_value;
LEAN_EXPORT const lean_object* lp_pmll_PMLL_instReprSilo = (const lean_object*)&lp_pmll_PMLL_instReprSilo___closed__0_value;
LEAN_EXPORT lean_object* lp_pmll_PMLL_Silo_empty(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Silo_record(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_Silo_record___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_pmll_PMLL_recordModel_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "assign:x"};
static const lean_object* lp_pmll_PMLL_recordModel_go___closed__0 = (const lean_object*)&lp_pmll_PMLL_recordModel_go___closed__0_value;
static const lean_string_object lp_pmll_PMLL_recordModel_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* lp_pmll_PMLL_recordModel_go___closed__1 = (const lean_object*)&lp_pmll_PMLL_recordModel_go___closed__1_value;
static const lean_string_object lp_pmll_PMLL_recordModel_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* lp_pmll_PMLL_recordModel_go___closed__2 = (const lean_object*)&lp_pmll_PMLL_recordModel_go___closed__2_value;
static const lean_string_object lp_pmll_PMLL_recordModel_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* lp_pmll_PMLL_recordModel_go___closed__3 = (const lean_object*)&lp_pmll_PMLL_recordModel_go___closed__3_value;
static const lean_string_object lp_pmll_PMLL_recordModel_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* lp_pmll_PMLL_recordModel_go___closed__4 = (const lean_object*)&lp_pmll_PMLL_recordModel_go___closed__4_value;
LEAN_EXPORT lean_object* lp_pmll_PMLL_recordModel_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_recordModel_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_recordModel(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_recordModel___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_pmll_instBEqOption_beq___at___00PMLL_peek_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_instBEqOption_beq___at___00PMLL_peek_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_pmll___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00PMLL_peek_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_pmll___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00PMLL_peek_spec__1___closed__0 = (const lean_object*)&lp_pmll___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00PMLL_peek_spec__1___closed__0_value;
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00PMLL_peek_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00PMLL_peek_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_peek(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_peek___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_mapTR_loop___at___00PMLL_php32_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__3___redArg___closed__0 = (const lean_object*)&lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_mapTR_loop___at___00List_mapTR_loop___at___00PMLL_php32_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_mapTR_loop___at___00PMLL_php32_spec__0(lean_object*, lean_object*);
static lean_once_cell_t lp_pmll_PMLL_php32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_php32___closed__0;
static lean_once_cell_t lp_pmll_PMLL_php32___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_php32___closed__1;
static const lean_ctor_object lp_pmll_PMLL_php32___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_pmll_PMLL_php32___closed__2 = (const lean_object*)&lp_pmll_PMLL_php32___closed__2_value;
static lean_once_cell_t lp_pmll_PMLL_php32___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_php32___closed__3;
static lean_once_cell_t lp_pmll_PMLL_php32___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_php32___closed__4;
LEAN_EXPORT lean_object* lp_pmll_PMLL_php32;
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_mapTR_loop___at___00PMLL_decode6_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_mapTR_loop___at___00PMLL_decode6_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_pmll_PMLL_decode6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_decode6___closed__0;
LEAN_EXPORT lean_object* lp_pmll_PMLL_decode6(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_decode6___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_pmll_List_all___at___00PMLL_php32AllConflict_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_List_all___at___00PMLL_php32AllConflict_spec__0___boxed(lean_object*);
static lean_once_cell_t lp_pmll_PMLL_php32AllConflict___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_php32AllConflict___closed__0;
static lean_once_cell_t lp_pmll_PMLL_php32AllConflict___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_pmll_PMLL_php32AllConflict___closed__1;
LEAN_EXPORT uint8_t lp_pmll_PMLL_php32AllConflict;
LEAN_EXPORT lean_object* lp_pmll_PMLL_budgetFor(lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL_budgetFor___boxed(lean_object*);
static lean_once_cell_t lp_pmll_PMLL_satExample___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_satExample___closed__0;
static lean_once_cell_t lp_pmll_PMLL_satExample___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_satExample___closed__1;
static lean_once_cell_t lp_pmll_PMLL_satExample___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_satExample___closed__2;
static lean_once_cell_t lp_pmll_PMLL_satExample___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_satExample___closed__3;
static lean_once_cell_t lp_pmll_PMLL_satExample___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_satExample___closed__4;
static lean_once_cell_t lp_pmll_PMLL_satExample___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_satExample___closed__5;
LEAN_EXPORT lean_object* lp_pmll_PMLL_satExample;
static lean_once_cell_t lp_pmll_PMLL_satExampleCert___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_satExampleCert___closed__0;
static lean_once_cell_t lp_pmll_PMLL_satExampleCert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL_satExampleCert___closed__1;
LEAN_EXPORT lean_object* lp_pmll_PMLL_satExampleCert;
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = lp_pmll_PMLL_Flag_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lp_pmll_PMLL_Flag_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = lp_pmll_PMLL_Flag_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_unresolved_elim___redArg(lean_object* v_unresolved_22_){
_start:
{
lean_inc(v_unresolved_22_);
return v_unresolved_22_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_unresolved_elim___redArg___boxed(lean_object* v_unresolved_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_pmll_PMLL_Flag_unresolved_elim___redArg(v_unresolved_23_);
lean_dec(v_unresolved_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_unresolved_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_unresolved_28_){
_start:
{
lean_inc(v_unresolved_28_);
return v_unresolved_28_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_unresolved_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_unresolved_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = lp_pmll_PMLL_Flag_unresolved_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_unresolved_32_);
lean_dec(v_unresolved_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_sat_elim___redArg(lean_object* v_sat_35_){
_start:
{
lean_inc(v_sat_35_);
return v_sat_35_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_sat_elim___redArg___boxed(lean_object* v_sat_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = lp_pmll_PMLL_Flag_sat_elim___redArg(v_sat_36_);
lean_dec(v_sat_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_sat_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_sat_41_){
_start:
{
lean_inc(v_sat_41_);
return v_sat_41_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_sat_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_sat_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = lp_pmll_PMLL_Flag_sat_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_sat_45_);
lean_dec(v_sat_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_unsat_elim___redArg(lean_object* v_unsat_48_){
_start:
{
lean_inc(v_unsat_48_);
return v_unsat_48_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_unsat_elim___redArg___boxed(lean_object* v_unsat_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = lp_pmll_PMLL_Flag_unsat_elim___redArg(v_unsat_49_);
lean_dec(v_unsat_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_unsat_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_unsat_54_){
_start:
{
lean_inc(v_unsat_54_);
return v_unsat_54_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_unsat_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_unsat_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = lp_pmll_PMLL_Flag_unsat_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_unsat_58_);
lean_dec(v_unsat_58_);
return v_res_60_;
}
}
LEAN_EXPORT uint8_t lp_pmll_PMLL_Flag_ofNat(lean_object* v_n_61_){
_start:
{
lean_object* v___x_62_; uint8_t v___x_63_; 
v___x_62_ = lean_unsigned_to_nat(0u);
v___x_63_ = lean_nat_dec_le(v_n_61_, v___x_62_);
if (v___x_63_ == 0)
{
lean_object* v___x_64_; uint8_t v___x_65_; 
v___x_64_ = lean_unsigned_to_nat(1u);
v___x_65_ = lean_nat_dec_le(v_n_61_, v___x_64_);
if (v___x_65_ == 0)
{
uint8_t v___x_66_; 
v___x_66_ = 2;
return v___x_66_;
}
else
{
uint8_t v___x_67_; 
v___x_67_ = 1;
return v___x_67_;
}
}
else
{
uint8_t v___x_68_; 
v___x_68_ = 0;
return v___x_68_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Flag_ofNat___boxed(lean_object* v_n_69_){
_start:
{
uint8_t v_res_70_; lean_object* v_r_71_; 
v_res_70_ = lp_pmll_PMLL_Flag_ofNat(v_n_69_);
lean_dec(v_n_69_);
v_r_71_ = lean_box(v_res_70_);
return v_r_71_;
}
}
LEAN_EXPORT uint8_t lp_pmll_PMLL_instDecidableEqFlag(uint8_t v_x_72_, uint8_t v_y_73_){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_74_ = lean_box(v_x_72_);
v___x_75_ = lean_obj_tag_nat(v___x_74_);
lean_dec(v___x_74_);
v___x_76_ = lean_box(v_y_73_);
v___x_77_ = lean_obj_tag_nat(v___x_76_);
lean_dec(v___x_76_);
v___x_78_ = lean_nat_dec_eq(v___x_75_, v___x_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instDecidableEqFlag___boxed(lean_object* v_x_79_, lean_object* v_y_80_){
_start:
{
uint8_t v_x_23__boxed_81_; uint8_t v_y_24__boxed_82_; uint8_t v_res_83_; lean_object* v_r_84_; 
v_x_23__boxed_81_ = lean_unbox(v_x_79_);
v_y_24__boxed_82_ = lean_unbox(v_y_80_);
v_res_83_ = lp_pmll_PMLL_instDecidableEqFlag(v_x_23__boxed_81_, v_y_24__boxed_82_);
v_r_84_ = lean_box(v_res_83_);
return v_r_84_;
}
}
static lean_object* _init_lp_pmll_PMLL_instReprFlag_repr___closed__6(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_unsigned_to_nat(2u);
v___x_95_ = lean_nat_to_int(v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_lp_pmll_PMLL_instReprFlag_repr___closed__7(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_unsigned_to_nat(1u);
v___x_97_ = lean_nat_to_int(v___x_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprFlag_repr(uint8_t v_x_98_, lean_object* v_prec_99_){
_start:
{
lean_object* v___y_101_; lean_object* v___y_108_; lean_object* v___y_115_; 
switch(v_x_98_)
{
case 0:
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = lean_unsigned_to_nat(1024u);
v___x_122_ = lean_nat_dec_le(v___x_121_, v_prec_99_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; 
v___x_123_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__6, &lp_pmll_PMLL_instReprFlag_repr___closed__6_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__6);
v___y_101_ = v___x_123_;
goto v___jp_100_;
}
else
{
lean_object* v___x_124_; 
v___x_124_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__7, &lp_pmll_PMLL_instReprFlag_repr___closed__7_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__7);
v___y_101_ = v___x_124_;
goto v___jp_100_;
}
}
case 1:
{
lean_object* v___x_125_; uint8_t v___x_126_; 
v___x_125_ = lean_unsigned_to_nat(1024u);
v___x_126_ = lean_nat_dec_le(v___x_125_, v_prec_99_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; 
v___x_127_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__6, &lp_pmll_PMLL_instReprFlag_repr___closed__6_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__6);
v___y_108_ = v___x_127_;
goto v___jp_107_;
}
else
{
lean_object* v___x_128_; 
v___x_128_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__7, &lp_pmll_PMLL_instReprFlag_repr___closed__7_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__7);
v___y_108_ = v___x_128_;
goto v___jp_107_;
}
}
default: 
{
lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_129_ = lean_unsigned_to_nat(1024u);
v___x_130_ = lean_nat_dec_le(v___x_129_, v_prec_99_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; 
v___x_131_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__6, &lp_pmll_PMLL_instReprFlag_repr___closed__6_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__6);
v___y_115_ = v___x_131_;
goto v___jp_114_;
}
else
{
lean_object* v___x_132_; 
v___x_132_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__7, &lp_pmll_PMLL_instReprFlag_repr___closed__7_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__7);
v___y_115_ = v___x_132_;
goto v___jp_114_;
}
}
}
v___jp_100_:
{
lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_102_ = ((lean_object*)(lp_pmll_PMLL_instReprFlag_repr___closed__1));
lean_inc(v___y_101_);
v___x_103_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_103_, 0, v___y_101_);
lean_ctor_set(v___x_103_, 1, v___x_102_);
v___x_104_ = 0;
v___x_105_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_105_, 0, v___x_103_);
lean_ctor_set_uint8(v___x_105_, sizeof(void*)*1, v___x_104_);
v___x_106_ = l_Repr_addAppParen(v___x_105_, v_prec_99_);
return v___x_106_;
}
v___jp_107_:
{
lean_object* v___x_109_; lean_object* v___x_110_; uint8_t v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_109_ = ((lean_object*)(lp_pmll_PMLL_instReprFlag_repr___closed__3));
lean_inc(v___y_108_);
v___x_110_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_110_, 0, v___y_108_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
v___x_111_ = 0;
v___x_112_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_112_, 0, v___x_110_);
lean_ctor_set_uint8(v___x_112_, sizeof(void*)*1, v___x_111_);
v___x_113_ = l_Repr_addAppParen(v___x_112_, v_prec_99_);
return v___x_113_;
}
v___jp_114_:
{
lean_object* v___x_116_; lean_object* v___x_117_; uint8_t v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_116_ = ((lean_object*)(lp_pmll_PMLL_instReprFlag_repr___closed__5));
lean_inc(v___y_115_);
v___x_117_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_117_, 0, v___y_115_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
v___x_118_ = 0;
v___x_119_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_119_, 0, v___x_117_);
lean_ctor_set_uint8(v___x_119_, sizeof(void*)*1, v___x_118_);
v___x_120_ = l_Repr_addAppParen(v___x_119_, v_prec_99_);
return v___x_120_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprFlag_repr___boxed(lean_object* v_x_133_, lean_object* v_prec_134_){
_start:
{
uint8_t v_x_171__boxed_135_; lean_object* v_res_136_; 
v_x_171__boxed_135_ = lean_unbox(v_x_133_);
v_res_136_ = lp_pmll_PMLL_instReprFlag_repr(v_x_171__boxed_135_, v_prec_134_);
lean_dec(v_prec_134_);
return v_res_136_;
}
}
static uint8_t _init_lp_pmll_PMLL_instInhabitedFlag_default(void){
_start:
{
uint8_t v___x_139_; 
v___x_139_ = 0;
return v___x_139_;
}
}
static uint8_t _init_lp_pmll_PMLL_instInhabitedFlag(void){
_start:
{
uint8_t v___x_140_; 
v___x_140_ = 0;
return v___x_140_;
}
}
static lean_object* _init_lp_pmll_PMLL_litVar___closed__0(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = lean_unsigned_to_nat(0u);
v___x_142_ = lean_nat_to_int(v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_litVar(lean_object* v_lit_143_, lean_object* v_n_144_){
_start:
{
lean_object* v___x_145_; uint8_t v___x_146_; 
v___x_145_ = lean_obj_once(&lp_pmll_PMLL_litVar___closed__0, &lp_pmll_PMLL_litVar___closed__0_once, _init_lp_pmll_PMLL_litVar___closed__0);
v___x_146_ = lean_int_dec_eq(v_lit_143_, v___x_145_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v_v_149_; uint8_t v___x_150_; 
v___x_147_ = lean_nat_abs(v_lit_143_);
v___x_148_ = lean_unsigned_to_nat(1u);
v_v_149_ = lean_nat_sub(v___x_147_, v___x_148_);
lean_dec(v___x_147_);
v___x_150_ = lean_nat_dec_lt(v_v_149_, v_n_144_);
if (v___x_150_ == 0)
{
lean_object* v___x_151_; 
lean_dec(v_v_149_);
v___x_151_ = lean_box(0);
return v___x_151_;
}
else
{
lean_object* v___x_152_; 
v___x_152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_152_, 0, v_v_149_);
return v___x_152_;
}
}
else
{
lean_object* v___x_153_; 
v___x_153_ = lean_box(0);
return v___x_153_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_litVar___boxed(lean_object* v_lit_154_, lean_object* v_n_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = lp_pmll_PMLL_litVar(v_lit_154_, v_n_155_);
lean_dec(v_n_155_);
lean_dec(v_lit_154_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_readAsg(lean_object* v_a_157_, lean_object* v_v_158_){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = l_List_get_x3fInternal___redArg(v_a_157_, v_v_158_);
if (lean_obj_tag(v___x_159_) == 0)
{
lean_object* v___x_160_; 
v___x_160_ = lean_box(0);
return v___x_160_;
}
else
{
lean_object* v_val_161_; 
v_val_161_ = lean_ctor_get(v___x_159_, 0);
lean_inc(v_val_161_);
lean_dec_ref_known(v___x_159_, 1);
return v_val_161_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_readAsg___boxed(lean_object* v_a_162_, lean_object* v_v_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = lp_pmll_PMLL_readAsg(v_a_162_, v_v_163_);
lean_dec(v_a_162_);
return v_res_164_;
}
}
LEAN_EXPORT uint8_t lp_pmll_PMLL_litSat(lean_object* v_n_165_, lean_object* v_a_166_, lean_object* v_lit_167_){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lp_pmll_PMLL_litVar(v_lit_167_, v_n_165_);
if (lean_obj_tag(v___x_168_) == 0)
{
uint8_t v___x_169_; 
v___x_169_ = 0;
return v___x_169_;
}
else
{
lean_object* v_val_170_; lean_object* v___x_171_; 
v_val_170_ = lean_ctor_get(v___x_168_, 0);
lean_inc(v_val_170_);
lean_dec_ref_known(v___x_168_, 1);
v___x_171_ = lp_pmll_PMLL_readAsg(v_a_166_, v_val_170_);
if (lean_obj_tag(v___x_171_) == 0)
{
uint8_t v___x_172_; 
v___x_172_ = 0;
return v___x_172_;
}
else
{
lean_object* v_val_173_; lean_object* v___x_174_; uint8_t v___x_175_; 
v_val_173_ = lean_ctor_get(v___x_171_, 0);
lean_inc(v_val_173_);
lean_dec_ref_known(v___x_171_, 1);
v___x_174_ = lean_obj_once(&lp_pmll_PMLL_litVar___closed__0, &lp_pmll_PMLL_litVar___closed__0_once, _init_lp_pmll_PMLL_litVar___closed__0);
v___x_175_ = lean_int_dec_lt(v___x_174_, v_lit_167_);
if (v___x_175_ == 0)
{
uint8_t v___x_176_; 
v___x_176_ = lean_unbox(v_val_173_);
lean_dec(v_val_173_);
if (v___x_176_ == 0)
{
uint8_t v___x_177_; 
v___x_177_ = 1;
return v___x_177_;
}
else
{
return v___x_175_;
}
}
else
{
uint8_t v___x_178_; 
v___x_178_ = lean_unbox(v_val_173_);
lean_dec(v_val_173_);
return v___x_178_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_litSat___boxed(lean_object* v_n_179_, lean_object* v_a_180_, lean_object* v_lit_181_){
_start:
{
uint8_t v_res_182_; lean_object* v_r_183_; 
v_res_182_ = lp_pmll_PMLL_litSat(v_n_179_, v_a_180_, v_lit_181_);
lean_dec(v_lit_181_);
lean_dec(v_a_180_);
lean_dec(v_n_179_);
v_r_183_ = lean_box(v_res_182_);
return v_r_183_;
}
}
LEAN_EXPORT uint8_t lp_pmll_PMLL_litOpen(lean_object* v_n_184_, lean_object* v_a_185_, lean_object* v_lit_186_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = lp_pmll_PMLL_litVar(v_lit_186_, v_n_184_);
if (lean_obj_tag(v___x_187_) == 0)
{
uint8_t v___x_188_; 
v___x_188_ = 0;
return v___x_188_;
}
else
{
lean_object* v_val_189_; lean_object* v___x_190_; 
v_val_189_ = lean_ctor_get(v___x_187_, 0);
lean_inc(v_val_189_);
lean_dec_ref_known(v___x_187_, 1);
v___x_190_ = l_List_get_x3fInternal___redArg(v_a_185_, v_val_189_);
if (lean_obj_tag(v___x_190_) == 1)
{
lean_object* v_val_191_; 
v_val_191_ = lean_ctor_get(v___x_190_, 0);
lean_inc(v_val_191_);
lean_dec_ref_known(v___x_190_, 1);
if (lean_obj_tag(v_val_191_) == 0)
{
uint8_t v___x_192_; 
v___x_192_ = 1;
return v___x_192_;
}
else
{
uint8_t v___x_193_; 
lean_dec(v_val_191_);
v___x_193_ = 0;
return v___x_193_;
}
}
else
{
uint8_t v___x_194_; 
lean_dec(v___x_190_);
v___x_194_ = 0;
return v___x_194_;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_litOpen___boxed(lean_object* v_n_195_, lean_object* v_a_196_, lean_object* v_lit_197_){
_start:
{
uint8_t v_res_198_; lean_object* v_r_199_; 
v_res_198_ = lp_pmll_PMLL_litOpen(v_n_195_, v_a_196_, v_lit_197_);
lean_dec(v_lit_197_);
lean_dec(v_a_196_);
lean_dec(v_n_195_);
v_r_199_ = lean_box(v_res_198_);
return v_r_199_;
}
}
LEAN_EXPORT uint8_t lp_pmll_List_any___at___00PMLL_clauseConflict_spec__1(lean_object* v_n_200_, lean_object* v_a_201_, lean_object* v_x_202_){
_start:
{
if (lean_obj_tag(v_x_202_) == 0)
{
uint8_t v___x_203_; 
v___x_203_ = 0;
return v___x_203_;
}
else
{
lean_object* v_head_204_; lean_object* v_tail_205_; uint8_t v___x_206_; 
v_head_204_ = lean_ctor_get(v_x_202_, 0);
v_tail_205_ = lean_ctor_get(v_x_202_, 1);
v___x_206_ = lp_pmll_PMLL_litOpen(v_n_200_, v_a_201_, v_head_204_);
if (v___x_206_ == 0)
{
v_x_202_ = v_tail_205_;
goto _start;
}
else
{
return v___x_206_;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_any___at___00PMLL_clauseConflict_spec__1___boxed(lean_object* v_n_208_, lean_object* v_a_209_, lean_object* v_x_210_){
_start:
{
uint8_t v_res_211_; lean_object* v_r_212_; 
v_res_211_ = lp_pmll_List_any___at___00PMLL_clauseConflict_spec__1(v_n_208_, v_a_209_, v_x_210_);
lean_dec(v_x_210_);
lean_dec(v_a_209_);
lean_dec(v_n_208_);
v_r_212_ = lean_box(v_res_211_);
return v_r_212_;
}
}
LEAN_EXPORT uint8_t lp_pmll_List_any___at___00PMLL_clauseConflict_spec__0(lean_object* v_n_213_, lean_object* v_a_214_, lean_object* v_x_215_){
_start:
{
if (lean_obj_tag(v_x_215_) == 0)
{
uint8_t v___x_216_; 
v___x_216_ = 0;
return v___x_216_;
}
else
{
lean_object* v_head_217_; lean_object* v_tail_218_; uint8_t v___x_219_; 
v_head_217_ = lean_ctor_get(v_x_215_, 0);
v_tail_218_ = lean_ctor_get(v_x_215_, 1);
v___x_219_ = lp_pmll_PMLL_litSat(v_n_213_, v_a_214_, v_head_217_);
if (v___x_219_ == 0)
{
v_x_215_ = v_tail_218_;
goto _start;
}
else
{
return v___x_219_;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_any___at___00PMLL_clauseConflict_spec__0___boxed(lean_object* v_n_221_, lean_object* v_a_222_, lean_object* v_x_223_){
_start:
{
uint8_t v_res_224_; lean_object* v_r_225_; 
v_res_224_ = lp_pmll_List_any___at___00PMLL_clauseConflict_spec__0(v_n_221_, v_a_222_, v_x_223_);
lean_dec(v_x_223_);
lean_dec(v_a_222_);
lean_dec(v_n_221_);
v_r_225_ = lean_box(v_res_224_);
return v_r_225_;
}
}
LEAN_EXPORT uint8_t lp_pmll_PMLL_clauseConflict(lean_object* v_n_226_, lean_object* v_a_227_, lean_object* v_c_228_){
_start:
{
uint8_t v___x_229_; 
v___x_229_ = lp_pmll_List_any___at___00PMLL_clauseConflict_spec__0(v_n_226_, v_a_227_, v_c_228_);
if (v___x_229_ == 0)
{
uint8_t v___x_230_; 
v___x_230_ = lp_pmll_List_any___at___00PMLL_clauseConflict_spec__1(v_n_226_, v_a_227_, v_c_228_);
if (v___x_230_ == 0)
{
uint8_t v___x_231_; 
v___x_231_ = 1;
return v___x_231_;
}
else
{
return v___x_229_;
}
}
else
{
uint8_t v___x_232_; 
v___x_232_ = 0;
return v___x_232_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_clauseConflict___boxed(lean_object* v_n_233_, lean_object* v_a_234_, lean_object* v_c_235_){
_start:
{
uint8_t v_res_236_; lean_object* v_r_237_; 
v_res_236_ = lp_pmll_PMLL_clauseConflict(v_n_233_, v_a_234_, v_c_235_);
lean_dec(v_c_235_);
lean_dec(v_a_234_);
lean_dec(v_n_233_);
v_r_237_ = lean_box(v_res_236_);
return v_r_237_;
}
}
LEAN_EXPORT uint8_t lp_pmll_List_any___at___00PMLL_checkConflict_spec__0(lean_object* v_n_238_, lean_object* v_a_239_, lean_object* v_x_240_){
_start:
{
if (lean_obj_tag(v_x_240_) == 0)
{
uint8_t v___x_241_; 
v___x_241_ = 0;
return v___x_241_;
}
else
{
lean_object* v_head_242_; lean_object* v_tail_243_; uint8_t v___x_244_; 
v_head_242_ = lean_ctor_get(v_x_240_, 0);
v_tail_243_ = lean_ctor_get(v_x_240_, 1);
v___x_244_ = lp_pmll_PMLL_clauseConflict(v_n_238_, v_a_239_, v_head_242_);
if (v___x_244_ == 0)
{
v_x_240_ = v_tail_243_;
goto _start;
}
else
{
return v___x_244_;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_any___at___00PMLL_checkConflict_spec__0___boxed(lean_object* v_n_246_, lean_object* v_a_247_, lean_object* v_x_248_){
_start:
{
uint8_t v_res_249_; lean_object* v_r_250_; 
v_res_249_ = lp_pmll_List_any___at___00PMLL_checkConflict_spec__0(v_n_246_, v_a_247_, v_x_248_);
lean_dec(v_x_248_);
lean_dec(v_a_247_);
lean_dec(v_n_246_);
v_r_250_ = lean_box(v_res_249_);
return v_r_250_;
}
}
LEAN_EXPORT uint8_t lp_pmll_PMLL_checkConflict(lean_object* v_n_251_, lean_object* v_clauses_252_, lean_object* v_a_253_){
_start:
{
uint8_t v___x_254_; 
v___x_254_ = lp_pmll_List_any___at___00PMLL_checkConflict_spec__0(v_n_251_, v_a_253_, v_clauses_252_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_checkConflict___boxed(lean_object* v_n_255_, lean_object* v_clauses_256_, lean_object* v_a_257_){
_start:
{
uint8_t v_res_258_; lean_object* v_r_259_; 
v_res_258_ = lp_pmll_PMLL_checkConflict(v_n_255_, v_clauses_256_, v_a_257_);
lean_dec(v_a_257_);
lean_dec(v_clauses_256_);
lean_dec(v_n_255_);
v_r_259_ = lean_box(v_res_258_);
return v_r_259_;
}
}
LEAN_EXPORT uint8_t lp_pmll_List_all___at___00PMLL_allAssigned_spec__0(lean_object* v_x_260_){
_start:
{
if (lean_obj_tag(v_x_260_) == 0)
{
uint8_t v___x_261_; 
v___x_261_ = 1;
return v___x_261_;
}
else
{
lean_object* v_head_262_; 
v_head_262_ = lean_ctor_get(v_x_260_, 0);
if (lean_obj_tag(v_head_262_) == 0)
{
uint8_t v___x_263_; 
v___x_263_ = 0;
return v___x_263_;
}
else
{
lean_object* v_tail_264_; 
v_tail_264_ = lean_ctor_get(v_x_260_, 1);
v_x_260_ = v_tail_264_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_all___at___00PMLL_allAssigned_spec__0___boxed(lean_object* v_x_266_){
_start:
{
uint8_t v_res_267_; lean_object* v_r_268_; 
v_res_267_ = lp_pmll_List_all___at___00PMLL_allAssigned_spec__0(v_x_266_);
lean_dec(v_x_266_);
v_r_268_ = lean_box(v_res_267_);
return v_r_268_;
}
}
LEAN_EXPORT uint8_t lp_pmll_PMLL_allAssigned(lean_object* v_a_269_){
_start:
{
uint8_t v___x_270_; 
v___x_270_ = lp_pmll_List_all___at___00PMLL_allAssigned_spec__0(v_a_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_allAssigned___boxed(lean_object* v_a_271_){
_start:
{
uint8_t v_res_272_; lean_object* v_r_273_; 
v_res_272_ = lp_pmll_PMLL_allAssigned(v_a_271_);
lean_dec(v_a_271_);
v_r_273_ = lean_box(v_res_272_);
return v_r_273_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_firstOpen(lean_object* v_x_276_){
_start:
{
if (lean_obj_tag(v_x_276_) == 0)
{
lean_object* v___x_277_; 
v___x_277_ = lean_box(0);
return v___x_277_;
}
else
{
lean_object* v_head_278_; 
v_head_278_ = lean_ctor_get(v_x_276_, 0);
if (lean_obj_tag(v_head_278_) == 0)
{
lean_object* v___x_279_; 
v___x_279_ = ((lean_object*)(lp_pmll_PMLL_firstOpen___closed__0));
return v___x_279_;
}
else
{
lean_object* v_tail_280_; lean_object* v___x_281_; 
v_tail_280_ = lean_ctor_get(v_x_276_, 1);
v___x_281_ = lp_pmll_PMLL_firstOpen(v_tail_280_);
if (lean_obj_tag(v___x_281_) == 0)
{
return v___x_281_;
}
else
{
lean_object* v_val_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_291_; 
v_val_282_ = lean_ctor_get(v___x_281_, 0);
v_isSharedCheck_291_ = !lean_is_exclusive(v___x_281_);
if (v_isSharedCheck_291_ == 0)
{
v___x_284_ = v___x_281_;
v_isShared_285_ = v_isSharedCheck_291_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_val_282_);
lean_dec(v___x_281_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_291_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_289_; 
v___x_286_ = lean_unsigned_to_nat(1u);
v___x_287_ = lean_nat_add(v_val_282_, v___x_286_);
lean_dec(v_val_282_);
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 0, v___x_287_);
v___x_289_ = v___x_284_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v___x_287_);
v___x_289_ = v_reuseFailAlloc_290_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
return v___x_289_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_firstOpen___boxed(lean_object* v_x_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = lp_pmll_PMLL_firstOpen(v_x_292_);
lean_dec(v_x_292_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_setAsg(lean_object* v_a_296_, lean_object* v_v_297_, uint8_t v_b_298_){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_299_ = lean_box(v_b_298_);
v___x_300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
v___x_301_ = ((lean_object*)(lp_pmll_PMLL_setAsg___closed__0));
lean_inc(v_a_296_);
v___x_302_ = l___private_Init_Data_List_Impl_0__List_setTR_go___redArg(v_a_296_, v___x_300_, v_a_296_, v_v_297_, v___x_301_);
lean_dec(v_a_296_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_setAsg___boxed(lean_object* v_a_303_, lean_object* v_v_304_, lean_object* v_b_305_){
_start:
{
uint8_t v_b_boxed_306_; lean_object* v_res_307_; 
v_b_boxed_306_ = lean_unbox(v_b_305_);
v_res_307_ = lp_pmll_PMLL_setAsg(v_a_303_, v_v_304_, v_b_boxed_306_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_ctorIdx___impl(lean_object* v_x_308_){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = lean_obj_tag_nat(v_x_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_ctorIdx___impl___boxed(lean_object* v_x_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = lp_pmll_PMLL_Look_ctorIdx___impl(v_x_310_);
lean_dec(v_x_310_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_ctorElim___redArg(lean_object* v_t_312_, lean_object* v_k_313_){
_start:
{
if (lean_obj_tag(v_t_312_) == 2)
{
lean_object* v_lit_314_; lean_object* v___x_315_; 
v_lit_314_ = lean_ctor_get(v_t_312_, 0);
lean_inc(v_lit_314_);
lean_dec_ref_known(v_t_312_, 1);
v___x_315_ = lean_apply_1(v_k_313_, v_lit_314_);
return v___x_315_;
}
else
{
lean_dec(v_t_312_);
return v_k_313_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_ctorElim(lean_object* v_motive_316_, lean_object* v_ctorIdx_317_, lean_object* v_t_318_, lean_object* v_h_319_, lean_object* v_k_320_){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = lp_pmll_PMLL_Look_ctorElim___redArg(v_t_318_, v_k_320_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_ctorElim___boxed(lean_object* v_motive_322_, lean_object* v_ctorIdx_323_, lean_object* v_t_324_, lean_object* v_h_325_, lean_object* v_k_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = lp_pmll_PMLL_Look_ctorElim(v_motive_322_, v_ctorIdx_323_, v_t_324_, v_h_325_, v_k_326_);
lean_dec(v_ctorIdx_323_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_sat_elim___redArg(lean_object* v_t_328_, lean_object* v_sat_329_){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = lp_pmll_PMLL_Look_ctorElim___redArg(v_t_328_, v_sat_329_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_sat_elim(lean_object* v_motive_331_, lean_object* v_t_332_, lean_object* v_h_333_, lean_object* v_sat_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = lp_pmll_PMLL_Look_ctorElim___redArg(v_t_332_, v_sat_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_conflict_elim___redArg(lean_object* v_t_336_, lean_object* v_conflict_337_){
_start:
{
lean_object* v___x_338_; 
v___x_338_ = lp_pmll_PMLL_Look_ctorElim___redArg(v_t_336_, v_conflict_337_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_conflict_elim(lean_object* v_motive_339_, lean_object* v_t_340_, lean_object* v_h_341_, lean_object* v_conflict_342_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = lp_pmll_PMLL_Look_ctorElim___redArg(v_t_340_, v_conflict_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_unit_elim___redArg(lean_object* v_t_344_, lean_object* v_unit_345_){
_start:
{
lean_object* v___x_346_; 
v___x_346_ = lp_pmll_PMLL_Look_ctorElim___redArg(v_t_344_, v_unit_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_unit_elim(lean_object* v_motive_347_, lean_object* v_t_348_, lean_object* v_h_349_, lean_object* v_unit_350_){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = lp_pmll_PMLL_Look_ctorElim___redArg(v_t_348_, v_unit_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_multi_elim___redArg(lean_object* v_t_352_, lean_object* v_multi_353_){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = lp_pmll_PMLL_Look_ctorElim___redArg(v_t_352_, v_multi_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Look_multi_elim(lean_object* v_motive_355_, lean_object* v_t_356_, lean_object* v_h_357_, lean_object* v_multi_358_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = lp_pmll_PMLL_Look_ctorElim___redArg(v_t_356_, v_multi_358_);
return v___x_359_;
}
}
LEAN_EXPORT uint8_t lp_pmll_PMLL_instDecidableEqLook_decEq(lean_object* v_x_360_, lean_object* v_x_361_){
_start:
{
switch(lean_obj_tag(v_x_360_))
{
case 0:
{
if (lean_obj_tag(v_x_361_) == 0)
{
uint8_t v___x_362_; 
v___x_362_ = 1;
return v___x_362_;
}
else
{
uint8_t v___x_363_; 
v___x_363_ = 0;
return v___x_363_;
}
}
case 1:
{
if (lean_obj_tag(v_x_361_) == 1)
{
uint8_t v___x_364_; 
v___x_364_ = 1;
return v___x_364_;
}
else
{
uint8_t v___x_365_; 
v___x_365_ = 0;
return v___x_365_;
}
}
case 2:
{
if (lean_obj_tag(v_x_361_) == 2)
{
lean_object* v_lit_366_; lean_object* v_lit_367_; uint8_t v___x_368_; 
v_lit_366_ = lean_ctor_get(v_x_360_, 0);
v_lit_367_ = lean_ctor_get(v_x_361_, 0);
v___x_368_ = lean_int_dec_eq(v_lit_366_, v_lit_367_);
return v___x_368_;
}
else
{
uint8_t v___x_369_; 
v___x_369_ = 0;
return v___x_369_;
}
}
default: 
{
if (lean_obj_tag(v_x_361_) == 3)
{
uint8_t v___x_370_; 
v___x_370_ = 1;
return v___x_370_;
}
else
{
uint8_t v___x_371_; 
v___x_371_ = 0;
return v___x_371_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instDecidableEqLook_decEq___boxed(lean_object* v_x_372_, lean_object* v_x_373_){
_start:
{
uint8_t v_res_374_; lean_object* v_r_375_; 
v_res_374_ = lp_pmll_PMLL_instDecidableEqLook_decEq(v_x_372_, v_x_373_);
lean_dec(v_x_373_);
lean_dec(v_x_372_);
v_r_375_ = lean_box(v_res_374_);
return v_r_375_;
}
}
LEAN_EXPORT uint8_t lp_pmll_PMLL_instDecidableEqLook(lean_object* v_x_376_, lean_object* v_x_377_){
_start:
{
uint8_t v___x_378_; 
v___x_378_ = lp_pmll_PMLL_instDecidableEqLook_decEq(v_x_376_, v_x_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instDecidableEqLook___boxed(lean_object* v_x_379_, lean_object* v_x_380_){
_start:
{
uint8_t v_res_381_; lean_object* v_r_382_; 
v_res_381_ = lp_pmll_PMLL_instDecidableEqLook(v_x_379_, v_x_380_);
lean_dec(v_x_380_);
lean_dec(v_x_379_);
v_r_382_ = lean_box(v_res_381_);
return v_r_382_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprLook_repr(lean_object* v_x_398_, lean_object* v_prec_399_){
_start:
{
lean_object* v___y_401_; lean_object* v___y_402_; lean_object* v___y_403_; lean_object* v___y_410_; lean_object* v___y_417_; lean_object* v___y_424_; 
switch(lean_obj_tag(v_x_398_))
{
case 0:
{
lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_430_ = lean_unsigned_to_nat(1024u);
v___x_431_ = lean_nat_dec_le(v___x_430_, v_prec_399_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; 
v___x_432_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__6, &lp_pmll_PMLL_instReprFlag_repr___closed__6_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__6);
v___y_417_ = v___x_432_;
goto v___jp_416_;
}
else
{
lean_object* v___x_433_; 
v___x_433_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__7, &lp_pmll_PMLL_instReprFlag_repr___closed__7_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__7);
v___y_417_ = v___x_433_;
goto v___jp_416_;
}
}
case 1:
{
lean_object* v___x_434_; uint8_t v___x_435_; 
v___x_434_ = lean_unsigned_to_nat(1024u);
v___x_435_ = lean_nat_dec_le(v___x_434_, v_prec_399_);
if (v___x_435_ == 0)
{
lean_object* v___x_436_; 
v___x_436_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__6, &lp_pmll_PMLL_instReprFlag_repr___closed__6_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__6);
v___y_410_ = v___x_436_;
goto v___jp_409_;
}
else
{
lean_object* v___x_437_; 
v___x_437_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__7, &lp_pmll_PMLL_instReprFlag_repr___closed__7_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__7);
v___y_410_ = v___x_437_;
goto v___jp_409_;
}
}
case 2:
{
lean_object* v_lit_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_461_; 
v_lit_438_ = lean_ctor_get(v_x_398_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v_x_398_);
if (v_isSharedCheck_461_ == 0)
{
v___x_440_ = v_x_398_;
v_isShared_441_ = v_isSharedCheck_461_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_lit_438_);
lean_dec(v_x_398_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_461_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___y_443_; lean_object* v___x_457_; uint8_t v___x_458_; 
v___x_457_ = lean_unsigned_to_nat(1024u);
v___x_458_ = lean_nat_dec_le(v___x_457_, v_prec_399_);
if (v___x_458_ == 0)
{
lean_object* v___x_459_; 
v___x_459_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__6, &lp_pmll_PMLL_instReprFlag_repr___closed__6_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__6);
v___y_443_ = v___x_459_;
goto v___jp_442_;
}
else
{
lean_object* v___x_460_; 
v___x_460_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__7, &lp_pmll_PMLL_instReprFlag_repr___closed__7_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__7);
v___y_443_ = v___x_460_;
goto v___jp_442_;
}
v___jp_442_:
{
lean_object* v___x_444_; lean_object* v___x_445_; uint8_t v___x_446_; 
v___x_444_ = ((lean_object*)(lp_pmll_PMLL_instReprLook_repr___closed__8));
v___x_445_ = lean_obj_once(&lp_pmll_PMLL_litVar___closed__0, &lp_pmll_PMLL_litVar___closed__0_once, _init_lp_pmll_PMLL_litVar___closed__0);
v___x_446_ = lean_int_dec_lt(v_lit_438_, v___x_445_);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; lean_object* v___x_449_; 
v___x_447_ = l_Int_repr(v_lit_438_);
lean_dec(v_lit_438_);
if (v_isShared_441_ == 0)
{
lean_ctor_set_tag(v___x_440_, 3);
lean_ctor_set(v___x_440_, 0, v___x_447_);
v___x_449_ = v___x_440_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v___x_447_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
v___y_401_ = v___y_443_;
v___y_402_ = v___x_444_;
v___y_403_ = v___x_449_;
goto v___jp_400_;
}
}
else
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_454_; 
v___x_451_ = lean_unsigned_to_nat(1024u);
v___x_452_ = l_Int_repr(v_lit_438_);
lean_dec(v_lit_438_);
if (v_isShared_441_ == 0)
{
lean_ctor_set_tag(v___x_440_, 3);
lean_ctor_set(v___x_440_, 0, v___x_452_);
v___x_454_ = v___x_440_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v___x_452_);
v___x_454_ = v_reuseFailAlloc_456_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
lean_object* v___x_455_; 
v___x_455_ = l_Repr_addAppParen(v___x_454_, v___x_451_);
v___y_401_ = v___y_443_;
v___y_402_ = v___x_444_;
v___y_403_ = v___x_455_;
goto v___jp_400_;
}
}
}
}
}
default: 
{
lean_object* v___x_462_; uint8_t v___x_463_; 
v___x_462_ = lean_unsigned_to_nat(1024u);
v___x_463_ = lean_nat_dec_le(v___x_462_, v_prec_399_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; 
v___x_464_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__6, &lp_pmll_PMLL_instReprFlag_repr___closed__6_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__6);
v___y_424_ = v___x_464_;
goto v___jp_423_;
}
else
{
lean_object* v___x_465_; 
v___x_465_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__7, &lp_pmll_PMLL_instReprFlag_repr___closed__7_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__7);
v___y_424_ = v___x_465_;
goto v___jp_423_;
}
}
}
v___jp_400_:
{
lean_object* v___x_404_; lean_object* v___x_405_; uint8_t v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
lean_inc(v___y_402_);
v___x_404_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_404_, 0, v___y_402_);
lean_ctor_set(v___x_404_, 1, v___y_403_);
lean_inc(v___y_401_);
v___x_405_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_405_, 0, v___y_401_);
lean_ctor_set(v___x_405_, 1, v___x_404_);
v___x_406_ = 0;
v___x_407_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_407_, 0, v___x_405_);
lean_ctor_set_uint8(v___x_407_, sizeof(void*)*1, v___x_406_);
v___x_408_ = l_Repr_addAppParen(v___x_407_, v_prec_399_);
return v___x_408_;
}
v___jp_409_:
{
lean_object* v___x_411_; lean_object* v___x_412_; uint8_t v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_411_ = ((lean_object*)(lp_pmll_PMLL_instReprLook_repr___closed__1));
lean_inc(v___y_410_);
v___x_412_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_412_, 0, v___y_410_);
lean_ctor_set(v___x_412_, 1, v___x_411_);
v___x_413_ = 0;
v___x_414_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_414_, 0, v___x_412_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*1, v___x_413_);
v___x_415_ = l_Repr_addAppParen(v___x_414_, v_prec_399_);
return v___x_415_;
}
v___jp_416_:
{
lean_object* v___x_418_; lean_object* v___x_419_; uint8_t v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_418_ = ((lean_object*)(lp_pmll_PMLL_instReprLook_repr___closed__3));
lean_inc(v___y_417_);
v___x_419_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_419_, 0, v___y_417_);
lean_ctor_set(v___x_419_, 1, v___x_418_);
v___x_420_ = 0;
v___x_421_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_421_, 0, v___x_419_);
lean_ctor_set_uint8(v___x_421_, sizeof(void*)*1, v___x_420_);
v___x_422_ = l_Repr_addAppParen(v___x_421_, v_prec_399_);
return v___x_422_;
}
v___jp_423_:
{
lean_object* v___x_425_; lean_object* v___x_426_; uint8_t v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_425_ = ((lean_object*)(lp_pmll_PMLL_instReprLook_repr___closed__5));
lean_inc(v___y_424_);
v___x_426_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_426_, 0, v___y_424_);
lean_ctor_set(v___x_426_, 1, v___x_425_);
v___x_427_ = 0;
v___x_428_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_428_, 0, v___x_426_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*1, v___x_427_);
v___x_429_ = l_Repr_addAppParen(v___x_428_, v_prec_399_);
return v___x_429_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprLook_repr___boxed(lean_object* v_x_466_, lean_object* v_prec_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = lp_pmll_PMLL_instReprLook_repr(v_x_466_, v_prec_467_);
lean_dec(v_prec_467_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_forIn_x27_loop___at___00PMLL_lookClause_spec__0___redArg(lean_object* v_n_471_, lean_object* v_a_472_, lean_object* v_as_x27_473_, lean_object* v_b_474_){
_start:
{
if (lean_obj_tag(v_as_x27_473_) == 0)
{
return v_b_474_;
}
else
{
lean_object* v_snd_475_; lean_object* v_head_476_; lean_object* v_tail_477_; lean_object* v_fst_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_529_; 
v_snd_475_ = lean_ctor_get(v_b_474_, 1);
lean_inc(v_snd_475_);
v_head_476_ = lean_ctor_get(v_as_x27_473_, 0);
v_tail_477_ = lean_ctor_get(v_as_x27_473_, 1);
v_fst_478_ = lean_ctor_get(v_b_474_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v_b_474_);
if (v_isSharedCheck_529_ == 0)
{
lean_object* v_unused_530_; 
v_unused_530_ = lean_ctor_get(v_b_474_, 1);
lean_dec(v_unused_530_);
v___x_480_ = v_b_474_;
v_isShared_481_ = v_isSharedCheck_529_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_fst_478_);
lean_dec(v_b_474_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_529_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v_fst_482_; lean_object* v_snd_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_528_; 
v_fst_482_ = lean_ctor_get(v_snd_475_, 0);
v_snd_483_ = lean_ctor_get(v_snd_475_, 1);
v_isSharedCheck_528_ = !lean_is_exclusive(v_snd_475_);
if (v_isSharedCheck_528_ == 0)
{
v___x_485_ = v_snd_475_;
v_isShared_486_ = v_isSharedCheck_528_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_snd_483_);
lean_inc(v_fst_482_);
lean_dec(v_snd_475_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_528_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
uint8_t v___x_501_; 
v___x_501_ = lean_unbox(v_fst_478_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; 
v___x_502_ = lp_pmll_PMLL_litVar(v_head_476_, v_n_471_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v___x_503_; lean_object* v___x_504_; 
lean_del_object(v___x_485_);
lean_del_object(v___x_480_);
v___x_503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_503_, 0, v_fst_482_);
lean_ctor_set(v___x_503_, 1, v_snd_483_);
v___x_504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_504_, 0, v_fst_478_);
lean_ctor_set(v___x_504_, 1, v___x_503_);
v_as_x27_473_ = v_tail_477_;
v_b_474_ = v___x_504_;
goto _start;
}
else
{
lean_object* v_val_506_; lean_object* v_freeCount_507_; lean_object* v___x_508_; 
v_val_506_ = lean_ctor_get(v___x_502_, 0);
lean_inc(v_val_506_);
lean_dec_ref_known(v___x_502_, 1);
v_freeCount_507_ = lean_unsigned_to_nat(0u);
v___x_508_ = lp_pmll_PMLL_readAsg(v_a_472_, v_val_506_);
if (lean_obj_tag(v___x_508_) == 0)
{
uint8_t v___x_509_; 
v___x_509_ = lean_nat_dec_eq(v_fst_482_, v_freeCount_507_);
if (v___x_509_ == 0)
{
uint8_t v___x_510_; 
v___x_510_ = lean_int_dec_eq(v_snd_483_, v_head_476_);
if (v___x_510_ == 0)
{
lean_dec(v_snd_483_);
goto v___jp_487_;
}
else
{
lean_object* v___x_511_; lean_object* v___x_512_; 
lean_del_object(v___x_485_);
lean_del_object(v___x_480_);
v___x_511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_511_, 0, v_fst_482_);
lean_ctor_set(v___x_511_, 1, v_snd_483_);
v___x_512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_512_, 0, v_fst_478_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
v_as_x27_473_ = v_tail_477_;
v_b_474_ = v___x_512_;
goto _start;
}
}
else
{
lean_dec(v_snd_483_);
goto v___jp_487_;
}
}
else
{
lean_object* v_val_514_; lean_object* v_freeLit_515_; uint8_t v___x_516_; uint8_t v___x_522_; 
lean_del_object(v___x_485_);
lean_del_object(v___x_480_);
v_val_514_ = lean_ctor_get(v___x_508_, 0);
lean_inc(v_val_514_);
lean_dec_ref_known(v___x_508_, 1);
v_freeLit_515_ = lean_obj_once(&lp_pmll_PMLL_litVar___closed__0, &lp_pmll_PMLL_litVar___closed__0_once, _init_lp_pmll_PMLL_litVar___closed__0);
v___x_516_ = 1;
v___x_522_ = lean_int_dec_lt(v_freeLit_515_, v_head_476_);
if (v___x_522_ == 0)
{
uint8_t v___x_523_; 
v___x_523_ = lean_unbox(v_val_514_);
lean_dec(v_val_514_);
if (v___x_523_ == 0)
{
lean_dec(v_fst_478_);
goto v___jp_517_;
}
else
{
goto v___jp_497_;
}
}
else
{
uint8_t v___x_524_; 
v___x_524_ = lean_unbox(v_val_514_);
lean_dec(v_val_514_);
if (v___x_524_ == 0)
{
goto v___jp_497_;
}
else
{
lean_dec(v_fst_478_);
goto v___jp_517_;
}
}
v___jp_517_:
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_518_, 0, v_fst_482_);
lean_ctor_set(v___x_518_, 1, v_snd_483_);
v___x_519_ = lean_box(v___x_516_);
v___x_520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_520_, 0, v___x_519_);
lean_ctor_set(v___x_520_, 1, v___x_518_);
v_as_x27_473_ = v_tail_477_;
v_b_474_ = v___x_520_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; 
lean_del_object(v___x_485_);
lean_del_object(v___x_480_);
v___x_525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_525_, 0, v_fst_482_);
lean_ctor_set(v___x_525_, 1, v_snd_483_);
v___x_526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_526_, 0, v_fst_478_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v_as_x27_473_ = v_tail_477_;
v_b_474_ = v___x_526_;
goto _start;
}
v___jp_487_:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_491_; 
v___x_488_ = lean_unsigned_to_nat(1u);
v___x_489_ = lean_nat_add(v_fst_482_, v___x_488_);
lean_dec(v_fst_482_);
lean_inc(v_head_476_);
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 1, v_head_476_);
lean_ctor_set(v___x_485_, 0, v___x_489_);
v___x_491_ = v___x_485_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_489_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v_head_476_);
v___x_491_ = v_reuseFailAlloc_496_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_object* v___x_493_; 
if (v_isShared_481_ == 0)
{
lean_ctor_set(v___x_480_, 1, v___x_491_);
v___x_493_ = v___x_480_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_fst_478_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v___x_491_);
v___x_493_ = v_reuseFailAlloc_495_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
v_as_x27_473_ = v_tail_477_;
v_b_474_ = v___x_493_;
goto _start;
}
}
}
v___jp_497_:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_498_, 0, v_fst_482_);
lean_ctor_set(v___x_498_, 1, v_snd_483_);
v___x_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_499_, 0, v_fst_478_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
v_as_x27_473_ = v_tail_477_;
v_b_474_ = v___x_499_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_forIn_x27_loop___at___00PMLL_lookClause_spec__0___redArg___boxed(lean_object* v_n_531_, lean_object* v_a_532_, lean_object* v_as_x27_533_, lean_object* v_b_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = lp_pmll_List_forIn_x27_loop___at___00PMLL_lookClause_spec__0___redArg(v_n_531_, v_a_532_, v_as_x27_533_, v_b_534_);
lean_dec(v_as_x27_533_);
lean_dec(v_a_532_);
lean_dec(v_n_531_);
return v_res_535_;
}
}
static lean_object* _init_lp_pmll_PMLL_lookClause___closed__0(void){
_start:
{
lean_object* v_freeLit_536_; lean_object* v_freeCount_537_; lean_object* v___x_538_; 
v_freeLit_536_ = lean_obj_once(&lp_pmll_PMLL_litVar___closed__0, &lp_pmll_PMLL_litVar___closed__0_once, _init_lp_pmll_PMLL_litVar___closed__0);
v_freeCount_537_ = lean_unsigned_to_nat(0u);
v___x_538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_538_, 0, v_freeCount_537_);
lean_ctor_set(v___x_538_, 1, v_freeLit_536_);
return v___x_538_;
}
}
static lean_object* _init_lp_pmll_PMLL_lookClause___closed__1(void){
_start:
{
lean_object* v___x_539_; uint8_t v_satisfied_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_539_ = lean_obj_once(&lp_pmll_PMLL_lookClause___closed__0, &lp_pmll_PMLL_lookClause___closed__0_once, _init_lp_pmll_PMLL_lookClause___closed__0);
v_satisfied_540_ = 0;
v___x_541_ = lean_box(v_satisfied_540_);
v___x_542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_542_, 0, v___x_541_);
lean_ctor_set(v___x_542_, 1, v___x_539_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_lookClause(lean_object* v_n_543_, lean_object* v_a_544_, lean_object* v_c_545_){
_start:
{
lean_object* v_freeCount_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v_fst_549_; uint8_t v___x_550_; 
v_freeCount_546_ = lean_unsigned_to_nat(0u);
v___x_547_ = lean_obj_once(&lp_pmll_PMLL_lookClause___closed__1, &lp_pmll_PMLL_lookClause___closed__1_once, _init_lp_pmll_PMLL_lookClause___closed__1);
v___x_548_ = lp_pmll_List_forIn_x27_loop___at___00PMLL_lookClause_spec__0___redArg(v_n_543_, v_a_544_, v_c_545_, v___x_547_);
v_fst_549_ = lean_ctor_get(v___x_548_, 0);
v___x_550_ = lean_unbox(v_fst_549_);
if (v___x_550_ == 0)
{
lean_object* v_snd_551_; lean_object* v_fst_552_; lean_object* v_snd_553_; uint8_t v___x_554_; 
v_snd_551_ = lean_ctor_get(v___x_548_, 1);
lean_inc(v_snd_551_);
lean_dec_ref(v___x_548_);
v_fst_552_ = lean_ctor_get(v_snd_551_, 0);
lean_inc(v_fst_552_);
v_snd_553_ = lean_ctor_get(v_snd_551_, 1);
lean_inc(v_snd_553_);
lean_dec(v_snd_551_);
v___x_554_ = lean_nat_dec_eq(v_fst_552_, v_freeCount_546_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; uint8_t v___x_556_; 
v___x_555_ = lean_unsigned_to_nat(1u);
v___x_556_ = lean_nat_dec_eq(v_fst_552_, v___x_555_);
lean_dec(v_fst_552_);
if (v___x_556_ == 0)
{
lean_object* v___x_557_; 
lean_dec(v_snd_553_);
v___x_557_ = lean_box(3);
return v___x_557_;
}
else
{
lean_object* v___x_558_; 
v___x_558_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_558_, 0, v_snd_553_);
return v___x_558_;
}
}
else
{
lean_object* v___x_559_; 
lean_dec(v_snd_553_);
lean_dec(v_fst_552_);
v___x_559_ = lean_box(1);
return v___x_559_;
}
}
else
{
lean_object* v___x_560_; 
lean_dec_ref(v___x_548_);
v___x_560_ = lean_box(0);
return v___x_560_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_lookClause___boxed(lean_object* v_n_561_, lean_object* v_a_562_, lean_object* v_c_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = lp_pmll_PMLL_lookClause(v_n_561_, v_a_562_, v_c_563_);
lean_dec(v_c_563_);
lean_dec(v_a_562_);
lean_dec(v_n_561_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_forIn_x27_loop___at___00PMLL_lookClause_spec__0(lean_object* v_n_565_, lean_object* v_a_566_, lean_object* v_as_567_, lean_object* v_as_x27_568_, lean_object* v_b_569_, lean_object* v_a_570_){
_start:
{
lean_object* v___x_571_; 
v___x_571_ = lp_pmll_List_forIn_x27_loop___at___00PMLL_lookClause_spec__0___redArg(v_n_565_, v_a_566_, v_as_x27_568_, v_b_569_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_forIn_x27_loop___at___00PMLL_lookClause_spec__0___boxed(lean_object* v_n_572_, lean_object* v_a_573_, lean_object* v_as_574_, lean_object* v_as_x27_575_, lean_object* v_b_576_, lean_object* v_a_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = lp_pmll_List_forIn_x27_loop___at___00PMLL_lookClause_spec__0(v_n_572_, v_a_573_, v_as_574_, v_as_x27_575_, v_b_576_, v_a_577_);
lean_dec(v_as_x27_575_);
lean_dec(v_as_574_);
lean_dec(v_a_573_);
lean_dec(v_n_572_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_ctorIdx___impl(lean_object* v_x_579_){
_start:
{
lean_object* v___x_580_; 
v___x_580_ = lean_obj_tag_nat(v_x_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_ctorIdx___impl___boxed(lean_object* v_x_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = lp_pmll_PMLL_Pass_ctorIdx___impl(v_x_581_);
lean_dec(v_x_581_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_ctorElim___redArg(lean_object* v_t_583_, lean_object* v_k_584_){
_start:
{
if (lean_obj_tag(v_t_583_) == 0)
{
return v_k_584_;
}
else
{
lean_object* v_a_585_; lean_object* v___x_586_; 
v_a_585_ = lean_ctor_get(v_t_583_, 0);
lean_inc(v_a_585_);
lean_dec(v_t_583_);
v___x_586_ = lean_apply_1(v_k_584_, v_a_585_);
return v___x_586_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_ctorElim(lean_object* v_motive_587_, lean_object* v_ctorIdx_588_, lean_object* v_t_589_, lean_object* v_h_590_, lean_object* v_k_591_){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = lp_pmll_PMLL_Pass_ctorElim___redArg(v_t_589_, v_k_591_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_ctorElim___boxed(lean_object* v_motive_593_, lean_object* v_ctorIdx_594_, lean_object* v_t_595_, lean_object* v_h_596_, lean_object* v_k_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = lp_pmll_PMLL_Pass_ctorElim(v_motive_593_, v_ctorIdx_594_, v_t_595_, v_h_596_, v_k_597_);
lean_dec(v_ctorIdx_594_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_conflict_elim___redArg(lean_object* v_t_599_, lean_object* v_conflict_600_){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = lp_pmll_PMLL_Pass_ctorElim___redArg(v_t_599_, v_conflict_600_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_conflict_elim(lean_object* v_motive_602_, lean_object* v_t_603_, lean_object* v_h_604_, lean_object* v_conflict_605_){
_start:
{
lean_object* v___x_606_; 
v___x_606_ = lp_pmll_PMLL_Pass_ctorElim___redArg(v_t_603_, v_conflict_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_changed_elim___redArg(lean_object* v_t_607_, lean_object* v_changed_608_){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = lp_pmll_PMLL_Pass_ctorElim___redArg(v_t_607_, v_changed_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_changed_elim(lean_object* v_motive_610_, lean_object* v_t_611_, lean_object* v_h_612_, lean_object* v_changed_613_){
_start:
{
lean_object* v___x_614_; 
v___x_614_ = lp_pmll_PMLL_Pass_ctorElim___redArg(v_t_611_, v_changed_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_fixed_elim___redArg(lean_object* v_t_615_, lean_object* v_fixed_616_){
_start:
{
lean_object* v___x_617_; 
v___x_617_ = lp_pmll_PMLL_Pass_ctorElim___redArg(v_t_615_, v_fixed_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Pass_fixed_elim(lean_object* v_motive_618_, lean_object* v_t_619_, lean_object* v_h_620_, lean_object* v_fixed_621_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = lp_pmll_PMLL_Pass_ctorElim___redArg(v_t_619_, v_fixed_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_pass_go(lean_object* v_n_623_, lean_object* v_a_624_, lean_object* v_cs_625_){
_start:
{
if (lean_obj_tag(v_cs_625_) == 0)
{
lean_object* v___x_626_; 
v___x_626_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_626_, 0, v_a_624_);
return v___x_626_;
}
else
{
lean_object* v_head_627_; lean_object* v_tail_628_; lean_object* v___x_629_; 
v_head_627_ = lean_ctor_get(v_cs_625_, 0);
v_tail_628_ = lean_ctor_get(v_cs_625_, 1);
v___x_629_ = lp_pmll_PMLL_lookClause(v_n_623_, v_a_624_, v_head_627_);
switch(lean_obj_tag(v___x_629_))
{
case 1:
{
lean_object* v___x_630_; 
lean_dec(v_a_624_);
v___x_630_ = lean_box(0);
return v___x_630_;
}
case 2:
{
lean_object* v_lit_631_; lean_object* v___x_632_; 
v_lit_631_ = lean_ctor_get(v___x_629_, 0);
lean_inc(v_lit_631_);
lean_dec_ref_known(v___x_629_, 1);
v___x_632_ = lp_pmll_PMLL_litVar(v_lit_631_, v_n_623_);
if (lean_obj_tag(v___x_632_) == 0)
{
lean_dec(v_lit_631_);
v_cs_625_ = v_tail_628_;
goto _start;
}
else
{
lean_object* v_val_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_644_; 
v_val_634_ = lean_ctor_get(v___x_632_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_644_ == 0)
{
v___x_636_ = v___x_632_;
v_isShared_637_ = v_isSharedCheck_644_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_val_634_);
lean_dec(v___x_632_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_644_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_638_; uint8_t v___x_639_; lean_object* v___x_640_; lean_object* v___x_642_; 
v___x_638_ = lean_obj_once(&lp_pmll_PMLL_litVar___closed__0, &lp_pmll_PMLL_litVar___closed__0_once, _init_lp_pmll_PMLL_litVar___closed__0);
v___x_639_ = lean_int_dec_lt(v___x_638_, v_lit_631_);
lean_dec(v_lit_631_);
v___x_640_ = lp_pmll_PMLL_setAsg(v_a_624_, v_val_634_, v___x_639_);
if (v_isShared_637_ == 0)
{
lean_ctor_set(v___x_636_, 0, v___x_640_);
v___x_642_ = v___x_636_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_640_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
default: 
{
lean_dec(v___x_629_);
v_cs_625_ = v_tail_628_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_pass_go___boxed(lean_object* v_n_646_, lean_object* v_a_647_, lean_object* v_cs_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = lp_pmll_PMLL_pass_go(v_n_646_, v_a_647_, v_cs_648_);
lean_dec(v_cs_648_);
lean_dec(v_n_646_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_pass(lean_object* v_n_650_, lean_object* v_clauses_651_, lean_object* v_a_652_){
_start:
{
lean_object* v___x_653_; 
v___x_653_ = lp_pmll_PMLL_pass_go(v_n_650_, v_a_652_, v_clauses_651_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_pass___boxed(lean_object* v_n_654_, lean_object* v_clauses_655_, lean_object* v_a_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = lp_pmll_PMLL_pass(v_n_654_, v_clauses_655_, v_a_656_);
lean_dec(v_clauses_655_);
lean_dec(v_n_654_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_propagate_go(lean_object* v_n_658_, lean_object* v_clauses_659_, lean_object* v_fuel_660_, lean_object* v_a_661_){
_start:
{
lean_object* v_zero_662_; uint8_t v_isZero_663_; 
v_zero_662_ = lean_unsigned_to_nat(0u);
v_isZero_663_ = lean_nat_dec_eq(v_fuel_660_, v_zero_662_);
if (v_isZero_663_ == 1)
{
lean_object* v___x_664_; 
lean_dec(v_fuel_660_);
v___x_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_664_, 0, v_a_661_);
return v___x_664_;
}
else
{
lean_object* v___x_665_; 
v___x_665_ = lp_pmll_PMLL_pass_go(v_n_658_, v_a_661_, v_clauses_659_);
switch(lean_obj_tag(v___x_665_))
{
case 0:
{
lean_object* v___x_666_; 
lean_dec(v_fuel_660_);
v___x_666_ = lean_box(0);
return v___x_666_;
}
case 1:
{
lean_object* v_a_667_; lean_object* v_one_668_; lean_object* v_n_669_; 
v_a_667_ = lean_ctor_get(v___x_665_, 0);
lean_inc(v_a_667_);
lean_dec_ref_known(v___x_665_, 1);
v_one_668_ = lean_unsigned_to_nat(1u);
v_n_669_ = lean_nat_sub(v_fuel_660_, v_one_668_);
lean_dec(v_fuel_660_);
v_fuel_660_ = v_n_669_;
v_a_661_ = v_a_667_;
goto _start;
}
default: 
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
lean_dec(v_fuel_660_);
v_a_671_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_678_ == 0)
{
v___x_673_ = v___x_665_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v___x_665_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
lean_ctor_set_tag(v___x_673_, 1);
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_a_671_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_propagate_go___boxed(lean_object* v_n_679_, lean_object* v_clauses_680_, lean_object* v_fuel_681_, lean_object* v_a_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = lp_pmll_PMLL_propagate_go(v_n_679_, v_clauses_680_, v_fuel_681_, v_a_682_);
lean_dec(v_clauses_680_);
lean_dec(v_n_679_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_propagate(lean_object* v_n_684_, lean_object* v_clauses_685_, lean_object* v_a_686_){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_687_ = lean_unsigned_to_nat(1u);
v___x_688_ = lean_nat_add(v_n_684_, v___x_687_);
v___x_689_ = lp_pmll_PMLL_propagate_go(v_n_684_, v_clauses_685_, v___x_688_, v_a_686_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_propagate___boxed(lean_object* v_n_690_, lean_object* v_clauses_691_, lean_object* v_a_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = lp_pmll_PMLL_propagate(v_n_690_, v_clauses_691_, v_a_692_);
lean_dec(v_clauses_691_);
lean_dec(v_n_690_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_dpll(lean_object* v_n_694_, lean_object* v_clauses_695_, lean_object* v_a_696_, lean_object* v_budget_697_){
_start:
{
lean_object* v_a_x27_699_; lean_object* v_b_x27_700_; lean_object* v___x_705_; 
lean_inc(v_a_696_);
v___x_705_ = lp_pmll_PMLL_propagate(v_n_694_, v_clauses_695_, v_a_696_);
if (lean_obj_tag(v___x_705_) == 0)
{
uint8_t v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_706_ = 2;
v___x_707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_707_, 0, v_a_696_);
lean_ctor_set(v___x_707_, 1, v_budget_697_);
v___x_708_ = lean_box(v___x_706_);
v___x_709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_709_, 0, v___x_708_);
lean_ctor_set(v___x_709_, 1, v___x_707_);
return v___x_709_;
}
else
{
lean_object* v_val_710_; lean_object* v_b_x27_712_; uint8_t v___x_717_; 
lean_dec(v_a_696_);
v_val_710_ = lean_ctor_get(v___x_705_, 0);
lean_inc(v_val_710_);
lean_dec_ref_known(v___x_705_, 1);
v___x_717_ = lp_pmll_List_any___at___00PMLL_checkConflict_spec__0(v_n_694_, v_val_710_, v_clauses_695_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; 
v___x_718_ = lp_pmll_PMLL_firstOpen(v_val_710_);
if (lean_obj_tag(v___x_718_) == 0)
{
uint8_t v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_719_ = 1;
v___x_720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_720_, 0, v_val_710_);
lean_ctor_set(v___x_720_, 1, v_budget_697_);
v___x_721_ = lean_box(v___x_719_);
v___x_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_722_, 0, v___x_721_);
lean_ctor_set(v___x_722_, 1, v___x_720_);
return v___x_722_;
}
else
{
lean_object* v_val_723_; lean_object* v_zero_724_; uint8_t v_isZero_725_; 
v_val_723_ = lean_ctor_get(v___x_718_, 0);
lean_inc(v_val_723_);
lean_dec_ref_known(v___x_718_, 1);
v_zero_724_ = lean_unsigned_to_nat(0u);
v_isZero_725_ = lean_nat_dec_eq(v_budget_697_, v_zero_724_);
if (v_isZero_725_ == 1)
{
uint8_t v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
lean_dec(v_val_723_);
lean_dec(v_budget_697_);
v___x_726_ = 0;
v___x_727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_727_, 0, v_val_710_);
lean_ctor_set(v___x_727_, 1, v_zero_724_);
v___x_728_ = lean_box(v___x_726_);
v___x_729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_729_, 0, v___x_728_);
lean_ctor_set(v___x_729_, 1, v___x_727_);
return v___x_729_;
}
else
{
lean_object* v_one_730_; lean_object* v_n_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v_fst_734_; uint8_t v___x_735_; 
v_one_730_ = lean_unsigned_to_nat(1u);
v_n_731_ = lean_nat_sub(v_budget_697_, v_one_730_);
lean_dec(v_budget_697_);
lean_inc(v_val_723_);
lean_inc(v_val_710_);
v___x_732_ = lp_pmll_PMLL_setAsg(v_val_710_, v_val_723_, v___x_717_);
lean_inc(v_n_731_);
v___x_733_ = lp_pmll_PMLL_dpll(v_n_694_, v_clauses_695_, v___x_732_, v_n_731_);
v_fst_734_ = lean_ctor_get(v___x_733_, 0);
v___x_735_ = lean_unbox(v_fst_734_);
switch(v___x_735_)
{
case 0:
{
lean_object* v_snd_736_; lean_object* v_snd_737_; 
lean_dec(v_n_731_);
lean_dec(v_val_723_);
v_snd_736_ = lean_ctor_get(v___x_733_, 1);
lean_inc(v_snd_736_);
lean_dec_ref(v___x_733_);
v_snd_737_ = lean_ctor_get(v_snd_736_, 1);
lean_inc(v_snd_737_);
lean_dec(v_snd_736_);
v_b_x27_712_ = v_snd_737_;
goto v___jp_711_;
}
case 1:
{
lean_object* v_snd_738_; lean_object* v_fst_739_; lean_object* v_snd_740_; 
lean_dec(v_n_731_);
lean_dec(v_val_723_);
lean_dec(v_val_710_);
v_snd_738_ = lean_ctor_get(v___x_733_, 1);
lean_inc(v_snd_738_);
lean_dec_ref(v___x_733_);
v_fst_739_ = lean_ctor_get(v_snd_738_, 0);
lean_inc(v_fst_739_);
v_snd_740_ = lean_ctor_get(v_snd_738_, 1);
lean_inc(v_snd_740_);
lean_dec(v_snd_738_);
v_a_x27_699_ = v_fst_739_;
v_b_x27_700_ = v_snd_740_;
goto v___jp_698_;
}
default: 
{
uint8_t v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v_fst_744_; uint8_t v___x_745_; 
lean_dec_ref(v___x_733_);
v___x_741_ = 1;
lean_inc(v_val_710_);
v___x_742_ = lp_pmll_PMLL_setAsg(v_val_710_, v_val_723_, v___x_741_);
v___x_743_ = lp_pmll_PMLL_dpll(v_n_694_, v_clauses_695_, v___x_742_, v_n_731_);
v_fst_744_ = lean_ctor_get(v___x_743_, 0);
v___x_745_ = lean_unbox(v_fst_744_);
switch(v___x_745_)
{
case 0:
{
lean_object* v_snd_746_; lean_object* v_snd_747_; 
v_snd_746_ = lean_ctor_get(v___x_743_, 1);
lean_inc(v_snd_746_);
lean_dec_ref(v___x_743_);
v_snd_747_ = lean_ctor_get(v_snd_746_, 1);
lean_inc(v_snd_747_);
lean_dec(v_snd_746_);
v_b_x27_712_ = v_snd_747_;
goto v___jp_711_;
}
case 1:
{
lean_object* v_snd_748_; lean_object* v_fst_749_; lean_object* v_snd_750_; 
lean_dec(v_val_710_);
v_snd_748_ = lean_ctor_get(v___x_743_, 1);
lean_inc(v_snd_748_);
lean_dec_ref(v___x_743_);
v_fst_749_ = lean_ctor_get(v_snd_748_, 0);
lean_inc(v_fst_749_);
v_snd_750_ = lean_ctor_get(v_snd_748_, 1);
lean_inc(v_snd_750_);
lean_dec(v_snd_748_);
v_a_x27_699_ = v_fst_749_;
v_b_x27_700_ = v_snd_750_;
goto v___jp_698_;
}
default: 
{
lean_object* v_snd_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_767_; 
lean_inc(v_fst_744_);
v_snd_751_ = lean_ctor_get(v___x_743_, 1);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_767_ == 0)
{
lean_object* v_unused_768_; 
v_unused_768_ = lean_ctor_get(v___x_743_, 0);
lean_dec(v_unused_768_);
v___x_753_ = v___x_743_;
v_isShared_754_ = v_isSharedCheck_767_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_snd_751_);
lean_dec(v___x_743_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_767_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v_snd_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_765_; 
v_snd_755_ = lean_ctor_get(v_snd_751_, 1);
v_isSharedCheck_765_ = !lean_is_exclusive(v_snd_751_);
if (v_isSharedCheck_765_ == 0)
{
lean_object* v_unused_766_; 
v_unused_766_ = lean_ctor_get(v_snd_751_, 0);
lean_dec(v_unused_766_);
v___x_757_ = v_snd_751_;
v_isShared_758_ = v_isSharedCheck_765_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_snd_755_);
lean_dec(v_snd_751_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_765_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 0, v_val_710_);
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_val_710_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v_snd_755_);
v___x_760_ = v_reuseFailAlloc_764_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
lean_object* v___x_762_; 
if (v_isShared_754_ == 0)
{
lean_ctor_set(v___x_753_, 1, v___x_760_);
v___x_762_ = v___x_753_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_fst_744_);
lean_ctor_set(v_reuseFailAlloc_763_, 1, v___x_760_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
}
}
}
}
}
}
}
}
else
{
uint8_t v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_769_ = 2;
v___x_770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_770_, 0, v_val_710_);
lean_ctor_set(v___x_770_, 1, v_budget_697_);
v___x_771_ = lean_box(v___x_769_);
v___x_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_772_, 0, v___x_771_);
lean_ctor_set(v___x_772_, 1, v___x_770_);
return v___x_772_;
}
v___jp_711_:
{
uint8_t v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_713_ = 0;
v___x_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_714_, 0, v_val_710_);
lean_ctor_set(v___x_714_, 1, v_b_x27_712_);
v___x_715_ = lean_box(v___x_713_);
v___x_716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_716_, 0, v___x_715_);
lean_ctor_set(v___x_716_, 1, v___x_714_);
return v___x_716_;
}
}
v___jp_698_:
{
uint8_t v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_701_ = 1;
v___x_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_702_, 0, v_a_x27_699_);
lean_ctor_set(v___x_702_, 1, v_b_x27_700_);
v___x_703_ = lean_box(v___x_701_);
v___x_704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_704_, 0, v___x_703_);
lean_ctor_set(v___x_704_, 1, v___x_702_);
return v___x_704_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_dpll___boxed(lean_object* v_n_773_, lean_object* v_clauses_774_, lean_object* v_a_775_, lean_object* v_budget_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = lp_pmll_PMLL_dpll(v_n_773_, v_clauses_774_, v_a_775_, v_budget_776_);
lean_dec(v_clauses_774_);
lean_dec(v_n_773_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_dpll_match__3_splitter___redArg(lean_object* v_x_778_, lean_object* v_h__1_779_, lean_object* v_h__2_780_){
_start:
{
if (lean_obj_tag(v_x_778_) == 0)
{
lean_object* v___x_781_; lean_object* v___x_782_; 
lean_dec(v_h__2_780_);
v___x_781_ = lean_box(0);
v___x_782_ = lean_apply_1(v_h__1_779_, v___x_781_);
return v___x_782_;
}
else
{
lean_object* v_val_783_; lean_object* v___x_784_; 
lean_dec(v_h__1_779_);
v_val_783_ = lean_ctor_get(v_x_778_, 0);
lean_inc(v_val_783_);
lean_dec_ref_known(v_x_778_, 1);
v___x_784_ = lean_apply_1(v_h__2_780_, v_val_783_);
return v___x_784_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_dpll_match__3_splitter(lean_object* v_motive_785_, lean_object* v_x_786_, lean_object* v_h__1_787_, lean_object* v_h__2_788_){
_start:
{
if (lean_obj_tag(v_x_786_) == 0)
{
lean_object* v___x_789_; lean_object* v___x_790_; 
lean_dec(v_h__2_788_);
v___x_789_ = lean_box(0);
v___x_790_ = lean_apply_1(v_h__1_787_, v___x_789_);
return v___x_790_;
}
else
{
lean_object* v_val_791_; lean_object* v___x_792_; 
lean_dec(v_h__1_787_);
v_val_791_ = lean_ctor_get(v_x_786_, 0);
lean_inc(v_val_791_);
lean_dec_ref_known(v_x_786_, 1);
v___x_792_ = lean_apply_1(v_h__2_788_, v_val_791_);
return v___x_792_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_lookClause_match__3_splitter___redArg(lean_object* v_x_793_, lean_object* v_h__1_794_, lean_object* v_h__2_795_){
_start:
{
if (lean_obj_tag(v_x_793_) == 0)
{
lean_object* v___x_796_; lean_object* v___x_797_; 
lean_dec(v_h__2_795_);
v___x_796_ = lean_box(0);
v___x_797_ = lean_apply_1(v_h__1_794_, v___x_796_);
return v___x_797_;
}
else
{
lean_object* v_val_798_; lean_object* v___x_799_; 
lean_dec(v_h__1_794_);
v_val_798_ = lean_ctor_get(v_x_793_, 0);
lean_inc(v_val_798_);
lean_dec_ref_known(v_x_793_, 1);
v___x_799_ = lean_apply_1(v_h__2_795_, v_val_798_);
return v___x_799_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_lookClause_match__3_splitter(lean_object* v_motive_800_, lean_object* v_x_801_, lean_object* v_h__1_802_, lean_object* v_h__2_803_){
_start:
{
if (lean_obj_tag(v_x_801_) == 0)
{
lean_object* v___x_804_; lean_object* v___x_805_; 
lean_dec(v_h__2_803_);
v___x_804_ = lean_box(0);
v___x_805_ = lean_apply_1(v_h__1_802_, v___x_804_);
return v___x_805_;
}
else
{
lean_object* v_val_806_; lean_object* v___x_807_; 
lean_dec(v_h__1_802_);
v_val_806_ = lean_ctor_get(v_x_801_, 0);
lean_inc(v_val_806_);
lean_dec_ref_known(v_x_801_, 1);
v___x_807_ = lean_apply_1(v_h__2_803_, v_val_806_);
return v___x_807_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_propagate_go_match__3_splitter___redArg(lean_object* v_fuel_808_, lean_object* v_h__1_809_, lean_object* v_h__2_810_){
_start:
{
lean_object* v_zero_811_; uint8_t v_isZero_812_; 
v_zero_811_ = lean_unsigned_to_nat(0u);
v_isZero_812_ = lean_nat_dec_eq(v_fuel_808_, v_zero_811_);
if (v_isZero_812_ == 1)
{
lean_object* v___x_813_; lean_object* v___x_814_; 
lean_dec(v_h__2_810_);
v___x_813_ = lean_box(0);
v___x_814_ = lean_apply_1(v_h__1_809_, v___x_813_);
return v___x_814_;
}
else
{
lean_object* v_one_815_; lean_object* v_n_816_; lean_object* v___x_817_; 
lean_dec(v_h__1_809_);
v_one_815_ = lean_unsigned_to_nat(1u);
v_n_816_ = lean_nat_sub(v_fuel_808_, v_one_815_);
v___x_817_ = lean_apply_1(v_h__2_810_, v_n_816_);
return v___x_817_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_propagate_go_match__3_splitter___redArg___boxed(lean_object* v_fuel_818_, lean_object* v_h__1_819_, lean_object* v_h__2_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = lp_pmll___private_PMLL_0__PMLL_propagate_go_match__3_splitter___redArg(v_fuel_818_, v_h__1_819_, v_h__2_820_);
lean_dec(v_fuel_818_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_propagate_go_match__3_splitter(lean_object* v_motive_822_, lean_object* v_fuel_823_, lean_object* v_h__1_824_, lean_object* v_h__2_825_){
_start:
{
lean_object* v_zero_826_; uint8_t v_isZero_827_; 
v_zero_826_ = lean_unsigned_to_nat(0u);
v_isZero_827_ = lean_nat_dec_eq(v_fuel_823_, v_zero_826_);
if (v_isZero_827_ == 1)
{
lean_object* v___x_828_; lean_object* v___x_829_; 
lean_dec(v_h__2_825_);
v___x_828_ = lean_box(0);
v___x_829_ = lean_apply_1(v_h__1_824_, v___x_828_);
return v___x_829_;
}
else
{
lean_object* v_one_830_; lean_object* v_n_831_; lean_object* v___x_832_; 
lean_dec(v_h__1_824_);
v_one_830_ = lean_unsigned_to_nat(1u);
v_n_831_ = lean_nat_sub(v_fuel_823_, v_one_830_);
v___x_832_ = lean_apply_1(v_h__2_825_, v_n_831_);
return v___x_832_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_propagate_go_match__3_splitter___boxed(lean_object* v_motive_833_, lean_object* v_fuel_834_, lean_object* v_h__1_835_, lean_object* v_h__2_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = lp_pmll___private_PMLL_0__PMLL_propagate_go_match__3_splitter(v_motive_833_, v_fuel_834_, v_h__1_835_, v_h__2_836_);
lean_dec(v_fuel_834_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_dpll_match__1_splitter___redArg(lean_object* v_x_838_, lean_object* v_h__1_839_, lean_object* v_h__2_840_, lean_object* v_h__3_841_){
_start:
{
lean_object* v_fst_842_; uint8_t v___x_843_; 
v_fst_842_ = lean_ctor_get(v_x_838_, 0);
v___x_843_ = lean_unbox(v_fst_842_);
switch(v___x_843_)
{
case 0:
{
lean_object* v_snd_844_; lean_object* v_fst_845_; lean_object* v_snd_846_; lean_object* v___x_847_; 
lean_dec(v_h__3_841_);
lean_dec(v_h__1_839_);
v_snd_844_ = lean_ctor_get(v_x_838_, 1);
lean_inc(v_snd_844_);
lean_dec_ref(v_x_838_);
v_fst_845_ = lean_ctor_get(v_snd_844_, 0);
lean_inc(v_fst_845_);
v_snd_846_ = lean_ctor_get(v_snd_844_, 1);
lean_inc(v_snd_846_);
lean_dec(v_snd_844_);
v___x_847_ = lean_apply_2(v_h__2_840_, v_fst_845_, v_snd_846_);
return v___x_847_;
}
case 1:
{
lean_object* v_snd_848_; lean_object* v_fst_849_; lean_object* v_snd_850_; lean_object* v___x_851_; 
lean_dec(v_h__3_841_);
lean_dec(v_h__2_840_);
v_snd_848_ = lean_ctor_get(v_x_838_, 1);
lean_inc(v_snd_848_);
lean_dec_ref(v_x_838_);
v_fst_849_ = lean_ctor_get(v_snd_848_, 0);
lean_inc(v_fst_849_);
v_snd_850_ = lean_ctor_get(v_snd_848_, 1);
lean_inc(v_snd_850_);
lean_dec(v_snd_848_);
v___x_851_ = lean_apply_2(v_h__1_839_, v_fst_849_, v_snd_850_);
return v___x_851_;
}
default: 
{
lean_object* v_snd_852_; lean_object* v_fst_853_; lean_object* v_snd_854_; lean_object* v___x_855_; 
lean_dec(v_h__2_840_);
lean_dec(v_h__1_839_);
v_snd_852_ = lean_ctor_get(v_x_838_, 1);
lean_inc(v_snd_852_);
lean_dec_ref(v_x_838_);
v_fst_853_ = lean_ctor_get(v_snd_852_, 0);
lean_inc(v_fst_853_);
v_snd_854_ = lean_ctor_get(v_snd_852_, 1);
lean_inc(v_snd_854_);
lean_dec(v_snd_852_);
v___x_855_ = lean_apply_2(v_h__3_841_, v_fst_853_, v_snd_854_);
return v___x_855_;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_PMLL_0__PMLL_dpll_match__1_splitter(lean_object* v_motive_856_, lean_object* v_x_857_, lean_object* v_h__1_858_, lean_object* v_h__2_859_, lean_object* v_h__3_860_){
_start:
{
lean_object* v_fst_861_; uint8_t v___x_862_; 
v_fst_861_ = lean_ctor_get(v_x_857_, 0);
v___x_862_ = lean_unbox(v_fst_861_);
switch(v___x_862_)
{
case 0:
{
lean_object* v_snd_863_; lean_object* v_fst_864_; lean_object* v_snd_865_; lean_object* v___x_866_; 
lean_dec(v_h__3_860_);
lean_dec(v_h__1_858_);
v_snd_863_ = lean_ctor_get(v_x_857_, 1);
lean_inc(v_snd_863_);
lean_dec_ref(v_x_857_);
v_fst_864_ = lean_ctor_get(v_snd_863_, 0);
lean_inc(v_fst_864_);
v_snd_865_ = lean_ctor_get(v_snd_863_, 1);
lean_inc(v_snd_865_);
lean_dec(v_snd_863_);
v___x_866_ = lean_apply_2(v_h__2_859_, v_fst_864_, v_snd_865_);
return v___x_866_;
}
case 1:
{
lean_object* v_snd_867_; lean_object* v_fst_868_; lean_object* v_snd_869_; lean_object* v___x_870_; 
lean_dec(v_h__3_860_);
lean_dec(v_h__2_859_);
v_snd_867_ = lean_ctor_get(v_x_857_, 1);
lean_inc(v_snd_867_);
lean_dec_ref(v_x_857_);
v_fst_868_ = lean_ctor_get(v_snd_867_, 0);
lean_inc(v_fst_868_);
v_snd_869_ = lean_ctor_get(v_snd_867_, 1);
lean_inc(v_snd_869_);
lean_dec(v_snd_867_);
v___x_870_ = lean_apply_2(v_h__1_858_, v_fst_868_, v_snd_869_);
return v___x_870_;
}
default: 
{
lean_object* v_snd_871_; lean_object* v_fst_872_; lean_object* v_snd_873_; lean_object* v___x_874_; 
lean_dec(v_h__2_859_);
lean_dec(v_h__1_858_);
v_snd_871_ = lean_ctor_get(v_x_857_, 1);
lean_inc(v_snd_871_);
lean_dec_ref(v_x_857_);
v_fst_872_ = lean_ctor_get(v_snd_871_, 0);
lean_inc(v_fst_872_);
v_snd_873_ = lean_ctor_get(v_snd_871_, 1);
lean_inc(v_snd_873_);
lean_dec(v_snd_871_);
v___x_874_ = lean_apply_2(v_h__3_860_, v_fst_872_, v_snd_873_);
return v___x_874_;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3(lean_object* v_x_881_, lean_object* v_x_882_){
_start:
{
if (lean_obj_tag(v_x_881_) == 0)
{
lean_object* v___x_883_; 
v___x_883_ = ((lean_object*)(lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__1));
return v___x_883_;
}
else
{
lean_object* v_val_884_; lean_object* v___x_885_; uint8_t v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v_val_884_ = lean_ctor_get(v_x_881_, 0);
v___x_885_ = ((lean_object*)(lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__3));
v___x_886_ = lean_unbox(v_val_884_);
v___x_887_ = l_Bool_repr___redArg(v___x_886_);
v___x_888_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_888_, 0, v___x_885_);
lean_ctor_set(v___x_888_, 1, v___x_887_);
v___x_889_ = l_Repr_addAppParen(v___x_888_, v_x_882_);
return v___x_889_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___boxed(lean_object* v_x_890_, lean_object* v_x_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3(v_x_890_, v_x_891_);
lean_dec(v_x_891_);
lean_dec(v_x_890_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* lp_pmll_Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__4___lam__0(lean_object* v___y_893_){
_start:
{
lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_894_ = lean_unsigned_to_nat(0u);
v___x_895_ = lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3(v___y_893_, v___x_894_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* lp_pmll_Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__4___lam__0___boxed(lean_object* v___y_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = lp_pmll_Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__4___lam__0(v___y_896_);
lean_dec(v___y_896_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__4_spec__7_spec__10(lean_object* v_x_898_, lean_object* v_x_899_, lean_object* v_x_900_){
_start:
{
if (lean_obj_tag(v_x_900_) == 0)
{
lean_dec(v_x_898_);
return v_x_899_;
}
else
{
lean_object* v_head_901_; lean_object* v_tail_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_913_; 
v_head_901_ = lean_ctor_get(v_x_900_, 0);
v_tail_902_ = lean_ctor_get(v_x_900_, 1);
v_isSharedCheck_913_ = !lean_is_exclusive(v_x_900_);
if (v_isSharedCheck_913_ == 0)
{
v___x_904_ = v_x_900_;
v_isShared_905_ = v_isSharedCheck_913_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_tail_902_);
lean_inc(v_head_901_);
lean_dec(v_x_900_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_913_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
lean_inc(v_x_898_);
if (v_isShared_905_ == 0)
{
lean_ctor_set_tag(v___x_904_, 5);
lean_ctor_set(v___x_904_, 1, v_x_898_);
lean_ctor_set(v___x_904_, 0, v_x_899_);
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_x_899_);
lean_ctor_set(v_reuseFailAlloc_912_, 1, v_x_898_);
v___x_907_ = v_reuseFailAlloc_912_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_908_ = lean_unsigned_to_nat(0u);
v___x_909_ = lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3(v_head_901_, v___x_908_);
lean_dec(v_head_901_);
v___x_910_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_907_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
v_x_899_ = v___x_910_;
v_x_900_ = v_tail_902_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__4_spec__7(lean_object* v_x_914_, lean_object* v_x_915_, lean_object* v_x_916_){
_start:
{
if (lean_obj_tag(v_x_916_) == 0)
{
lean_dec(v_x_914_);
return v_x_915_;
}
else
{
lean_object* v_head_917_; lean_object* v_tail_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_929_; 
v_head_917_ = lean_ctor_get(v_x_916_, 0);
v_tail_918_ = lean_ctor_get(v_x_916_, 1);
v_isSharedCheck_929_ = !lean_is_exclusive(v_x_916_);
if (v_isSharedCheck_929_ == 0)
{
v___x_920_ = v_x_916_;
v_isShared_921_ = v_isSharedCheck_929_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_tail_918_);
lean_inc(v_head_917_);
lean_dec(v_x_916_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_929_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
lean_inc(v_x_914_);
if (v_isShared_921_ == 0)
{
lean_ctor_set_tag(v___x_920_, 5);
lean_ctor_set(v___x_920_, 1, v_x_914_);
lean_ctor_set(v___x_920_, 0, v_x_915_);
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_x_915_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v_x_914_);
v___x_923_ = v_reuseFailAlloc_928_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v___x_924_ = lean_unsigned_to_nat(0u);
v___x_925_ = lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3(v_head_917_, v___x_924_);
lean_dec(v_head_917_);
v___x_926_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_926_, 0, v___x_923_);
lean_ctor_set(v___x_926_, 1, v___x_925_);
v___x_927_ = lp_pmll_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__4_spec__7_spec__10(v_x_914_, v___x_926_, v_tail_918_);
return v___x_927_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__4(lean_object* v_x_930_, lean_object* v_x_931_){
_start:
{
if (lean_obj_tag(v_x_930_) == 0)
{
lean_object* v___x_932_; 
lean_dec(v_x_931_);
v___x_932_ = lean_box(0);
return v___x_932_;
}
else
{
lean_object* v_tail_933_; 
v_tail_933_ = lean_ctor_get(v_x_930_, 1);
if (lean_obj_tag(v_tail_933_) == 0)
{
lean_object* v_head_934_; lean_object* v___x_935_; 
lean_dec(v_x_931_);
v_head_934_ = lean_ctor_get(v_x_930_, 0);
lean_inc(v_head_934_);
lean_dec_ref_known(v_x_930_, 2);
v___x_935_ = lp_pmll_Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__4___lam__0(v_head_934_);
lean_dec(v_head_934_);
return v___x_935_;
}
else
{
lean_object* v_head_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
lean_inc(v_tail_933_);
v_head_936_ = lean_ctor_get(v_x_930_, 0);
lean_inc(v_head_936_);
lean_dec_ref_known(v_x_930_, 2);
v___x_937_ = lp_pmll_Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__4___lam__0(v_head_936_);
lean_dec(v_head_936_);
v___x_938_ = lp_pmll_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__4_spec__7(v_x_931_, v___x_937_, v_tail_933_);
return v___x_938_;
}
}
}
}
static lean_object* _init_lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__7(void){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_950_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__2));
v___x_951_ = lean_string_length(v___x_950_);
return v___x_951_;
}
}
static lean_object* _init_lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__8(void){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = lean_obj_once(&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__7, &lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__7_once, _init_lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__7);
v___x_953_ = lean_nat_to_int(v___x_952_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg(lean_object* v_a_958_){
_start:
{
if (lean_obj_tag(v_a_958_) == 0)
{
lean_object* v___x_959_; 
v___x_959_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__1));
return v___x_959_;
}
else
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; uint8_t v___x_968_; lean_object* v___x_969_; 
v___x_960_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__5));
v___x_961_ = lp_pmll_Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__4(v_a_958_, v___x_960_);
v___x_962_ = lean_obj_once(&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__8, &lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__8_once, _init_lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__8);
v___x_963_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__9));
v___x_964_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
lean_ctor_set(v___x_964_, 1, v___x_961_);
v___x_965_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__10));
v___x_966_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_966_, 0, v___x_964_);
lean_ctor_set(v___x_966_, 1, v___x_965_);
v___x_967_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_967_, 0, v___x_962_);
lean_ctor_set(v___x_967_, 1, v___x_966_);
v___x_968_ = 0;
v___x_969_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_969_, 0, v___x_967_);
lean_ctor_set_uint8(v___x_969_, sizeof(void*)*1, v___x_968_);
return v___x_969_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1_spec__4_spec__7(lean_object* v_x_970_, lean_object* v_x_971_, lean_object* v_x_972_){
_start:
{
if (lean_obj_tag(v_x_972_) == 0)
{
lean_dec(v_x_970_);
return v_x_971_;
}
else
{
lean_object* v_head_973_; lean_object* v_tail_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_993_; 
v_head_973_ = lean_ctor_get(v_x_972_, 0);
v_tail_974_ = lean_ctor_get(v_x_972_, 1);
v_isSharedCheck_993_ = !lean_is_exclusive(v_x_972_);
if (v_isSharedCheck_993_ == 0)
{
v___x_976_ = v_x_972_;
v_isShared_977_ = v_isSharedCheck_993_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_tail_974_);
lean_inc(v_head_973_);
lean_dec(v_x_972_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_993_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_979_; 
lean_inc(v_x_970_);
if (v_isShared_977_ == 0)
{
lean_ctor_set_tag(v___x_976_, 5);
lean_ctor_set(v___x_976_, 1, v_x_970_);
lean_ctor_set(v___x_976_, 0, v_x_971_);
v___x_979_ = v___x_976_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_x_971_);
lean_ctor_set(v_reuseFailAlloc_992_, 1, v_x_970_);
v___x_979_ = v_reuseFailAlloc_992_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
lean_object* v___x_980_; lean_object* v___x_981_; uint8_t v___x_982_; 
v___x_980_ = lean_unsigned_to_nat(0u);
v___x_981_ = lean_obj_once(&lp_pmll_PMLL_litVar___closed__0, &lp_pmll_PMLL_litVar___closed__0_once, _init_lp_pmll_PMLL_litVar___closed__0);
v___x_982_ = lean_int_dec_lt(v_head_973_, v___x_981_);
if (v___x_982_ == 0)
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_983_ = l_Int_repr(v_head_973_);
lean_dec(v_head_973_);
v___x_984_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_984_, 0, v___x_983_);
v___x_985_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_979_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
v_x_971_ = v___x_985_;
v_x_972_ = v_tail_974_;
goto _start;
}
else
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_987_ = l_Int_repr(v_head_973_);
lean_dec(v_head_973_);
v___x_988_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_988_, 0, v___x_987_);
v___x_989_ = l_Repr_addAppParen(v___x_988_, v___x_980_);
v___x_990_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_979_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v_x_971_ = v___x_990_;
v_x_972_ = v_tail_974_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1_spec__4(lean_object* v_x_994_, lean_object* v_x_995_, lean_object* v_x_996_){
_start:
{
if (lean_obj_tag(v_x_996_) == 0)
{
lean_dec(v_x_994_);
return v_x_995_;
}
else
{
lean_object* v_head_997_; lean_object* v_tail_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1017_; 
v_head_997_ = lean_ctor_get(v_x_996_, 0);
v_tail_998_ = lean_ctor_get(v_x_996_, 1);
v_isSharedCheck_1017_ = !lean_is_exclusive(v_x_996_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1000_ = v_x_996_;
v_isShared_1001_ = v_isSharedCheck_1017_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_tail_998_);
lean_inc(v_head_997_);
lean_dec(v_x_996_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1017_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1003_; 
lean_inc(v_x_994_);
if (v_isShared_1001_ == 0)
{
lean_ctor_set_tag(v___x_1000_, 5);
lean_ctor_set(v___x_1000_, 1, v_x_994_);
lean_ctor_set(v___x_1000_, 0, v_x_995_);
v___x_1003_ = v___x_1000_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_x_995_);
lean_ctor_set(v_reuseFailAlloc_1016_, 1, v_x_994_);
v___x_1003_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; uint8_t v___x_1006_; 
v___x_1004_ = lean_unsigned_to_nat(0u);
v___x_1005_ = lean_obj_once(&lp_pmll_PMLL_litVar___closed__0, &lp_pmll_PMLL_litVar___closed__0_once, _init_lp_pmll_PMLL_litVar___closed__0);
v___x_1006_ = lean_int_dec_lt(v_head_997_, v___x_1005_);
if (v___x_1006_ == 0)
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1007_ = l_Int_repr(v_head_997_);
lean_dec(v_head_997_);
v___x_1008_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
v___x_1009_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1003_);
lean_ctor_set(v___x_1009_, 1, v___x_1008_);
v___x_1010_ = lp_pmll_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1_spec__4_spec__7(v_x_994_, v___x_1009_, v_tail_998_);
return v___x_1010_;
}
else
{
lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1011_ = l_Int_repr(v_head_997_);
lean_dec(v_head_997_);
v___x_1012_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1011_);
v___x_1013_ = l_Repr_addAppParen(v___x_1012_, v___x_1004_);
v___x_1014_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1003_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
v___x_1015_ = lp_pmll_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1_spec__4_spec__7(v_x_994_, v___x_1014_, v_tail_998_);
return v___x_1015_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1___lam__0(lean_object* v___y_1018_){
_start:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; uint8_t v___x_1021_; 
v___x_1019_ = lean_unsigned_to_nat(0u);
v___x_1020_ = lean_obj_once(&lp_pmll_PMLL_litVar___closed__0, &lp_pmll_PMLL_litVar___closed__0_once, _init_lp_pmll_PMLL_litVar___closed__0);
v___x_1021_ = lean_int_dec_lt(v___y_1018_, v___x_1020_);
if (v___x_1021_ == 0)
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = l_Int_repr(v___y_1018_);
v___x_1023_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1022_);
return v___x_1023_;
}
else
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1024_ = l_Int_repr(v___y_1018_);
v___x_1025_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1024_);
v___x_1026_ = l_Repr_addAppParen(v___x_1025_, v___x_1019_);
return v___x_1026_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v___y_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = lp_pmll_Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1___lam__0(v___y_1027_);
lean_dec(v___y_1027_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* lp_pmll_Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1(lean_object* v_x_1029_, lean_object* v_x_1030_){
_start:
{
if (lean_obj_tag(v_x_1029_) == 0)
{
lean_object* v___x_1031_; 
lean_dec(v_x_1030_);
v___x_1031_ = lean_box(0);
return v___x_1031_;
}
else
{
lean_object* v_tail_1032_; 
v_tail_1032_ = lean_ctor_get(v_x_1029_, 1);
if (lean_obj_tag(v_tail_1032_) == 0)
{
lean_object* v_head_1033_; lean_object* v___x_1034_; 
lean_dec(v_x_1030_);
v_head_1033_ = lean_ctor_get(v_x_1029_, 0);
lean_inc(v_head_1033_);
lean_dec_ref_known(v_x_1029_, 2);
v___x_1034_ = lp_pmll_Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1___lam__0(v_head_1033_);
lean_dec(v_head_1033_);
return v___x_1034_;
}
else
{
lean_object* v_head_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
lean_inc(v_tail_1032_);
v_head_1035_ = lean_ctor_get(v_x_1029_, 0);
lean_inc(v_head_1035_);
lean_dec_ref_known(v_x_1029_, 2);
v___x_1036_ = lp_pmll_Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1___lam__0(v_head_1035_);
lean_dec(v_head_1035_);
v___x_1037_ = lp_pmll_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1_spec__4(v_x_1030_, v___x_1036_, v_tail_1032_);
return v___x_1037_;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0___redArg(lean_object* v_a_1038_){
_start:
{
if (lean_obj_tag(v_a_1038_) == 0)
{
lean_object* v___x_1039_; 
v___x_1039_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__1));
return v___x_1039_;
}
else
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1040_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__5));
v___x_1041_ = lp_pmll_Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1(v_a_1038_, v___x_1040_);
v___x_1042_ = lean_obj_once(&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__8, &lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__8_once, _init_lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__8);
v___x_1043_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__9));
v___x_1044_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1043_);
lean_ctor_set(v___x_1044_, 1, v___x_1041_);
v___x_1045_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__10));
v___x_1046_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1044_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
v___x_1047_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1042_);
lean_ctor_set(v___x_1047_, 1, v___x_1046_);
v___x_1048_ = l_Std_Format_fill(v___x_1047_);
return v___x_1048_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__1_spec__3_spec__7(lean_object* v_x_1049_, lean_object* v_x_1050_, lean_object* v_x_1051_){
_start:
{
if (lean_obj_tag(v_x_1051_) == 0)
{
lean_dec(v_x_1049_);
return v_x_1050_;
}
else
{
lean_object* v_head_1052_; lean_object* v_tail_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1063_; 
v_head_1052_ = lean_ctor_get(v_x_1051_, 0);
v_tail_1053_ = lean_ctor_get(v_x_1051_, 1);
v_isSharedCheck_1063_ = !lean_is_exclusive(v_x_1051_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1055_ = v_x_1051_;
v_isShared_1056_ = v_isSharedCheck_1063_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_tail_1053_);
lean_inc(v_head_1052_);
lean_dec(v_x_1051_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1063_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1058_; 
lean_inc(v_x_1049_);
if (v_isShared_1056_ == 0)
{
lean_ctor_set_tag(v___x_1055_, 5);
lean_ctor_set(v___x_1055_, 1, v_x_1049_);
lean_ctor_set(v___x_1055_, 0, v_x_1050_);
v___x_1058_ = v___x_1055_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_x_1050_);
lean_ctor_set(v_reuseFailAlloc_1062_, 1, v_x_1049_);
v___x_1058_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1059_ = lp_pmll_List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0___redArg(v_head_1052_);
v___x_1060_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1058_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
v_x_1050_ = v___x_1060_;
v_x_1051_ = v_tail_1053_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__1_spec__3(lean_object* v_x_1064_, lean_object* v_x_1065_, lean_object* v_x_1066_){
_start:
{
if (lean_obj_tag(v_x_1066_) == 0)
{
lean_dec(v_x_1064_);
return v_x_1065_;
}
else
{
lean_object* v_head_1067_; lean_object* v_tail_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1078_; 
v_head_1067_ = lean_ctor_get(v_x_1066_, 0);
v_tail_1068_ = lean_ctor_get(v_x_1066_, 1);
v_isSharedCheck_1078_ = !lean_is_exclusive(v_x_1066_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1070_ = v_x_1066_;
v_isShared_1071_ = v_isSharedCheck_1078_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_tail_1068_);
lean_inc(v_head_1067_);
lean_dec(v_x_1066_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1078_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
lean_inc(v_x_1064_);
if (v_isShared_1071_ == 0)
{
lean_ctor_set_tag(v___x_1070_, 5);
lean_ctor_set(v___x_1070_, 1, v_x_1064_);
lean_ctor_set(v___x_1070_, 0, v_x_1065_);
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v_x_1065_);
lean_ctor_set(v_reuseFailAlloc_1077_, 1, v_x_1064_);
v___x_1073_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1074_ = lp_pmll_List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0___redArg(v_head_1067_);
v___x_1075_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1073_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
v___x_1076_ = lp_pmll_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__1_spec__3_spec__7(v_x_1064_, v___x_1075_, v_tail_1068_);
return v___x_1076_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__1(lean_object* v_x_1079_, lean_object* v_x_1080_){
_start:
{
if (lean_obj_tag(v_x_1079_) == 0)
{
lean_object* v___x_1081_; 
lean_dec(v_x_1080_);
v___x_1081_ = lean_box(0);
return v___x_1081_;
}
else
{
lean_object* v_tail_1082_; 
v_tail_1082_ = lean_ctor_get(v_x_1079_, 1);
if (lean_obj_tag(v_tail_1082_) == 0)
{
lean_object* v_head_1083_; lean_object* v___x_1084_; 
lean_dec(v_x_1080_);
v_head_1083_ = lean_ctor_get(v_x_1079_, 0);
lean_inc(v_head_1083_);
lean_dec_ref_known(v_x_1079_, 2);
v___x_1084_ = lp_pmll_List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0___redArg(v_head_1083_);
return v___x_1084_;
}
else
{
lean_object* v_head_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
lean_inc(v_tail_1082_);
v_head_1085_ = lean_ctor_get(v_x_1079_, 0);
lean_inc(v_head_1085_);
lean_dec_ref_known(v_x_1079_, 2);
v___x_1086_ = lp_pmll_List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0___redArg(v_head_1085_);
v___x_1087_ = lp_pmll_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__1_spec__3(v_x_1080_, v___x_1086_, v_tail_1082_);
return v___x_1087_;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__0___redArg(lean_object* v_a_1088_){
_start:
{
if (lean_obj_tag(v_a_1088_) == 0)
{
lean_object* v___x_1089_; 
v___x_1089_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__1));
return v___x_1089_;
}
else
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; uint8_t v___x_1098_; lean_object* v___x_1099_; 
v___x_1090_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__5));
v___x_1091_ = lp_pmll_Std_Format_joinSep___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__1(v_a_1088_, v___x_1090_);
v___x_1092_ = lean_obj_once(&lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__8, &lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__8_once, _init_lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__8);
v___x_1093_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__9));
v___x_1094_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1093_);
lean_ctor_set(v___x_1094_, 1, v___x_1091_);
v___x_1095_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__10));
v___x_1096_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1094_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1092_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
v___x_1098_ = 0;
v___x_1099_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1099_, 0, v___x_1097_);
lean_ctor_set_uint8(v___x_1099_, sizeof(void*)*1, v___x_1098_);
return v___x_1099_;
}
}
}
static lean_object* _init_lp_pmll_PMLL_instReprCert_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = lean_unsigned_to_nat(5u);
v___x_1114_ = lean_nat_to_int(v___x_1113_);
return v___x_1114_;
}
}
static lean_object* _init_lp_pmll_PMLL_instReprCert_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1118_ = lean_unsigned_to_nat(11u);
v___x_1119_ = lean_nat_to_int(v___x_1118_);
return v___x_1119_;
}
}
static lean_object* _init_lp_pmll_PMLL_instReprCert_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1133_ = ((lean_object*)(lp_pmll_PMLL_instReprCert_repr___redArg___closed__0));
v___x_1134_ = lean_string_length(v___x_1133_);
return v___x_1134_;
}
}
static lean_object* _init_lp_pmll_PMLL_instReprCert_repr___redArg___closed__21(void){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1135_ = lean_obj_once(&lp_pmll_PMLL_instReprCert_repr___redArg___closed__20, &lp_pmll_PMLL_instReprCert_repr___redArg___closed__20_once, _init_lp_pmll_PMLL_instReprCert_repr___redArg___closed__20);
v___x_1136_ = lean_nat_to_int(v___x_1135_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprCert_repr___redArg(lean_object* v_x_1141_){
_start:
{
lean_object* v_n_1142_; lean_object* v_clauses_1143_; lean_object* v_a_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; uint8_t v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; 
v_n_1142_ = lean_ctor_get(v_x_1141_, 0);
lean_inc(v_n_1142_);
v_clauses_1143_ = lean_ctor_get(v_x_1141_, 1);
lean_inc(v_clauses_1143_);
v_a_1144_ = lean_ctor_get(v_x_1141_, 2);
lean_inc(v_a_1144_);
lean_dec_ref(v_x_1141_);
v___x_1145_ = ((lean_object*)(lp_pmll_PMLL_instReprCert_repr___redArg___closed__5));
v___x_1146_ = ((lean_object*)(lp_pmll_PMLL_instReprCert_repr___redArg___closed__6));
v___x_1147_ = lean_obj_once(&lp_pmll_PMLL_instReprCert_repr___redArg___closed__7, &lp_pmll_PMLL_instReprCert_repr___redArg___closed__7_once, _init_lp_pmll_PMLL_instReprCert_repr___redArg___closed__7);
v___x_1148_ = l_Nat_reprFast(v_n_1142_);
v___x_1149_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1148_);
v___x_1150_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1147_);
lean_ctor_set(v___x_1150_, 1, v___x_1149_);
v___x_1151_ = 0;
v___x_1152_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1152_, 0, v___x_1150_);
lean_ctor_set_uint8(v___x_1152_, sizeof(void*)*1, v___x_1151_);
v___x_1153_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1146_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
v___x_1154_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__4));
v___x_1155_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1155_, 0, v___x_1153_);
lean_ctor_set(v___x_1155_, 1, v___x_1154_);
v___x_1156_ = lean_box(1);
v___x_1157_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1155_);
lean_ctor_set(v___x_1157_, 1, v___x_1156_);
v___x_1158_ = ((lean_object*)(lp_pmll_PMLL_instReprCert_repr___redArg___closed__9));
v___x_1159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1157_);
lean_ctor_set(v___x_1159_, 1, v___x_1158_);
v___x_1160_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1159_);
lean_ctor_set(v___x_1160_, 1, v___x_1145_);
v___x_1161_ = lean_obj_once(&lp_pmll_PMLL_instReprCert_repr___redArg___closed__10, &lp_pmll_PMLL_instReprCert_repr___redArg___closed__10_once, _init_lp_pmll_PMLL_instReprCert_repr___redArg___closed__10);
v___x_1162_ = lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__0___redArg(v_clauses_1143_);
v___x_1163_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1161_);
lean_ctor_set(v___x_1163_, 1, v___x_1162_);
v___x_1164_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1164_, 0, v___x_1163_);
lean_ctor_set_uint8(v___x_1164_, sizeof(void*)*1, v___x_1151_);
v___x_1165_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1165_, 0, v___x_1160_);
lean_ctor_set(v___x_1165_, 1, v___x_1164_);
v___x_1166_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1166_, 0, v___x_1165_);
lean_ctor_set(v___x_1166_, 1, v___x_1154_);
v___x_1167_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1167_, 0, v___x_1166_);
lean_ctor_set(v___x_1167_, 1, v___x_1156_);
v___x_1168_ = ((lean_object*)(lp_pmll_PMLL_instReprCert_repr___redArg___closed__12));
v___x_1169_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1167_);
lean_ctor_set(v___x_1169_, 1, v___x_1168_);
v___x_1170_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1169_);
lean_ctor_set(v___x_1170_, 1, v___x_1145_);
v___x_1171_ = lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg(v_a_1144_);
v___x_1172_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1147_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
v___x_1173_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1173_, 0, v___x_1172_);
lean_ctor_set_uint8(v___x_1173_, sizeof(void*)*1, v___x_1151_);
v___x_1174_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1170_);
lean_ctor_set(v___x_1174_, 1, v___x_1173_);
v___x_1175_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1174_);
lean_ctor_set(v___x_1175_, 1, v___x_1154_);
v___x_1176_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
lean_ctor_set(v___x_1176_, 1, v___x_1156_);
v___x_1177_ = ((lean_object*)(lp_pmll_PMLL_instReprCert_repr___redArg___closed__14));
v___x_1178_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1176_);
lean_ctor_set(v___x_1178_, 1, v___x_1177_);
v___x_1179_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
lean_ctor_set(v___x_1179_, 1, v___x_1145_);
v___x_1180_ = ((lean_object*)(lp_pmll_PMLL_instReprCert_repr___redArg___closed__16));
v___x_1181_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1179_);
lean_ctor_set(v___x_1181_, 1, v___x_1180_);
v___x_1182_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1182_, 0, v___x_1181_);
lean_ctor_set(v___x_1182_, 1, v___x_1154_);
v___x_1183_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1182_);
lean_ctor_set(v___x_1183_, 1, v___x_1156_);
v___x_1184_ = ((lean_object*)(lp_pmll_PMLL_instReprCert_repr___redArg___closed__18));
v___x_1185_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1183_);
lean_ctor_set(v___x_1185_, 1, v___x_1184_);
v___x_1186_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1185_);
lean_ctor_set(v___x_1186_, 1, v___x_1145_);
v___x_1187_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1187_, 0, v___x_1186_);
lean_ctor_set(v___x_1187_, 1, v___x_1180_);
v___x_1188_ = lean_obj_once(&lp_pmll_PMLL_instReprCert_repr___redArg___closed__21, &lp_pmll_PMLL_instReprCert_repr___redArg___closed__21_once, _init_lp_pmll_PMLL_instReprCert_repr___redArg___closed__21);
v___x_1189_ = ((lean_object*)(lp_pmll_PMLL_instReprCert_repr___redArg___closed__22));
v___x_1190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
lean_ctor_set(v___x_1190_, 1, v___x_1187_);
v___x_1191_ = ((lean_object*)(lp_pmll_PMLL_instReprCert_repr___redArg___closed__23));
v___x_1192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1190_);
lean_ctor_set(v___x_1192_, 1, v___x_1191_);
v___x_1193_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1188_);
lean_ctor_set(v___x_1193_, 1, v___x_1192_);
v___x_1194_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1194_, 0, v___x_1193_);
lean_ctor_set_uint8(v___x_1194_, sizeof(void*)*1, v___x_1151_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprCert_repr(lean_object* v_x_1195_, lean_object* v_prec_1196_){
_start:
{
lean_object* v___x_1197_; 
v___x_1197_ = lp_pmll_PMLL_instReprCert_repr___redArg(v_x_1195_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprCert_repr___boxed(lean_object* v_x_1198_, lean_object* v_prec_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = lp_pmll_PMLL_instReprCert_repr(v_x_1198_, v_prec_1199_);
lean_dec(v_prec_1199_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__0(lean_object* v_a_1201_, lean_object* v_n_1202_){
_start:
{
lean_object* v___x_1203_; 
v___x_1203_ = lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__0___redArg(v_a_1201_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__0___boxed(lean_object* v_a_1204_, lean_object* v_n_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__0(v_a_1204_, v_n_1205_);
lean_dec(v_n_1205_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1(lean_object* v_a_1207_, lean_object* v_n_1208_){
_start:
{
lean_object* v___x_1209_; 
v___x_1209_ = lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg(v_a_1207_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___boxed(lean_object* v_a_1210_, lean_object* v_n_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1(v_a_1210_, v_n_1211_);
lean_dec(v_n_1211_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0(lean_object* v_a_1213_, lean_object* v_n_1214_){
_start:
{
lean_object* v___x_1215_; 
v___x_1215_ = lp_pmll_List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0___redArg(v_a_1213_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0___boxed(lean_object* v_a_1216_, lean_object* v_n_1217_){
_start:
{
lean_object* v_res_1218_; 
v_res_1218_ = lp_pmll_List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0(v_a_1216_, v_n_1217_);
lean_dec(v_n_1217_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_refine(lean_object* v_n_1225_, lean_object* v_clauses_1226_, lean_object* v_budget_1227_){
_start:
{
lean_object* v___x_1228_; lean_object* v_a0_1229_; lean_object* v___x_1230_; lean_object* v_fst_1231_; uint8_t v___x_1232_; 
v___x_1228_ = lean_box(0);
lean_inc(v_n_1225_);
v_a0_1229_ = l_List_replicateTR___redArg(v_n_1225_, v___x_1228_);
v___x_1230_ = lp_pmll_PMLL_dpll(v_n_1225_, v_clauses_1226_, v_a0_1229_, v_budget_1227_);
v_fst_1231_ = lean_ctor_get(v___x_1230_, 0);
lean_inc(v_fst_1231_);
v___x_1232_ = lean_unbox(v_fst_1231_);
if (v___x_1232_ == 1)
{
lean_object* v_snd_1233_; lean_object* v_fst_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1247_; 
v_snd_1233_ = lean_ctor_get(v___x_1230_, 1);
lean_inc(v_snd_1233_);
lean_dec_ref(v___x_1230_);
v_fst_1234_ = lean_ctor_get(v_snd_1233_, 0);
v_isSharedCheck_1247_ = !lean_is_exclusive(v_snd_1233_);
if (v_isSharedCheck_1247_ == 0)
{
lean_object* v_unused_1248_; 
v_unused_1248_ = lean_ctor_get(v_snd_1233_, 1);
lean_dec(v_unused_1248_);
v___x_1236_ = v_snd_1233_;
v_isShared_1237_ = v_isSharedCheck_1247_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_fst_1234_);
lean_dec(v_snd_1233_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1247_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
uint8_t v___x_1238_; 
v___x_1238_ = lp_pmll_List_all___at___00PMLL_allAssigned_spec__0(v_fst_1234_);
if (v___x_1238_ == 0)
{
lean_object* v___x_1239_; 
lean_del_object(v___x_1236_);
lean_dec(v_fst_1234_);
lean_dec(v_fst_1231_);
lean_dec(v_clauses_1226_);
lean_dec(v_n_1225_);
v___x_1239_ = ((lean_object*)(lp_pmll_PMLL_refine___closed__0));
return v___x_1239_;
}
else
{
uint8_t v___x_1240_; 
v___x_1240_ = lp_pmll_List_any___at___00PMLL_checkConflict_spec__0(v_n_1225_, v_fst_1234_, v_clauses_1226_);
if (v___x_1240_ == 0)
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1244_; 
v___x_1241_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1241_, 0, v_n_1225_);
lean_ctor_set(v___x_1241_, 1, v_clauses_1226_);
lean_ctor_set(v___x_1241_, 2, v_fst_1234_);
v___x_1242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1241_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 1, v___x_1242_);
lean_ctor_set(v___x_1236_, 0, v_fst_1231_);
v___x_1244_ = v___x_1236_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v_fst_1231_);
lean_ctor_set(v_reuseFailAlloc_1245_, 1, v___x_1242_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
return v___x_1244_;
}
}
else
{
lean_object* v___x_1246_; 
lean_del_object(v___x_1236_);
lean_dec(v_fst_1234_);
lean_dec(v_fst_1231_);
lean_dec(v_clauses_1226_);
lean_dec(v_n_1225_);
v___x_1246_ = ((lean_object*)(lp_pmll_PMLL_refine___closed__0));
return v___x_1246_;
}
}
}
}
else
{
lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1255_; 
lean_dec(v_clauses_1226_);
lean_dec(v_n_1225_);
v_isSharedCheck_1255_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1255_ == 0)
{
lean_object* v_unused_1256_; lean_object* v_unused_1257_; 
v_unused_1256_ = lean_ctor_get(v___x_1230_, 1);
lean_dec(v_unused_1256_);
v_unused_1257_ = lean_ctor_get(v___x_1230_, 0);
lean_dec(v_unused_1257_);
v___x_1250_ = v___x_1230_;
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
else
{
lean_dec(v___x_1230_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1253_; 
if (v_isShared_1251_ == 0)
{
lean_ctor_set(v___x_1250_, 1, v___x_1228_);
v___x_1253_ = v___x_1250_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_fst_1231_);
lean_ctor_set(v_reuseFailAlloc_1254_, 1, v___x_1228_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
return v___x_1253_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_Option_repr___at___00PMLL_instReprSlot_repr_spec__0(lean_object* v_x_1258_, lean_object* v_x_1259_){
_start:
{
if (lean_obj_tag(v_x_1258_) == 0)
{
lean_object* v___x_1260_; 
v___x_1260_ = ((lean_object*)(lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__1));
return v___x_1260_;
}
else
{
lean_object* v_val_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1272_; 
v_val_1261_ = lean_ctor_get(v_x_1258_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v_x_1258_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1263_ = v_x_1258_;
v_isShared_1264_ = v_isSharedCheck_1272_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_val_1261_);
lean_dec(v_x_1258_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1272_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1268_; 
v___x_1265_ = ((lean_object*)(lp_pmll_Option_repr___at___00List_repr___at___00PMLL_instReprCert_repr_spec__1_spec__3___closed__3));
v___x_1266_ = l_String_quote(v_val_1261_);
if (v_isShared_1264_ == 0)
{
lean_ctor_set_tag(v___x_1263_, 3);
lean_ctor_set(v___x_1263_, 0, v___x_1266_);
v___x_1268_ = v___x_1263_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v___x_1266_);
v___x_1268_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1269_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1265_);
lean_ctor_set(v___x_1269_, 1, v___x_1268_);
v___x_1270_ = l_Repr_addAppParen(v___x_1269_, v_x_1259_);
return v___x_1270_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_Option_repr___at___00PMLL_instReprSlot_repr_spec__0___boxed(lean_object* v_x_1273_, lean_object* v_x_1274_){
_start:
{
lean_object* v_res_1275_; 
v_res_1275_ = lp_pmll_Option_repr___at___00PMLL_instReprSlot_repr_spec__0(v_x_1273_, v_x_1274_);
lean_dec(v_x_1274_);
return v_res_1275_;
}
}
static lean_object* _init_lp_pmll_PMLL_instReprSlot_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1285_ = lean_unsigned_to_nat(7u);
v___x_1286_ = lean_nat_to_int(v___x_1285_);
return v___x_1286_;
}
}
static lean_object* _init_lp_pmll_PMLL_instReprSlot_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1293_ = lean_unsigned_to_nat(12u);
v___x_1294_ = lean_nat_to_int(v___x_1293_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprSlot_repr___redArg(lean_object* v_x_1295_){
_start:
{
lean_object* v_key_1296_; lean_object* v_content_1297_; uint8_t v_resolved_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; uint8_t v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v_key_1296_ = lean_ctor_get(v_x_1295_, 0);
lean_inc(v_key_1296_);
v_content_1297_ = lean_ctor_get(v_x_1295_, 1);
lean_inc(v_content_1297_);
v_resolved_1298_ = lean_ctor_get_uint8(v_x_1295_, sizeof(void*)*2);
lean_dec_ref(v_x_1295_);
v___x_1299_ = ((lean_object*)(lp_pmll_PMLL_instReprCert_repr___redArg___closed__5));
v___x_1300_ = ((lean_object*)(lp_pmll_PMLL_instReprSlot_repr___redArg___closed__3));
v___x_1301_ = lean_obj_once(&lp_pmll_PMLL_instReprSlot_repr___redArg___closed__4, &lp_pmll_PMLL_instReprSlot_repr___redArg___closed__4_once, _init_lp_pmll_PMLL_instReprSlot_repr___redArg___closed__4);
v___x_1302_ = lean_unsigned_to_nat(0u);
v___x_1303_ = lp_pmll_Option_repr___at___00PMLL_instReprSlot_repr_spec__0(v_key_1296_, v___x_1302_);
v___x_1304_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1301_);
lean_ctor_set(v___x_1304_, 1, v___x_1303_);
v___x_1305_ = 0;
v___x_1306_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1306_, 0, v___x_1304_);
lean_ctor_set_uint8(v___x_1306_, sizeof(void*)*1, v___x_1305_);
v___x_1307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1300_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
v___x_1308_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__4));
v___x_1309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1309_, 0, v___x_1307_);
lean_ctor_set(v___x_1309_, 1, v___x_1308_);
v___x_1310_ = lean_box(1);
v___x_1311_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1309_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
v___x_1312_ = ((lean_object*)(lp_pmll_PMLL_instReprSlot_repr___redArg___closed__6));
v___x_1313_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1311_);
lean_ctor_set(v___x_1313_, 1, v___x_1312_);
v___x_1314_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1313_);
lean_ctor_set(v___x_1314_, 1, v___x_1299_);
v___x_1315_ = lean_obj_once(&lp_pmll_PMLL_instReprCert_repr___redArg___closed__10, &lp_pmll_PMLL_instReprCert_repr___redArg___closed__10_once, _init_lp_pmll_PMLL_instReprCert_repr___redArg___closed__10);
v___x_1316_ = lp_pmll_Option_repr___at___00PMLL_instReprSlot_repr_spec__0(v_content_1297_, v___x_1302_);
v___x_1317_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1315_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
v___x_1318_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
lean_ctor_set_uint8(v___x_1318_, sizeof(void*)*1, v___x_1305_);
v___x_1319_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1314_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v___x_1320_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1319_);
lean_ctor_set(v___x_1320_, 1, v___x_1308_);
v___x_1321_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
lean_ctor_set(v___x_1321_, 1, v___x_1310_);
v___x_1322_ = ((lean_object*)(lp_pmll_PMLL_instReprSlot_repr___redArg___closed__8));
v___x_1323_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1321_);
lean_ctor_set(v___x_1323_, 1, v___x_1322_);
v___x_1324_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1323_);
lean_ctor_set(v___x_1324_, 1, v___x_1299_);
v___x_1325_ = lean_obj_once(&lp_pmll_PMLL_instReprSlot_repr___redArg___closed__9, &lp_pmll_PMLL_instReprSlot_repr___redArg___closed__9_once, _init_lp_pmll_PMLL_instReprSlot_repr___redArg___closed__9);
v___x_1326_ = l_Bool_repr___redArg(v_resolved_1298_);
v___x_1327_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1325_);
lean_ctor_set(v___x_1327_, 1, v___x_1326_);
v___x_1328_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1328_, 0, v___x_1327_);
lean_ctor_set_uint8(v___x_1328_, sizeof(void*)*1, v___x_1305_);
v___x_1329_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1324_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
v___x_1330_ = lean_obj_once(&lp_pmll_PMLL_instReprCert_repr___redArg___closed__21, &lp_pmll_PMLL_instReprCert_repr___redArg___closed__21_once, _init_lp_pmll_PMLL_instReprCert_repr___redArg___closed__21);
v___x_1331_ = ((lean_object*)(lp_pmll_PMLL_instReprCert_repr___redArg___closed__22));
v___x_1332_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1331_);
lean_ctor_set(v___x_1332_, 1, v___x_1329_);
v___x_1333_ = ((lean_object*)(lp_pmll_PMLL_instReprCert_repr___redArg___closed__23));
v___x_1334_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1332_);
lean_ctor_set(v___x_1334_, 1, v___x_1333_);
v___x_1335_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1330_);
lean_ctor_set(v___x_1335_, 1, v___x_1334_);
v___x_1336_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1336_, 0, v___x_1335_);
lean_ctor_set_uint8(v___x_1336_, sizeof(void*)*1, v___x_1305_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprSlot_repr(lean_object* v_x_1337_, lean_object* v_prec_1338_){
_start:
{
lean_object* v___x_1339_; 
v___x_1339_ = lp_pmll_PMLL_instReprSlot_repr___redArg(v_x_1337_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprSlot_repr___boxed(lean_object* v_x_1340_, lean_object* v_prec_1341_){
_start:
{
lean_object* v_res_1342_; 
v_res_1342_ = lp_pmll_PMLL_instReprSlot_repr(v_x_1340_, v_prec_1341_);
lean_dec(v_prec_1341_);
return v_res_1342_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00PMLL_instReprSilo_repr_spec__1_spec__1_spec__2_spec__3(lean_object* v_x_1350_, lean_object* v_x_1351_, lean_object* v_x_1352_){
_start:
{
if (lean_obj_tag(v_x_1352_) == 0)
{
lean_dec(v_x_1350_);
return v_x_1351_;
}
else
{
lean_object* v_head_1353_; lean_object* v_tail_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1364_; 
v_head_1353_ = lean_ctor_get(v_x_1352_, 0);
v_tail_1354_ = lean_ctor_get(v_x_1352_, 1);
v_isSharedCheck_1364_ = !lean_is_exclusive(v_x_1352_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1356_ = v_x_1352_;
v_isShared_1357_ = v_isSharedCheck_1364_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_tail_1354_);
lean_inc(v_head_1353_);
lean_dec(v_x_1352_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1364_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
lean_object* v___x_1359_; 
lean_inc(v_x_1350_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set_tag(v___x_1356_, 5);
lean_ctor_set(v___x_1356_, 1, v_x_1350_);
lean_ctor_set(v___x_1356_, 0, v_x_1351_);
v___x_1359_ = v___x_1356_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_x_1351_);
lean_ctor_set(v_reuseFailAlloc_1363_, 1, v_x_1350_);
v___x_1359_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1360_ = lp_pmll_PMLL_instReprSlot_repr___redArg(v_head_1353_);
v___x_1361_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1359_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
v_x_1351_ = v___x_1361_;
v_x_1352_ = v_tail_1354_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00PMLL_instReprSilo_repr_spec__1_spec__1_spec__2(lean_object* v_x_1365_, lean_object* v_x_1366_, lean_object* v_x_1367_){
_start:
{
if (lean_obj_tag(v_x_1367_) == 0)
{
lean_dec(v_x_1365_);
return v_x_1366_;
}
else
{
lean_object* v_head_1368_; lean_object* v_tail_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1379_; 
v_head_1368_ = lean_ctor_get(v_x_1367_, 0);
v_tail_1369_ = lean_ctor_get(v_x_1367_, 1);
v_isSharedCheck_1379_ = !lean_is_exclusive(v_x_1367_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1371_ = v_x_1367_;
v_isShared_1372_ = v_isSharedCheck_1379_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_tail_1369_);
lean_inc(v_head_1368_);
lean_dec(v_x_1367_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1379_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v___x_1374_; 
lean_inc(v_x_1365_);
if (v_isShared_1372_ == 0)
{
lean_ctor_set_tag(v___x_1371_, 5);
lean_ctor_set(v___x_1371_, 1, v_x_1365_);
lean_ctor_set(v___x_1371_, 0, v_x_1366_);
v___x_1374_ = v___x_1371_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_x_1366_);
lean_ctor_set(v_reuseFailAlloc_1378_, 1, v_x_1365_);
v___x_1374_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1375_ = lp_pmll_PMLL_instReprSlot_repr___redArg(v_head_1368_);
v___x_1376_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1376_, 0, v___x_1374_);
lean_ctor_set(v___x_1376_, 1, v___x_1375_);
v___x_1377_ = lp_pmll_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00PMLL_instReprSilo_repr_spec__1_spec__1_spec__2_spec__3(v_x_1365_, v___x_1376_, v_tail_1369_);
return v___x_1377_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_Std_Format_joinSep___at___00Array_repr___at___00PMLL_instReprSilo_repr_spec__1_spec__1(lean_object* v_x_1380_, lean_object* v_x_1381_){
_start:
{
if (lean_obj_tag(v_x_1380_) == 0)
{
lean_object* v___x_1382_; 
lean_dec(v_x_1381_);
v___x_1382_ = lean_box(0);
return v___x_1382_;
}
else
{
lean_object* v_tail_1383_; 
v_tail_1383_ = lean_ctor_get(v_x_1380_, 1);
if (lean_obj_tag(v_tail_1383_) == 0)
{
lean_object* v_head_1384_; lean_object* v___x_1385_; 
lean_dec(v_x_1381_);
v_head_1384_ = lean_ctor_get(v_x_1380_, 0);
lean_inc(v_head_1384_);
lean_dec_ref_known(v_x_1380_, 2);
v___x_1385_ = lp_pmll_PMLL_instReprSlot_repr___redArg(v_head_1384_);
return v___x_1385_;
}
else
{
lean_object* v_head_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; 
lean_inc(v_tail_1383_);
v_head_1386_ = lean_ctor_get(v_x_1380_, 0);
lean_inc(v_head_1386_);
lean_dec_ref_known(v_x_1380_, 2);
v___x_1387_ = lp_pmll_PMLL_instReprSlot_repr___redArg(v_head_1386_);
v___x_1388_ = lp_pmll_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00PMLL_instReprSilo_repr_spec__1_spec__1_spec__2(v_x_1381_, v___x_1387_, v_tail_1383_);
return v___x_1388_;
}
}
}
}
static lean_object* _init_lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1390_ = ((lean_object*)(lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__0));
v___x_1391_ = lean_string_length(v___x_1390_);
return v___x_1391_;
}
}
static lean_object* _init_lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__2(void){
_start:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1392_ = lean_obj_once(&lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__1, &lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__1_once, _init_lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__1);
v___x_1393_ = lean_nat_to_int(v___x_1392_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1(lean_object* v_xs_1399_){
_start:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; uint8_t v___x_1402_; 
v___x_1400_ = lean_array_get_size(v_xs_1399_);
v___x_1401_ = lean_unsigned_to_nat(0u);
v___x_1402_ = lean_nat_dec_eq(v___x_1400_, v___x_1401_);
if (v___x_1402_ == 0)
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_1403_ = lean_array_to_list(v_xs_1399_);
v___x_1404_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__5));
v___x_1405_ = lp_pmll_Std_Format_joinSep___at___00Array_repr___at___00PMLL_instReprSilo_repr_spec__1_spec__1(v___x_1403_, v___x_1404_);
v___x_1406_ = lean_obj_once(&lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__2, &lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__2_once, _init_lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__2);
v___x_1407_ = ((lean_object*)(lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__3));
v___x_1408_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1408_, 0, v___x_1407_);
lean_ctor_set(v___x_1408_, 1, v___x_1405_);
v___x_1409_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__10));
v___x_1410_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1408_);
lean_ctor_set(v___x_1410_, 1, v___x_1409_);
v___x_1411_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1406_);
lean_ctor_set(v___x_1411_, 1, v___x_1410_);
v___x_1412_ = l_Std_Format_fill(v___x_1411_);
return v___x_1412_;
}
else
{
lean_object* v___x_1413_; 
lean_dec_ref(v_xs_1399_);
v___x_1413_ = ((lean_object*)(lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__5));
return v___x_1413_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__0(lean_object* v_xs_1414_){
_start:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; uint8_t v___x_1417_; 
v___x_1415_ = lean_array_get_size(v_xs_1414_);
v___x_1416_ = lean_unsigned_to_nat(0u);
v___x_1417_ = lean_nat_dec_eq(v___x_1415_, v___x_1416_);
if (v___x_1417_ == 0)
{
lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1418_ = lean_array_to_list(v_xs_1414_);
v___x_1419_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__5));
v___x_1420_ = lp_pmll_Std_Format_joinSep___at___00List_repr_x27___at___00List_repr___at___00PMLL_instReprCert_repr_spec__0_spec__0_spec__1(v___x_1418_, v___x_1419_);
v___x_1421_ = lean_obj_once(&lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__2, &lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__2_once, _init_lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__2);
v___x_1422_ = ((lean_object*)(lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__3));
v___x_1423_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1422_);
lean_ctor_set(v___x_1423_, 1, v___x_1420_);
v___x_1424_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__10));
v___x_1425_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1423_);
lean_ctor_set(v___x_1425_, 1, v___x_1424_);
v___x_1426_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1421_);
lean_ctor_set(v___x_1426_, 1, v___x_1425_);
v___x_1427_ = l_Std_Format_fill(v___x_1426_);
return v___x_1427_;
}
else
{
lean_object* v___x_1428_; 
lean_dec_ref(v_xs_1414_);
v___x_1428_ = ((lean_object*)(lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1___closed__5));
return v___x_1428_;
}
}
}
static lean_object* _init_lp_pmll_PMLL_instReprSilo_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1438_ = lean_unsigned_to_nat(8u);
v___x_1439_ = lean_nat_to_int(v___x_1438_);
return v___x_1439_;
}
}
static lean_object* _init_lp_pmll_PMLL_instReprSilo_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1443_ = lean_unsigned_to_nat(9u);
v___x_1444_ = lean_nat_to_int(v___x_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprSilo_repr___redArg(lean_object* v_x_1445_){
_start:
{
lean_object* v_tree_1446_; lean_object* v_slots_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1480_; 
v_tree_1446_ = lean_ctor_get(v_x_1445_, 0);
v_slots_1447_ = lean_ctor_get(v_x_1445_, 1);
v_isSharedCheck_1480_ = !lean_is_exclusive(v_x_1445_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1449_ = v_x_1445_;
v_isShared_1450_ = v_isSharedCheck_1480_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_slots_1447_);
lean_inc(v_tree_1446_);
lean_dec(v_x_1445_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1480_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1456_; 
v___x_1451_ = ((lean_object*)(lp_pmll_PMLL_instReprCert_repr___redArg___closed__5));
v___x_1452_ = ((lean_object*)(lp_pmll_PMLL_instReprSilo_repr___redArg___closed__3));
v___x_1453_ = lean_obj_once(&lp_pmll_PMLL_instReprSilo_repr___redArg___closed__4, &lp_pmll_PMLL_instReprSilo_repr___redArg___closed__4_once, _init_lp_pmll_PMLL_instReprSilo_repr___redArg___closed__4);
v___x_1454_ = lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__0(v_tree_1446_);
if (v_isShared_1450_ == 0)
{
lean_ctor_set_tag(v___x_1449_, 4);
lean_ctor_set(v___x_1449_, 1, v___x_1454_);
lean_ctor_set(v___x_1449_, 0, v___x_1453_);
v___x_1456_ = v___x_1449_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v___x_1453_);
lean_ctor_set(v_reuseFailAlloc_1479_, 1, v___x_1454_);
v___x_1456_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
uint8_t v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1457_ = 0;
v___x_1458_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1458_, 0, v___x_1456_);
lean_ctor_set_uint8(v___x_1458_, sizeof(void*)*1, v___x_1457_);
v___x_1459_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1452_);
lean_ctor_set(v___x_1459_, 1, v___x_1458_);
v___x_1460_ = ((lean_object*)(lp_pmll_List_repr___at___00PMLL_instReprCert_repr_spec__1___redArg___closed__4));
v___x_1461_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1459_);
lean_ctor_set(v___x_1461_, 1, v___x_1460_);
v___x_1462_ = lean_box(1);
v___x_1463_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1463_, 0, v___x_1461_);
lean_ctor_set(v___x_1463_, 1, v___x_1462_);
v___x_1464_ = ((lean_object*)(lp_pmll_PMLL_instReprSilo_repr___redArg___closed__6));
v___x_1465_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1463_);
lean_ctor_set(v___x_1465_, 1, v___x_1464_);
v___x_1466_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1466_, 0, v___x_1465_);
lean_ctor_set(v___x_1466_, 1, v___x_1451_);
v___x_1467_ = lean_obj_once(&lp_pmll_PMLL_instReprSilo_repr___redArg___closed__7, &lp_pmll_PMLL_instReprSilo_repr___redArg___closed__7_once, _init_lp_pmll_PMLL_instReprSilo_repr___redArg___closed__7);
v___x_1468_ = lp_pmll_Array_repr___at___00PMLL_instReprSilo_repr_spec__1(v_slots_1447_);
v___x_1469_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1467_);
lean_ctor_set(v___x_1469_, 1, v___x_1468_);
v___x_1470_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1470_, 0, v___x_1469_);
lean_ctor_set_uint8(v___x_1470_, sizeof(void*)*1, v___x_1457_);
v___x_1471_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1471_, 0, v___x_1466_);
lean_ctor_set(v___x_1471_, 1, v___x_1470_);
v___x_1472_ = lean_obj_once(&lp_pmll_PMLL_instReprCert_repr___redArg___closed__21, &lp_pmll_PMLL_instReprCert_repr___redArg___closed__21_once, _init_lp_pmll_PMLL_instReprCert_repr___redArg___closed__21);
v___x_1473_ = ((lean_object*)(lp_pmll_PMLL_instReprCert_repr___redArg___closed__22));
v___x_1474_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1473_);
lean_ctor_set(v___x_1474_, 1, v___x_1471_);
v___x_1475_ = ((lean_object*)(lp_pmll_PMLL_instReprCert_repr___redArg___closed__23));
v___x_1476_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1476_, 0, v___x_1474_);
lean_ctor_set(v___x_1476_, 1, v___x_1475_);
v___x_1477_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1477_, 0, v___x_1472_);
lean_ctor_set(v___x_1477_, 1, v___x_1476_);
v___x_1478_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
lean_ctor_set_uint8(v___x_1478_, sizeof(void*)*1, v___x_1457_);
return v___x_1478_;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprSilo_repr(lean_object* v_x_1481_, lean_object* v_prec_1482_){
_start:
{
lean_object* v___x_1483_; 
v___x_1483_ = lp_pmll_PMLL_instReprSilo_repr___redArg(v_x_1481_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_instReprSilo_repr___boxed(lean_object* v_x_1484_, lean_object* v_prec_1485_){
_start:
{
lean_object* v_res_1486_; 
v_res_1486_ = lp_pmll_PMLL_instReprSilo_repr(v_x_1484_, v_prec_1485_);
lean_dec(v_prec_1485_);
return v_res_1486_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Silo_empty(lean_object* v_capacity_1489_){
_start:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1490_ = lean_unsigned_to_nat(2u);
v___x_1491_ = lean_nat_mul(v_capacity_1489_, v___x_1490_);
v___x_1492_ = lean_obj_once(&lp_pmll_PMLL_litVar___closed__0, &lp_pmll_PMLL_litVar___closed__0_once, _init_lp_pmll_PMLL_litVar___closed__0);
v___x_1493_ = lean_mk_array(v___x_1491_, v___x_1492_);
v___x_1494_ = ((lean_object*)(lp_pmll_PMLL_instInhabitedSlot_default));
v___x_1495_ = lean_mk_array(v_capacity_1489_, v___x_1494_);
v___x_1496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1493_);
lean_ctor_set(v___x_1496_, 1, v___x_1495_);
return v___x_1496_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Silo_record(lean_object* v_s_1497_, lean_object* v_index_1498_, lean_object* v_key_1499_, lean_object* v_content_1500_){
_start:
{
lean_object* v_tree_1501_; lean_object* v_slots_1502_; lean_object* v___x_1503_; uint8_t v___x_1504_; 
v_tree_1501_ = lean_ctor_get(v_s_1497_, 0);
v_slots_1502_ = lean_ctor_get(v_s_1497_, 1);
v___x_1503_ = lean_array_get_size(v_slots_1502_);
v___x_1504_ = lean_nat_dec_lt(v_index_1498_, v___x_1503_);
if (v___x_1504_ == 0)
{
lean_dec_ref(v_content_1500_);
lean_dec_ref(v_key_1499_);
return v_s_1497_;
}
else
{
lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1522_; 
lean_inc_ref(v_slots_1502_);
lean_inc_ref(v_tree_1501_);
v_isSharedCheck_1522_ = !lean_is_exclusive(v_s_1497_);
if (v_isSharedCheck_1522_ == 0)
{
lean_object* v_unused_1523_; lean_object* v_unused_1524_; 
v_unused_1523_ = lean_ctor_get(v_s_1497_, 1);
lean_dec(v_unused_1523_);
v_unused_1524_ = lean_ctor_get(v_s_1497_, 0);
lean_dec(v_unused_1524_);
v___x_1506_ = v_s_1497_;
v_isShared_1507_ = v_isSharedCheck_1522_;
goto v_resetjp_1505_;
}
else
{
lean_dec(v_s_1497_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1522_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v_slot_1510_; lean_object* v_slots_1511_; lean_object* v___x_1512_; uint8_t v___x_1513_; 
v___x_1508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1508_, 0, v_key_1499_);
v___x_1509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1509_, 0, v_content_1500_);
v_slot_1510_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_slot_1510_, 0, v___x_1508_);
lean_ctor_set(v_slot_1510_, 1, v___x_1509_);
lean_ctor_set_uint8(v_slot_1510_, sizeof(void*)*2, v___x_1504_);
v_slots_1511_ = lean_array_fset(v_slots_1502_, v_index_1498_, v_slot_1510_);
v___x_1512_ = lean_array_get_size(v_tree_1501_);
v___x_1513_ = lean_nat_dec_lt(v_index_1498_, v___x_1512_);
if (v___x_1513_ == 0)
{
lean_object* v___x_1515_; 
if (v_isShared_1507_ == 0)
{
lean_ctor_set(v___x_1506_, 1, v_slots_1511_);
v___x_1515_ = v___x_1506_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v_tree_1501_);
lean_ctor_set(v_reuseFailAlloc_1516_, 1, v_slots_1511_);
v___x_1515_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
return v___x_1515_;
}
}
else
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1520_; 
v___x_1517_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__7, &lp_pmll_PMLL_instReprFlag_repr___closed__7_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__7);
v___x_1518_ = lean_array_fset(v_tree_1501_, v_index_1498_, v___x_1517_);
if (v_isShared_1507_ == 0)
{
lean_ctor_set(v___x_1506_, 1, v_slots_1511_);
lean_ctor_set(v___x_1506_, 0, v___x_1518_);
v___x_1520_ = v___x_1506_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v___x_1518_);
lean_ctor_set(v_reuseFailAlloc_1521_, 1, v_slots_1511_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_Silo_record___boxed(lean_object* v_s_1525_, lean_object* v_index_1526_, lean_object* v_key_1527_, lean_object* v_content_1528_){
_start:
{
lean_object* v_res_1529_; 
v_res_1529_ = lp_pmll_PMLL_Silo_record(v_s_1525_, v_index_1526_, v_key_1527_, v_content_1528_);
lean_dec(v_index_1526_);
return v_res_1529_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_recordModel_go(lean_object* v_s_1535_, lean_object* v_i_1536_, lean_object* v_rest_1537_){
_start:
{
if (lean_obj_tag(v_rest_1537_) == 0)
{
lean_dec(v_i_1536_);
return v_s_1535_;
}
else
{
lean_object* v_head_1538_; lean_object* v_tail_1539_; lean_object* v___y_1541_; 
v_head_1538_ = lean_ctor_get(v_rest_1537_, 0);
v_tail_1539_ = lean_ctor_get(v_rest_1537_, 1);
if (lean_obj_tag(v_head_1538_) == 0)
{
lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1554_ = lean_unsigned_to_nat(1u);
v___x_1555_ = lean_nat_add(v_i_1536_, v___x_1554_);
lean_dec(v_i_1536_);
v_i_1536_ = v___x_1555_;
v_rest_1537_ = v_tail_1539_;
goto _start;
}
else
{
lean_object* v_val_1557_; uint8_t v___x_1558_; 
v_val_1557_ = lean_ctor_get(v_head_1538_, 0);
v___x_1558_ = lean_unbox(v_val_1557_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1559_; 
v___x_1559_ = ((lean_object*)(lp_pmll_PMLL_recordModel_go___closed__3));
v___y_1541_ = v___x_1559_;
goto v___jp_1540_;
}
else
{
lean_object* v___x_1560_; 
v___x_1560_ = ((lean_object*)(lp_pmll_PMLL_recordModel_go___closed__4));
v___y_1541_ = v___x_1560_;
goto v___jp_1540_;
}
}
v___jp_1540_:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; 
v___x_1542_ = ((lean_object*)(lp_pmll_PMLL_recordModel_go___closed__0));
v___x_1543_ = lean_unsigned_to_nat(1u);
v___x_1544_ = lean_nat_add(v_i_1536_, v___x_1543_);
lean_inc(v___x_1544_);
v___x_1545_ = l_Nat_reprFast(v___x_1544_);
v___x_1546_ = lean_string_append(v___x_1542_, v___x_1545_);
v___x_1547_ = ((lean_object*)(lp_pmll_PMLL_recordModel_go___closed__1));
v___x_1548_ = lean_string_append(v___x_1547_, v___x_1545_);
lean_dec_ref(v___x_1545_);
v___x_1549_ = ((lean_object*)(lp_pmll_PMLL_recordModel_go___closed__2));
v___x_1550_ = lean_string_append(v___x_1548_, v___x_1549_);
v___x_1551_ = lean_string_append(v___x_1550_, v___y_1541_);
v___x_1552_ = lp_pmll_PMLL_Silo_record(v_s_1535_, v_i_1536_, v___x_1546_, v___x_1551_);
lean_dec(v_i_1536_);
v_s_1535_ = v___x_1552_;
v_i_1536_ = v___x_1544_;
v_rest_1537_ = v_tail_1539_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_recordModel_go___boxed(lean_object* v_s_1561_, lean_object* v_i_1562_, lean_object* v_rest_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = lp_pmll_PMLL_recordModel_go(v_s_1561_, v_i_1562_, v_rest_1563_);
lean_dec(v_rest_1563_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_recordModel(lean_object* v_c_1565_){
_start:
{
lean_object* v_n_1566_; lean_object* v_a_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
v_n_1566_ = lean_ctor_get(v_c_1565_, 0);
v_a_1567_ = lean_ctor_get(v_c_1565_, 2);
v___x_1568_ = lean_unsigned_to_nat(1u);
v___x_1569_ = lean_nat_add(v_n_1566_, v___x_1568_);
v___x_1570_ = lp_pmll_PMLL_Silo_empty(v___x_1569_);
v___x_1571_ = lean_unsigned_to_nat(0u);
v___x_1572_ = lp_pmll_PMLL_recordModel_go(v___x_1570_, v___x_1571_, v_a_1567_);
return v___x_1572_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_recordModel___boxed(lean_object* v_c_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = lp_pmll_PMLL_recordModel(v_c_1573_);
lean_dec_ref(v_c_1573_);
return v_res_1574_;
}
}
LEAN_EXPORT uint8_t lp_pmll_instBEqOption_beq___at___00PMLL_peek_spec__0(lean_object* v_x_1575_, lean_object* v_x_1576_){
_start:
{
if (lean_obj_tag(v_x_1575_) == 0)
{
if (lean_obj_tag(v_x_1576_) == 0)
{
uint8_t v___x_1577_; 
v___x_1577_ = 1;
return v___x_1577_;
}
else
{
uint8_t v___x_1578_; 
v___x_1578_ = 0;
return v___x_1578_;
}
}
else
{
if (lean_obj_tag(v_x_1576_) == 0)
{
uint8_t v___x_1579_; 
v___x_1579_ = 0;
return v___x_1579_;
}
else
{
lean_object* v_val_1580_; lean_object* v_val_1581_; uint8_t v___x_1582_; 
v_val_1580_ = lean_ctor_get(v_x_1575_, 0);
v_val_1581_ = lean_ctor_get(v_x_1576_, 0);
v___x_1582_ = lean_string_dec_eq(v_val_1580_, v_val_1581_);
return v___x_1582_;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_instBEqOption_beq___at___00PMLL_peek_spec__0___boxed(lean_object* v_x_1583_, lean_object* v_x_1584_){
_start:
{
uint8_t v_res_1585_; lean_object* v_r_1586_; 
v_res_1585_ = lp_pmll_instBEqOption_beq___at___00PMLL_peek_spec__0(v_x_1583_, v_x_1584_);
lean_dec(v_x_1584_);
lean_dec(v_x_1583_);
v_r_1586_ = lean_box(v_res_1585_);
return v_r_1586_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00PMLL_peek_spec__1(lean_object* v_key_1590_, lean_object* v_as_1591_, size_t v_sz_1592_, size_t v_i_1593_, lean_object* v_b_1594_){
_start:
{
lean_object* v_a_1596_; uint8_t v___x_1600_; 
v___x_1600_ = lean_usize_dec_lt(v_i_1593_, v_sz_1592_);
if (v___x_1600_ == 0)
{
lean_dec_ref(v_key_1590_);
lean_inc_ref(v_b_1594_);
return v_b_1594_;
}
else
{
lean_object* v_a_1601_; lean_object* v_key_1602_; lean_object* v_content_1603_; uint8_t v_resolved_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v_a_1601_ = lean_array_uget_borrowed(v_as_1591_, v_i_1593_);
v_key_1602_ = lean_ctor_get(v_a_1601_, 0);
v_content_1603_ = lean_ctor_get(v_a_1601_, 1);
v_resolved_1604_ = lean_ctor_get_uint8(v_a_1601_, sizeof(void*)*2);
v___x_1605_ = lean_box(0);
v___x_1606_ = ((lean_object*)(lp_pmll___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00PMLL_peek_spec__1___closed__0));
if (v_resolved_1604_ == 0)
{
v_a_1596_ = v___x_1606_;
goto v___jp_1595_;
}
else
{
lean_object* v___x_1607_; uint8_t v___x_1608_; 
lean_inc_ref(v_key_1590_);
v___x_1607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1607_, 0, v_key_1590_);
v___x_1608_ = lp_pmll_instBEqOption_beq___at___00PMLL_peek_spec__0(v_key_1602_, v___x_1607_);
lean_dec_ref_known(v___x_1607_, 1);
if (v___x_1608_ == 0)
{
v_a_1596_ = v___x_1606_;
goto v___jp_1595_;
}
else
{
if (lean_obj_tag(v_content_1603_) == 1)
{
lean_object* v___x_1609_; lean_object* v___x_1610_; 
lean_dec_ref(v_key_1590_);
lean_inc_ref(v_content_1603_);
v___x_1609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1609_, 0, v_content_1603_);
v___x_1610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1609_);
lean_ctor_set(v___x_1610_, 1, v___x_1605_);
return v___x_1610_;
}
else
{
v_a_1596_ = v___x_1606_;
goto v___jp_1595_;
}
}
}
}
v___jp_1595_:
{
size_t v___x_1597_; size_t v___x_1598_; 
v___x_1597_ = ((size_t)1ULL);
v___x_1598_ = lean_usize_add(v_i_1593_, v___x_1597_);
v_i_1593_ = v___x_1598_;
v_b_1594_ = v_a_1596_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00PMLL_peek_spec__1___boxed(lean_object* v_key_1611_, lean_object* v_as_1612_, lean_object* v_sz_1613_, lean_object* v_i_1614_, lean_object* v_b_1615_){
_start:
{
size_t v_sz_boxed_1616_; size_t v_i_boxed_1617_; lean_object* v_res_1618_; 
v_sz_boxed_1616_ = lean_unbox_usize(v_sz_1613_);
lean_dec(v_sz_1613_);
v_i_boxed_1617_ = lean_unbox_usize(v_i_1614_);
lean_dec(v_i_1614_);
v_res_1618_ = lp_pmll___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00PMLL_peek_spec__1(v_key_1611_, v_as_1612_, v_sz_boxed_1616_, v_i_boxed_1617_, v_b_1615_);
lean_dec_ref(v_b_1615_);
lean_dec_ref(v_as_1612_);
return v_res_1618_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_peek(lean_object* v_s_1619_, lean_object* v_key_1620_){
_start:
{
lean_object* v_slots_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; size_t v_sz_1624_; size_t v___x_1625_; lean_object* v___x_1626_; lean_object* v_fst_1627_; 
v_slots_1621_ = lean_ctor_get(v_s_1619_, 1);
v___x_1622_ = lean_box(0);
v___x_1623_ = ((lean_object*)(lp_pmll___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00PMLL_peek_spec__1___closed__0));
v_sz_1624_ = lean_array_size(v_slots_1621_);
v___x_1625_ = ((size_t)0ULL);
v___x_1626_ = lp_pmll___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00PMLL_peek_spec__1(v_key_1620_, v_slots_1621_, v_sz_1624_, v___x_1625_, v___x_1623_);
v_fst_1627_ = lean_ctor_get(v___x_1626_, 0);
lean_inc(v_fst_1627_);
lean_dec_ref(v___x_1626_);
if (lean_obj_tag(v_fst_1627_) == 0)
{
return v___x_1622_;
}
else
{
lean_object* v_val_1628_; 
v_val_1628_ = lean_ctor_get(v_fst_1627_, 0);
lean_inc(v_val_1628_);
lean_dec_ref_known(v_fst_1627_, 1);
return v_val_1628_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_peek___boxed(lean_object* v_s_1629_, lean_object* v_key_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = lp_pmll_PMLL_peek(v_s_1629_, v_key_1630_);
lean_dec_ref(v_s_1629_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_mapTR_loop___at___00PMLL_php32_spec__0___lam__0(lean_object* v_p_1632_, lean_object* v_h_1633_){
_start:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; 
v___x_1634_ = lean_nat_to_int(v_p_1632_);
v___x_1635_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__6, &lp_pmll_PMLL_instReprFlag_repr___closed__6_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__6);
v___x_1636_ = lean_int_mul(v___x_1634_, v___x_1635_);
lean_dec(v___x_1634_);
v___x_1637_ = lean_nat_to_int(v_h_1633_);
v___x_1638_ = lean_int_add(v___x_1636_, v___x_1637_);
lean_dec(v___x_1637_);
lean_dec(v___x_1636_);
v___x_1639_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__7, &lp_pmll_PMLL_instReprFlag_repr___closed__7_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__7);
v___x_1640_ = lean_int_add(v___x_1638_, v___x_1639_);
lean_dec(v___x_1638_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1_spec__2___redArg(lean_object* v_a_1641_, lean_object* v_a_1642_, lean_object* v_range_1643_, lean_object* v_b_1644_, lean_object* v_i_1645_){
_start:
{
lean_object* v_stop_1646_; lean_object* v_step_1647_; uint8_t v___x_1648_; 
v_stop_1646_ = lean_ctor_get(v_range_1643_, 1);
v_step_1647_ = lean_ctor_get(v_range_1643_, 2);
v___x_1648_ = lean_nat_dec_lt(v_i_1645_, v_stop_1646_);
if (v___x_1648_ == 0)
{
lean_dec(v_i_1645_);
lean_dec(v_a_1642_);
lean_dec(v_a_1641_);
return v_b_1644_;
}
else
{
lean_object* v_pairs_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v_pairs_1649_ = lean_box(0);
lean_inc_n(v_a_1642_, 2);
lean_inc(v_a_1641_);
v___x_1650_ = lp_pmll_List_mapTR_loop___at___00PMLL_php32_spec__0___lam__0(v_a_1641_, v_a_1642_);
v___x_1651_ = lean_int_neg(v___x_1650_);
lean_dec(v___x_1650_);
lean_inc(v_i_1645_);
v___x_1652_ = lp_pmll_List_mapTR_loop___at___00PMLL_php32_spec__0___lam__0(v_i_1645_, v_a_1642_);
v___x_1653_ = lean_int_neg(v___x_1652_);
lean_dec(v___x_1652_);
v___x_1654_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1653_);
lean_ctor_set(v___x_1654_, 1, v_pairs_1649_);
v___x_1655_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1651_);
lean_ctor_set(v___x_1655_, 1, v___x_1654_);
v___x_1656_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1655_);
lean_ctor_set(v___x_1656_, 1, v_pairs_1649_);
v___x_1657_ = l_List_appendTR___redArg(v_b_1644_, v___x_1656_);
v___x_1658_ = lean_nat_add(v_i_1645_, v_step_1647_);
lean_dec(v_i_1645_);
v_b_1644_ = v___x_1657_;
v_i_1645_ = v___x_1658_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1_spec__2___redArg___boxed(lean_object* v_a_1660_, lean_object* v_a_1661_, lean_object* v_range_1662_, lean_object* v_b_1663_, lean_object* v_i_1664_){
_start:
{
lean_object* v_res_1665_; 
v_res_1665_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1_spec__2___redArg(v_a_1660_, v_a_1661_, v_range_1662_, v_b_1663_, v_i_1664_);
lean_dec_ref(v_range_1662_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1___redArg(lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_range_1668_, lean_object* v_b_1669_, lean_object* v_i_1670_){
_start:
{
lean_object* v_stop_1671_; lean_object* v_step_1672_; uint8_t v___x_1673_; 
v_stop_1671_ = lean_ctor_get(v_range_1668_, 1);
v_step_1672_ = lean_ctor_get(v_range_1668_, 2);
v___x_1673_ = lean_nat_dec_lt(v_i_1670_, v_stop_1671_);
if (v___x_1673_ == 0)
{
lean_dec(v_i_1670_);
lean_dec(v_a_1667_);
lean_dec(v_a_1666_);
return v_b_1669_;
}
else
{
lean_object* v_pairs_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
v_pairs_1674_ = lean_box(0);
lean_inc_n(v_a_1667_, 2);
lean_inc(v_a_1666_);
v___x_1675_ = lp_pmll_List_mapTR_loop___at___00PMLL_php32_spec__0___lam__0(v_a_1666_, v_a_1667_);
v___x_1676_ = lean_int_neg(v___x_1675_);
lean_dec(v___x_1675_);
lean_inc(v_i_1670_);
v___x_1677_ = lp_pmll_List_mapTR_loop___at___00PMLL_php32_spec__0___lam__0(v_i_1670_, v_a_1667_);
v___x_1678_ = lean_int_neg(v___x_1677_);
lean_dec(v___x_1677_);
v___x_1679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
lean_ctor_set(v___x_1679_, 1, v_pairs_1674_);
v___x_1680_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1680_, 0, v___x_1676_);
lean_ctor_set(v___x_1680_, 1, v___x_1679_);
v___x_1681_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1680_);
lean_ctor_set(v___x_1681_, 1, v_pairs_1674_);
v___x_1682_ = l_List_appendTR___redArg(v_b_1669_, v___x_1681_);
v___x_1683_ = lean_nat_add(v_i_1670_, v_step_1672_);
lean_dec(v_i_1670_);
v___x_1684_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1_spec__2___redArg(v_a_1666_, v_a_1667_, v_range_1668_, v___x_1682_, v___x_1683_);
return v___x_1684_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1___redArg___boxed(lean_object* v_a_1685_, lean_object* v_a_1686_, lean_object* v_range_1687_, lean_object* v_b_1688_, lean_object* v_i_1689_){
_start:
{
lean_object* v_res_1690_; 
v_res_1690_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1___redArg(v_a_1685_, v_a_1686_, v_range_1687_, v_b_1688_, v_i_1689_);
lean_dec_ref(v_range_1687_);
return v_res_1690_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__2___redArg(lean_object* v_a_1691_, lean_object* v_range_1692_, lean_object* v_b_1693_, lean_object* v_i_1694_){
_start:
{
lean_object* v_stop_1695_; lean_object* v_step_1696_; uint8_t v___x_1697_; 
v_stop_1695_ = lean_ctor_get(v_range_1692_, 1);
v_step_1696_ = lean_ctor_get(v_range_1692_, 2);
v___x_1697_ = lean_nat_dec_lt(v_i_1694_, v_stop_1695_);
if (v___x_1697_ == 0)
{
lean_dec(v_i_1694_);
lean_dec(v_a_1691_);
return v_b_1693_;
}
else
{
lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
v___x_1698_ = lean_unsigned_to_nat(1u);
v___x_1699_ = lean_unsigned_to_nat(3u);
v___x_1700_ = lean_nat_add(v_i_1694_, v___x_1698_);
lean_inc(v___x_1700_);
v___x_1701_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1700_);
lean_ctor_set(v___x_1701_, 1, v___x_1699_);
lean_ctor_set(v___x_1701_, 2, v___x_1698_);
lean_inc(v_a_1691_);
lean_inc(v_i_1694_);
v___x_1702_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1___redArg(v_i_1694_, v_a_1691_, v___x_1701_, v_b_1693_, v___x_1700_);
lean_dec_ref_known(v___x_1701_, 3);
v___x_1703_ = lean_nat_add(v_i_1694_, v_step_1696_);
lean_dec(v_i_1694_);
v_b_1693_ = v___x_1702_;
v_i_1694_ = v___x_1703_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__2___redArg___boxed(lean_object* v_a_1705_, lean_object* v_range_1706_, lean_object* v_b_1707_, lean_object* v_i_1708_){
_start:
{
lean_object* v_res_1709_; 
v_res_1709_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__2___redArg(v_a_1705_, v_range_1706_, v_b_1707_, v_i_1708_);
lean_dec_ref(v_range_1706_);
return v_res_1709_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__3___redArg(lean_object* v_range_1714_, lean_object* v_b_1715_, lean_object* v_i_1716_){
_start:
{
lean_object* v_stop_1717_; lean_object* v_step_1718_; uint8_t v___x_1719_; 
v_stop_1717_ = lean_ctor_get(v_range_1714_, 1);
v_step_1718_ = lean_ctor_get(v_range_1714_, 2);
v___x_1719_ = lean_nat_dec_lt(v_i_1716_, v_stop_1717_);
if (v___x_1719_ == 0)
{
lean_dec(v_i_1716_);
return v_b_1715_;
}
else
{
lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1720_ = lean_unsigned_to_nat(0u);
v___x_1721_ = ((lean_object*)(lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__3___redArg___closed__0));
lean_inc(v_i_1716_);
v___x_1722_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__2___redArg(v_i_1716_, v___x_1721_, v_b_1715_, v___x_1720_);
v___x_1723_ = lean_nat_add(v_i_1716_, v_step_1718_);
lean_dec(v_i_1716_);
v_b_1715_ = v___x_1722_;
v_i_1716_ = v___x_1723_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__3___redArg___boxed(lean_object* v_range_1725_, lean_object* v_b_1726_, lean_object* v_i_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__3___redArg(v_range_1725_, v_b_1726_, v_i_1727_);
lean_dec_ref(v_range_1725_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_mapTR_loop___at___00List_mapTR_loop___at___00PMLL_php32_spec__0_spec__0(lean_object* v_a_1729_, lean_object* v_a_1730_){
_start:
{
if (lean_obj_tag(v_a_1729_) == 0)
{
lean_object* v___x_1731_; 
v___x_1731_ = l_List_reverse___redArg(v_a_1730_);
return v___x_1731_;
}
else
{
lean_object* v_head_1732_; lean_object* v_tail_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1748_; 
v_head_1732_ = lean_ctor_get(v_a_1729_, 0);
v_tail_1733_ = lean_ctor_get(v_a_1729_, 1);
v_isSharedCheck_1748_ = !lean_is_exclusive(v_a_1729_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1735_ = v_a_1729_;
v_isShared_1736_ = v_isSharedCheck_1748_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_tail_1733_);
lean_inc(v_head_1732_);
lean_dec(v_a_1729_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1748_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1743_; 
v___x_1737_ = lean_unsigned_to_nat(0u);
lean_inc(v_head_1732_);
v___x_1738_ = lp_pmll_List_mapTR_loop___at___00PMLL_php32_spec__0___lam__0(v_head_1732_, v___x_1737_);
v___x_1739_ = lean_unsigned_to_nat(1u);
v___x_1740_ = lp_pmll_List_mapTR_loop___at___00PMLL_php32_spec__0___lam__0(v_head_1732_, v___x_1739_);
v___x_1741_ = lean_box(0);
if (v_isShared_1736_ == 0)
{
lean_ctor_set(v___x_1735_, 1, v___x_1741_);
lean_ctor_set(v___x_1735_, 0, v___x_1740_);
v___x_1743_ = v___x_1735_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v___x_1740_);
lean_ctor_set(v_reuseFailAlloc_1747_, 1, v___x_1741_);
v___x_1743_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1744_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1744_, 0, v___x_1738_);
lean_ctor_set(v___x_1744_, 1, v___x_1743_);
v___x_1745_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1744_);
lean_ctor_set(v___x_1745_, 1, v_a_1730_);
v_a_1729_ = v_tail_1733_;
v_a_1730_ = v___x_1745_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_mapTR_loop___at___00PMLL_php32_spec__0(lean_object* v_a_1749_, lean_object* v_a_1750_){
_start:
{
if (lean_obj_tag(v_a_1749_) == 0)
{
lean_object* v___x_1751_; 
v___x_1751_ = l_List_reverse___redArg(v_a_1750_);
return v___x_1751_;
}
else
{
lean_object* v_head_1752_; lean_object* v_tail_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1768_; 
v_head_1752_ = lean_ctor_get(v_a_1749_, 0);
v_tail_1753_ = lean_ctor_get(v_a_1749_, 1);
v_isSharedCheck_1768_ = !lean_is_exclusive(v_a_1749_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1755_ = v_a_1749_;
v_isShared_1756_ = v_isSharedCheck_1768_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_tail_1753_);
lean_inc(v_head_1752_);
lean_dec(v_a_1749_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1768_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1763_; 
v___x_1757_ = lean_unsigned_to_nat(0u);
lean_inc(v_head_1752_);
v___x_1758_ = lp_pmll_List_mapTR_loop___at___00PMLL_php32_spec__0___lam__0(v_head_1752_, v___x_1757_);
v___x_1759_ = lean_unsigned_to_nat(1u);
v___x_1760_ = lp_pmll_List_mapTR_loop___at___00PMLL_php32_spec__0___lam__0(v_head_1752_, v___x_1759_);
v___x_1761_ = lean_box(0);
if (v_isShared_1756_ == 0)
{
lean_ctor_set(v___x_1755_, 1, v___x_1761_);
lean_ctor_set(v___x_1755_, 0, v___x_1760_);
v___x_1763_ = v___x_1755_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1760_);
lean_ctor_set(v_reuseFailAlloc_1767_, 1, v___x_1761_);
v___x_1763_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1758_);
lean_ctor_set(v___x_1764_, 1, v___x_1763_);
v___x_1765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1764_);
lean_ctor_set(v___x_1765_, 1, v_a_1750_);
v___x_1766_ = lp_pmll_List_mapTR_loop___at___00List_mapTR_loop___at___00PMLL_php32_spec__0_spec__0(v_tail_1753_, v___x_1765_);
return v___x_1766_;
}
}
}
}
}
static lean_object* _init_lp_pmll_PMLL_php32___closed__0(void){
_start:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1769_ = lean_unsigned_to_nat(3u);
v___x_1770_ = l_List_range(v___x_1769_);
return v___x_1770_;
}
}
static lean_object* _init_lp_pmll_PMLL_php32___closed__1(void){
_start:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v_atleast_1773_; 
v___x_1771_ = lean_box(0);
v___x_1772_ = lean_obj_once(&lp_pmll_PMLL_php32___closed__0, &lp_pmll_PMLL_php32___closed__0_once, _init_lp_pmll_PMLL_php32___closed__0);
v_atleast_1773_ = lp_pmll_List_mapTR_loop___at___00PMLL_php32_spec__0(v___x_1772_, v___x_1771_);
return v_atleast_1773_;
}
}
static lean_object* _init_lp_pmll_PMLL_php32___closed__3(void){
_start:
{
lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
v___x_1778_ = lean_unsigned_to_nat(0u);
v___x_1779_ = lean_box(0);
v___x_1780_ = ((lean_object*)(lp_pmll_PMLL_php32___closed__2));
v___x_1781_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__3___redArg(v___x_1780_, v___x_1779_, v___x_1778_);
return v___x_1781_;
}
}
static lean_object* _init_lp_pmll_PMLL_php32___closed__4(void){
_start:
{
lean_object* v___x_1782_; lean_object* v_atleast_1783_; lean_object* v___x_1784_; 
v___x_1782_ = lean_obj_once(&lp_pmll_PMLL_php32___closed__3, &lp_pmll_PMLL_php32___closed__3_once, _init_lp_pmll_PMLL_php32___closed__3);
v_atleast_1783_ = lean_obj_once(&lp_pmll_PMLL_php32___closed__1, &lp_pmll_PMLL_php32___closed__1_once, _init_lp_pmll_PMLL_php32___closed__1);
v___x_1784_ = l_List_appendTR___redArg(v_atleast_1783_, v___x_1782_);
return v___x_1784_;
}
}
static lean_object* _init_lp_pmll_PMLL_php32(void){
_start:
{
lean_object* v___x_1785_; 
v___x_1785_ = lean_obj_once(&lp_pmll_PMLL_php32___closed__4, &lp_pmll_PMLL_php32___closed__4_once, _init_lp_pmll_PMLL_php32___closed__4);
return v___x_1785_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1(lean_object* v_a_1786_, lean_object* v_a_1787_, lean_object* v_range_1788_, lean_object* v_b_1789_, lean_object* v_i_1790_, lean_object* v_hs_1791_, lean_object* v_hl_1792_){
_start:
{
lean_object* v___x_1793_; 
v___x_1793_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1___redArg(v_a_1786_, v_a_1787_, v_range_1788_, v_b_1789_, v_i_1790_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1___boxed(lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_range_1796_, lean_object* v_b_1797_, lean_object* v_i_1798_, lean_object* v_hs_1799_, lean_object* v_hl_1800_){
_start:
{
lean_object* v_res_1801_; 
v_res_1801_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1(v_a_1794_, v_a_1795_, v_range_1796_, v_b_1797_, v_i_1798_, v_hs_1799_, v_hl_1800_);
lean_dec_ref(v_range_1796_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__2(lean_object* v_a_1802_, lean_object* v_range_1803_, lean_object* v_b_1804_, lean_object* v_i_1805_, lean_object* v_hs_1806_, lean_object* v_hl_1807_){
_start:
{
lean_object* v___x_1808_; 
v___x_1808_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__2___redArg(v_a_1802_, v_range_1803_, v_b_1804_, v_i_1805_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__2___boxed(lean_object* v_a_1809_, lean_object* v_range_1810_, lean_object* v_b_1811_, lean_object* v_i_1812_, lean_object* v_hs_1813_, lean_object* v_hl_1814_){
_start:
{
lean_object* v_res_1815_; 
v_res_1815_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__2(v_a_1809_, v_range_1810_, v_b_1811_, v_i_1812_, v_hs_1813_, v_hl_1814_);
lean_dec_ref(v_range_1810_);
return v_res_1815_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__3(lean_object* v_range_1816_, lean_object* v_b_1817_, lean_object* v_i_1818_, lean_object* v_hs_1819_, lean_object* v_hl_1820_){
_start:
{
lean_object* v___x_1821_; 
v___x_1821_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__3___redArg(v_range_1816_, v_b_1817_, v_i_1818_);
return v___x_1821_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__3___boxed(lean_object* v_range_1822_, lean_object* v_b_1823_, lean_object* v_i_1824_, lean_object* v_hs_1825_, lean_object* v_hl_1826_){
_start:
{
lean_object* v_res_1827_; 
v_res_1827_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__3(v_range_1822_, v_b_1823_, v_i_1824_, v_hs_1825_, v_hl_1826_);
lean_dec_ref(v_range_1822_);
return v_res_1827_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1_spec__2(lean_object* v_a_1828_, lean_object* v_a_1829_, lean_object* v_range_1830_, lean_object* v_b_1831_, lean_object* v_i_1832_, lean_object* v_hs_1833_, lean_object* v_hl_1834_){
_start:
{
lean_object* v___x_1835_; 
v___x_1835_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1_spec__2___redArg(v_a_1828_, v_a_1829_, v_range_1830_, v_b_1831_, v_i_1832_);
return v___x_1835_;
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1_spec__2___boxed(lean_object* v_a_1836_, lean_object* v_a_1837_, lean_object* v_range_1838_, lean_object* v_b_1839_, lean_object* v_i_1840_, lean_object* v_hs_1841_, lean_object* v_hl_1842_){
_start:
{
lean_object* v_res_1843_; 
v_res_1843_ = lp_pmll___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00PMLL_php32_spec__1_spec__2(v_a_1836_, v_a_1837_, v_range_1838_, v_b_1839_, v_i_1840_, v_hs_1841_, v_hl_1842_);
lean_dec_ref(v_range_1838_);
return v_res_1843_;
}
}
LEAN_EXPORT lean_object* lp_pmll_List_mapTR_loop___at___00PMLL_decode6_spec__0(lean_object* v_mask_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_){
_start:
{
if (lean_obj_tag(v_a_1845_) == 0)
{
lean_object* v___x_1847_; 
v___x_1847_ = l_List_reverse___redArg(v_a_1846_);
return v___x_1847_;
}
else
{
lean_object* v_head_1848_; lean_object* v_tail_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1863_; 
v_head_1848_ = lean_ctor_get(v_a_1845_, 0);
v_tail_1849_ = lean_ctor_get(v_a_1845_, 1);
v_isSharedCheck_1863_ = !lean_is_exclusive(v_a_1845_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1851_ = v_a_1845_;
v_isShared_1852_ = v_isSharedCheck_1863_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_tail_1849_);
lean_inc(v_head_1848_);
lean_dec(v_a_1845_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1863_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; uint8_t v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1860_; 
v___x_1853_ = lean_nat_shiftr(v_mask_1844_, v_head_1848_);
lean_dec(v_head_1848_);
v___x_1854_ = lean_unsigned_to_nat(1u);
v___x_1855_ = lean_nat_land(v___x_1853_, v___x_1854_);
lean_dec(v___x_1853_);
v___x_1856_ = lean_nat_dec_eq(v___x_1855_, v___x_1854_);
lean_dec(v___x_1855_);
v___x_1857_ = lean_box(v___x_1856_);
v___x_1858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1857_);
if (v_isShared_1852_ == 0)
{
lean_ctor_set(v___x_1851_, 1, v_a_1846_);
lean_ctor_set(v___x_1851_, 0, v___x_1858_);
v___x_1860_ = v___x_1851_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v___x_1858_);
lean_ctor_set(v_reuseFailAlloc_1862_, 1, v_a_1846_);
v___x_1860_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
v_a_1845_ = v_tail_1849_;
v_a_1846_ = v___x_1860_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_mapTR_loop___at___00PMLL_decode6_spec__0___boxed(lean_object* v_mask_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_){
_start:
{
lean_object* v_res_1867_; 
v_res_1867_ = lp_pmll_List_mapTR_loop___at___00PMLL_decode6_spec__0(v_mask_1864_, v_a_1865_, v_a_1866_);
lean_dec(v_mask_1864_);
return v_res_1867_;
}
}
static lean_object* _init_lp_pmll_PMLL_decode6___closed__0(void){
_start:
{
lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1868_ = lean_unsigned_to_nat(6u);
v___x_1869_ = l_List_range(v___x_1868_);
return v___x_1869_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_decode6(lean_object* v_mask_1870_){
_start:
{
lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1871_ = lean_obj_once(&lp_pmll_PMLL_decode6___closed__0, &lp_pmll_PMLL_decode6___closed__0_once, _init_lp_pmll_PMLL_decode6___closed__0);
v___x_1872_ = lean_box(0);
v___x_1873_ = lp_pmll_List_mapTR_loop___at___00PMLL_decode6_spec__0(v_mask_1870_, v___x_1871_, v___x_1872_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_decode6___boxed(lean_object* v_mask_1874_){
_start:
{
lean_object* v_res_1875_; 
v_res_1875_ = lp_pmll_PMLL_decode6(v_mask_1874_);
lean_dec(v_mask_1874_);
return v_res_1875_;
}
}
LEAN_EXPORT uint8_t lp_pmll_List_all___at___00PMLL_php32AllConflict_spec__0(lean_object* v_x_1876_){
_start:
{
if (lean_obj_tag(v_x_1876_) == 0)
{
uint8_t v___x_1877_; 
v___x_1877_ = 1;
return v___x_1877_;
}
else
{
lean_object* v_head_1878_; lean_object* v_tail_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; uint8_t v___x_1883_; 
v_head_1878_ = lean_ctor_get(v_x_1876_, 0);
v_tail_1879_ = lean_ctor_get(v_x_1876_, 1);
v___x_1880_ = lean_unsigned_to_nat(6u);
v___x_1881_ = lp_pmll_PMLL_php32;
v___x_1882_ = lp_pmll_PMLL_decode6(v_head_1878_);
v___x_1883_ = lp_pmll_List_any___at___00PMLL_checkConflict_spec__0(v___x_1880_, v___x_1882_, v___x_1881_);
lean_dec(v___x_1882_);
if (v___x_1883_ == 0)
{
return v___x_1883_;
}
else
{
v_x_1876_ = v_tail_1879_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_List_all___at___00PMLL_php32AllConflict_spec__0___boxed(lean_object* v_x_1885_){
_start:
{
uint8_t v_res_1886_; lean_object* v_r_1887_; 
v_res_1886_ = lp_pmll_List_all___at___00PMLL_php32AllConflict_spec__0(v_x_1885_);
lean_dec(v_x_1885_);
v_r_1887_ = lean_box(v_res_1886_);
return v_r_1887_;
}
}
static lean_object* _init_lp_pmll_PMLL_php32AllConflict___closed__0(void){
_start:
{
lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1888_ = lean_unsigned_to_nat(64u);
v___x_1889_ = l_List_range(v___x_1888_);
return v___x_1889_;
}
}
static uint8_t _init_lp_pmll_PMLL_php32AllConflict___closed__1(void){
_start:
{
lean_object* v___x_1890_; uint8_t v___x_1891_; 
v___x_1890_ = lean_obj_once(&lp_pmll_PMLL_php32AllConflict___closed__0, &lp_pmll_PMLL_php32AllConflict___closed__0_once, _init_lp_pmll_PMLL_php32AllConflict___closed__0);
v___x_1891_ = lp_pmll_List_all___at___00PMLL_php32AllConflict_spec__0(v___x_1890_);
return v___x_1891_;
}
}
static uint8_t _init_lp_pmll_PMLL_php32AllConflict(void){
_start:
{
uint8_t v___x_1892_; 
v___x_1892_ = lean_uint8_once(&lp_pmll_PMLL_php32AllConflict___closed__1, &lp_pmll_PMLL_php32AllConflict___closed__1_once, _init_lp_pmll_PMLL_php32AllConflict___closed__1);
return v___x_1892_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_budgetFor(lean_object* v_n_1893_){
_start:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; uint8_t v___x_1897_; 
v___x_1894_ = lean_unsigned_to_nat(1u);
v___x_1895_ = lean_nat_add(v_n_1893_, v___x_1894_);
v___x_1896_ = lean_unsigned_to_nat(22u);
v___x_1897_ = lean_nat_dec_le(v___x_1895_, v___x_1896_);
if (v___x_1897_ == 0)
{
lean_object* v___x_1898_; 
lean_dec(v___x_1895_);
v___x_1898_ = lean_unsigned_to_nat(4194304u);
return v___x_1898_;
}
else
{
lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1899_ = lean_unsigned_to_nat(2u);
v___x_1900_ = lean_nat_pow(v___x_1899_, v___x_1895_);
lean_dec(v___x_1895_);
return v___x_1900_;
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL_budgetFor___boxed(lean_object* v_n_1901_){
_start:
{
lean_object* v_res_1902_; 
v_res_1902_ = lp_pmll_PMLL_budgetFor(v_n_1901_);
lean_dec(v_n_1901_);
return v_res_1902_;
}
}
static lean_object* _init_lp_pmll_PMLL_satExample___closed__0(void){
_start:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1903_ = lean_box(0);
v___x_1904_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__6, &lp_pmll_PMLL_instReprFlag_repr___closed__6_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__6);
v___x_1905_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1905_, 0, v___x_1904_);
lean_ctor_set(v___x_1905_, 1, v___x_1903_);
return v___x_1905_;
}
}
static lean_object* _init_lp_pmll_PMLL_satExample___closed__1(void){
_start:
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1906_ = lean_obj_once(&lp_pmll_PMLL_satExample___closed__0, &lp_pmll_PMLL_satExample___closed__0_once, _init_lp_pmll_PMLL_satExample___closed__0);
v___x_1907_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__7, &lp_pmll_PMLL_instReprFlag_repr___closed__7_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__7);
v___x_1908_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1908_, 0, v___x_1907_);
lean_ctor_set(v___x_1908_, 1, v___x_1906_);
return v___x_1908_;
}
}
static lean_object* _init_lp_pmll_PMLL_satExample___closed__2(void){
_start:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; 
v___x_1909_ = lean_obj_once(&lp_pmll_PMLL_instReprFlag_repr___closed__7, &lp_pmll_PMLL_instReprFlag_repr___closed__7_once, _init_lp_pmll_PMLL_instReprFlag_repr___closed__7);
v___x_1910_ = lean_int_neg(v___x_1909_);
return v___x_1910_;
}
}
static lean_object* _init_lp_pmll_PMLL_satExample___closed__3(void){
_start:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; 
v___x_1911_ = lean_obj_once(&lp_pmll_PMLL_satExample___closed__0, &lp_pmll_PMLL_satExample___closed__0_once, _init_lp_pmll_PMLL_satExample___closed__0);
v___x_1912_ = lean_obj_once(&lp_pmll_PMLL_satExample___closed__2, &lp_pmll_PMLL_satExample___closed__2_once, _init_lp_pmll_PMLL_satExample___closed__2);
v___x_1913_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1913_, 0, v___x_1912_);
lean_ctor_set(v___x_1913_, 1, v___x_1911_);
return v___x_1913_;
}
}
static lean_object* _init_lp_pmll_PMLL_satExample___closed__4(void){
_start:
{
lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
v___x_1914_ = lean_box(0);
v___x_1915_ = lean_obj_once(&lp_pmll_PMLL_satExample___closed__3, &lp_pmll_PMLL_satExample___closed__3_once, _init_lp_pmll_PMLL_satExample___closed__3);
v___x_1916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1916_, 0, v___x_1915_);
lean_ctor_set(v___x_1916_, 1, v___x_1914_);
return v___x_1916_;
}
}
static lean_object* _init_lp_pmll_PMLL_satExample___closed__5(void){
_start:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1917_ = lean_obj_once(&lp_pmll_PMLL_satExample___closed__4, &lp_pmll_PMLL_satExample___closed__4_once, _init_lp_pmll_PMLL_satExample___closed__4);
v___x_1918_ = lean_obj_once(&lp_pmll_PMLL_satExample___closed__1, &lp_pmll_PMLL_satExample___closed__1_once, _init_lp_pmll_PMLL_satExample___closed__1);
v___x_1919_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1918_);
lean_ctor_set(v___x_1919_, 1, v___x_1917_);
return v___x_1919_;
}
}
static lean_object* _init_lp_pmll_PMLL_satExample(void){
_start:
{
lean_object* v___x_1920_; 
v___x_1920_ = lean_obj_once(&lp_pmll_PMLL_satExample___closed__5, &lp_pmll_PMLL_satExample___closed__5_once, _init_lp_pmll_PMLL_satExample___closed__5);
return v___x_1920_;
}
}
static lean_object* _init_lp_pmll_PMLL_satExampleCert___closed__0(void){
_start:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; 
v___x_1921_ = lean_unsigned_to_nat(2u);
v___x_1922_ = lp_pmll_PMLL_budgetFor(v___x_1921_);
return v___x_1922_;
}
}
static lean_object* _init_lp_pmll_PMLL_satExampleCert___closed__1(void){
_start:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; 
v___x_1923_ = lean_obj_once(&lp_pmll_PMLL_satExampleCert___closed__0, &lp_pmll_PMLL_satExampleCert___closed__0_once, _init_lp_pmll_PMLL_satExampleCert___closed__0);
v___x_1924_ = lp_pmll_PMLL_satExample;
v___x_1925_ = lean_unsigned_to_nat(2u);
v___x_1926_ = lp_pmll_PMLL_refine(v___x_1925_, v___x_1924_, v___x_1923_);
return v___x_1926_;
}
}
static lean_object* _init_lp_pmll_PMLL_satExampleCert(void){
_start:
{
lean_object* v___x_1927_; lean_object* v_snd_1928_; 
v___x_1927_ = lean_obj_once(&lp_pmll_PMLL_satExampleCert___closed__1, &lp_pmll_PMLL_satExampleCert___closed__1_once, _init_lp_pmll_PMLL_satExampleCert___closed__1);
v_snd_1928_ = lean_ctor_get(v___x_1927_, 1);
lean_inc(v_snd_1928_);
return v_snd_1928_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_pmll_PMLL(uint8_t builtin) {
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
lp_pmll_PMLL_instInhabitedFlag_default = _init_lp_pmll_PMLL_instInhabitedFlag_default();
lp_pmll_PMLL_instInhabitedFlag = _init_lp_pmll_PMLL_instInhabitedFlag();
lp_pmll_PMLL_php32 = _init_lp_pmll_PMLL_php32();
lean_mark_persistent(lp_pmll_PMLL_php32);
lp_pmll_PMLL_php32AllConflict = _init_lp_pmll_PMLL_php32AllConflict();
lp_pmll_PMLL_satExample = _init_lp_pmll_PMLL_satExample();
lean_mark_persistent(lp_pmll_PMLL_satExample);
lp_pmll_PMLL_satExampleCert = _init_lp_pmll_PMLL_satExampleCert();
lean_mark_persistent(lp_pmll_PMLL_satExampleCert);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
