#ifndef _FontSetToNull_h_
#define _FontSetToNull_h_
//$ class FontSetToNull
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("USERS_FONT")
#undef USERS_FONT

namespace java {
	namespace awt {
		class Font;
	}
}
namespace javax {
	namespace swing {
		class JSpinner;
		class UIManager$LookAndFeelInfo;
	}
}

class $export FontSetToNull : public ::java::lang::Object {
	$class(FontSetToNull, 0, ::java::lang::Object)
public:
	FontSetToNull();
	void init$();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$main$1();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void test(::javax::swing::JSpinner* spinner);
	static ::java::awt::Font* USERS_FONT;
};

#pragma pop_macro("USERS_FONT")

#endif // _FontSetToNull_h_