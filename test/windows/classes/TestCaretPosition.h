#ifndef _TestCaretPosition_h_
#define _TestCaretPosition_h_
//$ class TestCaretPosition
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JTextArea;
	}
}

class $export TestCaretPosition : public ::java::lang::Object {
	$class(TestCaretPosition, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestCaretPosition();
	void init$();
	static void createUI();
	static void fillTextArea(::javax::swing::JTextArea* area);
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static ::javax::swing::JTextArea* jTextArea1;
	static ::javax::swing::JFrame* f;
};

#endif // _TestCaretPosition_h_