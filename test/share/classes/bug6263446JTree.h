#ifndef _bug6263446JTree_h_
#define _bug6263446JTree_h_
//$ class bug6263446JTree
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALL")
#undef ALL
#pragma push_macro("FIRST")
#undef FIRST
#pragma push_macro("SECOND")
#undef SECOND

namespace java {
	namespace awt {
		class Point;
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
			class TreeModel;
		}
	}
}

class $export bug6263446JTree : public ::java::lang::Object {
	$class(bug6263446JTree, 0, ::java::lang::Object)
public:
	bug6263446JTree();
	void init$();
	static void assertEditing();
	static void assertEditingNoTreeLock(bool editing);
	static void assertNotEditing();
	static void cancelCellEditing();
	static void checkSelectedText($String* sel);
	static void checkSelection($String* sel);
	static void click(int32_t times);
	static void createAndShowGUI();
	static ::javax::swing::tree::TreeModel* createTreeModel();
	static ::java::awt::Point* getClickPoint();
	static void lambda$main$0();
	static void main($StringArray* args);
	static void setClickCountToStart(int32_t clicks);
	static void startPathEditing();
	static $String* FIRST;
	static $String* SECOND;
	static $String* ALL;
	static ::javax::swing::JTree* tree;
	static ::java::awt::Robot* robot;
	static ::javax::swing::JFrame* frame;
};

#pragma pop_macro("ALL")
#pragma pop_macro("FIRST")
#pragma pop_macro("SECOND")

#endif // _bug6263446JTree_h_