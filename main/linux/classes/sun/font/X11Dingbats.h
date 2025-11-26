#ifndef _sun_font_X11Dingbats_h_
#define _sun_font_X11Dingbats_h_
//$ class sun.font.X11Dingbats
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

class X11Dingbats : public ::java::nio::charset::Charset {
	$class(X11Dingbats, $NO_CLASS_INIT, ::java::nio::charset::Charset)
public:
	X11Dingbats();
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
};

	} // font
} // sun

#endif // _sun_font_X11Dingbats_h_