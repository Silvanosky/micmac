// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_X_M2CPolyn2.h"


cEqAppui_X_M2CPolyn2::cEqAppui_X_M2CPolyn2():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr",0,9));
   AddIntRef (cIncIntervale("Orient",9,15));
   Close(false);
}



void cEqAppui_X_M2CPolyn2::ComputeVal()
{
   double tmp0_ = mCompCoord[9];
   double tmp1_ = mCompCoord[10];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[11];
   double tmp7_ = mCompCoord[12];
   double tmp8_ = mLocXTer-tmp7_;
   double tmp9_ = sin(tmp6_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp5_);
   double tmp12_ = cos(tmp6_);
   double tmp13_ = mCompCoord[13];
   double tmp14_ = mLocYTer-tmp13_;
   double tmp15_ = mCompCoord[14];
   double tmp16_ = mLocZTer-tmp15_;
   double tmp17_ = mCompCoord[0];
   double tmp18_ = -(tmp3_);
   double tmp19_ = tmp4_*tmp11_;
   double tmp20_ = tmp3_*tmp11_;
   double tmp21_ = tmp18_*tmp10_;
   double tmp22_ = tmp19_*tmp12_;
   double tmp23_ = tmp21_+tmp22_;
   double tmp24_ = (tmp23_)*(tmp8_);
   double tmp25_ = tmp4_*tmp10_;
   double tmp26_ = tmp20_*tmp12_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = (tmp27_)*(tmp14_);
   double tmp29_ = tmp24_+tmp28_;
   double tmp30_ = tmp2_*tmp12_;
   double tmp31_ = tmp30_*(tmp16_);
   double tmp32_ = tmp29_+tmp31_;
   double tmp33_ = mCompCoord[1];
   double tmp34_ = tmp4_*tmp2_;
   double tmp35_ = tmp34_*(tmp8_);
   double tmp36_ = tmp3_*tmp2_;
   double tmp37_ = tmp36_*(tmp14_);
   double tmp38_ = tmp35_+tmp37_;
   double tmp39_ = tmp5_*(tmp16_);
   double tmp40_ = tmp38_+tmp39_;
   double tmp41_ = (tmp40_)/(tmp32_);
   double tmp42_ = tmp17_*(tmp41_);
   double tmp43_ = tmp33_+tmp42_;
   double tmp44_ = (tmp43_)-mLocPolyn2_State_1_0;
   double tmp45_ = (tmp44_)/mLocPolyn2_State_0_0;
   double tmp46_ = mCompCoord[2];
   double tmp47_ = tmp18_*tmp12_;
   double tmp48_ = tmp19_*tmp9_;
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp49_)*(tmp8_);
   double tmp51_ = tmp4_*tmp12_;
   double tmp52_ = tmp20_*tmp9_;
   double tmp53_ = tmp51_+tmp52_;
   double tmp54_ = (tmp53_)*(tmp14_);
   double tmp55_ = tmp50_+tmp54_;
   double tmp56_ = tmp2_*tmp9_;
   double tmp57_ = tmp56_*(tmp16_);
   double tmp58_ = tmp55_+tmp57_;
   double tmp59_ = (tmp58_)/(tmp32_);
   double tmp60_ = tmp17_*(tmp59_);
   double tmp61_ = tmp46_+tmp60_;
   double tmp62_ = (tmp61_)-mLocPolyn2_State_2_0;
   double tmp63_ = (tmp62_)/mLocPolyn2_State_0_0;

  mVal[0] = (mLocPolyn2_State_1_0+(((1+mCompCoord[3])*(tmp45_)+mCompCoord[4]*(tmp63_))-mCompCoord[5]*2*(tmp45_)*(tmp45_)+mCompCoord[6]*(tmp45_)*(tmp63_)+mCompCoord[7]*(tmp63_)*(tmp63_))*mLocPolyn2_State_0_0)-mLocXIm;

}


void cEqAppui_X_M2CPolyn2::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[9];
   double tmp1_ = mCompCoord[10];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[11];
   double tmp7_ = mCompCoord[12];
   double tmp8_ = mLocXTer-tmp7_;
   double tmp9_ = sin(tmp6_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp5_);
   double tmp12_ = cos(tmp6_);
   double tmp13_ = mCompCoord[13];
   double tmp14_ = mLocYTer-tmp13_;
   double tmp15_ = mCompCoord[14];
   double tmp16_ = mLocZTer-tmp15_;
   double tmp17_ = mCompCoord[0];
   double tmp18_ = -(tmp3_);
   double tmp19_ = tmp4_*tmp11_;
   double tmp20_ = tmp3_*tmp11_;
   double tmp21_ = tmp18_*tmp10_;
   double tmp22_ = tmp19_*tmp12_;
   double tmp23_ = tmp21_+tmp22_;
   double tmp24_ = (tmp23_)*(tmp8_);
   double tmp25_ = tmp4_*tmp10_;
   double tmp26_ = tmp20_*tmp12_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = (tmp27_)*(tmp14_);
   double tmp29_ = tmp24_+tmp28_;
   double tmp30_ = tmp2_*tmp12_;
   double tmp31_ = tmp30_*(tmp16_);
   double tmp32_ = tmp29_+tmp31_;
   double tmp33_ = mCompCoord[1];
   double tmp34_ = tmp4_*tmp2_;
   double tmp35_ = tmp34_*(tmp8_);
   double tmp36_ = tmp3_*tmp2_;
   double tmp37_ = tmp36_*(tmp14_);
   double tmp38_ = tmp35_+tmp37_;
   double tmp39_ = tmp5_*(tmp16_);
   double tmp40_ = tmp38_+tmp39_;
   double tmp41_ = (tmp40_)/(tmp32_);
   double tmp42_ = tmp17_*(tmp41_);
   double tmp43_ = tmp33_+tmp42_;
   double tmp44_ = (tmp43_)-mLocPolyn2_State_1_0;
   double tmp45_ = (tmp44_)/mLocPolyn2_State_0_0;
   double tmp46_ = mCompCoord[2];
   double tmp47_ = tmp18_*tmp12_;
   double tmp48_ = tmp19_*tmp9_;
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp49_)*(tmp8_);
   double tmp51_ = tmp4_*tmp12_;
   double tmp52_ = tmp20_*tmp9_;
   double tmp53_ = tmp51_+tmp52_;
   double tmp54_ = (tmp53_)*(tmp14_);
   double tmp55_ = tmp50_+tmp54_;
   double tmp56_ = tmp2_*tmp9_;
   double tmp57_ = tmp56_*(tmp16_);
   double tmp58_ = tmp55_+tmp57_;
   double tmp59_ = (tmp58_)/(tmp32_);
   double tmp60_ = tmp17_*(tmp59_);
   double tmp61_ = tmp46_+tmp60_;
   double tmp62_ = (tmp61_)-mLocPolyn2_State_2_0;
   double tmp63_ = (tmp62_)/mLocPolyn2_State_0_0;
   double tmp64_ = mCompCoord[3];
   double tmp65_ = 1+tmp64_;
   double tmp66_ = ElSquare(mLocPolyn2_State_0_0);
   double tmp67_ = mCompCoord[4];
   double tmp68_ = (tmp41_)*mLocPolyn2_State_0_0;
   double tmp69_ = (tmp68_)/tmp66_;
   double tmp70_ = (tmp69_)*(tmp45_);
   double tmp71_ = mCompCoord[5];
   double tmp72_ = tmp71_*2;
   double tmp73_ = (tmp59_)*mLocPolyn2_State_0_0;
   double tmp74_ = (tmp73_)/tmp66_;
   double tmp75_ = mCompCoord[6];
   double tmp76_ = (tmp74_)*(tmp63_);
   double tmp77_ = mCompCoord[7];
   double tmp78_ = mLocPolyn2_State_0_0/tmp66_;
   double tmp79_ = (tmp78_)*(tmp45_);
   double tmp80_ = (tmp78_)*(tmp63_);
   double tmp81_ = (tmp45_)*(tmp45_);
   double tmp82_ = (tmp45_)*(tmp63_);
   double tmp83_ = (tmp63_)*(tmp63_);
   double tmp84_ = -(1);
   double tmp85_ = tmp84_*tmp3_;
   double tmp86_ = -(tmp4_);
   double tmp87_ = tmp85_*tmp11_;
   double tmp88_ = tmp86_*tmp10_;
   double tmp89_ = tmp87_*tmp12_;
   double tmp90_ = tmp88_+tmp89_;
   double tmp91_ = (tmp90_)*(tmp8_);
   double tmp92_ = tmp85_*tmp10_;
   double tmp93_ = tmp92_+tmp22_;
   double tmp94_ = (tmp93_)*(tmp14_);
   double tmp95_ = tmp91_+tmp94_;
   double tmp96_ = ElSquare(tmp32_);
   double tmp97_ = tmp85_*tmp2_;
   double tmp98_ = tmp97_*(tmp8_);
   double tmp99_ = tmp34_*(tmp14_);
   double tmp100_ = tmp98_+tmp99_;
   double tmp101_ = (tmp100_)*(tmp32_);
   double tmp102_ = (tmp40_)*(tmp95_);
   double tmp103_ = tmp101_-tmp102_;
   double tmp104_ = (tmp103_)/tmp96_;
   double tmp105_ = (tmp104_)*tmp17_;
   double tmp106_ = tmp105_*mLocPolyn2_State_0_0;
   double tmp107_ = (tmp106_)/tmp66_;
   double tmp108_ = (tmp107_)*(tmp45_);
   double tmp109_ = tmp86_*tmp12_;
   double tmp110_ = tmp87_*tmp9_;
   double tmp111_ = tmp109_+tmp110_;
   double tmp112_ = (tmp111_)*(tmp8_);
   double tmp113_ = tmp85_*tmp12_;
   double tmp114_ = tmp113_+tmp48_;
   double tmp115_ = (tmp114_)*(tmp14_);
   double tmp116_ = tmp112_+tmp115_;
   double tmp117_ = (tmp116_)*(tmp32_);
   double tmp118_ = (tmp58_)*(tmp95_);
   double tmp119_ = tmp117_-tmp118_;
   double tmp120_ = (tmp119_)/tmp96_;
   double tmp121_ = (tmp120_)*tmp17_;
   double tmp122_ = tmp121_*mLocPolyn2_State_0_0;
   double tmp123_ = (tmp122_)/tmp66_;
   double tmp124_ = (tmp123_)*(tmp63_);
   double tmp125_ = tmp84_*tmp5_;
   double tmp126_ = -(tmp2_);
   double tmp127_ = tmp126_*tmp4_;
   double tmp128_ = tmp126_*tmp3_;
   double tmp129_ = tmp127_*tmp12_;
   double tmp130_ = tmp129_*(tmp8_);
   double tmp131_ = tmp128_*tmp12_;
   double tmp132_ = tmp131_*(tmp14_);
   double tmp133_ = tmp130_+tmp132_;
   double tmp134_ = tmp125_*tmp12_;
   double tmp135_ = tmp134_*(tmp16_);
   double tmp136_ = tmp133_+tmp135_;
   double tmp137_ = tmp125_*tmp4_;
   double tmp138_ = tmp137_*(tmp8_);
   double tmp139_ = tmp125_*tmp3_;
   double tmp140_ = tmp139_*(tmp14_);
   double tmp141_ = tmp138_+tmp140_;
   double tmp142_ = tmp2_*(tmp16_);
   double tmp143_ = tmp141_+tmp142_;
   double tmp144_ = (tmp143_)*(tmp32_);
   double tmp145_ = (tmp40_)*(tmp136_);
   double tmp146_ = tmp144_-tmp145_;
   double tmp147_ = (tmp146_)/tmp96_;
   double tmp148_ = (tmp147_)*tmp17_;
   double tmp149_ = tmp148_*mLocPolyn2_State_0_0;
   double tmp150_ = (tmp149_)/tmp66_;
   double tmp151_ = (tmp150_)*(tmp45_);
   double tmp152_ = tmp127_*tmp9_;
   double tmp153_ = tmp152_*(tmp8_);
   double tmp154_ = tmp128_*tmp9_;
   double tmp155_ = tmp154_*(tmp14_);
   double tmp156_ = tmp153_+tmp155_;
   double tmp157_ = tmp125_*tmp9_;
   double tmp158_ = tmp157_*(tmp16_);
   double tmp159_ = tmp156_+tmp158_;
   double tmp160_ = (tmp159_)*(tmp32_);
   double tmp161_ = (tmp58_)*(tmp136_);
   double tmp162_ = tmp160_-tmp161_;
   double tmp163_ = (tmp162_)/tmp96_;
   double tmp164_ = (tmp163_)*tmp17_;
   double tmp165_ = tmp164_*mLocPolyn2_State_0_0;
   double tmp166_ = (tmp165_)/tmp66_;
   double tmp167_ = (tmp166_)*(tmp63_);
   double tmp168_ = -(tmp12_);
   double tmp169_ = tmp84_*tmp9_;
   double tmp170_ = tmp168_*tmp18_;
   double tmp171_ = tmp169_*tmp19_;
   double tmp172_ = tmp170_+tmp171_;
   double tmp173_ = (tmp172_)*(tmp8_);
   double tmp174_ = tmp168_*tmp4_;
   double tmp175_ = tmp169_*tmp20_;
   double tmp176_ = tmp174_+tmp175_;
   double tmp177_ = (tmp176_)*(tmp14_);
   double tmp178_ = tmp173_+tmp177_;
   double tmp179_ = tmp169_*tmp2_;
   double tmp180_ = tmp179_*(tmp16_);
   double tmp181_ = tmp178_+tmp180_;
   double tmp182_ = (tmp40_)*(tmp181_);
   double tmp183_ = -(tmp182_);
   double tmp184_ = tmp183_/tmp96_;
   double tmp185_ = (tmp184_)*tmp17_;
   double tmp186_ = tmp185_*mLocPolyn2_State_0_0;
   double tmp187_ = (tmp186_)/tmp66_;
   double tmp188_ = (tmp187_)*(tmp45_);
   double tmp189_ = tmp169_*tmp18_;
   double tmp190_ = tmp12_*tmp19_;
   double tmp191_ = tmp189_+tmp190_;
   double tmp192_ = (tmp191_)*(tmp8_);
   double tmp193_ = tmp169_*tmp4_;
   double tmp194_ = tmp12_*tmp20_;
   double tmp195_ = tmp193_+tmp194_;
   double tmp196_ = (tmp195_)*(tmp14_);
   double tmp197_ = tmp192_+tmp196_;
   double tmp198_ = tmp12_*tmp2_;
   double tmp199_ = tmp198_*(tmp16_);
   double tmp200_ = tmp197_+tmp199_;
   double tmp201_ = (tmp200_)*(tmp32_);
   double tmp202_ = (tmp58_)*(tmp181_);
   double tmp203_ = tmp201_-tmp202_;
   double tmp204_ = (tmp203_)/tmp96_;
   double tmp205_ = (tmp204_)*tmp17_;
   double tmp206_ = tmp205_*mLocPolyn2_State_0_0;
   double tmp207_ = (tmp206_)/tmp66_;
   double tmp208_ = (tmp207_)*(tmp63_);
   double tmp209_ = tmp84_*(tmp23_);
   double tmp210_ = tmp84_*tmp34_;
   double tmp211_ = tmp210_*(tmp32_);
   double tmp212_ = (tmp40_)*tmp209_;
   double tmp213_ = tmp211_-tmp212_;
   double tmp214_ = (tmp213_)/tmp96_;
   double tmp215_ = (tmp214_)*tmp17_;
   double tmp216_ = tmp215_*mLocPolyn2_State_0_0;
   double tmp217_ = (tmp216_)/tmp66_;
   double tmp218_ = (tmp217_)*(tmp45_);
   double tmp219_ = tmp84_*(tmp49_);
   double tmp220_ = tmp219_*(tmp32_);
   double tmp221_ = (tmp58_)*tmp209_;
   double tmp222_ = tmp220_-tmp221_;
   double tmp223_ = (tmp222_)/tmp96_;
   double tmp224_ = (tmp223_)*tmp17_;
   double tmp225_ = tmp224_*mLocPolyn2_State_0_0;
   double tmp226_ = (tmp225_)/tmp66_;
   double tmp227_ = (tmp226_)*(tmp63_);
   double tmp228_ = tmp84_*(tmp27_);
   double tmp229_ = tmp84_*tmp36_;
   double tmp230_ = tmp229_*(tmp32_);
   double tmp231_ = (tmp40_)*tmp228_;
   double tmp232_ = tmp230_-tmp231_;
   double tmp233_ = (tmp232_)/tmp96_;
   double tmp234_ = (tmp233_)*tmp17_;
   double tmp235_ = tmp234_*mLocPolyn2_State_0_0;
   double tmp236_ = (tmp235_)/tmp66_;
   double tmp237_ = (tmp236_)*(tmp45_);
   double tmp238_ = tmp84_*(tmp53_);
   double tmp239_ = tmp238_*(tmp32_);
   double tmp240_ = (tmp58_)*tmp228_;
   double tmp241_ = tmp239_-tmp240_;
   double tmp242_ = (tmp241_)/tmp96_;
   double tmp243_ = (tmp242_)*tmp17_;
   double tmp244_ = tmp243_*mLocPolyn2_State_0_0;
   double tmp245_ = (tmp244_)/tmp66_;
   double tmp246_ = (tmp245_)*(tmp63_);
   double tmp247_ = tmp84_*tmp30_;
   double tmp248_ = tmp125_*(tmp32_);
   double tmp249_ = (tmp40_)*tmp247_;
   double tmp250_ = tmp248_-tmp249_;
   double tmp251_ = (tmp250_)/tmp96_;
   double tmp252_ = (tmp251_)*tmp17_;
   double tmp253_ = tmp252_*mLocPolyn2_State_0_0;
   double tmp254_ = (tmp253_)/tmp66_;
   double tmp255_ = (tmp254_)*(tmp45_);
   double tmp256_ = tmp84_*tmp56_;
   double tmp257_ = tmp256_*(tmp32_);
   double tmp258_ = (tmp58_)*tmp247_;
   double tmp259_ = tmp257_-tmp258_;
   double tmp260_ = (tmp259_)/tmp96_;
   double tmp261_ = (tmp260_)*tmp17_;
   double tmp262_ = tmp261_*mLocPolyn2_State_0_0;
   double tmp263_ = (tmp262_)/tmp66_;
   double tmp264_ = (tmp263_)*(tmp63_);

  mVal[0] = (mLocPolyn2_State_1_0+(((tmp65_)*(tmp45_)+tmp67_*(tmp63_))-tmp72_*tmp81_+tmp75_*tmp82_+tmp77_*tmp83_)*mLocPolyn2_State_0_0)-mLocXIm;

  mCompDer[0][0] = (((tmp69_)*(tmp65_)+(tmp74_)*tmp67_)-(tmp70_+tmp70_)*tmp72_+((tmp69_)*(tmp63_)+(tmp74_)*(tmp45_))*tmp75_+(tmp76_+tmp76_)*tmp77_)*mLocPolyn2_State_0_0;
  mCompDer[0][1] = ((tmp78_)*(tmp65_)-(tmp79_+tmp79_)*tmp72_+tmp80_*tmp75_)*mLocPolyn2_State_0_0;
  mCompDer[0][2] = ((tmp78_)*tmp67_+tmp79_*tmp75_+(tmp80_+tmp80_)*tmp77_)*mLocPolyn2_State_0_0;
  mCompDer[0][3] = (tmp45_)*mLocPolyn2_State_0_0;
  mCompDer[0][4] = (tmp63_)*mLocPolyn2_State_0_0;
  mCompDer[0][5] = -(2*tmp81_)*mLocPolyn2_State_0_0;
  mCompDer[0][6] = tmp82_*mLocPolyn2_State_0_0;
  mCompDer[0][7] = tmp83_*mLocPolyn2_State_0_0;
  mCompDer[0][8] = 0;
  mCompDer[0][9] = (((tmp107_)*(tmp65_)+(tmp123_)*tmp67_)-(tmp108_+tmp108_)*tmp72_+((tmp107_)*(tmp63_)+(tmp123_)*(tmp45_))*tmp75_+(tmp124_+tmp124_)*tmp77_)*mLocPolyn2_State_0_0;
  mCompDer[0][10] = (((tmp150_)*(tmp65_)+(tmp166_)*tmp67_)-(tmp151_+tmp151_)*tmp72_+((tmp150_)*(tmp63_)+(tmp166_)*(tmp45_))*tmp75_+(tmp167_+tmp167_)*tmp77_)*mLocPolyn2_State_0_0;
  mCompDer[0][11] = (((tmp187_)*(tmp65_)+(tmp207_)*tmp67_)-(tmp188_+tmp188_)*tmp72_+((tmp187_)*(tmp63_)+(tmp207_)*(tmp45_))*tmp75_+(tmp208_+tmp208_)*tmp77_)*mLocPolyn2_State_0_0;
  mCompDer[0][12] = (((tmp217_)*(tmp65_)+(tmp226_)*tmp67_)-(tmp218_+tmp218_)*tmp72_+((tmp217_)*(tmp63_)+(tmp226_)*(tmp45_))*tmp75_+(tmp227_+tmp227_)*tmp77_)*mLocPolyn2_State_0_0;
  mCompDer[0][13] = (((tmp236_)*(tmp65_)+(tmp245_)*tmp67_)-(tmp237_+tmp237_)*tmp72_+((tmp236_)*(tmp63_)+(tmp245_)*(tmp45_))*tmp75_+(tmp246_+tmp246_)*tmp77_)*mLocPolyn2_State_0_0;
  mCompDer[0][14] = (((tmp254_)*(tmp65_)+(tmp263_)*tmp67_)-(tmp255_+tmp255_)*tmp72_+((tmp254_)*(tmp63_)+(tmp263_)*(tmp45_))*tmp75_+(tmp264_+tmp264_)*tmp77_)*mLocPolyn2_State_0_0;
}


void cEqAppui_X_M2CPolyn2::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_X_M2CPolyn2 Has no Der Sec");
}

void cEqAppui_X_M2CPolyn2::SetPolyn2_State_0_0(double aVal){ mLocPolyn2_State_0_0 = aVal;}
void cEqAppui_X_M2CPolyn2::SetPolyn2_State_1_0(double aVal){ mLocPolyn2_State_1_0 = aVal;}
void cEqAppui_X_M2CPolyn2::SetPolyn2_State_2_0(double aVal){ mLocPolyn2_State_2_0 = aVal;}
void cEqAppui_X_M2CPolyn2::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_X_M2CPolyn2::SetXTer(double aVal){ mLocXTer = aVal;}
void cEqAppui_X_M2CPolyn2::SetYTer(double aVal){ mLocYTer = aVal;}
void cEqAppui_X_M2CPolyn2::SetZTer(double aVal){ mLocZTer = aVal;}



double * cEqAppui_X_M2CPolyn2::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Polyn2_State_0_0") return & mLocPolyn2_State_0_0;
   if (aName == "Polyn2_State_1_0") return & mLocPolyn2_State_1_0;
   if (aName == "Polyn2_State_2_0") return & mLocPolyn2_State_2_0;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "XTer") return & mLocXTer;
   if (aName == "YTer") return & mLocYTer;
   if (aName == "ZTer") return & mLocZTer;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_X_M2CPolyn2::mTheAuto("cEqAppui_X_M2CPolyn2",cEqAppui_X_M2CPolyn2::Alloc);


cElCompiledFonc *  cEqAppui_X_M2CPolyn2::Alloc()
{  return new cEqAppui_X_M2CPolyn2();
}


