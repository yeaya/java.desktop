#ifndef _LastNodeLowerHalfDrop_h_
#define _LastNodeLowerHalfDrop_h_
//$ class LastNodeLowerHalfDrop
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JScrollPane;
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class DefaultMutableTreeNode;
			class TreeModel;
		}
	}
}

class $export LastNodeLowerHalfDrop : public ::java::lang::Object {
	$class(LastNodeLowerHalfDrop, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LastNodeLowerHalfDrop();
	void init$();
	static void cleanUp();
	void expandTree(::javax::swing::JTree* tree);
	::javax::swing::JScrollPane* getContent();
	static ::javax::swing::tree::TreeModel* getTreeModel();
	static void main($StringArray* args);
	static void testCase(::javax::swing::tree::DefaultMutableTreeNode* drag, ::javax::swing::tree::DefaultMutableTreeNode* drop, float shift);
	static ::javax::swing::tree::DefaultMutableTreeNode* b1;
	static ::javax::swing::tree::DefaultMutableTreeNode* b2;
	static ::javax::swing::tree::DefaultMutableTreeNode* c;
	static ::javax::swing::JTree* jTree;
	static ::javax::swing::tree::DefaultMutableTreeNode* a;
	static ::javax::swing::tree::DefaultMutableTreeNode* b;
	static ::javax::swing::tree::DefaultMutableTreeNode* a1;
	static ::java::awt::Point* dragPoint;
	static ::java::awt::Point* dropPoint;
	static ::javax::swing::JFrame* f;
	static ::javax::swing::tree::DefaultMutableTreeNode* c1;
	static ::javax::swing::tree::DefaultMutableTreeNode* root;
};

#endif // _LastNodeLowerHalfDrop_h_