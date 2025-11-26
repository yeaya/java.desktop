#ifndef _sun_java2d_cmm_PCMM_h_
#define _sun_java2d_cmm_PCMM_h_
//$ interface sun.java2d.cmm.PCMM
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PCMM")
#undef PCMM

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

class PCMM : public ::java::lang::Object {
	$interface(PCMM, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::java2d::cmm::ColorTransform* createTransform(::java::awt::color::ICC_Profile* profile, int32_t renderType, int32_t transformType) {return nullptr;}
	virtual ::sun::java2d::cmm::ColorTransform* createTransform($Array<::sun::java2d::cmm::ColorTransform>* transforms) {return nullptr;}
	virtual $bytes* getProfileData(::sun::java2d::cmm::Profile* p) {return nullptr;}
	virtual $bytes* getTagData(::sun::java2d::cmm::Profile* p, int32_t tagSignature) {return nullptr;}
	virtual ::sun::java2d::cmm::Profile* loadProfile($bytes* data) {return nullptr;}
	virtual void setTagData(::sun::java2d::cmm::Profile* p, int32_t tagSignature, $bytes* data) {}
};

		} // cmm
	} // java2d
} // sun

#pragma pop_macro("PCMM")

#endif // _sun_java2d_cmm_PCMM_h_