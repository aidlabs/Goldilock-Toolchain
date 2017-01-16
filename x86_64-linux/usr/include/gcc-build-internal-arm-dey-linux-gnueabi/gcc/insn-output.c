/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
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
#include "rtl.h"
#include "hashtab.h"
#include "hard-reg-set.h"
#include "function.h"
#include "statistics.h"
#include "real.h"
#include "fixed-value.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "regs.h"
#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "diagnostic-core.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"
#include "predict.h"

static const char * const output_4[] = {
  "add%?\t%0, %0, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %2, %1",
  "addw%?\t%0, %1, %2",
  "addw%?\t%0, %1, %2",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "subw%?\t%0, %1, #%n2",
  "subw%?\t%0, %1, #%n2",
  "#",
};

static const char * const output_5[] = {
  "add%.\t%0, %1, %2",
  "sub%.\t%0, %1, #%n2",
  "add%.\t%0, %1, %2",
};

static const char * const output_6[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_8[] = {
  "add%.\t%0, %1, %3",
  "sub%.\t%0, %1, #%n3",
};

static const char * const output_9[] = {
  "add%.\t%0, %1, %2",
  "sub%.\t%0, %1, #%n2",
  "add%.\t%0, %1, %2",
};

static const char * const output_10[] = {
  "add%.\t%0, %1, %2",
  "add%.\t%0, %1, %2",
  "sub%.\t%0, %1, #%n2",
};

static const char * const output_11[] = {
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_12[] = {
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_13[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_14[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_15[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_16[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_21[] = {
  "sbc%?\t%0, %1, %2",
  "rsc%?\t%0, %2, %1",
};

static const char * const output_33[] = {
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %2",
  "sub%?\t%0, %1, %2",
  "rsb%?\t%0, %2, %1",
  "rsb%?\t%0, %2, %1",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "#",
};

static const char * const output_34[] = {
  "sub%.\t%0, %1, %2",
  "sub%.\t%0, %1, %2",
  "rsb%.\t%0, %2, %1",
};

static const char * const output_35[] = {
  "sub%.\t%0, %1, %2",
  "sub%.\t%0, %1, %2",
  "rsb%.\t%0, %2, %1",
};

static const char *
output_71 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1992 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 6: return "vand\t%P0, %P1, %P2";
    case 1: /* fall through */
    case 7: return neon_output_logic_immediate ("vand", &operands[2],
                    DImode, 1, VALID_NEON_QREG_MODE (DImode));
    case 2:
    case 3:
    case 4:
    case 5: /* fall through */
      return "#";
    default: gcc_unreachable ();
    }
}
}

static const char * const output_74[] = {
  "and%?\t%0, %1, %2",
  "and%?\t%0, %1, %2",
  "bic%?\t%0, %1, #%B2",
  "and%?\t%0, %1, %2",
  "#",
};

static const char * const output_75[] = {
  "and%.\t%0, %1, %2",
  "bic%.\t%0, %1, #%B2",
  "and%.\t%0, %1, %2",
};

static const char * const output_76[] = {
  "tst%?\t%0, %1",
  "bic%.\t%2, %0, #%B1",
  "tst%?\t%0, %1",
};

static const char *
output_77 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2218 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  operands[1] = GEN_INT (((1 << INTVAL (operands[1])) - 1)
			 << INTVAL (operands[2]));
  output_asm_insn ("tst%?\t%0, %1", operands);
  return "";
  
}

static const char * const output_85[] = {
  "bic%?\t%Q0, %Q1, %2",
  "#",
};

static const char *
output_92 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2811 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 6: return "vorr\t%P0, %P1, %P2";
    case 1: /* fall through */
    case 7: return neon_output_logic_immediate ("vorr", &operands[2],
		     DImode, 0, VALID_NEON_QREG_MODE (DImode));
    case 2:
    case 3:
    case 4:
    case 5:
      return "#";
    default: gcc_unreachable ();
    }
  }
}

static const char * const output_93[] = {
  "orr%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_95[] = {
  "orr%?\t%0, %1, %2",
  "orr%?\t%0, %1, %2",
  "orn%?\t%0, %1, #%B2",
  "orr%?\t%0, %1, %2",
  "#",
};

static const char *
output_98 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2986 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
{
  switch (which_alternative)
    {
    case 1:
    case 2:
    case 3:
    case 4:  /* fall through */
      return "#";
    case 0: /* fall through */
    case 5: return "veor\t%P0, %P1, %P2";
    default: gcc_unreachable ();
    }
}
}

static const char * const output_99[] = {
  "eor%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_101[] = {
  "eor%?\t%0, %1, %2",
  "eor%?\t%0, %1, %2",
  "eor%?\t%0, %1, %2",
  "#",
};

static const char *
output_112 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3455 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  operands[3] = gen_rtx_fmt_ee (minmax_code (operands[3]), SImode,
				operands[1], operands[2]);
  output_asm_insn ("cmp\t%1, %2", operands);
  if (TARGET_THUMB2)
    output_asm_insn ("ite\t%d3", operands);
  output_asm_insn ("str%d3\t%1, %0", operands);
  output_asm_insn ("str%D3\t%2, %0", operands);
  return "";
  
}

static const char *
output_113 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3484 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    enum rtx_code code = GET_CODE (operands[4]);
    bool need_else;

    if (which_alternative != 0 || operands[3] != const0_rtx
        || (code != PLUS && code != IOR && code != XOR))
      need_else = true;
    else
      need_else = false;

    operands[5] = gen_rtx_fmt_ee (minmax_code (operands[5]), SImode,
				  operands[2], operands[3]);
    output_asm_insn ("cmp\t%2, %3", operands);
    if (TARGET_THUMB2)
      {
	if (need_else)
	  output_asm_insn ("ite\t%d5", operands);
	else
	  output_asm_insn ("it\t%d5", operands);
      }
    output_asm_insn ("%i4%d5\t%0, %1, %2", operands);
    if (need_else)
      output_asm_insn ("%i4%D5\t%0, %1, %3", operands);
    return "";
  }
}

static const char *
output_115 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3579 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_116 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3579 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_117 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3606 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_118 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3606 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_122 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3894 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 0);
}

static const char *
output_123 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3912 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 1);
}

static const char *
output_124 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3926 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 1);
}

static const char * const output_146[] = {
  "vmvn\t%P0, %P1",
  "#",
  "#",
  "vmvn\t%P0, %P1",
};

static const char * const output_156[] = {
  "#",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_157[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_159[] = {
  "#",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_160[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_163[] = {
  "#",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_164[] = {
  "sxth%?\t%0, %1",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_167[] = {
  "#",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_168[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char *
output_170 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5465 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    default:
      return output_move_double (operands, true, NULL);
    }
  
}

static const char * const output_172[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
};

static const char *
output_176 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5859 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				     INTVAL (operands[2]));
  return "add\t%0, %|pc";
  
}

static const char *
output_177 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5875 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "add%?\t%0, %|pc, %1";
  
}

static const char *
output_178 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5891 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "ldr%?\t%0, [%|pc, %1]\t\t@ tls_load_dot_plus_eight";
  
}

static const char * const output_179[] = {
  "cmp%?\t%0, #0",
  "sub%.\t%0, %1, #0",
};

static const char * const output_180[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "movw%?\t%0, %L1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_181[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
};

static const char * const output_182[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "ldr%(b%)\t%0, %1",
  "str%(b%)\t%1, %0",
  "ldr%(b%)\t%0, %1",
  "str%(b%)\t%1, %0",
};

static const char *
output_183 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6514 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:	/* ARM register from memory */
      return "ldr%(h%)\t%0, %1\t%@ __fp16";
    case 1:	/* memory from ARM register */
      return "str%(h%)\t%1, %0\t%@ __fp16";
    case 2:	/* ARM register from ARM register */
      return "mov%?\t%0, %1\t%@ __fp16";
    case 3:	/* ARM register from constant */
      {
	REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

	REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw%?\t%0, %1", ops);
	else
	  output_asm_insn ("mov%?\t%0, %2\n\torr%?\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char * const output_184[] = {
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_185 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6681 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    default:
      return output_move_double (operands, true, NULL);
    }
  
}

static const char * const output_186[] = {
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmn%?\t%0, #%n1",
};

static const char *
output_194 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7079 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
    {
      arm_ccfsm_state += 2;
      return "";
    }
  return "b%d1\t%l0";
  
}

static const char *
output_195 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7105 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
    {
      arm_ccfsm_state += 2;
      return "";
    }
  return "b%D1\t%l0";
  
}

static const char *
output_199 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7444 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    enum arm_cond_code code = maybe_get_arm_condition_code (operands[1]);
    switch (code)
      {
      case ARM_GE:
      case ARM_GT:
      case ARM_EQ:
      case ARM_VS:
        return "vsel%d1.f32\t%0, %3, %4";
      case ARM_LT:
      case ARM_LE:
      case ARM_NE:
      case ARM_VC:
        return "vsel%D1.f32\t%0, %4, %3";
      default:
        gcc_unreachable ();
      }
    return "";
  }
}

static const char *
output_200 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7444 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    enum arm_cond_code code = maybe_get_arm_condition_code (operands[1]);
    switch (code)
      {
      case ARM_GE:
      case ARM_GT:
      case ARM_EQ:
      case ARM_VS:
        return "vsel%d1.f64\t%P0, %P3, %P4";
      case ARM_LT:
      case ARM_LE:
      case ARM_NE:
      case ARM_VC:
        return "vsel%D1.f64\t%P0, %P4, %P3";
      default:
        gcc_unreachable ();
      }
    return "";
  }
}

static const char * const output_201[] = {
  "mov%D3\t%0, %2",
  "mvn%D3\t%0, #%B2",
  "mov%d3\t%0, %1",
  "mvn%d3\t%0, #%B1",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_202[] = {
  "mov%D3\t%0, %2",
  "mov%d3\t%0, %1",
};

static const char *
output_203 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7565 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return "b%?\t%l0";
  }
  
}

static const char *
output_205 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7637 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  return output_call (operands);
  
}

static const char *
output_206 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7656 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  return output_call_mem (operands);
  
}

static const char *
output_208 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7719 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  return output_call (&operands[1]);
  
}

static const char *
output_209 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7736 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  return output_call_mem (&operands[1]);
  
}

static const char *
output_210 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7755 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    return NEED_PLT_RELOC ? "bl%?\t%a0(PLT)" : "bl%?\t%a0";
  }
}

static const char *
output_211 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7772 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    return NEED_PLT_RELOC ? "bl%?\t%a1(PLT)" : "bl%?\t%a1";
  }
}

static const char *
output_212 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7851 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  if (which_alternative == 1)
    return NEED_PLT_RELOC ? "b%?\t%a0(PLT)" : "b%?\t%a0";
  else
    {
      if (arm_arch5 || arm_arch4t)
	return "bx%?\t%0\t%@ indirect register sibling call";
      else
	return "mov%?\t%|pc, %0\t%@ indirect register sibling call";
    }
  
}

static const char *
output_213 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7872 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  if (which_alternative == 1)
   return NEED_PLT_RELOC ? "b%?\t%a1(PLT)" : "b%?\t%a1";
  else
    {
      if (arm_arch5 || arm_arch4t)
	return "bx%?\t%1";
      else
	return "mov%?\t%|pc, %1\t@ indirect sibling call ";
    }
  
}

static const char *
output_214 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7907 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, true, false, false);
  }
}

static const char *
output_215 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7928 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], true, false,
				      false);
  }
}

static const char *
output_216 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7928 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], true, false,
				      true);
  }
}

static const char *
output_217 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7950 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], true, true,
				      false);
  }
}

static const char *
output_218 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7950 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], true, true,
				      true);
  }
}

static const char *
output_219 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7968 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, true, false, true);
  }
}

static const char *
output_222 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8192 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

    if (flag_pic)
      return "cmp\t%0, %1\n\taddls\t%|pc, %|pc, %0, asl #2\n\tb\t%l3";
    return   "cmp\t%0, %1\n\tldrls\t%|pc, [%|pc, %0, asl #2]\n\tb\t%l3";
  
}

static const char *
output_225 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8246 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  if (TARGET_UNIFIED_ASM)
    return "nop";
  if (TARGET_ARM)
    return "mov%?\t%|r0, %|r0\t%@ nop";
  return  "mov\tr8, r8";
  
}

static const char *
output_226 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8263 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  if (TARGET_ARM)
    return ".inst\t0xe7f000f0";
  else
    return ".inst\t0xdeff";
  
}

static const char * const output_243[] = {
  "orr%d1\t%0, %3, #1",
  "#",
};

static const char *
output_245 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8676 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

    if (GET_CODE (operands[3]) == NE)
      {
        if (which_alternative != 1)
	  output_asm_insn ("mov%D4\t%0, %2", operands);
        if (which_alternative != 0)
	  output_asm_insn ("mov%d4\t%0, %1", operands);
        return "";
      }
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    if (which_alternative != 1)
      output_asm_insn ("mov%d4\t%0, %2", operands);
    return "";
  
}

static const char *
output_246 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8705 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

    if (GET_CODE (operands[4]) == LT && operands[3] == const0_rtx)
      return "%i5\t%0, %1, %2, lsr #31";

    output_asm_insn ("cmp\t%2, %3", operands);
    if (GET_CODE (operands[5]) == AND)
      output_asm_insn ("mov%D4\t%0, #0", operands);
    else if (GET_CODE (operands[5]) == MINUS)
      output_asm_insn ("rsb%D4\t%0, %1, #0", operands);
    else if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    return "%i5%d4\t%0, %1, #1";
  
}

static const char *
output_247 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8731 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

    output_asm_insn ("cmp\t%2, %3", operands);
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    return "sub%d4\t%0, %1, #1";
  
}

static const char *
output_248 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8759 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    static const char * const cmp1[NUM_OF_COND_CMP][2] =
    {
      {"cmp%d5\t%0, %1",
       "cmp%d4\t%2, %3"},
      {"cmn%d5\t%0, #%n1",
       "cmp%d4\t%2, %3"},
      {"cmp%d5\t%0, %1",
       "cmn%d4\t%2, #%n3"},
      {"cmn%d5\t%0, #%n1",
       "cmn%d4\t%2, #%n3"}
    };
    static const char * const cmp2[NUM_OF_COND_CMP][2] =
    {
      {"cmp\t%2, %3",
       "cmp\t%0, %1"},
      {"cmp\t%2, %3",
       "cmn\t%0, #%n1"},
      {"cmn\t%2, #%n3",
       "cmp\t%0, %1"},
      {"cmn\t%2, #%n3",
       "cmn\t%0, #%n1"}
    };
    static const char * const ite[2] =
    {
      "it\t%d5",
      "it\t%d4"
    };
    static const int cmp_idx[9] = {CMP_CMP, CMP_CMP, CMP_CMN,
                                   CMP_CMP, CMN_CMP, CMP_CMP,
                                   CMN_CMP, CMP_CMN, CMN_CMN};
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    output_asm_insn (cmp2[cmp_idx[which_alternative]][swap], operands);
    if (TARGET_THUMB2) {
      output_asm_insn (ite[swap], operands);
    }
    output_asm_insn (cmp1[cmp_idx[which_alternative]][swap], operands);
    return "";
  }
}

static const char *
output_249 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8841 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    static const char * const cmp1[NUM_OF_COND_CMP][2] =
    {
      {"cmp\t%0, %1",
       "cmp\t%2, %3"},
      {"cmn\t%0, #%n1",
       "cmp\t%2, %3"},
      {"cmp\t%0, %1",
       "cmn\t%2, #%n3"},
      {"cmn\t%0, #%n1",
       "cmn\t%2, #%n3"}
    };
    static const char * const cmp2[NUM_OF_COND_CMP][2] =
    {
      {"cmp%d4\t%2, %3",
       "cmp%D5\t%0, %1"},
      {"cmp%d4\t%2, %3",
       "cmn%D5\t%0, #%n1"},
      {"cmn%d4\t%2, #%n3",
       "cmp%D5\t%0, %1"},
      {"cmn%d4\t%2, #%n3",
       "cmn%D5\t%0, #%n1"}
    };
    static const char * const ite[2] =
    {
      "it\t%d4",
      "it\t%D5"
    };
    static const int cmp_idx[9] = {CMP_CMP, CMP_CMP, CMP_CMN,
                                   CMP_CMP, CMN_CMP, CMP_CMP,
                                   CMN_CMP, CMP_CMN, CMN_CMN};
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]),
			      reverse_condition (GET_CODE (operands[4])));

    output_asm_insn (cmp1[cmp_idx[which_alternative]][swap], operands);
    if (TARGET_THUMB2) {
      output_asm_insn (ite[swap], operands);
    }
    output_asm_insn (cmp2[cmp_idx[which_alternative]][swap], operands);
    return "";
  }
}

static const char *
output_250 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8923 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    static const char *const cmp1[NUM_OF_COND_CMP][2] =
    {
      {"cmp%d5\t%0, %1",
       "cmp%d4\t%2, %3"},
      {"cmn%d5\t%0, #%n1",
       "cmp%d4\t%2, %3"},
      {"cmp%d5\t%0, %1",
       "cmn%d4\t%2, #%n3"},
      {"cmn%d5\t%0, #%n1",
       "cmn%d4\t%2, #%n3"}
    };
    static const char *const cmp2[NUM_OF_COND_CMP][2] =
    {
      {"cmp\t%2, %3",
       "cmp\t%0, %1"},
      {"cmp\t%2, %3",
       "cmn\t%0, #%n1"},
      {"cmn\t%2, #%n3",
       "cmp\t%0, %1"},
      {"cmn\t%2, #%n3",
       "cmn\t%0, #%n1"}
    };
    static const char *const ite[2] =
    {
      "it\t%d5",
      "it\t%d4"
    };
    static const int cmp_idx[9] = {CMP_CMP, CMP_CMP, CMP_CMN,
                                   CMP_CMP, CMN_CMP, CMP_CMP,
                                   CMN_CMP, CMP_CMN, CMN_CMN};
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    output_asm_insn (cmp2[cmp_idx[which_alternative]][swap], operands);
    if (TARGET_THUMB2) {
      output_asm_insn (ite[swap], operands);
    }
    output_asm_insn (cmp1[cmp_idx[which_alternative]][swap], operands);
    return "";
  }
}

static const char *
output_251 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9005 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    static const char *const cmp1[NUM_OF_COND_CMP][2] =
    {
      {"cmp\t%0, %1",
       "cmp\t%2, %3"},
      {"cmn\t%0, #%n1",
       "cmp\t%2, %3"},
      {"cmp\t%0, %1",
       "cmn\t%2, #%n3"},
      {"cmn\t%0, #%n1",
       "cmn\t%2, #%n3"}
    };
    static const char *const cmp2[NUM_OF_COND_CMP][2] =
    {
      {"cmp%D4\t%2, %3",
       "cmp%D5\t%0, %1"},
      {"cmp%D4\t%2, %3",
       "cmn%D5\t%0, #%n1"},
      {"cmn%D4\t%2, #%n3",
       "cmp%D5\t%0, %1"},
      {"cmn%D4\t%2, #%n3",
       "cmn%D5\t%0, #%n1"}
    };
    static const char *const ite[2] =
    {
      "it\t%D4",
      "it\t%D5"
    };
    static const int cmp_idx[9] = {CMP_CMP, CMP_CMP, CMP_CMN,
                                   CMP_CMP, CMN_CMP, CMP_CMP,
                                   CMN_CMP, CMP_CMN, CMN_CMN};
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    output_asm_insn (cmp1[cmp_idx[which_alternative]][swap], operands);
    if (TARGET_THUMB2) {
      output_asm_insn (ite[swap], operands);
    }
    output_asm_insn (cmp2[cmp_idx[which_alternative]][swap], operands);
    return "";
  }
  
}

static const char *
output_259 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9393 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  if (GET_CODE (operands[5]) == LT
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && REG_P (operands[1]))
	{
	  if (operands[2] == const0_rtx)
	    return "and\t%0, %1, %3, asr #31";
	  return "ands\t%0, %1, %3, asr #32\n\tmovcc\t%0, %2";
	}
      else if (which_alternative != 0 && REG_P (operands[2]))
	{
	  if (operands[1] == const0_rtx)
	    return "bic\t%0, %2, %3, asr #31";
	  return "bics\t%0, %2, %3, asr #32\n\tmovcs\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }

  if (GET_CODE (operands[5]) == GE
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && REG_P (operands[1]))
	{
	  if (operands[2] == const0_rtx)
	    return "bic\t%0, %1, %3, asr #31";
	  return "bics\t%0, %1, %3, asr #32\n\tmovcs\t%0, %2";
	}
      else if (which_alternative != 0 && REG_P (operands[2]))
	{
	  if (operands[1] == const0_rtx)
	    return "and\t%0, %2, %3, asr #31";
	  return "ands\t%0, %2, %3, asr #32\n\tmovcc\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }
  if (CONST_INT_P (operands[4])
      && !const_ok_for_arm (INTVAL (operands[4])))
    output_asm_insn ("cmn\t%3, #%n4", operands);
  else
    output_asm_insn ("cmp\t%3, %4", operands);
  if (which_alternative != 0)
    output_asm_insn ("mov%d5\t%0, %1", operands);
  if (which_alternative != 1)
    output_asm_insn ("mov%D5\t%0, %2", operands);
  return "";
  
}

static const char * const output_261[] = {
  "add%d4\t%0, %2, %3",
  "sub%d4\t%0, %2, #%n3",
  "add%d4\t%0, %2, %3\n\tmov%D4\t%0, %1",
  "sub%d4\t%0, %2, #%n3\n\tmov%D4\t%0, %1",
};

static const char * const output_263[] = {
  "add%D4\t%0, %2, %3",
  "sub%D4\t%0, %2, #%n3",
  "add%D4\t%0, %2, %3\n\tmov%d4\t%0, %1",
  "sub%D4\t%0, %2, #%n3\n\tmov%d4\t%0, %1",
};

static const char *
output_266 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9576 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  /* If we have an operation where (op x 0) is the identity operation and
     the conditional operator is LT or GE and we are comparing against zero and
     everything is in registers then we can do this in two instructions.  */
  if (operands[3] == const0_rtx
      && GET_CODE (operands[7]) != AND
      && REG_P (operands[5])
      && REG_P (operands[1])
      && REGNO (operands[1]) == REGNO (operands[4])
      && REGNO (operands[4]) != REGNO (operands[0]))
    {
      if (GET_CODE (operands[6]) == LT)
	return "and\t%0, %5, %2, asr #31\n\t%I7\t%0, %4, %0";
      else if (GET_CODE (operands[6]) == GE)
	return "bic\t%0, %5, %2, asr #31\n\t%I7\t%0, %4, %0";
    }
  if (CONST_INT_P (operands[3])
      && !const_ok_for_arm (INTVAL (operands[3])))
    output_asm_insn ("cmn\t%2, #%n3", operands);
  else
    output_asm_insn ("cmp\t%2, %3", operands);
  output_asm_insn ("%I7%d6\t%0, %4, %5", operands);
  if (which_alternative != 0)
    return "mov%D6\t%0, %1";
  return "";
  
}

static const char * const output_267[] = {
  "%I5%d4\t%0, %2, %3",
  "%I5%d4\t%0, %2, %3\n\tmov%D4\t%0, %1",
};

static const char *
output_268 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9635 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  /* If we have an operation where (op x 0) is the identity operation and
     the conditional operator is LT or GE and we are comparing against zero and
     everything is in registers then we can do this in two instructions */
  if (operands[5] == const0_rtx
      && GET_CODE (operands[7]) != AND
      && REG_P (operands[3])
      && REG_P (operands[1])
      && REGNO (operands[1]) == REGNO (operands[2])
      && REGNO (operands[2]) != REGNO (operands[0]))
    {
      if (GET_CODE (operands[6]) == GE)
	return "and\t%0, %3, %4, asr #31\n\t%I7\t%0, %2, %0";
      else if (GET_CODE (operands[6]) == LT)
	return "bic\t%0, %3, %4, asr #31\n\t%I7\t%0, %2, %0";
    }

  if (CONST_INT_P (operands[5])
      && !const_ok_for_arm (INTVAL (operands[5])))
    output_asm_insn ("cmn\t%4, #%n5", operands);
  else
    output_asm_insn ("cmp\t%4, %5", operands);

  if (which_alternative != 0)
    output_asm_insn ("mov%d6\t%0, %1", operands);
  return "%I7%D6\t%0, %2, %3";
  
}

static const char * const output_269[] = {
  "%I5%D4\t%0, %2, %3",
  "%I5%D4\t%0, %2, %3\n\tmov%d4\t%0, %1",
};

static const char * const output_271[] = {
  "mvn%D4\t%0, %2",
  "mov%d4\t%0, %1\n\tmvn%D4\t%0, %2",
  "mvn%d4\t%0, #%B1\n\tmvn%D4\t%0, %2",
};

static const char * const output_273[] = {
  "mvn%d4\t%0, %2",
  "mov%D4\t%0, %1\n\tmvn%d4\t%0, %2",
  "mvn%D4\t%0, #%B1\n\tmvn%d4\t%0, %2",
};

static const char * const output_275[] = {
  "mov%d5\t%0, %2%S4",
  "mov%D5\t%0, %1\n\tmov%d5\t%0, %2%S4",
  "mvn%D5\t%0, #%B1\n\tmov%d5\t%0, %2%S4",
};

static const char * const output_277[] = {
  "mov%D5\t%0, %2%S4",
  "mov%d5\t%0, %1\n\tmov%D5\t%0, %2%S4",
  "mvn%d5\t%0, #%B1\n\tmov%D5\t%0, %2%S4",
};

static const char * const output_285[] = {
  "rsb%d4\t%0, %2, #0",
  "mov%D4\t%0, %1\n\trsb%d4\t%0, %2, #0",
  "mvn%D4\t%0, #%B1\n\trsb%d4\t%0, %2, #0",
};

static const char * const output_287[] = {
  "rsb%D4\t%0, %2, #0",
  "mov%d4\t%0, %1\n\trsb%D4\t%0, %2, #0",
  "mvn%d4\t%0, #%B1\n\trsb%D4\t%0, %2, #0",
};

static const char *
output_288 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10014 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    rtx ldm[3];
    rtx arith[4];
    rtx base_reg;
    HOST_WIDE_INT val1 = 0, val2 = 0;

    if (REGNO (operands[0]) > REGNO (operands[4]))
      {
	ldm[1] = operands[4];
	ldm[2] = operands[0];
      }
    else
      {
	ldm[1] = operands[0];
	ldm[2] = operands[4];
      }

    base_reg = XEXP (operands[2], 0);

    if (!REG_P (base_reg))
      {
	val1 = INTVAL (XEXP (base_reg, 1));
	base_reg = XEXP (base_reg, 0);
      }

    if (!REG_P (XEXP (operands[3], 0)))
      val2 = INTVAL (XEXP (XEXP (operands[3], 0), 1));

    arith[0] = operands[0];
    arith[3] = operands[1];

    if (val1 < val2)
      {
	arith[1] = ldm[1];
	arith[2] = ldm[2];
      }
    else
      {
	arith[1] = ldm[2];
	arith[2] = ldm[1];
      }

    ldm[0] = base_reg;
    if (val1 !=0 && val2 != 0)
      {
	rtx ops[3];

	if (val1 == 4 || val2 == 4)
	  /* Other val must be 8, since we know they are adjacent and neither
	     is zero.  */
	  output_asm_insn ("ldm%(ib%)\t%0, {%1, %2}", ldm);
	else if (const_ok_for_arm (val1) || const_ok_for_arm (-val1))
	  {
	    ldm[0] = ops[0] = operands[4];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_add_immediate (ops);
	    if (val1 < val2)
	      output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	    else
	      output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	  }
	else
	  {
	    /* Offset is out of range for a single add, so use two ldr.  */
	    ops[0] = ldm[1];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	    ops[0] = ldm[2];
	    ops[2] = GEN_INT (val2);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	  }
      }
    else if (val1 != 0)
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
      }
    else
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
      }
    output_asm_insn ("%I3%?\t%0, %1, %2", arith);
    return "";
  }
}

static const char * const output_289[] = {
  "mvn%D4\t%0, %2",
  "mov%d4\t%0, %1\n\tmvn%D4\t%0, %2",
};

static const char *
output_290 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10381 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

    operands[2] = GEN_INT (1 << INTVAL (operands[2]));
    output_asm_insn ("ands\t%0, %1, %2", operands);
    return "mvnne\t%0, #0";
  
}

static const char *
output_291 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10399 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

    operands[2] = GEN_INT (1 << INTVAL (operands[2]));
    output_asm_insn ("tst\t%1, %2", operands);
    output_asm_insn ("mvneq\t%0, #0", operands);
    return "movne\t%0, #0";
  
}

static const char *
output_292 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10422 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    int num_saves = XVECLEN (operands[2], 0);
     
    /* For the StrongARM at least it is faster to
       use STR to store only a single register.
       In Thumb mode always use push, and the assembler will pick
       something appropriate.  */
    if (num_saves == 1 && TARGET_ARM)
      output_asm_insn ("str%?\t%1, [%m0, #-4]!", operands);
    else
      {
	int i;
	char pattern[100];

	if (TARGET_ARM)
	    strcpy (pattern, "stm%(fd%)\t%m0!, {%1");
	else if (TARGET_THUMB2)
	    strcpy (pattern, "push%?\t{%1");
	else
	    strcpy (pattern, "push\t{%1");

	for (i = 1; i < num_saves; i++)
	  {
	    strcat (pattern, ", %|");
	    strcat (pattern,
		    reg_names[REGNO (XEXP (XVECEXP (operands[2], 0, i), 0))]);
	  }

	strcat (pattern, "}");
	output_asm_insn (pattern, operands);
      }

    return "";
  }
}

static const char *
output_294 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10484 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/false,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/true);
    return "";
  }
  
}

static const char *
output_295 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10513 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/true,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/true);
    return "";
  }
  
}

static const char *
output_296 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10533 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/true,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/false);
    return "";
  }
  
}

static const char *
output_298 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10565 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    int num_regs = XVECLEN (operands[0], 0);
    char pattern[100];
    rtx op_list[2];
    strcpy (pattern, "vldm\t");
    strcat (pattern, reg_names[REGNO (SET_DEST (XVECEXP (operands[0], 0, 0)))]);
    strcat (pattern, "!, {");
    op_list[0] = XEXP (XVECEXP (operands[0], 0, 1), 0);
    strcat (pattern, "%P0");
    if ((num_regs - 1) > 1)
      {
        strcat (pattern, "-%P1");
        op_list [1] = XEXP (XVECEXP (operands[0], 0, num_regs - 1), 0);
      }

    strcat (pattern, "}");
    output_asm_insn (pattern, op_list);
    return "";
  }
  
}

static const char *
output_299 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10596 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  assemble_align (32);
  return "";
  
}

static const char *
output_300 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10606 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  assemble_align (64);
  return "";
  
}

static const char *
output_301 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10616 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  making_const_table = FALSE;
  return "";
  
}

static const char *
output_302 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10626 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  making_const_table = TRUE;
  assemble_integer (operands[0], 1, BITS_PER_WORD, 1);
  assemble_zeros (3);
  return "";
  
}

static const char *
output_303 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10639 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    rtx x = operands[0];
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (x)))
      {
      case MODE_FLOAT:
	arm_emit_fp16_const (x);
	break;
      default:
	assemble_integer (operands[0], 2, BITS_PER_WORD, 1);
	assemble_zeros (2);
	break;
      }
    return "";
  }
}

static const char *
output_304 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10662 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    rtx x = operands[0];
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (x)))
      {
      case MODE_FLOAT:
	{
	  REAL_VALUE_TYPE r;
	  REAL_VALUE_FROM_CONST_DOUBLE (r, x);
	  assemble_real (r, GET_MODE (x), BITS_PER_WORD);
	  break;
	}
      default:
	/* XXX: Sometimes gcc does something really dumb and ends up with
	   a HIGH in a constant pool entry, usually because it's trying to
	   load into a VFP register.  We know this will always be used in
	   combination with a LO_SUM which ignores the high bits, so just
	   strip off the HIGH.  */
	if (GET_CODE (x) == HIGH)
	  x = XEXP (x, 0);
        assemble_integer (x, 4, BITS_PER_WORD, 1);
	mark_symbol_refs_as_used (x);
        break;
      }
    return "";
  }
}

static const char *
output_305 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10696 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (operands[0])))
      {
       case MODE_FLOAT:
        {
          REAL_VALUE_TYPE r;
          REAL_VALUE_FROM_CONST_DOUBLE (r, operands[0]);
          assemble_real (r, GET_MODE (operands[0]), BITS_PER_WORD);
          break;
        }
      default:
        assemble_integer (operands[0], 8, BITS_PER_WORD, 1);
        break;
      }
    return "";
  }
}

static const char *
output_306 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10721 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (operands[0])))
      {
       case MODE_FLOAT:
        {
          REAL_VALUE_TYPE r;
          REAL_VALUE_FROM_CONST_DOUBLE (r, operands[0]);
          assemble_real (r, GET_MODE (operands[0]), BITS_PER_WORD);
          break;
        }
      default:
        assemble_integer (operands[0], 16, BITS_PER_WORD, 1);
        break;
      }
    return "";
  }
}

static const char *
output_314 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10874 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
{
    targetm.asm_out.internal_label (asm_out_file, "LPIC",
				    INTVAL (operands[1]));
    return "bl\t%c0(tlscall)";
  }
}

static const char * const output_316[] = {
  "rev\t%0, %1",
  "rev%?\t%0, %1",
  "rev%?\t%0, %1",
};

static const char * const output_317[] = {
  "revsh\t%0, %1",
  "revsh%?\t%0, %1",
  "revsh%?\t%0, %1",
};

static const char * const output_318[] = {
  "rev16\t%0, %1",
  "rev16%?\t%0, %1",
  "rev16%?\t%0, %1",
};

static const char *
output_390 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11209 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/false,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/false);
    return "";
  }
  
}

static const char * const output_394[] = {
  "wor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_395[] = {
  "wxor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_396[] = {
  "wand%?\t%0, %1, %2",
  "#",
  "#",
};

static const char *
output_398 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 115 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    case 3: case 4:
      return output_move_double (operands, true, NULL);
    case 5:
      return "wmov%?\t%0,%1";
    case 6:
      return "tmcrr%?\t%0,%Q1,%R1";
    case 7:
      return "tmrrc%?\t%Q0,%R0,%1";
    case 8:
      return "wldrd%?\t%0,%1";
    case 9:
      return "wstrd%?\t%1,%0";
    case 10:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 11:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 12:
      if (TARGET_VFP_SINGLE)
	return "fcpys%?\t%0, %1\t%@ int\n\tfcpys%?\t%p0, %p1\t%@ int";
      else
	return "fcpyd%?\t%P0, %P1\t%@ int";
    case 13: case 14:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_399 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 170 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
     {
     case 0: return "mov\t%0, %1";
     case 1: return "mov\t%0, %1";
     case 2: return "mvn\t%0, #%B1";
     case 3: return "movw\t%0, %1";
     case 4: return "ldr\t%0, %1";
     case 5: return "str\t%1, %0";
     case 6: return "tmcr\t%0, %1";
     case 7: return "tmrc\t%0, %1";
     case 8: return arm_output_load_gr (operands);
     case 9: return "wstrw\t%1, %0";
     case 10:return "fmsr\t%0, %1";
     case 11:return "fmrs\t%0, %1";
     case 12:return "fcpys\t%0, %1\t%@ int";
     case 13: case 14:
       return output_move_vfp (operands);
     default:
       gcc_unreachable ();
     }
}

static const char *
output_400 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 220 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "mov%?\t%0, %1";
   case 1: return "mvn%?\t%0, #%B1";
   case 2: return "ldr%?\t%0, %1";
   case 3: return "str%?\t%1, %0";
   case 4: return "tmcr%?\t%0, %1";
   default: return "tmrc%?\t%0, %1";
  }
}

static const char *
output_401 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_402 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_403 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_446 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 686 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_447 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 703 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_448 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 720 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_500 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1287 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrorhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorh", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_501 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1287 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrorwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_502 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1287 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrordg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrord", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_503 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1308 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrahg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrah", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_504 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1308 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrawg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsraw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_505 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1308 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsradg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrad", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_506 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1329 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrlhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_507 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1329 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrlwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_508 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1329 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrldg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_509 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsllhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_510 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsllwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_511 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wslldg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wslld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_512 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1371 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrorh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorh", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_513 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1371 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrorw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_514 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1371 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrord%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrord", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_515 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1392 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrah%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrah", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_516 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1392 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsraw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsraw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_517 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1392 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrad%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrad", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_518 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1413 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrlh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_519 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1413 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrlw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_520 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1413 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrld%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_521 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1434 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsllh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_522 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1434 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsllw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_523 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1434 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wslld%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wslld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_614 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 30 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
      return "ldr%?\t%0, %1";
    case 5:
      return "str%?\t%1, %0";
    case 6:
      return "vmov%?\t%0, %1\t%@ int";
    case 7:
      return "vmov%?\t%0, %1\t%@ int";
    case 8:
      return "vmov%?.f32\t%0, %1\t%@ int";
    case 9: case 10:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_615 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 72 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "mov%?\t%0, %1";
    case 3:
      return "mvn%?\t%0, #%B1";
    case 4:
      return "movw%?\t%0, %1";
    case 5:
    case 6:
      return "ldr%?\t%0, %1";
    case 7:
    case 8:
      return "str%?\t%1, %0";
    case 9:
      return "vmov%?\t%0, %1\t%@ int";
    case 10:
      return "vmov%?\t%0, %1\t%@ int";
    case 11:
      return "vmov%?.f32\t%0, %1\t%@ int";
    case 12: case 13:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_616 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 120 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: 
    case 1:
    case 2:
    case 3:
      return "#";
    case 4:
    case 5:
    case 6:
      return output_move_double (operands, true, NULL);
    case 7:
      return "vmov%?\t%P0, %Q1, %R1\t%@ int";
    case 8:
      return "vmov%?\t%Q0, %R0, %P1\t%@ int";
    case 9:
      if (TARGET_VFP_SINGLE)
	return "vmov%?.f32\t%0, %1\t%@ int\n\tvmov%?.f32\t%p0, %p1\t%@ int";
      else
	return "vmov%?.f64\t%P0, %P1\t%@ int";
    case 10: case 11:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_617 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 171 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: 
    case 1:
    case 2:
    case 3:
      return "#";
    case 4:
    case 5:
    case 6:
      return output_move_double (operands, true, NULL);
    case 7:
      return "vmov%?\t%P0, %Q1, %R1\t%@ int";
    case 8:
      return "vmov%?\t%Q0, %R0, %P1\t%@ int";
    case 9:
      return "vmov%?.f64\t%P0, %P1\t%@ int";
    case 10: case 11:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_618 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 220 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:     /* S register from memory */
      return "vld1.16\t{%z0}, %A1";
    case 1:     /* memory from S register */
      return "vst1.16\t{%z1}, %A0";
    case 2:     /* ARM register from memory */
      return "ldrh\t%0, %1\t%@ __fp16";
    case 3:     /* memory from ARM register */
      return "strh\t%1, %0\t%@ __fp16";
    case 4:	/* S register from S register */
      return "vmov.f32\t%0, %1";
    case 5:	/* ARM register from ARM register */
      return "mov\t%0, %1\t%@ __fp16";
    case 6:	/* S register from ARM register */
      return "vmov\t%0, %1";
    case 7:	/* ARM register from S register */
      return "vmov\t%0, %1";
    case 8:	/* ARM register from constant */
      {
        REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

        REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw\t%0, %1", ops);
	else
	  output_asm_insn ("mov\t%0, %2\n\torr\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_619 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 275 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:     /* ARM register from memory */
      return "ldrh\t%0, %1\t%@ __fp16";
    case 1:     /* memory from ARM register */
      return "strh\t%1, %0\t%@ __fp16";
    case 2:	/* S register from S register */
      return "vmov.f32\t%0, %1";
    case 3:	/* ARM register from ARM register */
      return "mov\t%0, %1\t%@ __fp16";
    case 4:	/* S register from ARM register */
      return "vmov\t%0, %1";
    case 5:	/* ARM register from S register */
      return "vmov\t%0, %1";
    case 6:	/* ARM register from constant */
      {
        REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

        REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw\t%0, %1", ops);
	else
	  output_asm_insn ("mov\t%0, %2\n\torr\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_620 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 329 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "vmov%?\t%0, %1";
    case 1:
      return "vmov%?\t%0, %1";
    case 2:
      return "vmov%?.f32\t%0, %1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "vmov%?.f32\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_621 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 365 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "vmov%?\t%0, %1";
    case 1:
      return "vmov%?\t%0, %1";
    case 2:
      return "vmov%?.f32\t%0, %1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "vmov%?.f32\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_622 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 404 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "vmov%?\t%P0, %Q1, %R1";
      case 1:
	return "vmov%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
        return "vmov%?.f64\t%P0, %1";
      case 3: case 4:
	return output_move_vfp (operands);
      case 5: case 6:
	return output_move_double (operands, true, NULL);
      case 7:
	if (TARGET_VFP_SINGLE)
	  return "vmov%?.f32\t%0, %1\n\tvmov%?.f32\t%p0, %p1";
	else
	  return "vmov%?.f64\t%P0, %P1";
      case 8:
        return "#";
      default:
	gcc_unreachable ();
      }
    }
  
}

static const char *
output_623 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 451 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "vmov%?\t%P0, %Q1, %R1";
      case 1:
	return "vmov%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
	return "vmov%?.f64\t%P0, %1";
      case 3: case 4:
	return output_move_vfp (operands);
      case 5: case 6: case 8:
	return output_move_double (operands, true, NULL);
      case 7:
	if (TARGET_VFP_SINGLE)
	  return "vmov%?.f32\t%0, %1\n\tvmov%?.f32\t%p0, %p1";
	else
	  return "vmov%?.f64\t%P0, %P1";
      default:
	abort ();
      }
    }
  
}

static const char * const output_624[] = {
  "vmov%D3.f32\t%0, %2",
  "vmov%d3.f32\t%0, %1",
  "vmov%D3.f32\t%0, %2\n\tvmov%d3.f32\t%0, %1",
  "vmov%D3\t%0, %2",
  "vmov%d3\t%0, %1",
  "vmov%D3\t%0, %2\n\tvmov%d3\t%0, %1",
  "vmov%D3\t%0, %2",
  "vmov%d3\t%0, %1",
  "vmov%D3\t%0, %2\n\tvmov%d3\t%0, %1",
};

static const char * const output_625[] = {
  "it\t%D3\n\tvmov%D3.f32\t%0, %2",
  "it\t%d3\n\tvmov%d3.f32\t%0, %1",
  "ite\t%D3\n\tvmov%D3.f32\t%0, %2\n\tvmov%d3.f32\t%0, %1",
  "it\t%D3\n\tvmov%D3\t%0, %2",
  "it\t%d3\n\tvmov%d3\t%0, %1",
  "ite\t%D3\n\tvmov%D3\t%0, %2\n\tvmov%d3\t%0, %1",
  "it\t%D3\n\tvmov%D3\t%0, %2",
  "it\t%d3\n\tvmov%d3\t%0, %1",
  "ite\t%D3\n\tvmov%D3\t%0, %2\n\tvmov%d3\t%0, %1",
};

static const char * const output_626[] = {
  "vmov%D3.f64\t%P0, %P2",
  "vmov%d3.f64\t%P0, %P1",
  "vmov%D3.f64\t%P0, %P2\n\tvmov%d3.f64\t%P0, %P1",
  "vmov%D3\t%P0, %Q2, %R2",
  "vmov%d3\t%P0, %Q1, %R1",
  "vmov%D3\t%P0, %Q2, %R2\n\tvmov%d3\t%P0, %Q1, %R1",
  "vmov%D3\t%Q0, %R0, %P2",
  "vmov%d3\t%Q0, %R0, %P1",
  "vmov%D3\t%Q0, %R0, %P2\n\tvmov%d3\t%Q0, %R0, %P1",
};

static const char * const output_627[] = {
  "it\t%D3\n\tvmov%D3.f64\t%P0, %P2",
  "it\t%d3\n\tvmov%d3.f64\t%P0, %P1",
  "ite\t%D3\n\tvmov%D3.f64\t%P0, %P2\n\tvmov%d3.f64\t%P0, %P1",
  "it\t%D3\n\tvmov%D3\t%P0, %Q2, %R2",
  "it\t%d3\n\tvmov%d3\t%P0, %Q1, %R1",
  "ite\t%D3\n\tvmov%D3\t%P0, %Q2, %R2\n\tvmov%d3\t%P0, %Q1, %R1",
  "it\t%D3\n\tvmov%D3\t%Q0, %R0, %P2",
  "it\t%d3\n\tvmov%d3\t%Q0, %R0, %P1",
  "ite\t%D3\n\tvmov%D3\t%Q0, %R0, %P2\n\tvmov%d3\t%Q0, %R0, %P1",
};

static const char * const output_630[] = {
  "vneg%?.f32\t%0, %1",
  "eor%?\t%0, %1, #-2147483648",
};

static const char * const output_631[] = {
  "vneg%?.f64\t%P0, %P1",
  "#",
  "#",
};

static const char * const output_677[] = {
  "vcmp%?.f32\t%0, %1",
  "vcmp%?.f32\t%0, #0",
};

static const char * const output_678[] = {
  "vcmpe%?.f32\t%0, %1",
  "vcmpe%?.f32\t%0, #0",
};

static const char * const output_679[] = {
  "vcmp%?.f64\t%P0, %P1",
  "vcmp%?.f64\t%P0, #0",
};

static const char * const output_680[] = {
  "vcmpe%?.f64\t%P0, %P1",
  "vcmpe%?.f64\t%P0, #0",
};

static const char * const output_683[] = {
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
  "vmov%?.f64\t%P0, %1, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
};

static const char * const output_684[] = {
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
  "vmov%?.f64\t%P0, %1, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
};

static const char *
output_686 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1288 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"
 return vfp_output_vstmd (operands);
}

static const char *
output_718 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 63 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

   static const char * const asms[] =
   {
     "adds\t%0, %0, %2",
     "subs\t%0, %0, #%n2",
     "adds\t%0, %1, %2",
     "add\t%0, %0, %2",
     "add\t%0, %0, %2",
     "add\t%0, %1, %2",
     "add\t%0, %1, %2",
     "#",
     "#",
     "#"
   };
   if ((which_alternative == 2 || which_alternative == 6)
       && CONST_INT_P (operands[2])
       && INTVAL (operands[2]) < 0)
     return (which_alternative == 2) ? "subs\t%0, %1, #%n2" : "sub\t%0, %1, #%n2";
   return asms[which_alternative];
  
}

static const char * const output_721[] = {
  "movs\t%0, %1\n\tmuls\t%0, %2",
  "mov\t%0, %1\n\tmuls\t%0, %2",
  "muls\t%0, %2",
};

static const char * const output_722[] = {
  "muls\t%0, %2",
  "muls\t%0, %1",
  "muls\t%0, %1",
};

static const char *
output_736 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 353 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"
{
  rtx mem;

  if (which_alternative == 0 && arm_arch6)
    return "uxth\t%0, %1";
  if (which_alternative == 0)
    return "#";

  mem = XEXP (operands[1], 0);

  if (GET_CODE (mem) == CONST)
    mem = XEXP (mem, 0);

  if (GET_CODE (mem) == PLUS)
    {
      rtx a = XEXP (mem, 0);

      /* This can happen due to bugs in reload.  */
      if (REG_P (a) && REGNO (a) == SP_REGNUM)
        {
          rtx ops[2];
          ops[0] = operands[0];
          ops[1] = a;

          output_asm_insn ("mov\t%0, %1", ops);

          XEXP (mem, 0) = operands[0];
       }
    }

  return "ldrh\t%0, %1";
}
}

static const char * const output_737[] = {
  "#",
  "ldrb\t%0, %1",
};

static const char * const output_738[] = {
  "uxtb\t%0, %1",
  "ldrb\t%0, %1",
};

static const char *
output_739 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

  {
    rtx ops[4];
    rtx mem;

    if (which_alternative == 0 && !arm_arch6)
      return "#";
    if (which_alternative == 0)
      return "sxth\t%0, %1";

    mem = XEXP (operands[1], 0);

    /* This code used to try to use 'V', and fix the address only if it was
       offsettable, but this fails for e.g. REG+48 because 48 is outside the
       range of QImode offsets, and offsettable_address_p does a QImode
       address check.  */

    if (GET_CODE (mem) == CONST)
      mem = XEXP (mem, 0);

    if (GET_CODE (mem) == LABEL_REF)
      return "ldr\t%0, %1";

    if (GET_CODE (mem) == PLUS)
      {
        rtx a = XEXP (mem, 0);
        rtx b = XEXP (mem, 1);

        if (GET_CODE (a) == LABEL_REF
	    && CONST_INT_P (b))
          return "ldr\t%0, %1";

        if (REG_P (b))
          return "ldrsh\t%0, %1";

        ops[1] = a;
        ops[2] = b;
      }
    else
      {
        ops[1] = mem;
        ops[2] = const0_rtx;
      }

    gcc_assert (REG_P (ops[1]));

    ops[0] = operands[0];
    if (reg_mentioned_p (operands[2], ops[1]))
      ops[3] = ops[0];
    else
      ops[3] = operands[2];
    output_asm_insn ("movs\t%3, %2\n\tldrsh\t%0, [%1, %3]", ops);
    return "";
  }
}

static const char *
output_740 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 564 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"
{
  rtx addr;

  if (which_alternative == 0 && arm_arch6)
    return "sxtb\t%0, %1";
  if (which_alternative == 0)
    return "#";

  addr = XEXP (operands[1], 0);
  if (GET_CODE (addr) == PLUS
      && REG_P (XEXP (addr, 0)) && REG_P (XEXP (addr, 1)))
    return "ldrsb\t%0, %1";

  return "#";
}
}

static const char *
output_741 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 598 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

  {
  switch (which_alternative)
    {
    default:
    case 0:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "add\t%0,  %1,  #0\n\tadd\t%H0, %H1, #0";
      return   "add\t%H0, %H1, #0\n\tadd\t%0,  %1,  #0";
    case 1:
      return "movs\t%Q0, %1\n\tmovs\t%R0, #0";
    case 2:
      operands[1] = GEN_INT (- INTVAL (operands[1]));
      return "movs\t%Q0, %1\n\trsbs\t%Q0, %Q0, #0\n\tasrs\t%R0, %Q0, #31";
    case 3:
      return "ldmia\t%1, {%0, %H0}";
    case 4:
      return "stmia\t%0, {%1, %H1}";
    case 5:
      return thumb_load_double_from_address (operands);
    case 6:
      operands[2] = gen_rtx_MEM (SImode,
			     plus_constant (Pmode, XEXP (operands[0], 0), 4));
      output_asm_insn ("str\t%1, %0\n\tstr\t%H1, %2", operands);
      return "";
    case 7:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "mov\t%0, %1\n\tmov\t%H0, %H1";
      return "mov\t%H0, %H1\n\tmov\t%0, %1";
    }
  }
}

static const char * const output_742[] = {
  "movs	%0, %1",
  "movs	%0, %1",
  "#",
  "#",
  "ldmia\t%1, {%0}",
  "stmia\t%0, {%1}",
  "ldr\t%0, %1",
  "str\t%1, %0",
  "mov\t%0, %1",
};

static const char *
output_743 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 734 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

  switch (which_alternative)
    {
    case 0: return "adds	%0, %1, #0";
    case 2: return "strh	%1, %0";
    case 3: return "mov	%0, %1";
    case 4: return "mov	%0, %1";
    case 5: return "movs	%0, %1";
    default: gcc_unreachable ();
    case 1:
      /* The stack pointer can end up being taken as an index register.
          Catch this case here and deal with it.  */
      if (GET_CODE (XEXP (operands[1], 0)) == PLUS
	  && REG_P (XEXP (XEXP (operands[1], 0), 0))
	  && REGNO    (XEXP (XEXP (operands[1], 0), 0)) == SP_REGNUM)
        {
	  rtx ops[2];
          ops[0] = operands[0];
          ops[1] = XEXP (XEXP (operands[1], 0), 0);

          output_asm_insn ("mov	%0, %1", ops);

          XEXP (XEXP (operands[1], 0), 0) = operands[0];

	}
      return "ldrh	%0, %1";
    }
}

static const char * const output_744[] = {
  "adds\t%0, %1, #0",
  "ldrb\t%0, %1",
  "strb\t%1, %0",
  "mov\t%0, %1",
  "mov\t%0, %1",
  "movs\t%0, %1",
};

static const char *
output_745 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 806 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

  switch (which_alternative)
    {
    case 0:
      return "movs\t%0, %1";
    case 1:
      {
	rtx addr;
	gcc_assert (MEM_P (operands[1]));
	addr = XEXP (operands[1], 0);
	if (GET_CODE (addr) == LABEL_REF
	    || (GET_CODE (addr) == CONST
		&& GET_CODE (XEXP (addr, 0)) == PLUS
		&& GET_CODE (XEXP (XEXP (addr, 0), 0)) == LABEL_REF
		&& CONST_INT_P (XEXP (XEXP (addr, 0), 1))))
	  {
	    /* Constant pool entry.  */
	    return "ldr\t%0, %1";
	  }
	return "ldrh\t%0, %1";
      }
    case 2: return "strh\t%1, %0";
    default: return "mov\t%0, %1";
    }
  
}

static const char * const output_746[] = {
  "adds\t%0, %1, #0",
  "ldmia\t%1, {%0}",
  "stmia\t%0, {%1}",
  "ldr\t%0, %1",
  "str\t%1, %0",
  "mov\t%0, %1",
  "mov\t%0, %1",
};

static const char *
output_747 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 866 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

  switch (which_alternative)
    {
    default:
    case 0:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "adds\t%0, %1, #0\n\tadds\t%H0, %H1, #0";
      return "adds\t%H0, %H1, #0\n\tadds\t%0, %1, #0";
    case 1:
      return "ldmia\t%1, {%0, %H0}";
    case 2:
      return "stmia\t%0, {%1, %H1}";
    case 3:
      return thumb_load_double_from_address (operands);
    case 4:
      operands[2] = gen_rtx_MEM (SImode,
				 plus_constant (Pmode,
						XEXP (operands[0], 0), 4));
      output_asm_insn ("str\t%1, %0\n\tstr\t%H1, %2", operands);
      return "";
    case 5:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "mov\t%0, %1\n\tmov\t%H0, %H1";
      return "mov\t%H0, %H1\n\tmov\t%0, %1";
    }
  
}

static const char *
output_748 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 915 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"
 return thumb_output_move_mem_multiple (3, operands);
}

static const char *
output_749 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 934 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"
 return thumb_output_move_mem_multiple (2, operands);
}

static const char *
output_750 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 974 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"
{
  rtx t = cfun->machine->thumb1_cc_insn;
  if (t != NULL_RTX)
    {
      if (!rtx_equal_p (cfun->machine->thumb1_cc_op0, operands[1])
	  || !rtx_equal_p (cfun->machine->thumb1_cc_op1, operands[2]))
	t = NULL_RTX;
      if (cfun->machine->thumb1_cc_mode == CC_NOOVmode)
	{
	  if (!noov_comparison_operator (operands[0], VOIDmode))
	    t = NULL_RTX;
	}
      else if (cfun->machine->thumb1_cc_mode != CCmode)
	t = NULL_RTX;
    }
  if (t == NULL_RTX)
    {
      output_asm_insn ("cmp\t%1, %2", operands);
      cfun->machine->thumb1_cc_insn = insn;
      cfun->machine->thumb1_cc_op0 = operands[1];
      cfun->machine->thumb1_cc_op1 = operands[2];
      cfun->machine->thumb1_cc_mode = CCmode;
    }
  else
    /* Ensure we emit the right type of condition code on the jump.  */
    XEXP (operands[0], 0) = gen_rtx_REG (cfun->machine->thumb1_cc_mode,
					 CC_REGNUM);

  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
}
}

static const char *
output_751 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1036 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

  output_asm_insn ("adds\t%0, %1, #%n2", operands);

  switch (get_attr_length (insn))
    {
    case 4:  return "b%d4\t%l3";
    case 6:  return "b%D4\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D4\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_752 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1073 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

  output_asm_insn ("cmn\t%1, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_753 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1112 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

  {
  rtx op[3];
  op[0] = operands[4];
  op[1] = operands[1];
  op[2] = GEN_INT (32 - 1 - INTVAL (operands[2]));

  output_asm_insn ("lsls\t%0, %1, %2", op);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_754 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1157 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

  {
  rtx op[3];
  op[0] = operands[4];
  op[1] = operands[1];
  op[2] = GEN_INT (32 - INTVAL (operands[2]));

  output_asm_insn ("lsls\t%0, %1, %2", op);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_755 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1200 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

  {
  output_asm_insn ("tst\t%0, %1", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d3\t%l2";
    case 6:  return "b%D3\t.LCB%=\n\tb\t%l2\t%@long jump\n.LCB%=:";
    default: return "b%D3\t.LCB%=\n\tbl\t%l2\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_756 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1239 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

   {
     rtx cond[2];
     cond[0] = gen_rtx_fmt_ee ((GET_CODE (operands[3]) == NE
				? GEU : LTU),
			       VOIDmode, operands[2], const1_rtx);
     cond[1] = operands[4];

     if (which_alternative == 0)
       output_asm_insn ("subs\t%0, %2, #1", operands);
     else if (which_alternative == 1)
       {
	 /* We must provide an alternative for a hi reg because reload
	    cannot handle output reloads on a jump instruction, but we
	    can't subtract into that.  Fortunately a mov from lo to hi
	    does not clobber the condition codes.  */
	 output_asm_insn ("subs\t%1, %2, #1", operands);
	 output_asm_insn ("mov\t%0, %1", operands);
       }
     else
       {
	 /* Similarly, but the target is memory.  */
	 output_asm_insn ("subs\t%1, %2, #1", operands);
	 output_asm_insn ("str\t%1, %0", operands);
       }

     switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
       {
	 case 4:
	   output_asm_insn ("b%d0\t%l1", cond);
	   return "";
	 case 6:
	   output_asm_insn ("b%D0\t.LCB%=", cond);
	   return "b\t%l4\t%@long jump\n.LCB%=:";
	 default:
	   output_asm_insn ("b%D0\t.LCB%=", cond);
	   return "bl\t%l4\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_757 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1351 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

   {
     rtx cond[3];

     cond[0] = (which_alternative < 2) ? operands[0] : operands[1];
     cond[1] = operands[2];
     cond[2] = operands[3];

     if (CONST_INT_P (cond[2]) && INTVAL (cond[2]) < 0)
       output_asm_insn ("subs\t%0, %1, #%n2", cond);
     else
       output_asm_insn ("adds\t%0, %1, %2", cond);

     if (which_alternative >= 2
	 && which_alternative < 4)
       output_asm_insn ("mov\t%0, %1", operands);
     else if (which_alternative >= 4)
       output_asm_insn ("str\t%1, %0", operands);

     switch (get_attr_length (insn) - ((which_alternative >= 2) ? 2 : 0))
       {
	 case 4:
	   return "b%d4\t%l5";
	 case 6:
	   return "b%D4\t.LCB%=\n\tb\t%l5\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D4\t.LCB%=\n\tbl\t%l5\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_758 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1430 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

   {
     switch (which_alternative)
       {
       case 0:
	 output_asm_insn ("cmp\t%1, #%n2", operands);
	 break;
       case 1:
	 output_asm_insn ("cmn\t%1, %2", operands);
	 break;
       case 2:
	 if (INTVAL (operands[2]) < 0)
	   output_asm_insn ("subs\t%0, %1, %2", operands);
	 else
	   output_asm_insn ("adds\t%0, %1, %2", operands);
	 break;
       case 3:
	 if (INTVAL (operands[2]) < 0)
	   output_asm_insn ("subs\t%0, %0, %2", operands);
	 else
	   output_asm_insn ("adds\t%0, %0, %2", operands);
	 break;
       }

     switch (get_attr_length (insn))
       {
	 case 4:
	   return "b%d3\t%l4";
	 case 6:
	   return "b%D3\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D3\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char * const output_760[] = {
  "rsbs\t%0, %1, #0\n\tadcs\t%0, %0, %1",
  "rsbs\t%2, %1, #0\n\tadcs\t%0, %1, %2",
};

static const char *
output_765 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1582 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

  if (get_attr_length (insn) == 2)
    return "b\t%l0";
  return "bl\t%l0\t%@ far jump";
  
}

static const char *
output_767 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1618 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

  {
    if (!TARGET_CALLER_INTERWORKING)
      return thumb_call_via_reg (operands[0]);
    else if (operands[1] == const0_rtx)
      return "bl\t%__interwork_call_via_%0";
    else if (frame_pointer_needed)
      return "bl\t%__interwork_r7_call_via_%0";
    else
      return "bl\t%__interwork_r11_call_via_%0";
  }
}

static const char *
output_769 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1651 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

  {
    if (!TARGET_CALLER_INTERWORKING)
      return thumb_call_via_reg (operands[1]);
    else if (operands[2] == const0_rtx)
      return "bl\t%__interwork_call_via_%1";
    else if (frame_pointer_needed)
      return "bl\t%__interwork_r7_call_via_%1";
    else
      return "bl\t%__interwork_r11_call_via_%1";
  }
}

static const char *
output_772 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1719 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"
 return thumb1_output_casesi(operands);
}

static const char *
output_774 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1739 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"
 return thumb1_output_interwork ();
}

static const char *
output_775 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1747 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb1.md"

    return thumb1_unexpanded_epilogue ();
  
}

static const char * const output_788[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
  "str%?\t%1, %0",
};

static const char *
output_789 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 319 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb2.md"

  (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
			     INTVAL (operands[3]));
  return "add\t%2, %|pc\n\tldr%?\t%0, [%2]";
  
}

static const char * const output_790[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "movw%?\t%0, %L1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_798[] = {
  "it\t%D3\n\tmov%D3\t%0, %2",
  "it\t%d3\n\tmov%d3\t%0, %1",
  "it\t%D3\n\tmov%D3\t%0, %2",
  "it\t%D3\n\tmvn%D3\t%0, #%B2",
  "it\t%d3\n\tmov%d3\t%0, %1",
  "it\t%d3\n\tmvn%d3\t%0, #%B1",
  "#",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_799[] = {
  "it\t%D3\n\tmov%D3\t%0, %2",
  "it\t%d3\n\tmov%d3\t%0, %1",
};

static const char * const output_804[] = {
  "it\t%d1\n\torr%d1\t%0, %3, #1",
  "#",
};

static const char * const output_805[] = {
  "it\t%d2\n\tmov%d2\t%0, #1\n\tit\t%d2\n\torr%d2\t%0, %1",
  "mov\t%0, #1\n\torr\t%0, %1\n\tit\t%D2\n\tmov%D2\t%0, %1",
};

static const char *
output_806 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 679 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb2.md"

    if (GET_CODE (operands[3]) == NE)
      {
        if (which_alternative != 1)
	  output_asm_insn ("it\t%D4\n\tmov%D4\t%0, %2", operands);
        if (which_alternative != 0)
	  output_asm_insn ("it\t%d4\n\tmov%d4\t%0, %1", operands);
        return "";
      }
    switch (which_alternative)
      {
      case 0:
	output_asm_insn ("it\t%d4", operands);
	break;
      case 1:
	output_asm_insn ("it\t%D4", operands);
	break;
      case 2:
	if (arm_restrict_it)
	  output_asm_insn ("it\t%D4", operands);
	else
	  output_asm_insn ("ite\t%D4", operands);
	break;
      default:
	abort();
      }
    if (which_alternative != 0)
      {
        output_asm_insn ("mov%D4\t%0, %1", operands);
        if (arm_restrict_it && which_alternative == 2)
          output_asm_insn ("it\t%d4", operands);
      }
    if (which_alternative != 1)
      output_asm_insn ("mov%d4\t%0, %2", operands);
    return "";
  
}

static const char *
output_807 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 729 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb2.md"

    if (GET_CODE (operands[4]) == LT && operands[3] == const0_rtx)
      return "%i5\t%0, %1, %2, lsr #31";

    output_asm_insn ("cmp\t%2, %3", operands);
    if (GET_CODE (operands[5]) == AND)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("mov%D4\t%0, #0", operands);
      }
    else if (GET_CODE (operands[5]) == MINUS)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("rsb%D4\t%0, %1, #0", operands);
      }
    else if (which_alternative != 0)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("mov%D4\t%0, %1", operands);
      }
    else
      output_asm_insn ("it\t%d4", operands);
    return "%i5%d4\t%0, %1, #1";
  
}

static const char *
output_809 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 836 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb2.md"

    output_asm_insn ("cmp\t%2, %3", operands);
    if (which_alternative != 0)
      {
	if (arm_restrict_it)
	  {
	    output_asm_insn ("mov\t%0, %1", operands);
	    output_asm_insn ("it\t%d4", operands);
	  }
	else
	{
	  output_asm_insn ("ite\t%D4", operands);
	  output_asm_insn ("mov%D4\t%0, %1", operands);
	}
      }
    else
      output_asm_insn ("it\t%d4", operands);
    return "sub%d4\t%0, %1, #1";
  
}

static const char *
output_811 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 939 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb2.md"

  if (GET_CODE (operands[5]) == LT
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && REG_P (operands[1]))
	{
	  if (operands[2] == const0_rtx)
	    return "and\t%0, %1, %3, asr #31";
	  return "ands\t%0, %1, %3, asr #32\n\tit\tcc\n\tmovcc\t%0, %2";
	}
      else if (which_alternative != 0 && REG_P (operands[2]))
	{
	  if (operands[1] == const0_rtx)
	    return "bic\t%0, %2, %3, asr #31";
	  return "bics\t%0, %2, %3, asr #32\n\tit\tcs\n\tmovcs\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }

  if (GET_CODE (operands[5]) == GE
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && REG_P (operands[1]))
	{
	  if (operands[2] == const0_rtx)
	    return "bic\t%0, %1, %3, asr #31";
	  return "bics\t%0, %1, %3, asr #32\n\tit\tcs\n\tmovcs\t%0, %2";
	}
      else if (which_alternative != 0 && REG_P (operands[2]))
	{
	  if (operands[1] == const0_rtx)
	    return "and\t%0, %2, %3, asr #31";
	  return "ands\t%0, %2, %3, asr #32\n\tit\tcc\n\tmovcc\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }
  if (CONST_INT_P (operands[4])
      && !const_ok_for_arm (INTVAL (operands[4])))
    output_asm_insn ("cmn\t%3, #%n4", operands);
  else
    output_asm_insn ("cmp\t%3, %4", operands);
  switch (which_alternative)
    {
    case 0:
      output_asm_insn ("it\t%D5", operands);
      break;
    case 1:
      output_asm_insn ("it\t%d5", operands);
      break;
    case 2:
      if (arm_restrict_it)
        {
          output_asm_insn ("mov\t%0, %1", operands);
          output_asm_insn ("it\t%D5", operands);
        }
      else
        output_asm_insn ("ite\t%d5", operands);
      break;
    default:
      abort();
    }
  if (which_alternative != 0 && !(arm_restrict_it && which_alternative == 2))
    output_asm_insn ("mov%d5\t%0, %1", operands);
  if (which_alternative != 1)
    output_asm_insn ("mov%D5\t%0, %2", operands);
  return "";
  
}

static const char * const output_812[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_813[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_814[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char *
output_815 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1071 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb2.md"
 return thumb2_output_casesi(operands);
}

static const char *
output_816 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1090 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb2.md"
 return thumb2_output_casesi(operands);
}

static const char *
output_817 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1099 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb2.md"
 return output_return_instruction (const_true_rtx, true, false, true);
}

static const char *
output_820 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1143 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb2.md"
 return arm_output_shift(operands, 2);
}

static const char *
output_824 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1169 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (CONST_INT_P (operands[2]))
      val = INTVAL(operands[2]);
    else
      val = 0;

    /* We prefer eg. subs rn, rn, #1 over adds rn, rn, #0xffffffff.  */
    if (val < 0 && const_ok_for_arm(ARM_SIGN_EXTEND (-val)))
      return "sub%!\t%0, %1, #%n2";
    else
      return "add%!\t%0, %1, %2";
  
}

static const char *
output_826 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1235 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (CONST_INT_P (operands[2]))
      val = INTVAL (operands[2]);
    else
      val = 0;

    if (val < 0 && const_ok_for_arm (ARM_SIGN_EXTEND (-val)))
      return "subs\t%0, %1, #%n2";
    else
      return "adds\t%0, %1, %2";
  
}

static const char *
output_827 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1260 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (CONST_INT_P (operands[1]))
      val = INTVAL (operands[1]);
    else
      val = 0;

    if (val < 0 && const_ok_for_arm (ARM_SIGN_EXTEND (-val)))
      return "cmp\t%0, #%n1";
    else
      return "cmn\t%0, %1";
  
}

static const char *
output_831 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1322 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb2.md"

  if (get_attr_length (insn) == 2)
    return "cbz\t%0, %l1";
  else
    return "cmp\t%0, #0\n\tbeq\t%l1";
  
}

static const char *
output_832 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1346 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb2.md"

  if (get_attr_length (insn) == 2)
    return "cbnz\t%0, %l1";
  else
    return "cmp\t%0, #0\n\tbne\t%l1";
  
}

static const char *
output_841 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 34 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V8QImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v8qi";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v8qi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v8qi";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v8qi";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v8qi";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_842 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 34 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4HImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v4hi";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v4hi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v4hi";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v4hi";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v4hi";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_843 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 34 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2SImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v2si";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v2si", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v2si";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v2si";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v2si";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_844 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 34 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2SFmode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v2sf";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ v2sf", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v2sf";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v2sf";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v2sf";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_845 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 34 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], DImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ di";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%x1  @ di", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ di";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ di";
    case 5: return "vmov\t%P0, %Q1, %R1  @ di";
    default: return output_move_double (operands, true, NULL);
    }
}
}

static const char *
output_846 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V16QImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v16qi";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v16qi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v16qi";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v16qi\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v16qi\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_847 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V8HImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v8hi";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v8hi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v8hi";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v8hi\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v8hi\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_848 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4SImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v4si";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v4si", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v4si";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v4si\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v4si\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_849 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4SFmode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v4sf";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v4sf", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v4sf";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v4sf\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v4sf\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_850 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2DImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v2di";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v2di", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v2di";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v2di\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v2di\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_851 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 79 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], TImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ ti";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ ti", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ ti";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ ti\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ ti\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_852 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 146 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_853 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 146 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_854 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 146 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_855 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 146 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_876 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 309 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.8\t{%P0[%c2]}, %A1";
  else
    return "vmov.8\t%P0[%c2], %1";
}
}

static const char *
output_877 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 309 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.16\t{%P0[%c2]}, %A1";
  else
    return "vmov.16\t%P0[%c2], %1";
}
}

static const char *
output_878 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 309 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.32\t{%P0[%c2]}, %A1";
  else
    return "vmov.32\t%P0[%c2], %1";
}
}

static const char *
output_879 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 309 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2])) - 1;
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.32\t{%P0[%c2]}, %A1";
  else
    return "vmov.32\t%P0[%c2], %1";
}
}

static const char *
output_880 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 330 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V16QImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V8QImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.8\t{%P0[%c2]}, %A1";
  else
    return "vmov.8\t%P0[%c2], %1";
}
}

static const char *
output_881 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 330 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V8HImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V4HImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.16\t{%P0[%c2]}, %A1";
  else
    return "vmov.16\t%P0[%c2], %1";
}
}

static const char *
output_882 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 330 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V4SImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V2SImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.32\t{%P0[%c2]}, %A1";
  else
    return "vmov.32\t%P0[%c2], %1";
}
}

static const char *
output_883 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 330 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V4SFmode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V2SFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vld1.32\t{%P0[%c2]}, %A1";
  else
    return "vmov.32\t%P0[%c2], %1";
}
}

static const char *
output_884 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 359 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int regno = REGNO (operands[0]) + 2 * elem;

  operands[0] = gen_rtx_REG (DImode, regno);

  if (which_alternative == 0)
    return "vld1.64\t%P0, %A1";
  else
    return "vmov\t%P0, %Q1, %R1";
}
}

static const char *
output_885 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 391 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.8\t{%P1[%c2]}, %A0";
  else
    return "vmov.u8\t%0, %P1[%c2]";
}
}

static const char *
output_886 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 391 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.16\t{%P1[%c2]}, %A0";
  else
    return "vmov.u16\t%0, %P1[%c2]";
}
}

static const char *
output_887 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 391 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.32\t{%P1[%c2]}, %A0";
  else
    return "vmov.32\t%0, %P1[%c2]";
}
}

static const char *
output_888 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 391 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }

  if (which_alternative == 0)
    return "vst1.32\t{%P1[%c2]}, %A0";
  else
    return "vmov.32\t%0, %P1[%c2]";
}
}

static const char *
output_889 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 413 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V16QImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V8QImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.8\t{%P1[%c2]}, %A0";
  else
    return "vmov.u8\t%0, %P1[%c2]";
}
}

static const char *
output_890 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 413 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V8HImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V4HImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.16\t{%P1[%c2]}, %A0";
  else
    return "vmov.u16\t%0, %P1[%c2]";
}
}

static const char *
output_891 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 413 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V4SImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V2SImode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.32\t{%P1[%c2]}, %A0";
  else
    return "vmov.32\t%0, %P1[%c2]";
}
}

static const char *
output_892 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 413 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V4SFmode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V2SFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  if (which_alternative == 0)
    return "vst1.32\t{%P1[%c2]}, %A0";
  else
    return "vmov.32\t%0, %P1[%c2]";
}
}

static const char *
output_893 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 439 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]) + 2 * INTVAL (operands[2]);

  operands[1] = gen_rtx_REG (DImode, regno);

  if (which_alternative == 0)
    return "vst1.64\t{%P1}, %A0  @ v2di";
  else
    return "vmov\t%Q0, %R0, %P1  @ v2di";
}
}

static const char *
output_903 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 484 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 3: return "vadd.i64\t%P0, %P1, %P2";
    case 1: return "#";
    case 2: return "#";
    case 4: return "#";
    case 5: return "#";
    case 6: return "#";
    default: gcc_unreachable ();
    }
}
}

static const char *
output_913 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 522 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: /* fall through */
    case 4: return "vsub.i64\t%P0, %P1, %P2";
    case 1: /* fall through */ 
    case 2: /* fall through */
    case 3: return  "subs\t%Q0, %Q1, %Q2\n\tsbc\t%R0, %R1, %R2";
    default: gcc_unreachable ();
    }
}
}

static const char *
output_970 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 648 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V8QImode, 0, VALID_NEON_QREG_MODE (V8QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_971 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 648 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V16QImode, 0, VALID_NEON_QREG_MODE (V16QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_972 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 648 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4HImode, 0, VALID_NEON_QREG_MODE (V4HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_973 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 648 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V8HImode, 0, VALID_NEON_QREG_MODE (V8HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_974 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 648 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2SImode, 0, VALID_NEON_QREG_MODE (V2SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_975 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 648 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4SImode, 0, VALID_NEON_QREG_MODE (V4SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_976 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 648 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2SFmode, 0, VALID_NEON_QREG_MODE (V2SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_977 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 648 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4SFmode, 0, VALID_NEON_QREG_MODE (V4SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_978 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 648 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2DImode, 0, VALID_NEON_QREG_MODE (V2DImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_979 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V8QImode, 1, VALID_NEON_QREG_MODE (V8QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_980 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V16QImode, 1, VALID_NEON_QREG_MODE (V16QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_981 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4HImode, 1, VALID_NEON_QREG_MODE (V4HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_982 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V8HImode, 1, VALID_NEON_QREG_MODE (V8HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_983 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2SImode, 1, VALID_NEON_QREG_MODE (V2SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_984 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4SImode, 1, VALID_NEON_QREG_MODE (V4SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_985 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2SFmode, 1, VALID_NEON_QREG_MODE (V2SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_986 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4SFmode, 1, VALID_NEON_QREG_MODE (V4SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_987 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 670 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2DImode, 1, VALID_NEON_QREG_MODE (V2DImode));
    default: gcc_unreachable ();
    }
}
}

static const char * const output_997[] = {
  "vorn\t%P0, %P1, %P2",
  "#",
  "#",
  "#",
};

static const char * const output_1007[] = {
  "vbic\t%P0, %P1, %P2",
  "#",
  "#",
};

static const char *
output_1071 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 884 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s8\t%P0, %P1, %P2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V8QImode,
						    VALID_NEON_QREG_MODE (V8QImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1072 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 884 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s8\t%q0, %q1, %q2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V16QImode,
						    VALID_NEON_QREG_MODE (V16QImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1073 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 884 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s16\t%P0, %P1, %P2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V4HImode,
						    VALID_NEON_QREG_MODE (V4HImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1074 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 884 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s16\t%q0, %q1, %q2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V8HImode,
						    VALID_NEON_QREG_MODE (V8HImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1075 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 884 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s32\t%P0, %P1, %P2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V2SImode,
						    VALID_NEON_QREG_MODE (V2SImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1076 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 884 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    switch (which_alternative)
      {
        case 0: return "vshl.s32\t%q0, %q1, %q2";
        case 1: return neon_output_shift_immediate ("vshl", 'i', &operands[2],
                         			    V4SImode,
						    VALID_NEON_QREG_MODE (V4SImode),
						    true);
        default: gcc_unreachable ();
      }
  }
}

static const char *
output_1077 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 903 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V8QImode, VALID_NEON_QREG_MODE (V8QImode),
					false);
  }
}

static const char *
output_1078 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 903 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V16QImode, VALID_NEON_QREG_MODE (V16QImode),
					false);
  }
}

static const char *
output_1079 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 903 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V4HImode, VALID_NEON_QREG_MODE (V4HImode),
					false);
  }
}

static const char *
output_1080 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 903 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V8HImode, VALID_NEON_QREG_MODE (V8HImode),
					false);
  }
}

static const char *
output_1081 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 903 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V2SImode, VALID_NEON_QREG_MODE (V2SImode),
					false);
  }
}

static const char *
output_1082 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 903 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 's', &operands[2],
					V4SImode, VALID_NEON_QREG_MODE (V4SImode),
					false);
  }
}

static const char *
output_1083 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 916 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V8QImode, VALID_NEON_QREG_MODE (V8QImode),
					false);
  }
}

static const char *
output_1084 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 916 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V16QImode, VALID_NEON_QREG_MODE (V16QImode),
					false);
  }
}

static const char *
output_1085 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 916 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V4HImode, VALID_NEON_QREG_MODE (V4HImode),
					false);
  }
}

static const char *
output_1086 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 916 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V8HImode, VALID_NEON_QREG_MODE (V8HImode),
					false);
  }
}

static const char *
output_1087 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 916 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V2SImode, VALID_NEON_QREG_MODE (V2SImode),
					false);
  }
}

static const char *
output_1088 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 916 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
    return neon_output_shift_immediate ("vshr", 'u', &operands[2],
					V4SImode, VALID_NEON_QREG_MODE (V4SImode),
					false);
  }
}

static const char * const output_1103[] = {
  "vld1.32\t{%P0[0]}, %A1",
  "vmov.32\t%P0[0], %1",
};

static const char * const output_1104[] = {
  "vshl.u64\t%P0, %P1, %2",
  "vshl.u64\t%P0, %P1, %P2",
};

static const char * const output_1334[] = {
  "vceq.i8\t%P0, %P1, %P2",
  "vceq.i8\t%P0, %P1, #0",
};

static const char * const output_1335[] = {
  "vceq.i8\t%q0, %q1, %q2",
  "vceq.i8\t%q0, %q1, #0",
};

static const char * const output_1336[] = {
  "vceq.i16\t%P0, %P1, %P2",
  "vceq.i16\t%P0, %P1, #0",
};

static const char * const output_1337[] = {
  "vceq.i16\t%q0, %q1, %q2",
  "vceq.i16\t%q0, %q1, #0",
};

static const char * const output_1338[] = {
  "vceq.i32\t%P0, %P1, %P2",
  "vceq.i32\t%P0, %P1, #0",
};

static const char * const output_1339[] = {
  "vceq.i32\t%q0, %q1, %q2",
  "vceq.i32\t%q0, %q1, #0",
};

static const char * const output_1340[] = {
  "vceq.f32\t%P0, %P1, %P2",
  "vceq.f32\t%P0, %P1, #0",
};

static const char * const output_1341[] = {
  "vceq.f32\t%q0, %q1, %q2",
  "vceq.f32\t%q0, %q1, #0",
};

static const char * const output_1342[] = {
  "vcge.s8\t%P0, %P1, %P2",
  "vcge.s8\t%P0, %P1, #0",
};

static const char * const output_1343[] = {
  "vcge.s8\t%q0, %q1, %q2",
  "vcge.s8\t%q0, %q1, #0",
};

static const char * const output_1344[] = {
  "vcge.s16\t%P0, %P1, %P2",
  "vcge.s16\t%P0, %P1, #0",
};

static const char * const output_1345[] = {
  "vcge.s16\t%q0, %q1, %q2",
  "vcge.s16\t%q0, %q1, #0",
};

static const char * const output_1346[] = {
  "vcge.s32\t%P0, %P1, %P2",
  "vcge.s32\t%P0, %P1, #0",
};

static const char * const output_1347[] = {
  "vcge.s32\t%q0, %q1, %q2",
  "vcge.s32\t%q0, %q1, #0",
};

static const char * const output_1348[] = {
  "vcge.f32\t%P0, %P1, %P2",
  "vcge.f32\t%P0, %P1, #0",
};

static const char * const output_1349[] = {
  "vcge.f32\t%q0, %q1, %q2",
  "vcge.f32\t%q0, %q1, #0",
};

static const char * const output_1356[] = {
  "vcgt.s8\t%P0, %P1, %P2",
  "vcgt.s8\t%P0, %P1, #0",
};

static const char * const output_1357[] = {
  "vcgt.s8\t%q0, %q1, %q2",
  "vcgt.s8\t%q0, %q1, #0",
};

static const char * const output_1358[] = {
  "vcgt.s16\t%P0, %P1, %P2",
  "vcgt.s16\t%P0, %P1, #0",
};

static const char * const output_1359[] = {
  "vcgt.s16\t%q0, %q1, %q2",
  "vcgt.s16\t%q0, %q1, #0",
};

static const char * const output_1360[] = {
  "vcgt.s32\t%P0, %P1, %P2",
  "vcgt.s32\t%P0, %P1, #0",
};

static const char * const output_1361[] = {
  "vcgt.s32\t%q0, %q1, %q2",
  "vcgt.s32\t%q0, %q1, #0",
};

static const char * const output_1362[] = {
  "vcgt.f32\t%P0, %P1, %P2",
  "vcgt.f32\t%P0, %P1, #0",
};

static const char * const output_1363[] = {
  "vcgt.f32\t%q0, %q1, %q2",
  "vcgt.f32\t%q0, %q1, #0",
};

static const char *
output_1545 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2634 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.s8\t%0, %P1[%c2]";
}
}

static const char *
output_1546 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2634 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.s16\t%0, %P1[%c2]";
}
}

static const char *
output_1547 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2634 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.s32\t%0, %P1[%c2]";
}
}

static const char *
output_1548 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2634 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.s32\t%0, %P1[%c2]";
}
}

static const char *
output_1549 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2653 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.u8\t%0, %P1[%c2]";
}
}

static const char *
output_1550 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2653 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.u16\t%0, %P1[%c2]";
}
}

static const char *
output_1551 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2653 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.u32\t%0, %P1[%c2]";
}
}

static const char *
output_1552 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2653 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov.u32\t%0, %P1[%c2]";
}
}

static const char *
output_1553 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2672 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s8\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1554 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2672 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1555 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2672 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1556 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2672 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.s32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1557 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2699 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u8\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1558 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2699 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1559 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2699 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1560 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2699 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov.u32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char * const output_1565[] = {
  "vdup.32\t%P0, %1",
  "vdup.32\t%P0, %y1",
};

static const char * const output_1566[] = {
  "vdup.32\t%P0, %1",
  "vdup.32\t%P0, %y1",
};

static const char * const output_1567[] = {
  "vdup.32\t%q0, %1",
  "vdup.32\t%q0, %y1",
};

static const char * const output_1568[] = {
  "vdup.32\t%q0, %1",
  "vdup.32\t%q0, %y1",
};

static const char * const output_1569[] = {
  "vmov\t%e0, %Q1, %R1\n\tvmov\t%f0, %Q1, %R1",
  "vmov\t%e0, %P1\n\tvmov\t%f0, %P1",
};

static const char *
output_1570 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2905 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.8\t%P0, %P1[%c2]";
  else
    return "vdup.8\t%q0, %P1[%c2]";
}
}

static const char *
output_1571 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2905 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.8\t%P0, %P1[%c2]";
  else
    return "vdup.8\t%q0, %P1[%c2]";
}
}

static const char *
output_1572 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2905 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.16\t%P0, %P1[%c2]";
  else
    return "vdup.16\t%q0, %P1[%c2]";
}
}

static const char *
output_1573 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2905 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.16\t%P0, %P1[%c2]";
  else
    return "vdup.16\t%q0, %P1[%c2]";
}
}

static const char *
output_1574 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2905 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1575 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2905 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1576 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2905 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (true)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1577 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2905 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  if (false)
    return "vdup.32\t%P0, %P1[%c2]";
  else
    return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1611 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3094 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.s%#32.f32\t%P0, %P1, %2";
}
}

static const char *
output_1612 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3094 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.u%#32.f32\t%P0, %P1, %2";
}
}

static const char *
output_1613 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3094 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.s%#32.f32\t%q0, %q1, %2";
}
}

static const char *
output_1614 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3094 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.u%#32.f32\t%q0, %q1, %2";
}
}

static const char *
output_1615 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3107 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.f32.s%#32\t%P0, %P1, %2";
}
}

static const char *
output_1616 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3107 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.f32.u%#32\t%P0, %P1, %2";
}
}

static const char *
output_1617 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3107 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.f32.s%#32\t%q0, %q1, %2";
}
}

static const char *
output_1618 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3107 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.f32.u%#32\t%q0, %q1, %2";
}
}

static const char *
output_1637 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3158 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmul.i16\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1638 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3158 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmul.i32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1639 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3158 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmul.f32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1640 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3176 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmul.i16\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1641 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3176 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmul.i32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1642 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3176 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmul.f32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1643 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3194 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmull.s%#16\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1644 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3194 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmull.u%#16\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1645 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3194 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmull.s%#32\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1646 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3194 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmull.u%#32\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1647 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3209 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vqdmull.s16\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1648 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3209 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vqdmull.s32\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1649 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3224 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V8HImode));
  return "vqdmulh.s16\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1650 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3224 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V8HImode));
  return "vqrdmulh.s16\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1651 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3224 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4SImode));
  return "vqdmulh.s32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1652 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3224 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4SImode));
  return "vqrdmulh.s32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1653 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vqdmulh.s16\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1654 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vqrdmulh.s16\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1655 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vqdmulh.s32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1656 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vqrdmulh.s32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1657 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3255 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmla.i16\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1658 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3255 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmla.i32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1659 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3255 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmla.f32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1660 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3274 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V8HImode));
  return "vmla.i16\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1661 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3274 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SImode));
  return "vmla.i32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1662 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3274 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SFmode));
  return "vmla.f32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1663 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3293 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmlal.s%#16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1664 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3293 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmlal.u%#16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1665 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3293 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmlal.s%#32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1666 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3293 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmlal.u%#32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1667 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3309 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vqdmlal.s16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1668 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3309 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vqdmlal.s32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1669 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3325 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmls.i16\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1670 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3325 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmls.i32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1671 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3325 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmls.f32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1672 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3344 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V8HImode));
  return "vmls.i16\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1673 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3344 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SImode));
  return "vmls.i32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1674 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3344 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SFmode));
  return "vmls.f32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1675 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3363 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmlsl.s%#16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1676 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3363 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmlsl.u%#16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1677 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3363 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmlsl.s%#32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1678 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3363 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmlsl.u%#32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1679 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3379 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vqdmlsl.s16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1680 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3379 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vqdmlsl.s32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1681 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3657 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V8QImode));
  return "vext.8\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1682 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3657 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V16QImode));
  return "vext.8\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1683 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3657 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vext.16\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1684 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3657 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V8HImode));
  return "vext.16\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1685 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3657 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vext.32\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1686 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3657 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4SImode));
  return "vext.32\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1687 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3657 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vext.32\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1688 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3657 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4SFmode));
  return "vext.32\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1689 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3657 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (DImode));
  return "vext.64\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1690 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3657 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2DImode));
  return "vext.64\t%q0, %q1, %q2, %3";
}
}

static const char * const output_1706[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1707[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1708[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1709[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1710[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1711[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1712[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1713[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1714[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1715[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char *
output_1780 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8QImode) + 1);
  return "vshr.s%#8\t%P0, %P1, %2";
}
}

static const char *
output_1781 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8QImode) + 1);
  return "vshr.u%#8\t%P0, %P1, %2";
}
}

static const char *
output_1782 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8QImode) + 1);
  return "vrshr.s%#8\t%P0, %P1, %2";
}
}

static const char *
output_1783 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8QImode) + 1);
  return "vrshr.u%#8\t%P0, %P1, %2";
}
}

static const char *
output_1784 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V16QImode) + 1);
  return "vshr.s%#8\t%q0, %q1, %2";
}
}

static const char *
output_1785 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V16QImode) + 1);
  return "vshr.u%#8\t%q0, %q1, %2";
}
}

static const char *
output_1786 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V16QImode) + 1);
  return "vrshr.s%#8\t%q0, %q1, %2";
}
}

static const char *
output_1787 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V16QImode) + 1);
  return "vrshr.u%#8\t%q0, %q1, %2";
}
}

static const char *
output_1788 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4HImode) + 1);
  return "vshr.s%#16\t%P0, %P1, %2";
}
}

static const char *
output_1789 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4HImode) + 1);
  return "vshr.u%#16\t%P0, %P1, %2";
}
}

static const char *
output_1790 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4HImode) + 1);
  return "vrshr.s%#16\t%P0, %P1, %2";
}
}

static const char *
output_1791 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4HImode) + 1);
  return "vrshr.u%#16\t%P0, %P1, %2";
}
}

static const char *
output_1792 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) + 1);
  return "vshr.s%#16\t%q0, %q1, %2";
}
}

static const char *
output_1793 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) + 1);
  return "vshr.u%#16\t%q0, %q1, %2";
}
}

static const char *
output_1794 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) + 1);
  return "vrshr.s%#16\t%q0, %q1, %2";
}
}

static const char *
output_1795 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) + 1);
  return "vrshr.u%#16\t%q0, %q1, %2";
}
}

static const char *
output_1796 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2SImode) + 1);
  return "vshr.s%#32\t%P0, %P1, %2";
}
}

static const char *
output_1797 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2SImode) + 1);
  return "vshr.u%#32\t%P0, %P1, %2";
}
}

static const char *
output_1798 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2SImode) + 1);
  return "vrshr.s%#32\t%P0, %P1, %2";
}
}

static const char *
output_1799 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2SImode) + 1);
  return "vrshr.u%#32\t%P0, %P1, %2";
}
}

static const char *
output_1800 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) + 1);
  return "vshr.s%#32\t%q0, %q1, %2";
}
}

static const char *
output_1801 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) + 1);
  return "vshr.u%#32\t%q0, %q1, %2";
}
}

static const char *
output_1802 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) + 1);
  return "vrshr.s%#32\t%q0, %q1, %2";
}
}

static const char *
output_1803 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) + 1);
  return "vrshr.u%#32\t%q0, %q1, %2";
}
}

static const char *
output_1804 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (DImode) + 1);
  return "vshr.s%#64\t%P0, %P1, %2";
}
}

static const char *
output_1805 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (DImode) + 1);
  return "vshr.u%#64\t%P0, %P1, %2";
}
}

static const char *
output_1806 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (DImode) + 1);
  return "vrshr.s%#64\t%P0, %P1, %2";
}
}

static const char *
output_1807 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (DImode) + 1);
  return "vrshr.u%#64\t%P0, %P1, %2";
}
}

static const char *
output_1808 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) + 1);
  return "vshr.s%#64\t%q0, %q1, %2";
}
}

static const char *
output_1809 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) + 1);
  return "vshr.u%#64\t%q0, %q1, %2";
}
}

static const char *
output_1810 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) + 1);
  return "vrshr.s%#64\t%q0, %q1, %2";
}
}

static const char *
output_1811 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3754 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) + 1);
  return "vrshr.u%#64\t%q0, %q1, %2";
}
}

static const char *
output_1812 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3768 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vshrn.i16\t%P0, %q1, %2";
}
}

static const char *
output_1813 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3768 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vrshrn.i16\t%P0, %q1, %2";
}
}

static const char *
output_1814 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3768 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vshrn.i32\t%P0, %q1, %2";
}
}

static const char *
output_1815 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3768 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vrshrn.i32\t%P0, %q1, %2";
}
}

static const char *
output_1816 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3768 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vshrn.i64\t%P0, %q1, %2";
}
}

static const char *
output_1817 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3768 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vrshrn.i64\t%P0, %q1, %2";
}
}

static const char *
output_1818 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3782 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vqshrn.s%#16\t%P0, %q1, %2";
}
}

static const char *
output_1819 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3782 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vqshrn.u%#16\t%P0, %q1, %2";
}
}

static const char *
output_1820 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3782 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vqrshrn.s%#16\t%P0, %q1, %2";
}
}

static const char *
output_1821 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3782 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vqrshrn.u%#16\t%P0, %q1, %2";
}
}

static const char *
output_1822 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3782 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vqshrn.s%#32\t%P0, %q1, %2";
}
}

static const char *
output_1823 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3782 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vqshrn.u%#32\t%P0, %q1, %2";
}
}

static const char *
output_1824 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3782 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vqrshrn.s%#32\t%P0, %q1, %2";
}
}

static const char *
output_1825 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3782 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vqrshrn.u%#32\t%P0, %q1, %2";
}
}

static const char *
output_1826 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3782 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vqshrn.s%#64\t%P0, %q1, %2";
}
}

static const char *
output_1827 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3782 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vqshrn.u%#64\t%P0, %q1, %2";
}
}

static const char *
output_1828 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3782 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vqrshrn.s%#64\t%P0, %q1, %2";
}
}

static const char *
output_1829 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3782 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vqrshrn.u%#64\t%P0, %q1, %2";
}
}

static const char *
output_1830 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3796 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vqshrun.s16\t%P0, %q1, %2";
}
}

static const char *
output_1831 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3796 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vqrshrun.s16\t%P0, %q1, %2";
}
}

static const char *
output_1832 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3796 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vqshrun.s32\t%P0, %q1, %2";
}
}

static const char *
output_1833 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3796 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vqrshrun.s32\t%P0, %q1, %2";
}
}

static const char *
output_1834 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3796 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vqshrun.s64\t%P0, %q1, %2";
}
}

static const char *
output_1835 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3796 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vqrshrun.s64\t%P0, %q1, %2";
}
}

static const char *
output_1836 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3809 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vshl.i8\t%P0, %P1, %2";
}
}

static const char *
output_1837 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3809 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vshl.i8\t%q0, %q1, %2";
}
}

static const char *
output_1838 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3809 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vshl.i16\t%P0, %P1, %2";
}
}

static const char *
output_1839 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3809 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vshl.i16\t%q0, %q1, %2";
}
}

static const char *
output_1840 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3809 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vshl.i32\t%P0, %P1, %2";
}
}

static const char *
output_1841 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3809 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vshl.i32\t%q0, %q1, %2";
}
}

static const char *
output_1842 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3809 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vshl.i64\t%P0, %P1, %2";
}
}

static const char *
output_1843 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3809 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vshl.i64\t%q0, %q1, %2";
}
}

static const char *
output_1844 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3822 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vqshl.s%#8\t%P0, %P1, %2";
}
}

static const char *
output_1845 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3822 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vqshl.u%#8\t%P0, %P1, %2";
}
}

static const char *
output_1846 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3822 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vqshl.s%#8\t%q0, %q1, %2";
}
}

static const char *
output_1847 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3822 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vqshl.u%#8\t%q0, %q1, %2";
}
}

static const char *
output_1848 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3822 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vqshl.s%#16\t%P0, %P1, %2";
}
}

static const char *
output_1849 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3822 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vqshl.u%#16\t%P0, %P1, %2";
}
}

static const char *
output_1850 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3822 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vqshl.s%#16\t%q0, %q1, %2";
}
}

static const char *
output_1851 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3822 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vqshl.u%#16\t%q0, %q1, %2";
}
}

static const char *
output_1852 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3822 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vqshl.s%#32\t%P0, %P1, %2";
}
}

static const char *
output_1853 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3822 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vqshl.u%#32\t%P0, %P1, %2";
}
}

static const char *
output_1854 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3822 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vqshl.s%#32\t%q0, %q1, %2";
}
}

static const char *
output_1855 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3822 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vqshl.u%#32\t%q0, %q1, %2";
}
}

static const char *
output_1856 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3822 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vqshl.s%#64\t%P0, %P1, %2";
}
}

static const char *
output_1857 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3822 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vqshl.u%#64\t%P0, %P1, %2";
}
}

static const char *
output_1858 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3822 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vqshl.s%#64\t%q0, %q1, %2";
}
}

static const char *
output_1859 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3822 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vqshl.u%#64\t%q0, %q1, %2";
}
}

static const char *
output_1860 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3835 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vqshlu.s8\t%P0, %P1, %2";
}
}

static const char *
output_1861 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3835 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vqshlu.s8\t%q0, %q1, %2";
}
}

static const char *
output_1862 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3835 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vqshlu.s16\t%P0, %P1, %2";
}
}

static const char *
output_1863 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3835 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vqshlu.s16\t%q0, %q1, %2";
}
}

static const char *
output_1864 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3835 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vqshlu.s32\t%P0, %P1, %2";
}
}

static const char *
output_1865 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3835 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vqshlu.s32\t%q0, %q1, %2";
}
}

static const char *
output_1866 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3835 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vqshlu.s64\t%P0, %P1, %2";
}
}

static const char *
output_1867 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3835 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vqshlu.s64\t%q0, %q1, %2";
}
}

static const char *
output_1868 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3848 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode) + 1);
  return "vshll.s%#8\t%q0, %P1, %2";
}
}

static const char *
output_1869 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3848 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode) + 1);
  return "vshll.u%#8\t%q0, %P1, %2";
}
}

static const char *
output_1870 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3848 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode) + 1);
  return "vshll.s%#16\t%q0, %P1, %2";
}
}

static const char *
output_1871 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3848 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode) + 1);
  return "vshll.u%#16\t%q0, %P1, %2";
}
}

static const char *
output_1872 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3848 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode) + 1);
  return "vshll.s%#32\t%q0, %P1, %2";
}
}

static const char *
output_1873 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3848 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode) + 1);
  return "vshll.u%#32\t%q0, %P1, %2";
}
}

static const char *
output_1874 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "vsra.s%#8\t%P0, %P2, %3";
}
}

static const char *
output_1875 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "vsra.u%#8\t%P0, %P2, %3";
}
}

static const char *
output_1876 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "vrsra.s%#8\t%P0, %P2, %3";
}
}

static const char *
output_1877 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "vrsra.u%#8\t%P0, %P2, %3";
}
}

static const char *
output_1878 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "vsra.s%#8\t%q0, %q2, %3";
}
}

static const char *
output_1879 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "vsra.u%#8\t%q0, %q2, %3";
}
}

static const char *
output_1880 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "vrsra.s%#8\t%q0, %q2, %3";
}
}

static const char *
output_1881 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "vrsra.u%#8\t%q0, %q2, %3";
}
}

static const char *
output_1882 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "vsra.s%#16\t%P0, %P2, %3";
}
}

static const char *
output_1883 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "vsra.u%#16\t%P0, %P2, %3";
}
}

static const char *
output_1884 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "vrsra.s%#16\t%P0, %P2, %3";
}
}

static const char *
output_1885 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "vrsra.u%#16\t%P0, %P2, %3";
}
}

static const char *
output_1886 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "vsra.s%#16\t%q0, %q2, %3";
}
}

static const char *
output_1887 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "vsra.u%#16\t%q0, %q2, %3";
}
}

static const char *
output_1888 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "vrsra.s%#16\t%q0, %q2, %3";
}
}

static const char *
output_1889 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "vrsra.u%#16\t%q0, %q2, %3";
}
}

static const char *
output_1890 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "vsra.s%#32\t%P0, %P2, %3";
}
}

static const char *
output_1891 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "vsra.u%#32\t%P0, %P2, %3";
}
}

static const char *
output_1892 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "vrsra.s%#32\t%P0, %P2, %3";
}
}

static const char *
output_1893 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "vrsra.u%#32\t%P0, %P2, %3";
}
}

static const char *
output_1894 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "vsra.s%#32\t%q0, %q2, %3";
}
}

static const char *
output_1895 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "vsra.u%#32\t%q0, %q2, %3";
}
}

static const char *
output_1896 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "vrsra.s%#32\t%q0, %q2, %3";
}
}

static const char *
output_1897 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "vrsra.u%#32\t%q0, %q2, %3";
}
}

static const char *
output_1898 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "vsra.s%#64\t%P0, %P2, %3";
}
}

static const char *
output_1899 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "vsra.u%#64\t%P0, %P2, %3";
}
}

static const char *
output_1900 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "vrsra.s%#64\t%P0, %P2, %3";
}
}

static const char *
output_1901 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "vrsra.u%#64\t%P0, %P2, %3";
}
}

static const char *
output_1902 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "vsra.s%#64\t%q0, %q2, %3";
}
}

static const char *
output_1903 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "vsra.u%#64\t%q0, %q2, %3";
}
}

static const char *
output_1904 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "vrsra.s%#64\t%q0, %q2, %3";
}
}

static const char *
output_1905 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3864 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "vrsra.u%#64\t%q0, %q2, %3";
}
}

static const char *
output_1906 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3878 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "vsri.8\t%P0, %P2, %3";
}
}

static const char *
output_1907 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3878 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "vsri.8\t%q0, %q2, %3";
}
}

static const char *
output_1908 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3878 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "vsri.16\t%P0, %P2, %3";
}
}

static const char *
output_1909 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3878 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "vsri.16\t%q0, %q2, %3";
}
}

static const char *
output_1910 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3878 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "vsri.32\t%P0, %P2, %3";
}
}

static const char *
output_1911 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3878 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "vsri.32\t%q0, %q2, %3";
}
}

static const char *
output_1912 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3878 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "vsri.64\t%P0, %P2, %3";
}
}

static const char *
output_1913 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3878 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "vsri.64\t%q0, %q2, %3";
}
}

static const char *
output_1914 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3892 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V8QImode));
  return "vsli.8\t%P0, %P2, %3";
}
}

static const char *
output_1915 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3892 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V16QImode));
  return "vsli.8\t%q0, %q2, %3";
}
}

static const char *
output_1916 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3892 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V4HImode));
  return "vsli.16\t%P0, %P2, %3";
}
}

static const char *
output_1917 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3892 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V8HImode));
  return "vsli.16\t%q0, %q2, %3";
}
}

static const char *
output_1918 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3892 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V2SImode));
  return "vsli.32\t%P0, %P2, %3";
}
}

static const char *
output_1919 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3892 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V4SImode));
  return "vsli.32\t%q0, %q2, %3";
}
}

static const char *
output_1920 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3892 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (DImode));
  return "vsli.64\t%P0, %P2, %3";
}
}

static const char *
output_1921 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3892 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V2DImode));
  return "vsli.64\t%q0, %q2, %3";
}
}

static const char *
output_1923 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3915 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  rtx ops[4];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2}, %P3", ops);

  return "";
}
}

static const char *
output_1924 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3936 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  rtx ops[5];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2, %P3}, %P4", ops);

  return "";
}
}

static const char *
output_1925 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3958 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  rtx ops[6];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = gen_rtx_REG (V8QImode, tabbase + 6);
  ops[5] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2, %P3, %P4}, %P5", ops);

  return "";
}
}

static const char *
output_1930 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4076 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  rtx ops[4];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2}, %P3", ops);

  return "";
}
}

static const char *
output_1931 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4098 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  rtx ops[5];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2, %P3}, %P4", ops);

  return "";
}
}

static const char *
output_1932 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4121 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  rtx ops[6];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = gen_rtx_REG (V8QImode, tabbase + 6);
  ops[5] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2, %P3, %P4}, %P5", ops);

  return "";
}
}

static const char *
output_1967 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4338 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.8\t%P0, %A1";
  else
    return "vld1.8\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1968 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4338 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.16\t%P0, %A1";
  else
    return "vld1.16\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1969 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4338 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.32\t%P0, %A1";
  else
    return "vld1.32\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1970 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4338 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.32\t%P0, %A1";
  else
    return "vld1.32\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1971 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4338 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (DImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.64\t%P0, %A1";
  else
    return "vld1.64\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1972 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4358 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V16QImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V8QImode, regno);
  if (max == 2)
    return "vld1.8\t%P0, %A1";
  else
    return "vld1.8\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1973 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4358 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V4HImode, regno);
  if (max == 2)
    return "vld1.16\t%P0, %A1";
  else
    return "vld1.16\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1974 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4358 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V2SImode, regno);
  if (max == 2)
    return "vld1.32\t%P0, %A1";
  else
    return "vld1.32\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1975 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4358 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V2SFmode, regno);
  if (max == 2)
    return "vld1.32\t%P0, %A1";
  else
    return "vld1.32\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1976 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4358 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2DImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (DImode, regno);
  if (max == 2)
    return "vld1.64\t%P0, %A1";
  else
    return "vld1.64\t{%P0[%c3]}, %A1";
}
}

static const char *
output_1981 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4400 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  return "vld1.8\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_1982 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4400 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  return "vld1.16\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_1983 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4400 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  return "vld1.32\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_1984 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4400 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  return "vld1.32\t{%e0[], %f0[]}, %A1";
}
}

static const char *
output_1996 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4444 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.8\t{%P1}, %A0";
  else
    return "vst1.8\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1997 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4444 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.16\t{%P1}, %A0";
  else
    return "vst1.16\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1998 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4444 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.32\t{%P1}, %A0";
  else
    return "vst1.32\t{%P1[%c2]}, %A0";
}
}

static const char *
output_1999 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4444 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.32\t{%P1}, %A0";
  else
    return "vst1.32\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2000 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4444 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (DImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.64\t{%P1}, %A0";
  else
    return "vst1.64\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2001 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4464 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V16QImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V8QImode, regno);
  if (max == 2)
    return "vst1.8\t{%P1}, %A0";
  else
    return "vst1.8\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2002 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4464 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V4HImode, regno);
  if (max == 2)
    return "vst1.16\t{%P1}, %A0";
  else
    return "vst1.16\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2003 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4464 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V2SImode, regno);
  if (max == 2)
    return "vst1.32\t{%P1}, %A0";
  else
    return "vst1.32\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2004 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4464 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V2SFmode, regno);
  if (max == 2)
    return "vst1.32\t{%P1}, %A0";
  else
    return "vst1.32\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2005 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4464 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2DImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (DImode, regno);
  if (max == 2)
    return "vst1.64\t{%P1}, %A0";
  else
    return "vst1.64\t{%P1[%c2]}, %A0";
}
}

static const char *
output_2006 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4498 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.8\t%h0, %A1";
}
}

static const char *
output_2007 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4498 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.16\t%h0, %A1";
}
}

static const char *
output_2008 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4498 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.32\t%h0, %A1";
}
}

static const char *
output_2009 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4498 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.32\t%h0, %A1";
}
}

static const char *
output_2010 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4498 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld2.64\t%h0, %A1";
}
}

static const char *
output_2015 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4534 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.8\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_2016 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4534 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.16\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_2017 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4534 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_2018 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4534 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_2019 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4559 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.16\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_2020 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4559 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_2021 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4559 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, %A2", ops);
  return "";
}
}

static const char *
output_2022 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4587 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    return "vld2.8\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.8\t%h0, %A1";
}
}

static const char *
output_2023 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4587 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    return "vld2.16\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.16\t%h0, %A1";
}
}

static const char *
output_2024 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4587 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    return "vld2.32\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_2025 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4587 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    return "vld2.32\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_2026 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4587 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    return "vld2.64\t{%e0[], %f0[]}, %A1";
  else
    return "vld1.64\t%h0, %A1";
}
}

static const char *
output_2027 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4612 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.8\t%h1, %A0";
}
}

static const char *
output_2028 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4612 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.16\t%h1, %A0";
}
}

static const char *
output_2029 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4612 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.32\t%h1, %A0";
}
}

static const char *
output_2030 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4612 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.32\t%h1, %A0";
}
}

static const char *
output_2031 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4612 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst2.64\t%h1, %A0";
}
}

static const char *
output_2036 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4649 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.8\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_2037 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4649 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.16\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_2038 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4649 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_2039 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4649 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_2040 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4674 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.16\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_2041 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4674 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_2042 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4674 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, %A0", ops);
  return "";
}
}

static const char *
output_2043 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4709 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.8\t%h0, %A1";
}
}

static const char *
output_2044 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4709 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.16\t%h0, %A1";
}
}

static const char *
output_2045 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4709 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.32\t%h0, %A1";
}
}

static const char *
output_2046 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4709 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.32\t%h0, %A1";
}
}

static const char *
output_2047 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4709 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld3.64\t%h0, %A1";
}
}

static const char *
output_2048 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4752 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.8\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2049 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4752 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.16\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2050 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4752 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2051 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4752 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2052 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4772 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.8\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2053 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4772 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.16\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2054 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4772 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2055 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4772 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[1];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, %A3", ops);
  return "";
}
}

static const char *
output_2056 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4793 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.8\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_2057 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4793 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.16\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_2058 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4793 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_2059 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4793 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_2060 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4820 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.16\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_2061 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4820 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_2062 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4820 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, %3",
                   ops);
  return "";
}
}

static const char *
output_2063 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4850 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.8\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.8\t%h0, %A1";
}
}

static const char *
output_2064 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4850 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.16\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.16\t%h0, %A1";
}
}

static const char *
output_2065 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4850 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.32\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_2066 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4850 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.32\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_2067 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4850 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.64\t{%P0[], %P1[], %P2[]}, %3", ops);
      return "";
    }
  else
    return "vld1.64\t%h0, %A1";
}
}

static const char *
output_2068 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4883 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.8\t%h1, %A0";
}
}

static const char *
output_2069 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4883 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.16\t%h1, %A0";
}
}

static const char *
output_2070 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4883 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.32\t%h1, %A0";
}
}

static const char *
output_2071 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4883 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.32\t%h1, %A0";
}
}

static const char *
output_2072 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4883 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst3.64\t%h1, %A0";
}
}

static const char *
output_2073 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.8\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2074 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.16\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2075 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2076 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4925 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2077 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4944 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.8\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2078 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4944 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.16\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2079 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4944 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2080 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4944 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, %A0", ops);
  return "";
}
}

static const char *
output_2081 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4965 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.8\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_2082 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4965 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.16\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_2083 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4965 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_2084 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4965 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_2085 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4992 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.16\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_2086 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4992 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_2087 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4992 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, %0",
                   ops);
  return "";
}
}

static const char *
output_2088 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5029 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.8\t%h0, %A1";
}
}

static const char *
output_2089 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5029 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.16\t%h0, %A1";
}
}

static const char *
output_2090 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5029 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.32\t%h0, %A1";
}
}

static const char *
output_2091 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5029 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.32\t%h0, %A1";
}
}

static const char *
output_2092 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5029 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, %A1";
  else
    return "vld4.64\t%h0, %A1";
}
}

static const char *
output_2093 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5072 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.8\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2094 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5072 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.16\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2095 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5072 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2096 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5072 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2097 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5093 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.8\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2098 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5093 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.16\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2099 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5093 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2100 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5093 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[1];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, %A4", ops);
  return "";
}
}

static const char *
output_2101 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.8\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_2102 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.16\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_2103 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_2104 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5115 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_2105 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5143 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.16\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_2106 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5143 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_2107 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5143 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, %A4",
                   ops);
  return "";
}
}

static const char *
output_2108 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5174 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.8\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.8\t%h0, %A1";
}
}

static const char *
output_2109 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5174 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.16\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.16\t%h0, %A1";
}
}

static const char *
output_2110 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5174 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.32\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_2111 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5174 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.32\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.32\t%h0, %A1";
}
}

static const char *
output_2112 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5174 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.64\t{%P0[], %P1[], %P2[], %P3[]}, %A4",
                       ops);
      return "";
    }
  else
    return "vld1.64\t%h0, %A1";
}
}

static const char *
output_2113 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5210 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.8\t%h1, %A0";
}
}

static const char *
output_2114 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5210 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.16\t%h1, %A0";
}
}

static const char *
output_2115 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5210 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.32\t%h1, %A0";
}
}

static const char *
output_2116 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5210 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.32\t%h1, %A0";
}
}

static const char *
output_2117 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5210 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, %A0";
  else
    return "vst4.64\t%h1, %A0";
}
}

static const char *
output_2118 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5253 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.8\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2119 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5253 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.16\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2120 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5253 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2121 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5253 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2122 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5273 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.8\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2123 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5273 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.16\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2124 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5273 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2125 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5273 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, %A0", ops);
  return "";
}
}

static const char *
output_2126 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5295 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.8\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_2127 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5295 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.16\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_2128 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5295 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_2129 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5295 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_2130 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5323 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.16\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_2131 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5323 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_2132 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5323 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, %A0",
                   ops);
  return "";
}
}

static const char *
output_2157 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5479 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  return "vshll.s8 %q0, %P1, %2";
}
}

static const char *
output_2158 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5479 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  return "vshll.u8 %q0, %P1, %2";
}
}

static const char *
output_2159 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5479 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  return "vshll.s16 %q0, %P1, %2";
}
}

static const char *
output_2160 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5479 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  return "vshll.u16 %q0, %P1, %2";
}
}

static const char *
output_2161 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5479 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  return "vshll.s32 %q0, %P1, %2";
}
}

static const char *
output_2162 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5479 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/neon.md"
{
  return "vshll.u32 %q0, %P1, %2";
}
}

static const char *
output_2214 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 50 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    if (TARGET_HAVE_DMB)
      {
	/* Note we issue a system level barrier. We should consider issuing
	   a inner shareabilty zone barrier here instead, ie. "DMB ISH".  */
	/* ??? Differentiate based on SEQ_CST vs less strict?  */
	return "dmb\tsy";
      }

    if (TARGET_HAVE_DMB_MCR)
      return "mcr\tp15, 0, r0, c7, c10, 5";

    gcc_unreachable ();
  }
}

static const char *
output_2215 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 75 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    enum memmodel model = (enum memmodel) INTVAL (operands[2]);
    if (model == MEMMODEL_RELAXED
        || model == MEMMODEL_CONSUME
        || model == MEMMODEL_RELEASE)
      return "ldrb\t%0, %1";
    else
      return "ldab\t%0, %1";
  }
}

static const char *
output_2216 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 75 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    enum memmodel model = (enum memmodel) INTVAL (operands[2]);
    if (model == MEMMODEL_RELAXED
        || model == MEMMODEL_CONSUME
        || model == MEMMODEL_RELEASE)
      return "ldrh\t%0, %1";
    else
      return "ldah\t%0, %1";
  }
}

static const char *
output_2217 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 75 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    enum memmodel model = (enum memmodel) INTVAL (operands[2]);
    if (model == MEMMODEL_RELAXED
        || model == MEMMODEL_CONSUME
        || model == MEMMODEL_RELEASE)
      return "ldr\t%0, %1";
    else
      return "lda\t%0, %1";
  }
}

static const char *
output_2218 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 93 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    enum memmodel model = (enum memmodel) INTVAL (operands[2]);
    if (model == MEMMODEL_RELAXED
        || model == MEMMODEL_CONSUME
        || model == MEMMODEL_ACQUIRE)
      return "strb\t%1, %0";
    else
      return "stlb\t%1, %0";
  }
}

static const char *
output_2219 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 93 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    enum memmodel model = (enum memmodel) INTVAL (operands[2]);
    if (model == MEMMODEL_RELAXED
        || model == MEMMODEL_CONSUME
        || model == MEMMODEL_ACQUIRE)
      return "strh\t%1, %0";
    else
      return "stlh\t%1, %0";
  }
}

static const char *
output_2220 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 93 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    enum memmodel model = (enum memmodel) INTVAL (operands[2]);
    if (model == MEMMODEL_RELAXED
        || model == MEMMODEL_CONSUME
        || model == MEMMODEL_ACQUIRE)
      return "str\t%1, %0";
    else
      return "stl\t%1, %0";
  }
}

static const char *
output_2310 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    if (QImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexb%?\t%0, %2, %C1";
  }
}

static const char *
output_2311 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    if (HImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexh%?\t%0, %2, %C1";
  }
}

static const char *
output_2312 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    if (SImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strex%?\t%0, %2, %C1";
  }
}

static const char *
output_2313 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    if (DImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexd%?\t%0, %2, %C1";
  }
}

static const char *
output_2314 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 452 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    rtx value = operands[2];
    /* See comment in arm_store_exclusive<mode> above.  */
    gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
    operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
    return "stlexd%?\t%0, %2, %3, %C1";
  }
}

static const char *
output_2372 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 215 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-fixed.md"
{
  /* s16.15 * s16.15 -> s32.30.  */
  output_asm_insn ("smull\t%Q3, %R3, %1, %2", operands);

  if (TARGET_ARM)
    output_asm_insn ("msr\tAPSR_nzcvq, #0", operands);
  else
    {
      output_asm_insn ("mov\t%4, #0", operands);
      output_asm_insn ("msr\tAPSR_nzcvq, %4", operands);
    }

  /* We have:
      31  high word  0     31  low word  0

    [ S i i .... i i i ] [ i f f f ... f f ]
                        |
			v
	     [ S i ... i f ... f f ]

    Need 16 integral bits, so saturate at 15th bit of high word.  */

  output_asm_insn ("ssat\t%R3, #15, %R3", operands);
  output_asm_insn ("mrs\t%4, APSR", operands);
  output_asm_insn ("tst\t%4, #1<<27", operands);
  if (arm_restrict_it)
    {
      output_asm_insn ("mvn\t%4, %R3, asr #32", operands);
      output_asm_insn ("it\tne", operands);
      output_asm_insn ("movne\t%Q3, %4", operands);
    }
  else
    {
      if (TARGET_THUMB2)
        output_asm_insn ("it\tne", operands);
      output_asm_insn ("mvnne\t%Q3, %R3, asr #32", operands);
    }
  output_asm_insn ("mov\t%0, %Q3, lsr #15", operands);
  output_asm_insn ("orr\t%0, %0, %R3, asl #17", operands);
  return "";
}
}

static const char *
output_2373 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 275 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-fixed.md"
{
  /* 16.16 * 16.16 -> 32.32.  */
  output_asm_insn ("umull\t%Q3, %R3, %1, %2", operands);

  if (TARGET_ARM)
    output_asm_insn ("msr\tAPSR_nzcvq, #0", operands);
  else
    {
      output_asm_insn ("mov\t%4, #0", operands);
      output_asm_insn ("msr\tAPSR_nzcvq, %4", operands);
    }

  /* We have:
      31  high word  0     31  low word  0

    [ i i i .... i i i ] [ f f f f ... f f ]
                        |
			v
	     [ i i ... i f ... f f ]

    Need 16 integral bits, so saturate at 16th bit of high word.  */

  output_asm_insn ("usat\t%R3, #16, %R3", operands);
  output_asm_insn ("mrs\t%4, APSR", operands);
  output_asm_insn ("tst\t%4, #1<<27", operands);
  if (arm_restrict_it)
    {
      output_asm_insn ("sbfx\t%4, %R3, #15, #1", operands);
      output_asm_insn ("it\tne", operands);
      output_asm_insn ("movne\t%Q3, %4", operands);
    }
  else
    {
      if (TARGET_THUMB2)
        output_asm_insn ("it\tne", operands);
      output_asm_insn ("sbfxne\t%Q3, %R3, #15, #1", operands);
    }
  output_asm_insn ("lsr\t%0, %Q3, #16", operands);
  output_asm_insn ("orr\t%0, %0, %R3, asl #16", operands);
  return "";
}
}

static const char * const output_3466[] = {
  "add%?\t%0, %0, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %2, %1",
  "addw%?\t%0, %1, %2",
  "addw%?\t%0, %1, %2",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "subw%?\t%0, %1, #%n2",
  "subw%?\t%0, %1, #%n2",
  "#",
};

static const char * const output_3468[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_3470[] = {
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_3471[] = {
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
  "cmn%?\t%0, %1",
};

static const char * const output_3472[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_3473[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_3474[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_3475[] = {
  "adc%?\t%0, %1, %2",
  "adc%?\t%0, %1, %2",
  "sbc%?\t%0, %1, #%B2",
};

static const char * const output_3478[] = {
  "sbc%?\t%0, %1, %2",
  "rsc%?\t%0, %2, %1",
};

static const char * const output_3481[] = {
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %2",
  "sub%?\t%0, %1, %2",
  "rsb%?\t%0, %2, %1",
  "rsb%?\t%0, %2, %1",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "sub%?\t%0, %1, %2",
  "#",
};

static const char * const output_3510[] = {
  "and%?\t%0, %1, %2",
  "and%?\t%0, %1, %2",
  "bic%?\t%0, %1, #%B2",
  "and%?\t%0, %1, %2",
  "#",
};

static const char *
output_3512 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2218 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  operands[1] = GEN_INT (((1 << INTVAL (operands[1])) - 1)
			 << INTVAL (operands[2]));
  output_asm_insn ("tst%?\t%0, %1", operands);
  return "";
  
}

static const char * const output_3517[] = {
  "bic%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_3525[] = {
  "orr%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_3527[] = {
  "orr%?\t%0, %1, %2",
  "orr%?\t%0, %1, %2",
  "orn%?\t%0, %1, #%B2",
  "orr%?\t%0, %1, %2",
  "#",
};

static const char * const output_3529[] = {
  "eor%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_3531[] = {
  "eor%?\t%0, %1, %2",
  "eor%?\t%0, %1, %2",
  "eor%?\t%0, %1, %2",
  "#",
};

static const char *
output_3538 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3579 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_3539 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3579 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_3540 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3579 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_3541 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3579 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %3";
  else
    return "usat%?\t%0, %1, %3";
}
}

static const char *
output_3542 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3606 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_3543 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3606 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_3544 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3606 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[1], operands[2],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_3545 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3606 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
{
  int mask;
  bool signed_sat;
  if (!arm_sat_operator_match (operands[2], operands[1],
                               &mask, &signed_sat))
    gcc_unreachable ();

  operands[1] = GEN_INT (mask);
  if (signed_sat)
    return "ssat%?\t%0, %1, %4%S3";
  else
    return "usat%?\t%0, %1, %4%S3";
}
}

static const char *
output_3546 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3894 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 0);
}

static const char * const output_3566[] = {
  "vmvn\t%P0, %P1",
  "#",
  "#",
  "vmvn\t%P0, %P1",
};

static const char * const output_3575[] = {
  "#",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_3576[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_3578[] = {
  "#",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_3579[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_3582[] = {
  "#",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_3583[] = {
  "sxth%?\t%0, %1",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_3585[] = {
  "#",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_3586[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_3589[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
};

static const char *
output_3590 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5875 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "add%?\t%0, %|pc, %1";
  
}

static const char *
output_3591 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5891 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "ldr%?\t%0, [%|pc, %1]\t\t@ tls_load_dot_plus_eight";
  
}

static const char * const output_3592[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "movw%?\t%0, %L1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_3593[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
};

static const char * const output_3594[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "ldr%(b%)\t%0, %1",
  "str%(b%)\t%1, %0",
  "ldr%(b%)\t%0, %1",
  "str%(b%)\t%1, %0",
};

static const char *
output_3595 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6514 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:	/* ARM register from memory */
      return "ldr%(h%)\t%0, %1\t%@ __fp16";
    case 1:	/* memory from ARM register */
      return "str%(h%)\t%1, %0\t%@ __fp16";
    case 2:	/* ARM register from ARM register */
      return "mov%?\t%0, %1\t%@ __fp16";
    case 3:	/* ARM register from constant */
      {
	REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

	REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw%?\t%0, %1", ops);
	else
	  output_asm_insn ("mov%?\t%0, %2\n\torr%?\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char * const output_3596[] = {
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char * const output_3597[] = {
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmp%?\t%0, %1",
  "cmn%?\t%0, #%n1",
};

static const char *
output_3599 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7565 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return "b%?\t%l0";
  }
  
}

static const char *
output_3600 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7907 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, true, false, false);
  }
}

static const char *
output_3601 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7968 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, true, false, true);
  }
}

static const char *
output_3615 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10014 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    rtx ldm[3];
    rtx arith[4];
    rtx base_reg;
    HOST_WIDE_INT val1 = 0, val2 = 0;

    if (REGNO (operands[0]) > REGNO (operands[4]))
      {
	ldm[1] = operands[4];
	ldm[2] = operands[0];
      }
    else
      {
	ldm[1] = operands[0];
	ldm[2] = operands[4];
      }

    base_reg = XEXP (operands[2], 0);

    if (!REG_P (base_reg))
      {
	val1 = INTVAL (XEXP (base_reg, 1));
	base_reg = XEXP (base_reg, 0);
      }

    if (!REG_P (XEXP (operands[3], 0)))
      val2 = INTVAL (XEXP (XEXP (operands[3], 0), 1));

    arith[0] = operands[0];
    arith[3] = operands[1];

    if (val1 < val2)
      {
	arith[1] = ldm[1];
	arith[2] = ldm[2];
      }
    else
      {
	arith[1] = ldm[2];
	arith[2] = ldm[1];
      }

    ldm[0] = base_reg;
    if (val1 !=0 && val2 != 0)
      {
	rtx ops[3];

	if (val1 == 4 || val2 == 4)
	  /* Other val must be 8, since we know they are adjacent and neither
	     is zero.  */
	  output_asm_insn ("ldm%(ib%)\t%0, {%1, %2}", ldm);
	else if (const_ok_for_arm (val1) || const_ok_for_arm (-val1))
	  {
	    ldm[0] = ops[0] = operands[4];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_add_immediate (ops);
	    if (val1 < val2)
	      output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	    else
	      output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	  }
	else
	  {
	    /* Offset is out of range for a single add, so use two ldr.  */
	    ops[0] = ldm[1];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	    ops[0] = ldm[2];
	    ops[2] = GEN_INT (val2);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	  }
      }
    else if (val1 != 0)
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
      }
    else
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
      }
    output_asm_insn ("%I3%?\t%0, %1, %2", arith);
    return "";
  }
}

static const char *
output_3616 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10484 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/false,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/true);
    return "";
  }
  
}

static const char *
output_3617 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10513 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/true,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/true);
    return "";
  }
  
}

static const char *
output_3618 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10533 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/true,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/false);
    return "";
  }
  
}

static const char * const output_3624[] = {
  "rev\t%0, %1",
  "rev%?\t%0, %1",
  "rev%?\t%0, %1",
};

static const char *
output_3679 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11209 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"

  {
    arm_output_multireg_pop (operands, /*return_pc=*/false,
                                       /*cond=*/const_true_rtx,
                                       /*reverse=*/false,
                                       /*update=*/false);
    return "";
  }
  
}

static const char * const output_3683[] = {
  "wor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_3684[] = {
  "wxor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_3685[] = {
  "wand%?\t%0, %1, %2",
  "#",
  "#",
};

static const char *
output_3687 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_3688 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_3689 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 239 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands, true, NULL);
   }
}

static const char *
output_3732 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 686 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_3733 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 703 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_3734 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 720 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

   {
     return arm_output_iwmmxt_tinsr (operands);
   }
   
}

static const char *
output_3786 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1287 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrorhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorh", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3787 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1287 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrorwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3788 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1287 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wrordg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrord", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3789 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1308 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrahg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrah", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3790 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1308 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrawg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsraw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3791 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1308 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsradg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrad", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3792 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1329 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrlhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3793 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1329 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrlwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3794 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1329 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsrldg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3795 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsllhg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3796 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wsllwg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3797 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1350 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch  (which_alternative)
    {
    case 0:
      return "wslldg%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wslld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3798 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1371 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrorh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorh", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3799 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1371 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrorw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrorw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3800 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1371 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wrord%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wrord", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3801 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1392 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrah%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrah", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3802 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1392 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsraw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsraw", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3803 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1392 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrad%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrad", operands, true);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3804 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1413 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrlh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3805 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1413 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrlw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrlw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3806 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1413 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsrld%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsrld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3807 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1434 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsllh%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllh", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3808 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1434 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wsllw%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wsllw", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3809 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1434 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md"

  switch (which_alternative)
    {
    case 0:
      return "wslld%?\t%0, %1, %2";
    case 1:
      return arm_output_iwmmxt_shift_immediate ("wslld", operands, false);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3900 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 30 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
      return "ldr%?\t%0, %1";
    case 5:
      return "str%?\t%1, %0";
    case 6:
      return "vmov%?\t%0, %1\t%@ int";
    case 7:
      return "vmov%?\t%0, %1\t%@ int";
    case 8:
      return "vmov%?.f32\t%0, %1\t%@ int";
    case 9: case 10:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3901 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 72 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "mov%?\t%0, %1";
    case 3:
      return "mvn%?\t%0, #%B1";
    case 4:
      return "movw%?\t%0, %1";
    case 5:
    case 6:
      return "ldr%?\t%0, %1";
    case 7:
    case 8:
      return "str%?\t%1, %0";
    case 9:
      return "vmov%?\t%0, %1\t%@ int";
    case 10:
      return "vmov%?\t%0, %1\t%@ int";
    case 11:
      return "vmov%?.f32\t%0, %1\t%@ int";
    case 12: case 13:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3902 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 171 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: 
    case 1:
    case 2:
    case 3:
      return "#";
    case 4:
    case 5:
    case 6:
      return output_move_double (operands, true, NULL);
    case 7:
      return "vmov%?\t%P0, %Q1, %R1\t%@ int";
    case 8:
      return "vmov%?\t%Q0, %R0, %P1\t%@ int";
    case 9:
      return "vmov%?.f64\t%P0, %P1\t%@ int";
    case 10: case 11:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3903 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 329 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "vmov%?\t%0, %1";
    case 1:
      return "vmov%?\t%0, %1";
    case 2:
      return "vmov%?.f32\t%0, %1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "vmov%?.f32\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3904 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 365 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "vmov%?\t%0, %1";
    case 1:
      return "vmov%?\t%0, %1";
    case 2:
      return "vmov%?.f32\t%0, %1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "vmov%?.f32\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_3905 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 404 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "vmov%?\t%P0, %Q1, %R1";
      case 1:
	return "vmov%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
        return "vmov%?.f64\t%P0, %1";
      case 3: case 4:
	return output_move_vfp (operands);
      case 5: case 6:
	return output_move_double (operands, true, NULL);
      case 7:
	if (TARGET_VFP_SINGLE)
	  return "vmov%?.f32\t%0, %1\n\tvmov%?.f32\t%p0, %p1";
	else
	  return "vmov%?.f64\t%P0, %P1";
      case 8:
        return "#";
      default:
	gcc_unreachable ();
      }
    }
  
}

static const char * const output_3908[] = {
  "vneg%?.f32\t%0, %1",
  "eor%?\t%0, %1, #-2147483648",
};

static const char * const output_3909[] = {
  "vneg%?.f64\t%P0, %P1",
  "#",
  "#",
};

static const char * const output_3951[] = {
  "vcmp%?.f32\t%0, %1",
  "vcmp%?.f32\t%0, #0",
};

static const char * const output_3952[] = {
  "vcmpe%?.f32\t%0, %1",
  "vcmpe%?.f32\t%0, #0",
};

static const char * const output_3953[] = {
  "vcmp%?.f64\t%P0, %P1",
  "vcmp%?.f64\t%P0, #0",
};

static const char * const output_3954[] = {
  "vcmpe%?.f64\t%P0, %P1",
  "vcmpe%?.f64\t%P0, #0",
};

static const char * const output_3957[] = {
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
  "vmov%?.f64\t%P0, %1, %1\n\tvcvt%?.f64.u32\t%P0, %P0, %v2",
};

static const char * const output_3958[] = {
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
  "vmov%?.f32\t%0, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
  "vmov%?.f64\t%P0, %1, %1\n\tvcvt%?.f64.s32\t%P0, %P0, %v2",
};

static const char * const output_3972[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
  "str%?\t%1, %0",
};

static const char * const output_3973[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "mov%?\t%0, %1\t%@ movhi",
  "movw%?\t%0, %L1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_3974[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_3975[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_3976[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char *
output_3978 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1143 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb2.md"
 return arm_output_shift(operands, 2);
}

static const char *
output_3982 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1169 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (CONST_INT_P (operands[2]))
      val = INTVAL(operands[2]);
    else
      val = 0;

    /* We prefer eg. subs rn, rn, #1 over adds rn, rn, #0xffffffff.  */
    if (val < 0 && const_ok_for_arm(ARM_SIGN_EXTEND (-val)))
      return "sub%!\t%0, %1, #%n2";
    else
      return "add%!\t%0, %1, %2";
  
}

static const char *
output_4006 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    if (QImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexb%?\t%0, %2, %C1";
  }
}

static const char *
output_4007 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    if (HImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexh%?\t%0, %2, %C1";
  }
}

static const char *
output_4008 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    if (SImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strex%?\t%0, %2, %C1";
  }
}

static const char *
output_4009 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 427 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    if (DImode == DImode)
      {
	rtx value = operands[2];
	/* The restrictions on target registers in ARM mode are that the two
	   registers are consecutive and the first one is even; Thumb is
	   actually more flexible, but DI should give us this anyway.
	   Note that the 1st register always gets the lowest word in memory.  */
	gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
	operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
	return "strexd%?\t%0, %2, %3, %C1";
      }
    return "strexd%?\t%0, %2, %C1";
  }
}

static const char *
output_4010 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 452 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/sync.md"
{
    rtx value = operands[2];
    /* See comment in arm_store_exclusive<mode> above.  */
    gcc_assert ((REGNO (value) & 1) == 0 || TARGET_THUMB2);
    operands[3] = gen_rtx_REG (SImode, REGNO (value) + 1);
    return "stlexd%?\t%0, %2, %3, %C1";
  }
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,0,r,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_adddi_operand,
    "r,0,r,Dd,Dd",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk,l,l,l,r,k,r,r,k,r,k,k,r,k,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,l,0,l,rk,k,r,rk,k,rk,k,r,rk,k,rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rk,l,Py,Pd,rI,rI,k,Pj,Pj,L,L,L,PJ,PJ,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "I,L,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_addimm_operand,
    "L,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_addimm_operand,
    "I,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Pv,l,I,L,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "l,rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "r,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,l,l,r,r,r,rk,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,0,l,Pz,rI,r,r,k,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,Py,Pd,l,r,I,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "r,r,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r,0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%0,r,0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "?r,r,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,&r,&r,&r,&r,?w,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w,0,0,r,0,r,w,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_anddi_operand_neon,
    "w,DL,r,r,De,De,w,DL",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,l,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,0,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,l,K,r,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "I,K,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,r,X",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "rIK",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "rIK",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=w,w,&r,&r,&r,&r,?w,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w,0,0,r,0,r,w,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_iordi_operand_neon,
    "w,Dl,r,r,Df,Df,w,Dl",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,&r,&r,&r,&r,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w,0,r,0,r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_xordi_operand,
    "w,r,r,Dg,Dg,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,l,r,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    minmax_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    minmax_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=Ts,Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "Ts,Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "TsI,TsI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    minmax_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    sat_shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,M,M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,Uh",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=Uw,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Uw,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "o,o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=o,o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,&r,&r,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,0,rUq,rm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,Uh",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,Uh",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_extendqisi_mem_op,
    "Uq",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,Uq",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,q,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "rDa,Db,Dc,mi,q",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "i",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "mX,mX,mX",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "mX",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "mX",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rIk,K,n,r,mi",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,rk,K",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,l,r,l,Uu,r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,rk,I,Py,K,Uu,l,Uh,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,r,r",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "m,r,r,F",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,mE,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_soft_df_operand,
    "=r,r,r,q,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    soft_df_operand,
    "rDa,Db,Dc,mF,q",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Py,r,r,I,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r,M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_di_operand,
    "rDi",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "l,r,r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_di_operand,
    "Py,r,Di,rDi",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_vsel_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_vsel_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r,r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,0,rI,K,rI,rI,K,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "rI,K,0,0,rI,K,rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "Cs,US",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    CC_NOOVmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk,rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    power_of_two_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    power_of_two_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk,rk,rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_nomul_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk,r,rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_nomul_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r,M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r,M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=Ts,Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rI,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,rI,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l,l,l,r,r,r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPy,lPy,lPy,rI,L,rI,L,rI,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r,r,l,l,r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPy,rI,L,lPy,lPy,rI,rI,L,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&Ts,&Ts,&Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,0,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rPy,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rPy,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,rI,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,0,?rI,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rI,L,rI,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,?rIK",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,?rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,?rIK",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,?rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM,rM,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    push_mult_memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    multi_register_push,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_I_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_return,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_I_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_return,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_fp,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_I_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vfp_hard_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    0,
    "X",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n,n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n,n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ldrd_strd_offset_operand,
    "Do",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ldrd_strd_offset_operand,
    "Do",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,?&r,?&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%y,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,m,y,y,yr,y,yrUy,*w,r,*w,*w,*Uv",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "rDa,Db,Dc,mi,r,y,yr,y,yrUy,y,r,*w,*w,*Uvi,*w",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m,z,r,?z,?Uy,*t,r,*t,*t,*Uv",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk,r,z,Uy,z,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,z,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rI,K,mi,r,r,z",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,l,r,r,l,*hk,m,*m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,K,j,mi,*mi,l,*hk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,q,q,m,w,r,w,w,Uv",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "r,rDa,Db,Dc,mi,mi,q,r,w,w,Uvi,w",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,r,r,m,w,!r,w,w,Uv",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "r,rDa,Db,Dc,mi,mi,r,r,w,w,Uvi,w",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=t,Um,r,m,t,r,t,r,r",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Um,t,m,r,t,r,r,t,F",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,t,r,t,r,r",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "m,r,t,r,r,t,F",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=t,?r,t,t,Uv,r,m,t,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "?r,t,Dv,UvE,t,mE,r,t,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_soft_df_operand,
    "=w,?r,w,w,Uv,r,m,w,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    soft_df_operand,
    "?r,w,Dy,UvF,w,mF,r,w,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=t,t,t,t,t,t,?r,?r,?r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,t,t,0,?r,?r,0,t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,0,t,?r,0,?r,t,0,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w,w,w,w,?r,?r,?r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w,0,?r,?r,0,w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w,?r,0,?r,w,0,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t,?r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?r,?r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "tG",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "wG",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "t,G",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "w,G",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two_reciprocal,
    "Dt",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=x,x,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two_reciprocal,
    "Dt,Dt,Dt",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two,
    "Dp",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    vfp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    multi_register_push,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l,l,*rk,*hk,l,k,l,l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,l,*0,*0,k,k,0,l,k",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "I,J,lL,*hk,*rk,M,O,Pa,Pb,Pc",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "lPd",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&l,&l,&l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%l,*h,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l,l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "N,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "l,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "l,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "l,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=l,l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "l,V,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,l,l,>,l,m,*r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,I,J,>,l,mi,l,*r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,l,l,l,>,l,m,*l*h*k",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,I,J,K,>,l,mi,l,*l*h*k",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,l*r,*h,l",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,m,l,k*h,*r,I",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,l*r,*h,l",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,m,l,k*h,*r,I",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,*r,*h",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,mF,l,*h,*r",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,>,l,m,*r,*h",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,>,l,mF,l,*h,*r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,>,l,m,*r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "l,>,l,mF,l,*r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l,l*h",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "lI*h,*r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l,l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmpneg_operand,
    "L,J",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,*?h,*?m,*?m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,l,&l,&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "l,l,1,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,l,*!h,*?h,*?m,*?m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,X,l,l,&l,&l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%0,l,*l,1,1,1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "IJ,lL,*l,lIJ,lIJ,lIJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,X,l,l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "%l,l,l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "J,l,L,IJ",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=X,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,*h",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "lI*h,*r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "lI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l*r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l*r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=r,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "r,Py,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "?r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,l,r,r,l,*hk,m,*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,K,j,mi,*mi,l,*hk",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=l,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,l,X,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0,1,0,1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,l,r,m,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,n,r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&kr",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r,r,r,r,r,r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,lPy,0,0,rI,K,rI,rI,K,K,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "lPy,0,rI,K,0,0,rI,K,rI,K,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator_strict_it,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=Ts,Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "=Ts,Ts,Ts",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "0,TsI,?TsI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "TsI,0,TsI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb_16bit_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "0,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_reg_or_int_operand,
    "l,M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    low_register_operand,
    "=l",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_reg_or_int_operand,
    "lPt,Ps",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "lPt,Ps,rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Pv,l,IL,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,?r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "=Um",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_permissive_struct_operand,
    "Um",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Um,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?&r,?&r,?w,?&r,?&r,?&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w,0,0,w,r,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_adddi_operand,
    "w,r,0,w,r,Dd,Dd",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?&r,?&r,?&r,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r,0,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,r,0,0,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "w,Dl",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?&r,?&r,?&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,r,r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?&r,?&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w,w,r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,&w,X,X",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_lshift_or_reg_neon,
    "w,Dn",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_for_neon_rshift_operand,
    "Dn",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Um,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "i,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,?&r,?r,?w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0w,w,0r,r,0w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "rUm,i,r,i,rUm,i",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,X,?&r,X,X,X",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,?&r,X,X,X",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&w,X,X,X,&w,X",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,?&r,?r,?w,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0w,w,0r,r,0w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "r,i,r,i,r,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2r,X,&r,X,2r,X",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,&r,X,X,X",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&w,X,X,X,&w,X",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_zero_operand,
    "w,Dz",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    zero_operand,
    "Dz",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,w,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w,0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "2",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "=Um",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "0",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "=Um",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_low,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vect_par_constant_high,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    const_neon_scalar_shift_amount_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    const_neon_scalar_shift_amount_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    const_neon_scalar_shift_amount_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    BLKmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_sync_memory_operand,
    "Q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_sync_memory_operand,
    "Q",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_sync_memory_operand,
    "Q",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Q",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Q",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    cmpdi_operand,
    "rDi",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=&r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "+Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    sat_shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_adddi_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    logical_binary_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    logical_binary_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_inv_logic_op2,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_anddi_operand_neon,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_logic_op2,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_iordi_operand_neon,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_xordi_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    logical_binary_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    logical_binary_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    minmax_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    subreg_lowpart_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_general_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_reload_memory_operand,
    "=o",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reload_memory_operand,
    "o",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_general_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_reload_memory_operand,
    "=o",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_float_compare_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_float_compare_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    cmpdi_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_di_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_float_compare_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_float_compare_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    cmpdi_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    expandable_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_cond_move_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_cond_move_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    commutative_binary_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_general_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_general_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    commutative_binary_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    lt_ge_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb1_cmp_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    shiftable_operator_strict_it,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    CCmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    cc_register,
    "",
    CC_NOOVmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "l",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    equality_operator,
    "",
    CC_NOOVmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_perm_struct_or_reg_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_rshift_or_reg_neon,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    neon_struct_operand,
    "",
    EImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    EImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    CImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    CImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    neon_struct_operand,
    "",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    XImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    cmpdi_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    s_register_operand,
    "",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk,l,l,l,r,k,r,r,k,r,k,k,r,k,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,l,0,l,rk,k,r,rk,k,rk,k,r,rk,k,rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rk,l,Py,Pd,rI,rI,k,Pj,Pj,L,L,L,PJ,PJ,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "I,L,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Pv,l,I,L,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_not_operand,
    "0,rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "l,rI,K",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "r,I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,l,l,r,r,r,rk,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,0,l,Pz,rI,r,r,k,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,Py,Pd,l,r,I,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r,0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,l,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,0,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,l,K,r,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%r,0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "I,l,r,?n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "%0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "rI,rI,rI",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    sat_shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,l,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_int_operand,
    "l,M,M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,rM",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,Uh",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Uw,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Uw,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=Uw,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "o,o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=o,o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "l,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_M_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,&r,&r,?w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,0,rUq,rm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,0,rm,rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,r,?r,?r,w",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,Uh",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,Uh",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_extendqisi_mem_op,
    "Uq",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,Uq",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "i",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rIk,K,n,r,mi",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_rhs_operand,
    "I,rk,K",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,l,r,l,Uu,r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,rk,I,Py,K,Uu,l,Uh,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,m,r,r",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "m,r,r,F",
    HFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,mE,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r,r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_add_operand,
    "Py,r,r,I,L",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk,rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    power_of_two_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    power_of_two_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk,rk,rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_nomul_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk,r,rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_nomul_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_amount_operand,
    "M,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_I_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_return,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_I_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    pop_multiple_return,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ldrd_strd_offset_operand,
    "Do",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ldrd_strd_offset_operand,
    "Do",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_hard_general_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "+&rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,?&r,?&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%y,0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "z,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    imm_or_reg_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,l,r,r,l,*hk,m,*m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,K,j,mi,*mi,l,*hk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,r,r,m,w,!r,w,w,Uv",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    di_operand,
    "r,rDa,Db,Dc,mi,mi,r,r,w,w,Uvi,w",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=t,?r,t,t,Uv,r,m,t,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "?r,t,Dv,UvE,t,mE,r,t,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_soft_df_operand,
    "=w,?r,w,w,Uv,r,m,w,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    soft_df_operand,
    "?r,w,Dy,UvF,w,mF,r,w,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t,?r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w,?r,?r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,0,r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    HFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    HFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "t,t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "t,G",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "w,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vfp_compare_operand,
    "w,G",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two_reciprocal,
    "Dt",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=x,x,w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,t,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two_reciprocal,
    "Dt,Dt,Dt",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_vcvt_power_of_two,
    "Dp",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "t",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,l,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rk,r,l,r,r,l,*hk,m,*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,K,j,mi,*mi,l,*hk",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,l,r,m,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rk,I,Py,n,r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    thumb_16bit_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "0,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_reg_or_int_operand,
    "l,M",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l,l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_reg_or_int_operand,
    "lPt,Ps",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "0,?r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mem_noofs_operand,
    "=Ua",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    USQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=l,r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "l,r",
    USAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4QQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2HAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V4UQQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UQQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    V2UHAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    UHAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    QQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    HAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SQmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "r",
    SAmode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    sat_shift_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "I",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data_d insn_data[] = 
{
  /* <internal>:0 */
  {
    "*placeholder_for_nothing",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:447 */
  {
    "*arm_adddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[1],
    3,
    3,
    0,
    5,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:476 */
  {
    "*adddi_sesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:506 */
  {
    "*adddi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:569 */
  {
    "*arm_addsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_4 },
#else
    { 0, output_4, 0 },
#endif
    { 0 },
    &operand_data[7],
    3,
    3,
    0,
    15,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:611 */
  {
    "addsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_5 },
#else
    { 0, output_5, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3_compare0 },
    &operand_data[10],
    3,
    3,
    2,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:628 */
  {
    "*addsi3_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_6 },
#else
    { 0, output_6, 0 },
#endif
    { 0 },
    &operand_data[11],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:644 */
  {
    "*compare_negsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmn%?\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[13],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:661 */
  {
    "cmpsi2_addneg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_8 },
#else
    { 0, output_8, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cmpsi2_addneg },
    &operand_data[15],
    4,
    4,
    1,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:718 */
  {
    "*addsi3_compare_op1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_9 },
#else
    { 0, output_9, 0 },
#endif
    { 0 },
    &operand_data[10],
    3,
    3,
    3,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:735 */
  {
    "*addsi3_compare_op2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_10 },
#else
    { 0, output_10, 0 },
#endif
    { 0 },
    &operand_data[10],
    3,
    3,
    3,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:752 */
  {
    "*compare_addsi2_op0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_11 },
#else
    { 0, output_11, 0 },
#endif
    { 0 },
    &operand_data[19],
    2,
    2,
    1,
    5,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:773 */
  {
    "*compare_addsi2_op1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_12 },
#else
    { 0, output_12, 0 },
#endif
    { 0 },
    &operand_data[19],
    2,
    2,
    1,
    5,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:794 */
  {
    "*addsi3_carryin_ltu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_13 },
#else
    { 0, output_13, 0 },
#endif
    { 0 },
    &operand_data[21],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:794 */
  {
    "*addsi3_carryin_geu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_14 },
#else
    { 0, output_14, 0 },
#endif
    { 0 },
    &operand_data[21],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:812 */
  {
    "*addsi3_carryin_alt2_ltu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_15 },
#else
    { 0, output_15, 0 },
#endif
    { 0 },
    &operand_data[24],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:812 */
  {
    "*addsi3_carryin_alt2_geu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_16 },
#else
    { 0, output_16, 0 },
#endif
    { 0 },
    &operand_data[24],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:830 */
  {
    "*addsi3_carryin_shift_ltu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[27],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:830 */
  {
    "*addsi3_carryin_shift_geu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[27],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:848 */
  {
    "*addsi3_carryin_clobercc_ltu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[32],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:848 */
  {
    "*addsi3_carryin_clobercc_geu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[32],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:860 */
  {
    "*subsi3_carryin",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_21 },
#else
    { 0, output_21, 0 },
#endif
    { 0 },
    &operand_data[35],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:876 */
  {
    "*subsi3_carryin_const",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbc\t%0, %1, #%B2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[38],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:887 */
  {
    "*subsi3_carryin_compare",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbcs\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[41],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:901 */
  {
    "*subsi3_carryin_compare_const",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbcs\t%0, %1, #%B2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[38],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:915 */
  {
    "*subsi3_carryin_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[27],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:932 */
  {
    "*rsbsi3_carryin_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[27],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:997 */
  {
    "*arm_subdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[44],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1023 */
  {
    "*subdi_di_zesidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1049 */
  {
    "*subdi_di_sesidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1076 */
  {
    "*subdi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1103 */
  {
    "*subdi_sesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1133 */
  {
    "*subdi_zesidi_zesidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[47],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1179 */
  {
    "*arm_subsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_33 },
#else
    { 0, output_33, 0 },
#endif
    { 0 },
    &operand_data[50],
    3,
    3,
    0,
    9,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1222 */
  {
    "*subsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_34 },
#else
    { 0, output_34, 0 },
#endif
    { 0 },
    &operand_data[53],
    3,
    3,
    2,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1239 */
  {
    "subsi3_compare",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_35 },
#else
    { 0, output_35, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsi3_compare },
    &operand_data[53],
    3,
    3,
    2,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1296 */
  {
    "*arm_mulsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[56],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1306 */
  {
    "*arm_mulsi3_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[59],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1319 */
  {
    "*mulsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[56],
    3,
    3,
    2,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1333 */
  {
    "*mulsi3_compare0_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[41],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1347 */
  {
    "*mulsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[62],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1360 */
  {
    "*mulsi_compare0_scratch_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[65],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1375 */
  {
    "*mulsi3addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[68],
    4,
    4,
    0,
    4,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1387 */
  {
    "*mulsi3addsi_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[72],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1400 */
  {
    "*mulsi3addsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[68],
    4,
    4,
    3,
    4,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1417 */
  {
    "*mulsi3addsi_compare0_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[72],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1434 */
  {
    "*mulsi3addsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[76],
    4,
    4,
    0,
    4,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1449 */
  {
    "*mulsi3addsi_compare0_scratch_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[80],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1464 */
  {
    "*mulsi3subsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mls%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[72],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1487 */
  {
    "*mulsidi3adddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[84],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1500 */
  {
    "*mulsidi3adddi_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[88],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1529 */
  {
    "*mulsidi3_nov6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[92],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1540 */
  {
    "*mulsidi3_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[47],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1561 */
  {
    "*umulsidi3_nov6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[92],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1572 */
  {
    "*umulsidi3_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[47],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1594 */
  {
    "*umulsidi3adddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[84],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1607 */
  {
    "*umulsidi3adddi_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[88],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1635 */
  {
    "*smulsi3_highpart_nov6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[95],
    3,
    4,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1650 */
  {
    "*smulsi3_highpart_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[99],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1680 */
  {
    "*umulsi3_highpart_nov6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[95],
    3,
    4,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1695 */
  {
    "*umulsi3_highpart_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[99],
    3,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1711 */
  {
    "mulhisi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulbb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulhisi3 },
    &operand_data[103],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1723 */
  {
    "*mulhisi3tb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smultb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[106],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1737 */
  {
    "*mulhisi3bt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulbt%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[109],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1751 */
  {
    "*mulhisi3tt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smultt%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[41],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1766 */
  {
    "maddhisi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlabb%?\t%0, %1, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_maddhisi4 },
    &operand_data[112],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1781 */
  {
    "*maddhisi4tb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlatb%?\t%0, %1, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[116],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1796 */
  {
    "*maddhisi4tt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlatt%?\t%0, %1, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[72],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1812 */
  {
    "maddhidi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlalbb%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_maddhidi4 },
    &operand_data[120],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1827 */
  {
    "*maddhidi4tb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlaltb%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[124],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1843 */
  {
    "*maddhidi4tt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlaltt%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[128],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:1987 */
  {
    "*anddi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_71 },
#else
    { 0, 0, output_71 },
#endif
    { 0 },
    &operand_data[132],
    3,
    3,
    0,
    8,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2033 */
  {
    "*anddi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2055 */
  {
    "*anddi_sesdi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2146 */
  {
    "*arm_andsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_74 },
#else
    { 0, output_74, 0 },
#endif
    { 0 },
    &operand_data[135],
    3,
    3,
    0,
    5,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2173 */
  {
    "*andsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_75 },
#else
    { 0, output_75, 0 },
#endif
    { 0 },
    &operand_data[138],
    3,
    3,
    2,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2190 */
  {
    "*andsi3_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_76 },
#else
    { 0, output_76, 0 },
#endif
    { 0 },
    &operand_data[139],
    2,
    3,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2206 */
  {
    "*zeroextractsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_77 },
#else
    { 0, 0, output_77 },
#endif
    { 0 },
    &operand_data[142],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2230 */
  {
    "*ne_zeroextractsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[145],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2268 */
  {
    "*ne_zeroextractsi_shifted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[145],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2294 */
  {
    "*ite_ne_zeroextractsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[145],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2333 */
  {
    "*ite_ne_zeroextractsi_shifted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[150],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2617 */
  {
    "insv_zero",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfc%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_insv_zero },
    &operand_data[154],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2630 */
  {
    "insv_t2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfi%?\t%0, %3, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_insv_t2 },
    &operand_data[154],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2644 */
  {
    "*anddi_notdi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[158],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2669 */
  {
    "*anddi_notzesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_85 },
#else
    { 0, output_85, 0 },
#endif
    { 0 },
    &operand_data[161],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2698 */
  {
    "*anddi_notdi_zesidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[164],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2720 */
  {
    "*anddi_notsesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2745 */
  {
    "andsi_notsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andsi_notsi_si },
    &operand_data[41],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2756 */
  {
    "andsi_not_shiftsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %2%S4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andsi_not_shiftsi_si },
    &operand_data[167],
    5,
    5,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2771 */
  {
    "*andsi_notsi_si_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[41],
    3,
    3,
    2,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2785 */
  {
    "*andsi_notsi_si_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[65],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2806 */
  {
    "*iordi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_92 },
#else
    { 0, 0, output_92 },
#endif
    { 0 },
    &operand_data[172],
    3,
    3,
    0,
    8,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2850 */
  {
    "*iordi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_93 },
#else
    { 0, output_93, 0 },
#endif
    { 0 },
    &operand_data[161],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2865 */
  {
    "*iordi_sesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2907 */
  {
    "*iorsi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_95 },
#else
    { 0, output_95, 0 },
#endif
    { 0 },
    &operand_data[135],
    3,
    3,
    0,
    5,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2948 */
  {
    "*iorsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[175],
    3,
    3,
    2,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2961 */
  {
    "*iorsi3_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[178],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:2981 */
  {
    "*xordi3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_98 },
#else
    { 0, 0, output_98 },
#endif
    { 0 },
    &operand_data[181],
    3,
    3,
    0,
    6,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3021 */
  {
    "*xordi_zesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_99 },
#else
    { 0, output_99, 0 },
#endif
    { 0 },
    &operand_data[161],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3036 */
  {
    "*xordi_sesidi_di",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[4],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3076 */
  {
    "*arm_xorsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_101 },
#else
    { 0, output_101, 0 },
#endif
    { 0 },
    &operand_data[184],
    3,
    3,
    0,
    4,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3101 */
  {
    "*xorsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor%.\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[187],
    3,
    3,
    2,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3114 */
  {
    "*xorsi3_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "teq%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[188],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3142 */
  {
    "*andsi_iorsi3_notsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[190],
    4,
    4,
    0,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3287 */
  {
    "*smax_0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %1, asr #31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[27],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3298 */
  {
    "*smax_m1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%?\t%0, %1, %1, asr #31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[27],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3309 */
  {
    "*arm_smax_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[194],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3349 */
  {
    "*smin_0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and%?\t%0, %1, %1, asr #31",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[27],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3360 */
  {
    "*arm_smin_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[194],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3392 */
  {
    "*arm_umaxsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[197],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3425 */
  {
    "*arm_uminsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[197],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3448 */
  {
    "*store_minmaxsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_112 },
#else
    { 0, 0, output_112 },
#endif
    { 0 },
    &operand_data[200],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3475 */
  {
    "*minmax_arithsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_113 },
#else
    { 0, 0, output_113 },
#endif
    { 0 },
    &operand_data[204],
    6,
    6,
    0,
    2,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3520 */
  {
    "*minmax_arithsi_non_canon",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[210],
    5,
    5,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3572 */
  {
    "*satsi_smax",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_115 },
#else
    { 0, 0, output_115 },
#endif
    { 0 },
    &operand_data[215],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3572 */
  {
    "*satsi_smin",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_116 },
#else
    { 0, 0, output_116 },
#endif
    { 0 },
    &operand_data[215],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3597 */
  {
    "*satsi_smax_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_117 },
#else
    { 0, 0, output_117 },
#endif
    { 0 },
    &operand_data[219],
    6,
    6,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3597 */
  {
    "*satsi_smin_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_118 },
#else
    { 0, 0, output_118 },
#endif
    { 0 },
    &operand_data[219],
    6,
    6,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3679 */
  {
    "arm_ashldi3_1bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs\t%Q0, %Q1, asl #1\n\tadc\t%R0, %R1, %R1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_ashldi3_1bit },
    &operand_data[225],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3753 */
  {
    "arm_ashrdi3_1bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs\t%R0, %R1, asr #1\n\tmov\t%Q0, %Q1, rrx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_ashrdi3_1bit },
    &operand_data[225],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3824 */
  {
    "arm_lshrdi3_1bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs\t%R0, %R1, lsr #1\n\tmov\t%Q0, %Q1, rrx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_lshrdi3_1bit },
    &operand_data[225],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3888 */
  {
    "*arm_shiftsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_122 },
#else
    { 0, 0, output_122 },
#endif
    { 0 },
    &operand_data[227],
    4,
    4,
    0,
    4,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3903 */
  {
    "*shiftsi3_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_123 },
#else
    { 0, 0, output_123 },
#endif
    { 0 },
    &operand_data[231],
    4,
    4,
    3,
    2,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3918 */
  {
    "*shiftsi3_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_124 },
#else
    { 0, 0, output_124 },
#endif
    { 0 },
    &operand_data[235],
    4,
    4,
    0,
    2,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3932 */
  {
    "*not_shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?\t%0, %1%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[239],
    4,
    4,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3945 */
  {
    "*not_shiftsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[239],
    4,
    4,
    3,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:3961 */
  {
    "*not_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[243],
    4,
    4,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4142 */
  {
    "unaligned_loadsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%0, %1\t@ unaligned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_loadsi },
    &operand_data[247],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4154 */
  {
    "unaligned_loadhis",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%(sh%)\t%0, %1\t@ unaligned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_loadhis },
    &operand_data[249],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4167 */
  {
    "unaligned_loadhiu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%(h%)\t%0, %1\t@ unaligned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_loadhiu },
    &operand_data[251],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4180 */
  {
    "unaligned_storesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?\t%1, %0\t@ unaligned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_storesi },
    &operand_data[253],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4192 */
  {
    "unaligned_storehi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%(h%)\t%1, %0\t@ unaligned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_storehi },
    &operand_data[255],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4209 */
  {
    "unaligned_loaddi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_loaddi },
    &operand_data[257],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4237 */
  {
    "unaligned_storedi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unaligned_storedi },
    &operand_data[259],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4258 */
  {
    "*extv_reg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbfx%?\t%0, %1, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[261],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4271 */
  {
    "extzv_t2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ubfx%?\t%0, %1, %3, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extzv_t2 },
    &operand_data[261],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4286 */
  {
    "divsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdiv%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divsi3 },
    &operand_data[41],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4297 */
  {
    "udivsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "udiv%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivsi3 },
    &operand_data[41],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4328 */
  {
    "*arm_negdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[225],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4358 */
  {
    "*arm_negsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsb%?\t%0, %1, #0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[265],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4383 */
  {
    "*zextendsidi_negsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[47],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4402 */
  {
    "*negdi_extendsidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[267],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4474 */
  {
    "*negdi_zero_extendsidi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[269],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4515 */
  {
    "*arm_abssi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[271],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4583 */
  {
    "*arm_neg_abssi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[271],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4664 */
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_146 },
#else
    { 0, output_146, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_one_cmpldi2 },
    &operand_data[273],
    2,
    2,
    0,
    4,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4697 */
  {
    "*arm_one_cmplsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[265],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4709 */
  {
    "*notsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[27],
    2,
    2,
    1,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4721 */
  {
    "*notsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[65],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4842 */
  {
    "zero_extendqidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendqidi2 },
    &operand_data[275],
    2,
    2,
    0,
    4,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4842 */
  {
    "zero_extendhidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendhidi2 },
    &operand_data[277],
    2,
    2,
    0,
    4,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4842 */
  {
    "zero_extendsidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendsidi2 },
    &operand_data[279],
    2,
    2,
    0,
    4,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4855 */
  {
    "extendqidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendqidi2 },
    &operand_data[281],
    2,
    2,
    0,
    5,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4855 */
  {
    "extendhidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendhidi2 },
    &operand_data[283],
    2,
    2,
    0,
    5,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4855 */
  {
    "extendsidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendsidi2 },
    &operand_data[285],
    2,
    2,
    0,
    5,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4952 */
  {
    "*arm_zero_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_156 },
#else
    { 0, output_156, 0 },
#endif
    { 0 },
    &operand_data[287],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4963 */
  {
    "*arm_zero_extendhisi2_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_157 },
#else
    { 0, output_157, 0 },
#endif
    { 0 },
    &operand_data[289],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:4974 */
  {
    "*arm_zero_extendhisi2addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uxtah%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[109],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5022 */
  {
    "*arm_zero_extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_159 },
#else
    { 0, output_159, 0 },
#endif
    { 0 },
    &operand_data[291],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5034 */
  {
    "*arm_zero_extendqisi2_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_160 },
#else
    { 0, output_160, 0 },
#endif
    { 0 },
    &operand_data[293],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5045 */
  {
    "*arm_zero_extendqisi2addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "uxtab%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[295],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5097 */
  {
    "*compareqi_eq0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "tst%?\t%0, #255",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[296],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5194 */
  {
    "*arm_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_163 },
#else
    { 0, output_163, 0 },
#endif
    { 0 },
    &operand_data[289],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5207 */
  {
    "*arm_extendhisi2_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_164 },
#else
    { 0, output_164, 0 },
#endif
    { 0 },
    &operand_data[289],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5219 */
  {
    "*arm_extendhisi2addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sxtah%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[109],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5253 */
  {
    "*arm_extendqihi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%(sb%)\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[298],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5290 */
  {
    "*arm_extendqisi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_167 },
#else
    { 0, output_167, 0 },
#endif
    { 0 },
    &operand_data[300],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5302 */
  {
    "*arm_extendqisi_v6",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_168 },
#else
    { 0, output_168, 0 },
#endif
    { 0 },
    &operand_data[300],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5314 */
  {
    "*arm_extendqisi2addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sxtab%?\t%0, %2, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[295],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5457 */
  {
    "*arm_movdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_170 },
#else
    { 0, 0, output_170 },
#endif
    { 0 },
    &operand_data[302],
    2,
    2,
    0,
    5,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5661 */
  {
    "*arm_movt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movt%?\t%0, #:upper16:%c2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[304],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5673 */
  {
    "*arm_movsi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_172 },
#else
    { 0, output_172, 0 },
#endif
    { 0 },
    &operand_data[307],
    2,
    2,
    0,
    6,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5804 */
  {
    "pic_load_addr_unified",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pic_load_addr_unified },
    &operand_data[309],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5827 */
  {
    "pic_load_addr_32bit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pic_load_addr_32bit },
    &operand_data[312],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5843 */
  {
    "pic_load_addr_thumb1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pic_load_addr_thumb1 },
    &operand_data[314],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5852 */
  {
    "pic_add_dot_plus_four",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_176 },
#else
    { 0, 0, output_176 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pic_add_dot_plus_four },
    &operand_data[316],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5868 */
  {
    "pic_add_dot_plus_eight",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_177 },
#else
    { 0, 0, output_177 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pic_add_dot_plus_eight },
    &operand_data[319],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5884 */
  {
    "tls_load_dot_plus_eight",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_178 },
#else
    { 0, 0, output_178 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tls_load_dot_plus_eight },
    &operand_data[319],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:5947 */
  {
    "*movsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_179 },
#else
    { 0, output_179, 0 },
#endif
    { 0 },
    &operand_data[322],
    2,
    2,
    1,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:6321 */
  {
    "*movhi_insn_arch4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_180 },
#else
    { 0, output_180, 0 },
#endif
    { 0 },
    &operand_data[324],
    2,
    2,
    0,
    5,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:6348 */
  {
    "*movhi_bytes",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_181 },
#else
    { 0, output_181, 0 },
#endif
    { 0 },
    &operand_data[326],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:6463 */
  {
    "*arm_movqi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_182 },
#else
    { 0, output_182, 0 },
#endif
    { 0 },
    &operand_data[328],
    2,
    2,
    0,
    9,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:6508 */
  {
    "*arm32_movhf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_183 },
#else
    { 0, 0, output_183 },
#endif
    { 0 },
    &operand_data[330],
    2,
    2,
    0,
    4,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:6590 */
  {
    "*arm_movsf_soft_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_184 },
#else
    { 0, output_184, 0 },
#endif
    { 0 },
    &operand_data[332],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:6675 */
  {
    "*movdf_soft_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_185 },
#else
    { 0, 0, output_185 },
#endif
    { 0 },
    &operand_data[334],
    2,
    2,
    0,
    5,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:6895 */
  {
    "*arm_cmpsi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_186 },
#else
    { 0, output_186, 0 },
#endif
    { 0 },
    &operand_data[336],
    2,
    2,
    0,
    5,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:6914 */
  {
    "*cmpsi_shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%0, %1%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[338],
    4,
    4,
    0,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:6927 */
  {
    "*cmpsi_shiftsi_swp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%?\t%0, %1%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[338],
    4,
    4,
    0,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:6940 */
  {
    "*arm_cmpsi_negshiftsi_si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmn%?\t%0, %2%S1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[28],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:6960 */
  {
    "*arm_cmpdi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[342],
    2,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:6998 */
  {
    "*arm_cmpdi_unsigned",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[345],
    2,
    2,
    0,
    4,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7027 */
  {
    "*arm_cmpdi_zero",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%.\t%1, %Q0, %R0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[347],
    1,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7044 */
  {
    "*deleted_compare",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "\t%@ deleted compare",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[349],
    1,
    1,
    1,
    0,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7072 */
  {
    "arm_cond_branch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_194 },
#else
    { 0, 0, output_194 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_cond_branch },
    &operand_data[350],
    3,
    3,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7098 */
  {
    "*arm_cond_branch_reversed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_195 },
#else
    { 0, 0, output_195 },
#endif
    { 0 },
    &operand_data[350],
    3,
    3,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7138 */
  {
    "*mov_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[353],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7155 */
  {
    "*mov_negscc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[353],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7174 */
  {
    "*mov_notscc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[353],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7435 */
  {
    "*cmovsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_199 },
#else
    { 0, 0, output_199 },
#endif
    { 0 },
    &operand_data[356],
    5,
    5,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7435 */
  {
    "*cmovdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_200 },
#else
    { 0, 0, output_200 },
#endif
    { 0 },
    &operand_data[361],
    5,
    5,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7468 */
  {
    "*movsicc_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_201 },
#else
    { 0, output_201, 0 },
#endif
    { 0 },
    &operand_data[366],
    5,
    5,
    0,
    8,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7537 */
  {
    "*movsfcc_soft_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_202 },
#else
    { 0, output_202, 0 },
#endif
    { 0 },
    &operand_data[371],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7561 */
  {
    "*arm_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_203 },
#else
    { 0, 0, output_203 },
#endif
    { 0 },
    &operand_data[318],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7621 */
  {
    "*call_reg_armv5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx%?\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[376],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7631 */
  {
    "*call_reg_arm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_205 },
#else
    { 0, 0, output_205 },
#endif
    { 0 },
    &operand_data[376],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7650 */
  {
    "*call_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_206 },
#else
    { 0, 0, output_206 },
#endif
    { 0 },
    &operand_data[379],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7701 */
  {
    "*call_value_reg_armv5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx%?\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[381],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7712 */
  {
    "*call_value_reg_arm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_208 },
#else
    { 0, 0, output_208 },
#endif
    { 0 },
    &operand_data[381],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7728 */
  {
    "*call_value_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_209 },
#else
    { 0, 0, output_209 },
#endif
    { 0 },
    &operand_data[378],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7746 */
  {
    "*call_symbol",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_210 },
#else
    { 0, 0, output_210 },
#endif
    { 0 },
    &operand_data[385],
    3,
    3,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7762 */
  {
    "*call_value_symbol",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_211 },
#else
    { 0, 0, output_211 },
#endif
    { 0 },
    &operand_data[387],
    4,
    4,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7845 */
  {
    "*sibcall_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_212 },
#else
    { 0, 0, output_212 },
#endif
    { 0 },
    &operand_data[391],
    3,
    3,
    0,
    2,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7865 */
  {
    "*sibcall_value_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_213 },
#else
    { 0, 0, output_213 },
#endif
    { 0 },
    &operand_data[390],
    4,
    4,
    0,
    2,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7904 */
  {
    "*arm_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_214 },
#else
    { 0, 0, output_214 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7921 */
  {
    "*cond_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_215 },
#else
    { 0, 0, output_215 },
#endif
    { 0 },
    &operand_data[351],
    2,
    2,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7921 */
  {
    "*cond_simple_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_216 },
#else
    { 0, 0, output_216 },
#endif
    { 0 },
    &operand_data[351],
    2,
    2,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7943 */
  {
    "*cond_return_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_217 },
#else
    { 0, 0, output_217 },
#endif
    { 0 },
    &operand_data[351],
    2,
    2,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7943 */
  {
    "*cond_simple_return_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_218 },
#else
    { 0, 0, output_218 },
#endif
    { 0 },
    &operand_data[351],
    2,
    2,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7965 */
  {
    "*arm_simple_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_219 },
#else
    { 0, 0, output_219 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:7999 */
  {
    "*check_arch2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "teq\t%|r0, %|r0\n\tteq\t%|pc, %|pc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[394],
    1,
    1,
    0,
    0,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8133 */
  {
    "blockage",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_blockage },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8181 */
  {
    "arm_casesi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_222 },
#else
    { 0, 0, output_222 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_casesi_internal },
    &operand_data[395],
    4,
    4,
    2,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8220 */
  {
    "*arm_indirect_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%|pc, %0\t%@ indirect register jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[28],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8229 */
  {
    "*load_indirect_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%|pc, %0\t%@ indirect memory jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[399],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8243 */
  {
    "nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_225 },
#else
    { 0, 0, output_225 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_nop },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8260 */
  {
    "trap",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_226 },
#else
    { 0, 0, output_226 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_trap },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8280 */
  {
    "*add_multsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add%?\t%0, %1, %2, lsl %b3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[400],
    4,
    4,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8280 */
  {
    "*rsb_multsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsb%?\t%0, %1, %2, lsl %b3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[404],
    4,
    4,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8280 */
  {
    "*orr_multsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%?\t%0, %1, %2, lsl %b3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[404],
    4,
    4,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8280 */
  {
    "*eor_multsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor%?\t%0, %1, %2, lsl %b3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[404],
    4,
    4,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8280 */
  {
    "*and_multsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and%?\t%0, %1, %2, lsl %b3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[404],
    4,
    4,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8294 */
  {
    "*add_shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[408],
    5,
    5,
    0,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8294 */
  {
    "*rsb_shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsb%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[413],
    5,
    5,
    0,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8294 */
  {
    "*orr_shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[413],
    5,
    5,
    0,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8294 */
  {
    "*eor_shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[413],
    5,
    5,
    0,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8294 */
  {
    "*and_shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[413],
    5,
    5,
    0,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8327 */
  {
    "*arith_shiftsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%.\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[418],
    6,
    6,
    5,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8346 */
  {
    "*arith_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%.\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[424],
    6,
    6,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8363 */
  {
    "*sub_shiftsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[430],
    5,
    5,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8376 */
  {
    "*sub_shiftsi_compare0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%.\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[435],
    5,
    5,
    4,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8394 */
  {
    "*sub_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%.\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[440],
    5,
    5,
    0,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8411 */
  {
    "*and_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[445],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8440 */
  {
    "*ior_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_243 },
#else
    { 0, output_243, 0 },
#endif
    { 0 },
    &operand_data[449],
    4,
    4,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8547 */
  {
    "*compare_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[453],
    4,
    4,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8667 */
  {
    "*cond_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_245 },
#else
    { 0, 0, output_245 },
#endif
    { 0 },
    &operand_data[457],
    6,
    6,
    0,
    3,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8696 */
  {
    "*cond_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_246 },
#else
    { 0, 0, output_246 },
#endif
    { 0 },
    &operand_data[463],
    6,
    6,
    0,
    2,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8723 */
  {
    "*cond_sub",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_247 },
#else
    { 0, 0, output_247 },
#endif
    { 0 },
    &operand_data[463],
    5,
    5,
    0,
    2,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8742 */
  {
    "*cmp_ite0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_248 },
#else
    { 0, 0, output_248 },
#endif
    { 0 },
    &operand_data[469],
    7,
    7,
    0,
    9,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8824 */
  {
    "*cmp_ite1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_249 },
#else
    { 0, 0, output_249 },
#endif
    { 0 },
    &operand_data[469],
    7,
    7,
    0,
    9,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8907 */
  {
    "*cmp_and",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_250 },
#else
    { 0, 0, output_250 },
#endif
    { 0 },
    &operand_data[469],
    7,
    7,
    0,
    9,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:8989 */
  {
    "*cmp_ior",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_251 },
#else
    { 0, 0, output_251 },
#endif
    { 0 },
    &operand_data[469],
    7,
    7,
    0,
    9,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9071 */
  {
    "*ior_scc_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[476],
    7,
    7,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9103 */
  {
    "*ior_scc_scc_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[483],
    8,
    8,
    6,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9131 */
  {
    "*and_scc_scc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[476],
    7,
    7,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9165 */
  {
    "*and_scc_scc_cmp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[483],
    8,
    8,
    6,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9197 */
  {
    "*and_scc_scc_nodom",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[491],
    7,
    7,
    0,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9268 */
  {
    "*negscc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[498],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9342 */
  {
    "movcond_addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movcond_addsi },
    &operand_data[502],
    6,
    6,
    0,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9383 */
  {
    "movcond",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_259 },
#else
    { 0, 0, output_259 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movcond },
    &operand_data[508],
    6,
    6,
    0,
    3,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9449 */
  {
    "*ifcompare_plus_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[514],
    7,
    7,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9466 */
  {
    "*if_plus_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_261 },
#else
    { 0, output_261, 0 },
#endif
    { 0 },
    &operand_data[521],
    6,
    6,
    0,
    4,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9492 */
  {
    "*ifcompare_move_plus",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[514],
    7,
    7,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9509 */
  {
    "*if_move_plus",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_263 },
#else
    { 0, output_263, 0 },
#endif
    { 0 },
    &operand_data[521],
    6,
    6,
    0,
    4,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9529 */
  {
    "*ifcompare_arith_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[527],
    10,
    10,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9548 */
  {
    "*if_arith_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%I6%d5\t%0, %1, %2\n\t%I7%D5\t%0, %3, %4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[537],
    9,
    9,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9565 */
  {
    "*ifcompare_arith_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_266 },
#else
    { 0, 0, output_266 },
#endif
    { 0 },
    &operand_data[546],
    8,
    8,
    0,
    2,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9607 */
  {
    "*if_arith_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_267 },
#else
    { 0, output_267, 0 },
#endif
    { 0 },
    &operand_data[554],
    7,
    7,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9624 */
  {
    "*ifcompare_move_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_268 },
#else
    { 0, 0, output_268 },
#endif
    { 0 },
    &operand_data[561],
    8,
    8,
    0,
    2,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9667 */
  {
    "*if_move_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_269 },
#else
    { 0, output_269, 0 },
#endif
    { 0 },
    &operand_data[554],
    7,
    7,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9685 */
  {
    "*ifcompare_move_not",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[569],
    6,
    6,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9702 */
  {
    "*if_move_not",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_271 },
#else
    { 0, output_271, 0 },
#endif
    { 0 },
    &operand_data[575],
    5,
    5,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9720 */
  {
    "*ifcompare_not_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[569],
    6,
    6,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9737 */
  {
    "*if_not_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_273 },
#else
    { 0, output_273, 0 },
#endif
    { 0 },
    &operand_data[575],
    5,
    5,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9754 */
  {
    "*ifcompare_shift_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[580],
    8,
    8,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9772 */
  {
    "*if_shift_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_275 },
#else
    { 0, output_275, 0 },
#endif
    { 0 },
    &operand_data[588],
    7,
    7,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9792 */
  {
    "*ifcompare_move_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[580],
    8,
    8,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9810 */
  {
    "*if_move_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_277 },
#else
    { 0, output_277, 0 },
#endif
    { 0 },
    &operand_data[588],
    7,
    7,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9830 */
  {
    "*ifcompare_shift_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[595],
    10,
    10,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9850 */
  {
    "*if_shift_shift",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%d5\t%0, %1%S6\n\tmov%D5\t%0, %3%S7",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[605],
    9,
    9,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9873 */
  {
    "*ifcompare_not_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[614],
    8,
    8,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9891 */
  {
    "*if_not_arith",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%d5\t%0, %1\n\t%I6%D5\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[622],
    7,
    7,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9907 */
  {
    "*ifcompare_arith_not",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[614],
    8,
    8,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9925 */
  {
    "*if_arith_not",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%D5\t%0, %1\n\t%I6%d5\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[622],
    7,
    7,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9941 */
  {
    "*ifcompare_neg_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[569],
    6,
    6,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9957 */
  {
    "*if_neg_move",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_285 },
#else
    { 0, output_285, 0 },
#endif
    { 0 },
    &operand_data[575],
    5,
    5,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9974 */
  {
    "*ifcompare_move_neg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[569],
    6,
    6,
    0,
    2,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:9990 */
  {
    "*if_move_neg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_287 },
#else
    { 0, output_287, 0 },
#endif
    { 0 },
    &operand_data[575],
    5,
    5,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10007 */
  {
    "*arith_adjacentmem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_288 },
#else
    { 0, 0, output_288 },
#endif
    { 0 },
    &operand_data[629],
    4,
    5,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10355 */
  {
    "*cond_move_not",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_289 },
#else
    { 0, output_289, 0 },
#endif
    { 0 },
    &operand_data[634],
    5,
    5,
    0,
    2,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10374 */
  {
    "*sign_extract_onebit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_290 },
#else
    { 0, 0, output_290 },
#endif
    { 0 },
    &operand_data[145],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10391 */
  {
    "*not_signextract_onebit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_291 },
#else
    { 0, 0, output_291 },
#endif
    { 0 },
    &operand_data[145],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10416 */
  {
    "*push_multi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_292 },
#else
    { 0, 0, output_292 },
#endif
    { 0 },
    &operand_data[639],
    3,
    3,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10462 */
  {
    "stack_tie",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_tie },
    &operand_data[642],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10475 */
  {
    "*load_multiple_with_writeback",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_294 },
#else
    { 0, 0, output_294 },
#endif
    { 0 },
    &operand_data[644],
    4,
    4,
    2,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10503 */
  {
    "*pop_multiple_with_writeback_and_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_295 },
#else
    { 0, 0, output_295 },
#endif
    { 0 },
    &operand_data[648],
    4,
    4,
    2,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10526 */
  {
    "*pop_multiple_with_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_296 },
#else
    { 0, 0, output_296 },
#endif
    { 0 },
    &operand_data[652],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10547 */
  {
    "*ldr_with_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%|pc, [%0], #4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[645],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10557 */
  {
    "*vfp_pop_multiple_with_writeback",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_298 },
#else
    { 0, 0, output_298 },
#endif
    { 0 },
    &operand_data[655],
    4,
    4,
    2,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10593 */
  {
    "align_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_299 },
#else
    { 0, 0, output_299 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_align_4 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10603 */
  {
    "align_8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_300 },
#else
    { 0, 0, output_300 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_align_8 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10613 */
  {
    "consttable_end",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_301 },
#else
    { 0, 0, output_301 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_end },
    &operand_data[0],
    0,
    0,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10623 */
  {
    "consttable_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_302 },
#else
    { 0, 0, output_302 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_1 },
    &operand_data[318],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10636 */
  {
    "consttable_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_303 },
#else
    { 0, 0, output_303 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_2 },
    &operand_data[318],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10659 */
  {
    "consttable_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_304 },
#else
    { 0, 0, output_304 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_4 },
    &operand_data[318],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10693 */
  {
    "consttable_8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_305 },
#else
    { 0, 0, output_305 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_8 },
    &operand_data[318],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10718 */
  {
    "consttable_16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_306 },
#else
    { 0, 0, output_306 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_consttable_16 },
    &operand_data[318],
    1,
    1,
    0,
    0,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10745 */
  {
    "clzsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clzsi2 },
    &operand_data[27],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10754 */
  {
    "rbitsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rbit%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rbitsi2 },
    &operand_data[27],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10779 */
  {
    "prefetch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pld\t%a0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_prefetch },
    &operand_data[659],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10800 */
  {
    "force_register_use",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%@ %0 needed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_force_register_use },
    &operand_data[662],
    1,
    1,
    0,
    0,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10825 */
  {
    "arm_eh_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_eh_return },
    &operand_data[663],
    1,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10843 */
  {
    "load_tp_hard",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mrc%?\tp15, 0, %0, c13, c0, 3\t@ load_tp_hard",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_tp_hard },
    &operand_data[316],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10853 */
  {
    "load_tp_soft",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl\t__aeabi_read_tp\t@ load_tp_soft",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_load_tp_soft },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10865 */
  {
    "tlscall",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_314 },
#else
    { 0, 0, output_314 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tlscall },
    &operand_data[665],
    2,
    2,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10898 */
  {
    "*arm_movtas_ze",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movt%?\t%0, %L1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[667],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:10911 */
  {
    "*arm_rev",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_316 },
#else
    { 0, output_316, 0 },
#endif
    { 0 },
    &operand_data[669],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11014 */
  {
    "*arm_revsh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_317 },
#else
    { 0, output_317, 0 },
#endif
    { 0 },
    &operand_data[671],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11027 */
  {
    "*arm_rev16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_318 },
#else
    { 0, output_318, 0 },
#endif
    { 0 },
    &operand_data[673],
    2,
    2,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11044 */
  {
    "arm_rev16si2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rev16\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_rev16si2 },
    &operand_data[675],
    4,
    4,
    1,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11061 */
  {
    "arm_rev16si2_alt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rev16\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_arm_rev16si2_alt },
    &operand_data[675],
    4,
    4,
    1,
    3,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11087 */
  {
    "*thumb2_ldrd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldrd%?\t%0, %3, [%1, %2]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[679],
    5,
    5,
    1,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11105 */
  {
    "*thumb2_ldrd_base",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldrd%?\t%0, %2, [%1]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[684],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11120 */
  {
    "*thumb2_ldrd_base_neg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldrd%?\t%0, %2, [%1, #-4]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[684],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11135 */
  {
    "*thumb2_strd",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "strd%?\t%2, %4, [%0, %1]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[687],
    5,
    5,
    1,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11153 */
  {
    "*thumb2_strd_base",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "strd%?\t%1, %2, [%0]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[692],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11168 */
  {
    "*thumb2_strd_base_neg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "strd%?\t%1, %2, [%0, #-4]",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[692],
    3,
    3,
    1,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11184 */
  {
    "crc32b",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32b\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crc32b },
    &operand_data[695],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11184 */
  {
    "crc32h",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32h\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crc32h },
    &operand_data[106],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11184 */
  {
    "crc32w",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32w\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crc32w },
    &operand_data[41],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11184 */
  {
    "crc32cb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32cb\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crc32cb },
    &operand_data[695],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11184 */
  {
    "crc32ch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32ch\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crc32ch },
    &operand_data[106],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11184 */
  {
    "crc32cw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "crc32cw\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_crc32cw },
    &operand_data[41],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:24 */
  {
    "*ldm4_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[698],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:43 */
  {
    "*thumb_ldm4_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[704],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:60 */
  {
    "*ldm4_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[710],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:81 */
  {
    "*thumb_ldm4_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[716],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:100 */
  {
    "*stm4_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[722],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:116 */
  {
    "*stm4_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[728],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:134 */
  {
    "*thumb_stm4_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[734],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:150 */
  {
    "*ldm4_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[698],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:169 */
  {
    "*ldm4_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[710],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:190 */
  {
    "*stm4_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[722],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:205 */
  {
    "*stm4_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[728],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:222 */
  {
    "*ldm4_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[698],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:240 */
  {
    "*ldm4_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[710],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:260 */
  {
    "*stm4_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[722],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:275 */
  {
    "*stm4_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[728],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:292 */
  {
    "*ldm4_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[698],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:312 */
  {
    "*ldm4_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[710],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:334 */
  {
    "*stm4_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%5, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[722],
    6,
    6,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:350 */
  {
    "*stm4_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%5!, {%1, %2, %3, %4}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[728],
    6,
    6,
    5,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:475 */
  {
    "*ldm3_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[740],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:491 */
  {
    "*thumb_ldm3_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[745],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:505 */
  {
    "*ldm3_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[750],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:523 */
  {
    "*thumb_ldm3_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[755],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:539 */
  {
    "*stm3_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[760],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:553 */
  {
    "*stm3_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[765],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:569 */
  {
    "*thumb_stm3_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[770],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:583 */
  {
    "*ldm3_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[740],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:599 */
  {
    "*ldm3_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[750],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:617 */
  {
    "*stm3_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[760],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:630 */
  {
    "*stm3_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[765],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:645 */
  {
    "*ldm3_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[740],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:660 */
  {
    "*ldm3_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[750],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:677 */
  {
    "*stm3_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[760],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:690 */
  {
    "*stm3_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[765],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:705 */
  {
    "*ldm3_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[740],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:722 */
  {
    "*ldm3_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[750],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:741 */
  {
    "*stm3_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%4, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[760],
    5,
    5,
    2,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:755 */
  {
    "*stm3_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%4!, {%1, %2, %3}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[765],
    5,
    5,
    4,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:864 */
  {
    "*ldm2_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[775],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:877 */
  {
    "*thumb_ldm2_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[779],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:888 */
  {
    "*ldm2_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[783],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:903 */
  {
    "*thumb_ldm2_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[787],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:916 */
  {
    "*stm2_ia",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[791],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:928 */
  {
    "*stm2_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[795],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:942 */
  {
    "*thumb_stm2_ia_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[799],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:954 */
  {
    "*ldm2_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[775],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:967 */
  {
    "*ldm2_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ib%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[783],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:982 */
  {
    "*stm2_ib",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[791],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:993 */
  {
    "*stm2_ib_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ib%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[795],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:1006 */
  {
    "*ldm2_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[775],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:1018 */
  {
    "*ldm2_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(da%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[783],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:1032 */
  {
    "*stm2_da",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[791],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:1043 */
  {
    "*stm2_da_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(da%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[795],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:1056 */
  {
    "*ldm2_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[775],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:1070 */
  {
    "*ldm2_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(db%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[783],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:1086 */
  {
    "*stm2_db",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%3, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[791],
    4,
    4,
    1,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/ldmstm.md:1098 */
  {
    "*stm2_db_update",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(db%)\t%3!, {%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[795],
    4,
    4,
    3,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md:11203 */
  {
    "*load_multiple",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_390 },
#else
    { 0, 0, output_390 },
#endif
    { 0 },
    &operand_data[803],
    3,
    3,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:30 */
  {
    "tbcstv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcstb%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tbcstv8qi },
    &operand_data[806],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:39 */
  {
    "tbcstv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcsth%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tbcstv4hi },
    &operand_data[808],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:48 */
  {
    "tbcstv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcstw%?\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tbcstv2si },
    &operand_data[810],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:57 */
  {
    "iwmmxt_iordi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_394 },
#else
    { 0, output_394, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_iordi3 },
    &operand_data[812],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:71 */
  {
    "iwmmxt_xordi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_395 },
#else
    { 0, output_395, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_xordi3 },
    &operand_data[812],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:85 */
  {
    "iwmmxt_anddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_396 },
#else
    { 0, output_396, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_anddi3 },
    &operand_data[812],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:99 */
  {
    "iwmmxt_nanddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wandn%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_nanddi3 },
    &operand_data[815],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:109 */
  {
    "*iwmmxt_arm_movdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_398 },
#else
    { 0, 0, output_398 },
#endif
    { 0 },
    &operand_data[818],
    2,
    2,
    0,
    15,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:164 */
  {
    "*iwmmxt_movsi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_399 },
#else
    { 0, 0, output_399 },
#endif
    { 0 },
    &operand_data[820],
    2,
    2,
    0,
    15,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:210 */
  {
    "*cond_iwmmxt_movsi_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_400 },
#else
    { 0, 0, output_400 },
#endif
    { 0 },
    &operand_data[822],
    4,
    4,
    0,
    6,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:235 */
  {
    "movv2si_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_401 },
#else
    { 0, 0, output_401 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv2si_internal },
    &operand_data[826],
    2,
    2,
    0,
    8,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:235 */
  {
    "movv4hi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_402 },
#else
    { 0, 0, output_402 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv4hi_internal },
    &operand_data[828],
    2,
    2,
    0,
    8,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:235 */
  {
    "movv8qi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_403 },
#else
    { 0, 0, output_403 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movv8qi_internal },
    &operand_data[830],
    2,
    2,
    0,
    8,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:313 */
  {
    "*andv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wand\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:313 */
  {
    "*andv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wand\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:313 */
  {
    "*andv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wand\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:323 */
  {
    "*iorv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wor\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:323 */
  {
    "*iorv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wor\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:323 */
  {
    "*iorv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wor\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:333 */
  {
    "*xorv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:333 */
  {
    "*xorv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:333 */
  {
    "*xorv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:346 */
  {
    "*addv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:346 */
  {
    "*addv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:346 */
  {
    "*addv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:356 */
  {
    "ssaddv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddbss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddv8qi3 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:366 */
  {
    "ssaddv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddv4hi3 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:376 */
  {
    "ssaddv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddv2si3 },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:386 */
  {
    "usaddv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddbus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usaddv8qi3 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:396 */
  {
    "usaddv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usaddv4hi3 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:406 */
  {
    "usaddv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_usaddv2si3 },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:416 */
  {
    "*subv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:416 */
  {
    "*subv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:416 */
  {
    "*subv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:426 */
  {
    "sssubv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubbss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sssubv8qi3 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:436 */
  {
    "sssubv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sssubv4hi3 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:446 */
  {
    "sssubv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sssubv2si3 },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:456 */
  {
    "ussubv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubbus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ussubv8qi3 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:466 */
  {
    "ussubv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ussubv4hi3 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:476 */
  {
    "ussubv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ussubv2si3 },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:486 */
  {
    "*mulv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulul%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:496 */
  {
    "smulv4hi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulsm%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smulv4hi3_highpart },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:509 */
  {
    "umulv4hi3_highpart",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulum%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulv4hi3_highpart },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:522 */
  {
    "iwmmxt_wmacs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacs%?\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wmacs },
    &operand_data[841],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:533 */
  {
    "iwmmxt_wmacsz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacsz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wmacsz },
    &operand_data[845],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:543 */
  {
    "iwmmxt_wmacu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacu%?\t%0, %2, %3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wmacu },
    &operand_data[841],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:554 */
  {
    "iwmmxt_wmacuz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacuz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wmacuz },
    &operand_data[845],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:566 */
  {
    "iwmmxt_clrdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_clrdi },
    &operand_data[815],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:577 */
  {
    "iwmmxt_clrv8qi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_clrv8qi },
    &operand_data[848],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:589 */
  {
    "iwmmxt_clrv4hi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_clrv4hi },
    &operand_data[849],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:599 */
  {
    "iwmmxt_clrv2si",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_clrv2si },
    &operand_data[810],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:610 */
  {
    "iwmmxt_uavgrndv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2br%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_uavgrndv8qi3 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:632 */
  {
    "iwmmxt_uavgrndv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2hr%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_uavgrndv4hi3 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:650 */
  {
    "iwmmxt_uavgv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2b%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_uavgv8qi3 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:663 */
  {
    "iwmmxt_uavgv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2h%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_uavgv4hi3 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:678 */
  {
    "iwmmxt_tinsrb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_446 },
#else
    { 0, 0, output_446 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_tinsrb },
    &operand_data[850],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:695 */
  {
    "iwmmxt_tinsrh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_447 },
#else
    { 0, 0, output_447 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_tinsrh },
    &operand_data[854],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:712 */
  {
    "iwmmxt_tinsrw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_448 },
#else
    { 0, 0, output_448 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_tinsrw },
    &operand_data[858],
    4,
    4,
    0,
    1,
    3
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:729 */
  {
    "iwmmxt_textrmub",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_textrmub },
    &operand_data[862],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:740 */
  {
    "iwmmxt_textrmsb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_textrmsb },
    &operand_data[862],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:751 */
  {
    "iwmmxt_textrmuh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_textrmuh },
    &operand_data[865],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:762 */
  {
    "iwmmxt_textrmsh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_textrmsh },
    &operand_data[865],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:775 */
  {
    "iwmmxt_textrmw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_textrmw },
    &operand_data[868],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:785 */
  {
    "iwmmxt_wshufh",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wshufh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wshufh },
    &operand_data[871],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:806 */
  {
    "eqv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_eqv8qi3 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:817 */
  {
    "eqv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_eqv4hi3 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:828 */
  {
    "eqv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_eqv2si3 },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:840 */
  {
    "gtuv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_gtuv8qi3 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:851 */
  {
    "gtuv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_gtuv4hi3 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:862 */
  {
    "gtuv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_gtuv2si3 },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:873 */
  {
    "gtv8qi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_gtv8qi3 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:884 */
  {
    "gtv4hi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_gtv4hi3 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:895 */
  {
    "gtv2si3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_gtv2si3 },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:908 */
  {
    "*smaxv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:908 */
  {
    "*smaxv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:908 */
  {
    "*smaxv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:918 */
  {
    "*umaxv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:918 */
  {
    "*umaxv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:918 */
  {
    "*umaxv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:928 */
  {
    "*sminv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:928 */
  {
    "*sminv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:928 */
  {
    "*sminv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:938 */
  {
    "*uminv2si3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[832],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:938 */
  {
    "*uminv4hi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[835],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:938 */
  {
    "*uminv8qi3_iwmmxt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[838],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:950 */
  {
    "iwmmxt_wpackhss",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wpackhss },
    &operand_data[874],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:961 */
  {
    "iwmmxt_wpackwss",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wpackwss },
    &operand_data[877],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:972 */
  {
    "iwmmxt_wpackdss",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackdss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wpackdss },
    &operand_data[880],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:983 */
  {
    "iwmmxt_wpackhus",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wpackhus },
    &operand_data[874],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:994 */
  {
    "iwmmxt_wpackwus",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wpackwus },
    &operand_data[877],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/iwmmxt.md:1005 */
  {
    "iwmmxt_wpackdus",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackdus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iwmmxt_wpackdus },
    &operand_data[880],
    3,
    3,
    0,
    1,
    1
  },
  {
    { .single =