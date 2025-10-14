#ifndef _java_awt_font_MultipleMaster_h_
#define _java_awt_font_MultipleMaster_h_
//$ interface java.awt.font.MultipleMaster
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Font;
	}
}

namespace java {
	namespace awt {
		namespace font {

class $export MultipleMaster : public ::java::lang::Object {
	$interface(MultipleMaster, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Font* deriveMMFont($floats* axes) {return nullptr;}
	virtual ::java::awt::Font* deriveMMFont($floats* glyphWidths, float avgStemWidth, float typicalCapHeight, float typicalXHeight, float italicAngle) {return nullptr;}
	virtual $floats* getDesignAxisDefaults() {return nullptr;}
	virtual $StringArray* getDesignAxisNames() {return nullptr;}
	virtual $floats* getDesignAxisRanges() {return nullptr;}
	virtual int32_t getNumDesignAxes() {return 0;}
};

		} // font
	} // awt
} // java

#endif // _java_awt_font_MultipleMaster_h_