#ifndef _java_awt_Component$BltBufferStrategy_h_
#define _java_awt_Component$BltBufferStrategy_h_
//$ class java.awt.Component$BltBufferStrategy
//$ extends java.awt.image.BufferStrategy

#include <java/awt/image/BufferStrategy.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class BufferCapabilities;
		class Component;
		class Graphics;
		class Image;
		class Insets;
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

class $export Component$BltBufferStrategy : public ::java::awt::image::BufferStrategy {
	$class(Component$BltBufferStrategy, $NO_CLASS_INIT, ::java::awt::image::BufferStrategy)
public:
	Component$BltBufferStrategy();
	void init$(::java::awt::Component* this$0, int32_t numBuffers, ::java::awt::BufferCapabilities* caps);
	virtual bool contentsLost() override;
	virtual bool contentsRestored() override;
	virtual void createBackBuffers(int32_t numBuffers);
	virtual void dispose() override;
	virtual ::java::awt::Image* getBackBuffer();
	virtual ::java::awt::BufferCapabilities* getCapabilities() override;
	virtual ::java::awt::Graphics* getDrawGraphics() override;
	virtual void revalidate();
	virtual void revalidate(bool checkSize);
	virtual void show() override;
	virtual void showSubRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2);
	::java::awt::Component* this$0 = nullptr;
	::java::awt::BufferCapabilities* caps = nullptr;
	$Array<::java::awt::image::VolatileImage>* backBuffers = nullptr;
	bool validatedContents = false;
	int32_t width = 0;
	int32_t height = 0;
	::java::awt::Insets* insets = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Component$BltBufferStrategy_h_