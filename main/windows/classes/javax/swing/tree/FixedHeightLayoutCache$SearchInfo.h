#ifndef _javax_swing_tree_FixedHeightLayoutCache$SearchInfo_h_
#define _javax_swing_tree_FixedHeightLayoutCache$SearchInfo_h_
//$ class javax.swing.tree.FixedHeightLayoutCache$SearchInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace tree {
			class FixedHeightLayoutCache;
			class FixedHeightLayoutCache$FHTreeStateNode;
			class TreePath;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class FixedHeightLayoutCache$SearchInfo : public ::java::lang::Object {
	$class(FixedHeightLayoutCache$SearchInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FixedHeightLayoutCache$SearchInfo();
	void init$(::javax::swing::tree::FixedHeightLayoutCache* this$0);
	virtual ::javax::swing::tree::TreePath* getPath();
	::javax::swing::tree::FixedHeightLayoutCache* this$0 = nullptr;
	::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode* node = nullptr;
	bool isNodeParentNode = false;
	int32_t childIndex = 0;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_FixedHeightLayoutCache$SearchInfo_h_