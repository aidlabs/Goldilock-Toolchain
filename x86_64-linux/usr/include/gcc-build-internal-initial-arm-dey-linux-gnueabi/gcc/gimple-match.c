/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */

#include "gimple-match-head.c"

bool
gimple_truth_valued_p (tree t, tree (*valueize)(tree))
{
tree type = TREE_TYPE (t);
{
/* #line 318 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = t;
/* #line 318 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:318, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
switch (TREE_CODE (t))
{
case SSA_NAME:
if (do_valueize (valueize, t) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (t);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case LT_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case LE_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case EQ_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case NE_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case GE_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case GT_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case UNORDERED_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case ORDERED_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case UNLT_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case UNLE_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case UNGT_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case UNGE_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case UNEQ_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case LTGT_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case TRUTH_AND_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case TRUTH_ANDIF_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case TRUTH_OR_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case TRUTH_ORIF_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case TRUTH_XOR_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
}
break;
}
case TRUTH_NOT_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
{
/* #line 323 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:323, %s:%d\n", __FILE__, __LINE__);
return true;
}
}
break;
}
default:;
}
}
break;
default:;
}
return false;
}

bool
gimple_logical_inverted_value (tree t, tree *res_ops, tree (*valueize)(tree))
{
tree type = TREE_TYPE (t);
switch (TREE_CODE (t))
{
case SSA_NAME:
if (do_valueize (valueize, t) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (t);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
if (gimple_truth_valued_p (op0, valueize))
{
{
/* #line 326 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:326, %s:%d\n", __FILE__, __LINE__);
  res_ops[0] = captures[0];
return true;
}
}
}
break;
}
case EQ_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
if (integer_zerop (op1))
{
{
/* #line 328 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:328, %s:%d\n", __FILE__, __LINE__);
  res_ops[0] = captures[0];
return true;
}
}
}
}
break;
}
case NE_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
if (gimple_truth_valued_p (op0, valueize))
{
if (integer_truep (op1))
{
{
/* #line 330 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:330, %s:%d\n", __FILE__, __LINE__);
  res_ops[0] = captures[0];
return true;
}
}
}
}
}
break;
}
case BIT_XOR_EXPR:
{
tree op0 = gimple_assign_rhs1 (def_stmt);
if ((op0 = do_valueize (valueize, op0)))
{
tree op1 = gimple_assign_rhs2 (def_stmt);
if ((op1 = do_valueize (valueize, op1)))
{
if (gimple_truth_valued_p (op0, valueize))
{
if (integer_truep (op1))
{
{
/* #line 332 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:332, %s:%d\n", __FILE__, __LINE__);
  res_ops[0] = captures[0];
return true;
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
return false;
}

static bool
gimple_simplify (code_helper *res_code, tree *res_ops,
                 gimple_seq *seq, tree (*valueize)(tree),
                 code_helper code, tree type, tree op0)
{
switch (code.get_rep())
{
case ABS_EXPR:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case NEGATE_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 260 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:260, %s:%d\n", __FILE__, __LINE__);
*res_code = ABS_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
break;
default:;
}
if (tree_expr_nonnegative_p (op0))
{
{
/* #line 263 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:263, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
break;
}
case BIT_NOT_EXPR:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 383 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:383, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
break;
}
case LT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 920 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (LT_EXPR, HONOR_NANS (captures[0]));
/* #line 919 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == GE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
*res_code = GE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 922 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (LT_EXPR, HONOR_NANS (captures[0]));
/* #line 921 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == UNGE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
*res_code = UNGE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
case LE_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 920 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (LE_EXPR, HONOR_NANS (captures[0]));
/* #line 919 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == GT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
*res_code = GT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 922 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (LE_EXPR, HONOR_NANS (captures[0]));
/* #line 921 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == UNGT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
*res_code = UNGT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
case EQ_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 920 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (EQ_EXPR, HONOR_NANS (captures[0]));
/* #line 919 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == NE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
*res_code = NE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 922 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (EQ_EXPR, HONOR_NANS (captures[0]));
/* #line 921 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == NE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
*res_code = NE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
case NE_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 920 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (NE_EXPR, HONOR_NANS (captures[0]));
/* #line 919 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == EQ_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
*res_code = EQ_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 922 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (NE_EXPR, HONOR_NANS (captures[0]));
/* #line 921 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == EQ_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
*res_code = EQ_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
case GE_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 920 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (GE_EXPR, HONOR_NANS (captures[0]));
/* #line 919 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == LT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
*res_code = LT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 922 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (GE_EXPR, HONOR_NANS (captures[0]));
/* #line 921 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == UNLT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
*res_code = UNLT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
case GT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 920 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (GT_EXPR, HONOR_NANS (captures[0]));
/* #line 919 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == LE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
*res_code = LE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 922 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (GT_EXPR, HONOR_NANS (captures[0]));
/* #line 921 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == UNLE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
*res_code = UNLE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
case UNORDERED_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 920 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNORDERED_EXPR, HONOR_NANS (captures[0]));
/* #line 919 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == ORDERED_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
*res_code = ORDERED_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 922 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNORDERED_EXPR, HONOR_NANS (captures[0]));
/* #line 921 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == ORDERED_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
*res_code = ORDERED_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
case ORDERED_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 920 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (ORDERED_EXPR, HONOR_NANS (captures[0]));
/* #line 919 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == UNORDERED_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
*res_code = UNORDERED_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 922 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (ORDERED_EXPR, HONOR_NANS (captures[0]));
/* #line 921 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == UNORDERED_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
*res_code = UNORDERED_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
case UNLT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 920 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNLT_EXPR, HONOR_NANS (captures[0]));
/* #line 919 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == GE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
*res_code = GE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 922 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNLT_EXPR, HONOR_NANS (captures[0]));
/* #line 921 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == GE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
*res_code = GE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
case UNLE_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 920 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNLE_EXPR, HONOR_NANS (captures[0]));
/* #line 919 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == GT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
*res_code = GT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 922 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNLE_EXPR, HONOR_NANS (captures[0]));
/* #line 921 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == GT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
*res_code = GT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
case UNGT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 920 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNGT_EXPR, HONOR_NANS (captures[0]));
/* #line 919 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == LE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
*res_code = LE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 922 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNGT_EXPR, HONOR_NANS (captures[0]));
/* #line 921 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == LE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
*res_code = LE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
case UNGE_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 920 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNGE_EXPR, HONOR_NANS (captures[0]));
/* #line 919 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == LT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
*res_code = LT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 922 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNGE_EXPR, HONOR_NANS (captures[0]));
/* #line 921 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == LT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
*res_code = LT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
case UNEQ_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 920 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNEQ_EXPR, HONOR_NANS (captures[0]));
/* #line 919 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == LTGT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
*res_code = LTGT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 922 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNEQ_EXPR, HONOR_NANS (captures[0]));
/* #line 921 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == LTGT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
*res_code = LTGT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
case LTGT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 920 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (LTGT_EXPR, HONOR_NANS (captures[0]));
/* #line 919 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == UNEQ_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
*res_code = UNEQ_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 922 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 911 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (VECTOR_TYPE_P (type) || (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1))
{
/* #line 917 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (LTGT_EXPR, HONOR_NANS (captures[0]));
/* #line 921 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == UNEQ_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
*res_code = UNEQ_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
break;
}
case NEGATE_EXPR:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case NEGATE_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
{
/* #line 452 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 450 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (tree_nop_conversion_p (type, TREE_TYPE (captures[0])) && !TYPE_OVERFLOW_SANITIZED (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:452, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
case NEGATE_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 452 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 450 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (tree_nop_conversion_p (type, TREE_TYPE (captures[0])) && !TYPE_OVERFLOW_SANITIZED (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:452, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
break;
}
CASE_CONVERT:
{
{
/* #line 625 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
/* #line 623 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((1 && useless_type_conversion_p (type, TREE_TYPE (captures[0]))) || (0 && type == TREE_TYPE (captures[0])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:625, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 697 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 691 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((1 && useless_type_conversion_p (type, inside_type)) || (0 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type))) && (((inter_int || inter_ptr) && final_int) || (inter_float && final_float)) && inter_prec >= final_prec)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:697, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 711 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 705 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((inter_int && inside_int) || (inter_float && inside_float)) && (final_int || final_float) && inter_prec >= inside_prec && (inter_float || inter_unsignedp == inside_unsignedp) && ! (final_prec != GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_MODE (type) == TYPE_MODE (inter_type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:711, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 721 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 717 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (inside_int && inter_int && final_int && ((inside_prec < inter_prec && inter_prec < final_prec && inside_unsignedp && !inter_unsignedp) || final_prec == inter_prec))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:721, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 746 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 734 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (! inside_float && ! inter_float && ! final_float && ! inside_vec && ! inter_vec && ! final_vec && (inter_prec >= inside_prec || inter_prec >= final_prec) && ! (inside_int && inter_int && inter_unsignedp != inside_unsignedp && inter_prec < final_prec) && ((inter_unsignedp && inter_prec > inside_prec) == (final_unsignedp && final_prec > inter_prec)) && ! (inside_ptr && inter_prec != final_prec) && ! (final_ptr && inside_prec != inter_prec) && ! (final_prec != GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_MODE (type) == TYPE_MODE (inter_type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:746, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 757 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 750 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (final_int && inter_int && inside_int && final_prec == inside_prec && final_prec > inter_prec && inter_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:757, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] =  wide_int_to_tree (inside_type, wi::mask (inter_prec, false, TYPE_PRECISION (inside_type)));
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 766 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 762 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (1 && inside_int && inter_float && final_int && (unsigned) significand_size (TYPE_MODE (inter_type)) >= inside_prec - !inside_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:766, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case FLOAT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 697 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 691 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((1 && useless_type_conversion_p (type, inside_type)) || (0 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type))) && (((inter_int || inter_ptr) && final_int) || (inter_float && final_float)) && inter_prec >= final_prec)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:697, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 711 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 705 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((inter_int && inside_int) || (inter_float && inside_float)) && (final_int || final_float) && inter_prec >= inside_prec && (inter_float || inter_unsignedp == inside_unsignedp) && ! (final_prec != GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_MODE (type) == TYPE_MODE (inter_type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:711, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 721 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 717 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (inside_int && inter_int && final_int && ((inside_prec < inter_prec && inter_prec < final_prec && inside_unsignedp && !inter_unsignedp) || final_prec == inter_prec))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:721, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 746 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 734 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (! inside_float && ! inter_float && ! final_float && ! inside_vec && ! inter_vec && ! final_vec && (inter_prec >= inside_prec || inter_prec >= final_prec) && ! (inside_int && inter_int && inter_unsignedp != inside_unsignedp && inter_prec < final_prec) && ((inter_unsignedp && inter_prec > inside_prec) == (final_unsignedp && final_prec > inter_prec)) && ! (inside_ptr && inter_prec != final_prec) && ! (final_ptr && inside_prec != inter_prec) && ! (final_prec != GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_MODE (type) == TYPE_MODE (inter_type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:746, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 757 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 750 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (final_int && inter_int && inside_int && final_prec == inside_prec && final_prec > inter_prec && inter_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:757, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] =  wide_int_to_tree (inside_type, wi::mask (inter_prec, false, TYPE_PRECISION (inside_type)));
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 766 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 762 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (1 && inside_int && inter_float && final_int && (unsigned) significand_size (TYPE_MODE (inter_type)) >= inside_prec - !inside_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:766, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BIT_AND_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o21))
{
case INTEGER_CST:
{
{
/* #line 778 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 773 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (INTEGRAL_TYPE_P (type) && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0])) && operand_equal_p (captures[1], build_low_bits_mask (TREE_TYPE (captures[1]), TYPE_PRECISION (type)), 0))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:778, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
}
case PLUS_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
switch (TREE_CODE (o21))
{
case SSA_NAME:
if (do_valueize (valueize, o21) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o21);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o50 = gimple_assign_rhs1 (def_stmt);
if ((o50 = do_valueize (valueize, o50)))
{
{
/* #line 1056 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[4] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o30;
captures[2] = o21;
captures[3] = o50;
/* #line 1032 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((INTEGRAL_TYPE_P (type) && INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && (TYPE_PRECISION (TREE_TYPE (captures[1])) == GET_MODE_PRECISION (TYPE_MODE (TREE_TYPE (captures[1])))) && (TYPE_PRECISION (TREE_TYPE (captures[3])) == GET_MODE_PRECISION (TYPE_MODE (TREE_TYPE (captures[3])))) && TYPE_PRECISION (type) == GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1])) && ((0 && (TYPE_MAIN_VARIANT (TREE_TYPE (captures[1])) == TYPE_MAIN_VARIANT (TREE_TYPE (captures[3]))) && (TYPE_MAIN_VARIANT (TREE_TYPE (captures[1])) == TYPE_MAIN_VARIANT (type))) || (1 && types_compatible_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[3])) && types_compatible_p (TREE_TYPE (captures[1]), type))))
/* #line 1055 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1056, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] = captures[3];
  code_helper tem_code = PLUS_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
{
/* #line 1058 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[4] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o30;
captures[2] = o21;
captures[3] = o50;
/* #line 1032 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (INTEGRAL_TYPE_P (type) && INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && (TYPE_PRECISION (TREE_TYPE (captures[1])) == GET_MODE_PRECISION (TYPE_MODE (TREE_TYPE (captures[1])))) && (TYPE_PRECISION (TREE_TYPE (captures[3])) == GET_MODE_PRECISION (TYPE_MODE (TREE_TYPE (captures[3])))) && TYPE_PRECISION (type) == GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1])) && ((0 && (TYPE_MAIN_VARIANT (TREE_TYPE (captures[1])) == TYPE_MAIN_VARIANT (TREE_TYPE (captures[3]))) && (TYPE_MAIN_VARIANT (TREE_TYPE (captures[1])) == TYPE_MAIN_VARIANT (type))) || (1 && types_compatible_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[3])) && types_compatible_p (TREE_TYPE (captures[1]), type))))
{
/* #line 1057 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree utype = unsigned_type_for (TREE_TYPE (captures[1]));
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1058, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
{
  tree ops1[2], res;
{
  tree ops2[1], res;
  ops2[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops2[0] };
  gimple_resimplify1 (seq, &tem_code, utype, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, utype, tem_ops, seq);
  if (!res) return false;
  ops1[0] = res;
}
{
  tree ops2[1], res;
  ops2[0] = captures[3];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops2[0] };
  gimple_resimplify1 (seq, &tem_code, utype, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, utype, tem_ops, seq);
  if (!res) return false;
  ops1[1] = res;
}
  code_helper tem_code = PLUS_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
case MINUS_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
switch (TREE_CODE (o21))
{
case SSA_NAME:
if (do_valueize (valueize, o21) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o21);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o50 = gimple_assign_rhs1 (def_stmt);
if ((o50 = do_valueize (valueize, o50)))
{
{
/* #line 1056 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[4] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o30;
captures[2] = o21;
captures[3] = o50;
/* #line 1032 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((INTEGRAL_TYPE_P (type) && INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && (TYPE_PRECISION (TREE_TYPE (captures[1])) == GET_MODE_PRECISION (TYPE_MODE (TREE_TYPE (captures[1])))) && (TYPE_PRECISION (TREE_TYPE (captures[3])) == GET_MODE_PRECISION (TYPE_MODE (TREE_TYPE (captures[3])))) && TYPE_PRECISION (type) == GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1])) && ((0 && (TYPE_MAIN_VARIANT (TREE_TYPE (captures[1])) == TYPE_MAIN_VARIANT (TREE_TYPE (captures[3]))) && (TYPE_MAIN_VARIANT (TREE_TYPE (captures[1])) == TYPE_MAIN_VARIANT (type))) || (1 && types_compatible_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[3])) && types_compatible_p (TREE_TYPE (captures[1]), type))))
/* #line 1055 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1056, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] = captures[3];
  code_helper tem_code = MINUS_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
{
/* #line 1058 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[4] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o30;
captures[2] = o21;
captures[3] = o50;
/* #line 1032 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (INTEGRAL_TYPE_P (type) && INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && (TYPE_PRECISION (TREE_TYPE (captures[1])) == GET_MODE_PRECISION (TYPE_MODE (TREE_TYPE (captures[1])))) && (TYPE_PRECISION (TREE_TYPE (captures[3])) == GET_MODE_PRECISION (TYPE_MODE (TREE_TYPE (captures[3])))) && TYPE_PRECISION (type) == GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1])) && ((0 && (TYPE_MAIN_VARIANT (TREE_TYPE (captures[1])) == TYPE_MAIN_VARIANT (TREE_TYPE (captures[3]))) && (TYPE_MAIN_VARIANT (TREE_TYPE (captures[1])) == TYPE_MAIN_VARIANT (type))) || (1 && types_compatible_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[3])) && types_compatible_p (TREE_TYPE (captures[1]), type))))
{
/* #line 1057 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree utype = unsigned_type_for (TREE_TYPE (captures[1]));
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1058, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
{
  tree ops1[2], res;
{
  tree ops2[1], res;
  ops2[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops2[0] };
  gimple_resimplify1 (seq, &tem_code, utype, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, utype, tem_ops, seq);
  if (!res) return false;
  ops1[0] = res;
}
{
  tree ops2[1], res;
  ops2[0] = captures[3];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops2[0] };
  gimple_resimplify1 (seq, &tem_code, utype, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, utype, tem_ops, seq);
  if (!res) return false;
  ops1[1] = res;
}
  code_helper tem_code = MINUS_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
break;
}
case VIEW_CONVERT_EXPR:
{
{
/* #line 625 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
/* #line 623 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((1 && useless_type_conversion_p (type, TREE_TYPE (captures[0]))) || (0 && type == TREE_TYPE (captures[0])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:625, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case VIEW_CONVERT_EXPR:
{
tree o20 = TREE_OPERAND (gimple_assign_rhs1 (def_stmt), 0);
if ((TREE_CODE (o20) == SSA_NAME
|| is_gimple_min_invariant (o20))
&& (o20 = do_valueize (valueize, o20)))
{
{
/* #line 630 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:630, %s:%d\n", __FILE__, __LINE__);
*res_code = VIEW_CONVERT_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
break;
default:;
}
{
/* #line 639 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
/* #line 636 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((INTEGRAL_TYPE_P (type) || POINTER_TYPE_P (type)) && (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))) && TYPE_PRECISION (type) == TYPE_PRECISION (TREE_TYPE (captures[0])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:639, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 648 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
/* #line 644 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))) && (INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) || POINTER_TYPE_P (TREE_TYPE (captures[1]))) && (TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (TREE_TYPE (captures[1]))) && (TYPE_SIZE (TREE_TYPE (captures[0])) == TYPE_SIZE (TREE_TYPE (captures[1]))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:648, %s:%d\n", __FILE__, __LINE__);
*res_code = VIEW_CONVERT_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
break;
}
case FLOAT_EXPR:
{
{
/* #line 625 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
/* #line 623 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((1 && useless_type_conversion_p (type, TREE_TYPE (captures[0]))) || (0 && type == TREE_TYPE (captures[0])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:625, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 697 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 691 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((1 && useless_type_conversion_p (type, inside_type)) || (0 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type))) && (((inter_int || inter_ptr) && final_int) || (inter_float && final_float)) && inter_prec >= final_prec)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:697, %s:%d\n", __FILE__, __LINE__);
*res_code = FLOAT_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 711 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 705 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((inter_int && inside_int) || (inter_float && inside_float)) && (final_int || final_float) && inter_prec >= inside_prec && (inter_float || inter_unsignedp == inside_unsignedp) && ! (final_prec != GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_MODE (type) == TYPE_MODE (inter_type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:711, %s:%d\n", __FILE__, __LINE__);
*res_code = FLOAT_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 721 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 717 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (inside_int && inter_int && final_int && ((inside_prec < inter_prec && inter_prec < final_prec && inside_unsignedp && !inter_unsignedp) || final_prec == inter_prec))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:721, %s:%d\n", __FILE__, __LINE__);
*res_code = FLOAT_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 746 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 734 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (! inside_float && ! inter_float && ! final_float && ! inside_vec && ! inter_vec && ! final_vec && (inter_prec >= inside_prec || inter_prec >= final_prec) && ! (inside_int && inter_int && inter_unsignedp != inside_unsignedp && inter_prec < final_prec) && ((inter_unsignedp && inter_prec > inside_prec) == (final_unsignedp && final_prec > inter_prec)) && ! (inside_ptr && inter_prec != final_prec) && ! (final_ptr && inside_prec != inter_prec) && ! (final_prec != GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_MODE (type) == TYPE_MODE (inter_type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:746, %s:%d\n", __FILE__, __LINE__);
*res_code = FLOAT_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 757 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 750 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (final_int && inter_int && inside_int && final_prec == inside_prec && final_prec > inter_prec && inter_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:757, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] =  wide_int_to_tree (inside_type, wi::mask (inter_prec, false, TYPE_PRECISION (inside_type)));
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 766 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 762 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (1 && inside_int && inter_float && final_int && (unsigned) significand_size (TYPE_MODE (inter_type)) >= inside_prec - !inside_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:766, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case FLOAT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 697 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 691 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((1 && useless_type_conversion_p (type, inside_type)) || (0 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type))) && (((inter_int || inter_ptr) && final_int) || (inter_float && final_float)) && inter_prec >= final_prec)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:697, %s:%d\n", __FILE__, __LINE__);
*res_code = FLOAT_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 711 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 705 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((inter_int && inside_int) || (inter_float && inside_float)) && (final_int || final_float) && inter_prec >= inside_prec && (inter_float || inter_unsignedp == inside_unsignedp) && ! (final_prec != GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_MODE (type) == TYPE_MODE (inter_type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:711, %s:%d\n", __FILE__, __LINE__);
*res_code = FLOAT_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 721 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 717 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (inside_int && inter_int && final_int && ((inside_prec < inter_prec && inter_prec < final_prec && inside_unsignedp && !inter_unsignedp) || final_prec == inter_prec))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:721, %s:%d\n", __FILE__, __LINE__);
*res_code = FLOAT_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 746 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 734 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (! inside_float && ! inter_float && ! final_float && ! inside_vec && ! inter_vec && ! final_vec && (inter_prec >= inside_prec || inter_prec >= final_prec) && ! (inside_int && inter_int && inter_unsignedp != inside_unsignedp && inter_prec < final_prec) && ((inter_unsignedp && inter_prec > inside_prec) == (final_unsignedp && final_prec > inter_prec)) && ! (inside_ptr && inter_prec != final_prec) && ! (final_ptr && inside_prec != inter_prec) && ! (final_prec != GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_MODE (type) == TYPE_MODE (inter_type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:746, %s:%d\n", __FILE__, __LINE__);
*res_code = FLOAT_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 757 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 750 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (final_int && inter_int && inside_int && final_prec == inside_prec && final_prec > inter_prec && inter_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:757, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] =  wide_int_to_tree (inside_type, wi::mask (inter_prec, false, TYPE_PRECISION (inside_type)));
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 766 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 762 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (1 && inside_int && inter_float && final_int && (unsigned) significand_size (TYPE_MODE (inter_type)) >= inside_prec - !inside_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:766, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
break;
}
case FIX_TRUNC_EXPR:
{
{
/* #line 625 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
/* #line 623 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((1 && useless_type_conversion_p (type, TREE_TYPE (captures[0]))) || (0 && type == TREE_TYPE (captures[0])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:625, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 697 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 691 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((1 && useless_type_conversion_p (type, inside_type)) || (0 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type))) && (((inter_int || inter_ptr) && final_int) || (inter_float && final_float)) && inter_prec >= final_prec)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:697, %s:%d\n", __FILE__, __LINE__);
*res_code = FIX_TRUNC_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 711 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 705 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((inter_int && inside_int) || (inter_float && inside_float)) && (final_int || final_float) && inter_prec >= inside_prec && (inter_float || inter_unsignedp == inside_unsignedp) && ! (final_prec != GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_MODE (type) == TYPE_MODE (inter_type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:711, %s:%d\n", __FILE__, __LINE__);
*res_code = FIX_TRUNC_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 721 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 717 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (inside_int && inter_int && final_int && ((inside_prec < inter_prec && inter_prec < final_prec && inside_unsignedp && !inter_unsignedp) || final_prec == inter_prec))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:721, %s:%d\n", __FILE__, __LINE__);
*res_code = FIX_TRUNC_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 746 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 734 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (! inside_float && ! inter_float && ! final_float && ! inside_vec && ! inter_vec && ! final_vec && (inter_prec >= inside_prec || inter_prec >= final_prec) && ! (inside_int && inter_int && inter_unsignedp != inside_unsignedp && inter_prec < final_prec) && ((inter_unsignedp && inter_prec > inside_prec) == (final_unsignedp && final_prec > inter_prec)) && ! (inside_ptr && inter_prec != final_prec) && ! (final_ptr && inside_prec != inter_prec) && ! (final_prec != GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_MODE (type) == TYPE_MODE (inter_type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:746, %s:%d\n", __FILE__, __LINE__);
*res_code = FIX_TRUNC_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 757 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 750 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (final_int && inter_int && inside_int && final_prec == inside_prec && final_prec > inter_prec && inter_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:757, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] =  wide_int_to_tree (inside_type, wi::mask (inter_prec, false, TYPE_PRECISION (inside_type)));
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 766 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 762 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (1 && inside_int && inter_float && final_int && (unsigned) significand_size (TYPE_MODE (inter_type)) >= inside_prec - !inside_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:766, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case FLOAT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 697 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 691 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((1 && useless_type_conversion_p (type, inside_type)) || (0 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type))) && (((inter_int || inter_ptr) && final_int) || (inter_float && final_float)) && inter_prec >= final_prec)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:697, %s:%d\n", __FILE__, __LINE__);
*res_code = FIX_TRUNC_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 711 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 705 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((inter_int && inside_int) || (inter_float && inside_float)) && (final_int || final_float) && inter_prec >= inside_prec && (inter_float || inter_unsignedp == inside_unsignedp) && ! (final_prec != GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_MODE (type) == TYPE_MODE (inter_type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:711, %s:%d\n", __FILE__, __LINE__);
*res_code = FIX_TRUNC_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 721 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 717 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (inside_int && inter_int && final_int && ((inside_prec < inter_prec && inter_prec < final_prec && inside_unsignedp && !inter_unsignedp) || final_prec == inter_prec))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:721, %s:%d\n", __FILE__, __LINE__);
*res_code = FIX_TRUNC_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 746 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 734 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (! inside_float && ! inter_float && ! final_float && ! inside_vec && ! inter_vec && ! final_vec && (inter_prec >= inside_prec || inter_prec >= final_prec) && ! (inside_int && inter_int && inter_unsignedp != inside_unsignedp && inter_prec < final_prec) && ((inter_unsignedp && inter_prec > inside_prec) == (final_unsignedp && final_prec > inter_prec)) && ! (inside_ptr && inter_prec != final_prec) && ! (final_ptr && inside_prec != inter_prec) && ! (final_prec != GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_MODE (type) == TYPE_MODE (inter_type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:746, %s:%d\n", __FILE__, __LINE__);
*res_code = FIX_TRUNC_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 757 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 750 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (final_int && inter_int && inside_int && final_prec == inside_prec && final_prec > inter_prec && inter_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:757, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] =  wide_int_to_tree (inside_type, wi::mask (inter_prec, false, TYPE_PRECISION (inside_type)));
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 766 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
{
/* #line 664 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = TYPE_PRECISION (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = TYPE_PRECISION (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = TYPE_PRECISION (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
/* #line 762 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (1 && inside_int && inter_float && final_int && (unsigned) significand_size (TYPE_MODE (inter_type)) >= inside_prec - !inside_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:766, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
break;
}
case PAREN_EXPR:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case PAREN_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 657 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:657, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
break;
}
default:;
}
}
break;
default:;
}
if (CONSTANT_CLASS_P (op0))
{
{
/* #line 654 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:654, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
break;
}
case REALPART_EXPR:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case COMPLEX_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 827 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:827, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
break;
}
case IMAGPART_EXPR:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case COMPLEX_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 830 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:830, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[1];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
break;
}
case -BUILT_IN_BSWAP16:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP16:
{
tree o30 = gimple_call_arg (def_stmt, 0);
if ((o30 = do_valueize (valueize, o30)))
{
{
/* #line 840 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:840, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_NOT_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
}
break;
}
case BIT_XOR_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP16:
{
tree o30 = gimple_call_arg (def_stmt, 0);
if ((o30 = do_valueize (valueize, o30)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_XOR_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP16;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
switch (TREE_CODE (o21))
{
case SSA_NAME:
if (do_valueize (valueize, o21) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o21);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP16:
{
tree o40 = gimple_call_arg (def_stmt, 0);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o40;
captures[1] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_XOR_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP16;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
}
}
break;
}
case BIT_IOR_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP16:
{
tree o30 = gimple_call_arg (def_stmt, 0);
if ((o30 = do_valueize (valueize, o30)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_IOR_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP16;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
switch (TREE_CODE (o21))
{
case SSA_NAME:
if (do_valueize (valueize, o21) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o21);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP16:
{
tree o40 = gimple_call_arg (def_stmt, 0);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o40;
captures[1] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_IOR_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP16;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
}
}
break;
}
case BIT_AND_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP16:
{
tree o30 = gimple_call_arg (def_stmt, 0);
if ((o30 = do_valueize (valueize, o30)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP16;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
switch (TREE_CODE (o21))
{
case SSA_NAME:
if (do_valueize (valueize, o21) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o21);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP16:
{
tree o40 = gimple_call_arg (def_stmt, 0);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o40;
captures[1] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP16;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
}
}
break;
}
default:;
}
else if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP16:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 837 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:837, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
break;
}
case -BUILT_IN_BSWAP32:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP32:
{
tree o30 = gimple_call_arg (def_stmt, 0);
if ((o30 = do_valueize (valueize, o30)))
{
{
/* #line 840 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:840, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_NOT_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
}
break;
}
case BIT_XOR_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP32:
{
tree o30 = gimple_call_arg (def_stmt, 0);
if ((o30 = do_valueize (valueize, o30)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_XOR_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP32;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
switch (TREE_CODE (o21))
{
case SSA_NAME:
if (do_valueize (valueize, o21) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o21);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP32:
{
tree o40 = gimple_call_arg (def_stmt, 0);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o40;
captures[1] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_XOR_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP32;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
}
}
break;
}
case BIT_IOR_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP32:
{
tree o30 = gimple_call_arg (def_stmt, 0);
if ((o30 = do_valueize (valueize, o30)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_IOR_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP32;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
switch (TREE_CODE (o21))
{
case SSA_NAME:
if (do_valueize (valueize, o21) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o21);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP32:
{
tree o40 = gimple_call_arg (def_stmt, 0);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o40;
captures[1] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_IOR_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP32;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
}
}
break;
}
case BIT_AND_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP32:
{
tree o30 = gimple_call_arg (def_stmt, 0);
if ((o30 = do_valueize (valueize, o30)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP32;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
switch (TREE_CODE (o21))
{
case SSA_NAME:
if (do_valueize (valueize, o21) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o21);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP32:
{
tree o40 = gimple_call_arg (def_stmt, 0);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o40;
captures[1] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP32;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
}
}
break;
}
default:;
}
else if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP32:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 837 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:837, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
break;
}
case -BUILT_IN_BSWAP64:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP64:
{
tree o30 = gimple_call_arg (def_stmt, 0);
if ((o30 = do_valueize (valueize, o30)))
{
{
/* #line 840 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:840, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_NOT_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
}
break;
}
case BIT_XOR_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP64:
{
tree o30 = gimple_call_arg (def_stmt, 0);
if ((o30 = do_valueize (valueize, o30)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_XOR_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP64;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
switch (TREE_CODE (o21))
{
case SSA_NAME:
if (do_valueize (valueize, o21) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o21);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP64:
{
tree o40 = gimple_call_arg (def_stmt, 0);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o40;
captures[1] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_XOR_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP64;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
}
}
break;
}
case BIT_IOR_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP64:
{
tree o30 = gimple_call_arg (def_stmt, 0);
if ((o30 = do_valueize (valueize, o30)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_IOR_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP64;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
switch (TREE_CODE (o21))
{
case SSA_NAME:
if (do_valueize (valueize, o21) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o21);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP64:
{
tree o40 = gimple_call_arg (def_stmt, 0);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o40;
captures[1] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_IOR_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP64;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
}
}
break;
}
case BIT_AND_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP64:
{
tree o30 = gimple_call_arg (def_stmt, 0);
if ((o30 = do_valueize (valueize, o30)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP64;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
switch (TREE_CODE (o21))
{
case SSA_NAME:
if (do_valueize (valueize, o21) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o21);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP64:
{
tree o40 = gimple_call_arg (def_stmt, 0);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 844 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o40;
captures[1] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:844, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = BUILT_IN_BSWAP64;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
}
}
break;
}
default:;
}
else if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_BSWAP64:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 837 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:837, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
break;
}
default:;
}
}
}
break;
default:;
}
break;
}
case -BUILT_IN_LOGF:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_EXPF:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 954 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:954, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXPF) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOGF;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXP2F:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP2F) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOGF;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXP10F:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP10F) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOGF;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POW10F:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_POW10F) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOGF;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_SQRTF:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_SQRTF) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOGF;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_CBRTF:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_CBRTF) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOGF;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POWF:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_call_arg (def_stmt, 1);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 1016 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1016, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] = captures[1];
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOGF;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
}
break;
default:;
}
break;
}
case -BUILT_IN_LOG:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_EXP:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 954 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:954, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXP2:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP2) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXP10:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP10) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POW10:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_POW10) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_SQRT:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_SQRT) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_CBRT:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_CBRT) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POW:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_call_arg (def_stmt, 1);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 1016 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1016, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] = captures[1];
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
}
break;
default:;
}
break;
}
case -BUILT_IN_LOGL:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_EXPL:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 954 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:954, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXPL) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOGL;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXP2L:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP2L) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOGL;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXP10L:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP10L) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOGL;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POW10L:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_POW10L) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOGL;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_SQRTL:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_SQRTL) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOGL;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_CBRTL:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_CBRTL) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOGL;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POWL:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_call_arg (def_stmt, 1);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 1016 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1016, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] = captures[1];
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOGL;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
}
break;
default:;
}
break;
}
case -BUILT_IN_LOG2F:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_EXP2F:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 954 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:954, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP2F) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG2F;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXPF:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXPF) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG2F;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXP10F:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP10F) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG2F;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POW10F:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_POW10F) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG2F;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_SQRTF:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_SQRTF) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG2F;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_CBRTF:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_CBRTF) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG2F;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POWF:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_call_arg (def_stmt, 1);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 1016 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1016, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] = captures[1];
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG2F;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
}
break;
default:;
}
break;
}
case -BUILT_IN_LOG2:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_EXP2:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 954 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:954, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP2) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG2;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXP:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG2;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXP10:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP10) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG2;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POW10:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_POW10) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG2;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_SQRT:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_SQRT) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG2;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_CBRT:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_CBRT) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG2;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POW:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_call_arg (def_stmt, 1);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 1016 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1016, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] = captures[1];
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG2;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
}
break;
default:;
}
break;
}
case -BUILT_IN_LOG2L:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_EXP2L:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 954 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:954, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP2L) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG2L;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXPL:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXPL) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG2L;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXP10L:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP10L) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG2L;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POW10L:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_POW10L) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG2L;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_SQRTL:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_SQRTL) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG2L;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_CBRTL:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_CBRTL) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG2L;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POWL:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_call_arg (def_stmt, 1);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 1016 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1016, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] = captures[1];
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG2L;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
}
break;
default:;
}
break;
}
case -BUILT_IN_LOG10F:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_EXP10F:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 954 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:954, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP10F) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG10F;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXPF:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXPF) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG10F;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXP2F:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP2F) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG10F;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POW10F:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_POW10F) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG10F;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_SQRTF:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_SQRTF) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG10F;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_CBRTF:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_CBRTF) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG10F;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POWF:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_call_arg (def_stmt, 1);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 1016 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1016, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] = captures[1];
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG10F;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
}
break;
default:;
}
break;
}
case -BUILT_IN_LOG10:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_EXP10:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 954 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:954, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP10) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG10;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXP:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG10;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXP2:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP2) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG10;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POW10:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_POW10) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG10;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_SQRT:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_SQRT) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG10;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_CBRT:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_CBRT) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG10;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POW:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_call_arg (def_stmt, 1);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 1016 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1016, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] = captures[1];
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG10;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
}
break;
default:;
}
break;
}
case -BUILT_IN_LOG10L:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (gimple_call_builtin_p (def_stmt, BUILT_IN_NORMAL))
{
tree fndecl = gimple_call_fndecl (def_stmt);
switch (DECL_FUNCTION_CODE (fndecl))
{
case BUILT_IN_EXP10L:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 954 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:954, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP10L) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG10L;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXPL:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXPL) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG10L;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_EXP2L:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_EXP2L) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG10L;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POW10L:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 988 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 964 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_POW10L) { CASE_FLT_FN (BUILT_IN_EXP): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_e ()));
 break;
 CASE_FLT_FN (BUILT_IN_EXP2): x = build_real (type, dconst2);
 break;
 CASE_FLT_FN (BUILT_IN_EXP10): CASE_FLT_FN (BUILT_IN_POW10): { REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 } break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:988, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
{
  tree ops1[1], res;
  ops1[0] =  x;
  code_helper tem_code = BUILT_IN_LOG10L;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[0];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_SQRTL:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_SQRTL) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG10L;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_CBRTL:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 1010 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
/* #line 995 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree x;
 switch (BUILT_IN_CBRTL) { CASE_FLT_FN (BUILT_IN_SQRT): x = build_real (type, dconsthalf);
 break;
 CASE_FLT_FN (BUILT_IN_CBRT): x = build_real (type, real_value_truncate (TYPE_MODE (type), dconst_third ()));
 break;
 }{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1010, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] =  x;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG10L;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case BUILT_IN_POWL:
{
tree o20 = gimple_call_arg (def_stmt, 0);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_call_arg (def_stmt, 1);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 1016 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 948 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (flag_unsafe_math_optimizations)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1016, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] = captures[1];
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = BUILT_IN_LOG10L;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
}
break;
default:;
}
break;
}
default:;
}
return false;
}

static bool
gimple_simplify (code_helper *res_code, tree *res_ops,
                 gimple_seq *seq, tree (*valueize)(tree),
                 code_helper code, tree type, tree op0, tree op1)
{
switch (code.get_rep())
{
case PLUS_EXPR:
{
if (integer_zerop (op1))
{
{
/* #line 49 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:49, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (real_zerop (op1))
{
{
/* #line 61 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 60 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (fold_real_zero_addition_p (type, captures[1], 0))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:61, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
switch (TREE_CODE (o40))
{
case SSA_NAME:
if (do_valueize (valueize, o40) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o40);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case NEGATE_EXPR:
{
tree o50 = gimple_assign_rhs1 (def_stmt);
if ((o50 = do_valueize (valueize, o50)))
{
{
/* #line 439 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o50;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 436 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (tree_nop_conversion_p (type, TREE_TYPE (captures[0])) && tree_nop_conversion_p (type, TREE_TYPE (captures[1])) && !TYPE_OVERFLOW_SANITIZED (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:439, %s:%d\n", __FILE__, __LINE__);
*res_code = MINUS_EXPR;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case NEGATE_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o50 = gimple_assign_rhs1 (def_stmt);
if ((o50 = do_valueize (valueize, o50)))
{
{
/* #line 439 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o50;
captures[1] = o30;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 436 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (tree_nop_conversion_p (type, TREE_TYPE (captures[0])) && tree_nop_conversion_p (type, TREE_TYPE (captures[1])) && !TYPE_OVERFLOW_SANITIZED (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:439, %s:%d\n", __FILE__, __LINE__);
*res_code = MINUS_EXPR;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case NEGATE_EXPR:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 439 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o40;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 436 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (tree_nop_conversion_p (type, TREE_TYPE (captures[0])) && tree_nop_conversion_p (type, TREE_TYPE (captures[1])) && !TYPE_OVERFLOW_SANITIZED (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:439, %s:%d\n", __FILE__, __LINE__);
*res_code = MINUS_EXPR;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
case NEGATE_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 439 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o40;
captures[1] = o20;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 436 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (tree_nop_conversion_p (type, TREE_TYPE (captures[0])) && tree_nop_conversion_p (type, TREE_TYPE (captures[1])) && !TYPE_OVERFLOW_SANITIZED (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:439, %s:%d\n", __FILE__, __LINE__);
*res_code = MINUS_EXPR;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
default:;
}
}
break;
default:;
}
if (real_zerop (op0))
{
{
/* #line 61 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op1;
captures[1] = op0;
/* #line 60 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (fold_real_zero_addition_p (type, captures[1], 0))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:61, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
switch (TREE_CODE (o30))
{
case SSA_NAME:
if (do_valueize (valueize, o30) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o30);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case NEGATE_EXPR:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 439 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o40;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 436 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (tree_nop_conversion_p (type, TREE_TYPE (captures[0])) && tree_nop_conversion_p (type, TREE_TYPE (captures[1])) && !TYPE_OVERFLOW_SANITIZED (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:439, %s:%d\n", __FILE__, __LINE__);
*res_code = MINUS_EXPR;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case NEGATE_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
{
/* #line 439 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op1;
captures[1] = o30;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 436 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (tree_nop_conversion_p (type, TREE_TYPE (captures[0])) && tree_nop_conversion_p (type, TREE_TYPE (captures[1])) && !TYPE_OVERFLOW_SANITIZED (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:439, %s:%d\n", __FILE__, __LINE__);
*res_code = MINUS_EXPR;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case NEGATE_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
{
/* #line 439 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o30;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 436 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (tree_nop_conversion_p (type, TREE_TYPE (captures[0])) && tree_nop_conversion_p (type, TREE_TYPE (captures[1])) && !TYPE_OVERFLOW_SANITIZED (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:439, %s:%d\n", __FILE__, __LINE__);
*res_code = MINUS_EXPR;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case NEGATE_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
{
/* #line 439 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op1;
captures[1] = o20;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 436 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (tree_nop_conversion_p (type, TREE_TYPE (captures[0])) && tree_nop_conversion_p (type, TREE_TYPE (captures[1])) && !TYPE_OVERFLOW_SANITIZED (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:439, %s:%d\n", __FILE__, __LINE__);
*res_code = MINUS_EXPR;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
case MINUS_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (op1 == o21 || operand_equal_p (op1, o21, 0))
{
{
/* #line 472 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:472, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case MINUS_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
tree o31 = gimple_assign_rhs2 (def_stmt);
if ((o31 = do_valueize (valueize, o31)))
{
if (o31 == op0 || operand_equal_p (o31, op0, 0))
{
{
/* #line 472 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = op0;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:472, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case PLUS_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (CONSTANT_CLASS_P (o21))
{
if (CONSTANT_CLASS_P (op1))
{
{
/* #line 491 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = op1;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type)))
{
/* #line 488 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree cst = fold_binary (PLUS_EXPR == PLUS_EXPR ? PLUS_EXPR : MINUS_EXPR, type, captures[1], captures[2]);
/* #line 490 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (cst && !TREE_OVERFLOW (cst))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:491, %s:%d\n", __FILE__, __LINE__);
*res_code = PLUS_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  cst;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
}
break;
}
case MINUS_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (CONSTANT_CLASS_P (o21))
{
if (CONSTANT_CLASS_P (op1))
{
{
/* #line 491 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = op1;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type)))
{
/* #line 488 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree cst = fold_binary (PLUS_EXPR == MINUS_EXPR ? PLUS_EXPR : MINUS_EXPR, type, captures[1], captures[2]);
/* #line 490 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (cst && !TREE_OVERFLOW (cst))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:491, %s:%d\n", __FILE__, __LINE__);
*res_code = MINUS_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  cst;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
if (CONSTANT_CLASS_P (o20))
{
if (CONSTANT_CLASS_P (op1))
{
{
/* #line 499 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = op1;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type)))
{
/* #line 497 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree cst = fold_binary (PLUS_EXPR, type, captures[0], captures[2]);
/* #line 498 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (cst && !TREE_OVERFLOW (cst))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:499, %s:%d\n", __FILE__, __LINE__);
*res_code = MINUS_EXPR;
  res_ops[0] =  cst;
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
}
break;
}
case BIT_NOT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
if (op1 == o20 || operand_equal_p (op1, o20, 0))
{
{
/* #line 505 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type))
/* #line 504 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!TYPE_OVERFLOW_TRAPS (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:505, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_all_ones_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 505 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type))
/* #line 504 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!TYPE_OVERFLOW_TRAPS (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:505, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_all_ones_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
if (integer_each_onep (op1))
{
{
/* #line 511 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type))
/* #line 510 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:511, %s:%d\n", __FILE__, __LINE__);
*res_code = NEGATE_EXPR;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
case BIT_NOT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
if (integer_each_onep (op1))
{
{
/* #line 511 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type))
/* #line 510 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:511, %s:%d\n", __FILE__, __LINE__);
*res_code = NEGATE_EXPR;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op1))
{
case REAL_CST:
{
{
/* #line 796 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 793 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[1])))
{
/* #line 794 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree tem = fold_unary (NEGATE_EXPR, type, captures[1]);
/* #line 795 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!TREE_OVERFLOW (tem) || !flag_trapping_math)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:796, %s:%d\n", __FILE__, __LINE__);
*res_code = MINUS_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  tem;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
if (op1 == op0 || operand_equal_p (op1, op0, 0))
{
{
/* #line 802 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
/* #line 801 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (SCALAR_FLOAT_TYPE_P (type))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:802, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  build_real (type, dconst2);
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
case POINTER_PLUS_EXPR:
{
if (integer_zerop (op1))
{
{
/* #line 49 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:49, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case POINTER_PLUS_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
{
/* #line 397 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[4] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
captures[2] = o21;
captures[3] = op1;
/* #line 396 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (TREE_CODE (captures[0]) != SSA_NAME || has_single_use (captures[0]))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:397, %s:%d\n", __FILE__, __LINE__);
*res_code = POINTER_PLUS_EXPR;
  res_ops[0] = captures[1];
{
  tree ops1[2], res;
  ops1[0] = captures[2];
  ops1[1] = captures[3];
  code_helper tem_code = PLUS_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
if (integer_zerop (op0))
{
{
/* #line 54 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:54, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
switch (TREE_CODE (o30))
{
case SSA_NAME:
if (do_valueize (valueize, o30) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o30);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case MINUS_EXPR:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
tree o41 = gimple_assign_rhs2 (def_stmt);
if ((o41 = do_valueize (valueize, o41)))
{
switch (TREE_CODE (o40))
{
case SSA_NAME:
if (do_valueize (valueize, o40) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o40);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o50 = gimple_assign_rhs1 (def_stmt);
if ((o50 = do_valueize (valueize, o50)))
{
switch (TREE_CODE (o41))
{
case SSA_NAME:
if (do_valueize (valueize, o41) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o41);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o70 = gimple_assign_rhs1 (def_stmt);
if ((o70 = do_valueize (valueize, o70)))
{
if (o70 == op0 || operand_equal_p (o70, op0, 0))
{
{
/* #line 413 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[4] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
captures[2] = o30;
captures[3] = o50;
/* #line 410 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (TREE_TYPE (captures[2])) && ((1 && useless_type_conversion_p (type, TREE_TYPE (captures[3]))) || (0 && type == TREE_TYPE (captures[3]))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:413, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[3];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
case MINUS_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
tree o31 = gimple_assign_rhs2 (def_stmt);
if ((o31 = do_valueize (valueize, o31)))
{
switch (TREE_CODE (o30))
{
case SSA_NAME:
if (do_valueize (valueize, o30) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o30);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
switch (TREE_CODE (o31))
{
case SSA_NAME:
if (do_valueize (valueize, o31) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o31);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o60 = gimple_assign_rhs1 (def_stmt);
if ((o60 = do_valueize (valueize, o60)))
{
if (o60 == op0 || operand_equal_p (o60, op0, 0))
{
{
/* #line 413 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[4] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
captures[2] = op1;
captures[3] = o40;
/* #line 410 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (TREE_TYPE (captures[2])) && ((1 && useless_type_conversion_p (type, TREE_TYPE (captures[3]))) || (0 && type == TREE_TYPE (captures[3]))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:413, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[3];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
case NEGATE_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
switch (TREE_CODE (o30))
{
case SSA_NAME:
if (do_valueize (valueize, o30) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o30);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_AND_EXPR:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
tree o41 = gimple_assign_rhs2 (def_stmt);
if ((o41 = do_valueize (valueize, o41)))
{
switch (TREE_CODE (o40))
{
case SSA_NAME:
if (do_valueize (valueize, o40) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o40);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o50 = gimple_assign_rhs1 (def_stmt);
if ((o50 = do_valueize (valueize, o50)))
{
if (o50 == op0 || operand_equal_p (o50, op0, 0))
{
switch (TREE_CODE (o41))
{
case INTEGER_CST:
{
{
/* #line 425 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o41;
{
/* #line 424 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree algn = wide_int_to_tree (TREE_TYPE (captures[0]), wi::bit_not (captures[1]));
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:425, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  algn;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
default:;
}
}
break;
default:;
}
break;
}
case MINUS_EXPR:
{
if (integer_zerop (op1))
{
{
/* #line 49 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:49, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (real_zerop (op1))
{
{
/* #line 67 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 66 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (fold_real_zero_addition_p (type, captures[1], 1))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:67, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
if (op1 == op0 || operand_equal_p (op1, op0, 0))
{
{
/* #line 77 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
/* #line 76 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!FLOAT_TYPE_P (type) || !HONOR_NANS (type))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:77, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_zero_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
switch (TREE_CODE (o40))
{
case SSA_NAME:
if (do_valueize (valueize, o40) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o40);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case NEGATE_EXPR:
{
tree o50 = gimple_assign_rhs1 (def_stmt);
if ((o50 = do_valueize (valueize, o50)))
{
{
/* #line 446 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o50;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 443 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (tree_nop_conversion_p (type, TREE_TYPE (captures[0])) && tree_nop_conversion_p (type, TREE_TYPE (captures[1])) && !TYPE_OVERFLOW_SANITIZED (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:446, %s:%d\n", __FILE__, __LINE__);
*res_code = PLUS_EXPR;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
case NEGATE_EXPR:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 446 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o40;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 443 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (tree_nop_conversion_p (type, TREE_TYPE (captures[0])) && tree_nop_conversion_p (type, TREE_TYPE (captures[1])) && !TYPE_OVERFLOW_SANITIZED (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:446, %s:%d\n", __FILE__, __LINE__);
*res_code = PLUS_EXPR;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
switch (TREE_CODE (o30))
{
case SSA_NAME:
if (do_valueize (valueize, o30) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o30);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case NEGATE_EXPR:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 446 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o40;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 443 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (tree_nop_conversion_p (type, TREE_TYPE (captures[0])) && tree_nop_conversion_p (type, TREE_TYPE (captures[1])) && !TYPE_OVERFLOW_SANITIZED (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:446, %s:%d\n", __FILE__, __LINE__);
*res_code = PLUS_EXPR;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
case NEGATE_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
{
/* #line 446 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o30;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 443 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (tree_nop_conversion_p (type, TREE_TYPE (captures[0])) && tree_nop_conversion_p (type, TREE_TYPE (captures[1])) && !TYPE_OVERFLOW_SANITIZED (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:446, %s:%d\n", __FILE__, __LINE__);
*res_code = PLUS_EXPR;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case PLUS_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (op1 == o20 || operand_equal_p (op1, o20, 0))
{
{
/* #line 466 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:466, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[1];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
if (op1 == o21 || operand_equal_p (op1, o21, 0))
{
{
/* #line 466 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o21;
captures[1] = o20;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:466, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[1];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
}
break;
}
case MINUS_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (op1 == o20 || operand_equal_p (op1, o20, 0))
{
{
/* #line 469 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:469, %s:%d\n", __FILE__, __LINE__);
*res_code = NEGATE_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case PLUS_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
tree o31 = gimple_assign_rhs2 (def_stmt);
if ((o31 = do_valueize (valueize, o31)))
{
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 475 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o31;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:475, %s:%d\n", __FILE__, __LINE__);
*res_code = NEGATE_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
if (o31 == op0 || operand_equal_p (o31, op0, 0))
{
{
/* #line 475 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o30;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:475, %s:%d\n", __FILE__, __LINE__);
*res_code = NEGATE_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
case MINUS_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
tree o31 = gimple_assign_rhs2 (def_stmt);
if ((o31 = do_valueize (valueize, o31)))
{
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 478 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o31;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:478, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[1];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case PLUS_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (CONSTANT_CLASS_P (o21))
{
if (CONSTANT_CLASS_P (op1))
{
{
/* #line 491 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = op1;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type)))
{
/* #line 488 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree cst = fold_binary (MINUS_EXPR == PLUS_EXPR ? PLUS_EXPR : MINUS_EXPR, type, captures[1], captures[2]);
/* #line 490 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (cst && !TREE_OVERFLOW (cst))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:491, %s:%d\n", __FILE__, __LINE__);
*res_code = PLUS_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  cst;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
}
break;
}
case MINUS_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (CONSTANT_CLASS_P (o21))
{
if (CONSTANT_CLASS_P (op1))
{
{
/* #line 491 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = op1;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type)))
{
/* #line 488 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree cst = fold_binary (MINUS_EXPR == MINUS_EXPR ? PLUS_EXPR : MINUS_EXPR, type, captures[1], captures[2]);
/* #line 490 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (cst && !TREE_OVERFLOW (cst))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:491, %s:%d\n", __FILE__, __LINE__);
*res_code = MINUS_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  cst;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
if (CONSTANT_CLASS_P (o20))
{
if (CONSTANT_CLASS_P (op1))
{
{
/* #line 499 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = op1;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type)))
{
/* #line 497 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree cst = fold_binary (MINUS_EXPR, type, captures[0], captures[2]);
/* #line 498 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (cst && !TREE_OVERFLOW (cst))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:499, %s:%d\n", __FILE__, __LINE__);
*res_code = MINUS_EXPR;
  res_ops[0] =  cst;
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
}
break;
}
CASE_CONVERT:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case NEGATE_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
if (integer_each_onep (op1))
{
{
/* #line 518 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type))
/* #line 516 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!TYPE_OVERFLOW_TRAPS (type) && tree_nop_conversion_p (type, TREE_TYPE (captures[0]))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:518, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_NOT_EXPR;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
case PLUS_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
tree o31 = gimple_assign_rhs2 (def_stmt);
if ((o31 = do_valueize (valueize, o31)))
{
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o60 = gimple_assign_rhs1 (def_stmt);
if ((o60 = do_valueize (valueize, o60)))
{
if (o60 == o30 || operand_equal_p (o60, o30, 0))
{
{
/* #line 548 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o31;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type))
/* #line 531 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (element_precision (type) <= element_precision (TREE_TYPE (captures[1])) || (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))) || (POINTER_TYPE_P (TREE_TYPE (captures[0])) && TREE_CODE (captures[1]) == INTEGER_CST && tree_int_cst_sign_bit (captures[1]) == 0)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:548, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
case POINTER_PLUS_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
tree o31 = gimple_assign_rhs2 (def_stmt);
if ((o31 = do_valueize (valueize, o31)))
{
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o60 = gimple_assign_rhs1 (def_stmt);
if ((o60 = do_valueize (valueize, o60)))
{
if (o60 == o30 || operand_equal_p (o60, o30, 0))
{
{
/* #line 548 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o31;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type))
/* #line 531 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (element_precision (type) <= element_precision (TREE_TYPE (captures[1])) || (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))) || (POINTER_TYPE_P (TREE_TYPE (captures[0])) && TREE_CODE (captures[1]) == INTEGER_CST && tree_int_cst_sign_bit (captures[1]) == 0)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:548, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
case NEGATE_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
if (integer_each_onep (op1))
{
{
/* #line 518 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type))
/* #line 516 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!TYPE_OVERFLOW_TRAPS (type) && tree_nop_conversion_p (type, TREE_TYPE (captures[0]))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:518, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_NOT_EXPR;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, type, tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, type, tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
if (integer_all_onesp (op0))
{
{
/* #line 524 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op1;
/* #line 429 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((!TYPE_SATURATING (type))
/* #line 456 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (!FLOAT_TYPE_P (type) && !FIXED_POINT_TYPE_P (type))
/* #line 523 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (TREE_CODE (type) != COMPLEX_TYPE))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:524, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_NOT_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
if (integer_zerop (op0))
{
{
/* #line 806 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:806, %s:%d\n", __FILE__, __LINE__);
*res_code = NEGATE_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
if (real_zerop (op0))
{
{
/* #line 814 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 813 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (fold_real_zero_addition_p (type, captures[0], 0))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:814, %s:%d\n", __FILE__, __LINE__);
*res_code = NEGATE_EXPR;
  res_ops[0] = captures[1];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
case BIT_IOR_EXPR:
{
if (integer_zerop (op1))
{
{
/* #line 49 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:49, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_all_onesp (op1))
{
{
/* #line 230 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:230, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[1];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (op1 == op0 || operand_equal_p (op1, op0, 0))
{
{
/* #line 256 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:256, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 295 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o40;
/* #line 275 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((TREE_CODE (captures[1]) == INTEGER_CST && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && int_fits_type_p (captures[1], TREE_TYPE (captures[0]))) || (1 && types_compatible_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))) || (0 && TREE_TYPE (captures[0]) == TREE_TYPE (captures[1]))) && (BIT_IOR_EXPR != BIT_AND_EXPR ||1) && ( TYPE_PRECISION (TREE_TYPE (captures[0])) < TYPE_PRECISION (type) || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT || TYPE_PRECISION (type) != GET_MODE_PRECISION (TYPE_MODE (type))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:295, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
{
  tree ops2[1], res;
  ops2[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops2[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  ops1[1] = res;
}
  code_helper tem_code = BIT_IOR_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
{
/* #line 295 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = op1;
/* #line 275 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((TREE_CODE (captures[1]) == INTEGER_CST && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && int_fits_type_p (captures[1], TREE_TYPE (captures[0]))) || (1 && types_compatible_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))) || (0 && TREE_TYPE (captures[0]) == TREE_TYPE (captures[1]))) && (BIT_IOR_EXPR != BIT_AND_EXPR ||1) && ( TYPE_PRECISION (TREE_TYPE (captures[0])) < TYPE_PRECISION (type) || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT || TYPE_PRECISION (type) != GET_MODE_PRECISION (TYPE_MODE (type))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:295, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
{
  tree ops2[1], res;
  ops2[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops2[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  ops1[1] = res;
}
  code_helper tem_code = BIT_IOR_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
case BIT_AND_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_AND_EXPR:
{
tree o50 = gimple_assign_rhs1 (def_stmt);
if ((o50 = do_valueize (valueize, o50)))
{
tree o51 = gimple_assign_rhs2 (def_stmt);
if ((o51 = do_valueize (valueize, o51)))
{
if (o51 == o21 || operand_equal_p (o51, o21, 0))
{
{
/* #line 301 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = o50;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:301, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
  ops1[1] = captures[2];
  code_helper tem_code = BIT_IOR_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
if (o51 == o20 || operand_equal_p (o51, o20, 0))
{
{
/* #line 301 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o21;
captures[1] = o20;
captures[2] = o50;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:301, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
  ops1[1] = captures[2];
  code_helper tem_code = BIT_IOR_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
if (op1 == o20 || operand_equal_p (op1, o20, 0))
{
{
/* #line 350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:350, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (op1 == o21 || operand_equal_p (op1, o21, 0))
{
{
/* #line 350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o21;
captures[1] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:350, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
break;
}
case BIT_IOR_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (CONSTANT_CLASS_P (o21))
{
if (CONSTANT_CLASS_P (op1))
{
{
/* #line 312 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:312, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_IOR_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] = captures[2];
  code_helper tem_code = BIT_IOR_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
tree op0_pops[1];
if (gimple_logical_inverted_value (op0, op0_pops, valueize))
{
tree o20 = op0_pops[0];
if (op1 == o20 || operand_equal_p (op1, o20, 0))
{
if (gimple_truth_valued_p (op1, valueize))
{
{
/* #line 342 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:342, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  constant_boolean_node (true, type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
if (gimple_truth_valued_p (op0, valueize))
{
tree op1_pops[1];
if (gimple_logical_inverted_value (op1, op1_pops, valueize))
{
tree o30 = op1_pops[0];
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 342 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:342, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  constant_boolean_node (true, type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_AND_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
tree o31 = gimple_assign_rhs2 (def_stmt);
if ((o31 = do_valueize (valueize, o31)))
{
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o31;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:350, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (o31 == op0 || operand_equal_p (o31, op0, 0))
{
{
/* #line 350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o30;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:350, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_AND_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
if (op1 == o30 || operand_equal_p (op1, o30, 0))
{
{
/* #line 355 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:355, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_IOR_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (o21))
{
case SSA_NAME:
if (do_valueize (valueize, o21) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o21);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
if (op1 == o40 || operand_equal_p (op1, o40, 0))
{
{
/* #line 355 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o40;
captures[1] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:355, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_IOR_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_AND_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
tree o31 = gimple_assign_rhs2 (def_stmt);
if ((o31 = do_valueize (valueize, o31)))
{
switch (TREE_CODE (o30))
{
case SSA_NAME:
if (do_valueize (valueize, o30) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o30);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
if (o40 == op0 || operand_equal_p (o40, op0, 0))
{
{
/* #line 355 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o31;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:355, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_IOR_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (o31))
{
case SSA_NAME:
if (do_valueize (valueize, o31) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o31);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o50 = gimple_assign_rhs1 (def_stmt);
if ((o50 = do_valueize (valueize, o50)))
{
if (o50 == op0 || operand_equal_p (o50, op0, 0))
{
{
/* #line 355 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o30;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:355, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_IOR_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_AND_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o21))
{
case SSA_NAME:
if (do_valueize (valueize, o21) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o21);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_AND_EXPR:
{
tree o60 = gimple_assign_rhs1 (def_stmt);
if ((o60 = do_valueize (valueize, o60)))
{
tree o61 = gimple_assign_rhs2 (def_stmt);
if ((o61 = do_valueize (valueize, o61)))
{
if (o61 == o40 || operand_equal_p (o61, o40, 0))
{
{
/* #line 390 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[5] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
captures[2] = o40;
captures[3] = op1;
captures[4] = o60;
/* #line 388 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((TREE_CODE (captures[0]) != SSA_NAME || has_single_use (captures[0])) && (TREE_CODE (captures[3]) != SSA_NAME || has_single_use (captures[3])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:390, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_XOR_EXPR;
{
  tree ops1[2], res;
{
  tree ops2[2], res;
  ops2[0] = captures[1];
  ops2[1] = captures[4];
  code_helper tem_code = BIT_XOR_EXPR;
  tree tem_ops[3] = { ops2[0], ops2[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops2[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops2[0]), tem_ops, seq);
  if (!res) return false;
  ops1[0] = res;
}
  ops1[1] = captures[2];
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
if (o60 == o40 || operand_equal_p (o60, o40, 0))
{
{
/* #line 390 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[5] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
captures[2] = o40;
captures[3] = op1;
captures[4] = o61;
/* #line 388 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((TREE_CODE (captures[0]) != SSA_NAME || has_single_use (captures[0])) && (TREE_CODE (captures[3]) != SSA_NAME || has_single_use (captures[3])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:390, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_XOR_EXPR;
{
  tree ops1[2], res;
{
  tree ops2[2], res;
  ops2[0] = captures[1];
  ops2[1] = captures[4];
  code_helper tem_code = BIT_XOR_EXPR;
  tree tem_ops[3] = { ops2[0], ops2[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops2[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops2[0]), tem_ops, seq);
  if (!res) return false;
  ops1[0] = res;
}
  ops1[1] = captures[2];
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_AND_EXPR:
{
tree o60 = gimple_assign_rhs1 (def_stmt);
if ((o60 = do_valueize (valueize, o60)))
{
tree o61 = gimple_assign_rhs2 (def_stmt);
if ((o61 = do_valueize (valueize, o61)))
{
if (o61 == o30 || operand_equal_p (o61, o30, 0))
{
{
/* #line 390 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[5] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o21;
captures[2] = o30;
captures[3] = op1;
captures[4] = o60;
/* #line 388 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((TREE_CODE (captures[0]) != SSA_NAME || has_single_use (captures[0])) && (TREE_CODE (captures[3]) != SSA_NAME || has_single_use (captures[3])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:390, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_XOR_EXPR;
{
  tree ops1[2], res;
{
  tree ops2[2], res;
  ops2[0] = captures[1];
  ops2[1] = captures[4];
  code_helper tem_code = BIT_XOR_EXPR;
  tree tem_ops[3] = { ops2[0], ops2[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops2[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops2[0]), tem_ops, seq);
  if (!res) return false;
  ops1[0] = res;
}
  ops1[1] = captures[2];
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
if (o60 == o30 || operand_equal_p (o60, o30, 0))
{
{
/* #line 390 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[5] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o21;
captures[2] = o30;
captures[3] = op1;
captures[4] = o61;
/* #line 388 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((TREE_CODE (captures[0]) != SSA_NAME || has_single_use (captures[0])) && (TREE_CODE (captures[3]) != SSA_NAME || has_single_use (captures[3])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:390, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_XOR_EXPR;
{
  tree ops1[2], res;
{
  tree ops2[2], res;
  ops2[0] = captures[1];
  ops2[1] = captures[4];
  code_helper tem_code = BIT_XOR_EXPR;
  tree tem_ops[3] = { ops2[0], ops2[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops2[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops2[0]), tem_ops, seq);
  if (!res) return false;
  ops1[0] = res;
}
  ops1[1] = captures[2];
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_AND_EXPR:
{
tree o50 = gimple_assign_rhs1 (def_stmt);
if ((o50 = do_valueize (valueize, o50)))
{
tree o51 = gimple_assign_rhs2 (def_stmt);
if ((o51 = do_valueize (valueize, o51)))
{
switch (TREE_CODE (o51))
{
case SSA_NAME:
if (do_valueize (valueize, o51) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o51);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o70 = gimple_assign_rhs1 (def_stmt);
if ((o70 = do_valueize (valueize, o70)))
{
if (o70 == o21 || operand_equal_p (o70, o21, 0))
{
{
/* #line 390 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[5] ATTRIBUTE_UNUSED = {};
captures[0] = op1;
captures[1] = o50;
captures[2] = o21;
captures[3] = op0;
captures[4] = o20;
/* #line 388 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((TREE_CODE (captures[0]) != SSA_NAME || has_single_use (captures[0])) && (TREE_CODE (captures[3]) != SSA_NAME || has_single_use (captures[3])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:390, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_XOR_EXPR;
{
  tree ops1[2], res;
{
  tree ops2[2], res;
  ops2[0] = captures[1];
  ops2[1] = captures[4];
  code_helper tem_code = BIT_XOR_EXPR;
  tree tem_ops[3] = { ops2[0], ops2[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops2[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops2[0]), tem_ops, seq);
  if (!res) return false;
  ops1[0] = res;
}
  ops1[1] = captures[2];
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
if (o70 == o20 || operand_equal_p (o70, o20, 0))
{
{
/* #line 390 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[5] ATTRIBUTE_UNUSED = {};
captures[0] = op1;
captures[1] = o50;
captures[2] = o20;
captures[3] = op0;
captures[4] = o21;
/* #line 388 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((TREE_CODE (captures[0]) != SSA_NAME || has_single_use (captures[0])) && (TREE_CODE (captures[3]) != SSA_NAME || has_single_use (captures[3])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:390, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_XOR_EXPR;
{
  tree ops1[2], res;
{
  tree ops2[2], res;
  ops2[0] = captures[1];
  ops2[1] = captures[4];
  code_helper tem_code = BIT_XOR_EXPR;
  tree tem_ops[3] = { ops2[0], ops2[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops2[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops2[0]), tem_ops, seq);
  if (!res) return false;
  ops1[0] = res;
}
  ops1[1] = captures[2];
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (o50))
{
case SSA_NAME:
if (do_valueize (valueize, o50) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o50);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o60 = gimple_assign_rhs1 (def_stmt);
if ((o60 = do_valueize (valueize, o60)))
{
if (o60 == o21 || operand_equal_p (o60, o21, 0))
{
{
/* #line 390 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[5] ATTRIBUTE_UNUSED = {};
captures[0] = op1;
captures[1] = o51;
captures[2] = o21;
captures[3] = op0;
captures[4] = o20;
/* #line 388 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((TREE_CODE (captures[0]) != SSA_NAME || has_single_use (captures[0])) && (TREE_CODE (captures[3]) != SSA_NAME || has_single_use (captures[3])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:390, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_XOR_EXPR;
{
  tree ops1[2], res;
{
  tree ops2[2], res;
  ops2[0] = captures[1];
  ops2[1] = captures[4];
  code_helper tem_code = BIT_XOR_EXPR;
  tree tem_ops[3] = { ops2[0], ops2[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops2[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops2[0]), tem_ops, seq);
  if (!res) return false;
  ops1[0] = res;
}
  ops1[1] = captures[2];
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
if (o60 == o20 || operand_equal_p (o60, o20, 0))
{
{
/* #line 390 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[5] ATTRIBUTE_UNUSED = {};
captures[0] = op1;
captures[1] = o51;
captures[2] = o20;
captures[3] = op0;
captures[4] = o21;
/* #line 388 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((TREE_CODE (captures[0]) != SSA_NAME || has_single_use (captures[0])) && (TREE_CODE (captures[3]) != SSA_NAME || has_single_use (captures[3])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:390, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_XOR_EXPR;
{
  tree ops1[2], res;
{
  tree ops2[2], res;
  ops2[0] = captures[1];
  ops2[1] = captures[4];
  code_helper tem_code = BIT_XOR_EXPR;
  tree tem_ops[3] = { ops2[0], ops2[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops2[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops2[0]), tem_ops, seq);
  if (!res) return false;
  ops1[0] = res;
}
  ops1[1] = captures[2];
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
break;
}
case BIT_XOR_EXPR:
{
if (integer_zerop (op1))
{
{
/* #line 49 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:49, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (op1 == op0 || operand_equal_p (op1, op0, 0))
{
{
/* #line 240 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:240, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_zero_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_all_onesp (op1))
{
{
/* #line 245 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:245, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_NOT_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 295 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o40;
/* #line 275 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((TREE_CODE (captures[1]) == INTEGER_CST && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && int_fits_type_p (captures[1], TREE_TYPE (captures[0]))) || (1 && types_compatible_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))) || (0 && TREE_TYPE (captures[0]) == TREE_TYPE (captures[1]))) && (BIT_XOR_EXPR != BIT_AND_EXPR ||1) && ( TYPE_PRECISION (TREE_TYPE (captures[0])) < TYPE_PRECISION (type) || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT || TYPE_PRECISION (type) != GET_MODE_PRECISION (TYPE_MODE (type))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:295, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
{
  tree ops2[1], res;
  ops2[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops2[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  ops1[1] = res;
}
  code_helper tem_code = BIT_XOR_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
{
/* #line 295 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = op1;
/* #line 275 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((TREE_CODE (captures[1]) == INTEGER_CST && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && int_fits_type_p (captures[1], TREE_TYPE (captures[0]))) || (1 && types_compatible_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))) || (0 && TREE_TYPE (captures[0]) == TREE_TYPE (captures[1]))) && (BIT_XOR_EXPR != BIT_AND_EXPR ||1) && ( TYPE_PRECISION (TREE_TYPE (captures[0])) < TYPE_PRECISION (type) || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT || TYPE_PRECISION (type) != GET_MODE_PRECISION (TYPE_MODE (type))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:295, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
{
  tree ops2[1], res;
  ops2[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops2[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  ops1[1] = res;
}
  code_helper tem_code = BIT_XOR_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
case BIT_AND_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_AND_EXPR:
{
tree o50 = gimple_assign_rhs1 (def_stmt);
if ((o50 = do_valueize (valueize, o50)))
{
tree o51 = gimple_assign_rhs2 (def_stmt);
if ((o51 = do_valueize (valueize, o51)))
{
if (o51 == o21 || operand_equal_p (o51, o21, 0))
{
{
/* #line 301 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = o50;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:301, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
  ops1[1] = captures[2];
  code_helper tem_code = BIT_XOR_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
if (o51 == o20 || operand_equal_p (o51, o20, 0))
{
{
/* #line 301 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o21;
captures[1] = o20;
captures[2] = o50;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:301, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
  ops1[1] = captures[2];
  code_helper tem_code = BIT_XOR_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
case BIT_XOR_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (CONSTANT_CLASS_P (o21))
{
if (CONSTANT_CLASS_P (op1))
{
{
/* #line 312 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:312, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_XOR_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] = captures[2];
  code_helper tem_code = BIT_XOR_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
case LT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (integer_truep (op1))
{
{
/* #line 928 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (LT_EXPR, HONOR_NANS (captures[0]));
/* #line 927 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == GE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
*res_code = GE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 930 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (LT_EXPR, HONOR_NANS (captures[0]));
/* #line 929 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == UNGE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
*res_code = UNGE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
break;
}
case LE_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (integer_truep (op1))
{
{
/* #line 928 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (LE_EXPR, HONOR_NANS (captures[0]));
/* #line 927 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == GT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
*res_code = GT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 930 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (LE_EXPR, HONOR_NANS (captures[0]));
/* #line 929 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == UNGT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
*res_code = UNGT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
break;
}
case EQ_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (integer_truep (op1))
{
{
/* #line 928 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (EQ_EXPR, HONOR_NANS (captures[0]));
/* #line 927 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == NE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
*res_code = NE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 930 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (EQ_EXPR, HONOR_NANS (captures[0]));
/* #line 929 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == NE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
*res_code = NE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
break;
}
case NE_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (integer_truep (op1))
{
{
/* #line 928 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (NE_EXPR, HONOR_NANS (captures[0]));
/* #line 927 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == EQ_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
*res_code = EQ_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 930 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (NE_EXPR, HONOR_NANS (captures[0]));
/* #line 929 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == EQ_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
*res_code = EQ_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
break;
}
case GE_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (integer_truep (op1))
{
{
/* #line 928 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (GE_EXPR, HONOR_NANS (captures[0]));
/* #line 927 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == LT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
*res_code = LT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 930 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (GE_EXPR, HONOR_NANS (captures[0]));
/* #line 929 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == UNLT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
*res_code = UNLT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
break;
}
case GT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (integer_truep (op1))
{
{
/* #line 928 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (GT_EXPR, HONOR_NANS (captures[0]));
/* #line 927 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == LE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
*res_code = LE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 930 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (GT_EXPR, HONOR_NANS (captures[0]));
/* #line 929 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == UNLE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
*res_code = UNLE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
break;
}
case UNORDERED_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (integer_truep (op1))
{
{
/* #line 928 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNORDERED_EXPR, HONOR_NANS (captures[0]));
/* #line 927 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == ORDERED_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
*res_code = ORDERED_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 930 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNORDERED_EXPR, HONOR_NANS (captures[0]));
/* #line 929 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == ORDERED_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
*res_code = ORDERED_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
break;
}
case ORDERED_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (integer_truep (op1))
{
{
/* #line 928 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (ORDERED_EXPR, HONOR_NANS (captures[0]));
/* #line 927 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == UNORDERED_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
*res_code = UNORDERED_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 930 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (ORDERED_EXPR, HONOR_NANS (captures[0]));
/* #line 929 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == UNORDERED_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
*res_code = UNORDERED_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
break;
}
case UNLT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (integer_truep (op1))
{
{
/* #line 928 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNLT_EXPR, HONOR_NANS (captures[0]));
/* #line 927 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == GE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
*res_code = GE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 930 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNLT_EXPR, HONOR_NANS (captures[0]));
/* #line 929 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == GE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
*res_code = GE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
break;
}
case UNLE_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (integer_truep (op1))
{
{
/* #line 928 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNLE_EXPR, HONOR_NANS (captures[0]));
/* #line 927 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == GT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
*res_code = GT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 930 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNLE_EXPR, HONOR_NANS (captures[0]));
/* #line 929 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == GT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
*res_code = GT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
break;
}
case UNGT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (integer_truep (op1))
{
{
/* #line 928 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNGT_EXPR, HONOR_NANS (captures[0]));
/* #line 927 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == LE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
*res_code = LE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 930 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNGT_EXPR, HONOR_NANS (captures[0]));
/* #line 929 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == LE_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
*res_code = LE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
break;
}
case UNGE_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (integer_truep (op1))
{
{
/* #line 928 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNGE_EXPR, HONOR_NANS (captures[0]));
/* #line 927 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == LT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
*res_code = LT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 930 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNGE_EXPR, HONOR_NANS (captures[0]));
/* #line 929 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == LT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
*res_code = LT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
break;
}
case UNEQ_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (integer_truep (op1))
{
{
/* #line 928 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNEQ_EXPR, HONOR_NANS (captures[0]));
/* #line 927 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == LTGT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
*res_code = LTGT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 930 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (UNEQ_EXPR, HONOR_NANS (captures[0]));
/* #line 929 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == LTGT_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
*res_code = LTGT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
break;
}
case LTGT_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (integer_truep (op1))
{
{
/* #line 928 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (LTGT_EXPR, HONOR_NANS (captures[0]));
/* #line 927 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == UNEQ_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
*res_code = UNEQ_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 930 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
{
/* #line 925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 enum tree_code ic = invert_tree_comparison (LTGT_EXPR, HONOR_NANS (captures[0]));
/* #line 929 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (ic == UNEQ_EXPR)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
*res_code = UNEQ_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
tree op0_pops[1];
if (gimple_logical_inverted_value (op0, op0_pops, valueize))
{
tree o20 = op0_pops[0];
if (op1 == o20 || operand_equal_p (op1, o20, 0))
{
if (gimple_truth_valued_p (op1, valueize))
{
{
/* #line 342 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:342, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  constant_boolean_node (true, type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
if (gimple_truth_valued_p (op0, valueize))
{
tree op1_pops[1];
if (gimple_logical_inverted_value (op1, op1_pops, valueize))
{
tree o30 = op1_pops[0];
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 342 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:342, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  constant_boolean_node (true, type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
break;
}
case MULT_EXPR:
{
if (integer_zerop (op1))
{
{
/* #line 81 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:81, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[1];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (real_zerop (op1))
{
{
/* #line 90 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 89 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!HONOR_NANS (type) && !HONOR_SIGNED_ZEROS (element_mode (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:90, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[1];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
if (real_onep (op1))
{
{
/* #line 99 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
/* #line 96 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!HONOR_SNANS (element_mode (type)) && (!HONOR_SIGNED_ZEROS (element_mode (type)) || !COMPLEX_FLOAT_TYPE_P (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:99, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
if (real_minus_onep (op1))
{
{
/* #line 107 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
/* #line 104 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!HONOR_SNANS (element_mode (type)) && (!HONOR_SIGNED_ZEROS (element_mode (type)) || !COMPLEX_FLOAT_TYPE_P (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:107, %s:%d\n", __FILE__, __LINE__);
*res_code = NEGATE_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
if (integer_onep (op1))
{
{
/* #line 114 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:114, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case EXACT_DIV_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
tree o31 = gimple_assign_rhs2 (def_stmt);
if ((o31 = do_valueize (valueize, o31)))
{
if (op1 == o31 || operand_equal_p (op1, o31, 0))
{
{
/* #line 786 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o31;
/* #line 785 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (type))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:786, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
case EXACT_DIV_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (op1 == o21 || operand_equal_p (op1, o21, 0))
{
{
/* #line 786 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
/* #line 785 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (type))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:786, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
if (integer_minus_onep (op1))
{
{
/* #line 819 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:819, %s:%d\n", __FILE__, __LINE__);
*res_code = NEGATE_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
case TRUNC_DIV_EXPR:
{
if (integer_onep (op1))
{
{
/* #line 114 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:114, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_minus_onep (op1))
{
{
/* #line 121 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 120 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!TYPE_UNSIGNED (type))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:121, %s:%d\n", __FILE__, __LINE__);
*res_code = NEGATE_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case TRUNC_DIV_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o21))
{
case INTEGER_CST:
{
switch (TREE_CODE (op1))
{
case INTEGER_CST:
{
{
/* #line 141 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = op1;
{
/* #line 138 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 bool overflow_p;
 wide_int mul = wi::mul (captures[1], captures[2], TYPE_SIGN (type), &overflow_p);
/* #line 140 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!overflow_p)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:141, %s:%d\n", __FILE__, __LINE__);
*res_code = TRUNC_DIV_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  wide_int_to_tree (type, mul);
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 145 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = op1;
{
/* #line 138 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 bool overflow_p;
 wide_int mul = wi::mul (captures[1], captures[2], TYPE_SIGN (type), &overflow_p);
/* #line 142 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (overflow_p && (TYPE_UNSIGNED (type) || mul != wi::min_value (TYPE_PRECISION (type), SIGNED)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:145, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_zero_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
break;
}
default:;
}
break;
}
default:;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
break;
}
case CEIL_DIV_EXPR:
{
if (integer_onep (op1))
{
{
/* #line 114 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:114, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_minus_onep (op1))
{
{
/* #line 121 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 120 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!TYPE_UNSIGNED (type))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:121, %s:%d\n", __FILE__, __LINE__);
*res_code = NEGATE_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
case FLOOR_DIV_EXPR:
{
if (integer_onep (op1))
{
{
/* #line 114 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:114, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_minus_onep (op1))
{
{
/* #line 121 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 120 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!TYPE_UNSIGNED (type))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:121, %s:%d\n", __FILE__, __LINE__);
*res_code = NEGATE_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 129 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 127 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((INTEGRAL_TYPE_P (type) || VECTOR_INTEGER_TYPE_P (type)) && TYPE_UNSIGNED (type))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:129, %s:%d\n", __FILE__, __LINE__);
*res_code = TRUNC_DIV_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
case ROUND_DIV_EXPR:
{
if (integer_onep (op1))
{
{
/* #line 114 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:114, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_minus_onep (op1))
{
{
/* #line 121 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 120 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!TYPE_UNSIGNED (type))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:121, %s:%d\n", __FILE__, __LINE__);
*res_code = NEGATE_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
case EXACT_DIV_EXPR:
{
if (integer_onep (op1))
{
{
/* #line 114 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:114, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_minus_onep (op1))
{
{
/* #line 121 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 120 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!TYPE_UNSIGNED (type))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:121, %s:%d\n", __FILE__, __LINE__);
*res_code = NEGATE_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case EXACT_DIV_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o21))
{
case INTEGER_CST:
{
switch (TREE_CODE (op1))
{
case INTEGER_CST:
{
{
/* #line 141 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = op1;
{
/* #line 138 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 bool overflow_p;
 wide_int mul = wi::mul (captures[1], captures[2], TYPE_SIGN (type), &overflow_p);
/* #line 140 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!overflow_p)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:141, %s:%d\n", __FILE__, __LINE__);
*res_code = EXACT_DIV_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  wide_int_to_tree (type, mul);
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 145 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = op1;
{
/* #line 138 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 bool overflow_p;
 wide_int mul = wi::mul (captures[1], captures[2], TYPE_SIGN (type), &overflow_p);
/* #line 142 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (overflow_p && (TYPE_UNSIGNED (type) || mul != wi::min_value (TYPE_PRECISION (type), SIGNED)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:145, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_zero_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
break;
}
default:;
}
break;
}
default:;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
break;
}
case RDIV_EXPR:
{
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case NEGATE_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 163 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
/* #line 160 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (FLOAT_TYPE_P (type) && ! HONOR_NANS (type) && ! HONOR_INFINITIES (element_mode (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:163, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_minus_one_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
if (op1 == op0 || operand_equal_p (op1, op0, 0))
{
{
/* #line 154 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
/* #line 151 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (FLOAT_TYPE_P (type) && ! HONOR_NANS (type) && ! HONOR_INFINITIES (element_mode (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:154, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_one_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case NEGATE_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
if (op1 == o20 || operand_equal_p (op1, o20, 0))
{
{
/* #line 163 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
/* #line 160 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (FLOAT_TYPE_P (type) && ! HONOR_NANS (type) && ! HONOR_INFINITIES (element_mode (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:163, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_minus_one_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op1))
{
case REAL_CST:
{
{
/* #line 191 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 185 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((optimize)
/* #line 186 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (flag_reciprocal_math && !real_zerop (captures[1])))
{
/* #line 189 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree tem = const_binop (RDIV_EXPR, type, build_one_cst (type), captures[1]);
/* #line 190 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (tem)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:191, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  tem;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 195 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 185 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((optimize)
/* #line 192 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (REAL_CST != COMPLEX_CST))
{
/* #line 193 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inverse = exact_inverse (type, captures[1]);
/* #line 194 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (inverse)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:195, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  inverse;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
case COMPLEX_CST:
{
{
/* #line 191 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 185 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((optimize)
/* #line 186 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (flag_reciprocal_math && !real_zerop (captures[1])))
{
/* #line 189 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree tem = const_binop (RDIV_EXPR, type, build_one_cst (type), captures[1]);
/* #line 190 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (tem)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:191, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  tem;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 195 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 185 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((optimize)
/* #line 192 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (COMPLEX_CST != COMPLEX_CST))
{
/* #line 193 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inverse = exact_inverse (type, captures[1]);
/* #line 194 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (inverse)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:195, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  inverse;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
case VECTOR_CST:
{
{
/* #line 191 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 185 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((optimize)
/* #line 186 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (flag_reciprocal_math && !real_zerop (captures[1])))
{
/* #line 189 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree tem = const_binop (RDIV_EXPR, type, build_one_cst (type), captures[1]);
/* #line 190 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (tem)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:191, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  tem;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
{
/* #line 195 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 185 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((optimize)
/* #line 192 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (VECTOR_CST != COMPLEX_CST))
{
/* #line 193 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree inverse = exact_inverse (type, captures[1]);
/* #line 194 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (inverse)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:195, %s:%d\n", __FILE__, __LINE__);
*res_code = MULT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  inverse;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
if (real_onep (op1))
{
{
/* #line 169 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
/* #line 168 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!HONOR_SNANS (element_mode (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:169, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
if (real_minus_onep (op1))
{
{
/* #line 175 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
/* #line 174 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!HONOR_SNANS (element_mode (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:175, %s:%d\n", __FILE__, __LINE__);
*res_code = NEGATE_EXPR;
  res_ops[0] = captures[0];
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
case CEIL_MOD_EXPR:
{
if (integer_zerop (op0))
{
{
/* #line 205 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 204 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!integer_zerop (captures[1]))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:205, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
if (integer_onep (op1))
{
{
/* #line 209 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:209, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_zero_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_minus_onep (op1))
{
{
/* #line 214 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 213 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!TYPE_UNSIGNED (type))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:214, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_zero_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
break;
}
case FLOOR_MOD_EXPR:
{
if (integer_zerop (op0))
{
{
/* #line 205 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 204 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!integer_zerop (captures[1]))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:205, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
if (integer_onep (op1))
{
{
/* #line 209 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:209, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_zero_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_minus_onep (op1))
{
{
/* #line 214 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 213 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!TYPE_UNSIGNED (type))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:214, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_zero_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
break;
}
case ROUND_MOD_EXPR:
{
if (integer_zerop (op0))
{
{
/* #line 205 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 204 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!integer_zerop (captures[1]))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:205, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
if (integer_onep (op1))
{
{
/* #line 209 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:209, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_zero_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_minus_onep (op1))
{
{
/* #line 214 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 213 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!TYPE_UNSIGNED (type))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:214, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_zero_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
break;
}
case TRUNC_MOD_EXPR:
{
if (integer_zerop (op0))
{
{
/* #line 205 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 204 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!integer_zerop (captures[1]))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:205, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
switch (TREE_CODE (op1))
{
case INTEGER_CST:
{
{
/* #line 225 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 219 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (TYPE_SIGN (type) == SIGNED && !TREE_OVERFLOW (captures[1]) && wi::neg_p (captures[1]) && !TYPE_OVERFLOW_TRAPS (type) && !sign_bit_p (captures[1], captures[1]))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:225, %s:%d\n", __FILE__, __LINE__);
*res_code = TRUNC_MOD_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  code_helper tem_code = NEGATE_EXPR;
  tree tem_ops[3] = { ops1[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
break;
}
default:;
}
if (integer_onep (op1))
{
{
/* #line 209 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:209, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_zero_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_minus_onep (op1))
{
{
/* #line 214 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 213 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!TYPE_UNSIGNED (type))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:214, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_zero_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
break;
}
case BIT_AND_EXPR:
{
if (integer_zerop (op1))
{
{
/* #line 235 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:235, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[1];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_all_onesp (op1))
{
{
/* #line 250 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:250, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (op1 == op0 || operand_equal_p (op1, op0, 0))
{
{
/* #line 256 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:256, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
CASE_CONVERT:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
{
/* #line 295 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o40;
/* #line 275 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((TREE_CODE (captures[1]) == INTEGER_CST && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && int_fits_type_p (captures[1], TREE_TYPE (captures[0]))) || (1 && types_compatible_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))) || (0 && TREE_TYPE (captures[0]) == TREE_TYPE (captures[1]))) && (BIT_AND_EXPR != BIT_AND_EXPR ||1) && ( TYPE_PRECISION (TREE_TYPE (captures[0])) < TYPE_PRECISION (type) || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT || TYPE_PRECISION (type) != GET_MODE_PRECISION (TYPE_MODE (type))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:295, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
{
  tree ops2[1], res;
  ops2[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops2[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  ops1[1] = res;
}
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
{
/* #line 295 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = op1;
/* #line 275 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((TREE_CODE (captures[1]) == INTEGER_CST && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && int_fits_type_p (captures[1], TREE_TYPE (captures[0]))) || (1 && types_compatible_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))) || (0 && TREE_TYPE (captures[0]) == TREE_TYPE (captures[1]))) && (BIT_AND_EXPR != BIT_AND_EXPR ||1) && ( TYPE_PRECISION (TREE_TYPE (captures[0])) < TYPE_PRECISION (type) || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT || TYPE_PRECISION (type) != GET_MODE_PRECISION (TYPE_MODE (type))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:295, %s:%d\n", __FILE__, __LINE__);
*res_code = NOP_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
{
  tree ops2[1], res;
  ops2[0] = captures[1];
  code_helper tem_code = NOP_EXPR;
  tree tem_ops[3] = { ops2[0] };
  gimple_resimplify1 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  ops1[1] = res;
}
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
gimple_resimplify1 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
case BIT_AND_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_AND_EXPR:
{
tree o50 = gimple_assign_rhs1 (def_stmt);
if ((o50 = do_valueize (valueize, o50)))
{
tree o51 = gimple_assign_rhs2 (def_stmt);
if ((o51 = do_valueize (valueize, o51)))
{
if (o51 == o21 || operand_equal_p (o51, o21, 0))
{
{
/* #line 301 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = o50;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:301, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
  ops1[1] = captures[2];
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
if (o51 == o20 || operand_equal_p (o51, o20, 0))
{
{
/* #line 301 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o21;
captures[1] = o20;
captures[2] = o50;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:301, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
  ops1[1] = captures[2];
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
if (CONSTANT_CLASS_P (o21))
{
if (CONSTANT_CLASS_P (op1))
{
{
/* #line 312 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:312, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
  res_ops[0] = captures[0];
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] = captures[2];
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
case BIT_IOR_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (CONSTANT_CLASS_P (o21))
{
if (CONSTANT_CLASS_P (op1))
{
{
/* #line 306 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:306, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_IOR_EXPR;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
  ops1[1] = captures[2];
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[0] = res;
}
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] = captures[2];
  code_helper tem_code = BIT_AND_EXPR;
  tree tem_ops[3] = { ops1[0], ops1[1] };
  gimple_resimplify2 (seq, &tem_code, TREE_TYPE (ops1[0]), tem_ops, valueize);
  res = maybe_push_res_to_seq (tem_code, TREE_TYPE (ops1[0]), tem_ops, seq);
  if (!res) return false;
  res_ops[1] = res;
}
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
tree op1_pops[1];
if (gimple_logical_inverted_value (op1, op1_pops, valueize))
{
tree o30 = op1_pops[0];
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 337 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:337, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_zero_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_IOR_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
if (op1 == o20 || operand_equal_p (op1, o20, 0))
{
{
/* #line 350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:350, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (op1 == o21 || operand_equal_p (op1, o21, 0))
{
{
/* #line 350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o21;
captures[1] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:350, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
tree op0_pops[1];
if (gimple_logical_inverted_value (op0, op0_pops, valueize))
{
tree o20 = op0_pops[0];
if (op1 == o20 || operand_equal_p (op1, o20, 0))
{
{
/* #line 337 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:337, %s:%d\n", __FILE__, __LINE__);
res_ops[0] =  build_zero_cst (type);
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_IOR_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
tree o31 = gimple_assign_rhs2 (def_stmt);
if ((o31 = do_valueize (valueize, o31)))
{
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o31;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:350, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (o31 == op0 || operand_equal_p (o31, op0, 0))
{
{
/* #line 350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o30;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:350, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_IOR_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
if (op1 == o30 || operand_equal_p (op1, o30, 0))
{
{
/* #line 355 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:355, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (o21))
{
case SSA_NAME:
if (do_valueize (valueize, o21) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o21);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
if (op1 == o40 || operand_equal_p (op1, o40, 0))
{
{
/* #line 355 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o40;
captures[1] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:355, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_IOR_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
tree o31 = gimple_assign_rhs2 (def_stmt);
if ((o31 = do_valueize (valueize, o31)))
{
switch (TREE_CODE (o30))
{
case SSA_NAME:
if (do_valueize (valueize, o30) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o30);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
if (o40 == op0 || operand_equal_p (o40, op0, 0))
{
{
/* #line 355 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o31;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:355, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (o31))
{
case SSA_NAME:
if (do_valueize (valueize, o31) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o31);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o50 = gimple_assign_rhs1 (def_stmt);
if ((o50 = do_valueize (valueize, o50)))
{
if (o50 == op0 || operand_equal_p (o50, op0, 0))
{
{
/* #line 355 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o30;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:355, %s:%d\n", __FILE__, __LINE__);
*res_code = BIT_AND_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
break;
}
case NE_EXPR:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_AND_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
if (integer_zerop (op1))
{
{
/* #line 373 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o21;
/* #line 371 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) && TYPE_PRECISION (TREE_TYPE (captures[1])) == 1)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:373, %s:%d\n", __FILE__, __LINE__);
*res_code = LT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (o21))
{
case SSA_NAME:
if (do_valueize (valueize, o21) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o21);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
if (integer_zerop (op1))
{
{
/* #line 373 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o40;
captures[1] = o20;
/* #line 371 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) && TYPE_PRECISION (TREE_TYPE (captures[1])) == 1)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:373, %s:%d\n", __FILE__, __LINE__);
*res_code = LT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case LSHIFT_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
tree o31 = gimple_assign_rhs2 (def_stmt);
if ((o31 = do_valueize (valueize, o31)))
{
if (integer_onep (o30))
{
if (integer_onep (o21))
{
if (integer_zerop (op1))
{
{
/* #line 615 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o31;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:615, %s:%d\n", __FILE__, __LINE__);
*res_code = EQ_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  build_zero_cst (TREE_TYPE (captures[0]));
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
case BIT_IOR_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
if (integer_zerop (op1))
{
{
/* #line 378 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o21;
/* #line 376 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) && TYPE_PRECISION (TREE_TYPE (captures[1])) == 1)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:378, %s:%d\n", __FILE__, __LINE__);
*res_code = LE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (o21))
{
case SSA_NAME:
if (do_valueize (valueize, o21) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o21);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_NOT_EXPR:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
if (integer_zerop (op1))
{
{
/* #line 378 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o40;
captures[1] = o20;
/* #line 376 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) && TYPE_PRECISION (TREE_TYPE (captures[1])) == 1)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:378, %s:%d\n", __FILE__, __LINE__);
*res_code = LE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
break;
}
case MIN_EXPR:
{
if (op1 == op0 || operand_equal_p (op1, op0, 0))
{
{
/* #line 556 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:556, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
{
/* #line 562 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 559 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (INTEGRAL_TYPE_P (type) && TYPE_MIN_VALUE (type) && operand_equal_p (captures[1], TYPE_MIN_VALUE (type), OEP_ONLY_CONST))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:562, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[1];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
break;
}
case MAX_EXPR:
{
if (op1 == op0 || operand_equal_p (op1, op0, 0))
{
{
/* #line 556 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:556, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
{
/* #line 568 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 565 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (INTEGRAL_TYPE_P (type) && TYPE_MAX_VALUE (type) && operand_equal_p (captures[1], TYPE_MAX_VALUE (type), OEP_ONLY_CONST))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:568, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[1];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
break;
}
case LROTATE_EXPR:
{
if (integer_all_onesp (op0))
{
{
/* #line 576 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:576, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_zerop (op1))
{
{
/* #line 588 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:588, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_zerop (op0))
{
{
/* #line 591 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:591, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case CONSTRUCTOR:
{
{
/* #line 599 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
{
/* #line 597 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree tem = uniform_vector_p (captures[1]);
/* #line 598 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (tem)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:599, %s:%d\n", __FILE__, __LINE__);
*res_code = LROTATE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  tem;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
case VECTOR_CST:
{
{
/* #line 599 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
{
/* #line 597 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree tem = uniform_vector_p (captures[1]);
/* #line 598 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (tem)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:599, %s:%d\n", __FILE__, __LINE__);
*res_code = LROTATE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  tem;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
case INTEGER_CST:
{
{
/* #line 607 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:607, %s:%d\n", __FILE__, __LINE__);
*res_code = RROTATE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  fold_binary (MINUS_EXPR, TREE_TYPE (captures[1]), build_int_cst (TREE_TYPE (captures[1]), element_precision (type)), captures[1]);
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
break;
}
default:;
}
break;
}
case RROTATE_EXPR:
{
if (integer_all_onesp (op0))
{
{
/* #line 576 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:576, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_zerop (op1))
{
{
/* #line 588 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:588, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_zerop (op0))
{
{
/* #line 591 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:591, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case CONSTRUCTOR:
{
{
/* #line 599 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
{
/* #line 597 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree tem = uniform_vector_p (captures[1]);
/* #line 598 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (tem)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:599, %s:%d\n", __FILE__, __LINE__);
*res_code = RROTATE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  tem;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
case VECTOR_CST:
{
{
/* #line 599 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
{
/* #line 597 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree tem = uniform_vector_p (captures[1]);
/* #line 598 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (tem)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:599, %s:%d\n", __FILE__, __LINE__);
*res_code = RROTATE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  tem;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
break;
}
case RSHIFT_EXPR:
{
if (integer_all_onesp (op0))
{
{
/* #line 583 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
/* #line 581 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!TYPE_UNSIGNED (type) && tree_expr_nonnegative_p (captures[1]))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:583, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
if (integer_zerop (op1))
{
{
/* #line 588 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:588, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_zerop (op0))
{
{
/* #line 591 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:591, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case CONSTRUCTOR:
{
{
/* #line 599 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
{
/* #line 597 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree tem = uniform_vector_p (captures[1]);
/* #line 598 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (tem)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:599, %s:%d\n", __FILE__, __LINE__);
*res_code = RSHIFT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  tem;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
case VECTOR_CST:
{
{
/* #line 599 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
{
/* #line 597 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree tem = uniform_vector_p (captures[1]);
/* #line 598 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (tem)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:599, %s:%d\n", __FILE__, __LINE__);
*res_code = RSHIFT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  tem;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
break;
}
case LSHIFT_EXPR:
{
if (integer_zerop (op1))
{
{
/* #line 588 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:588, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
if (integer_zerop (op0))
{
{
/* #line 591 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:591, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case CONSTRUCTOR:
{
{
/* #line 599 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
{
/* #line 597 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree tem = uniform_vector_p (captures[1]);
/* #line 598 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (tem)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:599, %s:%d\n", __FILE__, __LINE__);
*res_code = LSHIFT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  tem;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
}
break;
case VECTOR_CST:
{
{
/* #line 599 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
{
/* #line 597 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree tem = uniform_vector_p (captures[1]);
/* #line 598 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (tem)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:599, %s:%d\n", __FILE__, __LINE__);
*res_code = LSHIFT_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  tem;
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
break;
}
case EQ_EXPR:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case BIT_AND_EXPR:
{
tree o20 = gimple_assign_rhs1 (def_stmt);
if ((o20 = do_valueize (valueize, o20)))
{
tree o21 = gimple_assign_rhs2 (def_stmt);
if ((o21 = do_valueize (valueize, o21)))
{
switch (TREE_CODE (o20))
{
case SSA_NAME:
if (do_valueize (valueize, o20) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (o20);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case LSHIFT_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
tree o31 = gimple_assign_rhs2 (def_stmt);
if ((o31 = do_valueize (valueize, o31)))
{
if (integer_onep (o30))
{
if (integer_onep (o21))
{
if (integer_zerop (op1))
{
{
/* #line 615 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o31;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:615, %s:%d\n", __FILE__, __LINE__);
*res_code = NE_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] =  build_zero_cst (TREE_TYPE (captures[0]));
gimple_resimplify2 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
break;
}
case COMPLEX_EXPR:
{
switch (TREE_CODE (op0))
{
case SSA_NAME:
if (do_valueize (valueize, op0) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op0);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case REALPART_EXPR:
{
tree o20 = TREE_OPERAND (gimple_assign_rhs1 (def_stmt), 0);
if ((TREE_CODE (o20) == SSA_NAME
|| is_gimple_min_invariant (o20))
&& (o20 = do_valueize (valueize, o20)))
{
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case IMAGPART_EXPR:
{
tree o40 = TREE_OPERAND (gimple_assign_rhs1 (def_stmt), 0);
if ((TREE_CODE (o40) == SSA_NAME
|| is_gimple_min_invariant (o40))
&& (o40 = do_valueize (valueize, o40)))
{
if (o40 == o20 || operand_equal_p (o40, o20, 0))
{
{
/* #line 824 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:824, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[0];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
}
break;
}
default:;
}
}
break;
default:;
}
}
break;
}
default:;
}
}
break;
default:;
}
break;
}
default:;
}
return false;
}

static bool
gimple_simplify (code_helper *res_code, tree *res_ops,
                 gimple_seq *seq, tree (*valueize)(tree),
                 code_helper code, tree type, tree op0, tree op1, tree op2)
{
switch (code.get_rep())
{
case COND_EXPR:
{
switch (TREE_CODE (op0))
{
case INTEGER_CST:
{
{
/* #line 863 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
captures[2] = op2;
/* #line 860 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (integer_zerop (captures[0]) && (!VOID_TYPE_P (TREE_TYPE (captures[2])) || VOID_TYPE_P (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:863, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[2];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
{
/* #line 867 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
captures[2] = op2;
/* #line 864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (!integer_zerop (captures[0]) && (!VOID_TYPE_P (TREE_TYPE (captures[1])) || VOID_TYPE_P (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:867, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[1];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
break;
}
default:;
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case COND_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
tree o31 = gimple_assign_rhs2 (def_stmt);
if ((o31 = do_valueize (valueize, o31)))
{
tree o32 = gimple_assign_rhs3 (def_stmt);
if ((o32 = do_valueize (valueize, o32)))
{
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 879 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[4] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o31;
captures[2] = o32;
captures[3] = op2;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:879, %s:%d\n", __FILE__, __LINE__);
*res_code = COND_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
  res_ops[2] = captures[3];
gimple_resimplify3 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op2))
{
case SSA_NAME:
if (do_valueize (valueize, op2) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op2);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case COND_EXPR:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
tree o41 = gimple_assign_rhs2 (def_stmt);
if ((o41 = do_valueize (valueize, o41)))
{
tree o42 = gimple_assign_rhs3 (def_stmt);
if ((o42 = do_valueize (valueize, o42)))
{
if (o40 == op0 || operand_equal_p (o40, op0, 0))
{
{
/* #line 882 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[4] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
captures[2] = o41;
captures[3] = o42;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:882, %s:%d\n", __FILE__, __LINE__);
*res_code = COND_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
  res_ops[2] = captures[3];
gimple_resimplify3 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
if (op2 == op1 || operand_equal_p (op2, op1, 0))
{
{
/* #line 887 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:887, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[1];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
tree op0_pops[1];
if (gimple_logical_inverted_value (op0, op0_pops, valueize))
{
tree o20 = op0_pops[0];
if (gimple_truth_valued_p (o20, valueize))
{
{
/* #line 892 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = op1;
captures[2] = op2;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:892, %s:%d\n", __FILE__, __LINE__);
*res_code = COND_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[2];
  res_ops[2] = captures[1];
gimple_resimplify3 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
case VEC_COND_EXPR:
{
switch (TREE_CODE (op0))
{
case VECTOR_CST:
{
{
/* #line 871 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
captures[2] = op2;
/* #line 870 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (integer_all_onesp (captures[0]))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:871, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[1];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
{
/* #line 873 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
captures[2] = op2;
/* #line 872 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (integer_zerop (captures[0]))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:873, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[2];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
break;
}
default:;
}
switch (TREE_CODE (op1))
{
case SSA_NAME:
if (do_valueize (valueize, op1) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op1);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case VEC_COND_EXPR:
{
tree o30 = gimple_assign_rhs1 (def_stmt);
if ((o30 = do_valueize (valueize, o30)))
{
tree o31 = gimple_assign_rhs2 (def_stmt);
if ((o31 = do_valueize (valueize, o31)))
{
tree o32 = gimple_assign_rhs3 (def_stmt);
if ((o32 = do_valueize (valueize, o32)))
{
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 879 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[4] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o31;
captures[2] = o32;
captures[3] = op2;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:879, %s:%d\n", __FILE__, __LINE__);
*res_code = VEC_COND_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
  res_ops[2] = captures[3];
gimple_resimplify3 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
switch (TREE_CODE (op2))
{
case SSA_NAME:
if (do_valueize (valueize, op2) != NULL_TREE)
{
gimple def_stmt = SSA_NAME_DEF_STMT (op2);
if (is_gimple_assign (def_stmt))
switch (gimple_assign_rhs_code (def_stmt))
{
case VEC_COND_EXPR:
{
tree o40 = gimple_assign_rhs1 (def_stmt);
if ((o40 = do_valueize (valueize, o40)))
{
tree o41 = gimple_assign_rhs2 (def_stmt);
if ((o41 = do_valueize (valueize, o41)))
{
tree o42 = gimple_assign_rhs3 (def_stmt);
if ((o42 = do_valueize (valueize, o42)))
{
if (o40 == op0 || operand_equal_p (o40, op0, 0))
{
{
/* #line 882 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[4] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
captures[2] = o41;
captures[3] = o42;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:882, %s:%d\n", __FILE__, __LINE__);
*res_code = VEC_COND_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[1];
  res_ops[2] = captures[3];
gimple_resimplify3 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
}
}
break;
}
default:;
}
}
break;
default:;
}
if (op2 == op1 || operand_equal_p (op2, op1, 0))
{
{
/* #line 887 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:887, %s:%d\n", __FILE__, __LINE__);
res_ops[0] = captures[1];
*res_code = TREE_CODE (res_ops[0]);
return true;
}
}
tree op0_pops[1];
if (gimple_logical_inverted_value (op0, op0_pops, valueize))
{
tree o20 = op0_pops[0];
if (gimple_truth_valued_p (o20, valueize))
{
{
/* #line 892 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = op1;
captures[2] = op2;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:892, %s:%d\n", __FILE__, __LINE__);
*res_code = VEC_COND_EXPR;
  res_ops[0] = captures[0];
  res_ops[1] = captures[2];
  res_ops[2] = captures[1];
gimple_resimplify3 (seq, res_code, type, res_ops, valueize);
return true;
}
}
}
break;
}
default:;
}
return false;
}
