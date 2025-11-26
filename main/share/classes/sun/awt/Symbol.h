#ifndef _sun_awt_Symbol_h_
#define _sun_awt_Symbol_h_
//$ class sun.awt.Symbol
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

class $export Symbol : public ::java::nio::charset::Charset {
	$class(Symbol, $NO_CLASS_INIT, ::java::nio::charset::Charset)
public:
	Symbol();
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
};

	} // awt
} // sun

#endif // _sun_awt_Symbol_h_