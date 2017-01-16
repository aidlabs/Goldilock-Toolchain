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
internal_dfa_insn_code (rtx_insn *insn ATTRIBUTE_UNUSED)
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
	  return 26 /* 0x1a */;
        }
      else if (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))
        {
	  return 581 /* 0x245 */;
        }
      else if (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))
        {
	  return 831 /* 0x33f */;
        }
      else
        {
	  return 863 /* 0x35f */;
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
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 863 /* 0x35f */;
        }

    case 3833:  /* *p iwmmxt_wsadhz */
    case 3832:  /* *p iwmmxt_wsadbz */
    case 3831:  /* *p iwmmxt_wsadh */
    case 3830:  /* *p iwmmxt_wsadb */
    case 547:  /* iwmmxt_wsadhz */
    case 546:  /* iwmmxt_wsadbz */
    case 545:  /* iwmmxt_wsadh */
    case 544:  /* iwmmxt_wsadb */
      if ((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 6;
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
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 863 /* 0x35f */;
        }

    case 3817:  /* *p iwmmxt_tmiatt */
    case 3816:  /* *p iwmmxt_tmiabt */
    case 3815:  /* *p iwmmxt_tmiatb */
    case 3814:  /* *p iwmmxt_tmiabb */
    case 3813:  /* *p iwmmxt_tmiaph */
    case 3812:  /* *p iwmmxt_tmia */
    case 531:  /* iwmmxt_tmiatt */
    case 530:  /* iwmmxt_tmiabt */
    case 529:  /* iwmmxt_tmiatb */
    case 528:  /* iwmmxt_tmiabb */
    case 527:  /* iwmmxt_tmiaph */
    case 526:  /* iwmmxt_tmia */
      if ((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 7;
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
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 863 /* 0x35f */;
        }

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
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 863 /* 0x35f */;
        }

    case 3887:  /* *p iwmmxt_wmerge */
    case 3829:  /* *p iwmmxt_walignr3 */
    case 3828:  /* *p iwmmxt_walignr2 */
    case 3827:  /* *p iwmmxt_walignr1 */
    case 3826:  /* *p iwmmxt_walignr0 */
    case 3825:  /* *p iwmmxt_walignr */
    case 3824:  /* *p iwmmxt_waligni */
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
    case 601:  /* iwmmxt_wmerge */
    case 543:  /* iwmmxt_walignr3 */
    case 542:  /* iwmmxt_walignr2 */
    case 541:  /* iwmmxt_walignr1 */
    case 540:  /* iwmmxt_walignr0 */
    case 539:  /* iwmmxt_walignr */
    case 538:  /* iwmmxt_waligni */
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
      if ((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 1;
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
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 863 /* 0x35f */;
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
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 863 /* 0x35f */;
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
	  return 8;
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
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 863 /* 0x35f */;
        }

    case 3859:  /* *p iwmmxt_wqmulmr */
    case 3857:  /* *p iwmmxt_wqmulm */
    case 3854:  /* *p iwmmxt_wmulwsmr */
    case 3853:  /* *p iwmmxt_wmulumr */
    case 3852:  /* *p iwmmxt_wmulsmr */
    case 3719:  /* *p umulv4hi3_highpart */
    case 3718:  /* *p smulv4hi3_highpart */
    case 3717:  /* *p *mulv4hi3_iwmmxt */
    case 573:  /* iwmmxt_wqmulmr */
    case 571:  /* iwmmxt_wqmulm */
    case 568:  /* iwmmxt_wmulwsmr */
    case 567:  /* iwmmxt_wmulumr */
    case 566:  /* iwmmxt_wmulsmr */
    case 433:  /* umulv4hi3_highpart */
    case 432:  /* smulv4hi3_highpart */
    case 431:  /* *mulv4hi3_iwmmxt */
      if ((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 9;
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
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 863 /* 0x35f */;
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
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 863 /* 0x35f */;
        }

    case 3839:  /* *p iwmmxt_wabsdiffw */
    case 3838:  /* *p iwmmxt_wabsdiffh */
    case 3837:  /* *p iwmmxt_wabsdiffb */
    case 3836:  /* *p iwmmxt_wabsv8qi3 */
    case 3835:  /* *p iwmmxt_wabsv4hi3 */
    case 3834:  /* *p iwmmxt_wabsv2si3 */
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
    case 553:  /* iwmmxt_wabsdiffw */
    case 552:  /* iwmmxt_wabsdiffh */
    case 551:  /* iwmmxt_wabsdiffb */
    case 550:  /* iwmmxt_wabsv8qi3 */
    case 549:  /* iwmmxt_wabsv4hi3 */
    case 548:  /* iwmmxt_wabsv2si3 */
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
      if ((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 0;
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
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 863 /* 0x35f */;
        }

    case 3734:  /* *p iwmmxt_tinsrw */
    case 3733:  /* *p iwmmxt_tinsrh */
    case 3732:  /* *p iwmmxt_tinsrb */
    case 3682:  /* *p tbcstv2si */
    case 3681:  /* *p tbcstv4hi */
    case 3680:  /* *p tbcstv8qi */
    case 448:  /* iwmmxt_tinsrw */
    case 447:  /* iwmmxt_tinsrh */
    case 446:  /* iwmmxt_tinsrb */
    case 393:  /* tbcstv2si */
    case 392:  /* tbcstv4hi */
    case 391:  /* tbcstv8qi */
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
	  return 27 /* 0x1b */;
        }
      else
        {
	  return 863 /* 0x35f */;
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
	  return 26 /* 0x1a */;
        }
      else
        {
	  return 863 /* 0x35f */;
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
	  return 0;
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
	  return 2;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c1 (insn) == WMMXT_TRANSFER_C1_YES))
        {
	  return 3;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c2 (insn) == WMMXT_TRANSFER_C2_YES))
        {
	  return 4;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c2 (insn) == WMMXT_ALU_C2_YES))
        {
	  return 5;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c3 (insn) == WMMXT_ALU_C3_YES))
        {
	  return 6;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c3 (insn) == WMMXT_TRANSFER_C3_YES))
        {
	  return 7;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c1 (insn) == WMMXT_MULT_C1_YES))
        {
	  return 8;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c2 (insn) == WMMXT_MULT_C2_YES))
        {
	  return 9;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_type = get_attr_type (insn)) == TYPE_WMMX_WSTR))
        {
	  return 10 /* 0xa */;
        }
      else if (((
#line 56 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && ((cached_type = get_attr_type (insn)) == TYPE_WMMX_WLDR))
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
(MODEL_WBUF_YES)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)))
        {
	  return 12 /* 0xc */;
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
	  return 13 /* 0xd */;
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
	  return 14 /* 0xe */;
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
	  return 15 /* 0xf */;
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
#line 300 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3)))
        {
	  return 17 /* 0x11 */;
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
	  return 18 /* 0x12 */;
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
	  return 19 /* 0x13 */;
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
	  return 20 /* 0x14 */;
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
	  return 21 /* 0x15 */;
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
	  return 22 /* 0x16 */;
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
	  return 23 /* 0x17 */;
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
	  return 24 /* 0x18 */;
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
	  return 25 /* 0x19 */;
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
	  return 26 /* 0x1a */;
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
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))))))))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA))))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || ((cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWX))))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 40 /* 0x28 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 41 /* 0x29 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 44 /* 0x2c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 45 /* 0x2d */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))
        {
	  return 46 /* 0x2e */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))
        {
	  return 47 /* 0x2f */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 48 /* 0x30 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 49 /* 0x31 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX))))
        {
	  return 50 /* 0x32 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA))))
        {
	  return 51 /* 0x33 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 52 /* 0x34 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))))
        {
	  return 53 /* 0x35 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))))
        {
	  return 54 /* 0x36 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 55 /* 0x37 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 56 /* 0x38 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 57 /* 0x39 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 58 /* 0x3a */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 59 /* 0x3b */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 60 /* 0x3c */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 61 /* 0x3d */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1020E)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1022E))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 62 /* 0x3e */;
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
	  return 63 /* 0x3f */;
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
	  return 64 /* 0x40 */;
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
	  return 65 /* 0x41 */;
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
	  return 66 /* 0x42 */;
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
	  return 67 /* 0x43 */;
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
	  return 68 /* 0x44 */;
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
	  return 69 /* 0x45 */;
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
	  return 70 /* 0x46 */;
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
	  return 71 /* 0x47 */;
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
	  return 72 /* 0x48 */;
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
	  return 73 /* 0x49 */;
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
	  return 74 /* 0x4a */;
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
	  return 75 /* 0x4b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 79 /* 0x4f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX))))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA))))
        {
	  return 81 /* 0x51 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 82 /* 0x52 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))))
        {
	  return 83 /* 0x53 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))))
        {
	  return 84 /* 0x54 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 87 /* 0x57 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 88 /* 0x58 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 92 /* 0x5c */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))
        {
	  return 93 /* 0x5d */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))
        {
	  return 94 /* 0x5e */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 95 /* 0x5f */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 96 /* 0x60 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 97 /* 0x61 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL)))))
        {
	  return 98 /* 0x62 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMLALS)))))
        {
	  return 99 /* 0x63 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULXY) || ((cached_type == TYPE_SMLAXY) || ((cached_type == TYPE_SMULWY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMUAD) || ((cached_type == TYPE_SMUADX) || ((cached_type == TYPE_SMLAD) || ((cached_type == TYPE_SMLADX) || ((cached_type == TYPE_SMUSD) || ((cached_type == TYPE_SMUSDX) || ((cached_type == TYPE_SMLSD) || (cached_type == TYPE_SMLSDX)))))))))))))
        {
	  return 100 /* 0x64 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 101 /* 0x65 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 102 /* 0x66 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 103 /* 0x67 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 104 /* 0x68 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD1))
        {
	  return 105 /* 0x69 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE))
        {
	  return 106 /* 0x6a */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 107 /* 0x6b */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 108 /* 0x6c */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 109 /* 0x6d */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 110 /* 0x6e */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 111 /* 0x6f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))
        {
	  return 112 /* 0x70 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 113 /* 0x71 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY))))
        {
	  return 114 /* 0x72 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_MLA) || ((cached_type == TYPE_MULS) || ((cached_type == TYPE_MLAS) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || ((cached_type == TYPE_SMLALS) || (cached_type == TYPE_SMLAWX))))))))))))))
        {
	  return 115 /* 0x73 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 116 /* 0x74 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 117 /* 0x75 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 118 /* 0x76 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 119 /* 0x77 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 120 /* 0x78 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 124 /* 0x7c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 125 /* 0x7d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))))))))))))))
        {
	  return 126 /* 0x7e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLALXY))
        {
	  return 127 /* 0x7f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAXY) || ((cached_type == TYPE_SMULXY) || ((cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY)))))
        {
	  return 128 /* 0x80 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_MLA) || ((cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS)))))
        {
	  return 129 /* 0x81 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))))))))
        {
	  return 130 /* 0x82 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 131 /* 0x83 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 132 /* 0x84 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 133 /* 0x85 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 134 /* 0x86 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 135 /* 0x87 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 136 /* 0x88 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 137 /* 0x89 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 138 /* 0x8a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 139 /* 0x8b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 140 /* 0x8c */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))
        {
	  return 141 /* 0x8d */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 142 /* 0x8e */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))))
        {
	  return 143 /* 0x8f */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 144 /* 0x90 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || ((cached_type == TYPE_MLAS) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))))))))
        {
	  return 145 /* 0x91 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))))
        {
	  return 146 /* 0x92 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 147 /* 0x93 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 148 /* 0x94 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 149 /* 0x95 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 150 /* 0x96 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE2) || (cached_type == TYPE_STORE3)))
        {
	  return 151 /* 0x97 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 152 /* 0x98 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 153 /* 0x99 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 154 /* 0x9a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG))))))))))))))))))))))
        {
	  return 155 /* 0x9b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 156 /* 0x9c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))))
        {
	  return 157 /* 0x9d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 158 /* 0x9e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_MULS) || ((cached_type == TYPE_MLAS) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))))))))
        {
	  return 159 /* 0x9f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULLS) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))))
        {
	  return 160 /* 0xa0 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 161 /* 0xa1 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 162 /* 0xa2 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 163 /* 0xa3 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 164 /* 0xa4 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE2) || (cached_type == TYPE_STORE3)))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 166 /* 0xa6 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 167 /* 0xa7 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 168 /* 0xa8 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))))))))
        {
	  return 169 /* 0xa9 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))
        {
	  return 170 /* 0xaa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM))))))
        {
	  return 171 /* 0xab */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))))
        {
	  return 172 /* 0xac */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALXY) || ((cached_type == TYPE_MUL) || ((cached_type == TYPE_MLA) || ((cached_type == TYPE_MULS) || ((cached_type == TYPE_MLAS) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_UMLALS) || ((cached_type == TYPE_SMULLS) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_SMLAWX) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))))))))))))))))
        {
	  return 173 /* 0xad */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 174 /* 0xae */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 175 /* 0xaf */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD2) || (cached_type == TYPE_LOAD3)))
        {
	  return 176 /* 0xb0 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 177 /* 0xb1 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE2) || (cached_type == TYPE_STORE3)))
        {
	  return 178 /* 0xb2 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 179 /* 0xb3 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 180 /* 0xb4 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 181 /* 0xb5 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))))
        {
	  return 182 /* 0xb6 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))))
        {
	  return 183 /* 0xb7 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 185 /* 0xb9 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 186 /* 0xba */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 187 /* 0xbb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 188 /* 0xbc */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 189 /* 0xbd */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 190 /* 0xbe */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 191 /* 0xbf */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 192 /* 0xc0 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 193 /* 0xc1 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FMOV) || ((cached_type == TYPE_FMULS) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD))))))))))))
        {
	  return 194 /* 0xc2 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 195 /* 0xc3 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 196 /* 0xc4 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 197 /* 0xc5 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 198 /* 0xc6 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 199 /* 0xc7 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 200 /* 0xc8 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 201 /* 0xc9 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 202 /* 0xca */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 203 /* 0xcb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 204 /* 0xcc */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 205 /* 0xcd */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 206 /* 0xce */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 207 /* 0xcf */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 208 /* 0xd0 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 209 /* 0xd1 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 210 /* 0xd2 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ADR) || ((cached_type == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_EXTEND)))))))) || (((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG))) && (! (get_attr_length (insn) == 8)))))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_REG))))))))))))))))))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))
        {
	  return 213 /* 0xd5 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 214 /* 0xd6 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 215 /* 0xd7 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 216 /* 0xd8 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 217 /* 0xd9 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 218 /* 0xda */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 219 /* 0xdb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 220 /* 0xdc */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 221 /* 0xdd */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 222 /* 0xde */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 223 /* 0xdf */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FMOV) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))))))))))
        {
	  return 224 /* 0xe0 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 225 /* 0xe1 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 226 /* 0xe2 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MUL))
        {
	  return 227 /* 0xe3 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 228 /* 0xe4 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MLA))
        {
	  return 229 /* 0xe5 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 230 /* 0xe6 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMACD))
        {
	  return 231 /* 0xe7 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFMAD))
        {
	  return 232 /* 0xe8 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 233 /* 0xe9 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 234 /* 0xea */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 235 /* 0xeb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 236 /* 0xec */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 237 /* 0xed */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 238 /* 0xee */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 239 /* 0xef */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 240 /* 0xf0 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 241 /* 0xf1 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_is_neon_type = get_attr_is_neon_type (insn)) == IS_NEON_TYPE_YES) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_OTHER)))
        {
	  return 242 /* 0xf2 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))
        {
	  return 243 /* 0xf3 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND))))))
        {
	  return 244 /* 0xf4 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))))
        {
	  return 245 /* 0xf5 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS))))))))))
        {
	  return 246 /* 0xf6 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMMUL))))
        {
	  return 247 /* 0xf7 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || ((cached_type == TYPE_SMLAXY) || ((cached_type == TYPE_SMLAWY) || ((cached_type == TYPE_SMMLA) || ((cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLSD)))))))
        {
	  return 248 /* 0xf8 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_UMLAL) || ((cached_type == TYPE_UMAAL) || (cached_type == TYPE_SMLALXY)))))))
        {
	  return 249 /* 0xf9 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULWY) || ((cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUSD))))
        {
	  return 250 /* 0xfa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || (cached_type == TYPE_SMLSLD)))
        {
	  return 251 /* 0xfb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || (cached_type == TYPE_LOAD_BYTE))))
        {
	  return 252 /* 0xfc */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 253 /* 0xfd */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)))
        {
	  return 254 /* 0xfe */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 255 /* 0xff */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 256 /* 0x100 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 257 /* 0x101 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))))
        {
	  return 258 /* 0x102 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 259 /* 0x103 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 260 /* 0x104 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 261 /* 0x105 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 262 /* 0x106 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 263 /* 0x107 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 264 /* 0x108 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD))))))))
        {
	  return 265 /* 0x109 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))
        {
	  return 266 /* 0x10a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRC))
        {
	  return 267 /* 0x10b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRRC))
        {
	  return 268 /* 0x10c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_1))
        {
	  return 269 /* 0x10d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_2))
        {
	  return 270 /* 0x10e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_3))
        {
	  return 271 /* 0x10f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_4))
        {
	  return 272 /* 0x110 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_5))
        {
	  return 273 /* 0x111 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 274 /* 0x112 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VMOV))
        {
	  return 275 /* 0x113 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA))
        {
	  return 276 /* 0x114 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 277 /* 0x115 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 278 /* 0x116 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 279 /* 0x117 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 280 /* 0x118 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 281 /* 0x119 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 282 /* 0x11a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 283 /* 0x11b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 284 /* 0x11c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 285 /* 0x11d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 286 /* 0x11e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 287 /* 0x11f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 288 /* 0x120 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 289 /* 0x121 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 290 /* 0x122 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 291 /* 0x123 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 292 /* 0x124 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 293 /* 0x125 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 294 /* 0x126 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 295 /* 0x127 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 296 /* 0x128 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 297 /* 0x129 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 298 /* 0x12a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 299 /* 0x12b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 300 /* 0x12c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 301 /* 0x12d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 302 /* 0x12e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 303 /* 0x12f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RSQRTS_S_Q)))
        {
	  return 304 /* 0x130 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 305 /* 0x131 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 306 /* 0x132 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 307 /* 0x133 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_LDR))
        {
	  return 308 /* 0x134 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_STR))
        {
	  return 309 /* 0x135 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 310 /* 0x136 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 311 /* 0x137 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 312 /* 0x138 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 313 /* 0x139 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 314 /* 0x13a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 315 /* 0x13b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 316 /* 0x13c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 317 /* 0x13d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 318 /* 0x13e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 319 /* 0x13f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 320 /* 0x140 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 321 /* 0x141 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR))
        {
	  return 322 /* 0x142 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 323 /* 0x143 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))))))
        {
	  return 324 /* 0x144 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))
        {
	  return 325 /* 0x145 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) || ((cached_type == TYPE_LOAD2) || ((cached_type == TYPE_LOAD_BYTE) || ((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD))))))
        {
	  return 326 /* 0x146 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 327 /* 0x147 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || ((cached_type == TYPE_STORE2) || ((cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))))
        {
	  return 328 /* 0x148 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 329 /* 0x149 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMULXY))
        {
	  return 330 /* 0x14a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_SMLAXY))
        {
	  return 331 /* 0x14b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR))))
        {
	  return 332 /* 0x14c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_SMMLA)))
        {
	  return 333 /* 0x14d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_SMULLS) || ((cached_type == TYPE_UMULLS) || ((cached_type == TYPE_SMLAL) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMLALS)))))))))
        {
	  return 334 /* 0x14e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 335 /* 0x14f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 336 /* 0x150 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_F_MCR) || ((cached_type == TYPE_F_MCRR) || ((cached_type == TYPE_F_MRC) || ((cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG)))))))))))
        {
	  return 337 /* 0x151 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))))
        {
	  return 338 /* 0x152 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 339 /* 0x153 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 340 /* 0x154 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 341 /* 0x155 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 342 /* 0x156 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 343 /* 0x157 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 344 /* 0x158 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 345 /* 0x159 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRC))
        {
	  return 346 /* 0x15a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRRC))
        {
	  return 347 /* 0x15b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_1))
        {
	  return 348 /* 0x15c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_2))
        {
	  return 349 /* 0x15d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_3))
        {
	  return 350 /* 0x15e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_4))
        {
	  return 351 /* 0x15f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_5))
        {
	  return 352 /* 0x160 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 353 /* 0x161 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VMOV))
        {
	  return 354 /* 0x162 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA))
        {
	  return 355 /* 0x163 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 356 /* 0x164 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 357 /* 0x165 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 358 /* 0x166 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 359 /* 0x167 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 360 /* 0x168 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 361 /* 0x169 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 362 /* 0x16a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 363 /* 0x16b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 364 /* 0x16c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 365 /* 0x16d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 366 /* 0x16e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 367 /* 0x16f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 368 /* 0x170 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 369 /* 0x171 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 370 /* 0x172 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 371 /* 0x173 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 372 /* 0x174 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 373 /* 0x175 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 374 /* 0x176 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 375 /* 0x177 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 376 /* 0x178 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 377 /* 0x179 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 378 /* 0x17a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 379 /* 0x17b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 380 /* 0x17c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 381 /* 0x17d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 382 /* 0x17e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ))
        {
	  return 383 /* 0x17f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 384 /* 0x180 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 385 /* 0x181 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 386 /* 0x182 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_LDR))
        {
	  return 387 /* 0x183 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_STR))
        {
	  return 388 /* 0x184 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 389 /* 0x185 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 390 /* 0x186 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 391 /* 0x187 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 392 /* 0x188 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 393 /* 0x189 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 394 /* 0x18a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 395 /* 0x18b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 396 /* 0x18c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 397 /* 0x18d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 398 /* 0x18e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 399 /* 0x18f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 400 /* 0x190 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES))
        {
	  return 401 /* 0x191 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR))
        {
	  return 402 /* 0x192 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 403 /* 0x193 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))))
        {
	  return 404 /* 0x194 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_CRC) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))))))))
        {
	  return 405 /* 0x195 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 406 /* 0x196 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 407 /* 0x197 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))
        {
	  return 408 /* 0x198 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 409 /* 0x199 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 410 /* 0x19a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 411 /* 0x19b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 412 /* 0x19c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || (cached_type == TYPE_LOAD2))))
        {
	  return 413 /* 0x19d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 414 /* 0x19e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)))
        {
	  return 415 /* 0x19f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 416 /* 0x1a0 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD))
        {
	  return 417 /* 0x1a1 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD_Q))
        {
	  return 418 /* 0x1a2 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 419 /* 0x1a3 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 420 /* 0x1a4 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 421 /* 0x1a5 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 422 /* 0x1a6 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 423 /* 0x1a7 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 424 /* 0x1a8 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA))
        {
	  return 425 /* 0x1a9 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA_Q))
        {
	  return 426 /* 0x1aa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 427 /* 0x1ab */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 428 /* 0x1ac */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 429 /* 0x1ad */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 430 /* 0x1ae */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 431 /* 0x1af */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 432 /* 0x1b0 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 433 /* 0x1b1 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 434 /* 0x1b2 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 435 /* 0x1b3 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 436 /* 0x1b4 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 437 /* 0x1b5 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 438 /* 0x1b6 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 439 /* 0x1b7 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 440 /* 0x1b8 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL))
        {
	  return 441 /* 0x1b9 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 442 /* 0x1ba */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA))
        {
	  return 443 /* 0x1bb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 444 /* 0x1bc */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 445 /* 0x1bd */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 446 /* 0x1be */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS))
        {
	  return 447 /* 0x1bf */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 448 /* 0x1c0 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP))
        {
	  return 449 /* 0x1c1 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 450 /* 0x1c2 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 451 /* 0x1c3 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 452 /* 0x1c4 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TO_GP))
        {
	  return 453 /* 0x1c5 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_A))
        {
	  return 454 /* 0x1c6 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_B))
        {
	  return 455 /* 0x1c7 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_C))
        {
	  return 456 /* 0x1c8 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_D))
        {
	  return 457 /* 0x1c9 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_E))
        {
	  return 458 /* 0x1ca */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_F))
        {
	  return 459 /* 0x1cb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_A))
        {
	  return 460 /* 0x1cc */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_B))
        {
	  return 461 /* 0x1cd */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_C))
        {
	  return 462 /* 0x1ce */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_D))
        {
	  return 463 /* 0x1cf */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_E))
        {
	  return 464 /* 0x1d0 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_F))
        {
	  return 465 /* 0x1d1 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_G))
        {
	  return 466 /* 0x1d2 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_H))
        {
	  return 467 /* 0x1d3 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 468 /* 0x1d4 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 469 /* 0x1d5 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDD))
        {
	  return 470 /* 0x1d6 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 471 /* 0x1d7 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 472 /* 0x1d8 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 473 /* 0x1d9 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 474 /* 0x1da */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))
        {
	  return 475 /* 0x1db */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPD))
        {
	  return 476 /* 0x1dc */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 477 /* 0x1dd */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHD))
        {
	  return 478 /* 0x1de */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 479 /* 0x1df */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 480 /* 0x1e0 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 481 /* 0x1e1 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 482 /* 0x1e2 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 483 /* 0x1e3 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 484 /* 0x1e4 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 485 /* 0x1e5 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))
        {
	  return 486 /* 0x1e6 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT))))))))))))))
        {
	  return 487 /* 0x1e7 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))))
        {
	  return 488 /* 0x1e8 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_MULS) || ((cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))))
        {
	  return 489 /* 0x1e9 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || ((cached_type == TYPE_MLAS) || (cached_type == TYPE_SMMLA))))
        {
	  return 490 /* 0x1ea */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAD) || ((cached_type == TYPE_SMLADX) || ((cached_type == TYPE_SMLSD) || ((cached_type == TYPE_SMLSDX) || ((cached_type == TYPE_SMUAD) || ((cached_type == TYPE_SMUADX) || ((cached_type == TYPE_SMUSD) || (cached_type == TYPE_SMUSDX)))))))))
        {
	  return 491 /* 0x1eb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLAL) || ((cached_type == TYPE_SMLALS) || ((cached_type == TYPE_UMAAL) || ((cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMLALS))))))
        {
	  return 492 /* 0x1ec */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMLALD) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLSLD))))
        {
	  return 493 /* 0x1ed */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_SMULL) || ((cached_type == TYPE_SMULLS) || ((cached_type == TYPE_UMULL) || (cached_type == TYPE_UMULLS)))))
        {
	  return 494 /* 0x1ee */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 495 /* 0x1ef */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 496 /* 0x1f0 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 497 /* 0x1f1 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || (cached_type == TYPE_LOAD2))))
        {
	  return 498 /* 0x1f2 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 499 /* 0x1f3 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 500 /* 0x1f4 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)))
        {
	  return 501 /* 0x1f5 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 502 /* 0x1f6 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 503 /* 0x1f7 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 504 /* 0x1f8 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ABD))
        {
	  return 505 /* 0x1f9 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ABD_Q))
        {
	  return 506 /* 0x1fa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 507 /* 0x1fb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 508 /* 0x1fc */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 509 /* 0x1fd */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 510 /* 0x1fe */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 511 /* 0x1ff */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 512 /* 0x200 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MLA))
        {
	  return 513 /* 0x201 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MLA_Q))
        {
	  return 514 /* 0x202 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 515 /* 0x203 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 516 /* 0x204 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 517 /* 0x205 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 518 /* 0x206 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 519 /* 0x207 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 520 /* 0x208 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 521 /* 0x209 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 522 /* 0x20a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 523 /* 0x20b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 524 /* 0x20c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 525 /* 0x20d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 526 /* 0x20e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 527 /* 0x20f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 528 /* 0x210 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MUL))
        {
	  return 529 /* 0x211 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 530 /* 0x212 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MLA))
        {
	  return 531 /* 0x213 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 532 /* 0x214 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 533 /* 0x215 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 534 /* 0x216 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_BITOPS))
        {
	  return 535 /* 0x217 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 536 /* 0x218 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FROM_GP))
        {
	  return 537 /* 0x219 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 538 /* 0x21a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 539 /* 0x21b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 540 /* 0x21c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_TO_GP))
        {
	  return 541 /* 0x21d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 542 /* 0x21e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 543 /* 0x21f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_A))
        {
	  return 544 /* 0x220 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_B))
        {
	  return 545 /* 0x221 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_C))
        {
	  return 546 /* 0x222 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_D))
        {
	  return 547 /* 0x223 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_E))
        {
	  return 548 /* 0x224 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_F))
        {
	  return 549 /* 0x225 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_G))
        {
	  return 550 /* 0x226 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_H))
        {
	  return 551 /* 0x227 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 552 /* 0x228 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_STORE_A))
        {
	  return 553 /* 0x229 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_STORE_B))
        {
	  return 554 /* 0x22a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 555 /* 0x22b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 556 /* 0x22c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDD))
        {
	  return 557 /* 0x22d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 558 /* 0x22e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || ((cached_type == TYPE_FFMAS) || ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))))
        {
	  return 559 /* 0x22f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD))))))
        {
	  return 560 /* 0x230 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 561 /* 0x231 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHD))
        {
	  return 562 /* 0x232 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCSEL)))
        {
	  return 563 /* 0x233 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 564 /* 0x234 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 565 /* 0x235 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 566 /* 0x236 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 567 /* 0x237 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 568 /* 0x238 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CSEL) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))))))
        {
	  return 569 /* 0x239 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_CRC) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_EXT) || ((cached_type == TYPE_ALUS_EXT) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))))))))))))))))
        {
	  return 570 /* 0x23a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 571 /* 0x23b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_UDIV))
        {
	  return 572 /* 0x23c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_SDIV))
        {
	  return 573 /* 0x23d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || (cached_type == TYPE_LOAD_ACQ))))
        {
	  return 574 /* 0x23e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE_REL)))
        {
	  return 575 /* 0x23f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 576 /* 0x240 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 577 /* 0x241 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 578 /* 0x242 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 579 /* 0x243 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 580 /* 0x244 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FMOV) || ((cached_type == TYPE_FMULS) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_FCMPS) || ((cached_type == TYPE_FCMPD) || ((cached_type == TYPE_FCSEL) || ((cached_type == TYPE_F_RINTS) || ((cached_type == TYPE_F_RINTD) || ((cached_type == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))))))))))))))))
        {
	  return 581 /* 0x245 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 582 /* 0x246 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 583 /* 0x247 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || ((cached_type == TYPE_FMACD) || ((cached_type == TYPE_FFMAS) || (cached_type == TYPE_FFMAD)))))
        {
	  return 584 /* 0x248 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 585 /* 0x249 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 586 /* 0x24a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE))
        {
	  return 587 /* 0x24b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESMC))
        {
	  return 588 /* 0x24c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))
        {
	  return 589 /* 0x24d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 590 /* 0x24e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 591 /* 0x24f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 592 /* 0x250 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 593 /* 0x251 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 594 /* 0x252 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 595 /* 0x253 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 596 /* 0x254 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD2_2REG_Q))
        {
	  return 597 /* 0x255 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD1_1REG_Q))
        {
	  return 598 /* 0x256 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 599 /* 0x257 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 600 /* 0x258 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_is_neon_type = get_attr_is_neon_type (insn)) == IS_NEON_TYPE_YES))
        {
	  return 601 /* 0x259 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))))
        {
	  return 602 /* 0x25a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_CRC) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))))))))
        {
	  return 603 /* 0x25b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))
        {
	  return 604 /* 0x25c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 605 /* 0x25d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 606 /* 0x25e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 607 /* 0x25f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 608 /* 0x260 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || ((cached_type == TYPE_LOAD1) || (cached_type == TYPE_LOAD2))))
        {
	  return 609 /* 0x261 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 610 /* 0x262 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE1) || (cached_type == TYPE_STORE2)))
        {
	  return 611 /* 0x263 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 612 /* 0x264 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ABD))
        {
	  return 613 /* 0x265 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ABD_Q))
        {
	  return 614 /* 0x266 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 615 /* 0x267 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 616 /* 0x268 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 617 /* 0x269 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 618 /* 0x26a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 619 /* 0x26b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 620 /* 0x26c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MLA))
        {
	  return 621 /* 0x26d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MLA_Q))
        {
	  return 622 /* 0x26e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 623 /* 0x26f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 624 /* 0x270 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 625 /* 0x271 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 626 /* 0x272 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 627 /* 0x273 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 628 /* 0x274 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 629 /* 0x275 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 630 /* 0x276 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 631 /* 0x277 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 632 /* 0x278 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 633 /* 0x279 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_REDUCTIONS_Q))
        {
	  return 634 /* 0x27a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 635 /* 0x27b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 636 /* 0x27c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 637 /* 0x27d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MUL))
        {
	  return 638 /* 0x27e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 639 /* 0x27f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MLA))
        {
	  return 640 /* 0x280 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 641 /* 0x281 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 642 /* 0x282 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 643 /* 0x283 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS))
        {
	  return 644 /* 0x284 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS_Q))
        {
	  return 645 /* 0x285 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_BITOPS))
        {
	  return 646 /* 0x286 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 647 /* 0x287 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FROM_GP))
        {
	  return 648 /* 0x288 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 649 /* 0x289 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 650 /* 0x28a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 651 /* 0x28b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_TO_GP))
        {
	  return 652 /* 0x28c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_A))
        {
	  return 653 /* 0x28d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_B))
        {
	  return 654 /* 0x28e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_C))
        {
	  return 655 /* 0x28f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_D))
        {
	  return 656 /* 0x290 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_E))
        {
	  return 657 /* 0x291 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_F))
        {
	  return 658 /* 0x292 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_A))
        {
	  return 659 /* 0x293 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_B))
        {
	  return 660 /* 0x294 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_COMPLEX))
        {
	  return 661 /* 0x295 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 662 /* 0x296 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 663 /* 0x297 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 664 /* 0x298 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || ((cached_type == TYPE_FFMAS) || ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))))
        {
	  return 665 /* 0x299 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))
        {
	  return 666 /* 0x29a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 667 /* 0x29b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD)))
        {
	  return 668 /* 0x29c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMOV))
        {
	  return 669 /* 0x29d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || ((cached_type == TYPE_FSQRTS) || ((cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_SQRT_S)))))
        {
	  return 670 /* 0x29e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || ((cached_type == TYPE_FSQRTD) || ((cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_SQRT_D)))))
        {
	  return 671 /* 0x29f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || ((cached_type == TYPE_FSQRTD) || ((cached_type == TYPE_NEON_FP_DIV_S_Q) || ((cached_type == TYPE_NEON_FP_DIV_D_Q) || ((cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))))))
        {
	  return 672 /* 0x2a0 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_AESE) || ((cached_type == TYPE_CRYPTO_AESMC) || ((cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))))
        {
	  return 673 /* 0x2a1 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 674 /* 0x2a2 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 675 /* 0x2a3 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 676 /* 0x2a4 */;
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
	  return 677 /* 0x2a5 */;
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
	  return 678 /* 0x2a6 */;
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
	  return 679 /* 0x2a7 */;
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
	  return 680 /* 0x2a8 */;
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
	  return 681 /* 0x2a9 */;
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
	  return 682 /* 0x2aa */;
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
	  return 683 /* 0x2ab */;
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
	  return 684 /* 0x2ac */;
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
	  return 685 /* 0x2ad */;
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
	  return 686 /* 0x2ae */;
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
	  return 687 /* 0x2af */;
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
	  return 688 /* 0x2b0 */;
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
	  return 689 /* 0x2b1 */;
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
	  return 690 /* 0x2b2 */;
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
	  return 691 /* 0x2b3 */;
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
	  return 692 /* 0x2b4 */;
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
	  return 693 /* 0x2b5 */;
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
	  return 694 /* 0x2b6 */;
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
	  return 695 /* 0x2b7 */;
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
	  return 696 /* 0x2b8 */;
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
	  return 697 /* 0x2b9 */;
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
	  return 698 /* 0x2ba */;
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
	  return 699 /* 0x2bb */;
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
	  return 700 /* 0x2bc */;
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
	  return 701 /* 0x2bd */;
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
	  return 702 /* 0x2be */;
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
	  return 703 /* 0x2bf */;
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
	  return 704 /* 0x2c0 */;
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
	  return 705 /* 0x2c1 */;
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
	  return 706 /* 0x2c2 */;
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
	  return 707 /* 0x2c3 */;
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
	  return 708 /* 0x2c4 */;
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
	  return 709 /* 0x2c5 */;
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
	  return 710 /* 0x2c6 */;
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
	  return 711 /* 0x2c7 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_F_MCR) || ((cached_type == TYPE_F_MRC) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN))))))))))))))))))))))))))))))))))))))
        {
	  return 712 /* 0x2c8 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM)))
        {
	  return 713 /* 0x2c9 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SMLAXY) || ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMULXY)))))
        {
	  return 714 /* 0x2ca */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_MULS) || ((cached_type == TYPE_UMULL) || (cached_type == TYPE_SMULL)))))
        {
	  return 715 /* 0x2cb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 716 /* 0x2cc */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_EXTEND))
        {
	  return 717 /* 0x2cd */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_MLA) || (cached_type == TYPE_MLAS)))
        {
	  return 718 /* 0x2ce */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 719 /* 0x2cf */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 720 /* 0x2d0 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 721 /* 0x2d1 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 722 /* 0x2d2 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 723 /* 0x2d3 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 724 /* 0x2d4 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 725 /* 0x2d5 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FADDD) || ((cached_type == TYPE_FMOV) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FCMPD) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || ((cached_type == TYPE_F_CVTI2F) || ((cached_type == TYPE_FCMPS) || ((cached_type == TYPE_FMULS) || (cached_type == TYPE_F_FLAG)))))))))))))))
        {
	  return 726 /* 0x2d6 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 727 /* 0x2d7 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 728 /* 0x2d8 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 729 /* 0x2d9 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 730 /* 0x2da */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULD))
        {
	  return 731 /* 0x2db */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 732 /* 0x2dc */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 733 /* 0x2dd */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 734 /* 0x2de */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 735 /* 0x2df */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCRR) || (cached_type == TYPE_F_MRRC)))
        {
	  return 736 /* 0x2e0 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || ((cached_type == TYPE_MVN_IMM) || ((cached_type == TYPE_MVN_REG) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MVN_SHIFT_REG) || ((cached_type == TYPE_MRS) || ((cached_type == TYPE_MULTIPLE) || (cached_type == TYPE_NO_INSN)))))))))))))))))))))))))))))))))))))))) || (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES))))
        {
	  return 737 /* 0x2e1 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 738 /* 0x2e2 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)) && (
#line 60 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn))))
        {
	  return 739 /* 0x2e3 */;
        }
      else if (((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1)) && (! (
#line 60 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn)))))
        {
	  return 740 /* 0x2e4 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 741 /* 0x2e5 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 742 /* 0x2e6 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD3))
        {
	  return 743 /* 0x2e7 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE3))
        {
	  return 744 /* 0x2e8 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD4))
        {
	  return 745 /* 0x2e9 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE4))
        {
	  return 746 /* 0x2ea */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 747 /* 0x2eb */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 748 /* 0x2ec */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BLOCK))
        {
	  return 749 /* 0x2ed */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 750 /* 0x2ee */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || (cached_type == TYPE_FCONSTS)))
        {
	  return 751 /* 0x2ef */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || ((cached_type == TYPE_F_MRRC) || ((cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))))
        {
	  return 752 /* 0x2f0 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FMULS))
        {
	  return 753 /* 0x2f1 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 754 /* 0x2f2 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FFARITHS))
        {
	  return 755 /* 0x2f3 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FADDS))
        {
	  return 756 /* 0x2f4 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCMPS))
        {
	  return 757 /* 0x2f5 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_FLAG))
        {
	  return 758 /* 0x2f6 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F))))
        {
	  return 759 /* 0x2f7 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADS))
        {
	  return 760 /* 0x2f8 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORES))
        {
	  return 761 /* 0x2f9 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_LOADD))
        {
	  return 762 /* 0x2fa */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_STORED))
        {
	  return 763 /* 0x2fb */;
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
	  return 764 /* 0x2fc */;
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
	  return 765 /* 0x2fd */;
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
	  return 766 /* 0x2fe */;
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
	  return 767 /* 0x2ff */;
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
	  return 768 /* 0x300 */;
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
	  return 769 /* 0x301 */;
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
	  return 770 /* 0x302 */;
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
	  return 771 /* 0x303 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)))) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET))))
        {
	  return 772 /* 0x304 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_MOV_IMM) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)))) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 773 /* 0x305 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG)))))))))))))))))) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET))))
        {
	  return 774 /* 0x306 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALUS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SREG) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGICS_REG) || ((cached_type == TYPE_ADC_IMM) || ((cached_type == TYPE_ADCS_IMM) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_ADCS_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_BFM) || ((cached_type == TYPE_REV) || ((cached_type == TYPE_ALU_DSP_REG) || ((cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG)))))))))))))))))) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 775 /* 0x307 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))) && ((! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && ((cached_shift = get_attr_shift (insn)) == 1))))
        {
	  return 776 /* 0x308 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG))))))))))))) && (((cached_conds = get_attr_conds (insn)) == CONDS_SET) && ((cached_shift = get_attr_shift (insn)) == 1))))
        {
	  return 777 /* 0x309 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))))))))))
        {
	  return 778 /* 0x30a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_conds = get_attr_conds (insn)) == CONDS_SET) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_LOGICS_SHIFT_IMM) || ((cached_type == TYPE_ALU_SHIFT_REG) || ((cached_type == TYPE_LOGIC_SHIFT_REG) || ((cached_type == TYPE_ALUS_SHIFT_REG) || ((cached_type == TYPE_LOGICS_SHIFT_REG) || ((cached_type == TYPE_EXTEND) || ((cached_type == TYPE_MOV_SHIFT) || ((cached_type == TYPE_MVN_SHIFT) || ((cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))))))))))))))
        {
	  return 779 /* 0x30b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_mul64 = get_attr_mul64 (insn)) == MUL64_YES)))
        {
	  return 780 /* 0x30c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 781 /* 0x30d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 782 /* 0x30e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 783 /* 0x30f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD1)))
        {
	  return 784 /* 0x310 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 785 /* 0x311 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 786 /* 0x312 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 787 /* 0x313 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD3) || (cached_type == TYPE_LOAD4)))
        {
	  return 788 /* 0x314 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_STORE3) || (cached_type == TYPE_STORE4)))
        {
	  return 789 /* 0x315 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 790 /* 0x316 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 791 /* 0x317 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 792 /* 0x318 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 793 /* 0x319 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMACS) || (cached_type == TYPE_FMACD)))
        {
	  return 794 /* 0x31a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FFARITHS) || ((cached_type == TYPE_FFARITHD) || ((cached_type == TYPE_FCONSTS) || ((cached_type == TYPE_FCONSTD) || ((cached_type == TYPE_FCMPS) || ((cached_type == TYPE_FCMPD) || ((cached_type == TYPE_F_CVT) || ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))))))))))
        {
	  return 795 /* 0x31b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 796 /* 0x31c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 797 /* 0x31d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MRC) || ((cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG))))
        {
	  return 798 /* 0x31e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 799 /* 0x31f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BRANCH))
        {
	  return 800 /* 0x320 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NO_INSN))
        {
	  return 801 /* 0x321 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_CALL))
        {
	  return 802 /* 0x322 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_LOADD) || (cached_type == TYPE_F_LOADS)))
        {
	  return 803 /* 0x323 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_STORED) || (cached_type == TYPE_F_STORES)))
        {
	  return 804 /* 0x324 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FMOV) || ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD))))
        {
	  return 805 /* 0x325 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_MCR))
        {
	  return 806 /* 0x326 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_MRC))
        {
	  return 807 /* 0x327 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD2))
        {
	  return 808 /* 0x328 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE2))
        {
	  return 809 /* 0x329 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_LOAD1) && (get_attr_fp (insn) == FP_YES)))
        {
	  return 810 /* 0x32a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_LOAD1))
        {
	  return 811 /* 0x32b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_STORE1))
        {
	  return 812 /* 0x32c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MRS))))
        {
	  return 813 /* 0x32d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALU_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALU_SHIFT_IMM) || ((cached_type == TYPE_ALU_EXT) || ((cached_type == TYPE_ADC_REG) || ((cached_type == TYPE_CSEL) || ((cached_type == TYPE_LOGIC_IMM) || ((cached_type == TYPE_LOGIC_REG) || ((cached_type == TYPE_LOGIC_SHIFT_IMM) || ((cached_type == TYPE_CLZ) || ((cached_type == TYPE_RBIT) || ((cached_type == TYPE_SHIFT_REG) || ((cached_type == TYPE_ADR) || ((cached_type == TYPE_MOV_REG) || ((cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_EXTEND)))))))))))))))))
        {
	  return 814 /* 0x32e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_REV))
        {
	  return 815 /* 0x32f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_ALUS_IMM) || ((cached_type == TYPE_ALU_SREG) || ((cached_type == TYPE_ALUS_SHIFT_IMM) || ((cached_type == TYPE_ALUS_EXT) || ((cached_type == TYPE_LOGICS_IMM) || ((cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM))))))))
        {
	  return 816 /* 0x330 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_MUL) || ((cached_type == TYPE_MLA) || ((cached_type == TYPE_SMULL) || ((cached_type == TYPE_UMULL) || ((cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL)))))))
        {
	  return 817 /* 0x331 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 818 /* 0x332 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FCMPD) || (cached_type == TYPE_FCMPS)))
        {
	  return 819 /* 0x333 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FCSEL))
        {
	  return 820 /* 0x334 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_BFM))
        {
	  return 821 /* 0x335 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_RINTD) || (cached_type == TYPE_F_RINTS)))
        {
	  return 822 /* 0x336 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVT))
        {
	  return 823 /* 0x337 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTF2I))
        {
	  return 824 /* 0x338 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_F_CVTI2F))
        {
	  return 825 /* 0x339 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FADDD) || ((cached_type == TYPE_FADDS) || ((cached_type == TYPE_FMULD) || (cached_type == TYPE_FMULS)))))
        {
	  return 826 /* 0x33a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 827 /* 0x33b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FDIVD))
        {
	  return 828 /* 0x33c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_FSQRTD))
        {
	  return 829 /* 0x33d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_FFARITHD) || (cached_type == TYPE_FFARITHS)))
        {
	  return 830 /* 0x33e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_F_MINMAXD) || (cached_type == TYPE_F_MINMAXS)))
        {
	  return 831 /* 0x33f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_DUP) || (cached_type == TYPE_NEON_DUP_Q)))
        {
	  return 832 /* 0x340 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD1_1REG) || (cached_type == TYPE_NEON_LOAD1_1REG_Q)))
        {
	  return 833 /* 0x341 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_STORE1_1REG) || (cached_type == TYPE_NEON_STORE1_1REG_Q)))
        {
	  return 834 /* 0x342 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_LOGIC) || ((cached_type == TYPE_NEON_LOGIC_Q) || ((cached_type == TYPE_NEON_BSL) || ((cached_type == TYPE_NEON_BSL_Q) || ((cached_type == TYPE_NEON_MOVE) || (cached_type == TYPE_NEON_MOVE_Q)))))))
        {
	  return 835 /* 0x343 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 836 /* 0x344 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FROM_GP) || ((cached_type == TYPE_NEON_FROM_GP_Q) || ((cached_type == TYPE_NEON_INS) || (cached_type == TYPE_NEON_INS_Q)))))
        {
	  return 837 /* 0x345 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SHIFT_IMM) || ((cached_type == TYPE_NEON_SHIFT_IMM_Q) || ((cached_type == TYPE_NEON_SHIFT_REG) || ((cached_type == TYPE_NEON_SHIFT_REG_Q) || ((cached_type == TYPE_NEON_SHIFT_IMM_LONG) || ((cached_type == TYPE_NEON_SAT_SHIFT_IMM) || ((cached_type == TYPE_NEON_SAT_SHIFT_IMM_Q) || ((cached_type == TYPE_NEON_SAT_SHIFT_IMM_NARROW_Q) || ((cached_type == TYPE_NEON_SAT_SHIFT_REG) || ((cached_type == TYPE_NEON_SAT_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_NARROW_Q))))))))))))
        {
	  return 838 /* 0x346 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_ADD) || ((cached_type == TYPE_NEON_ADD_Q) || ((cached_type == TYPE_NEON_SUB) || ((cached_type == TYPE_NEON_SUB_Q) || ((cached_type == TYPE_NEON_NEG) || ((cached_type == TYPE_NEON_NEG_Q) || ((cached_type == TYPE_NEON_ABS) || ((cached_type == TYPE_NEON_ABS_Q) || ((cached_type == TYPE_NEON_ABD_Q) || ((cached_type == TYPE_NEON_ARITH_ACC) || ((cached_type == TYPE_NEON_ARITH_ACC_Q) || ((cached_type == TYPE_NEON_REDUC_ADD) || ((cached_type == TYPE_NEON_REDUC_ADD_Q) || ((cached_type == TYPE_NEON_ADD_HALVE) || ((cached_type == TYPE_NEON_ADD_HALVE_Q) || ((cached_type == TYPE_NEON_SUB_HALVE) || ((cached_type == TYPE_NEON_SUB_HALVE_Q) || ((cached_type == TYPE_NEON_QADD) || ((cached_type == TYPE_NEON_QADD_Q) || ((cached_type == TYPE_NEON_COMPARE) || ((cached_type == TYPE_NEON_COMPARE_Q) || ((cached_type == TYPE_NEON_COMPARE_ZERO) || ((cached_type == TYPE_NEON_COMPARE_ZERO_Q) || ((cached_type == TYPE_NEON_TST) || (cached_type == TYPE_NEON_TST_Q))))))))))))))))))))))))))
        {
	  return 839 /* 0x347 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q)))
        {
	  return 840 /* 0x348 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_B) || ((cached_type == TYPE_NEON_MUL_B_Q) || ((cached_type == TYPE_NEON_MUL_H) || ((cached_type == TYPE_NEON_MUL_H_Q) || ((cached_type == TYPE_NEON_MUL_S) || ((cached_type == TYPE_NEON_MUL_S_Q) || ((cached_type == TYPE_NEON_FP_MUL_S_SCALAR) || ((cached_type == TYPE_NEON_FP_MUL_S_SCALAR_Q) || ((cached_type == TYPE_NEON_FP_MUL_D_SCALAR_Q) || ((cached_type == TYPE_NEON_MLA_B) || ((cached_type == TYPE_NEON_MLA_B_Q) || ((cached_type == TYPE_NEON_MLA_H) || ((cached_type == TYPE_NEON_MLA_H_Q) || ((cached_type == TYPE_NEON_MLA_S) || ((cached_type == TYPE_NEON_MLA_S_Q) || ((cached_type == TYPE_NEON_MLA_H_SCALAR) || ((cached_type == TYPE_NEON_MLA_H_SCALAR_Q) || ((cached_type == TYPE_NEON_MLA_S_SCALAR) || ((cached_type == TYPE_NEON_MLA_S_SCALAR_Q) || ((cached_type == TYPE_NEON_MLA_B_LONG) || ((cached_type == TYPE_NEON_MLA_H_LONG) || ((cached_type == TYPE_NEON_MLA_S_LONG) || ((cached_type == TYPE_NEON_FP_MUL_S) || ((cached_type == TYPE_NEON_FP_MUL_S_Q) || ((cached_type == TYPE_NEON_FP_MUL_D) || ((cached_type == TYPE_NEON_FP_MUL_D_Q) || ((cached_type == TYPE_NEON_FP_MLA_S) || ((cached_type == TYPE_NEON_FP_MLA_S_Q) || ((cached_type == TYPE_NEON_FP_MLA_D) || ((cached_type == TYPE_NEON_FP_MLA_D_Q) || ((cached_type == TYPE_NEON_FP_MLA_S_SCALAR) || ((cached_type == TYPE_NEON_FP_MLA_S_SCALAR_Q) || ((cached_type == TYPE_NEON_FP_MLA_D_SCALAR_Q) || ((cached_type == TYPE_NEON_SAT_MUL_B) || ((cached_type == TYPE_NEON_SAT_MUL_B_Q) || ((cached_type == TYPE_NEON_SAT_MUL_H) || ((cached_type == TYPE_NEON_SAT_MUL_H_Q) || ((cached_type == TYPE_NEON_SAT_MUL_S) || ((cached_type == TYPE_NEON_SAT_MUL_S_Q) || ((cached_type == TYPE_NEON_SAT_MUL_H_SCALAR) || ((cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_Q) || ((cached_type == TYPE_NEON_SAT_MUL_S_SCALAR) || ((cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_Q) || ((cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_LONG) || ((cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_LONG) || ((cached_type == TYPE_NEON_SAT_MLA_B_LONG) || ((cached_type == TYPE_NEON_SAT_MLA_H_LONG) || ((cached_type == TYPE_NEON_SAT_MLA_S_LONG) || ((cached_type == TYPE_NEON_SAT_MLA_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_SCALAR_LONG)))))))))))))))))))))))))))))))))))))))))))))))))))
        {
	  return 841 /* 0x349 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ABD_S) || ((cached_type == TYPE_NEON_FP_ABD_S_Q) || ((cached_type == TYPE_NEON_FP_ABD_D) || (cached_type == TYPE_NEON_FP_ABD_D_Q)))))
        {
	  return 842 /* 0x34a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ADDSUB_S) || ((cached_type == TYPE_NEON_FP_ADDSUB_S_Q) || ((cached_type == TYPE_NEON_FP_ADDSUB_D) || (cached_type == TYPE_NEON_FP_ADDSUB_D_Q)))))
        {
	  return 843 /* 0x34b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_DIV_S) || ((cached_type == TYPE_NEON_FP_DIV_S_Q) || ((cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_D_Q)))))
        {
	  return 844 /* 0x34c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_NEG_S) || ((cached_type == TYPE_NEON_FP_NEG_S_Q) || ((cached_type == TYPE_NEON_FP_NEG_D) || ((cached_type == TYPE_NEON_FP_NEG_D_Q) || ((cached_type == TYPE_NEON_FP_ABS_S) || ((cached_type == TYPE_NEON_FP_ABS_S_Q) || ((cached_type == TYPE_NEON_FP_ABS_D) || (cached_type == TYPE_NEON_FP_ABS_D_Q)))))))))
        {
	  return 845 /* 0x34d */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_ROUND_S) || ((cached_type == TYPE_NEON_FP_ROUND_S_Q) || ((cached_type == TYPE_NEON_FP_ROUND_D) || (cached_type == TYPE_NEON_FP_ROUND_D_Q)))))
        {
	  return 846 /* 0x34e */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_INT_TO_FP_S) || ((cached_type == TYPE_NEON_INT_TO_FP_S_Q) || ((cached_type == TYPE_NEON_INT_TO_FP_D) || ((cached_type == TYPE_NEON_INT_TO_FP_D_Q) || ((cached_type == TYPE_NEON_FP_CVT_WIDEN_S) || ((cached_type == TYPE_NEON_FP_CVT_NARROW_S_Q) || (cached_type == TYPE_NEON_FP_CVT_NARROW_D_Q))))))))
        {
	  return 847 /* 0x34f */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_REDUC_ADD_S) || ((cached_type == TYPE_NEON_FP_REDUC_ADD_S_Q) || ((cached_type == TYPE_NEON_FP_REDUC_ADD_D) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D_Q)))))
        {
	  return 848 /* 0x350 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_CLS) || (cached_type == TYPE_NEON_CLS_Q)))
        {
	  return 849 /* 0x351 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_STORE1_ONE_LANE) || (cached_type == TYPE_NEON_STORE1_ONE_LANE_Q)))
        {
	  return 850 /* 0x352 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SUB_HALVE_NARROW_Q) || (cached_type == TYPE_NEON_ADD_HALVE_NARROW_Q)))
        {
	  return 851 /* 0x353 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_SHIFT_ACC) || (cached_type == TYPE_NEON_SHIFT_ACC_Q)))
        {
	  return 852 /* 0x354 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_COMPARE_S) || ((cached_type == TYPE_NEON_FP_COMPARE_S_Q) || ((cached_type == TYPE_NEON_FP_COMPARE_D) || (cached_type == TYPE_NEON_FP_COMPARE_D_Q)))))
        {
	  return 853 /* 0x355 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_SQRT_S) || ((cached_type == TYPE_NEON_FP_SQRT_S_Q) || ((cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))))
        {
	  return 854 /* 0x356 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TBL1) || (cached_type == TYPE_NEON_TBL1_Q)))
        {
	  return 855 /* 0x357 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_TBL2) || (cached_type == TYPE_NEON_TBL2_Q)))
        {
	  return 856 /* 0x358 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_PERMUTE) || (cached_type == TYPE_NEON_PERMUTE_Q)))
        {
	  return 857 /* 0x359 */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_LOAD1_ALL_LANES))
        {
	  return 858 /* 0x35a */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPE_S) || ((cached_type == TYPE_NEON_FP_RECPE_S_Q) || ((cached_type == TYPE_NEON_FP_RECPE_D) || ((cached_type == TYPE_NEON_FP_RECPE_D_Q) || ((cached_type == TYPE_NEON_FP_RECPX_S) || ((cached_type == TYPE_NEON_FP_RECPX_S_Q) || ((cached_type == TYPE_NEON_FP_RECPX_D) || (cached_type == TYPE_NEON_FP_RECPX_D_Q)))))))))
        {
	  return 859 /* 0x35b */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (((cached_type = get_attr_type (insn)) == TYPE_NEON_FP_RECPS_S) || ((cached_type == TYPE_NEON_FP_RECPS_S_Q) || ((cached_type == TYPE_NEON_FP_RECPS_D) || (cached_type == TYPE_NEON_FP_RECPS_D_Q)))))
        {
	  return 860 /* 0x35c */;
        }
      else if ((((
#line 38 "/home/simon/work/goldilocks/tmp/work-shared/gcc-5.2.0-r0/gcc-5.2.0/gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type = get_attr_type (insn)) == TYPE_NEON_MUL_D_LONG))
        {
	  return 861 /* 0x35d */;
        }
      else
        {
	  return 863 /* 0x35f */;
        }

    }
}

