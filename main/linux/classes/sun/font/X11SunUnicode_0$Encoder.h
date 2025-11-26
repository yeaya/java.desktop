#ifndef _sun_font_X11SunUnicode_0$Encoder_h_
#define _sun_font_X11SunUnicode_0$Encoder_h_
//$ class sun.font.X11SunUnicode_0$Encoder
//$ extends sun.font.DoubleByteEncoder

#include <java/lang/Array.h>
#include <sun/font/DoubleByteEncoder.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}

namespace sun {
	namespace font {

class X11SunUnicode_0$Encoder : public ::sun::font::DoubleByteEncoder {
	$class(X11SunUnicode_0$Encoder, 0, ::sun::font::DoubleByteEncoder)
public:
	X11SunUnicode_0$Encoder();
	using ::sun::font::DoubleByteEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool isLegalReplacement($bytes* repl) override;
	static $String* innerIndex0;
	static $shorts* index1;
	static $StringArray* index2;
};

	} // font
} // sun

#endif // _sun_font_X11SunUnicode_0$Encoder_h_