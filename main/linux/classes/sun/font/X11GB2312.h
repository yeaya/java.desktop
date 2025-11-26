#ifndef _sun_font_X11GB2312_h_
#define _sun_font_X11GB2312_h_
//$ class sun.font.X11GB2312
//$ extends java.nio.charset.Charset

#include <java/nio/charset/Charset.h>

namespace java {
	namespace nio {
		namespace charset {
			class CharsetDecoder;
			class CharsetEncoder;
		}
	}
}

namespace sun {
	namespace font {

class X11GB2312 : public ::java::nio::charset::Charset {
	$class(X11GB2312, $NO_CLASS_INIT, ::java::nio::charset::Charset)
public:
	X11GB2312();
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
};

	} // font
} // sun

#endif // _sun_font_X11GB2312_h_