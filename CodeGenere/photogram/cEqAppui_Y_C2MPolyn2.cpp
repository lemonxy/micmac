// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_Y_C2MPolyn2.h"


cEqAppui_Y_C2MPolyn2::cEqAppui_Y_C2MPolyn2():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr",0,9));
   AddIntRef (cIncIntervale("Orient",9,15));
   Close(false);
}



void cEqAppui_Y_C2MPolyn2::ComputeVal()
{
   double tmp0_ = mCompCoord[9];
   double tmp1_ = mCompCoord[11];
   double tmp2_ = cos(tmp0_);
   double tmp3_ = cos(tmp1_);
   double tmp4_ = sin(tmp0_);
   double tmp5_ = mCompCoord[10];
   double tmp6_ = sin(tmp5_);
   double tmp7_ = -(tmp6_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = -(tmp4_);
   double tmp10_ = tmp2_*tmp7_;
   double tmp11_ = mCompCoord[12];
   double tmp12_ = mLocXTer-tmp11_;
   double tmp13_ = -(tmp8_);
   double tmp14_ = tmp4_*tmp7_;
   double tmp15_ = mCompCoord[13];
   double tmp16_ = mLocYTer-tmp15_;
   double tmp17_ = cos(tmp5_);
   double tmp18_ = mCompCoord[14];
   double tmp19_ = mLocZTer-tmp18_;
   double tmp20_ = mLocXIm/mLocPolyn2_State_0_0;
   double tmp21_ = mLocYIm/mLocPolyn2_State_0_0;

  mVal[0] = (mCompCoord[2]+mCompCoord[0]*(((tmp9_*tmp3_+tmp10_*tmp8_)*(tmp12_)+(tmp2_*tmp3_+tmp14_*tmp8_)*(tmp16_)+tmp17_*tmp8_*(tmp19_))/((tmp9_*tmp13_+tmp10_*tmp3_)*(tmp12_)+(tmp2_*tmp13_+tmp14_*tmp3_)*(tmp16_)+tmp17_*tmp3_*(tmp19_))))-(((1-mCompCoord[3])*(tmp21_)+mCompCoord[4]*(tmp20_)+mCompCoord[5]*(tmp20_)*(tmp21_))-mCompCoord[6]*2*(tmp21_)*(tmp21_)+mCompCoord[8]*(tmp20_)*(tmp20_))*mLocPolyn2_State_0_0;

}


void cEqAppui_Y_C2MPolyn2::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[9];
   double tmp1_ = mCompCoord[11];
   double tmp2_ = cos(tmp0_);
   double tmp3_ = cos(tmp1_);
   double tmp4_ = sin(tmp0_);
   double tmp5_ = mCompCoord[10];
   double tmp6_ = sin(tmp5_);
   double tmp7_ = -(tmp6_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = -(tmp4_);
   double tmp10_ = tmp2_*tmp7_;
   double tmp11_ = mCompCoord[12];
   double tmp12_ = mLocXTer-tmp11_;
   double tmp13_ = -(tmp8_);
   double tmp14_ = tmp4_*tmp7_;
   double tmp15_ = mCompCoord[13];
   double tmp16_ = mLocYTer-tmp15_;
   double tmp17_ = cos(tmp5_);
   double tmp18_ = mCompCoord[14];
   double tmp19_ = mLocZTer-tmp18_;
   double tmp20_ = mLocXIm/mLocPolyn2_State_0_0;
   double tmp21_ = mLocYIm/mLocPolyn2_State_0_0;
   double tmp22_ = tmp9_*tmp3_;
   double tmp23_ = tmp10_*tmp8_;
   double tmp24_ = tmp22_+tmp23_;
   double tmp25_ = (tmp24_)*(tmp12_);
   double tmp26_ = tmp2_*tmp3_;
   double tmp27_ = tmp14_*tmp8_;
   double tmp28_ = tmp26_+tmp27_;
   double tmp29_ = (tmp28_)*(tmp16_);
   double tmp30_ = tmp25_+tmp29_;
   double tmp31_ = tmp17_*tmp8_;
   double tmp32_ = tmp31_*(tmp19_);
   double tmp33_ = tmp30_+tmp32_;
   double tmp34_ = tmp9_*tmp13_;
   double tmp35_ = tmp10_*tmp3_;
   double tmp36_ = tmp34_+tmp35_;
   double tmp37_ = (tmp36_)*(tmp12_);
   double tmp38_ = tmp2_*tmp13_;
   double tmp39_ = tmp14_*tmp3_;
   double tmp40_ = tmp38_+tmp39_;
   double tmp41_ = (tmp40_)*(tmp16_);
   double tmp42_ = tmp37_+tmp41_;
   double tmp43_ = tmp17_*tmp3_;
   double tmp44_ = tmp43_*(tmp19_);
   double tmp45_ = tmp42_+tmp44_;
   double tmp46_ = (tmp33_)/(tmp45_);
   double tmp47_ = (tmp20_)*(tmp21_);
   double tmp48_ = (tmp21_)*(tmp21_);
   double tmp49_ = (tmp20_)*(tmp20_);
   double tmp50_ = -(1);
   double tmp51_ = tmp50_*tmp4_;
   double tmp52_ = -(tmp2_);
   double tmp53_ = tmp51_*tmp7_;
   double tmp54_ = mCompCoord[0];
   double tmp55_ = -(tmp17_);
   double tmp56_ = tmp55_*tmp2_;
   double tmp57_ = tmp55_*tmp4_;
   double tmp58_ = tmp50_*tmp6_;
   double tmp59_ = ElSquare(tmp45_);
   double tmp60_ = tmp50_*tmp8_;
   double tmp61_ = -(tmp3_);

  mVal[0] = (mCompCoord[2]+tmp54_*(tmp46_))-(((1-mCompCoord[3])*(tmp21_)+mCompCoord[4]*(tmp20_)+mCompCoord[5]*tmp47_)-mCompCoord[6]*2*tmp48_+mCompCoord[8]*tmp49_)*mLocPolyn2_State_0_0;

  mCompDer[0][0] = tmp46_;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = 1;
  mCompDer[0][3] = -(tmp50_*(tmp21_)*mLocPolyn2_State_0_0);
  mCompDer[0][4] = -((tmp20_)*mLocPolyn2_State_0_0);
  mCompDer[0][5] = -(tmp47_*mLocPolyn2_State_0_0);
  mCompDer[0][6] = -(-(2*tmp48_)*mLocPolyn2_State_0_0);
  mCompDer[0][7] = 0;
  mCompDer[0][8] = -(tmp49_*mLocPolyn2_State_0_0);
  mCompDer[0][9] = ((((tmp52_*tmp3_+tmp53_*tmp8_)*(tmp12_)+(tmp51_*tmp3_+tmp23_)*(tmp16_))*(tmp45_)-(tmp33_)*((tmp52_*tmp13_+tmp53_*tmp3_)*(tmp12_)+(tmp51_*tmp13_+tmp35_)*(tmp16_)))/tmp59_)*tmp54_;
  mCompDer[0][10] = (((tmp56_*tmp8_*(tmp12_)+tmp57_*tmp8_*(tmp16_)+tmp58_*tmp8_*(tmp19_))*(tmp45_)-(tmp33_)*(tmp56_*tmp3_*(tmp12_)+tmp57_*tmp3_*(tmp16_)+tmp58_*tmp3_*(tmp19_)))/tmp59_)*tmp54_;
  mCompDer[0][11] = ((((tmp60_*tmp9_+tmp3_*tmp10_)*(tmp12_)+(tmp60_*tmp2_+tmp3_*tmp14_)*(tmp16_)+tmp3_*tmp17_*(tmp19_))*(tmp45_)-(tmp33_)*((tmp61_*tmp9_+tmp60_*tmp10_)*(tmp12_)+(tmp61_*tmp2_+tmp60_*tmp14_)*(tmp16_)+tmp60_*tmp17_*(tmp19_)))/tmp59_)*tmp54_;
  mCompDer[0][12] = ((tmp50_*(tmp24_)*(tmp45_)-(tmp33_)*tmp50_*(tmp36_))/tmp59_)*tmp54_;
  mCompDer[0][13] = ((tmp50_*(tmp28_)*(tmp45_)-(tmp33_)*tmp50_*(tmp40_))/tmp59_)*tmp54_;
  mCompDer[0][14] = ((tmp50_*tmp31_*(tmp45_)-(tmp33_)*tmp50_*tmp43_)/tmp59_)*tmp54_;
}


void cEqAppui_Y_C2MPolyn2::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_Y_C2MPolyn2 Has no Der Sec");
}

void cEqAppui_Y_C2MPolyn2::SetPolyn2_State_0_0(double aVal){ mLocPolyn2_State_0_0 = aVal;}
void cEqAppui_Y_C2MPolyn2::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_Y_C2MPolyn2::SetXTer(double aVal){ mLocXTer = aVal;}
void cEqAppui_Y_C2MPolyn2::SetYIm(double aVal){ mLocYIm = aVal;}
void cEqAppui_Y_C2MPolyn2::SetYTer(double aVal){ mLocYTer = aVal;}
void cEqAppui_Y_C2MPolyn2::SetZTer(double aVal){ mLocZTer = aVal;}



double * cEqAppui_Y_C2MPolyn2::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Polyn2_State_0_0") return & mLocPolyn2_State_0_0;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "XTer") return & mLocXTer;
   if (aName == "YIm") return & mLocYIm;
   if (aName == "YTer") return & mLocYTer;
   if (aName == "ZTer") return & mLocZTer;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_Y_C2MPolyn2::mTheAuto("cEqAppui_Y_C2MPolyn2",cEqAppui_Y_C2MPolyn2::Alloc);


cElCompiledFonc *  cEqAppui_Y_C2MPolyn2::Alloc()
{  return new cEqAppui_Y_C2MPolyn2();
}


