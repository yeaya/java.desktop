#ifndef _sun_java2d_cmm_lcms_LCMS_h_
#define _sun_java2d_cmm_lcms_LCMS_h_
//$ class sun.java2d.cmm.lcms.LCMS
//$ extends sun.java2d.cmm.PCMM

#include <java/lang/Array.h>
#include <sun/java2d/cmm/PCMM.h>

#pragma push_macro("IL")
#undef IL
#pragma push_macro("LCMS")
#undef LCMS

namespace java {
	namespace awt {
		namespace color {
			class ICC_Profile;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace cmm {
			class ColorTransform;
			class Profile;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {
				class LCMSImageLayout;
				class LCMSProfile;
				class LCMSTransform;
			}
		}
	}
}

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

class LCMS : public ::sun::java2d::cmm::PCMM {
	$class(LCMS, 0, ::sun::java2d::cmm::PCMM)
public:
	LCMS();
	void init$();
	static void colorConvert(::sun::java2d::cmm::lcms::LCMSTransform* trans, ::sun::java2d::cmm::lcms::LCMSImageLayout* src, ::sun::java2d::cmm::lcms::LCMSImageLayout* dest);
	static int64_t createNativeTransform($longs* profileIDs, int32_t renderType, int32_t inFormatter, bool isInIntPacked, int32_t outFormatter, bool isOutIntPacked, Object$* disposerRef);
	static int64_t createTransform($Array<::sun::java2d::cmm::lcms::LCMSProfile>* profiles, int32_t renderType, int32_t inFormatter, bool isInIntPacked, int32_t outFormatter, bool isOutIntPacked, Object$* disposerRef);
	virtual ::sun::java2d::cmm::ColorTransform* createTransform(::java::awt::color::ICC_Profile* profile, int32_t renderType, int32_t transformType) override;
	virtual ::sun::java2d::cmm::ColorTransform* createTransform($Array<::sun::java2d::cmm::ColorTransform>* transforms) override;
	static ::sun::java2d::cmm::lcms::LCMSProfile* getLcmsProfile(::sun::java2d::cmm::Profile* p);
	static ::sun::java2d::cmm::PCMM* getModule();
	virtual $bytes* getProfileData(::sun::java2d::cmm::Profile* p) override;
	static $bytes* getProfileDataNative(int64_t ptr);
	static ::sun::java2d::cmm::lcms::LCMSProfile* getProfileID(::java::awt::color::ICC_Profile* profile);
	virtual $bytes* getTagData(::sun::java2d::cmm::Profile* p, int32_t tagSignature) override;
	static $bytes* getTagNative(int64_t profileID, int32_t signature);
	static void initLCMS($Class* Trans, $Class* IL, $Class* Pf);
	virtual ::sun::java2d::cmm::Profile* loadProfile($bytes* data) override;
	static int64_t loadProfileNative($bytes* data, Object$* ref);
	virtual void setTagData(::sun::java2d::cmm::Profile* p, int32_t tagSignature, $bytes* data) override;
	static void setTagDataNative(int64_t ptr, int32_t tagSignature, $bytes* data);
	static ::sun::java2d::cmm::lcms::LCMS* theLcms;
};

			} // lcms
		} // cmm
	} // java2d
} // sun

#pragma pop_macro("IL")
#pragma pop_macro("LCMS")

#endif // _sun_java2d_cmm_lcms_LCMS_h_