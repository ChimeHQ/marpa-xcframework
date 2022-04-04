/*
 * Copyright 2018 Jeffrey Kegler
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */


/*
 * DO NOT EDIT DIRECTLY
 * This file is written by the Marpa build process
 * It is not intended to be modified directly
 */

#line 1 "./marpa.h.p10"

#ifndef _MARPA_H__
#define _MARPA_H__ 1

#include "stdio.h"
#include "stdlib.h"
#include "stddef.h"
#include "string.h"
#include "limits.h"

#define MARPA_MAJOR_VERSION 8
#define MARPA_MINOR_VERSION 6
#define MARPA_MICRO_VERSION 2

#line 1 "./marpa.h-err"
#define MARPA_ERROR_COUNT 100
#define MARPA_ERR_NONE 0
#define MARPA_ERR_AHFA_IX_NEGATIVE 1
#define MARPA_ERR_AHFA_IX_OOB 2
#define MARPA_ERR_ANDID_NEGATIVE 3
#define MARPA_ERR_ANDID_NOT_IN_OR 4
#define MARPA_ERR_ANDIX_NEGATIVE 5
#define MARPA_ERR_BAD_SEPARATOR 6
#define MARPA_ERR_BOCAGE_ITERATION_EXHAUSTED 7
#define MARPA_ERR_COUNTED_NULLABLE 8
#define MARPA_ERR_DEVELOPMENT 9
#define MARPA_ERR_DUPLICATE_AND_NODE 10
#define MARPA_ERR_DUPLICATE_RULE 11
#define MARPA_ERR_DUPLICATE_TOKEN 12
#define MARPA_ERR_YIM_COUNT 13
#define MARPA_ERR_YIM_ID_INVALID 14
#define MARPA_ERR_EVENT_IX_NEGATIVE 15
#define MARPA_ERR_EVENT_IX_OOB 16
#define MARPA_ERR_GRAMMAR_HAS_CYCLE 17
#define MARPA_ERR_INACCESSIBLE_TOKEN 18
#define MARPA_ERR_INTERNAL 19
#define MARPA_ERR_INVALID_AHFA_ID 20
#define MARPA_ERR_INVALID_AIMID 21
#define MARPA_ERR_INVALID_BOOLEAN 22
#define MARPA_ERR_INVALID_IRLID 23
#define MARPA_ERR_INVALID_NSYID 24
#define MARPA_ERR_INVALID_LOCATION 25
#define MARPA_ERR_INVALID_RULE_ID 26
#define MARPA_ERR_INVALID_START_SYMBOL 27
#define MARPA_ERR_INVALID_SYMBOL_ID 28
#define MARPA_ERR_I_AM_NOT_OK 29
#define MARPA_ERR_MAJOR_VERSION_MISMATCH 30
#define MARPA_ERR_MICRO_VERSION_MISMATCH 31
#define MARPA_ERR_MINOR_VERSION_MISMATCH 32
#define MARPA_ERR_NOOKID_NEGATIVE 33
#define MARPA_ERR_NOT_PRECOMPUTED 34
#define MARPA_ERR_NOT_TRACING_COMPLETION_LINKS 35
#define MARPA_ERR_NOT_TRACING_LEO_LINKS 36
#define MARPA_ERR_NOT_TRACING_TOKEN_LINKS 37
#define MARPA_ERR_NO_AND_NODES 38
#define MARPA_ERR_NO_EARLEY_SET_AT_LOCATION 39
#define MARPA_ERR_NO_OR_NODES 40
#define MARPA_ERR_NO_PARSE 41
#define MARPA_ERR_NO_RULES 42
#define MARPA_ERR_NO_START_SYMBOL 43
#define MARPA_ERR_NO_TOKEN_EXPECTED_HERE 44
#define MARPA_ERR_NO_TRACE_YIM 45
#define MARPA_ERR_NO_TRACE_YS 46
#define MARPA_ERR_NO_TRACE_PIM 47
#define MARPA_ERR_NO_TRACE_SRCL 48
#define MARPA_ERR_NULLING_TERMINAL 49
#define MARPA_ERR_ORDER_FROZEN 50
#define MARPA_ERR_ORID_NEGATIVE 51
#define MARPA_ERR_OR_ALREADY_ORDERED 52
#define MARPA_ERR_PARSE_EXHAUSTED 53
#define MARPA_ERR_PARSE_TOO_LONG 54
#define MARPA_ERR_PIM_IS_NOT_LIM 55
#define MARPA_ERR_POINTER_ARG_NULL 56
#define MARPA_ERR_PRECOMPUTED 57
#define MARPA_ERR_PROGRESS_REPORT_EXHAUSTED 58
#define MARPA_ERR_PROGRESS_REPORT_NOT_STARTED 59
#define MARPA_ERR_RECCE_NOT_ACCEPTING_INPUT 60
#define MARPA_ERR_RECCE_NOT_STARTED 61
#define MARPA_ERR_RECCE_STARTED 62
#define MARPA_ERR_RHS_IX_NEGATIVE 63
#define MARPA_ERR_RHS_IX_OOB 64
#define MARPA_ERR_RHS_TOO_LONG 65
#define MARPA_ERR_SEQUENCE_LHS_NOT_UNIQUE 66
#define MARPA_ERR_SOURCE_TYPE_IS_AMBIGUOUS 67
#define MARPA_ERR_SOURCE_TYPE_IS_COMPLETION 68
#define MARPA_ERR_SOURCE_TYPE_IS_LEO 69
#define MARPA_ERR_SOURCE_TYPE_IS_NONE 70
#define MARPA_ERR_SOURCE_TYPE_IS_TOKEN 71
#define MARPA_ERR_SOURCE_TYPE_IS_UNKNOWN 72
#define MARPA_ERR_START_NOT_LHS 73
#define MARPA_ERR_SYMBOL_VALUED_CONFLICT 74
#define MARPA_ERR_TERMINAL_IS_LOCKED 75
#define MARPA_ERR_TOKEN_IS_NOT_TERMINAL 76
#define MARPA_ERR_TOKEN_LENGTH_LE_ZERO 77
#define MARPA_ERR_TOKEN_TOO_LONG 78
#define MARPA_ERR_TREE_EXHAUSTED 79
#define MARPA_ERR_TREE_PAUSED 80
#define MARPA_ERR_UNEXPECTED_TOKEN_ID 81
#define MARPA_ERR_UNPRODUCTIVE_START 82
#define MARPA_ERR_VALUATOR_INACTIVE 83
#define MARPA_ERR_VALUED_IS_LOCKED 84
#define MARPA_ERR_RANK_TOO_LOW 85
#define MARPA_ERR_RANK_TOO_HIGH 86
#define MARPA_ERR_SYMBOL_IS_NULLING 87
#define MARPA_ERR_SYMBOL_IS_UNUSED 88
#define MARPA_ERR_NO_SUCH_RULE_ID 89
#define MARPA_ERR_NO_SUCH_SYMBOL_ID 90
#define MARPA_ERR_BEFORE_FIRST_TREE 91
#define MARPA_ERR_SYMBOL_IS_NOT_COMPLETION_EVENT 92
#define MARPA_ERR_SYMBOL_IS_NOT_NULLED_EVENT 93
#define MARPA_ERR_SYMBOL_IS_NOT_PREDICTION_EVENT 94
#define MARPA_ERR_RECCE_IS_INCONSISTENT 95
#define MARPA_ERR_INVALID_ASSERTION_ID 96
#define MARPA_ERR_NO_SUCH_ASSERTION_ID 97
#define MARPA_ERR_HEADERS_DO_NOT_MATCH 98
#define MARPA_ERR_NOT_A_SEQUENCE 99


#line 1 "./marpa.h-event"
#define MARPA_EVENT_COUNT 10
#define MARPA_EVENT_NONE 0
#define MARPA_EVENT_COUNTED_NULLABLE 1
#define MARPA_EVENT_EARLEY_ITEM_THRESHOLD 2
#define MARPA_EVENT_EXHAUSTED 3
#define MARPA_EVENT_LOOP_RULES 4
#define MARPA_EVENT_NULLING_TERMINAL 5
#define MARPA_EVENT_SYMBOL_COMPLETED 6
#define MARPA_EVENT_SYMBOL_EXPECTED 7
#define MARPA_EVENT_SYMBOL_NULLED 8
#define MARPA_EVENT_SYMBOL_PREDICTED 9


#line 1 "./marpa.h-step"
#define MARPA_STEP_COUNT 8
#define MARPA_STEP_INTERNAL1 0
#define MARPA_STEP_RULE 1
#define MARPA_STEP_TOKEN 2
#define MARPA_STEP_NULLING_SYMBOL 3
#define MARPA_STEP_TRACE 4
#define MARPA_STEP_INACTIVE 5
#define MARPA_STEP_INTERNAL2 6
#define MARPA_STEP_INITIAL 7

/*1367:*/
#line 16597 "marpa.w"

extern const int marpa_major_version;
extern const int marpa_minor_version;
extern const int marpa_micro_version;

/*109:*/
#line 1028 "marpa.w"

#define marpa_g_event_value(event) \
    ((event)->t_value)
/*:109*//*295:*/
#line 2710 "marpa.w"

#define MARPA_KEEP_SEPARATION  0x1
/*:295*//*299:*/
#line 2750 "marpa.w"

#define MARPA_PROPER_SEPARATION  0x2
/*:299*//*1053:*/
#line 12521 "marpa.w"

#define marpa_v_step_type(v) ((v)->t_step_type)
#define marpa_v_token(v) \
    ((v)->t_token_id)
#define marpa_v_symbol(v) marpa_v_token(v)
#define marpa_v_token_value(v) \
    ((v)->t_token_value)
#define marpa_v_rule(v) \
    ((v)->t_rule_id)
#define marpa_v_arg_0(v) \
    ((v)->t_arg_0)
#define marpa_v_arg_n(v) \
    ((v)->t_arg_n)
#define marpa_v_result(v) \
    ((v)->t_result)
#define marpa_v_rule_start_es_id(v) ((v)->t_rule_start_ys_id)
#define marpa_v_token_start_es_id(v) ((v)->t_token_start_ys_id)
#define marpa_v_es_id(v) ((v)->t_ys_id)

/*:1053*//*1330:*/
#line 16204 "marpa.w"

#define marpa_eim_look_rule_id(l) ((l)->t_yim_look_rule_id)
#define marpa_eim_look_dot(l) ((l)->t_yim_look_dot)
#define marpa_eim_look_origin(l) ((l)->t_yim_look_origin_id)
#define marpa_eim_look_irl_id(l) ((l)->t_yim_look_irl_id)
#define marpa_eim_look_irl_dot(l) ((l)->t_yim_look_irl_dot)

/*:1330*//*1339:*/
#line 16323 "marpa.w"

#define marpa_pim_look_eim(l) ((l)->t_pim_look_eim_id)

/*:1339*/
#line 16602 "marpa.w"

/*47:*/
#line 650 "marpa.w"

struct marpa_g;
struct marpa_avl_table;
typedef struct marpa_g*Marpa_Grammar;
/*:47*//*548:*/
#line 5997 "marpa.w"

struct marpa_r;
typedef struct marpa_r*Marpa_Recognizer;
typedef Marpa_Recognizer Marpa_Recce;
/*:548*//*667:*/
#line 7159 "marpa.w"

union _Marpa_PIM_Object;
/*:667*//*935:*/
#line 11125 "marpa.w"

struct marpa_bocage;
typedef struct marpa_bocage*Marpa_Bocage;
/*:935*//*971:*/
#line 11447 "marpa.w"

struct marpa_order;
typedef struct marpa_order*Marpa_Order;
/*:971*//*972:*/
#line 11450 "marpa.w"

typedef Marpa_Order ORDER;
/*:972*//*1009:*/
#line 11985 "marpa.w"

struct marpa_tree;
typedef struct marpa_tree*Marpa_Tree;
/*:1009*//*1048:*/
#line 12477 "marpa.w"

struct marpa_value;
typedef struct marpa_value*Marpa_Value;
/*:1048*/
#line 16603 "marpa.w"

/*91:*/
#line 921 "marpa.w"

typedef int Marpa_Rank;
/*:91*//*108:*/
#line 1025 "marpa.w"

struct marpa_event;
typedef int Marpa_Event_Type;
/*:108*//*134:*/
#line 1209 "marpa.w"

typedef int Marpa_Error_Code;
/*:134*//*141:*/
#line 1247 "marpa.w"

typedef int Marpa_Symbol_ID;
/*:141*//*215:*/
#line 1889 "marpa.w"

typedef int Marpa_NSY_ID;
/*:215*//*253:*/
#line 2166 "marpa.w"

typedef int Marpa_Rule_ID;
/*:253*//*327:*/
#line 2906 "marpa.w"

typedef int Marpa_IRL_ID;
/*:327*//*452:*/
#line 4840 "marpa.w"

typedef int Marpa_AHM_ID;
/*:452*//*533:*/
#line 5789 "marpa.w"

typedef int Marpa_Assertion_ID;

/*:533*//*624:*/
#line 6685 "marpa.w"
typedef int Marpa_Earleme;
/*:624*//*626:*/
#line 6689 "marpa.w"
typedef int Marpa_Earley_Set_ID;
/*:626*//*649:*/
#line 6894 "marpa.w"
typedef int Marpa_Earley_Item_ID;
/*:649*//*668:*/
#line 7161 "marpa.w"

typedef union _Marpa_PIM_Object*_Marpa_PIM;
/*:668*//*874:*/
#line 10252 "marpa.w"

typedef int Marpa_Or_Node_ID;
/*:874*//*928:*/
#line 11060 "marpa.w"

typedef int Marpa_And_Node_ID;
/*:928*//*1043:*/
#line 12430 "marpa.w"

typedef int Marpa_Nook_ID;
/*:1043*//*1091:*/
#line 12921 "marpa.w"

typedef int Marpa_Step_Type;
/*:1091*//*1239:*/
#line 14901 "marpa.w"

typedef const char*Marpa_Message_ID;

/*:1239*/
#line 16604 "marpa.w"

/*44:*/
#line 610 "marpa.w"

struct marpa_config{
int t_is_ok;
Marpa_Error_Code t_error;
const char*t_error_string;
};
typedef struct marpa_config Marpa_Config;

/*:44*//*110:*/
#line 1031 "marpa.w"

struct marpa_event{
Marpa_Event_Type t_type;
int t_value;
};
typedef struct marpa_event Marpa_Event;
/*:110*//*828:*/
#line 9609 "marpa.w"

struct marpa_progress_item{
Marpa_Rule_ID t_rule_id;
int t_position;
int t_origin;
};

/*:828*//*1052:*/
#line 12507 "marpa.w"

struct marpa_value{
Marpa_Step_Type t_step_type;
Marpa_Symbol_ID t_token_id;
int t_token_value;
Marpa_Rule_ID t_rule_id;
int t_arg_0;
int t_arg_n;
int t_result;
Marpa_Earley_Set_ID t_token_start_ys_id;
Marpa_Earley_Set_ID t_rule_start_ys_id;
Marpa_Earley_Set_ID t_ys_id;
};
/*:1052*//*1329:*/
#line 16193 "marpa.w"

struct s_marpa_yim_look{
Marpa_Rule_ID t_yim_look_rule_id;
int t_yim_look_dot;
Marpa_Earley_Set_ID t_yim_look_origin_id;
Marpa_IRL_ID t_yim_look_irl_id;
int t_yim_look_irl_dot;
};
typedef struct s_marpa_yim_look Marpa_Earley_Item_Look;

/*:1329*//*1338:*/
#line 16314 "marpa.w"

struct s_marpa_pim_look{
_Marpa_PIM t_pim_look_current;
Marpa_Earley_Item_ID t_pim_look_eim_id;
};
typedef struct s_marpa_pim_look Marpa_Postdot_Item_Look;

/*:1338*/
#line 16605 "marpa.w"

/*1238:*/
#line 14898 "marpa.w"

extern void*(*const marpa__out_of_memory)(void);

/*:1238*//*1344:*/
#line 16401 "marpa.w"

extern int marpa__default_debug_handler(const char*format,...);
extern int(*marpa__debug_handler)(const char*,...);
extern int marpa__debug_level;

/*:1344*/
#line 16606 "marpa.w"

/*411:*/
#line 4060 "marpa.w"

int _marpa_g_irl_is_chaf(
Marpa_Grammar g,
Marpa_IRL_ID irl_id);
/*:411*//*1332:*/
#line 16244 "marpa.w"

int
_marpa_r_look_yim(Marpa_Recognizer r,Marpa_Earley_Item_Look*look,
Marpa_Earley_Set_ID es_id,Marpa_Earley_Item_ID eim_id);
/*:1332*//*1334:*/
#line 16264 "marpa.w"

int
_marpa_r_yim_check(Marpa_Recognizer r,
Marpa_Earley_Set_ID es_id,Marpa_Earley_Item_ID eim_id);
/*:1334*//*1340:*/
#line 16336 "marpa.w"

int
_marpa_r_look_pim_eim_first(Marpa_Recognizer r,Marpa_Postdot_Item_Look*look,
Marpa_Earley_Set_ID es_id,Marpa_Symbol_ID nsy_id);
/*:1340*//*1342:*/
#line 16374 "marpa.w"

int
_marpa_r_look_pim_eim_next(Marpa_Postdot_Item_Look*look);
/*:1342*/
#line 16607 "marpa.w"


/*:1367*/

#line 1 "./marpa.h.p80"
Marpa_Error_Code marpa_check_version (int required_major, int required_minor, int required_micro );
Marpa_Error_Code marpa_version (int* version);
int marpa_c_init ( Marpa_Config* config);
Marpa_Error_Code marpa_c_error ( Marpa_Config* config, const char** p_error_string );
Marpa_Grammar marpa_g_new ( Marpa_Config* configuration );
int marpa_g_force_valued ( Marpa_Grammar g );
Marpa_Grammar marpa_g_ref (Marpa_Grammar g);
void marpa_g_unref (Marpa_Grammar g);
Marpa_Symbol_ID marpa_g_start_symbol (Marpa_Grammar g);
Marpa_Symbol_ID marpa_g_start_symbol_set ( Marpa_Grammar g, Marpa_Symbol_ID sym_id);
int marpa_g_highest_symbol_id (Marpa_Grammar g);
int marpa_g_symbol_is_accessible (Marpa_Grammar g, Marpa_Symbol_ID sym_id);
int marpa_g_symbol_is_nullable ( Marpa_Grammar g, Marpa_Symbol_ID sym_id);
int marpa_g_symbol_is_nulling (Marpa_Grammar g, Marpa_Symbol_ID sym_id);
int marpa_g_symbol_is_productive (Marpa_Grammar g, Marpa_Symbol_ID sym_id);
int marpa_g_symbol_is_start ( Marpa_Grammar g, Marpa_Symbol_ID sym_id);
int marpa_g_symbol_is_terminal_set ( Marpa_Grammar g, Marpa_Symbol_ID sym_id, int value);
int marpa_g_symbol_is_terminal ( Marpa_Grammar g, Marpa_Symbol_ID sym_id);
Marpa_Symbol_ID marpa_g_symbol_new (Marpa_Grammar g);
int marpa_g_highest_rule_id (Marpa_Grammar g);
int marpa_g_rule_is_accessible (Marpa_Grammar g, Marpa_Rule_ID rule_id);
int marpa_g_rule_is_nullable ( Marpa_Grammar g, Marpa_Rule_ID ruleid);
int marpa_g_rule_is_nulling (Marpa_Grammar g, Marpa_Rule_ID ruleid);
int marpa_g_rule_is_loop (Marpa_Grammar g, Marpa_Rule_ID rule_id);
int marpa_g_rule_is_productive (Marpa_Grammar g, Marpa_Rule_ID rule_id);
int marpa_g_rule_length ( Marpa_Grammar g, Marpa_Rule_ID rule_id);
Marpa_Symbol_ID marpa_g_rule_lhs ( Marpa_Grammar g, Marpa_Rule_ID rule_id);
Marpa_Rule_ID marpa_g_rule_new (Marpa_Grammar g, Marpa_Symbol_ID lhs_id, Marpa_Symbol_ID *rhs_ids, int length);
Marpa_Symbol_ID marpa_g_rule_rhs ( Marpa_Grammar g, Marpa_Rule_ID rule_id, int ix);
int marpa_g_rule_is_proper_separation ( Marpa_Grammar g, Marpa_Rule_ID rule_id);
int marpa_g_sequence_min ( Marpa_Grammar g, Marpa_Rule_ID rule_id);
Marpa_Rule_ID marpa_g_sequence_new (Marpa_Grammar g, Marpa_Symbol_ID lhs_id, Marpa_Symbol_ID rhs_id, Marpa_Symbol_ID separator_id, int min, int flags );
int marpa_g_sequence_separator ( Marpa_Grammar g, Marpa_Rule_ID rule_id);
int marpa_g_symbol_is_counted (Marpa_Grammar g, Marpa_Symbol_ID sym_id);
Marpa_Rank marpa_g_rule_rank_set ( Marpa_Grammar g, Marpa_Rule_ID rule_id, Marpa_Rank rank);
Marpa_Rank marpa_g_rule_rank ( Marpa_Grammar g, Marpa_Rule_ID rule_id);
int marpa_g_rule_null_high_set ( Marpa_Grammar g, Marpa_Rule_ID rule_id, int flag);
int marpa_g_rule_null_high ( Marpa_Grammar g, Marpa_Rule_ID rule_id);
int marpa_g_completion_symbol_activate ( Marpa_Grammar g, Marpa_Symbol_ID sym_id, int reactivate );
int marpa_g_nulled_symbol_activate ( Marpa_Grammar g, Marpa_Symbol_ID sym_id, int reactivate );
int marpa_g_prediction_symbol_activate ( Marpa_Grammar g, Marpa_Symbol_ID sym_id, int reactivate );
int marpa_g_symbol_is_completion_event ( Marpa_Grammar g, Marpa_Symbol_ID sym_id);
int marpa_g_symbol_is_completion_event_set ( Marpa_Grammar g, Marpa_Symbol_ID sym_id, int value);
int marpa_g_symbol_is_nulled_event ( Marpa_Grammar g, Marpa_Symbol_ID sym_id);
int marpa_g_symbol_is_nulled_event_set ( Marpa_Grammar g, Marpa_Symbol_ID sym_id, int value);
int marpa_g_symbol_is_prediction_event ( Marpa_Grammar g, Marpa_Symbol_ID sym_id);
int marpa_g_symbol_is_prediction_event_set ( Marpa_Grammar g, Marpa_Symbol_ID sym_id, int value);
int marpa_g_precompute (Marpa_Grammar g);
int marpa_g_is_precomputed (Marpa_Grammar g);
int marpa_g_has_cycle (Marpa_Grammar g);
Marpa_Recognizer marpa_r_new ( Marpa_Grammar g );
Marpa_Recognizer marpa_r_ref (Marpa_Recognizer r);
void marpa_r_unref (Marpa_Recognizer r);
int marpa_r_start_input (Marpa_Recognizer r);
int marpa_r_alternative (Marpa_Recognizer r, Marpa_Symbol_ID token_id, int value, int length);
int marpa_r_earleme_complete (Marpa_Recognizer r);
Marpa_Earleme marpa_r_current_earleme (Marpa_Recognizer r);
Marpa_Earleme marpa_r_earleme ( Marpa_Recognizer r, Marpa_Earley_Set_ID set_id);
int marpa_r_earley_set_value ( Marpa_Recognizer r, Marpa_Earley_Set_ID earley_set);
int marpa_r_earley_set_values ( Marpa_Recognizer r, Marpa_Earley_Set_ID earley_set, int* p_value, void** p_pvalue );
unsigned int marpa_r_furthest_earleme (Marpa_Recognizer r);
Marpa_Earley_Set_ID marpa_r_latest_earley_set (Marpa_Recognizer r);
int marpa_r_latest_earley_set_value_set ( Marpa_Recognizer r, int value);
int marpa_r_latest_earley_set_values_set ( Marpa_Recognizer r, int value, void* pvalue);
int marpa_r_completion_symbol_activate ( Marpa_Recognizer r, Marpa_Symbol_ID sym_id, int reactivate );
int marpa_r_earley_item_warning_threshold_set (Marpa_Recognizer r, int threshold);
int marpa_r_earley_item_warning_threshold (Marpa_Recognizer r);
int marpa_r_expected_symbol_event_set ( Marpa_Recognizer r, Marpa_Symbol_ID symbol_id, int value);
int marpa_r_is_exhausted (Marpa_Recognizer r);
int marpa_r_nulled_symbol_activate ( Marpa_Recognizer r, Marpa_Symbol_ID sym_id, int boolean );
int marpa_r_prediction_symbol_activate ( Marpa_Recognizer r, Marpa_Symbol_ID sym_id, int boolean );
int marpa_r_terminals_expected ( Marpa_Recognizer r, Marpa_Symbol_ID* buffer);
int marpa_r_terminal_is_expected ( Marpa_Recognizer r, Marpa_Symbol_ID symbol_id);
int marpa_r_progress_report_reset ( Marpa_Recognizer r);
int marpa_r_progress_report_start ( Marpa_Recognizer r, Marpa_Earley_Set_ID set_id);
int marpa_r_progress_report_finish ( Marpa_Recognizer r );
Marpa_Rule_ID marpa_r_progress_item ( Marpa_Recognizer r, int* position, Marpa_Earley_Set_ID* origin );
Marpa_Bocage marpa_b_new (Marpa_Recognizer r, Marpa_Earley_Set_ID earley_set_ID);
Marpa_Bocage marpa_b_ref (Marpa_Bocage b);
void marpa_b_unref (Marpa_Bocage b);
int marpa_b_ambiguity_metric (Marpa_Bocage b);
int marpa_b_is_null (Marpa_Bocage b);
Marpa_Order marpa_o_new ( Marpa_Bocage b);
Marpa_Order marpa_o_ref ( Marpa_Order o);
void marpa_o_unref ( Marpa_Order o);
int marpa_o_ambiguity_metric (Marpa_Order o);
int marpa_o_is_null (Marpa_Order o);
int marpa_o_high_rank_only_set ( Marpa_Order o, int flag);
int marpa_o_high_rank_only ( Marpa_Order o);
int marpa_o_rank ( Marpa_Order o );
Marpa_Tree marpa_t_new (Marpa_Order o);
Marpa_Tree marpa_t_ref (Marpa_Tree t);
void marpa_t_unref (Marpa_Tree t);
int marpa_t_next ( Marpa_Tree t);
int marpa_t_parse_count ( Marpa_Tree t);
Marpa_Value marpa_v_new ( Marpa_Tree t );
Marpa_Value marpa_v_ref (Marpa_Value v);
void marpa_v_unref ( Marpa_Value v);
Marpa_Step_Type marpa_v_step ( Marpa_Value v);
Marpa_Event_Type marpa_g_event (Marpa_Grammar g, Marpa_Event* event, int ix);
int marpa_g_event_count ( Marpa_Grammar g );
Marpa_Error_Code marpa_g_error ( Marpa_Grammar g, const char** p_error_string);
Marpa_Error_Code marpa_g_error_clear ( Marpa_Grammar g );
Marpa_Rank marpa_g_default_rank_set ( Marpa_Grammar g, Marpa_Rank rank);
Marpa_Rank marpa_g_default_rank ( Marpa_Grammar g);
Marpa_Rank marpa_g_symbol_rank_set ( Marpa_Grammar g, Marpa_Symbol_ID sym_id, Marpa_Rank rank);
Marpa_Rank marpa_g_symbol_rank ( Marpa_Grammar g, Marpa_Symbol_ID sym_id);
Marpa_Assertion_ID marpa_g_zwa_new ( Marpa_Grammar g, int default_value);
int marpa_g_zwa_place ( Marpa_Grammar g, Marpa_Assertion_ID zwaid, Marpa_Rule_ID xrl_id, int rhs_ix);
int marpa_r_zwa_default ( Marpa_Recognizer r, Marpa_Assertion_ID zwaid);
int marpa_r_zwa_default_set ( Marpa_Recognizer r, Marpa_Assertion_ID zwaid, int default_value);
Marpa_Assertion_ID marpa_g_highest_zwa_id ( Marpa_Grammar g );
Marpa_Earleme marpa_r_clean ( Marpa_Recognizer r);
int marpa_g_symbol_is_valued_set ( Marpa_Grammar g, Marpa_Symbol_ID symbol_id, int value);
int marpa_g_symbol_is_valued ( Marpa_Grammar g, Marpa_Symbol_ID symbol_id);
int marpa_v_symbol_is_valued_set ( Marpa_Value v, Marpa_Symbol_ID sym_id, int status );
int marpa_v_symbol_is_valued ( Marpa_Value v, Marpa_Symbol_ID sym_id );
int marpa_v_rule_is_valued_set ( Marpa_Value v, Marpa_Rule_ID rule_id, int status );
int marpa_v_rule_is_valued ( Marpa_Value v, Marpa_Rule_ID rule_id );
int marpa_v_valued_force ( Marpa_Value v);
int _marpa_g_nsy_is_start ( Marpa_Grammar g, Marpa_NSY_ID nsy_id);
int _marpa_g_nsy_is_nulling ( Marpa_Grammar g, Marpa_NSY_ID nsy_id);
int _marpa_g_nsy_is_lhs ( Marpa_Grammar g, Marpa_NSY_ID nsy_id);
Marpa_NSY_ID _marpa_g_xsy_nulling_nsy ( Marpa_Grammar g, Marpa_Symbol_ID symid);
Marpa_NSY_ID _marpa_g_xsy_nsy ( Marpa_Grammar g, Marpa_Symbol_ID symid);
int _marpa_g_nsy_is_semantic ( Marpa_Grammar g, Marpa_NSY_ID nsy_id);
Marpa_Rule_ID _marpa_g_source_xsy ( Marpa_Grammar g, Marpa_NSY_ID nsy_id);
Marpa_Rule_ID _marpa_g_nsy_lhs_xrl ( Marpa_Grammar g, Marpa_NSY_ID nsy_id);
int _marpa_g_nsy_xrl_offset ( Marpa_Grammar g, Marpa_NSY_ID nsy_id );
int _marpa_g_rule_is_keep_separation ( Marpa_Grammar g, Marpa_Rule_ID rule_id);
int _marpa_g_nsy_count ( Marpa_Grammar g);
int _marpa_g_irl_count ( Marpa_Grammar g);
Marpa_Symbol_ID _marpa_g_irl_lhs ( Marpa_Grammar g, Marpa_IRL_ID irl_id);
int _marpa_g_irl_length ( Marpa_Grammar g, Marpa_IRL_ID irl_id);
Marpa_Symbol_ID _marpa_g_irl_rhs ( Marpa_Grammar g, Marpa_IRL_ID irl_id, int ix);
int _marpa_g_rule_is_used (Marpa_Grammar g, Marpa_Rule_ID rule_id);
int _marpa_g_irl_is_virtual_lhs (Marpa_Grammar g, Marpa_IRL_ID irl_id);
int _marpa_g_irl_is_virtual_rhs (Marpa_Grammar g, Marpa_IRL_ID irl_id);
int _marpa_g_virtual_start (Marpa_Grammar g, Marpa_IRL_ID irl_id);
int _marpa_g_virtual_end (Marpa_Grammar g, Marpa_IRL_ID irl_id);
Marpa_Rule_ID _marpa_g_source_xrl (Marpa_Grammar g, Marpa_IRL_ID irl_id);
int _marpa_g_real_symbol_count (Marpa_Grammar g, Marpa_IRL_ID irl_id);
Marpa_Rule_ID _marpa_g_irl_semantic_equivalent (Marpa_Grammar g, Marpa_IRL_ID irl_id);
Marpa_Rank _marpa_g_irl_rank ( Marpa_Grammar g, Marpa_IRL_ID irl_id);
Marpa_Rank _marpa_g_nsy_rank ( Marpa_Grammar g, Marpa_IRL_ID nsy_id);
int _marpa_g_ahm_count (Marpa_Grammar g);
Marpa_Rule_ID _marpa_g_ahm_irl (Marpa_Grammar g, Marpa_AHM_ID item_id);
int _marpa_g_ahm_position (Marpa_Grammar g, Marpa_AHM_ID item_id);
Marpa_Symbol_ID _marpa_g_ahm_postdot (Marpa_Grammar g, Marpa_AHM_ID item_id);
int _marpa_r_is_use_leo (Marpa_Recognizer r);
int _marpa_r_is_use_leo_set ( Marpa_Recognizer r, int value);
Marpa_Earley_Set_ID _marpa_r_trace_earley_set (Marpa_Recognizer r);
int _marpa_r_earley_set_size (Marpa_Recognizer r, Marpa_Earley_Set_ID set_id);
Marpa_Earleme _marpa_r_earley_set_trace (Marpa_Recognizer r, Marpa_Earley_Set_ID set_id);
Marpa_AHM_ID _marpa_r_earley_item_trace (Marpa_Recognizer r, Marpa_Earley_Item_ID item_id);
Marpa_Earley_Set_ID _marpa_r_earley_item_origin (Marpa_Recognizer r);
Marpa_Symbol_ID _marpa_r_leo_predecessor_symbol (Marpa_Recognizer r);
Marpa_Earley_Set_ID _marpa_r_leo_base_origin (Marpa_Recognizer r);
Marpa_AHM_ID _marpa_r_leo_base_state (Marpa_Recognizer r);
Marpa_Symbol_ID _marpa_r_postdot_symbol_trace (Marpa_Recognizer r, Marpa_Symbol_ID symid);
Marpa_Symbol_ID _marpa_r_first_postdot_item_trace (Marpa_Recognizer r);
Marpa_Symbol_ID _marpa_r_next_postdot_item_trace (Marpa_Recognizer r);
Marpa_Symbol_ID _marpa_r_postdot_item_symbol (Marpa_Recognizer r);
Marpa_Symbol_ID _marpa_r_first_token_link_trace (Marpa_Recognizer r);
Marpa_Symbol_ID _marpa_r_next_token_link_trace (Marpa_Recognizer r);
Marpa_Symbol_ID _marpa_r_first_completion_link_trace (Marpa_Recognizer r);
Marpa_Symbol_ID _marpa_r_next_completion_link_trace (Marpa_Recognizer r);
Marpa_Symbol_ID _marpa_r_first_leo_link_trace (Marpa_Recognizer r);
Marpa_Symbol_ID _marpa_r_next_leo_link_trace (Marpa_Recognizer r);
Marpa_AHM_ID _marpa_r_source_predecessor_state (Marpa_Recognizer r);
Marpa_Symbol_ID _marpa_r_source_token (Marpa_Recognizer r, int *value_p);
Marpa_Symbol_ID _marpa_r_source_leo_transition_symbol (Marpa_Recognizer r);
Marpa_Earley_Set_ID _marpa_r_source_middle (Marpa_Recognizer r);
int _marpa_b_and_node_count ( Marpa_Bocage b);
Marpa_Earley_Set_ID _marpa_b_and_node_middle ( Marpa_Bocage b, Marpa_And_Node_ID and_node_id);
int _marpa_b_and_node_parent ( Marpa_Bocage b, Marpa_And_Node_ID and_node_id);
int _marpa_b_and_node_predecessor ( Marpa_Bocage b, Marpa_And_Node_ID and_node_id);
int _marpa_b_and_node_cause ( Marpa_Bocage b, Marpa_And_Node_ID and_node_id);
int _marpa_b_and_node_symbol ( Marpa_Bocage b, Marpa_And_Node_ID and_node_id);
Marpa_Symbol_ID _marpa_b_and_node_token ( Marpa_Bocage b, Marpa_And_Node_ID and_node_id, int* value_p);
Marpa_Or_Node_ID _marpa_b_top_or_node ( Marpa_Bocage b);
int _marpa_b_or_node_set ( Marpa_Bocage b, Marpa_Or_Node_ID or_node_id);
int _marpa_b_or_node_origin ( Marpa_Bocage b, Marpa_Or_Node_ID or_node_id);
Marpa_IRL_ID _marpa_b_or_node_irl ( Marpa_Bocage b, Marpa_Or_Node_ID or_node_id);
int _marpa_b_or_node_position ( Marpa_Bocage b, Marpa_Or_Node_ID or_node_id);
int _marpa_b_or_node_is_whole ( Marpa_Bocage b, Marpa_Or_Node_ID or_node_id);
int _marpa_b_or_node_is_semantic ( Marpa_Bocage b, Marpa_Or_Node_ID or_node_id);
int _marpa_b_or_node_first_and ( Marpa_Bocage b, Marpa_Or_Node_ID or_node_id);
int _marpa_b_or_node_last_and ( Marpa_Bocage b, Marpa_Or_Node_ID or_node_id);
int _marpa_b_or_node_and_count ( Marpa_Bocage b, Marpa_Or_Node_ID or_node_id);
Marpa_And_Node_ID _marpa_o_and_order_get ( Marpa_Order o, Marpa_Or_Node_ID or_node_id, int ix);
int _marpa_o_or_node_and_node_count ( Marpa_Order o, Marpa_Or_Node_ID or_node_id);
int _marpa_o_or_node_and_node_id_by_ix ( Marpa_Order o, Marpa_Or_Node_ID or_node_id, int ix);
int _marpa_t_size ( Marpa_Tree t);
Marpa_Or_Node_ID _marpa_t_nook_or_node ( Marpa_Tree t, Marpa_Nook_ID nook_id);
int _marpa_t_nook_choice ( Marpa_Tree t, Marpa_Nook_ID nook_id );
int _marpa_t_nook_parent ( Marpa_Tree t, Marpa_Nook_ID nook_id );
int _marpa_t_nook_cause_is_ready ( Marpa_Tree t, Marpa_Nook_ID nook_id );
int _marpa_t_nook_predecessor_is_ready ( Marpa_Tree t, Marpa_Nook_ID nook_id );
int _marpa_t_nook_is_cause ( Marpa_Tree t, Marpa_Nook_ID nook_id );
int _marpa_t_nook_is_predecessor ( Marpa_Tree t, Marpa_Nook_ID nook_id );
int _marpa_v_trace ( Marpa_Value v, int flag);
Marpa_Nook_ID _marpa_v_nook ( Marpa_Value v);
const char* _marpa_tag(void);
int marpa_debug_level_set ( int level );
void marpa_debug_handler_set ( int (*debug_handler)(const char*, ...) );

#line 1 "./marpa.h.p90"

#endif /* |_MARPA_H__| */

