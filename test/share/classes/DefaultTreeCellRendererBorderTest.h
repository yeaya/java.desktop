#ifndef _DefaultTreeCellRendererBorderTest_h_
#define _DefaultTreeCellRendererBorderTest_h_
//$ class DefaultTreeCellRendererBorderTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Insets;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class DefaultTreeCellRenderer;
		}
	}
}

class $export DefaultTreeCellRendererBorderTest : public ::java::lang::Object {
	$class(DefaultTreeCellRendererBorderTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultTreeCellRendererBorderTest();
	void init$();
	static void lambda$main$0();
	static void lambda$main$1();
	static void lambda$main$2();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTree* tree;
	static ::javax::swing::tree::DefaultTreeCellRenderer* treeCellRenderer;
	static ::java::awt::Robot* robot;
	static ::java::awt::Insets* margin1;
	static ::java::awt::Insets* margin2;
};

#endif // _DefaultTreeCellRendererBorderTest_h_