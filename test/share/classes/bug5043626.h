#ifndef _bug5043626_h_
#define _bug5043626_h_
//$ class bug5043626
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Document;
		}
	}
}

class $export bug5043626 : public ::java::lang::Object {
	$class(bug5043626, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug5043626();
	void init$();
	static void createAndShowGUI();
	static $String* getText();
	static void main($StringArray* args);
	static ::javax::swing::text::Document* doc;
	static ::java::awt::Robot* robot;
	static ::javax::swing::JFrame* frame;
};

#endif // _bug5043626_h_