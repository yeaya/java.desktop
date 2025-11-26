#ifndef _sun_font_X11GB2312$Decoder_h_
#define _sun_font_X11GB2312$Decoder_h_
//$ class sun.font.X11GB2312$Decoder
//$ extends java.nio.charset.CharsetDecoder

#include <java/nio/charset/CharsetDecoder.h>

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
			class DoubleByte$Decoder;
		}
	}
}

namespace sun {
	namespace font {

class X11GB2312$Decoder : public ::java::nio::charset::CharsetDecoder {
	$class(X11GB2312$Decoder, 0, ::java::nio::charset::CharsetDecoder)
public:
	X11GB2312$Decoder();
	void init$(::sun::font::X11GB2312* this$0, ::java::nio::charset::Charset* cs);
	virtual char16_t decodeDouble(int32_t b1, int32_t b2);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	::sun::font::X11GB2312* this$0 = nullptr;
	static bool $assertionsDisabled;
	::sun::nio::cs::DoubleByte$Decoder* dec = nullptr;
};

	} // font
} // sun

#endif // _sun_font_X11GB2312$Decoder_h_