#ifndef _RepaintOnFrameIconifiedStateChangeTest_h_
#define _RepaintOnFrameIconifiedStateChangeTest_h_
//$ class RepaintOnFrameIconifiedStateChangeTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JButton;
		class JComponent;
		class JFrame;
		class JLabel;
	}
}

class $export RepaintOnFrameIconifiedStateChangeTest : public ::java::lang::Object {
	$class(RepaintOnFrameIconifiedStateChangeTest, 0, ::java::lang::Object)
public:
	RepaintOnFrameIconifiedStateChangeTest();
	void init$();
	static void createGUI();
	static void main($StringArray* args);
	static $Array<::java::lang::String, 2>* strsForComps;
	static const int32_t lblIndex = 0;
	static const int32_t btnIndex = 1;
	static $volatile(::javax::swing::JFrame*) frame;
	static $volatile(::javax::swing::JLabel*) label;
	static $volatile(::javax::swing::JButton*) button;
	static $volatile($Array<::javax::swing::JComponent>*) comps;
	static $volatile($booleans*) compRedrawn;
	static $volatile(bool) compRedrawnFlagCanBeSet;
};

#endif // _RepaintOnFrameIconifiedStateChangeTest_h_