#ifndef _sun_font_DoubleByteEncoder_h_
#define _sun_font_DoubleByteEncoder_h_
//$ class sun.font.DoubleByteEncoder
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
	namespace nio {
		namespace cs {
			class Surrogate$Parser;
		}
	}
}

namespace sun {
	namespace font {

class DoubleByteEncoder : public ::java::nio::charset::CharsetEncoder {
	$class(DoubleByteEncoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetEncoder)
public:
	DoubleByteEncoder();
	using ::java::nio::charset::CharsetEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs, $shorts* index1, $StringArray* index2);
	void init$(::java::nio::charset::Charset* cs, $shorts* index1, $StringArray* index2, float avg, float max);
	void init$(::java::nio::charset::Charset* cs, $shorts* index1, $StringArray* index2, $bytes* repl);
	void init$(::java::nio::charset::Charset* cs, $shorts* index1, $StringArray* index2, $bytes* repl, float avg, float max);
	virtual bool canEncode(char16_t c) override;
	::java::nio::charset::CoderResult* encodeArrayLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	::java::nio::charset::CoderResult* encodeBufferLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst);
	virtual int32_t encodeDouble(char16_t ch);
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual int32_t encodeSingle(char16_t inputChar);
	virtual $bytes* encodeSurrogate(char16_t highSurrogate, char16_t lowSurrogate);
	$shorts* index1 = nullptr;
	$StringArray* index2 = nullptr;
	::sun::nio::cs::Surrogate$Parser* sgp = nullptr;
};

	} // font
} // sun

#endif // _sun_font_DoubleByteEncoder_h_