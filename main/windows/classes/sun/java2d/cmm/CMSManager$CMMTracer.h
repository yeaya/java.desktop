#ifndef _sun_java2d_cmm_CMSManager$CMMTracer_h_
#define _sun_java2d_cmm_CMSManager$CMMTracer_h_
//$ class sun.java2d.cmm.CMSManager$CMMTracer
//$ extends sun.java2d.cmm.PCMM

#include <java/lang/Array.h>
#include <sun/java2d/cmm/PCMM.h>

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

class CMSManager$CMMTracer : public ::sun::java2d::cmm::PCMM {
	$class(CMSManager$CMMTracer, $NO_CLASS_INIT, ::sun::java2d::cmm::PCMM)
public:
	CMSManager$CMMTracer();
	void init$(::sun::java2d::cmm::PCMM* tcmm);
	virtual ::sun::java2d::cmm::ColorTransform* createTransform(::java::awt::color::ICC_Profile* profile, int32_t renderType, int32_t transformType) override;
	virtual ::sun::java2d::cmm::ColorTransform* createTransform($Array<::sun::java2d::cmm::ColorTransform>* transforms) override;
	virtual $bytes* getProfileData(::sun::java2d::cmm::Profile* p) override;
	virtual $bytes* getTagData(::sun::java2d::cmm::Profile* p, int32_t tagSignature) override;
	virtual ::sun::java2d::cmm::Profile* loadProfile($bytes* data) override;
	virtual void setTagData(::sun::java2d::cmm::Profile* p, int32_t tagSignature, $bytes* data) override;
	static $String* signatureToString(int32_t sig);
	::sun::java2d::cmm::PCMM* tcmm = nullptr;
	$String* cName = nullptr;
};

		} // cmm
	} // java2d
} // sun

#endif // _sun_java2d_cmm_CMSManager$CMMTracer_h_