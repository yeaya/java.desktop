#ifndef _bug6989617_h_
#define _bug6989617_h_
//$ class bug6989617
//$ extends java.lang.Object

#include <java/lang/Array.h>

class bug6989617$MyPanel;
namespace javax {
	namespace swing {
		class JButton;
		class JFrame;
	}
}

class $export bug6989617 : public ::java::lang::Object {
	$class(bug6989617, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6989617();
	void init$();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::bug6989617$MyPanel* panel;
	static ::javax::swing::JButton* button;
	static ::javax::swing::JFrame* frame;
};

#endif // _bug6989617_h_