#ifndef _sun_font_X11GB18030_1_h_
#define _sun_font_X11GB18030_1_h_
//$ class sun.font.X11GB18030_1
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

class X11GB18030_1 : public ::java::nio::charset::Charset {
	$class(X11GB18030_1, $NO_CLASS_INIT, ::java::nio::charset::Charset)
public:
	X11GB18030_1();
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
};

	} // font
} // sun

#endif // _sun_font_X11GB18030_1_h_