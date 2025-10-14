#ifndef _java_awt_ImageMediaEntry_h_
#define _java_awt_ImageMediaEntry_h_
//$ class java.awt.ImageMediaEntry
//$ extends java.awt.MediaEntry
//$ implements java.awt.image.ImageObserver,java.io.Serializable

#include <java/awt/MediaEntry.h>
#include <java/awt/image/ImageObserver.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		class Image;
		class MediaTracker;
	}
}

namespace java {
	namespace awt {

class ImageMediaEntry : public ::java::awt::MediaEntry, public ::java::awt::image::ImageObserver, public ::java::io::Serializable {
	$class(ImageMediaEntry, $NO_CLASS_INIT, ::java::awt::MediaEntry, ::java::awt::image::ImageObserver, ::java::io::Serializable)
public:
	ImageMediaEntry();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::MediaTracker* mt, ::java::awt::Image* img, int32_t c, int32_t w, int32_t h);
	virtual $Object* getMedia() override;
	virtual int32_t getStatus(bool doLoad, bool doVerify) override;
	virtual bool imageUpdate(::java::awt::Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual bool matches(::java::awt::Image* img, int32_t w, int32_t h);
	virtual int32_t parseflags(int32_t infoflags);
	virtual void startLoad() override;
	virtual $String* toString() override;
	::java::awt::Image* image = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	static const int64_t serialVersionUID = (int64_t)0x41C5A6458288EBCA;
};

	} // awt
} // java

#endif // _java_awt_ImageMediaEntry_h_