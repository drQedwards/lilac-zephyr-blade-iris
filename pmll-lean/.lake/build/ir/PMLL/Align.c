// Lean compiler output
// Module: PMLL.Align
// Imports: public import Init public meta import Init public import Lean public import PMLL.Continue public import PMLL.Spine
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg();
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Recall_elabRecall_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Recall_elabRecall_x3f_spec__2(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__7(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_logInfo___at___00__private_Lean_Elab_DocString_Builtin_0__Lean_Doc_lean_runCommand_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_value_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Expr_getUsedConstants(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_getRoot(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_eraseDups___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__8(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
static const lean_string_object lp_pmll_PMLL_davisDepends___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "PMLL"};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__0 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__0_value;
static const lean_string_object lp_pmll_PMLL_davisDepends___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "P_eq_NP"};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__1 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__1_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 91, 74, 189, 255, 192, 18, 79)}};
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__2_value_aux_0),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__1_value),LEAN_SCALAR_PTR_LITERAL(33, 12, 153, 106, 52, 26, 118, 224)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__2 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__2_value;
static const lean_string_object lp_pmll_PMLL_davisDepends___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "P_ne_NP"};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__3 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__3_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 91, 74, 189, 255, 192, 18, 79)}};
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__4_value_aux_0),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__3_value),LEAN_SCALAR_PTR_LITERAL(188, 240, 129, 141, 183, 104, 112, 205)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__4 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__4_value;
static const lean_string_object lp_pmll_PMLL_davisDepends___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "RiemannHypothesis"};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__5 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__5_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 91, 74, 189, 255, 192, 18, 79)}};
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__6_value_aux_0),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__5_value),LEAN_SCALAR_PTR_LITERAL(28, 252, 247, 161, 110, 201, 209, 246)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__6 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__6_value;
static const lean_string_object lp_pmll_PMLL_davisDepends___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "link_census"};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__7 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__7_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 91, 74, 189, 255, 192, 18, 79)}};
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__8_value_aux_0),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__7_value),LEAN_SCALAR_PTR_LITERAL(189, 225, 196, 83, 24, 249, 181, 248)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__8 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__8_value;
static const lean_string_object lp_pmll_PMLL_davisDepends___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "off_spine_of_last_link"};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__9 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__9_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 91, 74, 189, 255, 192, 18, 79)}};
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__10_value_aux_0),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__9_value),LEAN_SCALAR_PTR_LITERAL(248, 159, 62, 244, 187, 187, 157, 93)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__10 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__10_value;
static const lean_string_object lp_pmll_PMLL_davisDepends___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "developed_solver_off_spine"};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__11 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__11_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 91, 74, 189, 255, 192, 18, 79)}};
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__12_value_aux_0),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__11_value),LEAN_SCALAR_PTR_LITERAL(11, 126, 244, 104, 14, 225, 58, 157)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__12 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__12_value;
static const lean_string_object lp_pmll_PMLL_davisDepends___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "finite_recurrence"};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__13 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__13_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 91, 74, 189, 255, 192, 18, 79)}};
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__14_value_aux_0),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__13_value),LEAN_SCALAR_PTR_LITERAL(197, 178, 115, 78, 123, 55, 171, 210)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__14 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__14_value;
static const lean_string_object lp_pmll_PMLL_davisDepends___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "growth_through_seven"};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__15 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__15_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 91, 74, 189, 255, 192, 18, 79)}};
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__16_value_aux_0),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__15_value),LEAN_SCALAR_PTR_LITERAL(133, 16, 39, 100, 101, 19, 159, 134)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__16 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__16_value;
static const lean_string_object lp_pmll_PMLL_davisDepends___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "recurrence_is_factorial"};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__17 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__17_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 91, 74, 189, 255, 192, 18, 79)}};
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__18_value_aux_0),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__17_value),LEAN_SCALAR_PTR_LITERAL(255, 201, 19, 5, 69, 70, 39, 53)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__18 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__18_value;
static const lean_string_object lp_pmll_PMLL_davisDepends___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "spine_promise_unknown"};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__19 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__19_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 91, 74, 189, 255, 192, 18, 79)}};
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__20_value_aux_0),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__19_value),LEAN_SCALAR_PTR_LITERAL(60, 231, 98, 34, 116, 179, 75, 89)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__20 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__20_value;
static const lean_string_object lp_pmll_PMLL_davisDepends___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "on_spine_of_zero_free"};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__21 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__21_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 91, 74, 189, 255, 192, 18, 79)}};
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__22_value_aux_0),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__21_value),LEAN_SCALAR_PTR_LITERAL(95, 185, 111, 216, 89, 83, 164, 77)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__22 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__22_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__23 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__23_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__20_value),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__23_value)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__24 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__24_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__18_value),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__24_value)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__25 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__25_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__16_value),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__25_value)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__26 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__26_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__14_value),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__26_value)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__27 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__27_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__12_value),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__27_value)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__28 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__28_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__10_value),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__28_value)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__29 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__29_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__8_value),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__29_value)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__30 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__30_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__6_value),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__30_value)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__31 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__31_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__4_value),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__31_value)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__32 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__32_value;
static const lean_ctor_object lp_pmll_PMLL_davisDepends___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_davisDepends___closed__2_value),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__32_value)}};
static const lean_object* lp_pmll_PMLL_davisDepends___closed__33 = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__33_value;
LEAN_EXPORT const lean_object* lp_pmll_PMLL_davisDepends = (const lean_object*)&lp_pmll_PMLL_davisDepends___closed__33_value;
static const lean_string_object lp_pmll_PMLL_command_x23pml__deps___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "command#pml_deps_"};
static const lean_object* lp_pmll_PMLL_command_x23pml__deps___00__closed__0 = (const lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__0_value;
static const lean_ctor_object lp_pmll_PMLL_command_x23pml__deps___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 91, 74, 189, 255, 192, 18, 79)}};
static const lean_ctor_object lp_pmll_PMLL_command_x23pml__deps___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__1_value_aux_0),((lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 78, 166, 53, 24, 135, 74, 91)}};
static const lean_object* lp_pmll_PMLL_command_x23pml__deps___00__closed__1 = (const lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__1_value;
static const lean_string_object lp_pmll_PMLL_command_x23pml__deps___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_pmll_PMLL_command_x23pml__deps___00__closed__2 = (const lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__2_value;
static const lean_ctor_object lp_pmll_PMLL_command_x23pml__deps___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_pmll_PMLL_command_x23pml__deps___00__closed__3 = (const lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__3_value;
static const lean_string_object lp_pmll_PMLL_command_x23pml__deps___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "#pml_deps "};
static const lean_object* lp_pmll_PMLL_command_x23pml__deps___00__closed__4 = (const lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__4_value;
static const lean_ctor_object lp_pmll_PMLL_command_x23pml__deps___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__4_value)}};
static const lean_object* lp_pmll_PMLL_command_x23pml__deps___00__closed__5 = (const lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__5_value;
static const lean_string_object lp_pmll_PMLL_command_x23pml__deps___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* lp_pmll_PMLL_command_x23pml__deps___00__closed__6 = (const lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__6_value;
static const lean_ctor_object lp_pmll_PMLL_command_x23pml__deps___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* lp_pmll_PMLL_command_x23pml__deps___00__closed__7 = (const lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__7_value;
static const lean_ctor_object lp_pmll_PMLL_command_x23pml__deps___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__7_value)}};
static const lean_object* lp_pmll_PMLL_command_x23pml__deps___00__closed__8 = (const lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__8_value;
static const lean_ctor_object lp_pmll_PMLL_command_x23pml__deps___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__3_value),((lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__5_value),((lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__8_value)}};
static const lean_object* lp_pmll_PMLL_command_x23pml__deps___00__closed__9 = (const lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__9_value;
static const lean_ctor_object lp_pmll_PMLL_command_x23pml__deps___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__9_value)}};
static const lean_object* lp_pmll_PMLL_command_x23pml__deps___00__closed__10 = (const lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__10_value;
LEAN_EXPORT const lean_object* lp_pmll_PMLL_command_x23pml__deps__ = (const lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__10_value;
static const lean_ctor_object lp_pmll___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 91, 74, 189, 255, 192, 18, 79)}};
static const lean_object* lp_pmll___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1_spec__0___closed__0 = (const lean_object*)&lp_pmll___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = " PMLL dependencies:\n"};
static const lean_object* lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__0 = (const lean_object*)&lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__0_value;
static lean_once_cell_t lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__1;
static const lean_array_object lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__2 = (const lean_object*)&lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__2_value;
static const lean_string_object lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "no value"};
static const lean_object* lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__3 = (const lean_object*)&lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__3_value;
static lean_once_cell_t lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__4;
LEAN_EXPORT lean_object* lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_pmll_PMLL_command_x23pml__deps____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "command#pml_deps__1"};
static const lean_object* lp_pmll_PMLL_command_x23pml__deps____1___closed__0 = (const lean_object*)&lp_pmll_PMLL_command_x23pml__deps____1___closed__0_value;
static const lean_ctor_object lp_pmll_PMLL_command_x23pml__deps____1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_davisDepends___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 91, 74, 189, 255, 192, 18, 79)}};
static const lean_ctor_object lp_pmll_PMLL_command_x23pml__deps____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_pmll_PMLL_command_x23pml__deps____1___closed__1_value_aux_0),((lean_object*)&lp_pmll_PMLL_command_x23pml__deps____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(175, 223, 174, 163, 108, 4, 125, 102)}};
static const lean_object* lp_pmll_PMLL_command_x23pml__deps____1___closed__1 = (const lean_object*)&lp_pmll_PMLL_command_x23pml__deps____1___closed__1_value;
static const lean_ctor_object lp_pmll_PMLL_command_x23pml__deps____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_pmll_PMLL_command_x23pml__deps____1___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_pmll_PMLL_command_x23pml__deps___00__closed__9_value)}};
static const lean_object* lp_pmll_PMLL_command_x23pml__deps____1___closed__2 = (const lean_object*)&lp_pmll_PMLL_command_x23pml__deps____1___closed__2_value;
LEAN_EXPORT const lean_object* lp_pmll_PMLL_command_x23pml__deps____1 = (const lean_object*)&lp_pmll_PMLL_command_x23pml__deps____1___closed__2_value;
LEAN_EXPORT lean_object* lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1_spec__0(lean_object* v_as_106_, size_t v_i_107_, size_t v_stop_108_, lean_object* v_b_109_){
_start:
{
lean_object* v___y_111_; uint8_t v___x_115_; 
v___x_115_ = lean_usize_dec_eq(v_i_107_, v_stop_108_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_116_ = lean_array_uget_borrowed(v_as_106_, v_i_107_);
v___x_117_ = l_Lean_Name_getRoot(v___x_116_);
v___x_118_ = ((lean_object*)(lp_pmll___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1_spec__0___closed__0));
v___x_119_ = lean_name_eq(v___x_117_, v___x_118_);
lean_dec(v___x_117_);
if (v___x_119_ == 0)
{
v___y_111_ = v_b_109_;
goto v___jp_110_;
}
else
{
lean_object* v___x_120_; 
lean_inc(v___x_116_);
v___x_120_ = lean_array_push(v_b_109_, v___x_116_);
v___y_111_ = v___x_120_;
goto v___jp_110_;
}
}
else
{
return v_b_109_;
}
v___jp_110_:
{
size_t v___x_112_; size_t v___x_113_; 
v___x_112_ = ((size_t)1ULL);
v___x_113_ = lean_usize_add(v_i_107_, v___x_112_);
v_i_107_ = v___x_113_;
v_b_109_ = v___y_111_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_pmll___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1_spec__0___boxed(lean_object* v_as_121_, lean_object* v_i_122_, lean_object* v_stop_123_, lean_object* v_b_124_){
_start:
{
size_t v_i_boxed_125_; size_t v_stop_boxed_126_; lean_object* v_res_127_; 
v_i_boxed_125_ = lean_unbox_usize(v_i_122_);
lean_dec(v_i_122_);
v_stop_boxed_126_ = lean_unbox_usize(v_stop_123_);
lean_dec(v_stop_123_);
v_res_127_ = lp_pmll___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1_spec__0(v_as_121_, v_i_boxed_125_, v_stop_boxed_126_, v_b_124_);
lean_dec_ref(v_as_121_);
return v_res_127_;
}
}
static lean_object* _init_lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__1(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = ((lean_object*)(lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__0));
v___x_130_ = l_Lean_stringToMessageData(v___x_129_);
return v___x_130_;
}
}
static lean_object* _init_lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__4(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = ((lean_object*)(lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__3));
v___x_135_ = l_Lean_stringToMessageData(v___x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1(lean_object* v_x_136_, lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_140_ = ((lean_object*)(lp_pmll_PMLL_command_x23pml__deps___00__closed__1));
lean_inc(v_x_136_);
v___x_141_ = l_Lean_Syntax_isOfKind(v_x_136_, v___x_140_);
if (v___x_141_ == 0)
{
lean_object* v___x_142_; 
lean_dec(v_x_136_);
v___x_142_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg();
return v___x_142_;
}
else
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_143_ = lean_unsigned_to_nat(0u);
v___x_144_ = lean_unsigned_to_nat(1u);
v___x_145_ = l_Lean_Syntax_getArg(v_x_136_, v___x_144_);
lean_dec(v_x_136_);
v___x_146_ = l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Recall_elabRecall_spec__1(v___x_145_, v_a_137_, v_a_138_);
if (lean_obj_tag(v___x_146_) == 0)
{
lean_object* v_a_147_; lean_object* v___x_148_; 
v_a_147_ = lean_ctor_get(v___x_146_, 0);
lean_inc(v_a_147_);
lean_dec_ref_known(v___x_146_, 1);
v___x_148_ = l_Lean_getConstInfo___at___00Lean_Elab_Recall_elabRecall_x3f_spec__2(v_a_147_, v_a_137_, v_a_138_);
if (lean_obj_tag(v___x_148_) == 0)
{
lean_object* v_a_149_; lean_object* v___y_151_; lean_object* v___x_165_; 
v_a_149_ = lean_ctor_get(v___x_148_, 0);
lean_inc_n(v_a_149_, 2);
lean_dec_ref_known(v___x_148_, 1);
v___x_165_ = l_Lean_ConstantInfo_value_x3f(v_a_149_, v___x_141_);
if (lean_obj_tag(v___x_165_) == 1)
{
lean_object* v_val_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; uint8_t v___x_173_; 
v_val_166_ = lean_ctor_get(v___x_165_, 0);
lean_inc(v_val_166_);
lean_dec_ref_known(v___x_165_, 1);
v___x_167_ = l_Lean_Expr_getUsedConstants(v_val_166_);
v___x_168_ = l_Lean_ConstantInfo_type(v_a_149_);
lean_dec(v_a_149_);
v___x_169_ = l_Lean_Expr_getUsedConstants(v___x_168_);
v___x_170_ = l_Array_append___redArg(v___x_167_, v___x_169_);
lean_dec_ref(v___x_169_);
v___x_171_ = lean_array_get_size(v___x_170_);
v___x_172_ = ((lean_object*)(lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__2));
v___x_173_ = lean_nat_dec_lt(v___x_143_, v___x_171_);
if (v___x_173_ == 0)
{
lean_dec_ref(v___x_170_);
v___y_151_ = v___x_172_;
goto v___jp_150_;
}
else
{
size_t v___x_174_; size_t v___x_175_; lean_object* v___x_176_; 
v___x_174_ = ((size_t)0ULL);
v___x_175_ = lean_usize_of_nat(v___x_171_);
v___x_176_ = lp_pmll___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1_spec__0(v___x_170_, v___x_174_, v___x_175_, v___x_172_);
lean_dec_ref(v___x_170_);
v___y_151_ = v___x_176_;
goto v___jp_150_;
}
}
else
{
lean_object* v___x_177_; lean_object* v___x_178_; 
lean_dec(v___x_165_);
lean_dec(v_a_149_);
v___x_177_ = lean_obj_once(&lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__4, &lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__4_once, _init_lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__4);
v___x_178_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18___redArg(v___x_177_, v_a_137_, v_a_138_);
return v___x_178_;
}
v___jp_150_:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_152_ = lean_array_to_list(v___y_151_);
v___x_153_ = l_List_eraseDups___at___00Lean_Linter_Extra_DupNamespaceLinter_dupNamespace_spec__8(v___x_152_);
v___x_154_ = l_List_lengthTR___redArg(v___x_153_);
v___x_155_ = l_Nat_reprFast(v___x_154_);
v___x_156_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
v___x_157_ = l_Lean_MessageData_ofFormat(v___x_156_);
v___x_158_ = lean_obj_once(&lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__1, &lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__1_once, _init_lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__1);
v___x_159_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_157_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
v___x_160_ = lean_box(0);
v___x_161_ = l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__7(v___x_153_, v___x_160_);
v___x_162_ = l_Lean_MessageData_ofList(v___x_161_);
v___x_163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_159_);
lean_ctor_set(v___x_163_, 1, v___x_162_);
v___x_164_ = l_Lean_logInfo___at___00__private_Lean_Elab_DocString_Builtin_0__Lean_Doc_lean_runCommand_spec__1(v___x_163_, v_a_137_, v_a_138_);
return v___x_164_;
}
}
else
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_186_; 
v_a_179_ = lean_ctor_get(v___x_148_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_148_);
if (v_isSharedCheck_186_ == 0)
{
v___x_181_ = v___x_148_;
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_148_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_184_; 
if (v_isShared_182_ == 0)
{
v___x_184_ = v___x_181_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_a_179_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
}
else
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_194_; 
v_a_187_ = lean_ctor_get(v___x_146_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_146_);
if (v_isSharedCheck_194_ == 0)
{
v___x_189_ = v___x_146_;
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v___x_146_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_192_; 
if (v_isShared_190_ == 0)
{
v___x_192_ = v___x_189_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_a_187_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___boxed(lean_object* v_x_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1(v_x_195_, v_a_196_, v_a_197_);
lean_dec(v_a_197_);
lean_dec_ref(v_a_196_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1__1(lean_object* v_x_209_, lean_object* v_a_210_, lean_object* v_a_211_){
_start:
{
lean_object* v___x_213_; uint8_t v___x_214_; 
v___x_213_ = ((lean_object*)(lp_pmll_PMLL_command_x23pml__deps____1___closed__1));
lean_inc(v_x_209_);
v___x_214_ = l_Lean_Syntax_isOfKind(v_x_209_, v___x_213_);
if (v___x_214_ == 0)
{
lean_object* v___x_215_; 
lean_dec(v_x_209_);
v___x_215_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg();
return v___x_215_;
}
else
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_216_ = lean_unsigned_to_nat(0u);
v___x_217_ = lean_unsigned_to_nat(1u);
v___x_218_ = l_Lean_Syntax_getArg(v_x_209_, v___x_217_);
lean_dec(v_x_209_);
v___x_219_ = l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Recall_elabRecall_spec__1(v___x_218_, v_a_210_, v_a_211_);
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v_a_220_; lean_object* v___x_221_; 
v_a_220_ = lean_ctor_get(v___x_219_, 0);
lean_inc(v_a_220_);
lean_dec_ref_known(v___x_219_, 1);
v___x_221_ = l_Lean_getConstInfo___at___00Lean_Elab_Recall_elabRecall_x3f_spec__2(v_a_220_, v_a_210_, v_a_211_);
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v_a_222_; lean_object* v___y_224_; lean_object* v___x_237_; 
v_a_222_ = lean_ctor_get(v___x_221_, 0);
lean_inc(v_a_222_);
lean_dec_ref_known(v___x_221_, 1);
v___x_237_ = l_Lean_ConstantInfo_value_x3f(v_a_222_, v___x_214_);
if (lean_obj_tag(v___x_237_) == 1)
{
lean_object* v_val_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; 
v_val_238_ = lean_ctor_get(v___x_237_, 0);
lean_inc(v_val_238_);
lean_dec_ref_known(v___x_237_, 1);
v___x_239_ = l_Lean_Expr_getUsedConstants(v_val_238_);
v___x_240_ = lean_array_get_size(v___x_239_);
v___x_241_ = ((lean_object*)(lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__2));
v___x_242_ = lean_nat_dec_lt(v___x_216_, v___x_240_);
if (v___x_242_ == 0)
{
lean_dec_ref(v___x_239_);
v___y_224_ = v___x_241_;
goto v___jp_223_;
}
else
{
size_t v___x_243_; size_t v___x_244_; lean_object* v___x_245_; 
v___x_243_ = ((size_t)0ULL);
v___x_244_ = lean_usize_of_nat(v___x_240_);
v___x_245_ = lp_pmll___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1_spec__0(v___x_239_, v___x_243_, v___x_244_, v___x_241_);
lean_dec_ref(v___x_239_);
v___y_224_ = v___x_245_;
goto v___jp_223_;
}
}
else
{
lean_object* v___x_246_; lean_object* v___x_247_; 
lean_dec(v___x_237_);
v___x_246_ = lean_obj_once(&lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__4, &lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__4_once, _init_lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__4);
v___x_247_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__3_spec__5_spec__6_spec__9_spec__12_spec__14_spec__16_spec__18___redArg(v___x_246_, v_a_210_, v_a_211_);
return v___x_247_;
}
v___jp_223_:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_225_ = lean_array_get_size(v___y_224_);
v___x_226_ = l_Nat_reprFast(v___x_225_);
v___x_227_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
v___x_228_ = l_Lean_MessageData_ofFormat(v___x_227_);
v___x_229_ = lean_obj_once(&lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__1, &lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__1_once, _init_lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1___closed__1);
v___x_230_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_228_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
v___x_231_ = lean_array_to_list(v___y_224_);
v___x_232_ = lean_box(0);
v___x_233_ = l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__7(v___x_231_, v___x_232_);
v___x_234_ = l_Lean_MessageData_ofList(v___x_233_);
v___x_235_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_230_);
lean_ctor_set(v___x_235_, 1, v___x_234_);
v___x_236_ = l_Lean_logInfo___at___00__private_Lean_Elab_DocString_Builtin_0__Lean_Doc_lean_runCommand_spec__1(v___x_235_, v_a_210_, v_a_211_);
return v___x_236_;
}
}
else
{
lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_255_; 
v_a_248_ = lean_ctor_get(v___x_221_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_255_ == 0)
{
v___x_250_ = v___x_221_;
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_221_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_253_; 
if (v_isShared_251_ == 0)
{
v___x_253_ = v___x_250_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_a_248_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
}
else
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_263_; 
v_a_256_ = lean_ctor_get(v___x_219_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_263_ == 0)
{
v___x_258_ = v___x_219_;
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_219_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_261_; 
if (v_isShared_259_ == 0)
{
v___x_261_ = v___x_258_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_a_256_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1__1___boxed(lean_object* v_x_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = lp_pmll_PMLL___aux__PMLL__Align______elabRules__PMLL__command_x23pml__deps____1__1(v_x_264_, v_a_265_, v_a_266_);
lean_dec(v_a_266_);
lean_dec_ref(v_a_265_);
return v_res_268_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean(uint8_t builtin);
lean_object* initialize_pmll_PMLL_Continue(uint8_t builtin);
lean_object* initialize_pmll_PMLL_Spine(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_pmll_PMLL_Align(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_pmll_PMLL_Continue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_pmll_PMLL_Spine(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
