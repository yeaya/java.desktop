#ifndef _java_awt_image_renderable_RenderableImageProducer_h_
#define _java_awt_image_renderable_RenderableImageProducer_h_
//$ class java.awt.image.renderable.RenderableImageProducer
//$ extends java.awt.image.ImageProducer
//$ implements java.lang.Runnable

#include <java/awt/image/ImageProducer.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		namespace image {
			class ImageConsumer;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			namespace renderable {
				class RenderContext;
				class RenderableImage;
			}
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace java {
	namespace awt {
		namespace image {
			namespace renderable {

class $export RenderableImageProducer : public ::java::awt::image::ImageProducer, public ::java::lang::Runnable {
	$class(RenderableImageProducer, $NO_CLASS_INIT, ::java::awt::image::ImageProducer, ::java::lang::Runnable)
public:
	RenderableImageProducer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::image::renderable::RenderableImage* rdblImage, ::java::awt::image::renderable::RenderContext* rc);
	virtual void addConsumer(::java::awt::image::ImageConsumer* ic) override;
	virtual bool isConsumer(::java::awt::image::ImageConsumer* ic) override;
	virtual void removeConsumer(::java::awt::image::ImageConsumer* ic) override;
	virtual void requestTopDownLeftRightResend(::java::awt::image::ImageConsumer* ic) override;
	virtual void run() override;
	virtual void setRenderContext(::java::awt::image::renderable::RenderContext* rc);
	virtual void startProduction(::java::awt::image::ImageConsumer* ic) override;
	virtual $String* toString() override;
	::java::awt::image::renderable::RenderableImage* rdblImage = nullptr;
	::java::awt::image::renderable::RenderContext* rc = nullptr;
	::java::util::Vector* ics = nullptr;
};

			} // renderable
		} // image
	} // awt
} // java

#endif // _java_awt_image_renderable_RenderableImageProducer_h_