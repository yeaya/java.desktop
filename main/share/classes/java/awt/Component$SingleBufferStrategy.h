#ifndef _java_awt_Component$SingleBufferStrategy_h_
#define _java_awt_Component$SingleBufferStrategy_h_
//$ class java.awt.Component$SingleBufferStrategy
//$ extends java.awt.image.BufferStrategy

#include <java/awt/image/BufferStrategy.h>

namespace java {
	namespace awt {
		class BufferCapabilities;
		class Component;
		class Graphics;
	}
}

namespace java {
	namespace awt {

class Component$SingleBufferStrategy : public ::java::awt::image::BufferStrategy {
	$class(Component$SingleBufferStrategy, $NO_CLASS_INIT, ::java::awt::image::BufferStrategy)
public:
	Component$SingleBufferStrategy();
	void init$(::java::awt::Component* this$0, ::java::awt::BufferCapabilities* caps);
	virtual bool contentsLost() override;
	virtual bool contentsRestored() override;
	virtual ::java::awt::BufferCapabilities* getCapabilities() override;
	virtual ::java::awt::Graphics* getDrawGraphics() override;
	virtual void show() override;
	::java::awt::Component* this$0 = nullptr;
	::java::awt::BufferCapabilities* caps = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Component$SingleBufferStrategy_h_