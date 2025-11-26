#ifndef _java_awt_BufferCapabilities_h_
#define _java_awt_BufferCapabilities_h_
//$ class java.awt.BufferCapabilities
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace java {
	namespace awt {
		class BufferCapabilities$FlipContents;
		class ImageCapabilities;
	}
}

namespace java {
	namespace awt {

class $export BufferCapabilities : public ::java::lang::Cloneable {
	$class(BufferCapabilities, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	BufferCapabilities();
	void init$(::java::awt::ImageCapabilities* frontCaps, ::java::awt::ImageCapabilities* backCaps, ::java::awt::BufferCapabilities$FlipContents* flipContents);
	virtual $Object* clone() override;
	virtual ::java::awt::ImageCapabilities* getBackBufferCapabilities();
	virtual ::java::awt::BufferCapabilities$FlipContents* getFlipContents();
	virtual ::java::awt::ImageCapabilities* getFrontBufferCapabilities();
	virtual bool isFullScreenRequired();
	virtual bool isMultiBufferAvailable();
	virtual bool isPageFlipping();
	::java::awt::ImageCapabilities* frontCaps = nullptr;
	::java::awt::ImageCapabilities* backCaps = nullptr;
	::java::awt::BufferCapabilities$FlipContents* flipContents = nullptr;
};

	} // awt
} // java

#endif // _java_awt_BufferCapabilities_h_