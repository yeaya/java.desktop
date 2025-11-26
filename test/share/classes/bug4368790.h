#ifndef _bug4368790_h_
#define _bug4368790_h_
//$ class bug4368790
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JButton;
		class JFrame;
		class UIManager$LookAndFeelInfo;
	}
}

class $export bug4368790 : public ::java::lang::Object {
	$class(bug4368790, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug4368790();
	void init$();
	static void createGui();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$main$1();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static ::javax::swing::JButton* b1;
	static ::javax::swing::JFrame* frame;
};

#endif // _bug4368790_h_