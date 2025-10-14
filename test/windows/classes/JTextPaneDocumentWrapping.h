#ifndef _JTextPaneDocumentWrapping_h_
#define _JTextPaneDocumentWrapping_h_
//$ class JTextPaneDocumentWrapping
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JTextPane;
	}
}

class $export JTextPaneDocumentWrapping : public ::java::lang::Object {
	$class(JTextPaneDocumentWrapping, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JTextPaneDocumentWrapping();
	void init$();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTextPane* jTextPane;
	static int32_t position;
};

#endif // _JTextPaneDocumentWrapping_h_