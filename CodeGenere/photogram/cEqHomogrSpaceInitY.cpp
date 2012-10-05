// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqHomogrSpaceInitY.h"


cEqHomogrSpaceInitY::cEqHomogrSpaceInitY():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Hom1",0,8));
   AddIntRef (cIncIntervale("Hom2",8,16));
   Close(false);
}



void cEqHomogrSpaceInitY::ComputeVal()
{
   double tmp0_ = mCompCoord[6];
   double tmp1_ = tmp0_*mLocXL1;
   double tmp2_ = mCompCoord[7];
   double tmp3_ = tmp2_*mLocYL1;
   double tmp4_ = tmp1_+tmp3_;
   double tmp5_ = tmp4_+1;
   double tmp6_ = mCompCoord[0];
   double tmp7_ = tmp6_*mLocXL1;
   double tmp8_ = mCompCoord[1];
   double tmp9_ = tmp8_*mLocYL1;
   double tmp10_ = tmp7_+tmp9_;
   double tmp11_ = mCompCoord[2];
   double tmp12_ = tmp10_+tmp11_;
   double tmp13_ = (tmp12_)/(tmp5_);
   double tmp14_ = mCompCoord[14];
   double tmp15_ = mCompCoord[3];
   double tmp16_ = tmp15_*mLocXL1;
   double tmp17_ = mCompCoord[4];
   double tmp18_ = tmp17_*mLocYL1;
   double tmp19_ = tmp16_+tmp18_;
   double tmp20_ = mCompCoord[5];
   double tmp21_ = tmp19_+tmp20_;
   double tmp22_ = (tmp21_)/(tmp5_);
   double tmp23_ = mCompCoord[8];
   double tmp24_ = (tmp13_)*tmp14_;
   double tmp25_ = tmp23_-tmp24_;
   double tmp26_ = mCompCoord[15];
   double tmp27_ = mCompCoord[11];
   double tmp28_ = (tmp22_)*tmp14_;
   double tmp29_ = tmp27_-tmp28_;

  mVal[0] = (-(tmp29_)*(tmp13_-mCompCoord[10])+(tmp25_)*(tmp22_-mCompCoord[13]))/((tmp25_)*(mCompCoord[12]-(tmp22_)*tmp26_)-(mCompCoord[9]-(tmp13_)*tmp26_)*(tmp29_))-mLocYL2;

}


void cEqHomogrSpaceInitY::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[6];
   double tmp1_ = tmp0_*mLocXL1;
   double tmp2_ = mCompCoord[7];
   double tmp3_ = tmp2_*mLocYL1;
   double tmp4_ = tmp1_+tmp3_;
   double tmp5_ = tmp4_+1;
   double tmp6_ = mCompCoord[0];
   double tmp7_ = tmp6_*mLocXL1;
   double tmp8_ = mCompCoord[1];
   double tmp9_ = tmp8_*mLocYL1;
   double tmp10_ = tmp7_+tmp9_;
   double tmp11_ = mCompCoord[2];
   double tmp12_ = tmp10_+tmp11_;
   double tmp13_ = (tmp12_)/(tmp5_);
   double tmp14_ = mCompCoord[14];
   double tmp15_ = mCompCoord[3];
   double tmp16_ = tmp15_*mLocXL1;
   double tmp17_ = mCompCoord[4];
   double tmp18_ = tmp17_*mLocYL1;
   double tmp19_ = tmp16_+tmp18_;
   double tmp20_ = mCompCoord[5];
   double tmp21_ = tmp19_+tmp20_;
   double tmp22_ = (tmp21_)/(tmp5_);
   double tmp23_ = mCompCoord[8];
   double tmp24_ = (tmp13_)*tmp14_;
   double tmp25_ = tmp23_-tmp24_;
   double tmp26_ = mCompCoord[15];
   double tmp27_ = mCompCoord[11];
   double tmp28_ = (tmp22_)*tmp14_;
   double tmp29_ = tmp27_-tmp28_;
   double tmp30_ = -(tmp29_);
   double tmp31_ = mLocXL1*(tmp5_);
   double tmp32_ = ElSquare(tmp5_);
   double tmp33_ = (tmp31_)/tmp32_;
   double tmp34_ = mCompCoord[13];
   double tmp35_ = tmp22_-tmp34_;
   double tmp36_ = mCompCoord[12];
   double tmp37_ = (tmp22_)*tmp26_;
   double tmp38_ = tmp36_-tmp37_;
   double tmp39_ = (tmp25_)*(tmp38_);
   double tmp40_ = mCompCoord[9];
   double tmp41_ = (tmp13_)*tmp26_;
   double tmp42_ = tmp40_-tmp41_;
   double tmp43_ = (tmp42_)*(tmp29_);
   double tmp44_ = tmp39_-tmp43_;
   double tmp45_ = mCompCoord[10];
   double tmp46_ = tmp13_-tmp45_;
   double tmp47_ = tmp30_*(tmp46_);
   double tmp48_ = (tmp25_)*(tmp35_);
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp33_)*tmp14_;
   double tmp51_ = -(tmp50_);
   double tmp52_ = mLocYL1*(tmp5_);
   double tmp53_ = (tmp52_)/tmp32_;
   double tmp54_ = (tmp53_)*tmp14_;
   double tmp55_ = -(tmp54_);
   double tmp56_ = ElSquare(tmp44_);
   double tmp57_ = (tmp5_)/tmp32_;
   double tmp58_ = (tmp57_)*tmp14_;
   double tmp59_ = -(tmp58_);
   double tmp60_ = (tmp33_)*tmp26_;
   double tmp61_ = -(tmp60_);
   double tmp62_ = (tmp53_)*tmp26_;
   double tmp63_ = -(tmp62_);
   double tmp64_ = (tmp57_)*tmp26_;
   double tmp65_ = -(tmp64_);
   double tmp66_ = (tmp12_)*mLocXL1;
   double tmp67_ = -(tmp66_);
   double tmp68_ = tmp67_/tmp32_;
   double tmp69_ = (tmp21_)*mLocXL1;
   double tmp70_ = -(tmp69_);
   double tmp71_ = tmp70_/tmp32_;
   double tmp72_ = (tmp68_)*tmp14_;
   double tmp73_ = -(tmp72_);
   double tmp74_ = (tmp71_)*tmp14_;
   double tmp75_ = -(tmp74_);
   double tmp76_ = (tmp12_)*mLocYL1;
   double tmp77_ = -(tmp76_);
   double tmp78_ = tmp77_/tmp32_;
   double tmp79_ = (tmp21_)*mLocYL1;
   double tmp80_ = -(tmp79_);
   double tmp81_ = tmp80_/tmp32_;
   double tmp82_ = (tmp78_)*tmp14_;
   double tmp83_ = -(tmp82_);
   double tmp84_ = (tmp81_)*tmp14_;
   double tmp85_ = -(tmp84_);
   double tmp86_ = -(1);
   double tmp87_ = -(tmp13_);
   double tmp88_ = -(tmp22_);

  mVal[0] = (tmp49_)/(tmp44_)-mLocYL2;

  mCompDer[0][0] = (((tmp33_)*tmp30_+tmp51_*(tmp35_))*(tmp44_)-(tmp49_)*(tmp51_*(tmp38_)-tmp61_*(tmp29_)))/tmp56_;
  mCompDer[0][1] = (((tmp53_)*tmp30_+tmp55_*(tmp35_))*(tmp44_)-(tmp49_)*(tmp55_*(tmp38_)-tmp63_*(tmp29_)))/tmp56_;
  mCompDer[0][2] = (((tmp57_)*tmp30_+tmp59_*(tmp35_))*(tmp44_)-(tmp49_)*(tmp59_*(tmp38_)-tmp65_*(tmp29_)))/tmp56_;
  mCompDer[0][3] = ((-(tmp51_)*(tmp46_)+(tmp33_)*(tmp25_))*(tmp44_)-(tmp49_)*(tmp61_*(tmp25_)-tmp51_*(tmp42_)))/tmp56_;
  mCompDer[0][4] = ((-(tmp55_)*(tmp46_)+(tmp53_)*(tmp25_))*(tmp44_)-(tmp49_)*(tmp63_*(tmp25_)-tmp55_*(tmp42_)))/tmp56_;
  mCompDer[0][5] = ((-(tmp59_)*(tmp46_)+(tmp57_)*(tmp25_))*(tmp44_)-(tmp49_)*(tmp65_*(tmp25_)-tmp59_*(tmp42_)))/tmp56_;
  mCompDer[0][6] = ((-(tmp75_)*(tmp46_)+(tmp68_)*tmp30_+tmp73_*(tmp35_)+(tmp71_)*(tmp25_))*(tmp44_)-(tmp49_)*((tmp73_*(tmp38_)+-((tmp71_)*tmp26_)*(tmp25_))-(-((tmp68_)*tmp26_)*(tmp29_)+tmp75_*(tmp42_))))/tmp56_;
  mCompDer[0][7] = ((-(tmp85_)*(tmp46_)+(tmp78_)*tmp30_+tmp83_*(tmp35_)+(tmp81_)*(tmp25_))*(tmp44_)-(tmp49_)*((tmp83_*(tmp38_)+-((tmp81_)*tmp26_)*(tmp25_))-(-((tmp78_)*tmp26_)*(tmp29_)+tmp85_*(tmp42_))))/tmp56_;
  mCompDer[0][8] = ((tmp35_)*(tmp44_)-(tmp49_)*(tmp38_))/tmp56_;
  mCompDer[0][9] = -((tmp49_)*tmp30_)/tmp56_;
  mCompDer[0][10] = (tmp86_*tmp30_*(tmp44_))/tmp56_;
  mCompDer[0][11] = (tmp86_*(tmp46_)*(tmp44_)-(tmp49_)*-(tmp42_))/tmp56_;
  mCompDer[0][12] = -((tmp49_)*(tmp25_))/tmp56_;
  mCompDer[0][13] = (tmp86_*(tmp25_)*(tmp44_))/tmp56_;
  mCompDer[0][14] = ((-(tmp88_)*(tmp46_)+tmp87_*(tmp35_))*(tmp44_)-(tmp49_)*(tmp87_*(tmp38_)-tmp88_*(tmp42_)))/tmp56_;
  mCompDer[0][15] = -((tmp49_)*(tmp88_*(tmp25_)-tmp87_*(tmp29_)))/tmp56_;
}


void cEqHomogrSpaceInitY::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqHomogrSpaceInitY Has no Der Sec");
}

void cEqHomogrSpaceInitY::SetXL1(double aVal){ mLocXL1 = aVal;}
void cEqHomogrSpaceInitY::SetYL1(double aVal){ mLocYL1 = aVal;}
void cEqHomogrSpaceInitY::SetYL2(double aVal){ mLocYL2 = aVal;}



double * cEqHomogrSpaceInitY::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "XL1") return & mLocXL1;
   if (aName == "YL1") return & mLocYL1;
   if (aName == "YL2") return & mLocYL2;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqHomogrSpaceInitY::mTheAuto("cEqHomogrSpaceInitY",cEqHomogrSpaceInitY::Alloc);


cElCompiledFonc *  cEqHomogrSpaceInitY::Alloc()
{  return new cEqHomogrSpaceInitY();
}

