#ifndef _FontSetByUser_h_
#define _FontSetByUser_h_
//$ class FontSetByUser
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

#pragma push_macro("USERS_FONT")
#undef USERS_FONT

namespace java {
	namespace awt {
		class Font;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class UIManager$LookAndFeelInfo;
	}
}

class $export FontSetByUser : public ::java::lang::Runnable {
	$class(FontSetByUser, 0, ::java::lang::Runnable)
public:
	FontSetByUser();
	void init$();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void main($StringArray* args);
	virtual void run() override;
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void testDefaultFont(::javax::swing::JFrame* frame);
	static ::java::awt::Font* USERS_FONT;
};

#pragma pop_macro("USERS_FONT")

#endif // _FontSetByUser_h_