#ifndef _java_awt_image_BufferedImage$1_h_
#define _java_awt_image_BufferedImage$1_h_
//$ class java.awt.image.BufferedImage$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		namespace image {

class BufferedImage$1 : public ::java::security::PrivilegedAction {
	$class(BufferedImage$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	BufferedImage$1();
	void init$($Class* val$cmClass, $Class* val$smClass, $Class* val$wrClass);
	virtual $Object* run() override;
	$Class* val$wrClass = nullptr;
	$Class* val$smClass = nullptr;
	$Class* val$cmClass = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_BufferedImage$1_h_