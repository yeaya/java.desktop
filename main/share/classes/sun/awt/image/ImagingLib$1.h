#ifndef _sun_awt_image_ImagingLib$1_h_
#define _sun_awt_image_ImagingLib$1_h_
//$ class sun.awt.image.ImagingLib$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace awt {
		namespace image {

class ImagingLib$1 : public ::java::security::PrivilegedAction {
	$class(ImagingLib$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ImagingLib$1();
	void init$();
	virtual $Object* run() override;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ImagingLib$1_h_