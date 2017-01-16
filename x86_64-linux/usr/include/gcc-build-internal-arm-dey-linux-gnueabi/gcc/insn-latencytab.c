/* Generated automatically by the program `genattrtab'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "hash-set.h"
#include "machmode.h"
#include "vec.h"
#include "double-int.h"
#include "input.h"
#include "alias.h"
#include "symtab.h"
#include "options.h"
#include "wide-int.h"
#include "inchash.h"
#include "tree.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "rtl.h"
#include "insn-attr.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "toplev.h"
#include "flags.h"
#include "function.h"
#include "predict.h"

#define operands recog_data.operand

int
insn_default_latency (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_mul32 cached_mul32 ATTRIBUTE_UNUSED;
  enum attr_mul64 cached_mul64 ATTRIBUTE_UNUSED;
  enum attr_core_cycles cached_core_cycles ATTRIBUTE_UNUSED;
  enum attr_cortex_a7_neon_type cached_cortex_a7_neon_type ATTRIBUTE_UNUSED;
  enum attr_is_neon_type cached_is_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a8_neon_type cached_cortex_a8_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a9_neon_type cached_cortex_a9_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a15_neon_type cached_cortex_a15_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a17_neon_type cached_cortex_a17_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a57_neon_type cached_cortex_a57_neon_type ATTRIBUTE_UNUSED;
  enum attr_conds cached_conds ATTRIBUTE_UNUSED;
  int cached_shift ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 714:  /* smindf3 */
    case 713:  /* sminsf3 */
    case 712:  /* smaxdf3 */
    case 711:  /* smaxsf3 */
      if ((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 32 /* 0x20 */;
        }
      else if (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))
        {
	  return 4;
        }
      else if (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 3899:  /* *p iwmmxt_textrcv8qi3 */
    case 3898:  /* *p iwmmxt_textrcv4hi3 */
    case 3897:  /* *p iwmmxt_textrcv2si3 */
    case 3896:  /* *p iwmmxt_torvscv8qi3 */
    case 3895:  /* *p iwmmxt_torvscv4hi3 */
    case 3894:  /* *p iwmmxt_torvscv2si3 */
    case 3893:  /* *p iwmmxt_torcv8qi3 */
    case 3892:  /* *p iwmmxt_torcv4hi3 */
    case 3891:  /* *p iwmmxt_torcv2si3 */
    case 3890:  /* *p iwmmxt_tandcv8qi3 */
    case 3889:  /* *p iwmmxt_tandcv4hi3 */
    case 3888:  /* *p iwmmxt_tandcv2si3 */
    case 613:  /* iwmmxt_textrcv8qi3 */
    case 612:  /* iwmmxt_textrcv4hi3 */
    case 611:  /* iwmmxt_textrcv2si3 */
    case 610:  /* iwmmxt_torvscv8qi3 */
    case 609:  /* iwmmxt_torvscv4hi3 */
    case 608:  /* iwmmxt_torvscv2si3 */
    case 607:  /* iwmmxt_torcv8qi3 */
    case 606:  /* iwmmxt_torcv4hi3 */
    case 605:  /* iwmmxt_torcv2si3 */
    case 604:  /* iwmmxt_tandcv8qi3 */
    case 603:  /* iwmmxt_tandcv4hi3 */
    case 602:  /* iwmmxt_tandcv2si3 */
      if ((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 3820:  /* *p iwmmxt_tmovmskw */
    case 3819:  /* *p iwmmxt_tmovmskh */
    case 3818:  /* *p iwmmxt_tmovmskb */
    case 3739:  /* *p iwmmxt_textrmw */
    case 3738:  /* *p iwmmxt_textrmsh */
    case 3737:  /* *p iwmmxt_textrmuh */
    case 3736:  /* *p iwmmxt_textrmsb */
    case 3735:  /* *p iwmmxt_textrmub */
    case 534:  /* iwmmxt_tmovmskw */
    case 533:  /* iwmmxt_tmovmskh */
    case 532:  /* iwmmxt_tmovmskb */
    case 453:  /* iwmmxt_textrmw */
    case 452:  /* iwmmxt_textrmsh */
    case 451:  /* iwmmxt_textrmuh */
    case 450:  /* iwmmxt_textrmsb */
    case 449:  /* iwmmxt_textrmub */
      if ((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 5;
        }
      else if ((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 3886:  /* *p iwmmxt_wmiawttn */
    case 3885:  /* *p iwmmxt_wmiawtbn */
    case 3884:  /* *p iwmmxt_wmiawbtn */
    case 3883:  /* *p iwmmxt_wmiawbbn */
    case 3882:  /* *p iwmmxt_wmiawtt */
    case 3881:  /* *p iwmmxt_wmiawtb */
    case 3880:  /* *p iwmmxt_wmiawbt */
    case 3879:  /* *p iwmmxt_wmiawbb */
    case 3878:  /* *p iwmmxt_wmiattn */
    case 3877:  /* *p iwmmxt_wmiatbn */
    case 3876:  /* *p iwmmxt_wmiabtn */
    case 3875:  /* *p iwmmxt_wmiabbn */
    case 3874:  /* *p iwmmxt_wmiatt */
    case 3873:  /* *p iwmmxt_wmiatb */
    case 3872:  /* *p iwmmxt_wmiabt */
    case 3871:  /* *p iwmmxt_wmiabb */
    case 3870:  /* *p iwmmxt_wqmiattn */
    case 3869:  /* *p iwmmxt_wqmiatbn */
    case 3868:  /* *p iwmmxt_wqmiabtn */
    case 3867:  /* *p iwmmxt_wqmiabbn */
    case 3866:  /* *p iwmmxt_wqmiatt */
    case 3865:  /* *p iwmmxt_wqmiatb */
    case 3864:  /* *p iwmmxt_wqmiabt */
    case 3863:  /* *p iwmmxt_wqmiabb */
    case 3860:  /* *p iwmmxt_wqmulwmr */
    case 3858:  /* *p iwmmxt_wqmulwm */
    case 3856:  /* *p iwmmxt_wmulwl */
    case 3855:  /* *p iwmmxt_wmulwumr */
    case 3851:  /* *p iwmmxt_wmulwum */
    case 3850:  /* *p iwmmxt_wmulwsm */
    case 3849:  /* *p iwmmxt_wmaddun */
    case 3848:  /* *p iwmmxt_wmaddsn */
    case 3847:  /* *p iwmmxt_wmaddux */
    case 3846:  /* *p iwmmxt_wmaddsx */
    case 3817:  /* *p iwmmxt_tmiatt */
    case 3816:  /* *p iwmmxt_tmiabt */
    case 3815:  /* *p iwmmxt_tmiatb */
    case 3814:  /* *p iwmmxt_tmiabb */
    case 3813:  /* *p iwmmxt_tmiaph */
    case 3812:  /* *p iwmmxt_tmia */
    case 3811:  /* *p iwmmxt_wmaddu */
    case 3810:  /* *p iwmmxt_wmadds */
    case 3723:  /* *p iwmmxt_wmacuz */
    case 3722:  /* *p iwmmxt_wmacu */
    case 3721:  /* *p iwmmxt_wmacsz */
    case 3720:  /* *p iwmmxt_wmacs */
    case 600:  /* iwmmxt_wmiawttn */
    case 599:  /* iwmmxt_wmiawtbn */
    case 598:  /* iwmmxt_wmiawbtn */
    case 597:  /* iwmmxt_wmiawbbn */
    case 596:  /* iwmmxt_wmiawtt */
    case 595:  /* iwmmxt_wmiawtb */
    case 594:  /* iwmmxt_wmiawbt */
    case 593:  /* iwmmxt_wmiawbb */
    case 592:  /* iwmmxt_wmiattn */
    case 591:  /* iwmmxt_wmiatbn */
    case 590:  /* iwmmxt_wmiabtn */
    case 589:  /* iwmmxt_wmiabbn */
    case 588:  /* iwmmxt_wmiatt */
    case 587:  /* iwmmxt_wmiatb */
    case 586:  /* iwmmxt_wmiabt */
    case 585:  /* iwmmxt_wmiabb */
    case 584:  /* iwmmxt_wqmiattn */
    case 583:  /* iwmmxt_wqmiatbn */
    case 582:  /* iwmmxt_wqmiabtn */
    case 581:  /* iwmmxt_wqmiabbn */
    case 580:  /* iwmmxt_wqmiatt */
    case 579:  /* iwmmxt_wqmiatb */
    case 578:  /* iwmmxt_wqmiabt */
    case 577:  /* iwmmxt_wqmiabb */
    case 574:  /* iwmmxt_wqmulwmr */
    case 572:  /* iwmmxt_wqmulwm */
    case 570:  /* iwmmxt_wmulwl */
    case 569:  /* iwmmxt_wmulwumr */
    case 565:  /* iwmmxt_wmulwum */
    case 564:  /* iwmmxt_wmulwsm */
    case 563:  /* iwmmxt_wmaddun */
    case 562:  /* iwmmxt_wmaddsn */
    case 561:  /* iwmmxt_wmaddux */
    case 560:  /* iwmmxt_wmaddsx */
    case 531:  /* iwmmxt_tmiatt */
    case 530:  /* iwmmxt_tmiabt */
    case 529:  /* iwmmxt_tmiatb */
    case 528:  /* iwmmxt_tmiabb */
    case 527:  /* iwmmxt_tmiaph */
    case 526:  /* iwmmxt_tmia */
    case 525:  /* iwmmxt_wmaddu */
    case 524:  /* iwmmxt_wmadds */
    case 437:  /* iwmmxt_wmacuz */
    case 436:  /* iwmmxt_wmacu */
    case 435:  /* iwmmxt_wmacsz */
    case 434:  /* iwmmxt_wmacs */
      if ((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 4;
        }
      else if ((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 3859:  /* *p iwmmxt_wqmulmr */
    case 3857:  /* *p iwmmxt_wqmulm */
    case 3854:  /* *p iwmmxt_wmulwsmr */
    case 3853:  /* *p iwmmxt_wmulumr */
    case 3852:  /* *p iwmmxt_wmulsmr */
    case 3833:  /* *p iwmmxt_wsadhz */
    case 3832:  /* *p iwmmxt_wsadbz */
    case 3831:  /* *p iwmmxt_wsadh */
    case 3830:  /* *p iwmmxt_wsadb */
    case 3719:  /* *p umulv4hi3_highpart */
    case 3718:  /* *p smulv4hi3_highpart */
    case 3717:  /* *p *mulv4hi3_iwmmxt */
    case 573:  /* iwmmxt_wqmulmr */
    case 571:  /* iwmmxt_wqmulm */
    case 568:  /* iwmmxt_wmulwsmr */
    case 567:  /* iwmmxt_wmulumr */
    case 566:  /* iwmmxt_wmulsmr */
    case 547:  /* iwmmxt_wsadhz */
    case 546:  /* iwmmxt_wsadbz */
    case 545:  /* iwmmxt_wsadh */
    case 544:  /* iwmmxt_wsadb */
    case 433:  /* umulv4hi3_highpart */
    case 432:  /* smulv4hi3_highpart */
    case 431:  /* *mulv4hi3_iwmmxt */
      if ((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 3;
        }
      else if ((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 3862:  /* *p iwmmxt_waddbhusl */
    case 3861:  /* *p iwmmxt_waddbhusm */
    case 3845:  /* *p iwmmxt_avg4r */
    case 3844:  /* *p iwmmxt_avg4 */
    case 3843:  /* *p addcv2si3 */
    case 3842:  /* *p addcv4hi3 */
    case 3841:  /* *p iwmmxt_wsubaddhx */
    case 3840:  /* *p iwmmxt_waddsubhx */
    case 3823:  /* *p iwmmxt_waccw */
    case 3822:  /* *p iwmmxt_wacch */
    case 3821:  /* *p iwmmxt_waccb */
    case 3761:  /* *p *uminv8qi3_iwmmxt */
    case 3760:  /* *p *uminv4hi3_iwmmxt */
    case 3759:  /* *p *uminv2si3_iwmmxt */
    case 3758:  /* *p *sminv8qi3_iwmmxt */
    case 3757:  /* *p *sminv4hi3_iwmmxt */
    case 3756:  /* *p *sminv2si3_iwmmxt */
    case 3755:  /* *p *umaxv8qi3_iwmmxt */
    case 3754:  /* *p *umaxv4hi3_iwmmxt */
    case 3753:  /* *p *umaxv2si3_iwmmxt */
    case 3752:  /* *p *smaxv8qi3_iwmmxt */
    case 3751:  /* *p *smaxv4hi3_iwmmxt */
    case 3750:  /* *p *smaxv2si3_iwmmxt */
    case 3749:  /* *p gtv2si3 */
    case 3748:  /* *p gtv4hi3 */
    case 3747:  /* *p gtv8qi3 */
    case 3746:  /* *p gtuv2si3 */
    case 3745:  /* *p gtuv4hi3 */
    case 3744:  /* *p gtuv8qi3 */
    case 3743:  /* *p eqv2si3 */
    case 3742:  /* *p eqv4hi3 */
    case 3741:  /* *p eqv8qi3 */
    case 3731:  /* *p iwmmxt_uavgv4hi3 */
    case 3730:  /* *p iwmmxt_uavgv8qi3 */
    case 3729:  /* *p iwmmxt_uavgrndv4hi3 */
    case 3728:  /* *p iwmmxt_uavgrndv8qi3 */
    case 3716:  /* *p ussubv2si3 */
    case 3715:  /* *p ussubv4hi3 */
    case 3714:  /* *p ussubv8qi3 */
    case 3713:  /* *p sssubv2si3 */
    case 3712:  /* *p sssubv4hi3 */
    case 3711:  /* *p sssubv8qi3 */
    case 3710:  /* *p *subv8qi3_iwmmxt */
    case 3709:  /* *p *subv4hi3_iwmmxt */
    case 3708:  /* *p *subv2si3_iwmmxt */
    case 3707:  /* *p usaddv2si3 */
    case 3706:  /* *p usaddv4hi3 */
    case 3705:  /* *p usaddv8qi3 */
    case 3704:  /* *p ssaddv2si3 */
    case 3703:  /* *p ssaddv4hi3 */
    case 3702:  /* *p ssaddv8qi3 */
    case 3701:  /* *p *addv8qi3_iwmmxt */
    case 3700:  /* *p *addv4hi3_iwmmxt */
    case 3699:  /* *p *addv2si3_iwmmxt */
    case 576:  /* iwmmxt_waddbhusl */
    case 575:  /* iwmmxt_waddbhusm */
    case 559:  /* iwmmxt_avg4r */
    case 558:  /* iwmmxt_avg4 */
    case 557:  /* addcv2si3 */
    case 556:  /* addcv4hi3 */
    case 555:  /* iwmmxt_wsubaddhx */
    case 554:  /* iwmmxt_waddsubhx */
    case 537:  /* iwmmxt_waccw */
    case 536:  /* iwmmxt_wacch */
    case 535:  /* iwmmxt_waccb */
    case 475:  /* *uminv8qi3_iwmmxt */
    case 474:  /* *uminv4hi3_iwmmxt */
    case 473:  /* *uminv2si3_iwmmxt */
    case 472:  /* *sminv8qi3_iwmmxt */
    case 471:  /* *sminv4hi3_iwmmxt */
    case 470:  /* *sminv2si3_iwmmxt */
    case 469:  /* *umaxv8qi3_iwmmxt */
    case 468:  /* *umaxv4hi3_iwmmxt */
    case 467:  /* *umaxv2si3_iwmmxt */
    case 466:  /* *smaxv8qi3_iwmmxt */
    case 465:  /* *smaxv4hi3_iwmmxt */
    case 464:  /* *smaxv2si3_iwmmxt */
    case 463:  /* gtv2si3 */
    case 462:  /* gtv4hi3 */
    case 461:  /* gtv8qi3 */
    case 460:  /* gtuv2si3 */
    case 459:  /* gtuv4hi3 */
    case 458:  /* gtuv8qi3 */
    case 457:  /* eqv2si3 */
    case 456:  /* eqv4hi3 */
    case 455:  /* eqv8qi3 */
    case 445:  /* iwmmxt_uavgv4hi3 */
    case 444:  /* iwmmxt_uavgv8qi3 */
    case 443:  /* iwmmxt_uavgrndv4hi3 */
    case 442:  /* iwmmxt_uavgrndv8qi3 */
    case 430:  /* ussubv2si3 */
    case 429:  /* ussubv4hi3 */
    case 428:  /* ussubv8qi3 */
    case 427:  /* sssubv2si3 */
    case 426:  /* sssubv4hi3 */
    case 425:  /* sssubv8qi3 */
    case 424:  /* *subv8qi3_iwmmxt */
    case 423:  /* *subv4hi3_iwmmxt */
    case 422:  /* *subv2si3_iwmmxt */
    case 421:  /* usaddv2si3 */
    case 420:  /* usaddv4hi3 */
    case 419:  /* usaddv8qi3 */
    case 418:  /* ssaddv2si3 */
    case 417:  /* ssaddv4hi3 */
    case 416:  /* ssaddv8qi3 */
    case 415:  /* *addv8qi3_iwmmxt */
    case 414:  /* *addv4hi3_iwmmxt */
    case 413:  /* *addv2si3_iwmmxt */
      if ((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 2;
        }
      else if ((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 3887:  /* *p iwmmxt_wmerge */
    case 3839:  /* *p iwmmxt_wabsdiffw */
    case 3838:  /* *p iwmmxt_wabsdiffh */
    case 3837:  /* *p iwmmxt_wabsdiffb */
    case 3836:  /* *p iwmmxt_wabsv8qi3 */
    case 3835:  /* *p iwmmxt_wabsv4hi3 */
    case 3834:  /* *p iwmmxt_wabsv2si3 */
    case 3829:  /* *p iwmmxt_walignr3 */
    case 3828:  /* *p iwmmxt_walignr2 */
    case 3827:  /* *p iwmmxt_walignr1 */
    case 3826:  /* *p iwmmxt_walignr0 */
    case 3825:  /* *p iwmmxt_walignr */
    case 3824:  /* *p iwmmxt_waligni */
    case 3809:  /* *p ashldi3_di */
    case 3808:  /* *p ashlv2si3_di */
    case 3807:  /* *p ashlv4hi3_di */
    case 3806:  /* *p lshrdi3_di */
    case 3805:  /* *p lshrv2si3_di */
    case 3804:  /* *p lshrv4hi3_di */
    case 3803:  /* *p ashrdi3_di */
    case 3802:  /* *p ashrv2si3_di */
    case 3801:  /* *p ashrv4hi3_di */
    case 3800:  /* *p rordi3_di */
    case 3799:  /* *p rorv2si3_di */
    case 3798:  /* *p rorv4hi3_di */
    case 3797:  /* *p ashldi3_iwmmxt */
    case 3796:  /* *p ashlv2si3_iwmmxt */
    case 3795:  /* *p ashlv4hi3_iwmmxt */
    case 3794:  /* *p lshrdi3_iwmmxt */
    case 3793:  /* *p lshrv2si3_iwmmxt */
    case 3792:  /* *p lshrv4hi3_iwmmxt */
    case 3791:  /* *p ashrdi3_iwmmxt */
    case 3790:  /* *p ashrv2si3_iwmmxt */
    case 3789:  /* *p ashrv4hi3_iwmmxt */
    case 3788:  /* *p rordi3 */
    case 3787:  /* *p rorv2si3 */
    case 3786:  /* *p rorv4hi3 */
    case 3785:  /* *p iwmmxt_wunpckelsw */
    case 3784:  /* *p iwmmxt_wunpckelsh */
    case 3783:  /* *p iwmmxt_wunpckelsb */
    case 3782:  /* *p iwmmxt_wunpckeluw */
    case 3781:  /* *p iwmmxt_wunpckeluh */
    case 3780:  /* *p iwmmxt_wunpckelub */
    case 3779:  /* *p iwmmxt_wunpckehsw */
    case 3778:  /* *p iwmmxt_wunpckehsh */
    case 3777:  /* *p iwmmxt_wunpckehsb */
    case 3776:  /* *p iwmmxt_wunpckehuw */
    case 3775:  /* *p iwmmxt_wunpckehuh */
    case 3774:  /* *p iwmmxt_wunpckehub */
    case 3773:  /* *p iwmmxt_wunpckilw */
    case 3772:  /* *p iwmmxt_wunpckilh */
    case 3771:  /* *p iwmmxt_wunpckilb */
    case 3770:  /* *p iwmmxt_wunpckihw */
    case 3769:  /* *p iwmmxt_wunpckihh */
    case 3768:  /* *p iwmmxt_wunpckihb */
    case 3767:  /* *p iwmmxt_wpackdus */
    case 3766:  /* *p iwmmxt_wpackwus */
    case 3765:  /* *p iwmmxt_wpackhus */
    case 3764:  /* *p iwmmxt_wpackdss */
    case 3763:  /* *p iwmmxt_wpackwss */
    case 3762:  /* *p iwmmxt_wpackhss */
    case 3740:  /* *p iwmmxt_wshufh */
    case 3734:  /* *p iwmmxt_tinsrw */
    case 3733:  /* *p iwmmxt_tinsrh */
    case 3732:  /* *p iwmmxt_tinsrb */
    case 3727:  /* *p iwmmxt_clrv2si */
    case 3726:  /* *p iwmmxt_clrv4hi */
    case 3725:  /* *p iwmmxt_clrv8qi */
    case 3724:  /* *p iwmmxt_clrdi */
    case 3698:  /* *p *xorv8qi3_iwmmxt */
    case 3697:  /* *p *xorv4hi3_iwmmxt */
    case 3696:  /* *p *xorv2si3_iwmmxt */
    case 3695:  /* *p *iorv8qi3_iwmmxt */
    case 3694:  /* *p *iorv4hi3_iwmmxt */
    case 3693:  /* *p *iorv2si3_iwmmxt */
    case 3692:  /* *p *andv8qi3_iwmmxt */
    case 3691:  /* *p *andv4hi3_iwmmxt */
    case 3690:  /* *p *andv2si3_iwmmxt */
    case 3686:  /* *p iwmmxt_nanddi3 */
    case 3682:  /* *p tbcstv2si */
    case 3681:  /* *p tbcstv4hi */
    case 3680:  /* *p tbcstv8qi */
    case 601:  /* iwmmxt_wmerge */
    case 553:  /* iwmmxt_wabsdiffw */
    case 552:  /* iwmmxt_wabsdiffh */
    case 551:  /* iwmmxt_wabsdiffb */
    case 550:  /* iwmmxt_wabsv8qi3 */
    case 549:  /* iwmmxt_wabsv4hi3 */
    case 548:  /* iwmmxt_wabsv2si3 */
    case 543:  /* iwmmxt_walignr3 */
    case 542:  /* iwmmxt_walignr2 */
    case 541:  /* iwmmxt_walignr1 */
    case 540:  /* iwmmxt_walignr0 */
    case 539:  /* iwmmxt_walignr */
    case 538:  /* iwmmxt_waligni */
    case 523:  /* ashldi3_di */
    case 522:  /* ashlv2si3_di */
    case 521:  /* ashlv4hi3_di */
    case 520:  /* lshrdi3_di */
    case 519:  /* lshrv2si3_di */
    case 518:  /* lshrv4hi3_di */
    case 517:  /* ashrdi3_di */
    case 516:  /* ashrv2si3_di */
    case 515:  /* ashrv4hi3_di */
    case 514:  /* rordi3_di */
    case 513:  /* rorv2si3_di */
    case 512:  /* rorv4hi3_di */
    case 511:  /* ashldi3_iwmmxt */
    case 510:  /* ashlv2si3_iwmmxt */
    case 509:  /* ashlv4hi3_iwmmxt */
    case 508:  /* lshrdi3_iwmmxt */
    case 507:  /* lshrv2si3_iwmmxt */
    case 506:  /* lshrv4hi3_iwmmxt */
    case 505:  /* ashrdi3_iwmmxt */
    case 504:  /* ashrv2si3_iwmmxt */
    case 503:  /* ashrv4hi3_iwmmxt */
    case 502:  /* rordi3 */
    case 501:  /* rorv2si3 */
    case 500:  /* rorv4hi3 */
    case 499:  /* iwmmxt_wunpckelsw */
    case 498:  /* iwmmxt_wunpckelsh */
    case 497:  /* iwmmxt_wunpckelsb */
    case 496:  /* iwmmxt_wunpckeluw */
    case 495:  /* iwmmxt_wunpckeluh */
    case 494:  /* iwmmxt_wunpckelub */
    case 493:  /* iwmmxt_wunpckehsw */
    case 492:  /* iwmmxt_wunpckehsh */
    case 491:  /* iwmmxt_wunpckehsb */
    case 490:  /* iwmmxt_wunpckehuw */
    case 489:  /* iwmmxt_wunpckehuh */
    case 488:  /* iwmmxt_wunpckehub */
    case 487:  /* iwmmxt_wunpckilw */
    case 486:  /* iwmmxt_wunpckilh */
    case 485:  /* iwmmxt_wunpckilb */
    case 484:  /* iwmmxt_wunpckihw */
    case 483:  /* iwmmxt_wunpckihh */
    case 482:  /* iwmmxt_wunpckihb */
    case 481:  /* iwmmxt_wpackdus */
    case 480:  /* iwmmxt_wpackwus */
    case 479:  /* iwmmxt_wpackhus */
    case 478:  /* iwmmxt_wpackdss */
    case 477:  /* iwmmxt_wpackwss */
    case 476:  /* iwmmxt_wpackhss */
    case 454:  /* iwmmxt_wshufh */
    case 448:  /* iwmmxt_tinsrw */
    case 447:  /* iwmmxt_tinsrh */
    case 446:  /* iwmmxt_tinsrb */
    case 441:  /* iwmmxt_clrv2si */
    case 440:  /* iwmmxt_clrv4hi */
    case 439:  /* iwmmxt_clrv8qi */
    case 438:  /* iwmmxt_clrdi */
    case 412:  /* *xorv8qi3_iwmmxt */
    case 411:  /* *xorv4hi3_iwmmxt */
    case 410:  /* *xorv2si3_iwmmxt */
    case 409:  /* *iorv8qi3_iwmmxt */
    case 408:  /* *iorv4hi3_iwmmxt */
    case 407:  /* *iorv2si3_iwmmxt */
    case 406:  /* *andv8qi3_iwmmxt */
    case 405:  /* *andv4hi3_iwmmxt */
    case 404:  /* *andv2si3_iwmmxt */
    case 397:  /* iwmmxt_nanddi3 */
    case 393:  /* tbcstv2si */
    case 392:  /* tbcstv4hi */
    case 391:  /* tbcstv8qi */
      if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) || ((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 4013:  /* *p arm_store_release_exclusivesi */
    case 4012:  /* *p arm_store_release_exclusivehi */
    case 4011:  /* *p arm_store_release_exclusiveqi */
    case 4010:  /* *p arm_store_release_exclusivedi */
    case 4009:  /* *p arm_store_exclusivedi */
    case 4008:  /* *p arm_store_exclusivesi */
    case 4007:  /* *p arm_store_exclusivehi */
    case 4006:  /* *p arm_store_exclusiveqi */
    case 4005:  /* *p arm_load_acquire_exclusivedi */
    case 4004:  /* *p arm_load_exclusivedi */
    case 4003:  /* *p arm_load_acquire_exclusivesi */
    case 4002:  /* *p arm_load_exclusivesi */
    case 4001:  /* *p arm_load_acquire_exclusivehi */
    case 4000:  /* *p arm_load_acquire_exclusiveqi */
    case 3999:  /* *p arm_load_exclusivehi */
    case 3998:  /* *p arm_load_exclusiveqi */
    case 3997:  /* *p atomic_loaddi_1 */
    case 3679:  /* *p *load_multiple */
    case 2317:  /* arm_store_release_exclusivesi */
    case 2316:  /* arm_store_release_exclusivehi */
    case 2315:  /* arm_store_release_exclusiveqi */
    case 2314:  /* arm_store_release_exclusivedi */
    case 2313:  /* arm_store_exclusivedi */
    case 2312:  /* arm_store_exclusivesi */
    case 2311:  /* arm_store_exclusivehi */
    case 2310:  /* arm_store_exclusiveqi */
    case 2309:  /* arm_load_acquire_exclusivedi */
    case 2308:  /* arm_load_exclusivedi */
    case 2307:  /* arm_load_acquire_exclusivesi */
    case 2306:  /* arm_load_exclusivesi */
    case 2305:  /* arm_load_acquire_exclusivehi */
    case 2304:  /* arm_load_acquire_exclusiveqi */
    case 2303:  /* arm_load_exclusivehi */
    case 2302:  /* arm_load_exclusiveqi */
    case 2301:  /* atomic_nand_fetchdi */
    case 2300:  /* atomic_nand_fetchsi */
    case 2299:  /* atomic_nand_fetchhi */
    case 2298:  /* atomic_nand_fetchqi */
    case 2297:  /* atomic_and_fetchdi */
    case 2296:  /* atomic_xor_fetchdi */
    case 2295:  /* atomic_or_fetchdi */
    case 2294:  /* atomic_sub_fetchdi */
    case 2293:  /* atomic_add_fetchdi */
    case 2292:  /* atomic_and_fetchsi */
    case 2291:  /* atomic_xor_fetchsi */
    case 2290:  /* atomic_or_fetchsi */
    case 2289:  /* atomic_sub_fetchsi */
    case 2288:  /* atomic_add_fetchsi */
    case 2287:  /* atomic_and_fetchhi */
    case 2286:  /* atomic_xor_fetchhi */
    case 2285:  /* atomic_or_fetchhi */
    case 2284:  /* atomic_sub_fetchhi */
    case 2283:  /* atomic_add_fetchhi */
    case 2282:  /* atomic_and_fetchqi */
    case 2281:  /* atomic_xor_fetchqi */
    case 2280:  /* atomic_or_fetchqi */
    case 2279:  /* atomic_sub_fetchqi */
    case 2278:  /* atomic_add_fetchqi */
    case 2277:  /* atomic_fetch_nanddi */
    case 2276:  /* atomic_fetch_nandsi */
    case 2275:  /* atomic_fetch_nandhi */
    case 2274:  /* atomic_fetch_nandqi */
    case 2273:  /* atomic_fetch_anddi */
    case 2272:  /* atomic_fetch_xordi */
    case 2271:  /* atomic_fetch_ordi */
    case 2270:  /* atomic_fetch_subdi */
    case 2269:  /* atomic_fetch_adddi */
    case 2268:  /* atomic_fetch_andsi */
    case 2267:  /* atomic_fetch_xorsi */
    case 2266:  /* atomic_fetch_orsi */
    case 2265:  /* atomic_fetch_subsi */
    case 2264:  /* atomic_fetch_addsi */
    case 2263:  /* atomic_fetch_andhi */
    case 2262:  /* atomic_fetch_xorhi */
    case 2261:  /* atomic_fetch_orhi */
    case 2260:  /* atomic_fetch_subhi */
    case 2259:  /* atomic_fetch_addhi */
    case 2258:  /* atomic_fetch_andqi */
    case 2257:  /* atomic_fetch_xorqi */
    case 2256:  /* atomic_fetch_orqi */
    case 2255:  /* atomic_fetch_subqi */
    case 2254:  /* atomic_fetch_addqi */
    case 2253:  /* atomic_nanddi */
    case 2252:  /* atomic_nandsi */
    case 2251:  /* atomic_nandhi */
    case 2250:  /* atomic_nandqi */
    case 2249:  /* atomic_anddi */
    case 2248:  /* atomic_xordi */
    case 2247:  /* atomic_ordi */
    case 2246:  /* atomic_subdi */
    case 2245:  /* atomic_adddi */
    case 2244:  /* atomic_andsi */
    case 2243:  /* atomic_xorsi */
    case 2242:  /* atomic_orsi */
    case 2241:  /* atomic_subsi */
    case 2240:  /* atomic_addsi */
    case 2239:  /* atomic_andhi */
    case 2238:  /* atomic_xorhi */
    case 2237:  /* atomic_orhi */
    case 2236:  /* atomic_subhi */
    case 2235:  /* atomic_addhi */
    case 2234:  /* atomic_andqi */
    case 2233:  /* atomic_xorqi */
    case 2232:  /* atomic_orqi */
    case 2231:  /* atomic_subqi */
    case 2230:  /* atomic_addqi */
    case 2229:  /* atomic_exchangedi */
    case 2228:  /* atomic_exchangesi */
    case 2227:  /* atomic_exchangehi */
    case 2226:  /* atomic_exchangeqi */
    case 2225:  /* atomic_compare_and_swapdi_1 */
    case 2224:  /* atomic_compare_and_swapsi_1 */
    case 2223:  /* atomic_compare_and_swaphi_1 */
    case 2222:  /* atomic_compare_and_swapqi_1 */
    case 2221:  /* atomic_loaddi_1 */
    case 2220:  /* atomic_storesi */
    case 2219:  /* atomic_storehi */
    case 2218:  /* atomic_storeqi */
    case 2217:  /* atomic_loadsi */
    case 2216:  /* atomic_loadhi */
    case 2215:  /* atomic_loadqi */
    case 2214:  /* *memory_barrier */
    case 818:  /* thumb2_eh_return */
    case 761:  /* *cstoresi_ne0_thumb1_insn */
    case 676:  /* *cmpdf_trap_split_vfp */
    case 675:  /* *cmpdf_split_vfp */
    case 674:  /* *cmpsf_trap_split_vfp */
    case 673:  /* *cmpsf_split_vfp */
    case 390:  /* *load_multiple */
    case 311:  /* arm_eh_return */
    case 226:  /* trap */
      if ((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 32 /* 0x20 */;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c1 (insn) == WMMXT_ALU_C1_YES))
        {
	  return 1;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_pack (insn) == WMMXT_PACK_YES))
        {
	  return 1;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_shift (insn) == WMMXT_SHIFT_YES))
        {
	  return 1;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c1 (insn) == WMMXT_TRANSFER_C1_YES))
        {
	  return 1;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c2 (insn) == WMMXT_TRANSFER_C2_YES))
        {
	  return 5;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c2 (insn) == WMMXT_ALU_C2_YES))
        {
	  return 2;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c3 (insn) == WMMXT_ALU_C3_YES))
        {
	  return 3;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c3 (insn) == WMMXT_TRANSFER_C3_YES))
        {
	  return 4;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c1 (insn) == WMMXT_MULT_C1_YES))
        {
	  return 4;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c2 (insn) == WMMXT_MULT_C2_YES))
        {
	  return 3;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_type = get_attr_type (insn)) == TYPE_WMMX_WSTR))
        {
	  return 0;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_type = get_attr_type (insn)) == TYPE_WMMX_WLDR))
        {
	  return 5;
        }
      else if (((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 300 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)))
        {
	  return 5;
        }
      else if (((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 300 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2)))
        {
	  return 7;
        }
      else if (((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 300 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3)))
        {
	  return 9;
        }
      else if (((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 300 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4)))
        {
	  return 11 /* 0xb */;
        }
      else if (((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 300 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2)))
        {
	  return 3;
        }
      else if (((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 300 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3)))
        {
	  return 4;
        }
      else if (((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 300 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4)))
        {
	  return 5;
        }
      else if (((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 259 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)))
        {
	  return 1;
        }
      else if (((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 259 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)) && ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XSCALE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT2)))))))))
        {
	  return 3;
        }
      else if (((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 259 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)) && (! ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XSCALE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT2))))))))))
        {
	  return 2;
        }
      else if (((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((! (((
#line 259 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || ((cached_type == TYPE_LOAD3) || ((cached_type == TYPE_LOAD4) || (cached_type == TYPE_STORE1))))))))
        {
	  return 2;
        }
      else if (((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 259 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_NO)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))))
        {
	  return 16 /* 0x10 */;
        }
      else if (((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 259 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM110)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM1100)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM1110))))))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))))
        {
	  return 3;
        }
      else if (((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((((
#line 259 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((! ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM110)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM1100)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM1110)))))))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))))
        {
	  return 4;
        }
      else if (((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && (((cached_core_cycles = get_attr_core_cycles (insn)) == CORE_CYCLES_MULTI) && ((! (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || ((cached_type == TYPE_LOAD3) || ((cached_type == TYPE_LOAD4) || ((cached_type == TYPE_STORE1) || ((cached_type == TYPE_STORE2) || ((cached_type == TYPE_STORE3) || (cached_type == TYPE_STORE4)))))))))) && (! (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))))))
        {
	  return 32 /* 0x20 */;
        }
      else if (((! (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))))))))))))))) || (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))) && ((cached_core_cycles = get_attr_core_cycles (insn)) == CORE_CYCLES_SINGLE))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || ((cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWX))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))
        {
	  return 1;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))
        {
	  return 1;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 2;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 2;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX))))
        {
	  return 2;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA))))
        {
	  return 3;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 3;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))))
        {
	  return 4;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))))
        {
	  return 4;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 2;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 2;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 0;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 3;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 0;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD))))))
        {
	  return 5;
        }
      else if (((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || (cached_type == TYPE_FADDS)))
        {
	  return 5;
        }
      else if (((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_F_CVTF2I))))
        {
	  return 5;
        }
      else if (((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || ((cached_type == TYPE_FMACS) || ((cached_type == TYPE_FFMAS) || ((cached_type == TYPE_FMULD) || ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))))))
        {
	  return 6;
        }
      else if (((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 18 /* 0x12 */;
        }
      else if (((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 4;
        }
      else if (((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 5;
        }
      else if (((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 4;
        }
      else if (((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 1;
        }
      else if (((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 1;
        }
      else if (((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 1;
        }
      else if (((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))
        {
	  return 2;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))
        {
	  return 2;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 3;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 4;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 4;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL)))))
        {
	  return 5;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMLALS)))))
        {
	  return 5;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || ((cached_type == TYPE_SMLAXY) || ((cached_type == TYPE_SMULWY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMUAD) || ((cached_type == TYPE_SMUADX) || ((cached_type == TYPE_SMLAD) || ((cached_type == TYPE_SMLADX) || ((cached_type == TYPE_SMUSD) || ((cached_type == TYPE_SMUSDX) || ((cached_type == TYPE_SMLSD) || (cached_type == TYPE_SMLSDX)))))))))))))
        {
	  return 3;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 4;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 4;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD1))
        {
	  return 3;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE))
        {
	  return 4;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 3;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 0;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 4;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_MLA) || ((cached_type == TYPE_MULS) || ((cached_type == TYPE_MLAS) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || ((cached_type == TYPE_SMLALS) || (cached_type == TYPE_SMLAWX))))))))))))))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || ((cached_type == TYPE_SMULXY) || ((cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY)))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_MLA) || ((cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS)))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))))))))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))
        {
	  return 1;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 2;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))))
        {
	  return 2;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 2;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || ((cached_type == TYPE_MLAS) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))))))))
        {
	  return 3;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))))
        {
	  return 4;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 4;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 5;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE2) || (cached_type == TYPE_STORE3)))
        {
	  return 1;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 2;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG))))))))))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || ((cached_type == TYPE_MLAS) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))))))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE2) || (cached_type == TYPE_STORE3)))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))))))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM))))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_MUL) || ((cached_type == TYPE_MLA) || ((cached_type == TYPE_MULS) || ((cached_type == TYPE_MLAS) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_SMLAWX) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))))))))))))))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE2) || (cached_type == TYPE_STORE3)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FMOV) || ((cached_type == TYPE_FMULS) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD))))))))))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 8;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ADR) || ((cached_type == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_EXTEND)))))))) || (((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG))) && (! (get_attr_length (insn) == 8)))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_REG))))))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FMOV) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))))))))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MUL))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 8;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MLA))
        {
	  return 8;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMACD))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFMAD))
        {
	  return 8;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_is_neon_type = get_attr_is_neon_type (insn)) == IS_NEON_TYPE_YES) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_OTHER)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS))))))))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMMUL))))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || ((cached_type == TYPE_SMLAXY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMMLA) || ((cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLSD)))))))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_UMAAL) || (cached_type == TYPE_SMLALXY)))))))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || ((cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUSD))))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || (cached_type == TYPE_SMLSLD)))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || (cached_type == TYPE_LOAD_BYTE))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD))))))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRC))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRRC))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_1))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_2))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_3))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_4))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_5))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VMOV))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RSQRTS_S_Q)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_LDR))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_STR))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || ((cached_type == TYPE_LOAD_BYTE) || ((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD))))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || ((cached_type == TYPE_STORE2) || ((cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMULXY))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLAXY))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_SMMLA)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_SMULLS) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMLALS)))))))))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_F_MCR) || ((cached_type == TYPE_F_MCRR) || ((cached_type == TYPE_F_MRC) || ((cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG)))))))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 8;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRC))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRRC))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_1))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_2))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_3))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_4))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_5))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VMOV))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_LDR))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_STR))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_CRC) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))))))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || (cached_type == TYPE_LOAD2))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD_Q))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 8;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA_Q))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TO_GP))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_A))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_B))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_C))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_D))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_E))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_F))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_A))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_B))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_C))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_D))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_E))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_F))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_G))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_H))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDD))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPD))
        {
	  return 8;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 8;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHD))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_MULS) || ((cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || ((cached_type == TYPE_MLAS) || (cached_type == TYPE_SMMLA))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAD) || ((cached_type == TYPE_SMLADX) || ((cached_type == TYPE_SMLSD) || ((cached_type == TYPE_SMLSDX) || ((cached_type == TYPE_SMUAD) || ((cached_type == TYPE_SMUADX) || ((cached_type == TYPE_SMUSD) || (cached_type == TYPE_SMUSDX)))))))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAL) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_UMAAL) || ((cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMLALS))))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLSLD))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || ((cached_type == TYPE_SMULLS) || ((cached_type == TYPE_UMULL) || (cached_type == TYPE_UMULLS)))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || (cached_type == TYPE_LOAD2))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ABD))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ABD_Q))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 8;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MLA))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MLA_Q))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MLA))
        {
	  return 8;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_BITOPS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FROM_GP))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_TO_GP))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_A))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_B))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_C))
        {
	  return 8;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_D))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_E))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_F))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_G))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_H))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_STORE_A))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_STORE_B))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDD))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || ((cached_type == TYPE_FFMAS) || ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD))))))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHD))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCSEL)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CSEL) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_CRC) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_EXT) || ((cached_type == TYPE_ALUS_EXT) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 8;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || (cached_type == TYPE_LOAD_ACQ))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE_REL)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FMOV) || ((cached_type == TYPE_FMULS) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_FCMPS) || ((cached_type == TYPE_FCMPD) || ((cached_type == TYPE_FCSEL) || ((cached_type == TYPE_F_RINTS) || ((cached_type == TYPE_F_RINTD) || ((cached_type == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))))))))))))))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || ((cached_type == TYPE_FMACD) || ((cached_type == TYPE_FFMAS) || (cached_type == TYPE_FFMAD)))))
        {
	  return 8;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESMC))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD2_2REG_Q))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD1_1REG_Q))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_is_neon_type = get_attr_is_neon_type (insn)) == IS_NEON_TYPE_YES))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_CRC) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))))))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || (cached_type == TYPE_LOAD2))))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ABD))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ABD_Q))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 8;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MLA))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MLA_Q))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_REDUCTIONS_Q))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MLA))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS_Q))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_BITOPS))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FROM_GP))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_TO_GP))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_A))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_B))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_C))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_D))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_E))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_F))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_A))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_B))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_COMPLEX))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || ((cached_type == TYPE_FFMAS) || ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || ((cached_type == TYPE_FSQRTS) || ((cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_SQRT_S)))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || ((cached_type == TYPE_FSQRTD) || ((cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_SQRT_D)))))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || ((cached_type == TYPE_FSQRTD) || ((cached_type == TYPE_NEON_FP_DIV_S_Q) || ((cached_type == TYPE_NEON_FP_DIV_D_Q) || ((cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))))))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE) || ((cached_type == TYPE_CRYPTO_AESMC) || ((cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG))))))))))))))))))))))
        {
	  return 2;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG)))
        {
	  return 2;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))
        {
	  return 2;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))
        {
	  return 2;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_SMMUL)))
        {
	  return 4;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || ((cached_type == TYPE_SMULWY) || ((cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUSD)))))
        {
	  return 3;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_SMMLA)))
        {
	  return 4;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLSD)))))
        {
	  return 3;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || (cached_type == TYPE_SMLSLD)))
        {
	  return 3;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMAAL)))))
        {
	  return 4;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 9;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 10 /* 0xa */;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD2)))
        {
	  return 3;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 4;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)))
        {
	  return 0;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 0;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 2;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCMPS))))
        {
	  return 2;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FMULS)))
        {
	  return 3;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 6;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 2;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 1;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 3;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || (cached_type == TYPE_FMULD)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 97 /* 0x61 */;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHD) || (cached_type == TYPE_FCONSTD)))
        {
	  return 2;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPD))
        {
	  return 2;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))
        {
	  return 8;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADD) || (cached_type == TYPE_F_STORED)))
        {
	  return 8;
        }
      else if ((((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_F_MCR) || ((cached_type == TYPE_F_MRC) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))))))))))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SMLAXY) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMULXY)))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_MULS) || ((cached_type == TYPE_UMULL) || (cached_type == TYPE_SMULL)))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_EXTEND))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_MLAS)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FMOV) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FCMPD) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_FCMPS) || ((cached_type == TYPE_FMULS) || (cached_type == TYPE_F_FLAG)))))))))))))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCRR) || (cached_type == TYPE_F_MRRC)))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))))))))))))))))) || (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 2;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)) && (
#line 60 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn))))
        {
	  return 1;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)) && (! (
#line 60 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn)))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCONSTS)))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || ((cached_type == TYPE_F_MRRC) || ((cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 3;
        }
      else if ((((((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))) && ((! ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD))))))
        {
	  return 4;
        }
      else if ((((((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))) && ((! ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_FMULS) || ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))))))))))
        {
	  return 8;
        }
      else if ((((((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))) && ((! ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULD) || ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD))))
        {
	  return 9;
        }
      else if ((((((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))) && ((! ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))) && ((! ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))) && ((! ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || ((cached_type == TYPE_F_LOADD) || ((cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))))
        {
	  return 4;
        }
      else if ((((((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))) && ((! ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || ((cached_type == TYPE_F_STORED) || ((cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))))
        {
	  return 4;
        }
      else if ((((((
#line 102 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && (((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && ((! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))))))))))))) && ((! ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)))) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)))) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG)))))))))))))))))) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG)))))))))))))))))) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))) && ((! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && ((cached_shift = get_attr_shift (insn)) == 1))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))) && (((cached_conds = get_attr_conds (insn)) == CONDS_SET) && ((cached_shift = get_attr_shift (insn)) == 1))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_conds = get_attr_conds (insn)) == CONDS_SET) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))))))))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FMACD)))
        {
	  return 9;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FCMPS) || ((cached_type == TYPE_FCMPD) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))))))))))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || ((cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG))))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NO_INSN))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADD) || (cached_type == TYPE_F_LOADS)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORED) || (cached_type == TYPE_F_STORES)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_MCR))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_MRC))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) && (get_attr_fp (insn) == FP_YES)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD1))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MRS))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALU_EXT) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_CSEL) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_EXTEND)))))))))))))))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_REV))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALUS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_ALUS_EXT) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM))))))))
        {
	  return 1;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_MLA) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL)))))))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPD) || (cached_type == TYPE_FCMPS)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCSEL))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BFM))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_RINTD) || (cached_type == TYPE_F_RINTS)))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVT))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTF2I))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTI2F))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FMULD) || (cached_type == TYPE_FMULS)))))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVD))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FSQRTD))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHD) || (cached_type == TYPE_FFARITHS)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MINMAXD) || (cached_type == TYPE_F_MINMAXS)))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_DUP) || (cached_type == TYPE_NEON_DUP_Q)))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD1_1REG) || (cached_type == TYPE_NEON_LOAD1_1REG_Q)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_STORE1_1REG) || (cached_type == TYPE_NEON_STORE1_1REG_Q)))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_LOGIC) || ((cached_type == TYPE_NEON_LOGIC_Q) || ((cached_type == TYPE_NEON_BSL) || ((cached_type == TYPE_NEON_BSL_Q) || ((cached_type == TYPE_NEON_MOVE) || (cached_type == TYPE_NEON_MOVE_Q)))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 7;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FROM_GP) || ((cached_type == TYPE_NEON_FROM_GP_Q) || ((cached_type == TYPE_NEON_INS) || (cached_type == TYPE_NEON_INS_Q)))))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SHIFT_IMM) || ((cached_type == TYPE_NEON_SHIFT_IMM_Q) || ((cached_type == TYPE_NEON_SHIFT_REG) || ((cached_type == TYPE_NEON_SHIFT_REG_Q) || ((cached_type == TYPE_NEON_SHIFT_IMM_LONG) || ((cached_type == TYPE_NEON_SAT_SHIFT_IMM) || ((cached_type == TYPE_NEON_SAT_SHIFT_IMM_Q) || ((cached_type == TYPE_NEON_SAT_SHIFT_IMM_NARROW_Q) || ((cached_type == TYPE_NEON_SAT_SHIFT_REG) || ((cached_type == TYPE_NEON_SAT_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_NARROW_Q))))))))))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_ADD) || ((cached_type == TYPE_NEON_ADD_Q) || ((cached_type == TYPE_NEON_SUB) || ((cached_type == TYPE_NEON_SUB_Q) || ((cached_type == TYPE_NEON_NEG) || ((cached_type == TYPE_NEON_NEG_Q) || ((cached_type == TYPE_NEON_ABS) || ((cached_type == TYPE_NEON_ABS_Q) || ((cached_type == TYPE_NEON_ABD_Q) || ((cached_type == TYPE_NEON_ARITH_ACC) || ((cached_type == TYPE_NEON_ARITH_ACC_Q) || ((cached_type == TYPE_NEON_REDUC_ADD) || ((cached_type == TYPE_NEON_REDUC_ADD_Q) || ((cached_type == TYPE_NEON_ADD_HALVE) || ((cached_type == TYPE_NEON_ADD_HALVE_Q) || ((cached_type == TYPE_NEON_SUB_HALVE) || ((cached_type == TYPE_NEON_SUB_HALVE_Q) || ((cached_type == TYPE_NEON_QADD) || ((cached_type == TYPE_NEON_QADD_Q) || ((cached_type == TYPE_NEON_COMPARE) || ((cached_type == TYPE_NEON_COMPARE_Q) || ((cached_type == TYPE_NEON_COMPARE_ZERO) || ((cached_type == TYPE_NEON_COMPARE_ZERO_Q) || ((cached_type == TYPE_NEON_TST) || (cached_type == TYPE_NEON_TST_Q))))))))))))))))))))))))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q)))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_B) || ((cached_type == TYPE_NEON_MUL_B_Q) || ((cached_type == TYPE_NEON_MUL_H) || ((cached_type == TYPE_NEON_MUL_H_Q) || ((cached_type == TYPE_NEON_MUL_S) || ((cached_type == TYPE_NEON_MUL_S_Q) || ((cached_type == TYPE_NEON_FP_MUL_S_SCALAR) || ((cached_type == TYPE_NEON_FP_MUL_S_SCALAR_Q) || ((cached_type == TYPE_NEON_FP_MUL_D_SCALAR_Q) || ((cached_type == TYPE_NEON_MLA_B) || ((cached_type == TYPE_NEON_MLA_B_Q) || ((cached_type == TYPE_NEON_MLA_H) || ((cached_type == TYPE_NEON_MLA_H_Q) || ((cached_type == TYPE_NEON_MLA_S) || ((cached_type == TYPE_NEON_MLA_S_Q) || ((cached_type == TYPE_NEON_MLA_H_SCALAR) || ((cached_type == TYPE_NEON_MLA_H_SCALAR_Q) || ((cached_type == TYPE_NEON_MLA_S_SCALAR) || ((cached_type == TYPE_NEON_MLA_S_SCALAR_Q) || ((cached_type == TYPE_NEON_MLA_B_LONG) || ((cached_type == TYPE_NEON_MLA_H_LONG) || ((cached_type == TYPE_NEON_MLA_S_LONG) || ((cached_type == TYPE_NEON_FP_MUL_S) || ((cached_type == TYPE_NEON_FP_MUL_S_Q) || ((cached_type == TYPE_NEON_FP_MUL_D) || ((cached_type == TYPE_NEON_FP_MUL_D_Q) || ((cached_type == TYPE_NEON_FP_MLA_S) || ((cached_type == TYPE_NEON_FP_MLA_S_Q) || ((cached_type == TYPE_NEON_FP_MLA_D) || ((cached_type == TYPE_NEON_FP_MLA_D_Q) || ((cached_type == TYPE_NEON_FP_MLA_S_SCALAR) || ((cached_type == TYPE_NEON_FP_MLA_S_SCALAR_Q) || ((cached_type == TYPE_NEON_FP_MLA_D_SCALAR_Q) || ((cached_type == TYPE_NEON_SAT_MUL_B) || ((cached_type == TYPE_NEON_SAT_MUL_B_Q) || ((cached_type == TYPE_NEON_SAT_MUL_H) || ((cached_type == TYPE_NEON_SAT_MUL_H_Q) || ((cached_type == TYPE_NEON_SAT_MUL_S) || ((cached_type == TYPE_NEON_SAT_MUL_S_Q) || ((cached_type == TYPE_NEON_SAT_MUL_H_SCALAR) || ((cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_Q) || ((cached_type == TYPE_NEON_SAT_MUL_S_SCALAR) || ((cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_Q) || ((cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_LONG) || ((cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_LONG) || ((cached_type == TYPE_NEON_SAT_MLA_B_LONG) || ((cached_type == TYPE_NEON_SAT_MLA_H_LONG) || ((cached_type == TYPE_NEON_SAT_MLA_S_LONG) || ((cached_type == TYPE_NEON_SAT_MLA_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_SCALAR_LONG)))))))))))))))))))))))))))))))))))))))))))))))))))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ABD_S) || ((cached_type == TYPE_NEON_FP_ABD_S_Q) || ((cached_type == TYPE_NEON_FP_ABD_D) || (cached_type == TYPE_NEON_FP_ABD_D_Q)))))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ADDSUB_S) || ((cached_type == TYPE_NEON_FP_ADDSUB_S_Q) || ((cached_type == TYPE_NEON_FP_ADDSUB_D) || (cached_type == TYPE_NEON_FP_ADDSUB_D_Q)))))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_DIV_S) || ((cached_type == TYPE_NEON_FP_DIV_S_Q) || ((cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_D_Q)))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_NEG_S) || ((cached_type == TYPE_NEON_FP_NEG_S_Q) || ((cached_type == TYPE_NEON_FP_NEG_D) || ((cached_type == TYPE_NEON_FP_NEG_D_Q) || ((cached_type == TYPE_NEON_FP_ABS_S) || ((cached_type == TYPE_NEON_FP_ABS_S_Q) || ((cached_type == TYPE_NEON_FP_ABS_D) || (cached_type == TYPE_NEON_FP_ABS_D_Q)))))))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ROUND_S) || ((cached_type == TYPE_NEON_FP_ROUND_S_Q) || ((cached_type == TYPE_NEON_FP_ROUND_D) || (cached_type == TYPE_NEON_FP_ROUND_D_Q)))))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_INT_TO_FP_S) || ((cached_type == TYPE_NEON_INT_TO_FP_S_Q) || ((cached_type == TYPE_NEON_INT_TO_FP_D) || ((cached_type == TYPE_NEON_INT_TO_FP_D_Q) || ((cached_type == TYPE_NEON_FP_CVT_WIDEN_S) || ((cached_type == TYPE_NEON_FP_CVT_NARROW_S_Q) || (cached_type == TYPE_NEON_FP_CVT_NARROW_D_Q))))))))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_REDUC_ADD_S) || ((cached_type == TYPE_NEON_FP_REDUC_ADD_S_Q) || ((cached_type == TYPE_NEON_FP_REDUC_ADD_D) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D_Q)))))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_CLS) || (cached_type == TYPE_NEON_CLS_Q)))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_STORE1_ONE_LANE) || (cached_type == TYPE_NEON_STORE1_ONE_LANE_Q)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SUB_HALVE_NARROW_Q) || (cached_type == TYPE_NEON_ADD_HALVE_NARROW_Q)))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SHIFT_ACC) || (cached_type == TYPE_NEON_SHIFT_ACC_Q)))
        {
	  return 6;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_COMPARE_S) || ((cached_type == TYPE_NEON_FP_COMPARE_S_Q) || ((cached_type == TYPE_NEON_FP_COMPARE_D) || (cached_type == TYPE_NEON_FP_COMPARE_D_Q)))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_SQRT_S) || ((cached_type == TYPE_NEON_FP_SQRT_S_Q) || ((cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))))
        {
	  return 2;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TBL1) || (cached_type == TYPE_NEON_TBL1_Q)))
        {
	  return 4;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TBL2) || (cached_type == TYPE_NEON_TBL2_Q)))
        {
	  return 8;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_PERMUTE) || (cached_type == TYPE_NEON_PERMUTE_Q)))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD1_ALL_LANES))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPE_S) || ((cached_type == TYPE_NEON_FP_RECPE_S_Q) || ((cached_type == TYPE_NEON_FP_RECPE_D) || ((cached_type == TYPE_NEON_FP_RECPE_D_Q) || ((cached_type == TYPE_NEON_FP_RECPX_S) || ((cached_type == TYPE_NEON_FP_RECPX_S_Q) || ((cached_type == TYPE_NEON_FP_RECPX_D) || (cached_type == TYPE_NEON_FP_RECPX_D_Q)))))))))
        {
	  return 3;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPS_S) || ((cached_type == TYPE_NEON_FP_RECPS_S_Q) || ((cached_type == TYPE_NEON_FP_RECPS_D) || (cached_type == TYPE_NEON_FP_RECPS_D_Q)))))
        {
	  return 5;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_D_LONG))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    }
}

