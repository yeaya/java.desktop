#ifndef _Test6256140_h_
#define _Test6256140_h_
//$ class Test6256140
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFormattedTextField;
		class JFrame;
		class JLabel;
	}
}

class $export Test6256140 : public ::java::lang::Object {
	$class(Test6256140, 0, ::java::lang::Object)
public:
	Test6256140();
	void init$();
	static void createAndShowGUI();
	static bool isTextEqual();
	static bool isTooltipShowning();
	static void main($StringArray* args);
	static $volatile(::javax::swing::JFormattedTextField*) ft;
	static $String* initialText;
	static ::javax::swing::JLabel* toolTipLabel;
	static ::javax::swing::JFrame* frame;
};

#endif // _Test6256140_h_