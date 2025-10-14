#ifndef _sun_awt_windows_WDefaultFontCharset$Encoder_h_
#define _sun_awt_windows_WDefaultFontCharset$Encoder_h_
//$ class sun.awt.windows.WDefaultFontCharset$Encoder
//$ extends sun.awt.AWTCharset$Encoder

#include <sun/awt/AWTCharset$Encoder.h>

namespace sun {
	namespace awt {
		namespace windows {
			class WDefaultFontCharset;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WDefaultFontCharset$Encoder : public ::sun::awt::AWTCharset$Encoder {
	$class(WDefaultFontCharset$Encoder, $NO_CLASS_INIT, ::sun::awt::AWTCharset$Encoder)
public:
	WDefaultFontCharset$Encoder();
	using ::sun::awt::AWTCharset$Encoder::canEncode;
	void init$(::sun::awt::windows::WDefaultFontCharset* this$0);
	virtual bool canEncode(char16_t c) override;
	::sun::awt::windows::WDefaultFontCharset* this$0 = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WDefaultFontCharset$Encoder_h_