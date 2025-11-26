#ifndef _JTreeFocusTest_h_
#define _JTreeFocusTest_h_
//$ class JTreeFocusTest
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
		class JFrame;
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class DefaultMutableTreeNode;
		}
	}
}

class $export JTreeFocusTest : public ::java::lang::Object {
	$class(JTreeFocusTest, 0, ::java::lang::Object)
public:
	JTreeFocusTest();
	void init$();
	virtual void blockTillDisplayed(::javax::swing::JComponent* comp);
	static ::javax::swing::JTree* createTree();
	virtual void destroy();
	virtual bool isPassed();
	void lambda$blockTillDisplayed$0(::javax::swing::JComponent* comp);
	static void lambda$destroy$3();
	void lambda$new$1();
	static void lambda$new$2();
	static void main($StringArray* args);
	virtual void setPassed(bool passed);
	static ::javax::swing::tree::DefaultMutableTreeNode* root;
	::java::awt::Robot* robot = nullptr;
	static bool passed;
	bool rootSelected = false;
	bool keysTyped = false;
	$volatile(::java::awt::Point*) p = nullptr;
	static ::javax::swing::JFrame* fr;
	static $volatile(::javax::swing::JTree*) tree;
};

#endif // _JTreeFocusTest_h_