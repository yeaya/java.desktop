#ifndef _sun_awt_windows_WingDings_h_
#define _sun_awt_windows_WingDings_h_
//$ class sun.awt.windows.WingDings
//$ extends java.nio.charset.Charset

#include <java/nio/charset/Charset.h>

namespace java {
	namespace nio {
		namespace charset {
			class CharsetDecoder;
			class CharsetEncoder;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WingDings : public ::java::nio::charset::Charset {
	$class(WingDings, $NO_CLASS_INIT, ::java::nio::charset::Charset)
public:
	WingDings();
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WingDings_h_