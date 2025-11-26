#ifndef _java_awt_image_RasterFormatException_h_
#define _java_awt_image_RasterFormatException_h_
//$ class java.awt.image.RasterFormatException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace awt {
		namespace image {

class $export RasterFormatException : public ::java::lang::RuntimeException {
	$class(RasterFormatException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	RasterFormatException();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x015730467129CEDB;
	RasterFormatException(const RasterFormatException& e);
	virtual void throw$() override;
	inline RasterFormatException* operator ->() {
		return (RasterFormatException*)throwing$;
	}
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_RasterFormatException_h_