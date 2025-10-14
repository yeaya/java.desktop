#ifndef _java_awt_Component$FlipBufferStrategy_h_
#define _java_awt_Component$FlipBufferStrategy_h_
//$ class java.awt.Component$FlipBufferStrategy
//$ extends java.awt.image.BufferStrategy

#include <java/awt/image/BufferStrategy.h>

namespace java {
	namespace awt {
		class BufferCapabilities;
		class BufferCapabilities$FlipContents;
		class Component;
		class Graphics;
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class VolatileImage;
		}
	}
}

namespace java {
	namespace awt {

class $import Component$FlipBufferStrategy : public ::java::awt::image::BufferStrategy {
	$class(Component$FlipBufferStrategy, $NO_CLASS_INIT, ::java::awt::image::BufferStrategy)
public:
	Component$FlipBufferStrategy();
	void init$(::java::awt::Component* this$0, int32_t numBuffers, ::java::awt::BufferCapabilities* caps);
	virtual bool contentsLost() override;
	virtual bool contentsRestored() override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps);
	virtual void destroyBuffers();
	virtual void dispose() override;
	virtual void flip(::java::awt::BufferCapabilities$FlipContents* flipAction);
	virtual void flipSubRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction);
	virtual ::java::awt::Image* getBackBuffer();
	virtual ::java::awt::BufferCapabilities* getCapabilities() override;
	virtual ::java::awt::Graphics* getDrawGraphics() override;
	void invalidate();
	virtual void revalidate();
	virtual void show() override;
	virtual void showSubRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2);
	void updateInternalBuffers();
	::java::awt::Component* this$0 = nullptr;
	int32_t numBuffers = 0;
	::java::awt::BufferCapabilities* caps = nullptr;
	::java::awt::Image* drawBuffer = nullptr;
	::java::awt::image::VolatileImage* drawVBuffer = nullptr;
	bool validatedContents = false;
	int32_t width = 0;
	int32_t height = 0;
};

	} // awt
} // java

#endif // _java_awt_Component$FlipBufferStrategy_h_