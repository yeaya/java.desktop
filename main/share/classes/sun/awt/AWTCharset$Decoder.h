#ifndef _sun_awt_AWTCharset$Decoder_h_
#define _sun_awt_AWTCharset$Decoder_h_
//$ class sun.awt.AWTCharset$Decoder
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
			class CoderResult;
			class CodingErrorAction;
		}
	}
}
namespace sun {
	namespace awt {
		class AWTCharset;
	}
}

namespace sun {
	namespace awt {

class $export AWTCharset$Decoder : public ::java::nio::charset::CharsetDecoder {
	$class(AWTCharset$Decoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetDecoder)
public:
	AWTCharset$Decoder();
	void init$(::sun::awt::AWTCharset* this$0);
	void init$(::sun::awt::AWTCharset* this$0, ::java::nio::charset::CharsetDecoder* dec);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) override;
	virtual ::java::nio::charset::CoderResult* implFlush(::java::nio::CharBuffer* out) override;
	virtual void implOnMalformedInput(::java::nio::charset::CodingErrorAction* newAction) override;
	virtual void implOnUnmappableCharacter(::java::nio::charset::CodingErrorAction* newAction) override;
	virtual void implReplaceWith($String* newReplacement) override;
	virtual void implReset() override;
	::sun::awt::AWTCharset* this$0 = nullptr;
	::java::nio::charset::CharsetDecoder* dec = nullptr;
	$String* nr = nullptr;
	::java::nio::ByteBuffer* fbb = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_AWTCharset$Decoder_h_