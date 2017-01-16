/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "hash-set.h"
#include "machmode.h"
#include "vec.h"
#include "double-int.h"
#include "input.h"
#include "alias.h"
#include "symtab.h"
#include "wide-int.h"
#include "inchash.h"
#include "tree.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "tm_p.h"
#include "hashtab.h"
#include "hash-set.h"
#include "vec.h"
#include "machmode.h"
#include "hard-reg-set.h"
#include "input.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "predict.h"
#include "basic-block.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"

static inline int
s_register_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 23 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);
  /* We don't consider registers whose class is NO_REGS
     to be a register operand.  */
  /* XXX might have to check for lo regs only for thumb ??? */
  return (REG_P (op)
	  && (REGNO (op) >= FIRST_PSEUDO_REGISTER
	      || REGNO_REG_CLASS (REGNO (op)) != NO_REGS));
}

int
s_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
(s_register_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
imm_for_neon_inv_logic_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 36 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  return (TARGET_NEON
          && neon_immediate_valid_for_logic (op, mode, 1, NULL, NULL));
}

int
imm_for_neon_inv_logic_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(imm_for_neon_inv_logic_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
neon_inv_logic_op2 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (imm_for_neon_inv_logic_operand (op, mode)) || (s_register_operand (op, mode));
}

static inline int
imm_for_neon_logic_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 47 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  return (TARGET_NEON
          && neon_immediate_valid_for_logic (op, mode, 0, NULL, NULL));
}

int
imm_for_neon_logic_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(imm_for_neon_logic_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
neon_logic_op2 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (imm_for_neon_logic_operand (op, mode)) || (s_register_operand (op, mode));
}

static inline int
arm_hard_general_register_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 59 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  return REGNO (op) <= LAST_ARM_REGNUM;
}

int
arm_hard_general_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
(arm_hard_general_register_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
low_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 66 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(REGNO (op) <= LAST_LO_REGNUM))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
low_reg_or_int_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) || (low_register_operand (op, mode));
}

static inline int
arm_general_register_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 76 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  return (REG_P (op)
	  && (REGNO (op) <= LAST_ARM_REGNUM
	      || REGNO (op) >= FIRST_PSEUDO_REGISTER));
}

int
arm_general_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
(arm_general_register_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
vfp_register_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 87 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  /* We don't consider registers whose class is NO_REGS
     to be a register operand.  */
  return (REG_P (op)
	  && (REGNO (op) >= FIRST_PSEUDO_REGISTER
	      || REGNO_REG_CLASS (REGNO (op)) == VFP_D0_D7_REGS
	      || REGNO_REG_CLASS (REGNO (op)) == VFP_LO_REGS
	      || (TARGET_VFPD32
		  && REGNO_REG_CLASS (REGNO (op)) == VFP_REGS)));
}

int
vfp_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
(vfp_register_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
vfp_hard_register_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 103 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  return (IS_VFP_REGNUM (REGNO (op)));
}

int
vfp_hard_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
(vfp_hard_register_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
zero_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 109 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(op == CONST0_RTX (mode));
}

int
reg_or_zero_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || (zero_operand (op, mode));
}

int
subreg_lowpart_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == SUBREG) && (
#line 118 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(subreg_lowpart_p (op)));
}

int
reg_or_int_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) || (s_register_operand (op, mode));
}

int
arm_immediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 127 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(const_ok_for_arm (INTVAL (op))));
}

int
arm_immediate_di_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
      break;
    default:
      return false;
    }
  return 
#line 133 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(arm_const_double_by_immediates (op));
}

int
arm_neg_immediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 137 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(const_ok_for_arm (-INTVAL (op))));
}

int
arm_not_immediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 141 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(const_ok_for_arm (~INTVAL (op))));
}

int
const0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 145 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(INTVAL (op) == 0));
}

int
arm_rhs_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || (arm_immediate_operand (op, mode));
}

int
arm_rhsm_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (arm_rhs_operand (op, mode)) || (memory_operand (op, mode));
}

int
const_int_I_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_int_operand (op, mode)) && (
#line 158 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(satisfies_constraint_I (op)));
}

int
const_int_M_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_int_operand (op, mode)) && (
#line 162 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(satisfies_constraint_M (op)));
}

int
shift_amount_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((
#line 167 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(TARGET_ARM)) && (s_register_operand (op, mode))) || (const_int_operand (op, mode));
}

int
const_neon_scalar_shift_amount_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 173 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(((unsigned HOST_WIDE_INT) INTVAL (op)) <= GET_MODE_BITSIZE (mode)
	&& ((unsigned HOST_WIDE_INT) INTVAL (op)) > 0));
}

int
ldrd_strd_offset_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_int_operand (op, mode)) && (
#line 178 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(TARGET_LDRD && offset_ok_for_ldrd_strd (INTVAL (op))));
}

int
arm_add_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (arm_rhs_operand (op, mode)) || (arm_neg_immediate_operand (op, mode));
}

int
arm_anddi_operand_neon (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || (((GET_CODE (op) == CONST_INT) && (
#line 187 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(const_ok_for_dimode_op (INTVAL (op), AND)))) || (neon_inv_logic_op2 (op, mode)));
}

int
arm_iordi_operand_neon (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || (((GET_CODE (op) == CONST_INT) && (
#line 193 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(const_ok_for_dimode_op (INTVAL (op), IOR)))) || (neon_logic_op2 (op, mode)));
}

int
arm_xordi_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || ((GET_CODE (op) == CONST_INT) && (
#line 199 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(const_ok_for_dimode_op (INTVAL (op), XOR))));
}

int
arm_adddi_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || ((GET_CODE (op) == CONST_INT) && (
#line 204 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(const_ok_for_dimode_op (INTVAL (op), PLUS))));
}

int
arm_addimm_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (arm_immediate_operand (op, mode)) || (arm_neg_immediate_operand (op, mode));
}

int
arm_not_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (arm_rhs_operand (op, mode)) || (arm_not_immediate_operand (op, mode));
}

int
arm_di_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || (arm_immediate_di_operand (op, mode));
}

int
offsettable_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 223 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(offsettable_address_p (reload_completed | reload_in_progress,
				mode, XEXP (op, 0))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
call_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == MEM) && ((
#line 230 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(GET_RTX_CLASS (GET_CODE (XEXP (op, 0)))
			 != RTX_AUTOINC)) && (memory_operand (op, mode)));
}

int
arm_reload_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case MEM:
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
#line 236 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
((!CONSTANT_P (op)
		     && (true_regnum(op) == -1
			 || (REG_P (op)
			     && REGNO (op) >= FIRST_PSEUDO_REGISTER))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
vfp_compare_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || ((GET_CODE (op) == CONST_DOUBLE) && (
#line 244 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(arm_const_double_rtx (op))));
}

int
arm_float_compare_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 247 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(TARGET_VFP)) ? (vfp_compare_operand (op, mode)) : (s_register_operand (op, mode));
}

int
index_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || ((immediate_operand (op, mode)) && (
#line 255 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
((!CONST_INT_P (op)
			  || (INTVAL (op) < 4096 && INTVAL (op) > -4096)))));
}

int
shiftable_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MINUS:
    case IOR:
    case XOR:
    case AND:
      break;
    default:
      return false;
    }
  return 
#line 261 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(mode == GET_MODE (op));
}

int
shiftable_operator_strict_it (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case AND:
      break;
    default:
      return false;
    }
  return 
#line 265 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(mode == GET_MODE (op));
}

int
logical_binary_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case IOR:
    case XOR:
    case AND:
      break;
    default:
      return false;
    }
  return 
#line 270 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(mode == GET_MODE (op));
}

int
commutative_binary_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case IOR:
    case XOR:
    case AND:
    case PLUS:
      break;
    default:
      return false;
    }
  return 
#line 275 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(mode == GET_MODE (op));
}

int
shift_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((((GET_CODE (op) == MULT) && (
#line 285 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(power_of_two_operand (XEXP (op, 1), mode)))) || ((GET_CODE (op) == ROTATE) && (
#line 287 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(CONST_INT_P (XEXP (op, 1))
				   && ((unsigned HOST_WIDE_INT) INTVAL (XEXP (op, 1))) < 32)))) || ((GET_CODE (op) == ASHIFT || GET_CODE (op) == ASHIFTRT || GET_CODE (op) == LSHIFTRT || GET_CODE (op) == ROTATERT) && (
#line 290 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(!CONST_INT_P (XEXP (op, 1))
			      || ((unsigned HOST_WIDE_INT) INTVAL (XEXP (op, 1))) < 32)))) && (
#line 292 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(mode == GET_MODE (op)));
}

int
shift_nomul_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == ROTATE) && (
#line 296 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(CONST_INT_P (XEXP (op, 1))
			      && ((unsigned HOST_WIDE_INT) INTVAL (XEXP (op, 1))) < 32))) || ((GET_CODE (op) == ASHIFT || GET_CODE (op) == ASHIFTRT || GET_CODE (op) == LSHIFTRT || GET_CODE (op) == ROTATERT) && (
#line 299 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(!CONST_INT_P (XEXP (op, 1))
			      || ((unsigned HOST_WIDE_INT) INTVAL (XEXP (op, 1))) < 32)))) && (
#line 301 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(mode == GET_MODE (op)));
}

int
sat_shift_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == MULT) && (
#line 306 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(power_of_two_operand (XEXP (op, 1), mode)))) || ((GET_CODE (op) == ASHIFT || GET_CODE (op) == ASHIFTRT) && (
#line 308 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(CONST_INT_P (XEXP (op, 1))
		              && ((unsigned HOST_WIDE_INT) INTVAL (XEXP (op, 1)) < 32))))) && (
#line 310 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(mode == GET_MODE (op)));
}

int
mult_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return GET_CODE (op) == MULT;
}

int
thumb_16bit_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MINUS:
    case AND:
    case IOR:
    case XOR:
      return true;
    default:
      break;
    }
  return false;
}

int
equality_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
      return true;
    default:
      break;
    }
  return false;
}

int
expandable_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case LE:
    case LT:
    case GE:
    case GT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNLT:
    case UNLE:
    case UNGE:
    case UNGT:
      return true;
    default:
      break;
    }
  return false;
}

int
arm_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (expandable_comparison_operator (op, mode)) && (
#line 334 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(maybe_get_arm_condition_code (op) != ARM_NV));
}

int
lt_ge_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LT:
    case GE:
      return true;
    default:
      break;
    }
  return false;
}

int
arm_vsel_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (expandable_comparison_operator (op, mode)) && (
#line 342 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(maybe_get_arm_condition_code (op) == ARM_GE
                    || maybe_get_arm_condition_code (op) == ARM_GT
                    || maybe_get_arm_condition_code (op) == ARM_EQ
                    || maybe_get_arm_condition_code (op) == ARM_VS
                    || maybe_get_arm_condition_code (op) == ARM_LT
                    || maybe_get_arm_condition_code (op) == ARM_LE
                    || maybe_get_arm_condition_code (op) == ARM_NE
                    || maybe_get_arm_condition_code (op) == ARM_VC));
}

int
arm_cond_move_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 352 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(arm_restrict_it)) ? ((
#line 353 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(TARGET_FPU_ARMV8)) && (arm_vsel_comparison_operator (op, mode))) : (expandable_comparison_operator (op, mode));
}

int
noov_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LT:
    case GE:
    case EQ:
    case NE:
      return true;
    default:
      break;
    }
  return false;
}

int
minmax_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SMIN:
    case SMAX:
    case UMIN:
    case UMAX:
      break;
    default:
      return false;
    }
  return 
#line 362 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(mode == GET_MODE (op));
}

int
cc_register (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == REG) && ((
#line 366 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(REGNO (op) == CC_REGNUM)) && ((
#line 367 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(mode == GET_MODE (op))) || (
#line 368 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(mode == VOIDmode && GET_MODE_CLASS (GET_MODE (op)) == MODE_CC))));
}

static inline int
dominant_cc_register_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 372 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  if (mode == VOIDmode)
    {
      mode = GET_MODE (op);
      
      if (GET_MODE_CLASS (mode) != MODE_CC)
	return false;
    }

  return (cc_register (op, mode)
	  && (mode == CC_DNEmode
	     || mode == CC_DEQmode
	     || mode == CC_DLEmode
	     || mode == CC_DLTmode
	     || mode == CC_DGEmode
	     || mode == CC_DGTmode
	     || mode == CC_DLEUmode
	     || mode == CC_DLTUmode
	     || mode == CC_DGEUmode
	     || mode == CC_DGTUmode));
}

int
dominant_cc_register (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == REG) && (
(dominant_cc_register_1 (op, mode)));
}

int
arm_extendqisi_mem_op (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
#line 396 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(TARGET_ARM ? arm_legitimate_address_outer_p (mode,
                                                                 XEXP (op, 0),
						                 SIGN_EXTEND,
								 0)
                               : memory_address_p (QImode, XEXP (op, 0))));
}

int
arm_reg_or_extendqisi_mem_op (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (arm_extendqisi_mem_op (op, mode)) || (s_register_operand (op, mode));
}

static inline int
power_of_two_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 408 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  unsigned HOST_WIDE_INT value = INTVAL (op) & 0xffffffff;

  return value != 0 && (value & (value - 1)) == 0;
}

int
power_of_two_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(power_of_two_operand_1 (op, mode)));
}

static inline int
nonimmediate_di_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 416 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
   if (s_register_operand (op, mode))
     return true;

   if (GET_CODE (op) == SUBREG)
     op = SUBREG_REG (op);

   return MEM_P (op) && memory_address_p (DImode, XEXP (op, 0));
}

int
nonimmediate_di_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case MEM:
      break;
    default:
      return false;
    }
  return (
(nonimmediate_di_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
di_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
      return true;
    default:
      break;
    }
  return (GET_CODE (op) == REG || GET_CODE (op) == SUBREG || GET_CODE (op) == MEM) && (nonimmediate_di_operand (op, mode));
}

static inline int
nonimmediate_soft_df_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 433 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  if (s_register_operand (op, mode))
    return true;

  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  return MEM_P (op) && memory_address_p (DFmode, XEXP (op, 0));
}

int
nonimmediate_soft_df_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case MEM:
      break;
    default:
      return false;
    }
  return (
(nonimmediate_soft_df_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
soft_df_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_DOUBLE) || ((GET_CODE (op) == REG || GET_CODE (op) == SUBREG || GET_CODE (op) == MEM) && (nonimmediate_soft_df_operand (op, mode)));
}

static inline int
load_multiple_operation_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 450 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
 return ldm_stm_operation_p (op, /*load=*/true, SImode,
                                 /*consecutive=*/false,
                                 /*return_pc=*/false);
}

int
load_multiple_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(load_multiple_operation_1 (op, mode)));
}

static inline int
store_multiple_operation_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 458 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
 return ldm_stm_operation_p (op, /*load=*/false, SImode,
                                 /*consecutive=*/false,
                                 /*return_pc=*/false);
}

int
store_multiple_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(store_multiple_operation_1 (op, mode)));
}

static inline int
pop_multiple_return_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 466 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
 return ldm_stm_operation_p (op, /*load=*/true, SImode,
                                 /*consecutive=*/false,
                                 /*return_pc=*/true);
}

int
pop_multiple_return (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(pop_multiple_return_1 (op, mode)));
}

static inline int
pop_multiple_fp_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 474 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
 return ldm_stm_operation_p (op, /*load=*/true, DFmode,
                                 /*consecutive=*/true,
                                 /*return_pc=*/false);
}

int
pop_multiple_fp (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(pop_multiple_fp_1 (op, mode)));
}

static inline int
multi_register_push_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 482 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  if ((GET_CODE (XVECEXP (op, 0, 0)) != SET)
      || (GET_CODE (SET_SRC (XVECEXP (op, 0, 0))) != UNSPEC)
      || (XINT (SET_SRC (XVECEXP (op, 0, 0)), 1) != UNSPEC_PUSH_MULT))
    return false;

  return true;
}

int
multi_register_push (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(multi_register_push_1 (op, mode)));
}

static inline int
push_mult_memory_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 493 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  /* ??? Given how PUSH_MULT is generated in the prologues, is there
     any point in testing for thumb1 specially?  All of the variants
     use the same form.  */
  if (TARGET_THUMB1)
    {
      /* ??? No attempt is made to represent STMIA, or validate that
	 the stack adjustment matches the register count.  This is
	 true of the ARM/Thumb2 path as well.  */
      rtx x = XEXP (op, 0);
      if (GET_CODE (x) != PRE_MODIFY)
	return false;
      if (XEXP (x, 0) != stack_pointer_rtx)
	return false;
      x = XEXP (x, 1);
      if (GET_CODE (x) != PLUS)
	return false;
      if (XEXP (x, 0) != stack_pointer_rtx)
	return false;
      return CONST_INT_P (XEXP (x, 1));
    }

  /* ARM and Thumb2 handle pre-modify in their legitimate_address.  */
  return memory_operand (op, mode);
}

int
push_mult_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(push_mult_memory_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
thumb1_cmp_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG || GET_CODE (op) == SUBREG) && (s_register_operand (op, mode))) || ((GET_CODE (op) == CONST_INT) && (
#line 528 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(((unsigned HOST_WIDE_INT) INTVAL (op)) < 256)));
}

int
thumb1_cmpneg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 532 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(INTVAL (op) < 0 && INTVAL (op) > -256));
}

int
thumb_cbrch_target_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case MEM:
      break;
    default:
      return false;
    }
  return (s_register_operand (op, mode)) || ((
#line 546 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(reload_in_progress || reload_completed)) && (memory_operand (op, mode)));
}

int
imm_or_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (immediate_operand (op, mode)) || (register_operand (op, mode));
}

static inline int
const_multiple_of_8_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 562 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  unsigned HOST_WIDE_INT val = INTVAL (op);
  return (val & 7) == 0;
}

int
const_multiple_of_8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const_multiple_of_8_operand_1 (op, mode)));
}

static inline int
imm_for_neon_mov_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 569 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  return neon_immediate_valid_for_move (op, mode, NULL, NULL);
}

int
imm_for_neon_mov_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_VECTOR:
    case CONST_INT:
      break;
    default:
      return false;
    }
  return 
(imm_for_neon_mov_operand_1 (op, mode));
}

static inline int
imm_for_neon_lshift_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 575 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  return neon_immediate_valid_for_shift (op, mode, NULL, NULL, true);
}

int
imm_for_neon_lshift_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(imm_for_neon_lshift_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
imm_for_neon_rshift_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 581 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  return neon_immediate_valid_for_shift (op, mode, NULL, NULL, false);
}

int
imm_for_neon_rshift_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(imm_for_neon_rshift_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
imm_lshift_or_reg_neon (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || (imm_for_neon_lshift_operand (op, mode));
}

int
imm_rshift_or_reg_neon (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (s_register_operand (op, mode)) || (imm_for_neon_rshift_operand (op, mode));
}

int
cmpdi_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 596 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(TARGET_32BIT)) && (arm_di_operand (op, mode));
}

int
arm_sync_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (GET_CODE (XEXP (op, 0)) == REG);
}

static inline int
vect_par_constant_high_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 607 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  HOST_WIDE_INT count = XVECLEN (op, 0);
  int i;
  int base = GET_MODE_NUNITS (mode);

  if ((count < 1)
      || (count != base/2))
    return false;
    
  if (!VECTOR_MODE_P (mode))
    return false;

  for (i = 0; i < count; i++)
   {
     rtx elt = XVECEXP (op, 0, i);
     int val;

     if (!CONST_INT_P (elt))
       return false;

     val = INTVAL (elt);
     if (val != (base/2) + i)
       return false;
   }
  return true; 
}

int
vect_par_constant_high (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(vect_par_constant_high_1 (op, mode)));
}

static inline int
vect_par_constant_low_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 636 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
{
  HOST_WIDE_INT count = XVECLEN (op, 0);
  int i;
  int base = GET_MODE_NUNITS (mode);

  if ((count < 1)
      || (count != base/2))
    return false;
    
  if (!VECTOR_MODE_P (mode))
    return false;

  for (i = 0; i < count; i++)
   {
     rtx elt = XVECEXP (op, 0, i);
     int val;

     if (!CONST_INT_P (elt))
       return false;

     val = INTVAL (elt);
     if (val != i)
       return false;
   } 
  return true; 
}

int
vect_par_constant_low (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(vect_par_constant_low_1 (op, mode)));
}

int
const_double_vcvt_power_of_two_reciprocal (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 665 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(TARGET_32BIT && TARGET_VFP
                   && vfp3_const_double_for_fract_bits (op)));
}

int
const_double_vcvt_power_of_two (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 670 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(TARGET_32BIT && TARGET_VFP
                   && vfp3_const_double_for_bits (op)));
}

int
neon_struct_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 675 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 2, true)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
neon_permissive_struct_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 679 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 2, false)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
neon_perm_struct_or_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (neon_permissive_struct_operand (op, mode)) || (s_register_operand (op, mode));
}

int
add_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return GET_CODE (op) == PLUS;
}

int
mem_noofs_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (GET_CODE (XEXP (op, 0)) == REG)) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
call_insn_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == SYMBOL_REF) && (
#line 694 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/predicates.md"
(!arm_is_long_call_p (SYMBOL_REF_DECL (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode))) || (s_register_operand (op, mode));
}

enum constraint_num
lookup_constraint_1 (const char *str)
{
  switch (str[0])
    {
    case '<':
      return CONSTRAINT__l;
    case '>':
      return CONSTRAINT__g;
    case 'C':
      if (!strncmp (str + 1, "s", 1))
        return CONSTRAINT_Cs;
      break;
    case 'D':
      if (!strncmp (str + 1, "a", 1))
        return CONSTRAINT_Da;
      if (!strncmp (str + 1, "b", 1))
        return CONSTRAINT_Db;
      if (!strncmp (str + 1, "c", 1))
        return CONSTRAINT_Dc;
      if (!strncmp (str + 1, "d", 1))
        return CONSTRAINT_Dd;
      if (!strncmp (str + 1, "e", 1))
        return CONSTRAINT_De;
      if (!strncmp (str + 1, "f", 1))
        return CONSTRAINT_Df;
      if (!strncmp (str + 1, "g", 1))
        return CONSTRAINT_Dg;
      if (!strncmp (str + 1, "i", 1))
        return CONSTRAINT_Di;
      if (!strncmp (str + 1, "n", 1))
        return CONSTRAINT_Dn;
      if (!strncmp (str + 1, "l", 1))
        return CONSTRAINT_Dl;
      if (!strncmp (str + 1, "L", 1))
        return CONSTRAINT_DL;
      if (!strncmp (str + 1, "o", 1))
        return CONSTRAINT_Do;
      if (!strncmp (str + 1, "v", 1))
        return CONSTRAINT_Dv;
      if (!strncmp (str + 1, "y", 1))
        return CONSTRAINT_Dy;
      if (!strncmp (str + 1, "t", 1))
        return CONSTRAINT_Dt;
      if (!strncmp (str + 1, "p", 1))
        return CONSTRAINT_Dp;
      if (!strncmp (str + 1, "z", 1))
        return CONSTRAINT_Dz;
      break;
    case 'E':
      return CONSTRAINT_E;
    case 'F':
      return CONSTRAINT_F;
    case 'G':
      return CONSTRAINT_G;
    case 'I':
      return CONSTRAINT_I;
    case 'J':
      return CONSTRAINT_J;
    case 'K':
      return CONSTRAINT_K;
    case 'L':
      return CONSTRAINT_L;
    case 'M':
      return CONSTRAINT_M;
    case 'N':
      return CONSTRAINT_N;
    case 'O':
      return CONSTRAINT_O;
    case 'P':
      if (!strncmp (str + 1, "J", 1))
        return CONSTRAINT_PJ;
      if (!strncmp (str + 1, "a", 1))
        return CONSTRAINT_Pa;
      if (!strncmp (str + 1, "b", 1))
        return CONSTRAINT_Pb;
      if (!strncmp (str + 1, "c", 1))
        return CONSTRAINT_Pc;
      if (!strncmp (str + 1, "d", 1))
        return CONSTRAINT_Pd;
      if (!strncmp (str + 1, "e", 1))
        return CONSTRAINT_Pe;
      if (!strncmp (str + 1, "s", 1))
        return CONSTRAINT_Ps;
      if (!strncmp (str + 1, "t", 1))
        return CONSTRAINT_Pt;
      if (!strncmp (str + 1, "u", 1))
        return CONSTRAINT_Pu;
      if (!strncmp (str + 1, "v", 1))
        return CONSTRAINT_Pv;
      if (!strncmp (str + 1, "w", 1))
        return CONSTRAINT_Pw;
      if (!strncmp (str + 1, "x", 1))
        return CONSTRAINT_Px;
      if (!strncmp (str + 1, "y", 1))
        return CONSTRAINT_Py;
      if (!strncmp (str + 1, "z", 1))
        return CONSTRAINT_Pz;
      if (!strncmp (str + 1, "j", 1))
        return CONSTRAINT_Pj;
      break;
    case 'Q':
      return CONSTRAINT_Q;
    case 'T':
      if (!strncmp (str + 1, "s", 1))
        return CONSTRAINT_Ts;
      break;
    case 'U':
      if (!strncmp (str + 1, "h", 1))
        return CONSTRAINT_Uh;
      if (!strncmp (str + 1, "t", 1))
        return CONSTRAINT_Ut;
      if (!strncmp (str + 1, "v", 1))
        return CONSTRAINT_Uv;
      if (!strncmp (str + 1, "y", 1))
        return CONSTRAINT_Uy;
      if (!strncmp (str + 1, "n", 1))
        return CONSTRAINT_Un;
      if (!strncmp (str + 1, "m", 1))
        return CONSTRAINT_Um;
      if (!strncmp (str + 1, "s", 1))
        return CONSTRAINT_Us;
      if (!strncmp (str + 1, "q", 1))
        return CONSTRAINT_Uq;
      if (!strncmp (str + 1, "u", 1))
        return CONSTRAINT_Uu;
      if (!strncmp (str + 1, "w", 1))
        return CONSTRAINT_Uw;
      if (!strncmp (str + 1, "S", 1))
        return CONSTRAINT_US;
      if (!strncmp (str + 1, "a", 1))
        return CONSTRAINT_Ua;
      break;
    case 'V':
      return CONSTRAINT_V;
    case 'X':
      return CONSTRAINT_X;
    case 'b':
      return CONSTRAINT_b;
    case 'c':
      return CONSTRAINT_c;
    case 'h':
      return CONSTRAINT_h;
    case 'i':
      return CONSTRAINT_i;
    case 'j':
      return CONSTRAINT_j;
    case 'k':
      return CONSTRAINT_k;
    case 'l':
      return CONSTRAINT_l;
    case 'm':
      return CONSTRAINT_m;
    case 'n':
      return CONSTRAINT_n;
    case 'o':
      return CONSTRAINT_o;
    case 'p':
      return CONSTRAINT_p;
    case 'q':
      return CONSTRAINT_q;
    case 'r':
      return CONSTRAINT_r;
    case 's':
      return CONSTRAINT_s;
    case 't':
      return CONSTRAINT_t;
    case 'w':
      return CONSTRAINT_w;
    case 'x':
      return CONSTRAINT_x;
    case 'y':
      return CONSTRAINT_y;
    case 'z':
      return CONSTRAINT_z;
    default: break;
    }
  return CONSTRAINT__UNKNOWN;
}

const unsigned char lookup_constraint_array[] = {
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__l, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__g, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_E, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_F, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_G, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_I, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_J, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_K, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_L, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_M, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_N, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_O, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_Q, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_V, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_X, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_b, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_c, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_h, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_i, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_j, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_k, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_l, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_m, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_n, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_o, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_p, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_q, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_r, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_s, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_t, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_w, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_x, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_y, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_z, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN
};

enum reg_class
reg_class_for_constraint_1 (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_r: return GENERAL_REGS;
    case CONSTRAINT_t: return TARGET_32BIT ? VFP_LO_REGS : NO_REGS;
    case CONSTRAINT_w: return TARGET_32BIT ? (TARGET_VFPD32 ? VFP_REGS : VFP_LO_REGS) : NO_REGS;
    case CONSTRAINT_x: return TARGET_32BIT ? VFP_D0_D7_REGS : NO_REGS;
    case CONSTRAINT_y: return TARGET_REALLY_IWMMXT ? IWMMXT_REGS : NO_REGS;
    case CONSTRAINT_z: return TARGET_REALLY_IWMMXT ? IWMMXT_GR_REGS : NO_REGS;
    case CONSTRAINT_l: return TARGET_THUMB ? LO_REGS : GENERAL_REGS;
    case CONSTRAINT_h: return TARGET_THUMB ? HI_REGS : NO_REGS;
    case CONSTRAINT_k: return STACK_REG;
    case CONSTRAINT_q: return (TARGET_ARM && TARGET_LDRD) ? CORE_REGS : GENERAL_REGS;
    case CONSTRAINT_b: return TARGET_THUMB ? BASE_REGS : NO_REGS;
    case CONSTRAINT_c: return CC_REG;
    case CONSTRAINT_Cs: return CALLER_SAVE_REGS;
    case CONSTRAINT_Ts: return (arm_restrict_it) ? LO_REGS : GENERAL_REGS;
    default: break;
    }
  return NO_REGS;
}

bool (*constraint_satisfied_p_array[]) (rtx) = {
  satisfies_constraint_Pj,
  satisfies_constraint_PJ,
  satisfies_constraint_I,
  satisfies_constraint_J,
  satisfies_constraint_K,
  satisfies_constraint_L,
  satisfies_constraint_M,
  satisfies_constraint_N,
  satisfies_constraint_O,
  satisfies_constraint_Pa,
  satisfies_constraint_Pb,
  satisfies_constraint_Pc,
  satisfies_constraint_Pd,
  satisfies_constraint_Pe,
  satisfies_constraint_Ps,
  satisfies_constraint_Pt,
  satisfies_constraint_Pu,
  satisfies_constraint_Pv,
  satisfies_constraint_Pw,
  satisfies_constraint_Px,
  satisfies_constraint_Py,
  satisfies_constraint_Pz,
  satisfies_constraint_m,
  satisfies_constraint_o,
  satisfies_constraint_Ua,
  satisfies_constraint_Uh,
  satisfies_constraint_Ut,
  satisfies_constraint_Uv,
  satisfies_constraint_Uy,
  satisfies_constraint_Un,
  satisfies_constraint_Um,
  satisfies_constraint_Us,
  satisfies_constraint_Uq,
  satisfies_constraint_Q,
  satisfies_constraint_Uu,
  satisfies_constraint_Uw,
  satisfies_constraint_p,
  satisfies_constraint_V,
  satisfies_constraint__l,
  satisfies_constraint__g,
  satisfies_constraint_i,
  satisfies_constraint_s,
  satisfies_constraint_n,
  satisfies_constraint_E,
  satisfies_constraint_F,
  satisfies_constraint_X,
  satisfies_constraint_j,
  satisfies_constraint_G,
  satisfies_constraint_Dz,
  satisfies_constraint_Da,
  satisfies_constraint_Db,
  satisfies_constraint_Dc,
  satisfies_constraint_Dd,
  satisfies_constraint_De,
  satisfies_constraint_Df,
  satisfies_constraint_Dg,
  satisfies_constraint_Di,
  satisfies_constraint_Dn,
  satisfies_constraint_Dl,
  satisfies_constraint_DL,
  satisfies_constraint_Do,
  satisfies_constraint_Dv,
  satisfies_constraint_Dy,
  satisfies_constraint_Dt,
  satisfies_constraint_Dp,
  satisfies_constraint_US
};

bool
insn_const_int_ok_for_constraint (HOST_WIDE_INT ival, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_Pj:
      return (
#line 77 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_THUMB2)) && (
#line 78 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
((ival & 0xfffff000) == 0));

    case CONSTRAINT_PJ:
      return (
#line 83 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_THUMB2)) && (
#line 84 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(((-ival) & 0xfffff000) == 0));

    case CONSTRAINT_I:
      return 
#line 107 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (ival)
		   : ival >= 0 && ival <= 255);

    case CONSTRAINT_J:
      return 
#line 114 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_32BIT ? (ival >= -4095 && ival <= 4095)
		   : (ival >= -255 && ival <= -1));

    case CONSTRAINT_K:
      return 
#line 122 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (~ival)
		   : thumb_shiftable_const (ival));

    case CONSTRAINT_L:
      return 
#line 129 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (-ival)
		   : (ival >= -7 && ival <= 7));

    case CONSTRAINT_M:
      return 
#line 138 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_32BIT ? ((ival >= 0 && ival <= 32)
				 || (((ival & (ival - 1)) & 0xFFFFFFFF) == 0))
		   : ival >= 0 && ival <= 1020 && (ival & 3) == 0);

    case CONSTRAINT_N:
      return 
#line 145 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(!TARGET_32BIT && (ival >= 0 && ival <= 31));

    case CONSTRAINT_O:
      return 
#line 151 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -508 && ival <= 508
		   && ((ival & 3) == 0));

    case CONSTRAINT_Pa:
      return 
#line 157 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -510 && ival <= 510
		    && (ival > 255 || ival < -255));

    case CONSTRAINT_Pb:
      return 
#line 163 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -262 && ival <= 262
		    && (ival > 255 || ival < -255));

    case CONSTRAINT_Pc:
      return 
#line 169 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_THUMB1
  		    && ival > 1020 && ival <= 1275);

    case CONSTRAINT_Pd:
      return 
#line 175 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_THUMB && ival >= 0 && ival <= 7);

    case CONSTRAINT_Pe:
      return 
#line 180 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= 256 && ival <= 510);

    case CONSTRAINT_Ps:
      return 
#line 185 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= 255);

    case CONSTRAINT_Pt:
      return 
#line 190 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -7 && ival <= 7);

    case CONSTRAINT_Pu:
      return 
#line 195 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= 1 && ival <= 8);

    case CONSTRAINT_Pv:
      return 
#line 200 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= 0);

    case CONSTRAINT_Pw:
      return 
#line 205 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= -1);

    case CONSTRAINT_Px:
      return 
#line 210 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -7 && ival <= -1);

    case CONSTRAINT_Py:
      return 
#line 215 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= 0 && ival <= 255);

    case CONSTRAINT_Pz:
      return 
#line 220 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && (ival == 0));

    default: break;
    }
  return false;
}

