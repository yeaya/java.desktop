#ifndef _java_awt_ImageCapabilities_h_
#define _java_awt_ImageCapabilities_h_
//$ class java.awt.ImageCapabilities
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace java {
	namespace awt {

class $export ImageCapabilities : public ::java::lang::Cloneable {
	$class(ImageCapabilities, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	ImageCapabilities();
	void init$(bool accelerated);
	virtual $Object* clone() override;
	virtual bool isAccelerated();
	virtual bool isTrueVolatile();
	bool accelerated = false;
};

	} // awt
} // java

#endif // _java_awt_ImageCapabilities_h_