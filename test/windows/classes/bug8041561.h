#ifndef _bug8041561_h_
#define _bug8041561_h_
//$ class bug8041561
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JRadioButton;
	}
}

class $export bug8041561 : public ::java::lang::Object {
	$class(bug8041561, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8041561();
	void init$();
	static void createAndShowGUI();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::javax::swing::JRadioButton* radioButton;
	static ::javax::swing::JFrame* frame;
};

#endif // _bug8041561_h_