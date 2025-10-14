#ifndef _TestCaretPositionJTextPane_h_
#define _TestCaretPositionJTextPane_h_
//$ class TestCaretPositionJTextPane
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JTextPane;
	}
}

class $export TestCaretPositionJTextPane : public ::java::lang::Object {
	$class(TestCaretPositionJTextPane, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestCaretPositionJTextPane();
	void init$();
	static void createUI();
	static void fillTextPane(::javax::swing::JTextPane* textPane);
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static ::javax::swing::JTextPane* textPane;
	static ::javax::swing::JFrame* f;
};

#endif // _TestCaretPositionJTextPane_h_