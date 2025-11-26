#ifndef _sun_awt_image_InputStreamImageSource_h_
#define _sun_awt_image_InputStreamImageSource_h_
//$ class sun.awt.image.InputStreamImageSource
//$ extends java.awt.image.ImageProducer
//$ implements sun.awt.image.ImageFetchable

#include <java/awt/image/ImageProducer.h>
#include <sun/awt/image/ImageFetchable.h>

namespace java {
	namespace awt {
		namespace image {
			class ImageConsumer;
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class ImageConsumerQueue;
			class ImageDecoder;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class InputStreamImageSource : public ::java::awt::image::ImageProducer, public ::sun::awt::image::ImageFetchable {
	$class(InputStreamImageSource, $NO_CLASS_INIT, ::java::awt::image::ImageProducer, ::sun::awt::image::ImageFetchable)
public:
	InputStreamImageSource();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addConsumer(::java::awt::image::ImageConsumer* ic) override;
	virtual void addConsumer(::java::awt::image::ImageConsumer* ic, bool produce);
	void badDecoder();
	virtual bool checkSecurity(Object$* context, bool quiet) {return false;}
	virtual int32_t countConsumers(::sun::awt::image::ImageConsumerQueue* cq);
	virtual int32_t countConsumers();
	virtual ::sun::awt::image::ImageDecoder* decoderForType(::java::io::InputStream* is, $String* content_type);
	virtual void doFetch() override;
	virtual void doneDecoding(::sun::awt::image::ImageDecoder* mydecoder);
	void errorAllConsumers(::sun::awt::image::ImageConsumerQueue* cq, bool needReload);
	void errorConsumer(::sun::awt::image::ImageConsumerQueue* cq, bool needReload);
	virtual void flush();
	virtual ::sun::awt::image::ImageDecoder* getDecoder() {return nullptr;}
	virtual ::sun::awt::image::ImageDecoder* getDecoder(::java::io::InputStream* is);
	virtual bool isConsumer(::java::awt::image::ImageConsumer* ic) override;
	virtual void latchConsumers(::sun::awt::image::ImageDecoder* id);
	virtual void printQueue(::sun::awt::image::ImageConsumerQueue* cq, $String* prefix);
	virtual void printQueues($String* title);
	virtual void removeConsumer(::java::awt::image::ImageConsumer* ic) override;
	void removeDecoder(::sun::awt::image::ImageDecoder* mydecoder);
	virtual void requestTopDownLeftRightResend(::java::awt::image::ImageConsumer* ic) override;
	void setDecoder(::sun::awt::image::ImageDecoder* mydecoder);
	virtual void startProduction(::java::awt::image::ImageConsumer* ic) override;
	void startProduction();
	void stopProduction();
	virtual $String* toString() override;
	::sun::awt::image::ImageConsumerQueue* consumers = nullptr;
	::sun::awt::image::ImageDecoder* decoder = nullptr;
	::sun::awt::image::ImageDecoder* decoders = nullptr;
	bool awaitingFetch = false;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_InputStreamImageSource_h_