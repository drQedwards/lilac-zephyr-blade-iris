// Lean compiler output
// Module: Solve
// Imports: public import Init public meta import Init public import PMLL.Promise public import PMLL.Retry public import PMLL.Spine public import PMLL.Develop public import PMLL.Continue public import PMLL.Align
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
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_pmll_PMLL_Promise(uint8_t builtin);
lean_object* initialize_pmll_PMLL_Retry(uint8_t builtin);
lean_object* initialize_pmll_PMLL_Spine(uint8_t builtin);
lean_object* initialize_pmll_PMLL_Develop(uint8_t builtin);
lean_object* initialize_pmll_PMLL_Continue(uint8_t builtin);
lean_object* initialize_pmll_PMLL_Align(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_pmll_Solve(uint8_t builtin) {
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
res = initialize_pmll_PMLL_Promise(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_pmll_PMLL_Retry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_pmll_PMLL_Spine(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_pmll_PMLL_Develop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_pmll_PMLL_Continue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_pmll_PMLL_Align(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
