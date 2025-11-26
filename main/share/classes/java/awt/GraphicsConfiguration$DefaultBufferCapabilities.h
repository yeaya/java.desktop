#ifndef _java_awt_GraphicsConfiguration$DefaultBufferCapabilities_h_
#define _java_awt_GraphicsConfiguration$DefaultBufferCapabilities_h_
//$ class java.awt.GraphicsConfiguration$DefaultBufferCapabilities
//$ extends java.awt.BufferCapabilities

#include <java/awt/BufferCapabilities.h>

namespace java {
	namespace awt {
		class ImageCapabilities;
	}
}

namespace java {
	namespace awt {

class GraphicsConfiguration$DefaultBufferCapabilities : public ::java::awt::BufferCapabilities {
	$class(GraphicsConfiguration$DefaultBufferCapabilities, $NO_CLASS_INIT, ::java::awt::BufferCapabilities)
public:
	GraphicsConfiguration$DefaultBufferCapabilities();
	void init$(::java::awt::ImageCapabilities* imageCaps);
};

	} // awt
} // java

#endif // _java_awt_GraphicsConfiguration$DefaultBufferCapabilities_h_