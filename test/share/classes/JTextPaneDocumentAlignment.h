#ifndef _JTextPaneDocumentAlignment_h_
#define _JTextPaneDocumentAlignment_h_
//$ class JTextPaneDocumentAlignment
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JTextPane;
	}
}

class $export JTextPaneDocumentAlignment : public ::java::lang::Object {
	$class(JTextPaneDocumentAlignment, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JTextPaneDocumentAlignment();
	void init$();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTextPane* jTextPane;
	static int32_t position;
};

#endif // _JTextPaneDocumentAlignment_h_