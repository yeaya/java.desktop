#ifndef _java_awt_image_Kernel_h_
#define _java_awt_image_Kernel_h_
//$ class java.awt.image.Kernel
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace awt {
		namespace image {

class $import Kernel : public ::java::lang::Cloneable {
	$class(Kernel, 0, ::java::lang::Cloneable)
public:
	Kernel();
	void init$(int32_t width, int32_t height, $floats* data);
	virtual $Object* clone() override;
	int32_t getHeight();
	$floats* getKernelData($floats* data);
	int32_t getWidth();
	int32_t getXOrigin();
	int32_t getYOrigin();
	static void initIDs();
	int32_t width = 0;
	int32_t height = 0;
	int32_t xOrigin = 0;
	int32_t yOrigin = 0;
	$floats* data = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_Kernel_h_