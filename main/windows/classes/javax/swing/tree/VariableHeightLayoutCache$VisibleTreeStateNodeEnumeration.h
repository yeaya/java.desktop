#ifndef _javax_swing_tree_VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration_h_
#define _javax_swing_tree_VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration_h_
//$ class javax.swing.tree.VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace javax {
	namespace swing {
		namespace tree {
			class VariableHeightLayoutCache;
			class VariableHeightLayoutCache$TreeStateNode;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration : public ::java::util::Enumeration {
	$class(VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration();
	void init$(::javax::swing::tree::VariableHeightLayoutCache* this$0, ::javax::swing::tree::VariableHeightLayoutCache$TreeStateNode* node);
	void init$(::javax::swing::tree::VariableHeightLayoutCache* this$0, ::javax::swing::tree::VariableHeightLayoutCache$TreeStateNode* parent, int32_t startIndex);
	virtual bool findNextValidParent();
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	virtual bool updateNextIndex();
	virtual void updateNextObject();
	::javax::swing::tree::VariableHeightLayoutCache* this$0 = nullptr;
	::javax::swing::tree::VariableHeightLayoutCache$TreeStateNode* parent = nullptr;
	int32_t nextIndex = 0;
	int32_t childCount = 0;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration_h_