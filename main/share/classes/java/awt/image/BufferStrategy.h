#ifndef _java_awt_image_BufferStrategy_h_
#define _java_awt_image_BufferStrategy_h_
//$ class java.awt.image.BufferStrategy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class BufferCapabilities;
		class Graphics;
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export BufferStrategy : public ::java::lang::Object {
	$class(BufferStrategy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BufferStrategy();
	void init$();
	virtual bool contentsLost() {return false;}
	virtual bool contentsRestored() {return false;}
	virtual void dispose();
	virtual ::java::awt::BufferCapabilities* getCapabilities() {return nullptr;}
	virtual ::java::awt::Graphics* getDrawGraphics() {return nullptr;}
	virtual void show() {}
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_BufferStrategy_h_