/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */

#include "generic-match-head.c"

bool
tree_truth_valued_p (tree t)
{
tree type = TREE_TYPE (t);
if (TREE_SIDE_EFFECTS (t)) return false;
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
case LT_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case LE_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case EQ_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case NE_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case GE_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case GT_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case UNORDERED_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case ORDERED_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case UNLT_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case UNLE_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case UNGT_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case UNGE_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case UNEQ_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case LTGT_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case TRUTH_AND_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case TRUTH_ANDIF_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case TRUTH_OR_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case TRUTH_ORIF_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case TRUTH_XOR_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
{
/* #line 321 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:321, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
case TRUTH_NOT_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
{
/* #line 323 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:323, %s:%d\n", __FILE__, __LINE__);
return true;
}
break;
}
default:;
}
return false;
}

bool
tree_logical_inverted_value (tree t, tree *res_ops)
{
tree type = TREE_TYPE (t);
if (TREE_SIDE_EFFECTS (t)) return false;
switch (TREE_CODE (t))
{
case BIT_NOT_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
if (tree_truth_valued_p (op0))
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
break;
}
case EQ_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
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
break;
}
case NE_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
if (tree_truth_valued_p (op0))
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
break;
}
case BIT_XOR_EXPR:
{
tree op0 = TREE_OPERAND (t, 0);
tree op1 = TREE_OPERAND (t, 1);
if (tree_truth_valued_p (op0))
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
break;
}
default:;
}
return false;
}

tree
generic_simplify (location_t loc, enum tree_code code, tree type ATTRIBUTE_UNUSED, tree op0)
{
switch (code)
{
case ABS_EXPR:
{
switch (TREE_CODE (op0))
{
case NEGATE_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
{
/* #line 260 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:260, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
  return res;
}
break;
}
default:;
}
if (tree_expr_nonnegative_p (op0))
{
{
/* #line 263 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:263, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[0];
  return res;
}
}
break;
}
case BIT_NOT_EXPR:
{
switch (TREE_CODE (op0))
{
case BIT_NOT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
{
/* #line 383 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:383, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[0];
  return res;
}
break;
}
case LT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, UNGE_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
case LE_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, UNGT_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
case EQ_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
case NE_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
case GE_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, UNLT_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
case GT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, UNLE_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
case UNORDERED_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, ORDERED_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, ORDERED_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
case ORDERED_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, UNORDERED_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, UNORDERED_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
case UNLT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
case UNLE_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
case UNGT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
case UNGE_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
case UNEQ_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LTGT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LTGT_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
case LTGT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:920, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, UNEQ_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:922, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, UNEQ_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
default:;
}
break;
}
case NEGATE_EXPR:
{
switch (TREE_CODE (op0))
{
CASE_CONVERT:
{
tree o20 = TREE_OPERAND (op0, 0);
switch (TREE_CODE (o20))
{
case NEGATE_EXPR:
{
tree o30 = TREE_OPERAND (o20, 0);
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
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
}
}
break;
}
default:;
}
break;
}
case NEGATE_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
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
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
}
}
break;
}
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
if ((0 && useless_type_conversion_p (type, TREE_TYPE (captures[0]))) || (1 && type == TREE_TYPE (captures[0])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:625, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[0];
  return res;
}
}
switch (TREE_CODE (op0))
{
CASE_CONVERT:
{
tree o20 = TREE_OPERAND (op0, 0);
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
if (((0 && useless_type_conversion_p (type, inside_type)) || (1 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type))) && (((inter_int || inter_ptr) && final_int) || (inter_float && final_float)) && inter_prec >= final_prec)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:697, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] =  wide_int_to_tree (inside_type, wi::mask (inter_prec, false, TYPE_PRECISION (inside_type)));
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
if (0 && inside_int && inter_float && final_int && (unsigned) significand_size (TYPE_MODE (inter_type)) >= inside_prec - !inside_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:766, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
}
}
}
break;
}
case FLOAT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
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
if (((0 && useless_type_conversion_p (type, inside_type)) || (1 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type))) && (((inter_int || inter_ptr) && final_int) || (inter_float && final_float)) && inter_prec >= final_prec)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:697, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] =  wide_int_to_tree (inside_type, wi::mask (inter_prec, false, TYPE_PRECISION (inside_type)));
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
if (0 && inside_int && inter_float && final_int && (unsigned) significand_size (TYPE_MODE (inter_type)) >= inside_prec - !inside_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:766, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
}
}
}
break;
}
case BIT_AND_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
}
}
break;
}
default:;
}
break;
}
case PLUS_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
switch (TREE_CODE (o20))
{
CASE_CONVERT:
{
tree o30 = TREE_OPERAND (o20, 0);
switch (TREE_CODE (o21))
{
CASE_CONVERT:
{
tree o50 = TREE_OPERAND (o21, 0);
{
/* #line 1056 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[4] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o30;
captures[2] = o21;
captures[3] = o50;
/* #line 1032 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((INTEGRAL_TYPE_P (type) && INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && (TYPE_PRECISION (TREE_TYPE (captures[1])) == GET_MODE_PRECISION (TYPE_MODE (TREE_TYPE (captures[1])))) && (TYPE_PRECISION (TREE_TYPE (captures[3])) == GET_MODE_PRECISION (TYPE_MODE (TREE_TYPE (captures[3])))) && TYPE_PRECISION (type) == GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1])) && ((1 && (TYPE_MAIN_VARIANT (TREE_TYPE (captures[1])) == TYPE_MAIN_VARIANT (TREE_TYPE (captures[3]))) && (TYPE_MAIN_VARIANT (TREE_TYPE (captures[1])) == TYPE_MAIN_VARIANT (type))) || (0 && types_compatible_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[3])) && types_compatible_p (TREE_TYPE (captures[1]), type))))
/* #line 1055 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1056, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] = captures[3];
  res = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
if (INTEGRAL_TYPE_P (type) && INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && (TYPE_PRECISION (TREE_TYPE (captures[1])) == GET_MODE_PRECISION (TYPE_MODE (TREE_TYPE (captures[1])))) && (TYPE_PRECISION (TREE_TYPE (captures[3])) == GET_MODE_PRECISION (TYPE_MODE (TREE_TYPE (captures[3])))) && TYPE_PRECISION (type) == GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1])) && ((1 && (TYPE_MAIN_VARIANT (TREE_TYPE (captures[1])) == TYPE_MAIN_VARIANT (TREE_TYPE (captures[3]))) && (TYPE_MAIN_VARIANT (TREE_TYPE (captures[1])) == TYPE_MAIN_VARIANT (type))) || (0 && types_compatible_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[3])) && types_compatible_p (TREE_TYPE (captures[1]), type))))
{
/* #line 1057 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree utype = unsigned_type_for (TREE_TYPE (captures[1]));
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1058, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[2], res;
{
  tree ops2[1], res;
  ops2[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, utype, ops2[0]);
  ops1[0] = res;
}
{
  tree ops2[1], res;
  ops2[0] = captures[3];
  res = fold_build1_loc (loc, NOP_EXPR, utype, ops2[0]);
  ops1[1] = res;
}
  res = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
break;
}
case MINUS_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
switch (TREE_CODE (o20))
{
CASE_CONVERT:
{
tree o30 = TREE_OPERAND (o20, 0);
switch (TREE_CODE (o21))
{
CASE_CONVERT:
{
tree o50 = TREE_OPERAND (o21, 0);
{
/* #line 1056 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[4] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o30;
captures[2] = o21;
captures[3] = o50;
/* #line 1032 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((INTEGRAL_TYPE_P (type) && INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && (TYPE_PRECISION (TREE_TYPE (captures[1])) == GET_MODE_PRECISION (TYPE_MODE (TREE_TYPE (captures[1])))) && (TYPE_PRECISION (TREE_TYPE (captures[3])) == GET_MODE_PRECISION (TYPE_MODE (TREE_TYPE (captures[3])))) && TYPE_PRECISION (type) == GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1])) && ((1 && (TYPE_MAIN_VARIANT (TREE_TYPE (captures[1])) == TYPE_MAIN_VARIANT (TREE_TYPE (captures[3]))) && (TYPE_MAIN_VARIANT (TREE_TYPE (captures[1])) == TYPE_MAIN_VARIANT (type))) || (0 && types_compatible_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[3])) && types_compatible_p (TREE_TYPE (captures[1]), type))))
/* #line 1055 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
&& (TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1056, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] = captures[3];
  res = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
if (INTEGRAL_TYPE_P (type) && INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && (TYPE_PRECISION (TREE_TYPE (captures[1])) == GET_MODE_PRECISION (TYPE_MODE (TREE_TYPE (captures[1])))) && (TYPE_PRECISION (TREE_TYPE (captures[3])) == GET_MODE_PRECISION (TYPE_MODE (TREE_TYPE (captures[3])))) && TYPE_PRECISION (type) == GET_MODE_PRECISION (TYPE_MODE (type)) && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1])) && ((1 && (TYPE_MAIN_VARIANT (TREE_TYPE (captures[1])) == TYPE_MAIN_VARIANT (TREE_TYPE (captures[3]))) && (TYPE_MAIN_VARIANT (TREE_TYPE (captures[1])) == TYPE_MAIN_VARIANT (type))) || (0 && types_compatible_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[3])) && types_compatible_p (TREE_TYPE (captures[1]), type))))
{
/* #line 1057 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
 tree utype = unsigned_type_for (TREE_TYPE (captures[1]));
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:1058, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[2], res;
{
  tree ops2[1], res;
  ops2[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, utype, ops2[0]);
  ops1[0] = res;
}
{
  tree ops2[1], res;
  ops2[0] = captures[3];
  res = fold_build1_loc (loc, NOP_EXPR, utype, ops2[0]);
  ops1[1] = res;
}
  res = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
break;
}
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
if ((0 && useless_type_conversion_p (type, TREE_TYPE (captures[0]))) || (1 && type == TREE_TYPE (captures[0])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:625, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[0];
  return res;
}
}
switch (TREE_CODE (op0))
{
case VIEW_CONVERT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
{
/* #line 630 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:630, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
  return res;
}
break;
}
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
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
}
}
switch (TREE_CODE (op0))
{
CASE_CONVERT:
{
tree o20 = TREE_OPERAND (op0, 0);
{
/* #line 648 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
/* #line 644 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if ((INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))) && (INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) || POINTER_TYPE_P (TREE_TYPE (captures[1]))) && (TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (TREE_TYPE (captures[1]))) && (TYPE_SIZE (TREE_TYPE (captures[0])) == TYPE_SIZE (TREE_TYPE (captures[1]))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:648, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
  return res;
}
}
break;
}
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
if ((0 && useless_type_conversion_p (type, TREE_TYPE (captures[0]))) || (1 && type == TREE_TYPE (captures[0])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:625, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[0];
  return res;
}
}
switch (TREE_CODE (op0))
{
CASE_CONVERT:
{
tree o20 = TREE_OPERAND (op0, 0);
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
if (((0 && useless_type_conversion_p (type, inside_type)) || (1 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type))) && (((inter_int || inter_ptr) && final_int) || (inter_float && final_float)) && inter_prec >= final_prec)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:697, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] =  wide_int_to_tree (inside_type, wi::mask (inter_prec, false, TYPE_PRECISION (inside_type)));
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
if (0 && inside_int && inter_float && final_int && (unsigned) significand_size (TYPE_MODE (inter_type)) >= inside_prec - !inside_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:766, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
}
}
}
break;
}
case FLOAT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
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
if (((0 && useless_type_conversion_p (type, inside_type)) || (1 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type))) && (((inter_int || inter_ptr) && final_int) || (inter_float && final_float)) && inter_prec >= final_prec)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:697, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] =  wide_int_to_tree (inside_type, wi::mask (inter_prec, false, TYPE_PRECISION (inside_type)));
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
if (0 && inside_int && inter_float && final_int && (unsigned) significand_size (TYPE_MODE (inter_type)) >= inside_prec - !inside_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:766, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
}
}
}
break;
}
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
if ((0 && useless_type_conversion_p (type, TREE_TYPE (captures[0]))) || (1 && type == TREE_TYPE (captures[0])))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:625, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[0];
  return res;
}
}
switch (TREE_CODE (op0))
{
CASE_CONVERT:
{
tree o20 = TREE_OPERAND (op0, 0);
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
if (((0 && useless_type_conversion_p (type, inside_type)) || (1 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type))) && (((inter_int || inter_ptr) && final_int) || (inter_float && final_float)) && inter_prec >= final_prec)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:697, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] =  wide_int_to_tree (inside_type, wi::mask (inter_prec, false, TYPE_PRECISION (inside_type)));
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
if (0 && inside_int && inter_float && final_int && (unsigned) significand_size (TYPE_MODE (inter_type)) >= inside_prec - !inside_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:766, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
}
}
}
break;
}
case FLOAT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
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
if (((0 && useless_type_conversion_p (type, inside_type)) || (1 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type))) && (((inter_int || inter_ptr) && final_int) || (inter_float && final_float)) && inter_prec >= final_prec)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:697, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] =  wide_int_to_tree (inside_type, wi::mask (inter_prec, false, TYPE_PRECISION (inside_type)));
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
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
if (0 && inside_int && inter_float && final_int && (unsigned) significand_size (TYPE_MODE (inter_type)) >= inside_prec - !inside_unsignedp)
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:766, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
}
}
}
break;
}
default:;
}
break;
}
case PAREN_EXPR:
{
switch (TREE_CODE (op0))
{
case PAREN_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
{
/* #line 657 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o20;
if (TREE_SIDE_EFFECTS (op0)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:657, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[0];
  return res;
}
break;
}
default:;
}
if (CONSTANT_CLASS_P (op0))
{
{
/* #line 654 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:654, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[0];
  return res;
}
}
break;
}
case REALPART_EXPR:
{
switch (TREE_CODE (op0))
{
case COMPLEX_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
{
/* #line 827 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:827, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
break;
}
default:;
}
break;
}
case IMAGPART_EXPR:
{
switch (TREE_CODE (op0))
{
case COMPLEX_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
{
/* #line 830 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:830, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[1];
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
break;
}
default:;
}
break;
}
default:;
}
return NULL_TREE;
}

tree
generic_simplify (location_t loc, enum tree_code code, tree type ATTRIBUTE_UNUSED, tree op0, tree op1)
{
switch (code)
{
case PLUS_EXPR:
{
if (integer_zerop (op1))
{
{
/* #line 49 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:49, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
}
switch (TREE_CODE (op0))
{
CASE_CONVERT:
{
tree o20 = TREE_OPERAND (op0, 0);
switch (TREE_CODE (op1))
{
CASE_CONVERT:
{
tree o40 = TREE_OPERAND (op1, 0);
switch (TREE_CODE (o40))
{
case NEGATE_EXPR:
{
tree o50 = TREE_OPERAND (o40, 0);
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
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
   tree res_op1;
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
  return res;
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
switch (TREE_CODE (o20))
{
case NEGATE_EXPR:
{
tree o30 = TREE_OPERAND (o20, 0);
switch (TREE_CODE (op1))
{
CASE_CONVERT:
{
tree o50 = TREE_OPERAND (op1, 0);
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
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
   tree res_op1;
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
  return res;
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
switch (TREE_CODE (op1))
{
case NEGATE_EXPR:
{
tree o40 = TREE_OPERAND (op1, 0);
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
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
   tree res_op1;
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
  return res;
}
}
break;
}
default:;
}
break;
}
case NEGATE_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
switch (TREE_CODE (op1))
{
CASE_CONVERT:
{
tree o40 = TREE_OPERAND (op1, 0);
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
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
   tree res_op1;
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
  return res;
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
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
}
switch (TREE_CODE (op1))
{
CASE_CONVERT:
{
tree o30 = TREE_OPERAND (op1, 0);
switch (TREE_CODE (o30))
{
case NEGATE_EXPR:
{
tree o40 = TREE_OPERAND (o30, 0);
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
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
   tree res_op1;
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
  return res;
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
switch (TREE_CODE (op0))
{
CASE_CONVERT:
{
tree o20 = TREE_OPERAND (op0, 0);
switch (TREE_CODE (o20))
{
case NEGATE_EXPR:
{
tree o30 = TREE_OPERAND (o20, 0);
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
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
   tree res_op1;
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
  return res;
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
switch (TREE_CODE (op1))
{
case NEGATE_EXPR:
{
tree o30 = TREE_OPERAND (op1, 0);
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
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
   tree res_op1;
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
  return res;
}
}
break;
}
default:;
}
switch (TREE_CODE (op0))
{
case NEGATE_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
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
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
   tree res_op1;
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
  return res;
}
}
break;
}
case MINUS_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
}
break;
}
default:;
}
switch (TREE_CODE (op1))
{
case MINUS_EXPR:
{
tree o30 = TREE_OPERAND (op1, 0);
tree o31 = TREE_OPERAND (op1, 1);
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
}
break;
}
default:;
}
switch (TREE_CODE (op0))
{
case PLUS_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[2])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:491, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  cst;
  tree res;
  res = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
}
break;
}
case MINUS_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[2])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:491, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  cst;
  tree res;
  res = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[2])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:499, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 =  cst;
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
}
break;
}
case BIT_NOT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
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
  tree res;
 res =  build_all_ones_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
}
break;
}
default:;
}
switch (TREE_CODE (op1))
{
case BIT_NOT_EXPR:
{
tree o30 = TREE_OPERAND (op1, 0);
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
  tree res;
 res =  build_all_ones_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
}
break;
}
default:;
}
switch (TREE_CODE (op0))
{
CASE_CONVERT:
{
tree o20 = TREE_OPERAND (op0, 0);
switch (TREE_CODE (o20))
{
case BIT_NOT_EXPR:
{
tree o30 = TREE_OPERAND (o20, 0);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:511, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
  return res;
}
}
}
break;
}
default:;
}
break;
}
case BIT_NOT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:511, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
  return res;
}
}
}
break;
}
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:796, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  tem;
  tree res;
  res = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
  return res;
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
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  build_real (type, dconst2);
  tree res;
  res = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:49, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
}
}
switch (TREE_CODE (op0))
{
case POINTER_PLUS_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
   tree res_op0;
  res_op0 = captures[1];
   tree res_op1;
{
  tree ops1[2], res;
  ops1[0] = captures[2];
  ops1[1] = captures[3];
  res = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, POINTER_PLUS_EXPR, type, res_op0, res_op1);
  return res;
}
}
break;
}
default:;
}
if (integer_zerop (op0))
{
{
/* #line 54 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op1;
if (TREE_SIDE_EFFECTS (op0)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:54, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
}
}
switch (TREE_CODE (op1))
{
CASE_CONVERT:
{
tree o30 = TREE_OPERAND (op1, 0);
switch (TREE_CODE (o30))
{
case MINUS_EXPR:
{
tree o40 = TREE_OPERAND (o30, 0);
tree o41 = TREE_OPERAND (o30, 1);
switch (TREE_CODE (o40))
{
CASE_CONVERT:
{
tree o50 = TREE_OPERAND (o40, 0);
switch (TREE_CODE (o41))
{
CASE_CONVERT:
{
tree o70 = TREE_OPERAND (o41, 0);
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
if (TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (TREE_TYPE (captures[2])) && ((0 && useless_type_conversion_p (type, TREE_TYPE (captures[3]))) || (1 && type == TREE_TYPE (captures[3]))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:413, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[3];
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
break;
}
default:;
}
break;
}
case MINUS_EXPR:
{
tree o30 = TREE_OPERAND (op1, 0);
tree o31 = TREE_OPERAND (op1, 1);
switch (TREE_CODE (o30))
{
CASE_CONVERT:
{
tree o40 = TREE_OPERAND (o30, 0);
switch (TREE_CODE (o31))
{
CASE_CONVERT:
{
tree o60 = TREE_OPERAND (o31, 0);
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
if (TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (TREE_TYPE (captures[2])) && ((0 && useless_type_conversion_p (type, TREE_TYPE (captures[3]))) || (1 && type == TREE_TYPE (captures[3]))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:413, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[3];
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  if (TREE_SIDE_EFFECTS (captures[2]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), res);
  return res;
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
break;
}
case NEGATE_EXPR:
{
tree o30 = TREE_OPERAND (op1, 0);
switch (TREE_CODE (o30))
{
case BIT_AND_EXPR:
{
tree o40 = TREE_OPERAND (o30, 0);
tree o41 = TREE_OPERAND (o30, 1);
switch (TREE_CODE (o40))
{
CASE_CONVERT:
{
tree o50 = TREE_OPERAND (o40, 0);
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:425, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  algn;
  tree res;
  res = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
default:;
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
break;
}
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:49, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
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
  tree res;
 res =  build_zero_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
}
switch (TREE_CODE (op0))
{
CASE_CONVERT:
{
tree o20 = TREE_OPERAND (op0, 0);
switch (TREE_CODE (op1))
{
CASE_CONVERT:
{
tree o40 = TREE_OPERAND (op1, 0);
switch (TREE_CODE (o40))
{
case NEGATE_EXPR:
{
tree o50 = TREE_OPERAND (o40, 0);
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
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
   tree res_op1;
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
  return res;
}
}
break;
}
default:;
}
break;
}
case NEGATE_EXPR:
{
tree o40 = TREE_OPERAND (op1, 0);
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
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
   tree res_op1;
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
  return res;
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
switch (TREE_CODE (op1))
{
CASE_CONVERT:
{
tree o30 = TREE_OPERAND (op1, 0);
switch (TREE_CODE (o30))
{
case NEGATE_EXPR:
{
tree o40 = TREE_OPERAND (o30, 0);
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
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
   tree res_op1;
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
  return res;
}
}
break;
}
default:;
}
break;
}
case NEGATE_EXPR:
{
tree o30 = TREE_OPERAND (op1, 0);
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
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
   tree res_op1;
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
  return res;
}
}
break;
}
default:;
}
switch (TREE_CODE (op0))
{
case PLUS_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
  tree res;
 res = captures[1];
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
  tree res;
 res = captures[1];
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
}
break;
}
case MINUS_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
}
break;
}
default:;
}
switch (TREE_CODE (op1))
{
case PLUS_EXPR:
{
tree o30 = TREE_OPERAND (op1, 0);
tree o31 = TREE_OPERAND (op1, 1);
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
}
break;
}
case MINUS_EXPR:
{
tree o30 = TREE_OPERAND (op1, 0);
tree o31 = TREE_OPERAND (op1, 1);
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
  tree res;
 res = captures[1];
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
}
break;
}
default:;
}
switch (TREE_CODE (op0))
{
case PLUS_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[2])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:491, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  cst;
  tree res;
  res = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
}
break;
}
case MINUS_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[2])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:491, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  cst;
  tree res;
  res = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[2])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:499, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 =  cst;
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
}
break;
}
CASE_CONVERT:
{
tree o20 = TREE_OPERAND (op0, 0);
switch (TREE_CODE (o20))
{
case NEGATE_EXPR:
{
tree o30 = TREE_OPERAND (o20, 0);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:518, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
  return res;
}
}
}
break;
}
case PLUS_EXPR:
{
tree o30 = TREE_OPERAND (o20, 0);
tree o31 = TREE_OPERAND (o20, 1);
switch (TREE_CODE (op1))
{
CASE_CONVERT:
{
tree o60 = TREE_OPERAND (op1, 0);
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
}
break;
}
default:;
}
break;
}
case POINTER_PLUS_EXPR:
{
tree o30 = TREE_OPERAND (o20, 0);
tree o31 = TREE_OPERAND (o20, 1);
switch (TREE_CODE (op1))
{
CASE_CONVERT:
{
tree o60 = TREE_OPERAND (op1, 0);
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
break;
}
case NEGATE_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:518, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[1], res;
  ops1[0] = captures[0];
  res = fold_build1_loc (loc, NOP_EXPR, type, ops1[0]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
  return res;
}
}
}
break;
}
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
if (TREE_SIDE_EFFECTS (op0)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:524, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
  return res;
}
}
}
if (integer_zerop (op0))
{
{
/* #line 806 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op1;
if (TREE_SIDE_EFFECTS (op0)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:806, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[1];
  tree res;
  res = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:49, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
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
  tree res;
 res = captures[1];
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
if (op1 == op0 || operand_equal_p (op1, op0, 0))
{
{
/* #line 256 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:256, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
}
}
switch (TREE_CODE (op0))
{
CASE_CONVERT:
{
tree o20 = TREE_OPERAND (op0, 0);
switch (TREE_CODE (op1))
{
CASE_CONVERT:
{
tree o40 = TREE_OPERAND (op1, 0);
{
/* #line 295 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o40;
/* #line 275 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((TREE_CODE (captures[1]) == INTEGER_CST && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && int_fits_type_p (captures[1], TREE_TYPE (captures[0]))) || (0 && types_compatible_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))) || (1 && TREE_TYPE (captures[0]) == TREE_TYPE (captures[1]))) && (BIT_IOR_EXPR != BIT_AND_EXPR ||0) && ( TYPE_PRECISION (TREE_TYPE (captures[0])) < TYPE_PRECISION (type) || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT || TYPE_PRECISION (type) != GET_MODE_PRECISION (TYPE_MODE (type))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:295, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
{
  tree ops2[1], res;
  ops2[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (ops1[0]), ops2[0]);
  ops1[1] = res;
}
  res = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
}
}
break;
}
default:;
}
{
/* #line 295 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = op1;
/* #line 275 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((TREE_CODE (captures[1]) == INTEGER_CST && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && int_fits_type_p (captures[1], TREE_TYPE (captures[0]))) || (0 && types_compatible_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))) || (1 && TREE_TYPE (captures[0]) == TREE_TYPE (captures[1]))) && (BIT_IOR_EXPR != BIT_AND_EXPR ||0) && ( TYPE_PRECISION (TREE_TYPE (captures[0])) < TYPE_PRECISION (type) || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT || TYPE_PRECISION (type) != GET_MODE_PRECISION (TYPE_MODE (type))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:295, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
{
  tree ops2[1], res;
  ops2[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (ops1[0]), ops2[0]);
  ops1[1] = res;
}
  res = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
}
}
break;
}
case BIT_AND_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
switch (TREE_CODE (op1))
{
case BIT_AND_EXPR:
{
tree o50 = TREE_OPERAND (op1, 0);
tree o51 = TREE_OPERAND (op1, 1);
if (o51 == o21 || operand_equal_p (o51, o21, 0))
{
{
/* #line 301 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = o50;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:301, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
  return res;
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
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
  return res;
}
}
break;
}
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
break;
}
case BIT_IOR_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
default:;
}
tree op0_pops[1];
if (tree_logical_inverted_value (op0, op0_pops))
{
tree o20 = op0_pops[0];
if (op1 == o20 || operand_equal_p (op1, o20, 0))
{
if (tree_truth_valued_p (op1))
{
{
/* #line 342 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:342, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res =  constant_boolean_node (true, type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
}
}
if (tree_truth_valued_p (op0))
{
tree op1_pops[1];
if (tree_logical_inverted_value (op1, op1_pops))
{
tree o30 = op1_pops[0];
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 342 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:342, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res =  constant_boolean_node (true, type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
}
}
switch (TREE_CODE (op1))
{
case BIT_AND_EXPR:
{
tree o30 = TREE_OPERAND (op1, 0);
tree o31 = TREE_OPERAND (op1, 1);
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o31;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:350, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
break;
}
default:;
}
switch (TREE_CODE (op0))
{
case BIT_AND_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
switch (TREE_CODE (o20))
{
case BIT_NOT_EXPR:
{
tree o30 = TREE_OPERAND (o20, 0);
if (op1 == o30 || operand_equal_p (op1, o30, 0))
{
{
/* #line 355 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:355, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
  return res;
}
}
break;
}
default:;
}
switch (TREE_CODE (o21))
{
case BIT_NOT_EXPR:
{
tree o40 = TREE_OPERAND (o21, 0);
if (op1 == o40 || operand_equal_p (op1, o40, 0))
{
{
/* #line 355 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o40;
captures[1] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:355, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
  return res;
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
switch (TREE_CODE (op1))
{
case BIT_AND_EXPR:
{
tree o30 = TREE_OPERAND (op1, 0);
tree o31 = TREE_OPERAND (op1, 1);
switch (TREE_CODE (o30))
{
case BIT_NOT_EXPR:
{
tree o40 = TREE_OPERAND (o30, 0);
if (o40 == op0 || operand_equal_p (o40, op0, 0))
{
{
/* #line 355 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o31;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:355, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
  return res;
}
}
break;
}
default:;
}
switch (TREE_CODE (o31))
{
case BIT_NOT_EXPR:
{
tree o50 = TREE_OPERAND (o31, 0);
if (o50 == op0 || operand_equal_p (o50, op0, 0))
{
{
/* #line 355 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o30;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:355, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
  return res;
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
switch (TREE_CODE (op0))
{
case BIT_AND_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
switch (TREE_CODE (o21))
{
case BIT_NOT_EXPR:
{
tree o40 = TREE_OPERAND (o21, 0);
switch (TREE_CODE (op1))
{
case BIT_AND_EXPR:
{
tree o60 = TREE_OPERAND (op1, 0);
tree o61 = TREE_OPERAND (op1, 1);
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
  if (TREE_SIDE_EFFECTS (captures[1]))
    captures[1] = save_expr (captures[1]);
   tree res_op0;
{
  tree ops1[2], res;
{
  tree ops2[2], res;
  ops2[0] = captures[1];
  ops2[1] = captures[4];
  res = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (ops2[0]), ops2[0], ops2[1]);
  ops1[0] = res;
}
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
  return res;
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
  if (TREE_SIDE_EFFECTS (captures[1]))
    captures[1] = save_expr (captures[1]);
   tree res_op0;
{
  tree ops1[2], res;
{
  tree ops2[2], res;
  ops2[0] = captures[1];
  ops2[1] = captures[4];
  res = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (ops2[0]), ops2[0], ops2[1]);
  ops1[0] = res;
}
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
  return res;
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
switch (TREE_CODE (o20))
{
case BIT_NOT_EXPR:
{
tree o30 = TREE_OPERAND (o20, 0);
switch (TREE_CODE (op1))
{
case BIT_AND_EXPR:
{
tree o60 = TREE_OPERAND (op1, 0);
tree o61 = TREE_OPERAND (op1, 1);
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
  if (TREE_SIDE_EFFECTS (captures[1]))
    captures[1] = save_expr (captures[1]);
   tree res_op0;
{
  tree ops1[2], res;
{
  tree ops2[2], res;
  ops2[0] = captures[1];
  ops2[1] = captures[4];
  res = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (ops2[0]), ops2[0], ops2[1]);
  ops1[0] = res;
}
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
  return res;
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
  if (TREE_SIDE_EFFECTS (captures[1]))
    captures[1] = save_expr (captures[1]);
   tree res_op0;
{
  tree ops1[2], res;
{
  tree ops2[2], res;
  ops2[0] = captures[1];
  ops2[1] = captures[4];
  res = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (ops2[0]), ops2[0], ops2[1]);
  ops1[0] = res;
}
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
  return res;
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
switch (TREE_CODE (op1))
{
case BIT_AND_EXPR:
{
tree o50 = TREE_OPERAND (op1, 0);
tree o51 = TREE_OPERAND (op1, 1);
switch (TREE_CODE (o51))
{
case BIT_NOT_EXPR:
{
tree o70 = TREE_OPERAND (o51, 0);
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
  if (TREE_SIDE_EFFECTS (captures[1]))
    captures[1] = save_expr (captures[1]);
   tree res_op0;
{
  tree ops1[2], res;
{
  tree ops2[2], res;
  ops2[0] = captures[1];
  ops2[1] = captures[4];
  res = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (ops2[0]), ops2[0], ops2[1]);
  ops1[0] = res;
}
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
  return res;
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
  if (TREE_SIDE_EFFECTS (captures[1]))
    captures[1] = save_expr (captures[1]);
   tree res_op0;
{
  tree ops1[2], res;
{
  tree ops2[2], res;
  ops2[0] = captures[1];
  ops2[1] = captures[4];
  res = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (ops2[0]), ops2[0], ops2[1]);
  ops1[0] = res;
}
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
default:;
}
switch (TREE_CODE (o50))
{
case BIT_NOT_EXPR:
{
tree o60 = TREE_OPERAND (o50, 0);
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
  if (TREE_SIDE_EFFECTS (captures[1]))
    captures[1] = save_expr (captures[1]);
   tree res_op0;
{
  tree ops1[2], res;
{
  tree ops2[2], res;
  ops2[0] = captures[1];
  ops2[1] = captures[4];
  res = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (ops2[0]), ops2[0], ops2[1]);
  ops1[0] = res;
}
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
  return res;
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
  if (TREE_SIDE_EFFECTS (captures[1]))
    captures[1] = save_expr (captures[1]);
   tree res_op0;
{
  tree ops1[2], res;
{
  tree ops2[2], res;
  ops2[0] = captures[1];
  ops2[1] = captures[4];
  res = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (ops2[0]), ops2[0], ops2[1]);
  ops1[0] = res;
}
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
  return res;
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
break;
}
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:49, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
}
}
if (op1 == op0 || operand_equal_p (op1, op0, 0))
{
{
/* #line 240 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:240, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res =  build_zero_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
switch (TREE_CODE (op0))
{
CASE_CONVERT:
{
tree o20 = TREE_OPERAND (op0, 0);
switch (TREE_CODE (op1))
{
CASE_CONVERT:
{
tree o40 = TREE_OPERAND (op1, 0);
{
/* #line 295 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o40;
/* #line 275 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((TREE_CODE (captures[1]) == INTEGER_CST && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && int_fits_type_p (captures[1], TREE_TYPE (captures[0]))) || (0 && types_compatible_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))) || (1 && TREE_TYPE (captures[0]) == TREE_TYPE (captures[1]))) && (BIT_XOR_EXPR != BIT_AND_EXPR ||0) && ( TYPE_PRECISION (TREE_TYPE (captures[0])) < TYPE_PRECISION (type) || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT || TYPE_PRECISION (type) != GET_MODE_PRECISION (TYPE_MODE (type))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:295, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
{
  tree ops2[1], res;
  ops2[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (ops1[0]), ops2[0]);
  ops1[1] = res;
}
  res = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
}
}
break;
}
default:;
}
{
/* #line 295 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = op1;
/* #line 275 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((TREE_CODE (captures[1]) == INTEGER_CST && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && int_fits_type_p (captures[1], TREE_TYPE (captures[0]))) || (0 && types_compatible_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))) || (1 && TREE_TYPE (captures[0]) == TREE_TYPE (captures[1]))) && (BIT_XOR_EXPR != BIT_AND_EXPR ||0) && ( TYPE_PRECISION (TREE_TYPE (captures[0])) < TYPE_PRECISION (type) || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT || TYPE_PRECISION (type) != GET_MODE_PRECISION (TYPE_MODE (type))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:295, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
{
  tree ops2[1], res;
  ops2[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (ops1[0]), ops2[0]);
  ops1[1] = res;
}
  res = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
}
}
break;
}
case BIT_AND_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
switch (TREE_CODE (op1))
{
case BIT_AND_EXPR:
{
tree o50 = TREE_OPERAND (op1, 0);
tree o51 = TREE_OPERAND (op1, 1);
if (o51 == o21 || operand_equal_p (o51, o21, 0))
{
{
/* #line 301 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = o50;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:301, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
  return res;
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
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
  return res;
}
}
break;
}
default:;
}
break;
}
case BIT_XOR_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
case LT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, UNGE_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
break;
}
case LE_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, UNGT_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
break;
}
case EQ_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
break;
}
case NE_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
break;
}
case GE_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, UNLT_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
break;
}
case GT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, UNLE_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
break;
}
case UNORDERED_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, ORDERED_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, ORDERED_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
break;
}
case ORDERED_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, UNORDERED_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, UNORDERED_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
break;
}
case UNLT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
break;
}
case UNLE_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
break;
}
case UNGT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
break;
}
case UNGE_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
break;
}
case UNEQ_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LTGT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LTGT_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
break;
}
case LTGT_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:928, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, UNEQ_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:930, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, UNEQ_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
break;
}
default:;
}
tree op0_pops[1];
if (tree_logical_inverted_value (op0, op0_pops))
{
tree o20 = op0_pops[0];
if (op1 == o20 || operand_equal_p (op1, o20, 0))
{
if (tree_truth_valued_p (op1))
{
{
/* #line 342 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:342, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res =  constant_boolean_node (true, type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
}
}
if (tree_truth_valued_p (op0))
{
tree op1_pops[1];
if (tree_logical_inverted_value (op1, op1_pops))
{
tree o30 = op1_pops[0];
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 342 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:342, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res =  constant_boolean_node (true, type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
  tree res;
 res = captures[1];
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
  tree res;
 res = captures[1];
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:99, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:107, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
  return res;
}
}
}
if (integer_onep (op1))
{
{
/* #line 114 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:114, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
}
}
switch (TREE_CODE (op0))
{
CASE_CONVERT:
{
tree o20 = TREE_OPERAND (op0, 0);
switch (TREE_CODE (o20))
{
case EXACT_DIV_EXPR:
{
tree o30 = TREE_OPERAND (o20, 0);
tree o31 = TREE_OPERAND (o20, 1);
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
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
}
break;
}
default:;
}
break;
}
case EXACT_DIV_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
}
break;
}
default:;
}
if (integer_minus_onep (op1))
{
{
/* #line 819 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:819, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:114, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
}
switch (TREE_CODE (op0))
{
case TRUNC_DIV_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[2])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:141, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  wide_int_to_tree (type, mul);
  tree res;
  res = fold_build2_loc (loc, TRUNC_DIV_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[2])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:145, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res =  build_zero_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
break;
}
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:114, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:114, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
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
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, TRUNC_DIV_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:114, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:114, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
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
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
}
switch (TREE_CODE (op0))
{
case EXACT_DIV_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[2])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:141, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  wide_int_to_tree (type, mul);
  tree res;
  res = fold_build2_loc (loc, EXACT_DIV_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[2])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:145, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res =  build_zero_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
break;
}
default:;
}
break;
}
case RDIV_EXPR:
{
switch (TREE_CODE (op1))
{
case NEGATE_EXPR:
{
tree o30 = TREE_OPERAND (op1, 0);
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
  tree res;
 res =  build_minus_one_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
/* #line 154 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
/* #line 151 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (FLOAT_TYPE_P (type) && ! HONOR_NANS (type) && ! HONOR_INFINITIES (element_mode (type)))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:154, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res =  build_one_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
}
switch (TREE_CODE (op0))
{
case NEGATE_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
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
  tree res;
 res =  build_minus_one_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
}
break;
}
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:191, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  tem;
  tree res;
  res = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:195, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  inverse;
  tree res;
  res = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:191, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  tem;
  tree res;
  res = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:195, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  inverse;
  tree res;
  res = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:191, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  tem;
  tree res;
  res = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:195, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  inverse;
  tree res;
  res = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:169, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:175, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
  return res;
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
}
if (integer_onep (op1))
{
{
/* #line 209 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:209, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res =  build_zero_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
  tree res;
 res =  build_zero_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
}
if (integer_onep (op1))
{
{
/* #line 209 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:209, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res =  build_zero_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
  tree res;
 res =  build_zero_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
}
if (integer_onep (op1))
{
{
/* #line 209 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:209, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res =  build_zero_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
  tree res;
 res =  build_zero_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:225, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
{
  tree ops1[1], res;
  ops1[0] = captures[1];
  res = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (ops1[0]), ops1[0]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, TRUNC_MOD_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:209, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res =  build_zero_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
  tree res;
 res =  build_zero_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
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
  tree res;
 res = captures[1];
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
if (integer_all_onesp (op1))
{
{
/* #line 250 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:250, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
}
}
if (op1 == op0 || operand_equal_p (op1, op0, 0))
{
{
/* #line 256 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:256, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
}
}
switch (TREE_CODE (op0))
{
CASE_CONVERT:
{
tree o20 = TREE_OPERAND (op0, 0);
switch (TREE_CODE (op1))
{
CASE_CONVERT:
{
tree o40 = TREE_OPERAND (op1, 0);
{
/* #line 295 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o40;
/* #line 275 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((TREE_CODE (captures[1]) == INTEGER_CST && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && int_fits_type_p (captures[1], TREE_TYPE (captures[0]))) || (0 && types_compatible_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))) || (1 && TREE_TYPE (captures[0]) == TREE_TYPE (captures[1]))) && (BIT_AND_EXPR != BIT_AND_EXPR ||0) && ( TYPE_PRECISION (TREE_TYPE (captures[0])) < TYPE_PRECISION (type) || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT || TYPE_PRECISION (type) != GET_MODE_PRECISION (TYPE_MODE (type))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:295, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
{
  tree ops2[1], res;
  ops2[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (ops1[0]), ops2[0]);
  ops1[1] = res;
}
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
}
}
break;
}
default:;
}
{
/* #line 295 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = op1;
/* #line 275 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
if (((TREE_CODE (captures[1]) == INTEGER_CST && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && int_fits_type_p (captures[1], TREE_TYPE (captures[0]))) || (0 && types_compatible_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))) || (1 && TREE_TYPE (captures[0]) == TREE_TYPE (captures[1]))) && (BIT_AND_EXPR != BIT_AND_EXPR ||0) && ( TYPE_PRECISION (TREE_TYPE (captures[0])) < TYPE_PRECISION (type) || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT || TYPE_PRECISION (type) != GET_MODE_PRECISION (TYPE_MODE (type))))
{
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:295, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
{
  tree ops2[1], res;
  ops2[0] = captures[1];
  res = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (ops1[0]), ops2[0]);
  ops1[1] = res;
}
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
  tree res;
  res = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
  return res;
}
}
break;
}
case BIT_AND_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
switch (TREE_CODE (op1))
{
case BIT_AND_EXPR:
{
tree o50 = TREE_OPERAND (op1, 0);
tree o51 = TREE_OPERAND (op1, 1);
if (o51 == o21 || operand_equal_p (o51, o21, 0))
{
{
/* #line 301 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
captures[2] = o50;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:301, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
  return res;
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
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
  return res;
}
}
break;
}
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
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
case BIT_IOR_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
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
  if (TREE_SIDE_EFFECTS (captures[2]))
    captures[2] = save_expr (captures[2]);
   tree res_op0;
{
  tree ops1[2], res;
  ops1[0] = captures[0];
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op0 = res;
}
   tree res_op1;
{
  tree ops1[2], res;
  ops1[0] = captures[1];
  ops1[1] = captures[2];
  res = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (ops1[0]), ops1[0], ops1[1]);
  res_op1 = res;
}
  tree res;
  res = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
default:;
}
tree op1_pops[1];
if (tree_logical_inverted_value (op1, op1_pops))
{
tree o30 = op1_pops[0];
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 337 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:337, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res =  build_zero_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
}
switch (TREE_CODE (op0))
{
case BIT_IOR_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
if (op1 == o20 || operand_equal_p (op1, o20, 0))
{
{
/* #line 350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:350, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
break;
}
default:;
}
tree op0_pops[1];
if (tree_logical_inverted_value (op0, op0_pops))
{
tree o20 = op0_pops[0];
if (op1 == o20 || operand_equal_p (op1, o20, 0))
{
{
/* #line 337 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:337, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res =  build_zero_cst (type);
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
}
switch (TREE_CODE (op1))
{
case BIT_IOR_EXPR:
{
tree o30 = TREE_OPERAND (op1, 0);
tree o31 = TREE_OPERAND (op1, 1);
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o31;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:350, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
break;
}
default:;
}
switch (TREE_CODE (op0))
{
case BIT_IOR_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
switch (TREE_CODE (o20))
{
case BIT_NOT_EXPR:
{
tree o30 = TREE_OPERAND (o20, 0);
if (op1 == o30 || operand_equal_p (op1, o30, 0))
{
{
/* #line 355 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o30;
captures[1] = o21;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:355, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
  return res;
}
}
break;
}
default:;
}
switch (TREE_CODE (o21))
{
case BIT_NOT_EXPR:
{
tree o40 = TREE_OPERAND (o21, 0);
if (op1 == o40 || operand_equal_p (op1, o40, 0))
{
{
/* #line 355 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = o40;
captures[1] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:355, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
  return res;
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
switch (TREE_CODE (op1))
{
case BIT_IOR_EXPR:
{
tree o30 = TREE_OPERAND (op1, 0);
tree o31 = TREE_OPERAND (op1, 1);
switch (TREE_CODE (o30))
{
case BIT_NOT_EXPR:
{
tree o40 = TREE_OPERAND (o30, 0);
if (o40 == op0 || operand_equal_p (o40, op0, 0))
{
{
/* #line 355 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o31;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:355, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
  return res;
}
}
break;
}
default:;
}
switch (TREE_CODE (o31))
{
case BIT_NOT_EXPR:
{
tree o50 = TREE_OPERAND (o31, 0);
if (o50 == op0 || operand_equal_p (o50, op0, 0))
{
{
/* #line 355 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o30;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:355, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
  return res;
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
break;
}
case NE_EXPR:
{
switch (TREE_CODE (op0))
{
case BIT_AND_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
switch (TREE_CODE (o20))
{
case BIT_NOT_EXPR:
{
tree o30 = TREE_OPERAND (o20, 0);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:373, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
default:;
}
switch (TREE_CODE (o21))
{
case BIT_NOT_EXPR:
{
tree o40 = TREE_OPERAND (o21, 0);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:373, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
default:;
}
switch (TREE_CODE (o20))
{
case LSHIFT_EXPR:
{
tree o30 = TREE_OPERAND (o20, 0);
tree o31 = TREE_OPERAND (o20, 1);
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
if (TREE_SIDE_EFFECTS (op0)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:615, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
  tree res;
  res = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
}
break;
}
default:;
}
break;
}
case BIT_IOR_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
switch (TREE_CODE (o20))
{
case BIT_NOT_EXPR:
{
tree o30 = TREE_OPERAND (o20, 0);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:378, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
default:;
}
switch (TREE_CODE (o21))
{
case BIT_NOT_EXPR:
{
tree o40 = TREE_OPERAND (o21, 0);
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:378, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
  tree res;
  res = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
  return res;
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
  tree res;
 res = captures[0];
  return res;
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
  tree res;
 res = captures[1];
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
  tree res;
 res = captures[0];
  return res;
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
  tree res;
 res = captures[1];
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
if (integer_zerop (op1))
{
{
/* #line 588 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:588, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
switch (TREE_CODE (op1))
{
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:599, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  tem;
  tree res;
  res = fold_build2_loc (loc, LROTATE_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:599, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  tem;
  tree res;
  res = fold_build2_loc (loc, LROTATE_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:607, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  fold_binary (MINUS_EXPR, TREE_TYPE (captures[1]), build_int_cst (TREE_TYPE (captures[1]), element_precision (type)), captures[1]);
  tree res;
  res = fold_build2_loc (loc, RROTATE_EXPR, type, res_op0, res_op1);
  return res;
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
if (integer_zerop (op1))
{
{
/* #line 588 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:588, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
switch (TREE_CODE (op1))
{
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:599, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  tem;
  tree res;
  res = fold_build2_loc (loc, RROTATE_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:599, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  tem;
  tree res;
  res = fold_build2_loc (loc, RROTATE_EXPR, type, res_op0, res_op1);
  return res;
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
}
if (integer_zerop (op1))
{
{
/* #line 588 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:588, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
switch (TREE_CODE (op1))
{
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:599, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  tem;
  tree res;
  res = fold_build2_loc (loc, RSHIFT_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:599, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  tem;
  tree res;
  res = fold_build2_loc (loc, RSHIFT_EXPR, type, res_op0, res_op1);
  return res;
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
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:588, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
  tree res;
  res = non_lvalue_loc (loc, res_op0);
  return res;
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
  tree res;
 res = captures[0];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
switch (TREE_CODE (op1))
{
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:599, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  tem;
  tree res;
  res = fold_build2_loc (loc, LSHIFT_EXPR, type, res_op0, res_op1);
  return res;
}
}
}
break;
}
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:599, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  tem;
  tree res;
  res = fold_build2_loc (loc, LSHIFT_EXPR, type, res_op0, res_op1);
  return res;
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
case BIT_AND_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
tree o21 = TREE_OPERAND (op0, 1);
switch (TREE_CODE (o20))
{
case LSHIFT_EXPR:
{
tree o30 = TREE_OPERAND (o20, 0);
tree o31 = TREE_OPERAND (o20, 1);
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
if (TREE_SIDE_EFFECTS (op0)) return NULL_TREE;
if (TREE_SIDE_EFFECTS (op1)) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:615, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
  tree res;
  res = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
  return res;
}
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
break;
}
case COMPLEX_EXPR:
{
switch (TREE_CODE (op0))
{
case REALPART_EXPR:
{
tree o20 = TREE_OPERAND (op0, 0);
switch (TREE_CODE (op1))
{
case IMAGPART_EXPR:
{
tree o40 = TREE_OPERAND (op1, 0);
if (o40 == o20 || operand_equal_p (o40, o20, 0))
{
{
/* #line 824 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[1] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:824, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[0];
  return res;
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
break;
}
default:;
}
return NULL_TREE;
}

tree
generic_simplify (location_t loc, enum tree_code code, tree type ATTRIBUTE_UNUSED, tree op0, tree op1, tree op2)
{
switch (code)
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[2])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:863, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[2];
  return res;
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
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[2])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:867, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[1];
  return res;
}
}
break;
}
default:;
}
switch (TREE_CODE (op1))
{
case COND_EXPR:
{
tree o30 = TREE_OPERAND (op1, 0);
tree o31 = TREE_OPERAND (op1, 1);
tree o32 = TREE_OPERAND (op1, 2);
if (o30 == op0 || operand_equal_p (o30, op0, 0))
{
{
/* #line 879 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[4] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = o31;
captures[2] = o32;
captures[3] = op2;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[2])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[3])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:879, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
   tree res_op2;
  res_op2 = captures[3];
  tree res;
  res = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
  return res;
}
}
break;
}
default:;
}
switch (TREE_CODE (op2))
{
case COND_EXPR:
{
tree o40 = TREE_OPERAND (op2, 0);
tree o41 = TREE_OPERAND (op2, 1);
tree o42 = TREE_OPERAND (op2, 2);
if (o40 == op0 || operand_equal_p (o40, op0, 0))
{
{
/* #line 882 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[4] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
captures[2] = o41;
captures[3] = o42;
if (TREE_SIDE_EFFECTS (captures[0])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[2])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[3])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:882, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
   tree res_op2;
  res_op2 = captures[3];
  tree res;
  res = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
  return res;
}
}
break;
}
default:;
}
if (op2 == op1 || operand_equal_p (op2, op1, 0))
{
{
/* #line 887 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[2] ATTRIBUTE_UNUSED = {};
captures[0] = op0;
captures[1] = op1;
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:887, %s:%d\n", __FILE__, __LINE__);
  tree res;
 res = captures[1];
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
tree op0_pops[1];
if (tree_logical_inverted_value (op0, op0_pops))
{
tree o20 = op0_pops[0];
if (tree_truth_valued_p (o20))
{
{
/* #line 892 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = op1;
captures[2] = op2;
if (TREE_SIDE_EFFECTS (captures[1])) return NULL_TREE;
if (TREE_SIDE_EFFECTS (captures[2])) return NULL_TREE;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:892, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[2];
   tree res_op2;
  res_op2 = captures[1];
  tree res;
  res = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
  return res;
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
  tree res;
 res = captures[1];
  if (TREE_SIDE_EFFECTS (captures[2]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), res);
  return res;
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
  tree res;
 res = captures[2];
  if (TREE_SIDE_EFFECTS (captures[1]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), res);
  return res;
}
}
break;
}
default:;
}
switch (TREE_CODE (op1))
{
case VEC_COND_EXPR:
{
tree o30 = TREE_OPERAND (op1, 0);
tree o31 = TREE_OPERAND (op1, 1);
tree o32 = TREE_OPERAND (op1, 2);
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
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
   tree res_op2;
  res_op2 = captures[3];
  tree res;
  res = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
  if (TREE_SIDE_EFFECTS (captures[2]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), res);
  return res;
}
}
break;
}
default:;
}
switch (TREE_CODE (op2))
{
case VEC_COND_EXPR:
{
tree o40 = TREE_OPERAND (op2, 0);
tree o41 = TREE_OPERAND (op2, 1);
tree o42 = TREE_OPERAND (op2, 2);
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
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[1];
   tree res_op2;
  res_op2 = captures[3];
  tree res;
  res = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
  if (TREE_SIDE_EFFECTS (captures[2]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), res);
  return res;
}
}
break;
}
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
  tree res;
 res = captures[1];
  if (TREE_SIDE_EFFECTS (captures[0]))
    res = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), res);
  return res;
}
}
tree op0_pops[1];
if (tree_logical_inverted_value (op0, op0_pops))
{
tree o20 = op0_pops[0];
if (tree_truth_valued_p (o20))
{
{
/* #line 892 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/match.pd" */
tree captures[3] ATTRIBUTE_UNUSED = {};
captures[0] = o20;
captures[1] = op1;
captures[2] = op2;
if (dump_file && (dump_flags & TDF_DETAILS)) fprintf (dump_file, "Applying pattern match.pd:892, %s:%d\n", __FILE__, __LINE__);
   tree res_op0;
  res_op0 = captures[0];
   tree res_op1;
  res_op1 = captures[2];
   tree res_op2;
  res_op2 = captures[1];
  tree res;
  res = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
  return res;
}
}
}
break;
}
default:;
}
return NULL_TREE;
}
