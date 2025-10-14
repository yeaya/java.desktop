#ifndef _sun_java2d_cmm_CMMServiceProvider_h_
#define _sun_java2d_cmm_CMMServiceProvider_h_
//$ class sun.java2d.cmm.CMMServiceProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class CMMServiceProvider : public ::java::lang::Object {
	$class(CMMServiceProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CMMServiceProvider();
	void init$();
	::sun::java2d::cmm::PCMM* getColorManagementModule();
	virtual ::sun::java2d::cmm::PCMM* getModule() {return nullptr;}
};

		} // cmm
	} // java2d
} // sun

#endif // _sun_java2d_cmm_CMMServiceProvider_h_