#ifndef _com_apple_laf_AquaUtils$2_h_
#define _com_apple_laf_AquaUtils$2_h_
//$ class com.apple.laf.AquaUtils$2
//$ extends com.apple.laf.AquaUtils$IconImageFilter

#include <com/apple/laf/AquaUtils$IconImageFilter.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaUtils$2 : public ::com::apple::laf::AquaUtils$IconImageFilter {
	$class(AquaUtils$2, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$IconImageFilter)
public:
	AquaUtils$2();
	void init$();
	virtual int32_t getGreyFor(int32_t gray) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaUtils$2_h_