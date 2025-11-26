#ifndef _sun_awt_HKSCS_h_
#define _sun_awt_HKSCS_h_
//$ class sun.awt.HKSCS
//$ extends java.nio.charset.Charset

#include <java/nio/charset/Charset.h>

#pragma push_macro("HKSCS")
#undef HKSCS

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

class $export HKSCS : public ::java::nio::charset::Charset {
	$class(HKSCS, 0, ::java::nio::charset::Charset)
public:
	HKSCS();
	void init$();
	virtual bool contains(::java::nio::charset::Charset* cs) override;
	virtual ::java::nio::charset::CharsetDecoder* newDecoder() override;
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
	static ::java::nio::charset::Charset* cs;
};

	} // awt
} // sun

#pragma pop_macro("HKSCS")

#endif // _sun_awt_HKSCS_h_