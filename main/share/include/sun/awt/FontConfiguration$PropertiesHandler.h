#ifndef _sun_awt_FontConfiguration$PropertiesHandler_h_
#define _sun_awt_FontConfiguration$PropertiesHandler_h_
//$ class sun.awt.FontConfiguration$PropertiesHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class Short;
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}

namespace sun {
	namespace awt {

class $import FontConfiguration$PropertiesHandler : public ::java::lang::Object {
	$class(FontConfiguration$PropertiesHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FontConfiguration$PropertiesHandler();
	void init$();
	::java::lang::Short* getID(::java::util::HashMap* map, $String* key);
	void initBinaryTable();
	void initHashMaps();
	void initLogicalNameStyle();
	virtual void load(::java::io::InputStream* in);
	$ints* parseExclusions($String* key, $String* exclusions);
	void parseProperty($String* key, $String* value);
	::java::util::HashMap* scriptIDs = nullptr;
	::java::util::HashMap* elcIDs = nullptr;
	::java::util::HashMap* componentFontNameIDs = nullptr;
	::java::util::HashMap* fontfileNameIDs = nullptr;
	::java::util::HashMap* logicalFontIDs = nullptr;
	::java::util::HashMap* fontStyleIDs = nullptr;
	::java::util::HashMap* filenames = nullptr;
	::java::util::HashMap* sequences = nullptr;
	::java::util::HashMap* scriptFonts = nullptr;
	::java::util::HashMap* scriptAllfonts = nullptr;
	::java::util::HashMap* exclusions = nullptr;
	::java::util::HashMap* awtfontpaths = nullptr;
	::java::util::HashMap* proportionals = nullptr;
	::java::util::HashMap* scriptAllfontsMotif = nullptr;
	::java::util::HashMap* scriptFontsMotif = nullptr;
	::java::util::HashMap* alphabeticSuffix = nullptr;
	$shorts* fallbackScriptIDs = nullptr;
	$String* version = nullptr;
	$String* appendedfontpath = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_FontConfiguration$PropertiesHandler_h_