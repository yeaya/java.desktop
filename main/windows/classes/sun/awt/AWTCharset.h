#ifndef _sun_awt_AWTCharset_h_
#define _sun_awt_AWTCharset_h_
//$ class sun.awt.AWTCharset
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

class $export AWTCharset : public ::java::nio::charset::Charset {
	$class(AWTCharset, $NO_CLASS_INIT, ::java::nio::charset::Charset)
public:
	AWTCharset();
	void init$($String* awtCsName, ::java::nio::charset::Charset* javaCs);
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
	::java::nio::charset::Charset* awtCs = nullptr;
	::java::nio::charset::Charset* javaCs = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_AWTCharset_h_