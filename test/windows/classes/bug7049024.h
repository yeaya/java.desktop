#ifndef _bug7049024_h_
#define _bug7049024_h_
//$ class bug7049024
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class Clipboard;
		}
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JFrame;
		class JTextField;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class DefaultCaret;
		}
	}
}

class $export bug7049024 : public ::java::lang::Object {
	$class(bug7049024, 0, ::java::lang::Object)
public:
	bug7049024();
	void init$();
	static void main($StringArray* args);
	static ::java::awt::datatransfer::Clipboard* clipboard;
	static ::javax::swing::JTextField* textField;
	static ::javax::swing::JButton* button;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::text::DefaultCaret* caret;
};

#endif // _bug7049024_h_