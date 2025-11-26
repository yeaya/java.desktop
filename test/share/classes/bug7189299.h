#ifndef _bug7189299_h_
#define _bug7189299_h_
//$ class bug7189299
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JEditorPane;
		class JFrame;
	}
}

class $export bug7189299 : public ::java::lang::Object {
	$class(bug7189299, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug7189299();
	void init$();
	static void doTest();
	static void main($StringArray* args);
	static void setup();
	static void verifySingleDefaultButtonModelListener();
	static ::javax::swing::JEditorPane* html;
	static ::javax::swing::JFrame* frame;
};

#endif // _bug7189299_h_