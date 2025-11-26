#ifndef _sun_font_X11Johab$Encoder_h_
#define _sun_font_X11Johab$Encoder_h_
//$ class sun.font.X11Johab$Encoder
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

class X11Johab$Encoder : public ::sun::font::DoubleByteEncoder {
	$class(X11Johab$Encoder, 0, ::sun::font::DoubleByteEncoder)
public:
	X11Johab$Encoder();
	using ::sun::font::DoubleByteEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool isLegalReplacement($bytes* repl) override;
	static $String* innerIndex0;
	static $String* innerIndex1;
	static $String* innerIndex2;
	static $String* innerIndex3;
	static $String* innerIndex4;
	static $String* innerIndex5;
	static $String* innerIndex6;
	static $String* innerIndex7;
	static $String* innerIndex8;
	static $String* innerIndex9;
	static $shorts* index1;
	static $StringArray* index2;
};

	} // font
} // sun

#endif // _sun_font_X11Johab$Encoder_h_