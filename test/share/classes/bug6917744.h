#ifndef _bug6917744_h_
#define _bug6917744_h_
//$ class bug6917744
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JEditorPane;
		class JFrame;
		class JScrollPane;
	}
}

class $export bug6917744 : public ::java::lang::Object {
	$class(bug6917744, 0, ::java::lang::Object)
public:
	bug6917744();
	void init$();
	static void blockTillDisplayed(::javax::swing::JComponent* comp);
	static void lambda$blockTillDisplayed$0(::javax::swing::JComponent* comp);
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JEditorPane* editorPane;
	static ::javax::swing::JScrollPane* scrollPane;
	static ::java::awt::Robot* robot;
	static ::java::awt::Point* p;
};

#endif // _bug6917744_h_