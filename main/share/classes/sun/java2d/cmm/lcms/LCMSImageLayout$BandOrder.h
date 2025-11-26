#ifndef _sun_java2d_cmm_lcms_LCMSImageLayout$BandOrder_h_
#define _sun_java2d_cmm_lcms_LCMSImageLayout$BandOrder_h_
//$ class sun.java2d.cmm.lcms.LCMSImageLayout$BandOrder
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ARBITRARY")
#undef ARBITRARY
#pragma push_macro("DIRECT")
#undef DIRECT
#pragma push_macro("INVERTED")
#undef INVERTED
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

class LCMSImageLayout$BandOrder : public ::java::lang::Enum {
	$class(LCMSImageLayout$BandOrder, 0, ::java::lang::Enum)
public:
	LCMSImageLayout$BandOrder();
	static $Array<::sun::java2d::cmm::lcms::LCMSImageLayout$BandOrder>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::java2d::cmm::lcms::LCMSImageLayout$BandOrder* getBandOrder($ints* bandOffsets);
	static ::sun::java2d::cmm::lcms::LCMSImageLayout$BandOrder* valueOf($String* name);
	static $Array<::sun::java2d::cmm::lcms::LCMSImageLayout$BandOrder>* values();
	static ::sun::java2d::cmm::lcms::LCMSImageLayout$BandOrder* DIRECT;
	static ::sun::java2d::cmm::lcms::LCMSImageLayout$BandOrder* INVERTED;
	static ::sun::java2d::cmm::lcms::LCMSImageLayout$BandOrder* ARBITRARY;
	static ::sun::java2d::cmm::lcms::LCMSImageLayout$BandOrder* UNKNOWN;
	static $Array<::sun::java2d::cmm::lcms::LCMSImageLayout$BandOrder>* $VALUES;
};

			} // lcms
		} // cmm
	} // java2d
} // sun

#pragma pop_macro("ARBITRARY")
#pragma pop_macro("DIRECT")
#pragma pop_macro("INVERTED")
#pragma pop_macro("UNKNOWN")

#endif // _sun_java2d_cmm_lcms_LCMSImageLayout$BandOrder_h_