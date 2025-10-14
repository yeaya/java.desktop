#ifndef _bug6302464_h_
#define _bug6302464_h_
//$ class bug6302464
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ANTIALIASING_HINTS")
#undef ANTIALIASING_HINTS
#pragma push_macro("EXCLUDED_LAFS")
#undef EXCLUDED_LAFS

namespace java {
	namespace util {
		class HashSet;
	}
}
namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class $export bug6302464 : public ::java::lang::Object {
	$class(bug6302464, 0, ::java::lang::Object)
public:
	bug6302464();
	void init$();
	static ::java::util::HashSet* getAntialiasedColors(Object$* aaHint, int32_t lcdContrast);
	static bool isExcludedLAF(::javax::swing::UIManager$LookAndFeelInfo* lafInfo);
	static void main($StringArray* args);
	static void setLookAndFeel($String* lafClass);
	static void setMetalLookAndFeel();
	static void testAntialiasingHints();
	static void testAntialiasingProperties();
	static void testCustomLAF();
	static void testCustomLAF(bool useAAHints);
	static void testFontRenderingContext();
	static void testFontRenderingContext(Object$* aaHint);
	static void testLAFAAHints();
	static void testLAFAAHints(::javax::swing::UIManager$LookAndFeelInfo* lafInfo);
	static $ObjectArray* ANTIALIASING_HINTS;
	static $StringArray* EXCLUDED_LAFS;
};

#pragma pop_macro("ANTIALIASING_HINTS")
#pragma pop_macro("EXCLUDED_LAFS")

#endif // _bug6302464_h_