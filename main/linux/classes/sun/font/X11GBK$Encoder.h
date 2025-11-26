#ifndef _sun_font_X11GBK$Encoder_h_
#define _sun_font_X11GBK$Encoder_h_
//$ class sun.font.X11GBK$Encoder
//$ extends sun.nio.cs.DoubleByte$Encoder

#include <sun/nio/cs/DoubleByte$Encoder.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace sun {
	namespace font {
		class X11GBK;
	}
}

namespace sun {
	namespace font {

class X11GBK$Encoder : public ::sun::nio::cs::DoubleByte$Encoder {
	$class(X11GBK$Encoder, $NO_CLASS_INIT, ::sun::nio::cs::DoubleByte$Encoder)
public:
	X11GBK$Encoder();
	using ::sun::nio::cs::DoubleByte$Encoder::encode;
	using ::sun::nio::cs::DoubleByte$Encoder::canEncode;
	void init$(::sun::font::X11GBK* this$0, ::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t ch) override;
	virtual int32_t encodeChar(char16_t ch) override;
	::sun::font::X11GBK* this$0 = nullptr;
	::sun::nio::cs::DoubleByte$Encoder* enc = nullptr;
};

	} // font
} // sun

#endif // _sun_font_X11GBK$Encoder_h_