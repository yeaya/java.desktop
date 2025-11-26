#ifndef _java_awt_GraphicsCallback_h_
#define _java_awt_GraphicsCallback_h_
//$ class java.awt.GraphicsCallback
//$ extends sun.awt.SunGraphicsCallback

#include <sun/awt/SunGraphicsCallback.h>

namespace java {
	namespace awt {

class GraphicsCallback : public ::sun::awt::SunGraphicsCallback {
	$class(GraphicsCallback, $NO_CLASS_INIT, ::sun::awt::SunGraphicsCallback)
public:
	GraphicsCallback();
	void init$();
};

	} // awt
} // java

#endif // _java_awt_GraphicsCallback_h_