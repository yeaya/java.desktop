#ifndef _sun_font_X11Dingbats$Encoder_h_
#define _sun_font_X11Dingbats$Encoder_h_
//$ class sun.font.X11Dingbats$Encoder
//$ extends java.nio.charset.CharsetEncoder

#include <java/lang/Array.h>
#include <java/nio/charset/CharsetEncoder.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class CharBuffer;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CoderResult;
		}
	}
}

namespace sun {
	namespace font {

class X11Dingbats$Encoder : public ::java::nio::charset::CharsetEncoder {
	$class(X11Dingbats$Encoder, 0, ::java::nio::charset::CharsetEncoder)
public:
	X11Dingbats$Encoder();
	using ::java::nio::charset::CharsetEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t ch) override;
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual bool isLegalReplacement($bytes* repl) override;
	static bool $assertionsDisabled;
	static $bytes* table;
};

	} // font
} // sun

#endif // _sun_font_X11Dingbats$Encoder_h_