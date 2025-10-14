#ifndef _sun_awt_util_PerformanceLogger$1_h_
#define _sun_awt_util_PerformanceLogger$1_h_
//$ class sun.awt.util.PerformanceLogger$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		namespace util {

class PerformanceLogger$1 : public ::java::security::PrivilegedAction {
	$class(PerformanceLogger$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	PerformanceLogger$1();
	void init$();
	virtual $Object* run() override;
};

		} // util
	} // awt
} // sun

#endif // _sun_awt_util_PerformanceLogger$1_h_