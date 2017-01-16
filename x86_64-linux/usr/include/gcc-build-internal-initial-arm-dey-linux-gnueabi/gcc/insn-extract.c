/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 4068:  /* *p arm_ssatsihi_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4013:  /* *p arm_store_release_exclusivesi */
    case 4012:  /* *p arm_store_release_exclusivehi */
    case 4011:  /* *p arm_store_release_exclusiveqi */
    case 4010:  /* *p arm_store_release_exclusivedi */
    case 4009:  /* *p arm_store_exclusivedi */
    case 4008:  /* *p arm_store_exclusivesi */
    case 4007:  /* *p arm_store_exclusivehi */
    case 4006:  /* *p arm_store_exclusiveqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3984:  /* *p *thumb2_mulsi_short */
    case 3983:  /* *p *thumb2_subsi_short */
    case 3982:  /* *p *thumb2_addsi_short */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3981:  /* *p *thumb2_movsi_shortim */
    case 3980:  /* *p *thumb2_movhi_shortim */
    case 3979:  /* *p *thumb2_movqi_shortim */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3978:  /* *p *thumb2_shiftsi3_short */
    case 3977:  /* *p *thumb2_alusi3_short */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3959:  /* *p *combine_vcvtf2i */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3936:  /* *p *fnmadddf4 */
    case 3935:  /* *p *fnmaddsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3934:  /* *p *fnmsubdf4 */
    case 3933:  /* *p *fnmsubsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3932:  /* *p *fmsubdf4 */
    case 3931:  /* *p *fmsubsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3928:  /* *p *muldf3negdfsubdf_vfp */
    case 3927:  /* *p *mulsf3negsfsubsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3926:  /* *p *fmuldf3negdfadddf_vfp */
    case 3925:  /* *p *mulsf3negsfaddsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3899:  /* *p iwmmxt_textrcv8qi3 */
    case 3898:  /* *p iwmmxt_textrcv4hi3 */
    case 3897:  /* *p iwmmxt_textrcv2si3 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0, 1));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3887:  /* *p iwmmxt_wmerge */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 3878:  /* *p iwmmxt_wmiattn */
    case 3877:  /* *p iwmmxt_wmiatbn */
    case 3876:  /* *p iwmmxt_wmiabtn */
    case 3875:  /* *p iwmmxt_wmiabbn */
    case 3874:  /* *p iwmmxt_wmiatt */
    case 3873:  /* *p iwmmxt_wmiatb */
    case 3872:  /* *p iwmmxt_wmiabt */
    case 3871:  /* *p iwmmxt_wmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 3870:  /* *p iwmmxt_wqmiattn */
    case 3869:  /* *p iwmmxt_wqmiatbn */
    case 3868:  /* *p iwmmxt_wqmiabtn */
    case 3867:  /* *p iwmmxt_wqmiabbn */
    case 3866:  /* *p iwmmxt_wqmiatt */
    case 3865:  /* *p iwmmxt_wqmiatb */
    case 3864:  /* *p iwmmxt_wqmiabt */
    case 3863:  /* *p iwmmxt_wqmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 3862:  /* *p iwmmxt_waddbhusl */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3861:  /* *p iwmmxt_waddbhusm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3845:  /* *p iwmmxt_avg4r */
    case 3844:  /* *p iwmmxt_avg4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 3843:  /* *p addcv2si3 */
    case 3842:  /* *p addcv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3841:  /* *p iwmmxt_wsubaddhx */
    case 3840:  /* *p iwmmxt_waddsubhx */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 3829:  /* *p iwmmxt_walignr3 */
    case 3828:  /* *p iwmmxt_walignr2 */
    case 3827:  /* *p iwmmxt_walignr1 */
    case 3826:  /* *p iwmmxt_walignr0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3825:  /* *p iwmmxt_walignr */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3824:  /* *p iwmmxt_waligni */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3817:  /* *p iwmmxt_tmiatt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3816:  /* *p iwmmxt_tmiabt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3815:  /* *p iwmmxt_tmiatb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3886:  /* *p iwmmxt_wmiawttn */
    case 3885:  /* *p iwmmxt_wmiawtbn */
    case 3884:  /* *p iwmmxt_wmiawbtn */
    case 3883:  /* *p iwmmxt_wmiawbbn */
    case 3882:  /* *p iwmmxt_wmiawtt */
    case 3881:  /* *p iwmmxt_wmiawtb */
    case 3880:  /* *p iwmmxt_wmiawbt */
    case 3879:  /* *p iwmmxt_wmiawbb */
    case 3814:  /* *p iwmmxt_tmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3813:  /* *p iwmmxt_tmiaph */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 3812:  /* *p iwmmxt_tmia */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3849:  /* *p iwmmxt_wmaddun */
    case 3848:  /* *p iwmmxt_wmaddsn */
    case 3847:  /* *p iwmmxt_wmaddux */
    case 3846:  /* *p iwmmxt_wmaddsx */
    case 3811:  /* *p iwmmxt_wmaddu */
    case 3810:  /* *p iwmmxt_wmadds */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 3944:  /* *p fixuns_truncdfsi2 */
    case 3943:  /* *p fixuns_truncsfsi2 */
    case 3942:  /* *p *truncsidf2_vfp */
    case 3941:  /* *p *truncsisf2_vfp */
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
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3739:  /* *p iwmmxt_textrmw */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3738:  /* *p iwmmxt_textrmsh */
    case 3737:  /* *p iwmmxt_textrmuh */
    case 3736:  /* *p iwmmxt_textrmsb */
    case 3735:  /* *p iwmmxt_textrmub */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3734:  /* *p iwmmxt_tinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3733:  /* *p iwmmxt_tinsrh */
    case 3732:  /* *p iwmmxt_tinsrb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3855:  /* *p iwmmxt_wmulwumr */
    case 3854:  /* *p iwmmxt_wmulwsmr */
    case 3853:  /* *p iwmmxt_wmulumr */
    case 3852:  /* *p iwmmxt_wmulsmr */
    case 3729:  /* *p iwmmxt_uavgrndv4hi3 */
    case 3728:  /* *p iwmmxt_uavgrndv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3860:  /* *p iwmmxt_wqmulwmr */
    case 3859:  /* *p iwmmxt_wqmulmr */
    case 3858:  /* *p iwmmxt_wqmulwm */
    case 3857:  /* *p iwmmxt_wqmulm */
    case 3833:  /* *p iwmmxt_wsadhz */
    case 3832:  /* *p iwmmxt_wsadbz */
    case 3749:  /* *p gtv2si3 */
    case 3748:  /* *p gtv4hi3 */
    case 3747:  /* *p gtv8qi3 */
    case 3746:  /* *p gtuv2si3 */
    case 3745:  /* *p gtuv4hi3 */
    case 3744:  /* *p gtuv8qi3 */
    case 3743:  /* *p eqv2si3 */
    case 3742:  /* *p eqv4hi3 */
    case 3741:  /* *p eqv8qi3 */
    case 3740:  /* *p iwmmxt_wshufh */
    case 3723:  /* *p iwmmxt_wmacuz */
    case 3721:  /* *p iwmmxt_wmacsz */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3831:  /* *p iwmmxt_wsadh */
    case 3830:  /* *p iwmmxt_wsadb */
    case 3722:  /* *p iwmmxt_wmacu */
    case 3720:  /* *p iwmmxt_wmacs */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3851:  /* *p iwmmxt_wmulwum */
    case 3850:  /* *p iwmmxt_wmulwsm */
    case 3839:  /* *p iwmmxt_wabsdiffw */
    case 3838:  /* *p iwmmxt_wabsdiffh */
    case 3837:  /* *p iwmmxt_wabsdiffb */
    case 3731:  /* *p iwmmxt_uavgv4hi3 */
    case 3730:  /* *p iwmmxt_uavgv8qi3 */
    case 3719:  /* *p umulv4hi3_highpart */
    case 3718:  /* *p smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3686:  /* *p iwmmxt_nanddi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3679:  /* *p *load_multiple */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3674:  /* *p *stm2_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3673:  /* *p *stm2_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3672:  /* *p *ldm2_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3671:  /* *p *ldm2_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3678:  /* *p *stm2_db_update */
    case 3670:  /* *p *stm2_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3677:  /* *p *stm2_db */
    case 3669:  /* *p *stm2_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3676:  /* *p *ldm2_db_update */
    case 3668:  /* *p *ldm2_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3675:  /* *p *ldm2_db */
    case 3667:  /* *p *ldm2_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3666:  /* *p *stm2_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3665:  /* *p *stm2_ia */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3664:  /* *p *ldm2_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 3663:  /* *p *ldm2_ia */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 3658:  /* *p *stm3_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3657:  /* *p *stm3_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3656:  /* *p *ldm3_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3655:  /* *p *ldm3_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3662:  /* *p *stm3_db_update */
    case 3654:  /* *p *stm3_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3661:  /* *p *stm3_db */
    case 3653:  /* *p *stm3_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3660:  /* *p *ldm3_db_update */
    case 3652:  /* *p *ldm3_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3659:  /* *p *ldm3_db */
    case 3651:  /* *p *ldm3_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3650:  /* *p *stm3_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3649:  /* *p *stm3_ia */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3648:  /* *p *ldm3_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 3647:  /* *p *ldm3_ia */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 3642:  /* *p *stm4_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3641:  /* *p *stm4_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3640:  /* *p *ldm4_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3639:  /* *p *ldm4_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3646:  /* *p *stm4_db_update */
    case 3638:  /* *p *stm4_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3645:  /* *p *stm4_db */
    case 3637:  /* *p *stm4_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3644:  /* *p *ldm4_db_update */
    case 3636:  /* *p *ldm4_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3643:  /* *p *ldm4_db */
    case 3635:  /* *p *ldm4_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3634:  /* *p *stm4_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3633:  /* *p *stm4_ia */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3632:  /* *p *ldm4_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 3631:  /* *p *ldm4_ia */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 3630:  /* *p *thumb2_strd_base_neg */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 3629:  /* *p *thumb2_strd_base */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 3628:  /* *p *thumb2_strd */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 3627:  /* *p *thumb2_ldrd_base_neg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3626:  /* *p *thumb2_ldrd_base */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3625:  /* *p *thumb2_ldrd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3623:  /* *p *arm_movtas_ze */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3971:  /* *p *thumb2_pop_single */
    case 3727:  /* *p iwmmxt_clrv2si */
    case 3726:  /* *p iwmmxt_clrv4hi */
    case 3725:  /* *p iwmmxt_clrv8qi */
    case 3724:  /* *p iwmmxt_clrdi */
    case 3622:  /* *p load_tp_hard */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3619:  /* *p *ldr_with_return */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3618:  /* *p *pop_multiple_with_return */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3617:  /* *p *pop_multiple_with_writeback_and_return */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 3616:  /* *p *load_multiple_with_writeback */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 3615:  /* *p *arith_adjacentmem */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3614:  /* *p *sub_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3613:  /* *p *and_shiftsi */
    case 3612:  /* *p *eor_shiftsi */
    case 3611:  /* *p *orr_shiftsi */
    case 3610:  /* *p *rsb_shiftsi */
    case 3609:  /* *p *add_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3924:  /* *p *muldf3subdf_vfp */
    case 3923:  /* *p *mulsf3subsf_vfp */
    case 3922:  /* *p *muldf3adddf_vfp */
    case 3921:  /* *p *mulsf3addsf_vfp */
    case 3608:  /* *p *and_multsi */
    case 3607:  /* *p *eor_multsi */
    case 3606:  /* *p *orr_multsi */
    case 3605:  /* *p *rsb_multsi */
    case 3604:  /* *p *add_multsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3603:  /* *p *load_indirect_jump */
    case 3602:  /* *p *arm_indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3896:  /* *p iwmmxt_torvscv8qi3 */
    case 3895:  /* *p iwmmxt_torvscv4hi3 */
    case 3894:  /* *p iwmmxt_torvscv2si3 */
    case 3893:  /* *p iwmmxt_torcv8qi3 */
    case 3892:  /* *p iwmmxt_torcv4hi3 */
    case 3891:  /* *p iwmmxt_torcv2si3 */
    case 3890:  /* *p iwmmxt_tandcv8qi3 */
    case 3889:  /* *p iwmmxt_tandcv4hi3 */
    case 3888:  /* *p iwmmxt_tandcv2si3 */
    case 3601:  /* *p *arm_simple_return */
    case 3600:  /* *p *arm_return */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3598:  /* *p *arm_cmpsi_negshiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3954:  /* *p *cmpdf_trap_vfp */
    case 3953:  /* *p *cmpdf_vfp */
    case 3952:  /* *p *cmpsf_trap_vfp */
    case 3951:  /* *p *cmpsf_vfp */
    case 3597:  /* *p *arm_cmpsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3591:  /* *p tls_load_dot_plus_eight */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3590:  /* *p pic_add_dot_plus_eight */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3599:  /* *p *arm_jump */
    case 3581:  /* *p *compareqi_eq0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3969:  /* *p *thumb2_neg_abssi2 */
    case 3564:  /* *p *arm_neg_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3986:  /* *p *thumb2_negsi2_short */
    case 3985:  /* *p *thumb2_one_cmplsi2_short */
    case 3967:  /* *p *thumb2_abssi2 */
    case 3562:  /* *p *arm_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3930:  /* *p fmadf4 */
    case 3929:  /* *p fmasf4 */
    case 3558:  /* *p extzv_t2 */
    case 3557:  /* *p *extv_reg */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4001:  /* *p arm_load_acquire_exclusivehi */
    case 4000:  /* *p arm_load_acquire_exclusiveqi */
    case 3999:  /* *p arm_load_exclusivehi */
    case 3998:  /* *p arm_load_exclusiveqi */
    case 3550:  /* *p unaligned_loadhiu */
    case 3549:  /* *p unaligned_loadhis */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4005:  /* *p arm_load_acquire_exclusivedi */
    case 4004:  /* *p arm_load_exclusivedi */
    case 4003:  /* *p arm_load_acquire_exclusivesi */
    case 4002:  /* *p arm_load_exclusivesi */
    case 3997:  /* *p atomic_loaddi_1 */
    case 3965:  /* *p rintdf2 */
    case 3964:  /* *p nearbyintdf2 */
    case 3963:  /* *p btruncdf2 */
    case 3962:  /* *p rintsf2 */
    case 3961:  /* *p nearbyintsf2 */
    case 3960:  /* *p btruncsf2 */
    case 3836:  /* *p iwmmxt_wabsv8qi3 */
    case 3835:  /* *p iwmmxt_wabsv4hi3 */
    case 3834:  /* *p iwmmxt_wabsv2si3 */
    case 3823:  /* *p iwmmxt_waccw */
    case 3822:  /* *p iwmmxt_wacch */
    case 3821:  /* *p iwmmxt_waccb */
    case 3820:  /* *p iwmmxt_tmovmskw */
    case 3819:  /* *p iwmmxt_tmovmskh */
    case 3818:  /* *p iwmmxt_tmovmskb */
    case 3621:  /* *p rbitsi2 */
    case 3555:  /* *p unaligned_storedi */
    case 3553:  /* *p unaligned_loaddi */
    case 3552:  /* *p unaligned_storehi */
    case 3551:  /* *p unaligned_storesi */
    case 3548:  /* *p unaligned_loadsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3547:  /* *p *not_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3546:  /* *p *arm_shiftsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3545:  /* *p *satsi_smax_shift */
    case 3544:  /* *p *satsi_smin_shift */
    case 3543:  /* *p *satsi_smax_shift */
    case 3542:  /* *p *satsi_smin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3541:  /* *p *satsi_smax */
    case 3540:  /* *p *satsi_smin */
    case 3539:  /* *p *satsi_smax */
    case 3538:  /* *p *satsi_smin */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4069:  /* *p arm_usatsihi */
    case 3976:  /* *p thumb2_zero_extendqisi2_v6 */
    case 3975:  /* *p *thumb2_zero_extendhisi2_v6 */
    case 3974:  /* *p *thumb2_extendqisi_v6 */
    case 3950:  /* *p *sqrtdf2_vfp */
    case 3949:  /* *p *sqrtsf2_vfp */
    case 3948:  /* *p floatunssidf2 */
    case 3947:  /* *p floatunssisf2 */
    case 3946:  /* *p *floatsidf2_vfp */
    case 3945:  /* *p *floatsisf2_vfp */
    case 3940:  /* *p truncsfhf2 */
    case 3939:  /* *p extendhfsf2 */
    case 3938:  /* *p *truncdfsf2_vfp */
    case 3937:  /* *p *extendsfdf2_vfp */
    case 3909:  /* *p *negdf2_vfp */
    case 3908:  /* *p *negsf2_vfp */
    case 3907:  /* *p *absdf2_vfp */
    case 3906:  /* *p *abssf2_vfp */
    case 3682:  /* *p tbcstv2si */
    case 3681:  /* *p tbcstv4hi */
    case 3680:  /* *p tbcstv8qi */
    case 3624:  /* *p *arm_rev */
    case 3620:  /* *p clzsi2 */
    case 3586:  /* *p *arm_extendqisi_v6 */
    case 3585:  /* *p *arm_extendqisi */
    case 3584:  /* *p *arm_extendqihi_insn */
    case 3583:  /* *p *arm_extendhisi2_v6 */
    case 3582:  /* *p *arm_extendhisi2 */
    case 3579:  /* *p *arm_zero_extendqisi2_v6 */
    case 3578:  /* *p *arm_zero_extendqisi2 */
    case 3576:  /* *p *arm_zero_extendhisi2_v6 */
    case 3575:  /* *p *arm_zero_extendhisi2 */
    case 3574:  /* *p extendsidi2 */
    case 3573:  /* *p extendhidi2 */
    case 3572:  /* *p extendqidi2 */
    case 3571:  /* *p zero_extendsidi2 */
    case 3570:  /* *p zero_extendhidi2 */
    case 3569:  /* *p zero_extendqidi2 */
    case 3568:  /* *p *arm_one_cmplsi2 */
    case 3566:  /* *p one_cmpldi2 */
    case 3561:  /* *p *arm_negsi2 */
    case 3537:  /* *p *smin_0 */
    case 3536:  /* *p *smax_m1 */
    case 3535:  /* *p *smax_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3533:  /* *p *andsi_iorsi3_notsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3996:  /* *p *orsi_not_shiftsi_si */
    case 3966:  /* *p *thumb_andsi_not_shiftsi_si */
    case 3524:  /* *p andsi_not_shiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3995:  /* *p *orsi_notsi_si */
    case 3530:  /* *p *xordi_sesidi_di */
    case 3529:  /* *p *xordi_zesidi_di */
    case 3526:  /* *p *iordi_sesidi_di */
    case 3525:  /* *p *iordi_zesidi_di */
    case 3523:  /* *p andsi_notsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3991:  /* *p *iordi_notdi_zesidi */
    case 3519:  /* *p *anddi_notdi_zesidi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3993:  /* *p *iordi_notsesidi_di */
    case 3989:  /* *p *iordi_notzesidi_di */
    case 3521:  /* *p *anddi_notsesidi_di */
    case 3517:  /* *p *anddi_notzesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3987:  /* *p *iordi_notdi_di */
    case 3958:  /* *p *combine_vcvt_f64_s32 */
    case 3957:  /* *p *combine_vcvt_f64_u32 */
    case 3956:  /* *p *combine_vcvt_f32_s32 */
    case 3955:  /* *p *combine_vcvt_f32_u32 */
    case 3920:  /* *p *muldf3negdf_vfp */
    case 3919:  /* *p *mulsf3negsf_vfp */
    case 3587:  /* *p *arm_extendqisi2addsi */
    case 3580:  /* *p *arm_zero_extendqisi2addsi */
    case 3577:  /* *p *arm_zero_extendhisi2addsi */
    case 3515:  /* *p *anddi_notdi_di */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3514:  /* *p insv_t2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3513:  /* *p insv_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3512:  /* *p *zeroextractsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3509:  /* *p *maddhidi4tt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3508:  /* *p *maddhidi4tb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3507:  /* *p maddhidi4 */
    case 3506:  /* *p *maddhisi4tt */
    case 3505:  /* *p *maddhisi4tb */
    case 3504:  /* *p maddhisi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3499:  /* *p *umulsi3_highpart_v6 */
    case 3498:  /* *p *umulsi3_highpart_nov6 */
    case 3497:  /* *p *smulsi3_highpart_v6 */
    case 3496:  /* *p *smulsi3_highpart_nov6 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

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
    case 3503:  /* *p *mulhisi3tt */
    case 3502:  /* *p *mulhisi3bt */
    case 3501:  /* *p *mulhisi3tb */
    case 3500:  /* *p mulhisi3 */
    case 3493:  /* *p *umulsidi3_v6 */
    case 3492:  /* *p *umulsidi3_nov6 */
    case 3491:  /* *p *mulsidi3_v6 */
    case 3490:  /* *p *mulsidi3_nov6 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3495:  /* *p *umulsidi3adddi_v6 */
    case 3494:  /* *p *umulsidi3adddi */
    case 3489:  /* *p *mulsidi3adddi_v6 */
    case 3488:  /* *p *mulsidi3adddi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3487:  /* *p *mulsi3subsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3486:  /* *p *mulsi3addsi_v6 */
    case 3485:  /* *p *mulsi3addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3483:  /* *p *arm_mulsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3479:  /* *p *subsi3_carryin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3480:  /* *p *rsbsi3_carryin_shift */
    case 3477:  /* *p *addsi3_carryin_shift_geu */
    case 3476:  /* *p *addsi3_carryin_shift_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3475:  /* *p *addsi3_carryin_alt2_geu */
    case 3474:  /* *p *addsi3_carryin_alt2_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3478:  /* *p *subsi3_carryin */
    case 3473:  /* *p *addsi3_carryin_geu */
    case 3472:  /* *p *addsi3_carryin_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3471:  /* *p *compare_addsi2_op1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3470:  /* *p *compare_addsi2_op0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 3469:  /* *p *compare_negsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 3468:  /* *p *addsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4067:  /* *p sssubsa3 */
    case 4066:  /* *p sssubsq3 */
    case 4065:  /* *p sssubha3 */
    case 4064:  /* *p sssubv2ha3 */
    case 4063:  /* *p sssubhq3 */
    case 4062:  /* *p sssubqq3 */
    case 4061:  /* *p sssubv2hq3 */
    case 4060:  /* *p sssubv4qq3 */
    case 4059:  /* *p ussubuha3 */
    case 4058:  /* *p ussubv2uha3 */
    case 4057:  /* *p ussubuhq3 */
    case 4056:  /* *p ussubuqq3 */
    case 4055:  /* *p ussubv2uhq3 */
    case 4054:  /* *p ussubv4uqq3 */
    case 4053:  /* *p subv2ha3 */
    case 4052:  /* *p subv2hq3 */
    case 4051:  /* *p subv4qq3 */
    case 4050:  /* *p subusa3 */
    case 4049:  /* *p subuha3 */
    case 4048:  /* *p subsa3 */
    case 4047:  /* *p subha3 */
    case 4046:  /* *p subusq3 */
    case 4045:  /* *p subuhq3 */
    case 4044:  /* *p subuqq3 */
    case 4043:  /* *p subsq3 */
    case 4042:  /* *p subhq3 */
    case 4041:  /* *p subqq3 */
    case 4040:  /* *p ssaddsa3 */
    case 4039:  /* *p ssaddsq3 */
    case 4038:  /* *p ssaddha3 */
    case 4037:  /* *p ssaddv2ha3 */
    case 4036:  /* *p ssaddhq3 */
    case 4035:  /* *p ssaddqq3 */
    case 4034:  /* *p ssaddv2hq3 */
    case 4033:  /* *p ssaddv4qq3 */
    case 4032:  /* *p usadduha3 */
    case 4031:  /* *p usaddv2uha3 */
    case 4030:  /* *p usadduhq3 */
    case 4029:  /* *p usadduqq3 */
    case 4028:  /* *p usaddv2uhq3 */
    case 4027:  /* *p usaddv4uqq3 */
    case 4026:  /* *p addv2ha3 */
    case 4025:  /* *p addv2hq3 */
    case 4024:  /* *p addv4qq3 */
    case 4023:  /* *p addusa3 */
    case 4022:  /* *p adduha3 */
    case 4021:  /* *p addsa3 */
    case 4020:  /* *p addha3 */
    case 4019:  /* *p addusq3 */
    case 4018:  /* *p adduhq3 */
    case 4017:  /* *p adduqq3 */
    case 4016:  /* *p addsq3 */
    case 4015:  /* *p addhq3 */
    case 4014:  /* *p addqq3 */
    case 3918:  /* *p *muldf3_vfp */
    case 3917:  /* *p *mulsf3_vfp */
    case 3916:  /* *p *divdf3_vfp */
    case 3915:  /* *p *divsf3_vfp */
    case 3914:  /* *p *subdf3_vfp */
    case 3913:  /* *p *subsf3_vfp */
    case 3912:  /* *p *adddf3_vfp */
    case 3911:  /* *p *addsf3_vfp */
    case 3856:  /* *p iwmmxt_wmulwl */
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
    case 3717:  /* *p *mulv4hi3_iwmmxt */
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
    case 3698:  /* *p *xorv8qi3_iwmmxt */
    case 3697:  /* *p *xorv4hi3_iwmmxt */
    case 3696:  /* *p *xorv2si3_iwmmxt */
    case 3695:  /* *p *iorv8qi3_iwmmxt */
    case 3694:  /* *p *iorv4hi3_iwmmxt */
    case 3693:  /* *p *iorv2si3_iwmmxt */
    case 3692:  /* *p *andv8qi3_iwmmxt */
    case 3691:  /* *p *andv4hi3_iwmmxt */
    case 3690:  /* *p *andv2si3_iwmmxt */
    case 3685:  /* *p iwmmxt_anddi3 */
    case 3684:  /* *p iwmmxt_xordi3 */
    case 3683:  /* *p iwmmxt_iordi3 */
    case 3588:  /* *p *arm_movt */
    case 3560:  /* *p udivsi3 */
    case 3559:  /* *p divsi3 */
    case 3531:  /* *p *arm_xorsi3 */
    case 3527:  /* *p *iorsi3_insn */
    case 3510:  /* *p *arm_andsi3_insn */
    case 3484:  /* *p *arm_mulsi3_v6 */
    case 3481:  /* *p *arm_subsi3_insn */
    case 3466:  /* *p *arm_addsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2374:  /* arm_ssatsihi_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 2373:  /* usmulusa3 */
    case 2372:  /* ssmulsa3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 2317:  /* arm_store_release_exclusivesi */
    case 2316:  /* arm_store_release_exclusivehi */
    case 2315:  /* arm_store_release_exclusiveqi */
    case 2314:  /* arm_store_release_exclusivedi */
    case 2313:  /* arm_store_exclusivedi */
    case 2312:  /* arm_store_exclusivesi */
    case 2311:  /* arm_store_exclusivehi */
    case 2310:  /* arm_store_exclusiveqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      break;

    case 2301:  /* atomic_nand_fetchdi */
    case 2300:  /* atomic_nand_fetchsi */
    case 2299:  /* atomic_nand_fetchhi */
    case 2298:  /* atomic_nand_fetchqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

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
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 2277:  /* atomic_fetch_nanddi */
    case 2276:  /* atomic_fetch_nandsi */
    case 2275:  /* atomic_fetch_nandhi */
    case 2274:  /* atomic_fetch_nandqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

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
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 2253:  /* atomic_nanddi */
    case 2252:  /* atomic_nandsi */
    case 2251:  /* atomic_nandhi */
    case 2250:  /* atomic_nandqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

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
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2229:  /* atomic_exchangedi */
    case 2228:  /* atomic_exchangesi */
    case 2227:  /* atomic_exchangehi */
    case 2226:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2225:  /* atomic_compare_and_swapdi_1 */
    case 2224:  /* atomic_compare_and_swapsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2223:  /* atomic_compare_and_swaphi_1 */
    case 2222:  /* atomic_compare_and_swapqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2214:  /* *memory_barrier */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2213:  /* crypto_sha1p */
    case 2212:  /* crypto_sha1m */
    case 2211:  /* crypto_sha1c */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 0));
      break;

    case 2209:  /* crypto_sha1h */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 1), 0, 0));
      break;

    case 2198:  /* neon_vabdv2di_3 */
    case 2197:  /* neon_vabdv4sf_3 */
    case 2196:  /* neon_vabdv2sf_3 */
    case 2195:  /* neon_vabdv4si_3 */
    case 2194:  /* neon_vabdv2si_3 */
    case 2193:  /* neon_vabdv8hi_3 */
    case 2192:  /* neon_vabdv4hi_3 */
    case 2191:  /* neon_vabdv16qi_3 */
    case 2190:  /* neon_vabdv8qi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 2156:  /* neon_vec_umult_hi_v4si */
    case 2155:  /* neon_vec_smult_hi_v4si */
    case 2154:  /* neon_vec_umult_hi_v8hi */
    case 2153:  /* neon_vec_smult_hi_v8hi */
    case 2152:  /* neon_vec_umult_hi_v16qi */
    case 2151:  /* neon_vec_smult_hi_v16qi */
    case 2150:  /* neon_vec_umult_lo_v4si */
    case 2149:  /* neon_vec_smult_lo_v4si */
    case 2148:  /* neon_vec_umult_lo_v8hi */
    case 2147:  /* neon_vec_smult_lo_v8hi */
    case 2146:  /* neon_vec_umult_lo_v16qi */
    case 2145:  /* neon_vec_smult_lo_v16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 1956:  /* *neon_vuzpv4sf_insn */
    case 1955:  /* *neon_vuzpv2sf_insn */
    case 1954:  /* *neon_vuzpv4si_insn */
    case 1953:  /* *neon_vuzpv2si_insn */
    case 1952:  /* *neon_vuzpv8hi_insn */
    case 1951:  /* *neon_vuzpv4hi_insn */
    case 1950:  /* *neon_vuzpv16qi_insn */
    case 1949:  /* *neon_vuzpv8qi_insn */
    case 1948:  /* *neon_vzipv4sf_insn */
    case 1947:  /* *neon_vzipv2sf_insn */
    case 1946:  /* *neon_vzipv4si_insn */
    case 1945:  /* *neon_vzipv2si_insn */
    case 1944:  /* *neon_vzipv8hi_insn */
    case 1943:  /* *neon_vzipv4hi_insn */
    case 1942:  /* *neon_vzipv16qi_insn */
    case 1941:  /* *neon_vzipv8qi_insn */
    case 1940:  /* *neon_vtrnv4sf_insn */
    case 1939:  /* *neon_vtrnv2sf_insn */
    case 1938:  /* *neon_vtrnv4si_insn */
    case 1937:  /* *neon_vtrnv2si_insn */
    case 1936:  /* *neon_vtrnv8hi_insn */
    case 1935:  /* *neon_vtrnv4hi_insn */
    case 1934:  /* *neon_vtrnv16qi_insn */
    case 1933:  /* *neon_vtrnv8qi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1680:  /* neon_vqdmlsl_lanev2si */
    case 1679:  /* neon_vqdmlsl_lanev4hi */
    case 1678:  /* neon_vmlslu_lanev2si */
    case 1677:  /* neon_vmlsls_lanev2si */
    case 1676:  /* neon_vmlslu_lanev4hi */
    case 1675:  /* neon_vmlsls_lanev4hi */
    case 1674:  /* neon_vmls_lanev4sf */
    case 1673:  /* neon_vmls_lanev4si */
    case 1672:  /* neon_vmls_lanev8hi */
    case 1671:  /* neon_vmls_lanev2sf */
    case 1670:  /* neon_vmls_lanev2si */
    case 1669:  /* neon_vmls_lanev4hi */
    case 1668:  /* neon_vqdmlal_lanev2si */
    case 1667:  /* neon_vqdmlal_lanev4hi */
    case 1666:  /* neon_vmlalu_lanev2si */
    case 1665:  /* neon_vmlals_lanev2si */
    case 1664:  /* neon_vmlalu_lanev4hi */
    case 1663:  /* neon_vmlals_lanev4hi */
    case 1662:  /* neon_vmla_lanev4sf */
    case 1661:  /* neon_vmla_lanev4si */
    case 1660:  /* neon_vmla_lanev8hi */
    case 1659:  /* neon_vmla_lanev2sf */
    case 1658:  /* neon_vmla_lanev2si */
    case 1657:  /* neon_vmla_lanev4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 1587:  /* *neon_vswpv2di */
    case 1586:  /* *neon_vswpdi */
    case 1585:  /* *neon_vswpv4sf */
    case 1584:  /* *neon_vswpv2sf */
    case 1583:  /* *neon_vswpv4si */
    case 1582:  /* *neon_vswpv2si */
    case 1581:  /* *neon_vswpv8hi */
    case 1580:  /* *neon_vswpv4hi */
    case 1579:  /* *neon_vswpv16qi */
    case 1578:  /* *neon_vswpv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 1433:  /* neon_vabaluv2si */
    case 1432:  /* neon_vabalsv2si */
    case 1431:  /* neon_vabaluv4hi */
    case 1430:  /* neon_vabalsv4hi */
    case 1429:  /* neon_vabaluv8qi */
    case 1428:  /* neon_vabalsv8qi */
    case 1427:  /* neon_vabauv4si */
    case 1426:  /* neon_vabasv4si */
    case 1425:  /* neon_vabauv2si */
    case 1424:  /* neon_vabasv2si */
    case 1423:  /* neon_vabauv8hi */
    case 1422:  /* neon_vabasv8hi */
    case 1421:  /* neon_vabauv4hi */
    case 1420:  /* neon_vabasv4hi */
    case 1419:  /* neon_vabauv16qi */
    case 1418:  /* neon_vabasv16qi */
    case 1417:  /* neon_vabauv8qi */
    case 1416:  /* neon_vabasv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 1135:  /* quad_halves_umaxv16qi */
    case 1134:  /* quad_halves_uminv16qi */
    case 1133:  /* quad_halves_smaxv16qi */
    case 1132:  /* quad_halves_sminv16qi */
    case 1131:  /* quad_halves_plusv16qi */
    case 1130:  /* quad_halves_umaxv8hi */
    case 1129:  /* quad_halves_uminv8hi */
    case 1128:  /* quad_halves_smaxv8hi */
    case 1127:  /* quad_halves_sminv8hi */
    case 1126:  /* quad_halves_plusv8hi */
    case 1125:  /* quad_halves_smaxv4sf */
    case 1124:  /* quad_halves_sminv4sf */
    case 1123:  /* quad_halves_plusv4sf */
    case 1122:  /* quad_halves_umaxv4si */
    case 1121:  /* quad_halves_uminv4si */
    case 1120:  /* quad_halves_smaxv4si */
    case 1119:  /* quad_halves_sminv4si */
    case 1118:  /* quad_halves_plusv4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1111:  /* lshrdi3_neon */
    case 1110:  /* ashrdi3_neon */
    case 1105:  /* ashldi3_neon */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 884:  /* vec_setv2di_internal */
    case 883:  /* vec_setv4sf_internal */
    case 882:  /* vec_setv4si_internal */
    case 881:  /* vec_setv8hi_internal */
    case 880:  /* vec_setv16qi_internal */
    case 879:  /* vec_setv2sf_internal */
    case 878:  /* vec_setv2si_internal */
    case 877:  /* vec_setv4hi_internal */
    case 876:  /* vec_setv8qi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 832:  /* *thumb2_cbnz */
    case 831:  /* *thumb2_cbz */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 823:  /* *thumb2_movsi_shortim */
    case 822:  /* *thumb2_movhi_shortim */
    case 821:  /* *thumb2_movqi_shortim */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 816:  /* thumb2_casesi_internal_pic */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 815:  /* thumb2_casesi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 805:  /* *thumb2_ior_scc_strict_it */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 792:  /* *thumb2_cmpsi_neg_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 791:  /* *thumb2_storewb_pairsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 789:  /* tls_load_dot_plus_four */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      break;

    case 777:  /* *thumb1_tablejump */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 772:  /* thumb1_casesi_dispatch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      break;

    case 764:  /* thumb1_addsi3_addgeu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 758:  /* *addsi3_cbranch_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 757:  /* *addsi3_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 756:  /* *cbranchne_decr1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 755:  /* *tstsi3_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 754:  /* *tlobits_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 753:  /* *tbit_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 752:  /* *negated_cbranchsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 751:  /* cbranchsi4_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 750:  /* cbranchsi4_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 749:  /* movmem8b */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 5), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 3;
      break;

    case 748:  /* movmem12b */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 7), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 734:  /* *thumb1_neg_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1042:  /* negdi2_neon */
    case 761:  /* *cstoresi_ne0_thumb1_insn */
    case 760:  /* *cstoresi_eq0_thumb1_insn */
    case 739:  /* thumb1_extendhisi2 */
    case 733:  /* *thumb1_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 685:  /* *combine_vcvtf2i */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 657:  /* *fnmadddf4 */
    case 656:  /* *fnmaddsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 655:  /* *fnmsubdf4 */
    case 654:  /* *fnmsubsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 945:  /* fmsubv4sf4_intrinsic */
    case 944:  /* fmsubv2sf4_intrinsic */
    case 943:  /* *fmsubv4sf4 */
    case 942:  /* *fmsubv2sf4 */
    case 653:  /* *fmsubdf4 */
    case 652:  /* *fmsubsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 649:  /* *muldf3negdfsubdf_vfp */
    case 648:  /* *mulsf3negsfsubsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 937:  /* mulv4sf3negv4sfaddv4sf_neon */
    case 936:  /* mulv2sf3negv2sfaddv2sf_neon */
    case 935:  /* mulv4si3negv4siaddv4si_neon */
    case 934:  /* mulv2si3negv2siaddv2si_neon */
    case 933:  /* mulv8hi3negv8hiaddv8hi_neon */
    case 932:  /* mulv4hi3negv4hiaddv4hi_neon */
    case 931:  /* mulv16qi3negv16qiaddv16qi_neon */
    case 930:  /* mulv8qi3negv8qiaddv8qi_neon */
    case 647:  /* *fmuldf3negdfadddf_vfp */
    case 646:  /* *mulsf3negsfaddsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 613:  /* iwmmxt_textrcv8qi3 */
    case 612:  /* iwmmxt_textrcv4hi3 */
    case 611:  /* iwmmxt_textrcv2si3 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 601:  /* iwmmxt_wmerge */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 592:  /* iwmmxt_wmiattn */
    case 591:  /* iwmmxt_wmiatbn */
    case 590:  /* iwmmxt_wmiabtn */
    case 589:  /* iwmmxt_wmiabbn */
    case 588:  /* iwmmxt_wmiatt */
    case 587:  /* iwmmxt_wmiatb */
    case 586:  /* iwmmxt_wmiabt */
    case 585:  /* iwmmxt_wmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 584:  /* iwmmxt_wqmiattn */
    case 583:  /* iwmmxt_wqmiatbn */
    case 582:  /* iwmmxt_wqmiabtn */
    case 581:  /* iwmmxt_wqmiabbn */
    case 580:  /* iwmmxt_wqmiatt */
    case 579:  /* iwmmxt_wqmiatb */
    case 578:  /* iwmmxt_wqmiabt */
    case 577:  /* iwmmxt_wqmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 576:  /* iwmmxt_waddbhusl */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      break;

    case 575:  /* iwmmxt_waddbhusm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      break;

    case 559:  /* iwmmxt_avg4r */
    case 558:  /* iwmmxt_avg4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 557:  /* addcv2si3 */
    case 556:  /* addcv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 555:  /* iwmmxt_wsubaddhx */
    case 554:  /* iwmmxt_waddsubhx */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 543:  /* iwmmxt_walignr3 */
    case 542:  /* iwmmxt_walignr2 */
    case 541:  /* iwmmxt_walignr1 */
    case 540:  /* iwmmxt_walignr0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 539:  /* iwmmxt_walignr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      break;

    case 538:  /* iwmmxt_waligni */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1), 0));
      break;

    case 531:  /* iwmmxt_tmiatt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      break;

    case 530:  /* iwmmxt_tmiabt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      break;

    case 529:  /* iwmmxt_tmiatb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      break;

    case 600:  /* iwmmxt_wmiawttn */
    case 599:  /* iwmmxt_wmiawtbn */
    case 598:  /* iwmmxt_wmiawbtn */
    case 597:  /* iwmmxt_wmiawbbn */
    case 596:  /* iwmmxt_wmiawtt */
    case 595:  /* iwmmxt_wmiawtb */
    case 594:  /* iwmmxt_wmiawbt */
    case 593:  /* iwmmxt_wmiawbb */
    case 528:  /* iwmmxt_tmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      break;

    case 527:  /* iwmmxt_tmiaph */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 526:  /* iwmmxt_tmia */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      break;

    case 563:  /* iwmmxt_wmaddun */
    case 562:  /* iwmmxt_wmaddsn */
    case 561:  /* iwmmxt_wmaddux */
    case 560:  /* iwmmxt_wmaddsx */
    case 525:  /* iwmmxt_wmaddu */
    case 524:  /* iwmmxt_wmadds */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 893:  /* vec_extractv2di */
    case 892:  /* vec_extractv4sf */
    case 891:  /* vec_extractv4si */
    case 890:  /* vec_extractv8hi */
    case 889:  /* vec_extractv16qi */
    case 888:  /* vec_extractv2sf */
    case 887:  /* vec_extractv2si */
    case 886:  /* vec_extractv4hi */
    case 885:  /* vec_extractv8qi */
    case 453:  /* iwmmxt_textrmw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1577:  /* neon_vdup_lanev4sf_internal */
    case 1576:  /* neon_vdup_lanev2sf_internal */
    case 1575:  /* neon_vdup_lanev4si_internal */
    case 1574:  /* neon_vdup_lanev2si_internal */
    case 1573:  /* neon_vdup_lanev8hi_internal */
    case 1572:  /* neon_vdup_lanev4hi_internal */
    case 1571:  /* neon_vdup_lanev16qi_internal */
    case 1570:  /* neon_vdup_lanev8qi_internal */
    case 1560:  /* neon_vget_lanev4sf_zext_internal */
    case 1559:  /* neon_vget_lanev4si_zext_internal */
    case 1558:  /* neon_vget_lanev8hi_zext_internal */
    case 1557:  /* neon_vget_lanev16qi_zext_internal */
    case 1556:  /* neon_vget_lanev4sf_sext_internal */
    case 1555:  /* neon_vget_lanev4si_sext_internal */
    case 1554:  /* neon_vget_lanev8hi_sext_internal */
    case 1553:  /* neon_vget_lanev16qi_sext_internal */
    case 1552:  /* neon_vget_lanev2sf_zext_internal */
    case 1551:  /* neon_vget_lanev2si_zext_internal */
    case 1550:  /* neon_vget_lanev4hi_zext_internal */
    case 1549:  /* neon_vget_lanev8qi_zext_internal */
    case 1548:  /* neon_vget_lanev2sf_sext_internal */
    case 1547:  /* neon_vget_lanev2si_sext_internal */
    case 1546:  /* neon_vget_lanev4hi_sext_internal */
    case 1545:  /* neon_vget_lanev8qi_sext_internal */
    case 452:  /* iwmmxt_textrmsh */
    case 451:  /* iwmmxt_textrmuh */
    case 450:  /* iwmmxt_textrmsb */
    case 449:  /* iwmmxt_textrmub */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 448:  /* iwmmxt_tinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 447:  /* iwmmxt_tinsrh */
    case 446:  /* iwmmxt_tinsrb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 569:  /* iwmmxt_wmulwumr */
    case 568:  /* iwmmxt_wmulwsmr */
    case 567:  /* iwmmxt_wmulumr */
    case 566:  /* iwmmxt_wmulsmr */
    case 443:  /* iwmmxt_uavgrndv4hi3 */
    case 442:  /* iwmmxt_uavgrndv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 2208:  /* crypto_sha256su1 */
    case 2207:  /* crypto_sha256h2 */
    case 2206:  /* crypto_sha256h */
    case 2205:  /* crypto_sha1su0 */
    case 2107:  /* neon_vld4_lanev4sf */
    case 2106:  /* neon_vld4_lanev4si */
    case 2105:  /* neon_vld4_lanev8hi */
    case 2104:  /* neon_vld4_lanev2sf */
    case 2103:  /* neon_vld4_lanev2si */
    case 2102:  /* neon_vld4_lanev4hi */
    case 2101:  /* neon_vld4_lanev8qi */
    case 2062:  /* neon_vld3_lanev4sf */
    case 2061:  /* neon_vld3_lanev4si */
    case 2060:  /* neon_vld3_lanev8hi */
    case 2059:  /* neon_vld3_lanev2sf */
    case 2058:  /* neon_vld3_lanev2si */
    case 2057:  /* neon_vld3_lanev4hi */
    case 2056:  /* neon_vld3_lanev8qi */
    case 2021:  /* neon_vld2_lanev4sf */
    case 2020:  /* neon_vld2_lanev4si */
    case 2019:  /* neon_vld2_lanev8hi */
    case 2018:  /* neon_vld2_lanev2sf */
    case 2017:  /* neon_vld2_lanev2si */
    case 2016:  /* neon_vld2_lanev4hi */
    case 2015:  /* neon_vld2_lanev8qi */
    case 1976:  /* neon_vld1_lanev2di */
    case 1975:  /* neon_vld1_lanev4sf */
    case 1974:  /* neon_vld1_lanev4si */
    case 1973:  /* neon_vld1_lanev8hi */
    case 1972:  /* neon_vld1_lanev16qi */
    case 1971:  /* neon_vld1_lanedi */
    case 1970:  /* neon_vld1_lanev2sf */
    case 1969:  /* neon_vld1_lanev2si */
    case 1968:  /* neon_vld1_lanev4hi */
    case 1967:  /* neon_vld1_lanev8qi */
    case 1932:  /* neon_vtbx4v8qi */
    case 1931:  /* neon_vtbx3v8qi */
    case 1930:  /* neon_vtbx2v8qi */
    case 1929:  /* neon_vtbx1v8qi */
    case 1921:  /* neon_vsli_nv2di */
    case 1920:  /* neon_vsli_ndi */
    case 1919:  /* neon_vsli_nv4si */
    case 1918:  /* neon_vsli_nv2si */
    case 1917:  /* neon_vsli_nv8hi */
    case 1916:  /* neon_vsli_nv4hi */
    case 1915:  /* neon_vsli_nv16qi */
    case 1914:  /* neon_vsli_nv8qi */
    case 1913:  /* neon_vsri_nv2di */
    case 1912:  /* neon_vsri_ndi */
    case 1911:  /* neon_vsri_nv4si */
    case 1910:  /* neon_vsri_nv2si */
    case 1909:  /* neon_vsri_nv8hi */
    case 1908:  /* neon_vsri_nv4hi */
    case 1907:  /* neon_vsri_nv16qi */
    case 1906:  /* neon_vsri_nv8qi */
    case 1905:  /* neon_vrsrau_nv2di */
    case 1904:  /* neon_vrsras_nv2di */
    case 1903:  /* neon_vsrau_nv2di */
    case 1902:  /* neon_vsras_nv2di */
    case 1901:  /* neon_vrsrau_ndi */
    case 1900:  /* neon_vrsras_ndi */
    case 1899:  /* neon_vsrau_ndi */
    case 1898:  /* neon_vsras_ndi */
    case 1897:  /* neon_vrsrau_nv4si */
    case 1896:  /* neon_vrsras_nv4si */
    case 1895:  /* neon_vsrau_nv4si */
    case 1894:  /* neon_vsras_nv4si */
    case 1893:  /* neon_vrsrau_nv2si */
    case 1892:  /* neon_vrsras_nv2si */
    case 1891:  /* neon_vsrau_nv2si */
    case 1890:  /* neon_vsras_nv2si */
    case 1889:  /* neon_vrsrau_nv8hi */
    case 1888:  /* neon_vrsras_nv8hi */
    case 1887:  /* neon_vsrau_nv8hi */
    case 1886:  /* neon_vsras_nv8hi */
    case 1885:  /* neon_vrsrau_nv4hi */
    case 1884:  /* neon_vrsras_nv4hi */
    case 1883:  /* neon_vsrau_nv4hi */
    case 1882:  /* neon_vsras_nv4hi */
    case 1881:  /* neon_vrsrau_nv16qi */
    case 1880:  /* neon_vrsras_nv16qi */
    case 1879:  /* neon_vsrau_nv16qi */
    case 1878:  /* neon_vsras_nv16qi */
    case 1877:  /* neon_vrsrau_nv8qi */
    case 1876:  /* neon_vrsras_nv8qi */
    case 1875:  /* neon_vsrau_nv8qi */
    case 1874:  /* neon_vsras_nv8qi */
    case 1715:  /* neon_vbslv2di_internal */
    case 1714:  /* neon_vbsldi_internal */
    case 1713:  /* neon_vbslv4sf_internal */
    case 1712:  /* neon_vbslv2sf_internal */
    case 1711:  /* neon_vbslv4si_internal */
    case 1710:  /* neon_vbslv2si_internal */
    case 1709:  /* neon_vbslv8hi_internal */
    case 1708:  /* neon_vbslv4hi_internal */
    case 1707:  /* neon_vbslv16qi_internal */
    case 1706:  /* neon_vbslv8qi_internal */
    case 1690:  /* neon_vextv2di */
    case 1689:  /* neon_vextdi */
    case 1688:  /* neon_vextv4sf */
    case 1687:  /* neon_vextv2sf */
    case 1686:  /* neon_vextv4si */
    case 1685:  /* neon_vextv2si */
    case 1684:  /* neon_vextv8hi */
    case 1683:  /* neon_vextv4hi */
    case 1682:  /* neon_vextv16qi */
    case 1681:  /* neon_vextv8qi */
    case 1656:  /* neon_vqrdmulh_lanev2si */
    case 1655:  /* neon_vqdmulh_lanev2si */
    case 1654:  /* neon_vqrdmulh_lanev4hi */
    case 1653:  /* neon_vqdmulh_lanev4hi */
    case 1652:  /* neon_vqrdmulh_lanev4si */
    case 1651:  /* neon_vqdmulh_lanev4si */
    case 1650:  /* neon_vqrdmulh_lanev8hi */
    case 1649:  /* neon_vqdmulh_lanev8hi */
    case 1648:  /* neon_vqdmull_lanev2si */
    case 1647:  /* neon_vqdmull_lanev4hi */
    case 1646:  /* neon_vmullu_lanev2si */
    case 1645:  /* neon_vmulls_lanev2si */
    case 1644:  /* neon_vmullu_lanev4hi */
    case 1643:  /* neon_vmulls_lanev4hi */
    case 1642:  /* neon_vmul_lanev4sf */
    case 1641:  /* neon_vmul_lanev4si */
    case 1640:  /* neon_vmul_lanev8hi */
    case 1639:  /* neon_vmul_lanev2sf */
    case 1638:  /* neon_vmul_lanev2si */
    case 1637:  /* neon_vmul_lanev4hi */
    case 1274:  /* neon_vqdmlslv2si */
    case 1273:  /* neon_vqdmlslv4hi */
    case 1272:  /* neon_vqdmlalv2si */
    case 1271:  /* neon_vqdmlalv4hi */
    case 1262:  /* neon_vmlsluv2si */
    case 1261:  /* neon_vmlslsv2si */
    case 1260:  /* neon_vmlsluv4hi */
    case 1259:  /* neon_vmlslsv4hi */
    case 1258:  /* neon_vmlsluv8qi */
    case 1257:  /* neon_vmlslsv8qi */
    case 1256:  /* neon_vmlsv4sf_unspec */
    case 1255:  /* neon_vmlsv2sf_unspec */
    case 1254:  /* neon_vmlsv4si_unspec */
    case 1253:  /* neon_vmlsv2si_unspec */
    case 1252:  /* neon_vmlsv8hi_unspec */
    case 1251:  /* neon_vmlsv4hi_unspec */
    case 1250:  /* neon_vmlsv16qi_unspec */
    case 1249:  /* neon_vmlsv8qi_unspec */
    case 1248:  /* neon_vmlaluv2si */
    case 1247:  /* neon_vmlalsv2si */
    case 1246:  /* neon_vmlaluv4hi */
    case 1245:  /* neon_vmlalsv4hi */
    case 1244:  /* neon_vmlaluv8qi */
    case 1243:  /* neon_vmlalsv8qi */
    case 1242:  /* neon_vmlav4sf_unspec */
    case 1241:  /* neon_vmlav2sf_unspec */
    case 1240:  /* neon_vmlav4si_unspec */
    case 1239:  /* neon_vmlav2si_unspec */
    case 1238:  /* neon_vmlav8hi_unspec */
    case 1237:  /* neon_vmlav4hi_unspec */
    case 1236:  /* neon_vmlav16qi_unspec */
    case 1235:  /* neon_vmlav8qi_unspec */
    case 545:  /* iwmmxt_wsadh */
    case 544:  /* iwmmxt_wsadb */
    case 436:  /* iwmmxt_wmacu */
    case 434:  /* iwmmxt_wmacs */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 565:  /* iwmmxt_wmulwum */
    case 564:  /* iwmmxt_wmulwsm */
    case 553:  /* iwmmxt_wabsdiffw */
    case 552:  /* iwmmxt_wabsdiffh */
    case 551:  /* iwmmxt_wabsdiffb */
    case 445:  /* iwmmxt_uavgv4hi3 */
    case 444:  /* iwmmxt_uavgv8qi3 */
    case 433:  /* umulv4hi3_highpart */
    case 432:  /* smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 3973:  /* *p *thumb2_movhi_insn */
    case 3972:  /* *p *thumb2_movsi_insn */
    case 3905:  /* *p *movdf_vfp */
    case 3904:  /* *p *thumb2_movsf_vfp */
    case 3903:  /* *p *movsf_vfp */
    case 3902:  /* *p *movdi_vfp_cortexa8 */
    case 3901:  /* *p *thumb2_movsi_vfp */
    case 3900:  /* *p *arm_movsi_vfp */
    case 3689:  /* *p movv8qi_internal */
    case 3688:  /* *p movv4hi_internal */
    case 3687:  /* *p movv2si_internal */
    case 3596:  /* *p *arm_movsf_soft_insn */
    case 3595:  /* *p *arm32_movhf */
    case 3594:  /* *p *arm_movqi_insn */
    case 3593:  /* *p *movhi_bytes */
    case 3592:  /* *p *movhi_insn_arch4 */
    case 3589:  /* *p *arm_movsi_insn */
    case 400:  /* *cond_iwmmxt_movsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 397:  /* iwmmxt_nanddi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 390:  /* *load_multiple */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 385:  /* *stm2_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 384:  /* *stm2_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 383:  /* *ldm2_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 382:  /* *ldm2_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 389:  /* *stm2_db_update */
    case 381:  /* *stm2_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 388:  /* *stm2_db */
    case 380:  /* *stm2_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 387:  /* *ldm2_db_update */
    case 379:  /* *ldm2_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 386:  /* *ldm2_db */
    case 378:  /* *ldm2_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 377:  /* *thumb_stm2_ia_update */
    case 376:  /* *stm2_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 375:  /* *stm2_ia */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 374:  /* *thumb_ldm2_ia_update */
    case 373:  /* *ldm2_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 372:  /* *thumb_ldm2_ia */
    case 371:  /* *ldm2_ia */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 366:  /* *stm3_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 365:  /* *stm3_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 364:  /* *ldm3_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 363:  /* *ldm3_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 370:  /* *stm3_db_update */
    case 362:  /* *stm3_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 369:  /* *stm3_db */
    case 361:  /* *stm3_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 368:  /* *ldm3_db_update */
    case 360:  /* *ldm3_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 367:  /* *ldm3_db */
    case 359:  /* *ldm3_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 358:  /* *thumb_stm3_ia_update */
    case 357:  /* *stm3_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 356:  /* *stm3_ia */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 355:  /* *thumb_ldm3_ia_update */
    case 354:  /* *ldm3_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 353:  /* *thumb_ldm3_ia */
    case 352:  /* *ldm3_ia */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 347:  /* *stm4_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 346:  /* *stm4_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 345:  /* *ldm4_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 344:  /* *ldm4_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 351:  /* *stm4_db_update */
    case 343:  /* *stm4_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 350:  /* *stm4_db */
    case 342:  /* *stm4_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 349:  /* *ldm4_db_update */
    case 341:  /* *ldm4_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 348:  /* *ldm4_db */
    case 340:  /* *ldm4_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 339:  /* *thumb_stm4_ia_update */
    case 338:  /* *stm4_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 337:  /* *stm4_ia */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 336:  /* *thumb_ldm4_ia_update */
    case 335:  /* *ldm4_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 334:  /* *thumb_ldm4_ia */
    case 333:  /* *ldm4_ia */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 326:  /* *thumb2_strd_base_neg */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 325:  /* *thumb2_strd_base */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 324:  /* *thumb2_strd */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 323:  /* *thumb2_ldrd_base_neg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 322:  /* *thumb2_ldrd_base */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 321:  /* *thumb2_ldrd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 320:  /* arm_rev16si2_alt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 319:  /* arm_rev16si2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 315:  /* *arm_movtas_ze */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 314:  /* tlscall */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 818:  /* thumb2_eh_return */
    case 778:  /* thumb_eh_return */
    case 311:  /* arm_eh_return */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 309:  /* prefetch */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 715:  /* set_fpscr */
    case 310:  /* force_register_use */
    case 306:  /* consttable_16 */
    case 305:  /* consttable_8 */
    case 304:  /* consttable_4 */
    case 303:  /* consttable_2 */
    case 302:  /* consttable_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 297:  /* *ldr_with_return */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      break;

    case 296:  /* *pop_multiple_with_return */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 295:  /* *pop_multiple_with_writeback_and_return */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 298:  /* *vfp_pop_multiple_with_writeback */
    case 294:  /* *load_multiple_with_writeback */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 293:  /* stack_tie */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 686:  /* *push_multi_vfp */
    case 292:  /* *push_multi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &PATTERN (insn));
      break;

    case 291:  /* *not_signextract_onebit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      break;

    case 290:  /* *sign_extract_onebit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 288:  /* *arith_adjacentmem */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 283:  /* *if_arith_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 282:  /* *ifcompare_arith_not */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 281:  /* *if_not_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 280:  /* *ifcompare_not_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 278:  /* *ifcompare_shift_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[9] = *(ro_loc[9] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 277:  /* *if_move_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 275:  /* *if_shift_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 274:  /* *ifcompare_shift_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 285:  /* *if_neg_move */
    case 273:  /* *if_not_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 284:  /* *ifcompare_neg_move */
    case 272:  /* *ifcompare_not_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 289:  /* *cond_move_not */
    case 287:  /* *if_move_neg */
    case 271:  /* *if_move_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 286:  /* *ifcompare_move_neg */
    case 270:  /* *ifcompare_move_not */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 269:  /* *if_move_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 276:  /* *ifcompare_move_shift */
    case 268:  /* *ifcompare_move_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 267:  /* *if_arith_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 266:  /* *ifcompare_arith_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 279:  /* *if_shift_shift */
    case 265:  /* *if_arith_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 264:  /* *ifcompare_arith_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[9] = *(ro_loc[9] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 263:  /* *if_move_plus */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 262:  /* *ifcompare_move_plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 261:  /* *if_plus_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 260:  /* *ifcompare_plus_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 811:  /* *thumb2_movcond */
    case 259:  /* movcond */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 258:  /* movcond_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 810:  /* *thumb2_negscc */
    case 257:  /* *negscc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 255:  /* *and_scc_scc_cmp */
    case 253:  /* *ior_scc_scc_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 6;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[4] = 5;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[5] = 4;
      break;

    case 256:  /* *and_scc_scc_nodom */
    case 254:  /* *and_scc_scc */
    case 252:  /* *ior_scc_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 251:  /* *cmp_ior */
    case 250:  /* *cmp_and */
    case 249:  /* *cmp_ite1 */
    case 248:  /* *cmp_ite0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      break;

    case 808:  /* *thumb2_cond_arith_strict_it */
    case 807:  /* *thumb2_cond_arith */
    case 246:  /* *cond_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 806:  /* *thumb2_cond_move */
    case 245:  /* *cond_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 244:  /* *compare_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 804:  /* *thumb2_ior_scc */
    case 803:  /* *thumb2_and_scc */
    case 243:  /* *ior_scc */
    case 242:  /* *and_scc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 241:  /* *sub_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      break;

    case 240:  /* *sub_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[3] = 3;
      break;

    case 239:  /* *sub_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 238:  /* *arith_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 237:  /* *arith_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[4] = 4;
      break;

    case 236:  /* *and_shiftsi */
    case 235:  /* *eor_shiftsi */
    case 234:  /* *orr_shiftsi */
    case 233:  /* *rsb_shiftsi */
    case 232:  /* *add_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 929:  /* mulv4sf3addv4sf_neon */
    case 928:  /* mulv2sf3addv2sf_neon */
    case 927:  /* mulv4si3addv4si_neon */
    case 926:  /* mulv2si3addv2si_neon */
    case 925:  /* mulv8hi3addv8hi_neon */
    case 924:  /* mulv4hi3addv4hi_neon */
    case 923:  /* mulv16qi3addv16qi_neon */
    case 922:  /* mulv8qi3addv8qi_neon */
    case 645:  /* *muldf3subdf_vfp */
    case 644:  /* *mulsf3subsf_vfp */
    case 643:  /* *muldf3adddf_vfp */
    case 642:  /* *mulsf3addsf_vfp */
    case 231:  /* *and_multsi */
    case 230:  /* *eor_multsi */
    case 229:  /* *orr_multsi */
    case 228:  /* *rsb_multsi */
    case 227:  /* *add_multsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 802:  /* *thumb2_indirect_jump */
    case 773:  /* *thumb1_indirect_jump */
    case 224:  /* *load_indirect_jump */
    case 223:  /* *arm_indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 222:  /* arm_casesi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 787:  /* *thumb2_pop_single */
    case 776:  /* *thumb1_movpc_insn */
    case 716:  /* get_fpscr */
    case 441:  /* iwmmxt_clrv2si */
    case 440:  /* iwmmxt_clrv4hi */
    case 439:  /* iwmmxt_clrv8qi */
    case 438:  /* iwmmxt_clrdi */
    case 312:  /* load_tp_hard */
    case 220:  /* *check_arch2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 218:  /* *cond_simple_return_inverted */
    case 217:  /* *cond_return_inverted */
    case 216:  /* *cond_simple_return */
    case 215:  /* *cond_return */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 817:  /* *thumb2_return */
    case 775:  /* *epilogue_insns */
    case 774:  /* prologue_thumb1_interwork */
    case 672:  /* *movcc_vfp */
    case 610:  /* iwmmxt_torvscv8qi3 */
    case 609:  /* iwmmxt_torvscv4hi3 */
    case 608:  /* iwmmxt_torvscv2si3 */
    case 607:  /* iwmmxt_torcv8qi3 */
    case 606:  /* iwmmxt_torcv4hi3 */
    case 605:  /* iwmmxt_torcv2si3 */
    case 604:  /* iwmmxt_tandcv8qi3 */
    case 603:  /* iwmmxt_tandcv4hi3 */
    case 602:  /* iwmmxt_tandcv2si3 */
    case 313:  /* load_tp_soft */
    case 301:  /* consttable_end */
    case 300:  /* align_8 */
    case 299:  /* align_4 */
    case 226:  /* trap */
    case 225:  /* nop */
    case 221:  /* blockage */
    case 219:  /* *arm_simple_return */
    case 214:  /* *arm_return */
      break;

    case 213:  /* *sibcall_value_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 212:  /* *sibcall_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 801:  /* *call_value_reg_thumb2 */
    case 771:  /* *call_value_insn */
    case 769:  /* *call_value_reg_thumb1 */
    case 768:  /* *call_value_reg_thumb1_v5 */
    case 211:  /* *call_value_symbol */
    case 209:  /* *call_value_mem */
    case 208:  /* *call_value_reg_arm */
    case 207:  /* *call_value_reg_armv5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 800:  /* *call_reg_thumb2 */
    case 770:  /* *call_insn */
    case 767:  /* *call_reg_thumb1 */
    case 766:  /* *call_reg_thumb1_v5 */
    case 210:  /* *call_symbol */
    case 206:  /* *call_mem */
    case 205:  /* *call_reg_arm */
    case 204:  /* *call_reg_armv5 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 799:  /* *thumb2_movsfcc_soft_insn */
    case 798:  /* *thumb2_movsicc_insn */
    case 627:  /* *thumb2_movdfcc_vfp */
    case 626:  /* *movdfcc_vfp */
    case 625:  /* *thumb2_movsfcc_vfp */
    case 624:  /* *movsfcc_vfp */
    case 202:  /* *movsfcc_soft_insn */
    case 201:  /* *movsicc_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 200:  /* *cmovdf */
    case 199:  /* *cmovsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 797:  /* *thumb2_mov_notscc_strict_it */
    case 796:  /* *thumb2_mov_notscc */
    case 795:  /* *thumb2_mov_negscc_strict_it */
    case 794:  /* *thumb2_mov_negscc */
    case 198:  /* *mov_notscc */
    case 197:  /* *mov_negscc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 793:  /* *thumb2_mov_scc */
    case 196:  /* *mov_scc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 195:  /* *arm_cond_branch_reversed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 194:  /* arm_cond_branch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 193:  /* *deleted_compare */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XEXP (pat, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 759:  /* *thumb_cmpdi_zero */
    case 192:  /* *arm_cmpdi_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 190:  /* *arm_cmpdi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 189:  /* *arm_cmpsi_negshiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 188:  /* *cmpsi_shiftsi_swp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 187:  /* *cmpsi_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 680:  /* *cmpdf_trap_vfp */
    case 679:  /* *cmpdf_vfp */
    case 678:  /* *cmpsf_trap_vfp */
    case 677:  /* *cmpsf_vfp */
    case 676:  /* *cmpdf_trap_split_vfp */
    case 675:  /* *cmpdf_split_vfp */
    case 674:  /* *cmpsf_trap_split_vfp */
    case 673:  /* *cmpsf_split_vfp */
    case 191:  /* *arm_cmpdi_unsigned */
    case 186:  /* *arm_cmpsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 179:  /* *movsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 178:  /* tls_load_dot_plus_eight */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 177:  /* pic_add_dot_plus_eight */
    case 176:  /* pic_add_dot_plus_four */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 2220:  /* atomic_storesi */
    case 2219:  /* atomic_storehi */
    case 2218:  /* atomic_storeqi */
    case 2217:  /* atomic_loadsi */
    case 2216:  /* atomic_loadhi */
    case 2215:  /* atomic_loadqi */
    case 2210:  /* crypto_vmullp64 */
    case 2204:  /* crypto_sha256su0 */
    case 2203:  /* crypto_sha1su1 */
    case 2202:  /* crypto_aese */
    case 2201:  /* crypto_aesd */
    case 2132:  /* neon_vst4_lanev4sf */
    case 2131:  /* neon_vst4_lanev4si */
    case 2130:  /* neon_vst4_lanev8hi */
    case 2129:  /* neon_vst4_lanev2sf */
    case 2128:  /* neon_vst4_lanev2si */
    case 2127:  /* neon_vst4_lanev4hi */
    case 2126:  /* neon_vst4_lanev8qi */
    case 2100:  /* neon_vld4qbv4sf */
    case 2099:  /* neon_vld4qbv4si */
    case 2098:  /* neon_vld4qbv8hi */
    case 2097:  /* neon_vld4qbv16qi */
    case 2087:  /* neon_vst3_lanev4sf */
    case 2086:  /* neon_vst3_lanev4si */
    case 2085:  /* neon_vst3_lanev8hi */
    case 2084:  /* neon_vst3_lanev2sf */
    case 2083:  /* neon_vst3_lanev2si */
    case 2082:  /* neon_vst3_lanev4hi */
    case 2081:  /* neon_vst3_lanev8qi */
    case 2055:  /* neon_vld3qbv4sf */
    case 2054:  /* neon_vld3qbv4si */
    case 2053:  /* neon_vld3qbv8hi */
    case 2052:  /* neon_vld3qbv16qi */
    case 2042:  /* neon_vst2_lanev4sf */
    case 2041:  /* neon_vst2_lanev4si */
    case 2040:  /* neon_vst2_lanev8hi */
    case 2039:  /* neon_vst2_lanev2sf */
    case 2038:  /* neon_vst2_lanev2si */
    case 2037:  /* neon_vst2_lanev4hi */
    case 2036:  /* neon_vst2_lanev8qi */
    case 2005:  /* neon_vst1_lanev2di */
    case 2004:  /* neon_vst1_lanev4sf */
    case 2003:  /* neon_vst1_lanev4si */
    case 2002:  /* neon_vst1_lanev8hi */
    case 2001:  /* neon_vst1_lanev16qi */
    case 2000:  /* neon_vst1_lanedi */
    case 1999:  /* neon_vst1_lanev2sf */
    case 1998:  /* neon_vst1_lanev2si */
    case 1997:  /* neon_vst1_lanev4hi */
    case 1996:  /* neon_vst1_lanev8qi */
    case 1928:  /* neon_vcombinev16qi */
    case 1927:  /* neon_vtbl2v16qi */
    case 1926:  /* neon_vtbl1v16qi */
    case 1925:  /* neon_vtbl4v8qi */
    case 1924:  /* neon_vtbl3v8qi */
    case 1923:  /* neon_vtbl2v8qi */
    case 1922:  /* neon_vtbl1v8qi */
    case 1873:  /* neon_vshllu_nv2si */
    case 1872:  /* neon_vshlls_nv2si */
    case 1871:  /* neon_vshllu_nv4hi */
    case 1870:  /* neon_vshlls_nv4hi */
    case 1869:  /* neon_vshllu_nv8qi */
    case 1868:  /* neon_vshlls_nv8qi */
    case 1867:  /* neon_vqshlu_nv2di */
    case 1866:  /* neon_vqshlu_ndi */
    case 1865:  /* neon_vqshlu_nv4si */
    case 1864:  /* neon_vqshlu_nv2si */
    case 1863:  /* neon_vqshlu_nv8hi */
    case 1862:  /* neon_vqshlu_nv4hi */
    case 1861:  /* neon_vqshlu_nv16qi */
    case 1860:  /* neon_vqshlu_nv8qi */
    case 1859:  /* neon_vqshl_u_nv2di */
    case 1858:  /* neon_vqshl_s_nv2di */
    case 1857:  /* neon_vqshl_u_ndi */
    case 1856:  /* neon_vqshl_s_ndi */
    case 1855:  /* neon_vqshl_u_nv4si */
    case 1854:  /* neon_vqshl_s_nv4si */
    case 1853:  /* neon_vqshl_u_nv2si */
    case 1852:  /* neon_vqshl_s_nv2si */
    case 1851:  /* neon_vqshl_u_nv8hi */
    case 1850:  /* neon_vqshl_s_nv8hi */
    case 1849:  /* neon_vqshl_u_nv4hi */
    case 1848:  /* neon_vqshl_s_nv4hi */
    case 1847:  /* neon_vqshl_u_nv16qi */
    case 1846:  /* neon_vqshl_s_nv16qi */
    case 1845:  /* neon_vqshl_u_nv8qi */
    case 1844:  /* neon_vqshl_s_nv8qi */
    case 1843:  /* neon_vshl_nv2di */
    case 1842:  /* neon_vshl_ndi */
    case 1841:  /* neon_vshl_nv4si */
    case 1840:  /* neon_vshl_nv2si */
    case 1839:  /* neon_vshl_nv8hi */
    case 1838:  /* neon_vshl_nv4hi */
    case 1837:  /* neon_vshl_nv16qi */
    case 1836:  /* neon_vshl_nv8qi */
    case 1835:  /* neon_vqrshrun_nv2di */
    case 1834:  /* neon_vqshrun_nv2di */
    case 1833:  /* neon_vqrshrun_nv4si */
    case 1832:  /* neon_vqshrun_nv4si */
    case 1831:  /* neon_vqrshrun_nv8hi */
    case 1830:  /* neon_vqshrun_nv8hi */
    case 1829:  /* neon_vqrshrnu_nv2di */
    case 1828:  /* neon_vqrshrns_nv2di */
    case 1827:  /* neon_vqshrnu_nv2di */
    case 1826:  /* neon_vqshrns_nv2di */
    case 1825:  /* neon_vqrshrnu_nv4si */
    case 1824:  /* neon_vqrshrns_nv4si */
    case 1823:  /* neon_vqshrnu_nv4si */
    case 1822:  /* neon_vqshrns_nv4si */
    case 1821:  /* neon_vqrshrnu_nv8hi */
    case 1820:  /* neon_vqrshrns_nv8hi */
    case 1819:  /* neon_vqshrnu_nv8hi */
    case 1818:  /* neon_vqshrns_nv8hi */
    case 1817:  /* neon_vrshrn_nv2di */
    case 1816:  /* neon_vshrn_nv2di */
    case 1815:  /* neon_vrshrn_nv4si */
    case 1814:  /* neon_vshrn_nv4si */
    case 1813:  /* neon_vrshrn_nv8hi */
    case 1812:  /* neon_vshrn_nv8hi */
    case 1811:  /* neon_vrshru_nv2di */
    case 1810:  /* neon_vrshrs_nv2di */
    case 1809:  /* neon_vshru_nv2di */
    case 1808:  /* neon_vshrs_nv2di */
    case 1807:  /* neon_vrshru_ndi */
    case 1806:  /* neon_vrshrs_ndi */
    case 1805:  /* neon_vshru_ndi */
    case 1804:  /* neon_vshrs_ndi */
    case 1803:  /* neon_vrshru_nv4si */
    case 1802:  /* neon_vrshrs_nv4si */
    case 1801:  /* neon_vshru_nv4si */
    case 1800:  /* neon_vshrs_nv4si */
    case 1799:  /* neon_vrshru_nv2si */
    case 1798:  /* neon_vrshrs_nv2si */
    case 1797:  /* neon_vshru_nv2si */
    case 1796:  /* neon_vshrs_nv2si */
    case 1795:  /* neon_vrshru_nv8hi */
    case 1794:  /* neon_vrshrs_nv8hi */
    case 1793:  /* neon_vshru_nv8hi */
    case 1792:  /* neon_vshrs_nv8hi */
    case 1791:  /* neon_vrshru_nv4hi */
    case 1790:  /* neon_vrshrs_nv4hi */
    case 1789:  /* neon_vshru_nv4hi */
    case 1788:  /* neon_vshrs_nv4hi */
    case 1787:  /* neon_vrshru_nv16qi */
    case 1786:  /* neon_vrshrs_nv16qi */
    case 1785:  /* neon_vshru_nv16qi */
    case 1784:  /* neon_vshrs_nv16qi */
    case 1783:  /* neon_vrshru_nv8qi */
    case 1782:  /* neon_vrshrs_nv8qi */
    case 1781:  /* neon_vshru_nv8qi */
    case 1780:  /* neon_vshrs_nv8qi */
    case 1779:  /* neon_vqrshluv2di */
    case 1778:  /* neon_vqrshlsv2di */
    case 1777:  /* neon_vqshluv2di */
    case 1776:  /* neon_vqshlsv2di */
    case 1775:  /* neon_vqrshludi */
    case 1774:  /* neon_vqrshlsdi */
    case 1773:  /* neon_vqshludi */
    case 1772:  /* neon_vqshlsdi */
    case 1771:  /* neon_vqrshluv4si */
    case 1770:  /* neon_vqrshlsv4si */
    case 1769:  /* neon_vqshluv4si */
    case 1768:  /* neon_vqshlsv4si */
    case 1767:  /* neon_vqrshluv2si */
    case 1766:  /* neon_vqrshlsv2si */
    case 1765:  /* neon_vqshluv2si */
    case 1764:  /* neon_vqshlsv2si */
    case 1763:  /* neon_vqrshluv8hi */
    case 1762:  /* neon_vqrshlsv8hi */
    case 1761:  /* neon_vqshluv8hi */
    case 1760:  /* neon_vqshlsv8hi */
    case 1759:  /* neon_vqrshluv4hi */
    case 1758:  /* neon_vqrshlsv4hi */
    case 1757:  /* neon_vqshluv4hi */
    case 1756:  /* neon_vqshlsv4hi */
    case 1755:  /* neon_vqrshluv16qi */
    case 1754:  /* neon_vqrshlsv16qi */
    case 1753:  /* neon_vqshluv16qi */
    case 1752:  /* neon_vqshlsv16qi */
    case 1751:  /* neon_vqrshluv8qi */
    case 1750:  /* neon_vqrshlsv8qi */
    case 1749:  /* neon_vqshluv8qi */
    case 1748:  /* neon_vqshlsv8qi */
    case 1747:  /* neon_vrshluv2di */
    case 1746:  /* neon_vrshlsv2di */
    case 1745:  /* neon_vshluv2di */
    case 1744:  /* neon_vshlsv2di */
    case 1743:  /* neon_vrshludi */
    case 1742:  /* neon_vrshlsdi */
    case 1741:  /* neon_vshludi */
    case 1740:  /* neon_vshlsdi */
    case 1739:  /* neon_vrshluv4si */
    case 1738:  /* neon_vrshlsv4si */
    case 1737:  /* neon_vshluv4si */
    case 1736:  /* neon_vshlsv4si */
    case 1735:  /* neon_vrshluv2si */
    case 1734:  /* neon_vrshlsv2si */
    case 1733:  /* neon_vshluv2si */
    case 1732:  /* neon_vshlsv2si */
    case 1731:  /* neon_vrshluv8hi */
    case 1730:  /* neon_vrshlsv8hi */
    case 1729:  /* neon_vshluv8hi */
    case 1728:  /* neon_vshlsv8hi */
    case 1727:  /* neon_vrshluv4hi */
    case 1726:  /* neon_vrshlsv4hi */
    case 1725:  /* neon_vshluv4hi */
    case 1724:  /* neon_vshlsv4hi */
    case 1723:  /* neon_vrshluv16qi */
    case 1722:  /* neon_vrshlsv16qi */
    case 1721:  /* neon_vshluv16qi */
    case 1720:  /* neon_vshlsv16qi */
    case 1719:  /* neon_vrshluv8qi */
    case 1718:  /* neon_vrshlsv8qi */
    case 1717:  /* neon_vshluv8qi */
    case 1716:  /* neon_vshlsv8qi */
    case 1618:  /* neon_vcvtu_nv4si */
    case 1617:  /* neon_vcvts_nv4si */
    case 1616:  /* neon_vcvtu_nv2si */
    case 1615:  /* neon_vcvts_nv2si */
    case 1614:  /* neon_vcvtu_nv4sf */
    case 1613:  /* neon_vcvts_nv4sf */
    case 1612:  /* neon_vcvtu_nv2sf */
    case 1611:  /* neon_vcvts_nv2sf */
    case 1505:  /* neon_vrsqrtsv4sf */
    case 1504:  /* neon_vrsqrtsv2sf */
    case 1503:  /* neon_vrecpsv4sf */
    case 1502:  /* neon_vrecpsv2sf */
    case 1501:  /* neon_vpminfv4sf */
    case 1500:  /* neon_vpmaxfv4sf */
    case 1499:  /* neon_vpminfv2sf */
    case 1498:  /* neon_vpmaxfv2sf */
    case 1497:  /* neon_vpminuv2si */
    case 1496:  /* neon_vpminsv2si */
    case 1495:  /* neon_vpmaxuv2si */
    case 1494:  /* neon_vpmaxsv2si */
    case 1493:  /* neon_vpminuv4hi */
    case 1492:  /* neon_vpminsv4hi */
    case 1491:  /* neon_vpmaxuv4hi */
    case 1490:  /* neon_vpmaxsv4hi */
    case 1489:  /* neon_vpminuv8qi */
    case 1488:  /* neon_vpminsv8qi */
    case 1487:  /* neon_vpmaxuv8qi */
    case 1486:  /* neon_vpmaxsv8qi */
    case 1485:  /* neon_vpadaluv4si */
    case 1484:  /* neon_vpadalsv4si */
    case 1483:  /* neon_vpadaluv2si */
    case 1482:  /* neon_vpadalsv2si */
    case 1481:  /* neon_vpadaluv8hi */
    case 1480:  /* neon_vpadalsv8hi */
    case 1479:  /* neon_vpadaluv4hi */
    case 1478:  /* neon_vpadalsv4hi */
    case 1477:  /* neon_vpadaluv16qi */
    case 1476:  /* neon_vpadalsv16qi */
    case 1475:  /* neon_vpadaluv8qi */
    case 1474:  /* neon_vpadalsv8qi */
    case 1461:  /* neon_vminfv4sf */
    case 1460:  /* neon_vmaxfv4sf */
    case 1459:  /* neon_vminfv2sf */
    case 1458:  /* neon_vmaxfv2sf */
    case 1457:  /* neon_vminuv4si */
    case 1456:  /* neon_vminsv4si */
    case 1455:  /* neon_vmaxuv4si */
    case 1454:  /* neon_vmaxsv4si */
    case 1453:  /* neon_vminuv2si */
    case 1452:  /* neon_vminsv2si */
    case 1451:  /* neon_vmaxuv2si */
    case 1450:  /* neon_vmaxsv2si */
    case 1449:  /* neon_vminuv8hi */
    case 1448:  /* neon_vminsv8hi */
    case 1447:  /* neon_vmaxuv8hi */
    case 1446:  /* neon_vmaxsv8hi */
    case 1445:  /* neon_vminuv4hi */
    case 1444:  /* neon_vminsv4hi */
    case 1443:  /* neon_vmaxuv4hi */
    case 1442:  /* neon_vmaxsv4hi */
    case 1441:  /* neon_vminuv16qi */
    case 1440:  /* neon_vminsv16qi */
    case 1439:  /* neon_vmaxuv16qi */
    case 1438:  /* neon_vmaxsv16qi */
    case 1437:  /* neon_vminuv8qi */
    case 1436:  /* neon_vminsv8qi */
    case 1435:  /* neon_vmaxuv8qi */
    case 1434:  /* neon_vmaxsv8qi */
    case 1415:  /* neon_vabdluv2si */
    case 1414:  /* neon_vabdlsv2si */
    case 1413:  /* neon_vabdluv4hi */
    case 1412:  /* neon_vabdlsv4hi */
    case 1411:  /* neon_vabdluv8qi */
    case 1410:  /* neon_vabdlsv8qi */
    case 1409:  /* neon_vabdfv4sf */
    case 1408:  /* neon_vabdfv2sf */
    case 1407:  /* neon_vabduv4si */
    case 1406:  /* neon_vabdsv4si */
    case 1405:  /* neon_vabduv2si */
    case 1404:  /* neon_vabdsv2si */
    case 1403:  /* neon_vabduv8hi */
    case 1402:  /* neon_vabdsv8hi */
    case 1401:  /* neon_vabduv4hi */
    case 1400:  /* neon_vabdsv4hi */
    case 1399:  /* neon_vabduv16qi */
    case 1398:  /* neon_vabdsv16qi */
    case 1397:  /* neon_vabduv8qi */
    case 1396:  /* neon_vabdsv8qi */
    case 1395:  /* neon_vtstv4si */
    case 1394:  /* neon_vtstv2si */
    case 1393:  /* neon_vtstv8hi */
    case 1392:  /* neon_vtstv4hi */
    case 1391:  /* neon_vtstv16qi */
    case 1390:  /* neon_vtstv8qi */
    case 1389:  /* neon_vcagtv4sf */
    case 1388:  /* neon_vcagtv2sf */
    case 1387:  /* neon_vcagev4sf */
    case 1386:  /* neon_vcagev2sf */
    case 1385:  /* neon_vcltv4sf */
    case 1384:  /* neon_vcltv2sf */
    case 1383:  /* neon_vcltv4si */
    case 1382:  /* neon_vcltv2si */
    case 1381:  /* neon_vcltv8hi */
    case 1380:  /* neon_vcltv4hi */
    case 1379:  /* neon_vcltv16qi */
    case 1378:  /* neon_vcltv8qi */
    case 1377:  /* neon_vclev4sf */
    case 1376:  /* neon_vclev2sf */
    case 1375:  /* neon_vclev4si */
    case 1374:  /* neon_vclev2si */
    case 1373:  /* neon_vclev8hi */
    case 1372:  /* neon_vclev4hi */
    case 1371:  /* neon_vclev16qi */
    case 1370:  /* neon_vclev8qi */
    case 1369:  /* neon_vcgtuv4si */
    case 1368:  /* neon_vcgtuv2si */
    case 1367:  /* neon_vcgtuv8hi */
    case 1366:  /* neon_vcgtuv4hi */
    case 1365:  /* neon_vcgtuv16qi */
    case 1364:  /* neon_vcgtuv8qi */
    case 1363:  /* neon_vcgtv4sf */
    case 1362:  /* neon_vcgtv2sf */
    case 1361:  /* neon_vcgtv4si */
    case 1360:  /* neon_vcgtv2si */
    case 1359:  /* neon_vcgtv8hi */
    case 1358:  /* neon_vcgtv4hi */
    case 1357:  /* neon_vcgtv16qi */
    case 1356:  /* neon_vcgtv8qi */
    case 1355:  /* neon_vcgeuv4si */
    case 1354:  /* neon_vcgeuv2si */
    case 1353:  /* neon_vcgeuv8hi */
    case 1352:  /* neon_vcgeuv4hi */
    case 1351:  /* neon_vcgeuv16qi */
    case 1350:  /* neon_vcgeuv8qi */
    case 1349:  /* neon_vcgev4sf */
    case 1348:  /* neon_vcgev2sf */
    case 1347:  /* neon_vcgev4si */
    case 1346:  /* neon_vcgev2si */
    case 1345:  /* neon_vcgev8hi */
    case 1344:  /* neon_vcgev4hi */
    case 1343:  /* neon_vcgev16qi */
    case 1342:  /* neon_vcgev8qi */
    case 1341:  /* neon_vceqv4sf */
    case 1340:  /* neon_vceqv2sf */
    case 1339:  /* neon_vceqv4si */
    case 1338:  /* neon_vceqv2si */
    case 1337:  /* neon_vceqv8hi */
    case 1336:  /* neon_vceqv4hi */
    case 1335:  /* neon_vceqv16qi */
    case 1334:  /* neon_vceqv8qi */
    case 1333:  /* neon_vrsubhnv2di */
    case 1332:  /* neon_vsubhnv2di */
    case 1331:  /* neon_vrsubhnv4si */
    case 1330:  /* neon_vsubhnv4si */
    case 1329:  /* neon_vrsubhnv8hi */
    case 1328:  /* neon_vsubhnv8hi */
    case 1327:  /* neon_vhsubuv4si */
    case 1326:  /* neon_vhsubsv4si */
    case 1325:  /* neon_vhsubuv2si */
    case 1324:  /* neon_vhsubsv2si */
    case 1323:  /* neon_vhsubuv8hi */
    case 1322:  /* neon_vhsubsv8hi */
    case 1321:  /* neon_vhsubuv4hi */
    case 1320:  /* neon_vhsubsv4hi */
    case 1319:  /* neon_vhsubuv16qi */
    case 1318:  /* neon_vhsubsv16qi */
    case 1317:  /* neon_vhsubuv8qi */
    case 1316:  /* neon_vhsubsv8qi */
    case 1315:  /* neon_vqsubuv2di */
    case 1314:  /* neon_vqsubsv2di */
    case 1313:  /* neon_vqsubudi */
    case 1312:  /* neon_vqsubsdi */
    case 1311:  /* neon_vqsubuv4si */
    case 1310:  /* neon_vqsubsv4si */
    case 1309:  /* neon_vqsubuv2si */
    case 1308:  /* neon_vqsubsv2si */
    case 1307:  /* neon_vqsubuv8hi */
    case 1306:  /* neon_vqsubsv8hi */
    case 1305:  /* neon_vqsubuv4hi */
    case 1304:  /* neon_vqsubsv4hi */
    case 1303:  /* neon_vqsubuv16qi */
    case 1302:  /* neon_vqsubsv16qi */
    case 1301:  /* neon_vqsubuv8qi */
    case 1300:  /* neon_vqsubsv8qi */
    case 1299:  /* neon_vsubwuv2si */
    case 1298:  /* neon_vsubwsv2si */
    case 1297:  /* neon_vsubwuv4hi */
    case 1296:  /* neon_vsubwsv4hi */
    case 1295:  /* neon_vsubwuv8qi */
    case 1294:  /* neon_vsubwsv8qi */
    case 1293:  /* neon_vsubluv2si */
    case 1292:  /* neon_vsublsv2si */
    case 1291:  /* neon_vsubluv4hi */
    case 1290:  /* neon_vsublsv4hi */
    case 1289:  /* neon_vsubluv8qi */
    case 1288:  /* neon_vsublsv8qi */
    case 1287:  /* neon_vsubv4sf_unspec */
    case 1286:  /* neon_vsubv2sf_unspec */
    case 1285:  /* neon_vqdmullv2si */
    case 1284:  /* neon_vqdmullv4hi */
    case 1283:  /* neon_vmullpv2si */
    case 1282:  /* neon_vmulluv2si */
    case 1281:  /* neon_vmullsv2si */
    case 1280:  /* neon_vmullpv4hi */
    case 1279:  /* neon_vmulluv4hi */
    case 1278:  /* neon_vmullsv4hi */
    case 1277:  /* neon_vmullpv8qi */
    case 1276:  /* neon_vmulluv8qi */
    case 1275:  /* neon_vmullsv8qi */
    case 1270:  /* neon_vqrdmulhv4si */
    case 1269:  /* neon_vqdmulhv4si */
    case 1268:  /* neon_vqrdmulhv8hi */
    case 1267:  /* neon_vqdmulhv8hi */
    case 1266:  /* neon_vqrdmulhv2si */
    case 1265:  /* neon_vqdmulhv2si */
    case 1264:  /* neon_vqrdmulhv4hi */
    case 1263:  /* neon_vqdmulhv4hi */
    case 1234:  /* neon_vmulfv4sf */
    case 1233:  /* neon_vmulfv2sf */
    case 1232:  /* neon_vmulpv16qi */
    case 1231:  /* neon_vmulpv8qi */
    case 1230:  /* neon_vraddhnv2di */
    case 1229:  /* neon_vaddhnv2di */
    case 1228:  /* neon_vraddhnv4si */
    case 1227:  /* neon_vaddhnv4si */
    case 1226:  /* neon_vraddhnv8hi */
    case 1225:  /* neon_vaddhnv8hi */
    case 1224:  /* neon_vqadduv2di */
    case 1223:  /* neon_vqaddsv2di */
    case 1222:  /* neon_vqaddudi */
    case 1221:  /* neon_vqaddsdi */
    case 1220:  /* neon_vqadduv4si */
    case 1219:  /* neon_vqaddsv4si */
    case 1218:  /* neon_vqadduv2si */
    case 1217:  /* neon_vqaddsv2si */
    case 1216:  /* neon_vqadduv8hi */
    case 1215:  /* neon_vqaddsv8hi */
    case 1214:  /* neon_vqadduv4hi */
    case 1213:  /* neon_vqaddsv4hi */
    case 1212:  /* neon_vqadduv16qi */
    case 1211:  /* neon_vqaddsv16qi */
    case 1210:  /* neon_vqadduv8qi */
    case 1209:  /* neon_vqaddsv8qi */
    case 1208:  /* neon_vhadduv4si */
    case 1207:  /* neon_vhaddsv4si */
    case 1206:  /* neon_vrhadduv4si */
    case 1205:  /* neon_vrhaddsv4si */
    case 1204:  /* neon_vhadduv2si */
    case 1203:  /* neon_vhaddsv2si */
    case 1202:  /* neon_vrhadduv2si */
    case 1201:  /* neon_vrhaddsv2si */
    case 1200:  /* neon_vhadduv8hi */
    case 1199:  /* neon_vhaddsv8hi */
    case 1198:  /* neon_vrhadduv8hi */
    case 1197:  /* neon_vrhaddsv8hi */
    case 1196:  /* neon_vhadduv4hi */
    case 1195:  /* neon_vhaddsv4hi */
    case 1194:  /* neon_vrhadduv4hi */
    case 1193:  /* neon_vrhaddsv4hi */
    case 1192:  /* neon_vhadduv16qi */
    case 1191:  /* neon_vhaddsv16qi */
    case 1190:  /* neon_vrhadduv16qi */
    case 1189:  /* neon_vrhaddsv16qi */
    case 1188:  /* neon_vhadduv8qi */
    case 1187:  /* neon_vhaddsv8qi */
    case 1186:  /* neon_vrhadduv8qi */
    case 1185:  /* neon_vrhaddsv8qi */
    case 1184:  /* neon_vaddwuv2si */
    case 1183:  /* neon_vaddwsv2si */
    case 1182:  /* neon_vaddwuv4hi */
    case 1181:  /* neon_vaddwsv4hi */
    case 1180:  /* neon_vaddwuv8qi */
    case 1179:  /* neon_vaddwsv8qi */
    case 1178:  /* neon_vaddluv2si */
    case 1177:  /* neon_vaddlsv2si */
    case 1176:  /* neon_vaddluv4hi */
    case 1175:  /* neon_vaddlsv4hi */
    case 1174:  /* neon_vaddluv8qi */
    case 1173:  /* neon_vaddlsv8qi */
    case 1172:  /* neon_vaddv4sf_unspec */
    case 1171:  /* neon_vaddv2sf_unspec */
    case 1154:  /* neon_vpumaxv2si */
    case 1153:  /* neon_vpumaxv4hi */
    case 1152:  /* neon_vpumaxv8qi */
    case 1151:  /* neon_vpuminv2si */
    case 1150:  /* neon_vpuminv4hi */
    case 1149:  /* neon_vpuminv8qi */
    case 1148:  /* neon_vpsmaxv2sf */
    case 1147:  /* neon_vpsmaxv2si */
    case 1146:  /* neon_vpsmaxv4hi */
    case 1145:  /* neon_vpsmaxv8qi */
    case 1144:  /* neon_vpsminv2sf */
    case 1143:  /* neon_vpsminv2si */
    case 1142:  /* neon_vpsminv4hi */
    case 1141:  /* neon_vpsminv8qi */
    case 1140:  /* neon_vpadd_internalv2sf */
    case 1139:  /* neon_vpadd_internalv2si */
    case 1138:  /* neon_vpadd_internalv4hi */
    case 1137:  /* neon_vpadd_internalv8qi */
    case 1107:  /* unsigned_shift_di3_neon */
    case 1106:  /* signed_shift_di3_neon */
    case 1102:  /* ashlv2di3_unsigned */
    case 1101:  /* ashlv4si3_unsigned */
    case 1100:  /* ashlv2si3_unsigned */
    case 1099:  /* ashlv8hi3_unsigned */
    case 1098:  /* ashlv4hi3_unsigned */
    case 1097:  /* ashlv16qi3_unsigned */
    case 1096:  /* ashlv8qi3_unsigned */
    case 1095:  /* ashlv2di3_signed */
    case 1094:  /* ashlv4si3_signed */
    case 1093:  /* ashlv2si3_signed */
    case 1092:  /* ashlv8hi3_signed */
    case 1091:  /* ashlv4hi3_signed */
    case 1090:  /* ashlv16qi3_signed */
    case 1089:  /* ashlv8qi3_signed */
    case 574:  /* iwmmxt_wqmulwmr */
    case 573:  /* iwmmxt_wqmulmr */
    case 572:  /* iwmmxt_wqmulwm */
    case 571:  /* iwmmxt_wqmulm */
    case 547:  /* iwmmxt_wsadhz */
    case 546:  /* iwmmxt_wsadbz */
    case 463:  /* gtv2si3 */
    case 462:  /* gtv4hi3 */
    case 461:  /* gtv8qi3 */
    case 460:  /* gtuv2si3 */
    case 459:  /* gtuv4hi3 */
    case 458:  /* gtuv8qi3 */
    case 457:  /* eqv2si3 */
    case 456:  /* eqv4hi3 */
    case 455:  /* eqv8qi3 */
    case 454:  /* iwmmxt_wshufh */
    case 437:  /* iwmmxt_wmacuz */
    case 435:  /* iwmmxt_wmacsz */
    case 332:  /* crc32cw */
    case 331:  /* crc32ch */
    case 330:  /* crc32cb */
    case 329:  /* crc32w */
    case 328:  /* crc32h */
    case 327:  /* crc32b */
    case 173:  /* pic_load_addr_unified */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 855:  /* *neon_movxi */
    case 854:  /* *neon_movci */
    case 853:  /* *neon_movoi */
    case 852:  /* *neon_movei */
    case 851:  /* *neon_movti */
    case 850:  /* *neon_movv2di */
    case 849:  /* *neon_movv4sf */
    case 848:  /* *neon_movv4si */
    case 847:  /* *neon_movv8hi */
    case 846:  /* *neon_movv16qi */
    case 845:  /* *neon_movdi */
    case 844:  /* *neon_movv2sf */
    case 843:  /* *neon_movv2si */
    case 842:  /* *neon_movv4hi */
    case 841:  /* *neon_movv8qi */
    case 790:  /* *thumb2_movhi_insn */
    case 788:  /* *thumb2_movsi_insn */
    case 747:  /* *thumb_movdf_insn */
    case 746:  /* *thumb1_movsf_insn */
    case 745:  /* *thumb1_movhf */
    case 744:  /* *thumb1_movqi_insn */
    case 743:  /* *thumb1_movhi_insn */
    case 742:  /* *thumb1_movsi_insn */
    case 741:  /* *thumb1_movdi_insn */
    case 623:  /* *thumb2_movdf_vfp */
    case 622:  /* *movdf_vfp */
    case 621:  /* *thumb2_movsf_vfp */
    case 620:  /* *movsf_vfp */
    case 619:  /* *movhf_vfp */
    case 618:  /* *movhf_vfp_neon */
    case 617:  /* *movdi_vfp_cortexa8 */
    case 616:  /* *movdi_vfp */
    case 615:  /* *thumb2_movsi_vfp */
    case 614:  /* *arm_movsi_vfp */
    case 403:  /* movv8qi_internal */
    case 402:  /* movv4hi_internal */
    case 401:  /* movv2si_internal */
    case 399:  /* *iwmmxt_movsi_insn */
    case 398:  /* *iwmmxt_arm_movdi */
    case 185:  /* *movdf_soft_insn */
    case 184:  /* *arm_movsf_soft_insn */
    case 183:  /* *arm32_movhf */
    case 182:  /* *arm_movqi_insn */
    case 181:  /* *movhi_bytes */
    case 180:  /* *movhi_insn_arch4 */
    case 172:  /* *arm_movsi_insn */
    case 170:  /* *arm_movdi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 765:  /* *thumb_jump */
    case 203:  /* *arm_jump */
    case 162:  /* *compareqi_eq0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 149:  /* *notsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 148:  /* *notsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 786:  /* *thumb2_neg_abssi2 */
    case 145:  /* *arm_neg_abssi2 */
    case 143:  /* *negdi_zero_extendsidi */
    case 142:  /* *negdi_extendsidi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 665:  /* fixuns_truncdfsi2 */
    case 664:  /* fixuns_truncsfsi2 */
    case 663:  /* *truncsidf2_vfp */
    case 662:  /* *truncsisf2_vfp */
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
    case 317:  /* *arm_revsh */
    case 141:  /* *zextendsidi_negsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 941:  /* fmav4sf4_intrinsic */
    case 940:  /* fmav2sf4_intrinsic */
    case 939:  /* fmav4sf4 */
    case 938:  /* fmav2sf4 */
    case 651:  /* fmadf4 */
    case 650:  /* fmasf4 */
    case 136:  /* extzv_t2 */
    case 135:  /* *extv_reg */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2305:  /* arm_load_acquire_exclusivehi */
    case 2304:  /* arm_load_acquire_exclusiveqi */
    case 2303:  /* arm_load_exclusivehi */
    case 2302:  /* arm_load_exclusiveqi */
    case 969:  /* neon_vcvtauv4sfv4si */
    case 968:  /* neon_vcvtmuv4sfv4si */
    case 967:  /* neon_vcvtpuv4sfv4si */
    case 966:  /* neon_vcvtav4sfv4si */
    case 965:  /* neon_vcvtmv4sfv4si */
    case 964:  /* neon_vcvtpv4sfv4si */
    case 963:  /* neon_vcvtauv2sfv2si */
    case 962:  /* neon_vcvtmuv2sfv2si */
    case 961:  /* neon_vcvtpuv2sfv2si */
    case 960:  /* neon_vcvtav2sfv2si */
    case 959:  /* neon_vcvtmv2sfv2si */
    case 958:  /* neon_vcvtpv2sfv2si */
    case 710:  /* lroundudfsi2 */
    case 709:  /* lfloorudfsi2 */
    case 708:  /* lceiludfsi2 */
    case 707:  /* lrounddfsi2 */
    case 706:  /* lfloordfsi2 */
    case 705:  /* lceildfsi2 */
    case 704:  /* lroundusfsi2 */
    case 703:  /* lfloorusfsi2 */
    case 702:  /* lceilusfsi2 */
    case 701:  /* lroundsfsi2 */
    case 700:  /* lfloorsfsi2 */
    case 699:  /* lceilsfsi2 */
    case 130:  /* unaligned_loadhiu */
    case 129:  /* unaligned_loadhis */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 2309:  /* arm_load_acquire_exclusivedi */
    case 2308:  /* arm_load_exclusivedi */
    case 2307:  /* arm_load_acquire_exclusivesi */
    case 2306:  /* arm_load_exclusivesi */
    case 2221:  /* atomic_loaddi_1 */
    case 2200:  /* crypto_aesimc */
    case 2199:  /* crypto_aesmc */
    case 2125:  /* neon_vst4qbv4sf */
    case 2124:  /* neon_vst4qbv4si */
    case 2123:  /* neon_vst4qbv8hi */
    case 2122:  /* neon_vst4qbv16qi */
    case 2121:  /* neon_vst4qav4sf */
    case 2120:  /* neon_vst4qav4si */
    case 2119:  /* neon_vst4qav8hi */
    case 2118:  /* neon_vst4qav16qi */
    case 2117:  /* neon_vst4di */
    case 2116:  /* neon_vst4v2sf */
    case 2115:  /* neon_vst4v2si */
    case 2114:  /* neon_vst4v4hi */
    case 2113:  /* neon_vst4v8qi */
    case 2112:  /* neon_vld4_dupdi */
    case 2111:  /* neon_vld4_dupv2sf */
    case 2110:  /* neon_vld4_dupv2si */
    case 2109:  /* neon_vld4_dupv4hi */
    case 2108:  /* neon_vld4_dupv8qi */
    case 2096:  /* neon_vld4qav4sf */
    case 2095:  /* neon_vld4qav4si */
    case 2094:  /* neon_vld4qav8hi */
    case 2093:  /* neon_vld4qav16qi */
    case 2092:  /* neon_vld4di */
    case 2091:  /* neon_vld4v2sf */
    case 2090:  /* neon_vld4v2si */
    case 2089:  /* neon_vld4v4hi */
    case 2088:  /* neon_vld4v8qi */
    case 2080:  /* neon_vst3qbv4sf */
    case 2079:  /* neon_vst3qbv4si */
    case 2078:  /* neon_vst3qbv8hi */
    case 2077:  /* neon_vst3qbv16qi */
    case 2076:  /* neon_vst3qav4sf */
    case 2075:  /* neon_vst3qav4si */
    case 2074:  /* neon_vst3qav8hi */
    case 2073:  /* neon_vst3qav16qi */
    case 2072:  /* neon_vst3di */
    case 2071:  /* neon_vst3v2sf */
    case 2070:  /* neon_vst3v2si */
    case 2069:  /* neon_vst3v4hi */
    case 2068:  /* neon_vst3v8qi */
    case 2067:  /* neon_vld3_dupdi */
    case 2066:  /* neon_vld3_dupv2sf */
    case 2065:  /* neon_vld3_dupv2si */
    case 2064:  /* neon_vld3_dupv4hi */
    case 2063:  /* neon_vld3_dupv8qi */
    case 2051:  /* neon_vld3qav4sf */
    case 2050:  /* neon_vld3qav4si */
    case 2049:  /* neon_vld3qav8hi */
    case 2048:  /* neon_vld3qav16qi */
    case 2047:  /* neon_vld3di */
    case 2046:  /* neon_vld3v2sf */
    case 2045:  /* neon_vld3v2si */
    case 2044:  /* neon_vld3v4hi */
    case 2043:  /* neon_vld3v8qi */
    case 2035:  /* neon_vst2v4sf */
    case 2034:  /* neon_vst2v4si */
    case 2033:  /* neon_vst2v8hi */
    case 2032:  /* neon_vst2v16qi */
    case 2031:  /* neon_vst2di */
    case 2030:  /* neon_vst2v2sf */
    case 2029:  /* neon_vst2v2si */
    case 2028:  /* neon_vst2v4hi */
    case 2027:  /* neon_vst2v8qi */
    case 2026:  /* neon_vld2_dupdi */
    case 2025:  /* neon_vld2_dupv2sf */
    case 2024:  /* neon_vld2_dupv2si */
    case 2023:  /* neon_vld2_dupv4hi */
    case 2022:  /* neon_vld2_dupv8qi */
    case 2014:  /* neon_vld2v4sf */
    case 2013:  /* neon_vld2v4si */
    case 2012:  /* neon_vld2v8hi */
    case 2011:  /* neon_vld2v16qi */
    case 2010:  /* neon_vld2di */
    case 2009:  /* neon_vld2v2sf */
    case 2008:  /* neon_vld2v2si */
    case 2007:  /* neon_vld2v4hi */
    case 2006:  /* neon_vld2v8qi */
    case 1995:  /* neon_vst1v2di */
    case 1994:  /* neon_vst1di */
    case 1993:  /* neon_vst1v4sf */
    case 1992:  /* neon_vst1v2sf */
    case 1991:  /* neon_vst1v4si */
    case 1990:  /* neon_vst1v2si */
    case 1989:  /* neon_vst1v8hi */
    case 1988:  /* neon_vst1v4hi */
    case 1987:  /* neon_vst1v16qi */
    case 1986:  /* neon_vst1v8qi */
    case 1966:  /* neon_vld1v2di */
    case 1965:  /* neon_vld1di */
    case 1964:  /* neon_vld1v4sf */
    case 1963:  /* neon_vld1v2sf */
    case 1962:  /* neon_vld1v4si */
    case 1961:  /* neon_vld1v2si */
    case 1960:  /* neon_vld1v8hi */
    case 1959:  /* neon_vld1v4hi */
    case 1958:  /* neon_vld1v16qi */
    case 1957:  /* neon_vld1v8qi */
    case 1705:  /* neon_vrev16v16qi */
    case 1704:  /* neon_vrev16v8qi */
    case 1703:  /* neon_vrev32v8hi */
    case 1702:  /* neon_vrev32v16qi */
    case 1701:  /* neon_vrev32v4hi */
    case 1700:  /* neon_vrev32v8qi */
    case 1699:  /* neon_vrev64v2di */
    case 1698:  /* neon_vrev64v4sf */
    case 1697:  /* neon_vrev64v2sf */
    case 1696:  /* neon_vrev64v4si */
    case 1695:  /* neon_vrev64v2si */
    case 1694:  /* neon_vrev64v8hi */
    case 1693:  /* neon_vrev64v4hi */
    case 1692:  /* neon_vrev64v16qi */
    case 1691:  /* neon_vrev64v8qi */
    case 1636:  /* neon_vmovluv2si */
    case 1635:  /* neon_vmovlsv2si */
    case 1634:  /* neon_vmovluv4hi */
    case 1633:  /* neon_vmovlsv4hi */
    case 1632:  /* neon_vmovluv8qi */
    case 1631:  /* neon_vmovlsv8qi */
    case 1630:  /* neon_vqmovunv2di */
    case 1629:  /* neon_vqmovunv4si */
    case 1628:  /* neon_vqmovunv8hi */
    case 1627:  /* neon_vqmovnuv2di */
    case 1626:  /* neon_vqmovnsv2di */
    case 1625:  /* neon_vqmovnuv4si */
    case 1624:  /* neon_vqmovnsv4si */
    case 1623:  /* neon_vqmovnuv8hi */
    case 1622:  /* neon_vqmovnsv8hi */
    case 1621:  /* neon_vmovnv2di */
    case 1620:  /* neon_vmovnv4si */
    case 1619:  /* neon_vmovnv8hi */
    case 1610:  /* neon_vcvtv4hfv4sf */
    case 1609:  /* neon_vcvtv4sfv4hf */
    case 1608:  /* neon_vcvtuv4si */
    case 1607:  /* neon_vcvtsv4si */
    case 1606:  /* neon_vcvtuv2si */
    case 1605:  /* neon_vcvtsv2si */
    case 1604:  /* neon_vcvtuv4sf */
    case 1603:  /* neon_vcvtsv4sf */
    case 1602:  /* neon_vcvtuv2sf */
    case 1601:  /* neon_vcvtsv2sf */
    case 1544:  /* neon_vrsqrtev4sf */
    case 1543:  /* neon_vrsqrtev4si */
    case 1542:  /* neon_vrsqrtev2sf */
    case 1541:  /* neon_vrsqrtev2si */
    case 1540:  /* neon_vrecpev4sf */
    case 1539:  /* neon_vrecpev4si */
    case 1538:  /* neon_vrecpev2sf */
    case 1537:  /* neon_vrecpev2si */
    case 1528:  /* neon_vclsv4si */
    case 1527:  /* neon_vclsv2si */
    case 1526:  /* neon_vclsv8hi */
    case 1525:  /* neon_vclsv4hi */
    case 1524:  /* neon_vclsv16qi */
    case 1523:  /* neon_vclsv8qi */
    case 1522:  /* neon_vqnegv4si */
    case 1521:  /* neon_vqnegv2si */
    case 1520:  /* neon_vqnegv8hi */
    case 1519:  /* neon_vqnegv4hi */
    case 1518:  /* neon_vqnegv16qi */
    case 1517:  /* neon_vqnegv8qi */
    case 1511:  /* neon_vqabsv4si */
    case 1510:  /* neon_vqabsv2si */
    case 1509:  /* neon_vqabsv8hi */
    case 1508:  /* neon_vqabsv4hi */
    case 1507:  /* neon_vqabsv16qi */
    case 1506:  /* neon_vqabsv8qi */
    case 1473:  /* neon_vpaddluv4si */
    case 1472:  /* neon_vpaddlsv4si */
    case 1471:  /* neon_vpaddluv2si */
    case 1470:  /* neon_vpaddlsv2si */
    case 1469:  /* neon_vpaddluv8hi */
    case 1468:  /* neon_vpaddlsv8hi */
    case 1467:  /* neon_vpaddluv4hi */
    case 1466:  /* neon_vpaddlsv4hi */
    case 1465:  /* neon_vpaddluv16qi */
    case 1464:  /* neon_vpaddlsv16qi */
    case 1463:  /* neon_vpaddluv8qi */
    case 1462:  /* neon_vpaddlsv8qi */
    case 1136:  /* arm_reduc_plus_internal_v2di */
    case 1103:  /* neon_load_count */
    case 957:  /* neon_vrintnv4sf */
    case 956:  /* neon_vrintav4sf */
    case 955:  /* neon_vrintxv4sf */
    case 954:  /* neon_vrintmv4sf */
    case 953:  /* neon_vrintzv4sf */
    case 952:  /* neon_vrintpv4sf */
    case 951:  /* neon_vrintnv2sf */
    case 950:  /* neon_vrintav2sf */
    case 949:  /* neon_vrintxv2sf */
    case 948:  /* neon_vrintmv2sf */
    case 947:  /* neon_vrintzv2sf */
    case 946:  /* neon_vrintpv2sf */
    case 875:  /* *movmisalignv2di_neon_load */
    case 874:  /* *movmisalignv4sf_neon_load */
    case 873:  /* *movmisalignv4si_neon_load */
    case 872:  /* *movmisalignv8hi_neon_load */
    case 871:  /* *movmisalignv16qi_neon_load */
    case 870:  /* *movmisalignv2di_neon_store */
    case 869:  /* *movmisalignv4sf_neon_store */
    case 868:  /* *movmisalignv4si_neon_store */
    case 867:  /* *movmisalignv8hi_neon_store */
    case 866:  /* *movmisalignv16qi_neon_store */
    case 865:  /* *movmisaligndi_neon_load */
    case 864:  /* *movmisalignv2sf_neon_load */
    case 863:  /* *movmisalignv2si_neon_load */
    case 862:  /* *movmisalignv4hi_neon_load */
    case 861:  /* *movmisalignv8qi_neon_load */
    case 860:  /* *movmisaligndi_neon_store */
    case 859:  /* *movmisalignv2sf_neon_store */
    case 858:  /* *movmisalignv2si_neon_store */
    case 857:  /* *movmisalignv4hi_neon_store */
    case 856:  /* *movmisalignv8qi_neon_store */
    case 698:  /* rounddf2 */
    case 697:  /* rintdf2 */
    case 696:  /* nearbyintdf2 */
    case 695:  /* floordf2 */
    case 694:  /* ceildf2 */
    case 693:  /* btruncdf2 */
    case 692:  /* roundsf2 */
    case 691:  /* rintsf2 */
    case 690:  /* nearbyintsf2 */
    case 689:  /* floorsf2 */
    case 688:  /* ceilsf2 */
    case 687:  /* btruncsf2 */
    case 550:  /* iwmmxt_wabsv8qi3 */
    case 549:  /* iwmmxt_wabsv4hi3 */
    case 548:  /* iwmmxt_wabsv2si3 */
    case 537:  /* iwmmxt_waccw */
    case 536:  /* iwmmxt_wacch */
    case 535:  /* iwmmxt_waccb */
    case 534:  /* iwmmxt_tmovmskw */
    case 533:  /* iwmmxt_tmovmskh */
    case 532:  /* iwmmxt_tmovmskb */
    case 308:  /* rbitsi2 */
    case 175:  /* pic_load_addr_thumb1 */
    case 174:  /* pic_load_addr_32bit */
    case 134:  /* unaligned_storedi */
    case 133:  /* unaligned_loaddi */
    case 132:  /* unaligned_storehi */
    case 131:  /* unaligned_storesi */
    case 128:  /* unaligned_loadsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 127:  /* *not_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 126:  /* *not_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 125:  /* *not_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 124:  /* *shiftsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 123:  /* *shiftsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 122:  /* *arm_shiftsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 834:  /* *thumb2_negsi2_short */
    case 833:  /* *thumb2_one_cmplsi2_short */
    case 785:  /* *thumb2_abssi2 */
    case 784:  /* *thumb2_negdi2 */
    case 731:  /* *thumb1_negdi2 */
    case 144:  /* *arm_abssi2 */
    case 139:  /* *arm_negdi2 */
    case 121:  /* arm_lshrdi3_1bit */
    case 120:  /* arm_ashrdi3_1bit */
    case 119:  /* arm_ashldi3_1bit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 118:  /* *satsi_smin_shift */
    case 117:  /* *satsi_smax_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 116:  /* *satsi_smin */
    case 115:  /* *satsi_smax */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 809:  /* *thumb2_cond_sub */
    case 247:  /* *cond_sub */
    case 114:  /* *minmax_arithsi_non_canon */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 113:  /* *minmax_arithsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 820:  /* *thumb2_shiftsi3_short */
    case 819:  /* *thumb2_alusi3_short */
    case 112:  /* *store_minmaxsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 2375:  /* arm_usatsihi */
    case 2180:  /* neon_vec_pack_trunc_v2di */
    case 2179:  /* neon_vec_pack_trunc_v4si */
    case 2178:  /* neon_vec_pack_trunc_v8hi */
    case 2168:  /* neon_unpacku_v2si */
    case 2167:  /* neon_unpacks_v2si */
    case 2166:  /* neon_unpacku_v4hi */
    case 2165:  /* neon_unpacks_v4hi */
    case 2164:  /* neon_unpacku_v8qi */
    case 2163:  /* neon_unpacks_v8qi */
    case 1985:  /* neon_vld1_dupv2di */
    case 1984:  /* neon_vld1_dupv4sf */
    case 1983:  /* neon_vld1_dupv4si */
    case 1982:  /* neon_vld1_dupv8hi */
    case 1981:  /* neon_vld1_dupv16qi */
    case 1980:  /* neon_vld1_dupv2sf */
    case 1979:  /* neon_vld1_dupv2si */
    case 1978:  /* neon_vld1_dupv4hi */
    case 1977:  /* neon_vld1_dupv8qi */
    case 1600:  /* fixuns_truncv4sfv4si2 */
    case 1599:  /* fixuns_truncv2sfv2si2 */
    case 1598:  /* fix_truncv4sfv4si2 */
    case 1597:  /* fix_truncv2sfv2si2 */
    case 1596:  /* floatunsv4siv4sf2 */
    case 1595:  /* floatunsv2siv2sf2 */
    case 1594:  /* floatv4siv4sf2 */
    case 1593:  /* floatv2siv2sf2 */
    case 1569:  /* neon_vdup_nv2di */
    case 1568:  /* neon_vdup_nv4sf */
    case 1567:  /* neon_vdup_nv4si */
    case 1566:  /* neon_vdup_nv2sf */
    case 1565:  /* neon_vdup_nv2si */
    case 1564:  /* neon_vdup_nv8hi */
    case 1563:  /* neon_vdup_nv16qi */
    case 1562:  /* neon_vdup_nv4hi */
    case 1561:  /* neon_vdup_nv8qi */
    case 1536:  /* popcountv16qi2 */
    case 1535:  /* popcountv8qi2 */
    case 1534:  /* clzv4si2 */
    case 1533:  /* clzv2si2 */
    case 1532:  /* clzv8hi2 */
    case 1531:  /* clzv4hi2 */
    case 1530:  /* clzv16qi2 */
    case 1529:  /* clzv8qi2 */
    case 1516:  /* neon_bswapv2di */
    case 1515:  /* neon_bswapv4si */
    case 1514:  /* neon_bswapv2si */
    case 1513:  /* neon_bswapv8hi */
    case 1512:  /* neon_bswapv4hi */
    case 1041:  /* negv4sf2 */
    case 1040:  /* negv2sf2 */
    case 1039:  /* negv4si2 */
    case 1038:  /* negv2si2 */
    case 1037:  /* negv8hi2 */
    case 1036:  /* negv4hi2 */
    case 1035:  /* negv16qi2 */
    case 1034:  /* negv8qi2 */
    case 1033:  /* absv4sf2 */
    case 1032:  /* absv2sf2 */
    case 1031:  /* absv4si2 */
    case 1030:  /* absv2si2 */
    case 1029:  /* absv8hi2 */
    case 1028:  /* absv4hi2 */
    case 1027:  /* absv16qi2 */
    case 1026:  /* absv8qi2 */
    case 1025:  /* one_cmplv2di2 */
    case 1024:  /* one_cmplv4sf2 */
    case 1023:  /* one_cmplv2sf2 */
    case 1022:  /* one_cmplv4si2 */
    case 1021:  /* one_cmplv2si2 */
    case 1020:  /* one_cmplv8hi2 */
    case 1019:  /* one_cmplv4hi2 */
    case 1018:  /* one_cmplv16qi2 */
    case 1017:  /* one_cmplv8qi2 */
    case 814:  /* thumb2_zero_extendqisi2_v6 */
    case 813:  /* *thumb2_zero_extendhisi2_v6 */
    case 812:  /* *thumb2_extendqisi_v6 */
    case 740:  /* thumb1_extendqisi2 */
    case 738:  /* *thumb1_zero_extendqisi2_v6 */
    case 737:  /* *thumb1_zero_extendqisi2 */
    case 736:  /* *thumb1_zero_extendhisi2 */
    case 735:  /* *thumb1_one_cmplsi2 */
    case 732:  /* *thumb1_negsi2 */
    case 671:  /* *sqrtdf2_vfp */
    case 670:  /* *sqrtsf2_vfp */
    case 669:  /* floatunssidf2 */
    case 668:  /* floatunssisf2 */
    case 667:  /* *floatsidf2_vfp */
    case 666:  /* *floatsisf2_vfp */
    case 661:  /* truncsfhf2 */
    case 660:  /* extendhfsf2 */
    case 659:  /* *truncdfsf2_vfp */
    case 658:  /* *extendsfdf2_vfp */
    case 631:  /* *negdf2_vfp */
    case 630:  /* *negsf2_vfp */
    case 629:  /* *absdf2_vfp */
    case 628:  /* *abssf2_vfp */
    case 393:  /* tbcstv2si */
    case 392:  /* tbcstv4hi */
    case 391:  /* tbcstv8qi */
    case 318:  /* *arm_rev16 */
    case 316:  /* *arm_rev */
    case 307:  /* clzsi2 */
    case 168:  /* *arm_extendqisi_v6 */
    case 167:  /* *arm_extendqisi */
    case 166:  /* *arm_extendqihi_insn */
    case 164:  /* *arm_extendhisi2_v6 */
    case 163:  /* *arm_extendhisi2 */
    case 160:  /* *arm_zero_extendqisi2_v6 */
    case 159:  /* *arm_zero_extendqisi2 */
    case 157:  /* *arm_zero_extendhisi2_v6 */
    case 156:  /* *arm_zero_extendhisi2 */
    case 155:  /* extendsidi2 */
    case 154:  /* extendhidi2 */
    case 153:  /* extendqidi2 */
    case 152:  /* zero_extendsidi2 */
    case 151:  /* zero_extendhidi2 */
    case 150:  /* zero_extendqidi2 */
    case 147:  /* *arm_one_cmplsi2 */
    case 146:  /* one_cmpldi2 */
    case 140:  /* *arm_negsi2 */
    case 108:  /* *smin_0 */
    case 106:  /* *smax_m1 */
    case 105:  /* *smax_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 104:  /* *andsi_iorsi3_notsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 830:  /* *thumb2_mulsi_short_compare0_scratch */
    case 97:  /* *iorsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 91:  /* *andsi_notsi_si_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 90:  /* *andsi_notsi_si_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 840:  /* *orsi_not_shiftsi_si */
    case 779:  /* *thumb_andsi_not_shiftsi_si */
    case 89:  /* andsi_not_shiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 837:  /* *iordi_notdi_zesidi */
    case 86:  /* *anddi_notdi_zesidi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 838:  /* *iordi_notsesidi_di */
    case 836:  /* *iordi_notzesidi_di */
    case 87:  /* *anddi_notsesidi_di */
    case 85:  /* *anddi_notzesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1117:  /* widen_usumv2si3 */
    case 1116:  /* widen_usumv4hi3 */
    case 1115:  /* widen_usumv8qi3 */
    case 1114:  /* widen_ssumv2si3 */
    case 1113:  /* widen_ssumv4hi3 */
    case 1112:  /* widen_ssumv8qi3 */
    case 835:  /* *iordi_notdi_di */
    case 724:  /* thumb1_bicsi3 */
    case 684:  /* *combine_vcvt_f64_s32 */
    case 683:  /* *combine_vcvt_f64_u32 */
    case 682:  /* *combine_vcvt_f32_s32 */
    case 681:  /* *combine_vcvt_f32_u32 */
    case 641:  /* *muldf3negdf_vfp */
    case 640:  /* *mulsf3negsf_vfp */
    case 169:  /* *arm_extendqisi2addsi */
    case 165:  /* *arm_extendhisi2addsi */
    case 161:  /* *arm_zero_extendqisi2addsi */
    case 158:  /* *arm_zero_extendhisi2addsi */
    case 84:  /* *anddi_notdi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 83:  /* insv_t2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 82:  /* insv_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      break;

    case 81:  /* *ite_ne_zeroextractsi_shifted */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 80:  /* *ite_ne_zeroextractsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 78:  /* *ne_zeroextractsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      break;

    case 77:  /* *zeroextractsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 76:  /* *andsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1007:  /* bicdi3_neon */
    case 1006:  /* bicv2di3_neon */
    case 1005:  /* bicv4sf3_neon */
    case 1004:  /* bicv2sf3_neon */
    case 1003:  /* bicv4si3_neon */
    case 1002:  /* bicv2si3_neon */
    case 1001:  /* bicv8hi3_neon */
    case 1000:  /* bicv4hi3_neon */
    case 999:  /* bicv16qi3_neon */
    case 998:  /* bicv8qi3_neon */
    case 997:  /* orndi3_neon */
    case 996:  /* ornv2di3_neon */
    case 995:  /* ornv4sf3_neon */
    case 994:  /* ornv2sf3_neon */
    case 993:  /* ornv4si3_neon */
    case 992:  /* ornv2si3_neon */
    case 991:  /* ornv8hi3_neon */
    case 990:  /* ornv4hi3_neon */
    case 989:  /* ornv16qi3_neon */
    case 988:  /* ornv8qi3_neon */
    case 839:  /* *orsi_notsi_si */
    case 100:  /* *xordi_sesidi_di */
    case 99:  /* *xordi_zesidi_di */
    case 94:  /* *iordi_sesidi_di */
    case 93:  /* *iordi_zesidi_di */
    case 88:  /* andsi_notsi_si */
    case 73:  /* *anddi_sesdi_di */
    case 72:  /* *anddi_zesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 70:  /* *maddhidi4tt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 69:  /* *maddhidi4tb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 68:  /* maddhidi4 */
    case 67:  /* *maddhisi4tt */
    case 66:  /* *maddhisi4tb */
    case 65:  /* maddhisi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 60:  /* *umulsi3_highpart_v6 */
    case 59:  /* *umulsi3_highpart_nov6 */
    case 58:  /* *smulsi3_highpart_v6 */
    case 57:  /* *smulsi3_highpart_nov6 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 2177:  /* vec_pack_trunc_v2di */
    case 2176:  /* vec_pack_trunc_v4si */
    case 2175:  /* vec_pack_trunc_v8hi */
    case 2174:  /* neon_vec_umult_v2si */
    case 2173:  /* neon_vec_smult_v2si */
    case 2172:  /* neon_vec_umult_v4hi */
    case 2171:  /* neon_vec_smult_v4hi */
    case 2170:  /* neon_vec_umult_v8qi */
    case 2169:  /* neon_vec_smult_v8qi */
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
    case 64:  /* *mulhisi3tt */
    case 63:  /* *mulhisi3bt */
    case 62:  /* *mulhisi3tb */
    case 61:  /* mulhisi3 */
    case 54:  /* *umulsidi3_v6 */
    case 53:  /* *umulsidi3_nov6 */
    case 52:  /* *mulsidi3_v6 */
    case 51:  /* *mulsidi3_nov6 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 56:  /* *umulsidi3adddi_v6 */
    case 55:  /* *umulsidi3adddi */
    case 50:  /* *mulsidi3adddi_v6 */
    case 49:  /* *mulsidi3adddi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 48:  /* *mulsi3subsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 47:  /* *mulsi3addsi_compare0_scratch_v6 */
    case 46:  /* *mulsi3addsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 45:  /* *mulsi3addsi_compare0_v6 */
    case 44:  /* *mulsi3addsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 43:  /* *mulsi3addsi_v6 */
    case 42:  /* *mulsi3addsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 41:  /* *mulsi_compare0_scratch_v6 */
    case 40:  /* *mulsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 39:  /* *mulsi3_compare0_v6 */
    case 38:  /* *mulsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 36:  /* *arm_mulsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 35:  /* subsi3_compare */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 32:  /* *subdi_zesidi_zesidi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 29:  /* *subdi_di_sesidi */
    case 28:  /* *subdi_di_zesidi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 25:  /* *subsi3_carryin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      break;

    case 24:  /* *subsi3_carryin_compare_const */
    case 23:  /* *subsi3_carryin_compare */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 79:  /* *ne_zeroextractsi_shifted */
    case 20:  /* *addsi3_carryin_clobercc_geu */
    case 19:  /* *addsi3_carryin_clobercc_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 26:  /* *rsbsi3_carryin_shift */
    case 18:  /* *addsi3_carryin_shift_geu */
    case 17:  /* *addsi3_carryin_shift_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 16:  /* *addsi3_carryin_alt2_geu */
    case 15:  /* *addsi3_carryin_alt2_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2189:  /* neon_vabdv2di_2 */
    case 2188:  /* neon_vabdv4sf_2 */
    case 2187:  /* neon_vabdv2sf_2 */
    case 2186:  /* neon_vabdv4si_2 */
    case 2185:  /* neon_vabdv2si_2 */
    case 2184:  /* neon_vabdv8hi_2 */
    case 2183:  /* neon_vabdv4hi_2 */
    case 2182:  /* neon_vabdv16qi_2 */
    case 2181:  /* neon_vabdv8qi_2 */
    case 2162:  /* neon_vec_ushiftl_v2si */
    case 2161:  /* neon_vec_sshiftl_v2si */
    case 2160:  /* neon_vec_ushiftl_v4hi */
    case 2159:  /* neon_vec_sshiftl_v4hi */
    case 2158:  /* neon_vec_ushiftl_v8qi */
    case 2157:  /* neon_vec_sshiftl_v8qi */
    case 2144:  /* neon_vec_unpacku_hi_v4si */
    case 2143:  /* neon_vec_unpacks_hi_v4si */
    case 2142:  /* neon_vec_unpacku_hi_v8hi */
    case 2141:  /* neon_vec_unpacks_hi_v8hi */
    case 2140:  /* neon_vec_unpacku_hi_v16qi */
    case 2139:  /* neon_vec_unpacks_hi_v16qi */
    case 2138:  /* neon_vec_unpacku_lo_v4si */
    case 2137:  /* neon_vec_unpacks_lo_v4si */
    case 2136:  /* neon_vec_unpacku_lo_v8hi */
    case 2135:  /* neon_vec_unpacks_lo_v8hi */
    case 2134:  /* neon_vec_unpacku_lo_v16qi */
    case 2133:  /* neon_vec_unpacks_lo_v16qi */
    case 762:  /* cstoresi_nltu_thumb1 */
    case 22:  /* *subsi3_carryin_const */
    case 21:  /* *subsi3_carryin */
    case 14:  /* *addsi3_carryin_geu */
    case 13:  /* *addsi3_carryin_ltu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 12:  /* *compare_addsi2_op1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 11:  /* *compare_addsi2_op0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 10:  /* *addsi3_compare_op2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 9:  /* *addsi3_compare_op1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 8:  /* cmpsi2_addneg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 7:  /* *compare_negsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 827:  /* *thumb2_addsi3_compare0_scratch */
    case 103:  /* *xorsi3_compare0_scratch */
    case 6:  /* *addsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 829:  /* *thumb2_mulsi_short_compare0 */
    case 826:  /* thumb2_addsi3_compare0 */
    case 102:  /* *xorsi3_compare0 */
    case 96:  /* *iorsi3_compare0 */
    case 75:  /* *andsi3_compare0 */
    case 34:  /* *subsi3_compare0 */
    case 5:  /* addsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 2371:  /* sssubsa3 */
    case 2370:  /* sssubsq3 */
    case 2369:  /* sssubha3 */
    case 2368:  /* sssubv2ha3 */
    case 2367:  /* sssubhq3 */
    case 2366:  /* sssubqq3 */
    case 2365:  /* sssubv2hq3 */
    case 2364:  /* sssubv4qq3 */
    case 2363:  /* ussubuha3 */
    case 2362:  /* ussubv2uha3 */
    case 2361:  /* ussubuhq3 */
    case 2360:  /* ussubuqq3 */
    case 2359:  /* ussubv2uhq3 */
    case 2358:  /* ussubv4uqq3 */
    case 2357:  /* subv2ha3 */
    case 2356:  /* subv2hq3 */
    case 2355:  /* subv4qq3 */
    case 2354:  /* subusa3 */
    case 2353:  /* subuha3 */
    case 2352:  /* subsa3 */
    case 2351:  /* subha3 */
    case 2350:  /* subusq3 */
    case 2349:  /* subuhq3 */
    case 2348:  /* subuqq3 */
    case 2347:  /* subsq3 */
    case 2346:  /* subhq3 */
    case 2345:  /* subqq3 */
    case 2344:  /* ssaddsa3 */
    case 2343:  /* ssaddsq3 */
    case 2342:  /* ssaddha3 */
    case 2341:  /* ssaddv2ha3 */
    case 2340:  /* ssaddhq3 */
    case 2339:  /* ssaddqq3 */
    case 2338:  /* ssaddv2hq3 */
    case 2337:  /* ssaddv4qq3 */
    case 2336:  /* usadduha3 */
    case 2335:  /* usaddv2uha3 */
    case 2334:  /* usadduhq3 */
    case 2333:  /* usadduqq3 */
    case 2332:  /* usaddv2uhq3 */
    case 2331:  /* usaddv4uqq3 */
    case 2330:  /* addv2ha3 */
    case 2329:  /* addv2hq3 */
    case 2328:  /* addv4qq3 */
    case 2327:  /* addusa3 */
    case 2326:  /* adduha3 */
    case 2325:  /* addsa3 */
    case 2324:  /* addha3 */
    case 2323:  /* addusq3 */
    case 2322:  /* adduhq3 */
    case 2321:  /* adduqq3 */
    case 2320:  /* addsq3 */
    case 2319:  /* addhq3 */
    case 2318:  /* addqq3 */
    case 1592:  /* neon_vcombinedi */
    case 1591:  /* neon_vcombinev2sf */
    case 1590:  /* neon_vcombinev2si */
    case 1589:  /* neon_vcombinev4hi */
    case 1588:  /* neon_vcombinev8qi */
    case 1170:  /* *us_subv2sf_neon */
    case 1169:  /* *us_subv2si_neon */
    case 1168:  /* *us_subv4hi_neon */
    case 1167:  /* *us_subv8qi_neon */
    case 1166:  /* *ss_subv2sf_neon */
    case 1165:  /* *ss_subv2si_neon */
    case 1164:  /* *ss_subv4hi_neon */
    case 1163:  /* *ss_subv8qi_neon */
    case 1162:  /* *us_addv2sf_neon */
    case 1161:  /* *us_addv2si_neon */
    case 1160:  /* *us_addv4hi_neon */
    case 1159:  /* *us_addv8qi_neon */
    case 1158:  /* *ss_addv2sf_neon */
    case 1157:  /* *ss_addv2si_neon */
    case 1156:  /* *ss_addv4hi_neon */
    case 1155:  /* *ss_addv8qi_neon */
    case 1109:  /* lshrdi3_neon_imm_noclobber */
    case 1108:  /* ashrdi3_neon_imm_noclobber */
    case 1104:  /* ashldi3_neon_noclobber */
    case 1088:  /* vlshrv4si3_imm */
    case 1087:  /* vlshrv2si3_imm */
    case 1086:  /* vlshrv8hi3_imm */
    case 1085:  /* vlshrv4hi3_imm */
    case 1084:  /* vlshrv16qi3_imm */
    case 1083:  /* vlshrv8qi3_imm */
    case 1082:  /* vashrv4si3_imm */
    case 1081:  /* vashrv2si3_imm */
    case 1080:  /* vashrv8hi3_imm */
    case 1079:  /* vashrv4hi3_imm */
    case 1078:  /* vashrv16qi3_imm */
    case 1077:  /* vashrv8qi3_imm */
    case 1076:  /* vashlv4si3 */
    case 1075:  /* vashlv2si3 */
    case 1074:  /* vashlv8hi3 */
    case 1073:  /* vashlv4hi3 */
    case 1072:  /* vashlv16qi3 */
    case 1071:  /* vashlv8qi3 */
    case 1070:  /* *smaxv4sf3_neon */
    case 1069:  /* *smaxv2sf3_neon */
    case 1068:  /* *smaxv4si3_neon */
    case 1067:  /* *smaxv2si3_neon */
    case 1066:  /* *smaxv8hi3_neon */
    case 1065:  /* *smaxv4hi3_neon */
    case 1064:  /* *smaxv16qi3_neon */
    case 1063:  /* *smaxv8qi3_neon */
    case 1062:  /* *sminv4sf3_neon */
    case 1061:  /* *sminv2sf3_neon */
    case 1060:  /* *sminv4si3_neon */
    case 1059:  /* *sminv2si3_neon */
    case 1058:  /* *sminv8hi3_neon */
    case 1057:  /* *sminv4hi3_neon */
    case 1056:  /* *sminv16qi3_neon */
    case 1055:  /* *sminv8qi3_neon */
    case 1054:  /* *umaxv4si3_neon */
    case 1053:  /* *umaxv2si3_neon */
    case 1052:  /* *umaxv8hi3_neon */
    case 1051:  /* *umaxv4hi3_neon */
    case 1050:  /* *umaxv16qi3_neon */
    case 1049:  /* *umaxv8qi3_neon */
    case 1048:  /* *uminv4si3_neon */
    case 1047:  /* *uminv2si3_neon */
    case 1046:  /* *uminv8hi3_neon */
    case 1045:  /* *uminv4hi3_neon */
    case 1044:  /* *uminv16qi3_neon */
    case 1043:  /* *uminv8qi3_neon */
    case 1016:  /* xorv2di3 */
    case 1015:  /* xorv4sf3 */
    case 1014:  /* xorv2sf3 */
    case 1013:  /* xorv4si3 */
    case 1012:  /* xorv2si3 */
    case 1011:  /* xorv8hi3 */
    case 1010:  /* xorv4hi3 */
    case 1009:  /* xorv16qi3 */
    case 1008:  /* xorv8qi3 */
    case 987:  /* andv2di3 */
    case 986:  /* andv4sf3 */
    case 985:  /* andv2sf3 */
    case 984:  /* andv4si3 */
    case 983:  /* andv2si3 */
    case 982:  /* andv8hi3 */
    case 981:  /* andv4hi3 */
    case 980:  /* andv16qi3 */
    case 979:  /* andv8qi3 */
    case 978:  /* iorv2di3 */
    case 977:  /* iorv4sf3 */
    case 976:  /* iorv2sf3 */
    case 975:  /* iorv4si3 */
    case 974:  /* iorv2si3 */
    case 973:  /* iorv8hi3 */
    case 972:  /* iorv4hi3 */
    case 971:  /* iorv16qi3 */
    case 970:  /* iorv8qi3 */
    case 921:  /* *mulv4sf3_neon */
    case 920:  /* *mulv2sf3_neon */
    case 919:  /* *mulv4si3_neon */
    case 918:  /* *mulv2si3_neon */
    case 917:  /* *mulv8hi3_neon */
    case 916:  /* *mulv4hi3_neon */
    case 915:  /* *mulv16qi3_neon */
    case 914:  /* *mulv8qi3_neon */
    case 912:  /* *subv2di3_neon */
    case 911:  /* *subv4sf3_neon */
    case 910:  /* *subv2sf3_neon */
    case 909:  /* *subv4si3_neon */
    case 908:  /* *subv2si3_neon */
    case 907:  /* *subv8hi3_neon */
    case 906:  /* *subv4hi3_neon */
    case 905:  /* *subv16qi3_neon */
    case 904:  /* *subv8qi3_neon */
    case 902:  /* *addv2di3_neon */
    case 901:  /* *addv4sf3_neon */
    case 900:  /* *addv2sf3_neon */
    case 899:  /* *addv4si3_neon */
    case 898:  /* *addv2si3_neon */
    case 897:  /* *addv8hi3_neon */
    case 896:  /* *addv4hi3_neon */
    case 895:  /* *addv16qi3_neon */
    case 894:  /* *addv8qi3_neon */
    case 763:  /* cstoresi_ltu_thumb1 */
    case 730:  /* *thumb1_rotrsi3 */
    case 729:  /* *thumb1_lshrsi3 */
    case 728:  /* *thumb1_ashrsi3 */
    case 727:  /* *thumb1_ashlsi3 */
    case 726:  /* *thumb1_xorsi3_insn */
    case 725:  /* *thumb1_iorsi3_insn */
    case 723:  /* *thumb1_andsi3_insn */
    case 722:  /* *thumb_mulsi3_v6 */
    case 721:  /* *thumb_mulsi3 */
    case 720:  /* thumb1_subsi3_insn */
    case 718:  /* *thumb1_addsi3 */
    case 714:  /* smindf3 */
    case 713:  /* sminsf3 */
    case 712:  /* smaxdf3 */
    case 711:  /* smaxsf3 */
    case 639:  /* *muldf3_vfp */
    case 638:  /* *mulsf3_vfp */
    case 637:  /* *divdf3_vfp */
    case 636:  /* *divsf3_vfp */
    case 635:  /* *subdf3_vfp */
    case 634:  /* *subsf3_vfp */
    case 633:  /* *adddf3_vfp */
    case 632:  /* *addsf3_vfp */
    case 570:  /* iwmmxt_wmulwl */
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
    case 431:  /* *mulv4hi3_iwmmxt */
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
    case 412:  /* *xorv8qi3_iwmmxt */
    case 411:  /* *xorv4hi3_iwmmxt */
    case 410:  /* *xorv2si3_iwmmxt */
    case 409:  /* *iorv8qi3_iwmmxt */
    case 408:  /* *iorv4hi3_iwmmxt */
    case 407:  /* *iorv2si3_iwmmxt */
    case 406:  /* *andv8qi3_iwmmxt */
    case 405:  /* *andv4hi3_iwmmxt */
    case 404:  /* *andv2si3_iwmmxt */
    case 396:  /* iwmmxt_anddi3 */
    case 395:  /* iwmmxt_xordi3 */
    case 394:  /* iwmmxt_iordi3 */
    case 171:  /* *arm_movt */
    case 138:  /* udivsi3 */
    case 137:  /* divsi3 */
    case 101:  /* *arm_xorsi3 */
    case 98:  /* *xordi3_insn */
    case 95:  /* *iorsi3_insn */
    case 92:  /* *iordi3_insn */
    case 74:  /* *arm_andsi3_insn */
    case 71:  /* *anddi3_insn */
    case 37:  /* *arm_mulsi3_v6 */
    case 33:  /* *arm_subsi3_insn */
    case 4:  /* *arm_addsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 31:  /* *subdi_sesidi_di */
    case 30:  /* *subdi_zesidi_di */
    case 3:  /* *adddi_zesidi_di */
    case 2:  /* *adddi_sesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 913:  /* subdi3_neon */
    case 903:  /* adddi3_neon */
    case 828:  /* *thumb2_mulsi_short */
    case 825:  /* *thumb2_subsi_short */
    case 824:  /* *thumb2_addsi_short */
    case 783:  /* *thumb2_uminsi3 */
    case 782:  /* *thumb32_umaxsi3 */
    case 781:  /* *thumb2_sminsi3 */
    case 780:  /* *thumb2_smaxsi3 */
    case 719:  /* *thumb_subdi3 */
    case 717:  /* *thumb1_adddi3 */
    case 111:  /* *arm_uminsi3 */
    case 110:  /* *arm_umaxsi3 */
    case 109:  /* *arm_smin_insn */
    case 107:  /* *arm_smax_insn */
    case 27:  /* *arm_subdi3 */
    case 1:  /* *arm_adddi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    }
}
