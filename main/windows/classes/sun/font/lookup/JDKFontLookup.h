#ifndef _sun_font_lookup_JDKFontLookup_h_
#define _sun_font_lookup_JDKFontLookup_h_
//$ class sun.font.lookup.JDKFontLookup
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace font {
		namespace lookup {

class JDKFontLookup : public ::java::lang::Object {
	$class(JDKFontLookup, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JDKFontLookup();
	void init$();
	static $String* getJDKFontDir();
};

		} // lookup
	} // font
} // sun

#endif // _sun_font_lookup_JDKFontLookup_h_