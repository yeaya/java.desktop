#ifndef _sun_awt_Symbol$Encoder_h_
#define _sun_awt_Symbol$Encoder_h_
//$ class sun.awt.Symbol$Encoder
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
	namespace awt {

class Symbol$Encoder : public ::java::nio::charset::CharsetEncoder {
	$class(Symbol$Encoder, 0, ::java::nio::charset::CharsetEncoder)
public:
	Symbol$Encoder();
	using ::java::nio::charset::CharsetEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t c) override;
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual bool isLegalReplacement($bytes* repl) override;
	static bool $assertionsDisabled;
	static $bytes* table_math;
	static $bytes* table_greek;
};

	} // awt
} // sun

#endif // _sun_awt_Symbol$Encoder_h_