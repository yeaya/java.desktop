#ifndef _sun_java2d_cmm_lcms_LcmsServiceProvider_h_
#define _sun_java2d_cmm_lcms_LcmsServiceProvider_h_
//$ class sun.java2d.cmm.lcms.LcmsServiceProvider
//$ extends sun.java2d.cmm.CMMServiceProvider

#include <sun/java2d/cmm/CMMServiceProvider.h>

namespace sun {
	namespace java2d {
		namespace cmm {
			class PCMM;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

class LcmsServiceProvider : public ::sun::java2d::cmm::CMMServiceProvider {
	$class(LcmsServiceProvider, $NO_CLASS_INIT, ::sun::java2d::cmm::CMMServiceProvider)
public:
	LcmsServiceProvider();
	void init$();
	virtual ::sun::java2d::cmm::PCMM* getModule() override;
};

			} // lcms
		} // cmm
	} // java2d
} // sun

#endif // _sun_java2d_cmm_lcms_LcmsServiceProvider_h_