#ifndef _sun_java2d_cmm_CMSManager_h_
#define _sun_java2d_cmm_CMSManager_h_
//$ class sun.java2d.cmm.CMSManager
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

class CMSManager : public ::java::lang::Object {
	$class(CMSManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CMSManager();
	void init$();
	static bool canCreateModule();
	static ::sun::java2d::cmm::PCMM* createModule();
	static ::sun::java2d::cmm::PCMM* getModule();
	static $volatile(::sun::java2d::cmm::PCMM*) cmmImpl;
};

		} // cmm
	} // java2d
} // sun

#endif // _sun_java2d_cmm_CMSManager_h_