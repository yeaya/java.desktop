#ifndef _LastNodeLowerHalfDrop$3_h_
#define _LastNodeLowerHalfDrop$3_h_
//$ class LastNodeLowerHalfDrop$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		namespace tree {
			class DefaultMutableTreeNode;
		}
	}
}

class LastNodeLowerHalfDrop$3 : public ::java::lang::Runnable {
	$class(LastNodeLowerHalfDrop$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	LastNodeLowerHalfDrop$3();
	void init$(::javax::swing::tree::DefaultMutableTreeNode* val$drag, ::javax::swing::tree::DefaultMutableTreeNode* val$drop, float val$shift);
	virtual void run() override;
	float val$shift = 0.0;
	::javax::swing::tree::DefaultMutableTreeNode* val$drop = nullptr;
	::javax::swing::tree::DefaultMutableTreeNode* val$drag = nullptr;
};

#endif // _LastNodeLowerHalfDrop$3_h_