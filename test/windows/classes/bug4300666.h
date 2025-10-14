#ifndef _bug4300666_h_
#define _bug4300666_h_
//$ class bug4300666
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class $export bug4300666 : public ::java::lang::Object {
	$class(bug4300666, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug4300666();
	void init$();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$main$1();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
};

#endif // _bug4300666_h_