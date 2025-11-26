#ifndef _bug4697612_h_
#define _bug4697612_h_
//$ class bug4697612
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FONT_HEIGHT")
#undef FONT_HEIGHT
#pragma push_macro("FRAME_HEIGHT")
#undef FRAME_HEIGHT
#pragma push_macro("FRAME_WIDTH")
#undef FRAME_WIDTH

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JScrollPane;
		class JTextArea;
		class UIManager$LookAndFeelInfo;
	}
}

class $export bug4697612 : public ::java::lang::Object {
	$class(bug4697612, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug4697612();
	void init$();
	static void createAndShowGUI();
	static int32_t getScrollerViewPosition();
	static int32_t getTextCaretHeight();
	static int32_t getTextCaretPosition();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$new$1();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static const int32_t FRAME_WIDTH = 300;
	static const int32_t FRAME_HEIGHT = 300;
	static const int32_t FONT_HEIGHT = 16;
	static $volatile(int32_t) frameHeight;
	static $volatile(int32_t) fontHeight;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTextArea* text;
	static ::javax::swing::JScrollPane* scroller;
	static ::java::awt::Robot* robot;
};

#pragma pop_macro("FONT_HEIGHT")
#pragma pop_macro("FRAME_HEIGHT")
#pragma pop_macro("FRAME_WIDTH")

#endif // _bug4697612_h_