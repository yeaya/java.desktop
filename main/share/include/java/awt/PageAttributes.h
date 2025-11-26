#ifndef _java_awt_PageAttributes_h_
#define _java_awt_PageAttributes_h_
//$ class java.awt.PageAttributes
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace awt {
		class PageAttributes$ColorType;
		class PageAttributes$MediaType;
		class PageAttributes$OrientationRequestedType;
		class PageAttributes$OriginType;
		class PageAttributes$PrintQualityType;
	}
}

namespace java {
	namespace awt {

class $import PageAttributes : public ::java::lang::Cloneable {
	$class(PageAttributes, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	PageAttributes();
	void init$();
	void init$(::java::awt::PageAttributes* obj);
	void init$(::java::awt::PageAttributes$ColorType* color, ::java::awt::PageAttributes$MediaType* media, ::java::awt::PageAttributes$OrientationRequestedType* orientationRequested, ::java::awt::PageAttributes$OriginType* origin, ::java::awt::PageAttributes$PrintQualityType* printQuality, $ints* printerResolution);
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	::java::awt::PageAttributes$ColorType* getColor();
	::java::awt::PageAttributes$MediaType* getMedia();
	::java::awt::PageAttributes$OrientationRequestedType* getOrientationRequested();
	::java::awt::PageAttributes$OriginType* getOrigin();
	::java::awt::PageAttributes$PrintQualityType* getPrintQuality();
	$ints* getPrinterResolution();
	virtual int32_t hashCode() override;
	void set(::java::awt::PageAttributes* obj);
	void setColor(::java::awt::PageAttributes$ColorType* color);
	void setMedia(::java::awt::PageAttributes$MediaType* media);
	void setMediaToDefault();
	void setOrientationRequested(::java::awt::PageAttributes$OrientationRequestedType* orientationRequested);
	void setOrientationRequested(int32_t orientationRequested);
	void setOrientationRequestedToDefault();
	void setOrigin(::java::awt::PageAttributes$OriginType* origin);
	void setPrintQuality(::java::awt::PageAttributes$PrintQualityType* printQuality);
	void setPrintQuality(int32_t printQuality);
	void setPrintQualityToDefault();
	void setPrinterResolution($ints* printerResolution);
	void setPrinterResolution(int32_t printerResolution);
	void setPrinterResolutionToDefault();
	virtual $String* toString() override;
	::java::awt::PageAttributes$ColorType* color = nullptr;
	::java::awt::PageAttributes$MediaType* media = nullptr;
	::java::awt::PageAttributes$OrientationRequestedType* orientationRequested = nullptr;
	::java::awt::PageAttributes$OriginType* origin = nullptr;
	::java::awt::PageAttributes$PrintQualityType* printQuality = nullptr;
	$ints* printerResolution = nullptr;
};

	} // awt
} // java

#endif // _java_awt_PageAttributes_h_