#ifndef _sun_java2d_cmm_lcms_LCMSProfile_h_
#define _sun_java2d_cmm_lcms_LCMSProfile_h_
//$ class sun.java2d.cmm.lcms.LCMSProfile
//$ extends sun.java2d.cmm.Profile

#include <java/lang/Array.h>
#include <sun/java2d/cmm/Profile.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class StampedLock;
			}
		}
	}
}

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

class LCMSProfile : public ::sun::java2d::cmm::Profile {
	$class(LCMSProfile, $NO_CLASS_INIT, ::sun::java2d::cmm::Profile)
public:
	LCMSProfile();
	void init$(int64_t ptr, Object$* ref);
	int64_t getLcmsPtr();
	$bytes* getProfileData();
	$bytes* getTag(int32_t sig);
	$bytes* lambda$getTag$0(::java::lang::Integer* key);
	void setTag(int32_t tagSignature, $bytes* data);
	$Object* disposerReferent = nullptr;
	::java::util::Map* tags = nullptr;
	::java::util::concurrent::locks::StampedLock* lock = nullptr;
};

			} // lcms
		} // cmm
	} // java2d
} // sun

#endif // _sun_java2d_cmm_lcms_LCMSProfile_h_