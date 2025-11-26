#ifndef _sun_java2d_xr_XRCompositeManager$1_h_
#define _sun_java2d_xr_XRCompositeManager$1_h_
//$ class sun.java2d.xr.XRCompositeManager$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace java2d {
		namespace xr {
			class XRCompositeManager;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRCompositeManager$1 : public ::java::security::PrivilegedAction {
	$class(XRCompositeManager$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	XRCompositeManager$1();
	void init$(::sun::java2d::xr::XRCompositeManager* this$0);
	virtual $Object* run() override;
	::sun::java2d::xr::XRCompositeManager* this$0 = nullptr;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRCompositeManager$1_h_