#ifndef _JTextAreaWordWrapTest_h_
#define _JTextAreaWordWrapTest_h_
//$ class JTextAreaWordWrapTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JTextArea;
	}
}

class $export JTextAreaWordWrapTest : public ::java::lang::Object {
	$class(JTextAreaWordWrapTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JTextAreaWordWrapTest();
	void init$();
	static void doWrapOffTest();
	static void doWrapOnTest();
	static void lambda$main$0();
	static void lambda$main$1();
	static void lambda$main$2();
	static void lambda$main$3();
	static void lambda$main$4();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JFrame* frame1;
	static ::javax::swing::JTextArea* textArea;
	static ::javax::swing::JTextArea* textArea1;
};

#endif // _JTextAreaWordWrapTest_h_