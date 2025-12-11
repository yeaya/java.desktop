#ifndef _sun_awt_AWTCharset$Encoder_h_
#define _sun_awt_AWTCharset$Encoder_h_
//$ class sun.awt.AWTCharset$Encoder
//$ extends java.nio.charset.CharsetEncoder

#include <java/lang/Array.h>
#include <java/nio/charset/CharsetEncoder.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
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

class $import AWTCharset$Encoder : public ::java::nio::charset::CharsetEncoder {
	$class(AWTCharset$Encoder, $NO_CLASS_INIT, ::java::nio::charset::CharsetEncoder)
public:
	AWTCharset$Encoder();
	void init$(::sun::awt::AWTCharset* this$0);
	void init$(::sun::awt::AWTCharset* this$0, ::java::nio::charset::CharsetEncoder* enc);
	virtual bool canEncode(char16_t c) override;
	virtual bool canEncode(::java::lang::CharSequence* cs) override;
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual ::java::nio::charset::CoderResult* implFlush(::java::nio::ByteBuffer* out) override;
	virtual void implOnMalformedInput(::java::nio::charset::CodingErrorAction* newAction) override;
	virtual void implOnUnmappableCharacter(::java::nio::charset::CodingErrorAction* newAction) override;
	virtual void implReplaceWith($bytes* newReplacement) override;
	virtual void implReset() override;
	virtual bool isLegalReplacement($bytes* repl) override;
	::sun::awt::AWTCharset* this$0 = nullptr;
	::java::nio::charset::CharsetEncoder* enc = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_AWTCharset$Encoder_h_