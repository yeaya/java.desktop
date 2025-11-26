#ifndef _sun_font_X11GB2312$Encoder_h_
#define _sun_font_X11GB2312$Encoder_h_
//$ class sun.font.X11GB2312$Encoder
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
		class X11GB2312;
	}
}
namespace sun {
	namespace nio {
		namespace cs {
			class DoubleByte$Encoder;
		}
	}
}

namespace sun {
	namespace font {

class X11GB2312$Encoder : public ::java::nio::charset::CharsetEncoder {
	$class(X11GB2312$Encoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetEncoder)
public:
	X11GB2312$Encoder();
	using ::java::nio::charset::CharsetEncoder::canEncode;
	void init$(::sun::font::X11GB2312* this$0, ::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t c) override;
	virtual int32_t encodeDouble(char16_t c);
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual bool isLegalReplacement($bytes* repl) override;
	::sun::font::X11GB2312* this$0 = nullptr;
	::sun::nio::cs::DoubleByte$Encoder* enc = nullptr;
};

	} // font
} // sun

#endif // _sun_font_X11GB2312$Encoder_h_