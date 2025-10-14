#ifndef _sun_awt_windows_WingDings$Encoder_h_
#define _sun_awt_windows_WingDings$Encoder_h_
//$ class sun.awt.windows.WingDings$Encoder
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
		namespace windows {

class WingDings$Encoder : public ::java::nio::charset::CharsetEncoder {
	$class(WingDings$Encoder, 0, ::java::nio::charset::CharsetEncoder)
public:
	WingDings$Encoder();
	using ::java::nio::charset::CharsetEncoder::canEncode;
	void init$(::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t c) override;
	virtual ::java::nio::charset::CoderResult* encodeLoop(::java::nio::CharBuffer* src, ::java::nio::ByteBuffer* dst) override;
	virtual bool isLegalReplacement($bytes* repl) override;
	static bool $assertionsDisabled;
	static $bytes* table;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WingDings$Encoder_h_