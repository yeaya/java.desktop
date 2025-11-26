#ifndef _sun_java2d_cmm_ProfileDeferralInfo_h_
#define _sun_java2d_cmm_ProfileDeferralInfo_h_
//$ class sun.java2d.cmm.ProfileDeferralInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		namespace cmm {

class ProfileDeferralInfo : public ::java::lang::Object {
	$class(ProfileDeferralInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProfileDeferralInfo();
	void init$($String* fn, int32_t type, int32_t ncomp, int32_t pclass);
	int32_t colorSpaceType = 0;
	int32_t numComponents = 0;
	int32_t profileClass = 0;
	$String* filename = nullptr;
};

		} // cmm
	} // java2d
} // sun

#endif // _sun_java2d_cmm_ProfileDeferralInfo_h_