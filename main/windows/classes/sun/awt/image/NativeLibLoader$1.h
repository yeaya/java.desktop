#ifndef _sun_awt_image_NativeLibLoader$1_h_
#define _sun_awt_image_NativeLibLoader$1_h_
//$ class sun.awt.image.NativeLibLoader$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		namespace image {

class NativeLibLoader$1 : public ::java::security::PrivilegedAction {
	$class(NativeLibLoader$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	NativeLibLoader$1();
	void init$();
	virtual $Object* run() override;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_NativeLibLoader$1_h_