#ifndef _sun_font_FontScalerException_h_
#define _sun_font_FontScalerException_h_
//$ class sun.font.FontScalerException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace sun {
	namespace font {

class FontScalerException : public ::java::lang::Exception {
	$class(FontScalerException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	FontScalerException();
	void init$();
	void init$($String* reason);
	FontScalerException(const FontScalerException& e);
	FontScalerException wrapper$();
	virtual void throwWrapper$() override;
};

	} // font
} // sun

#endif // _sun_font_FontScalerException_h_