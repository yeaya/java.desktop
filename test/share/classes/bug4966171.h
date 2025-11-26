#ifndef _bug4966171_h_
#define _bug4966171_h_
//$ class bug4966171
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class $export bug4966171 : public ::java::lang::Object {
	$class(bug4966171, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug4966171();
	void init$();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void test();
};

#endif // _bug4966171_h_