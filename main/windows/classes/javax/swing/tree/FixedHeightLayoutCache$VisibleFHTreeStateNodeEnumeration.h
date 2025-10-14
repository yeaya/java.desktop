#ifndef _javax_swing_tree_FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration_h_
#define _javax_swing_tree_FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration_h_
//$ class javax.swing.tree.FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace javax {
	namespace swing {
		namespace tree {
			class FixedHeightLayoutCache;
			class FixedHeightLayoutCache$FHTreeStateNode;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration : public ::java::util::Enumeration {
	$class(FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration();
	void init$(::javax::swing::tree::FixedHeightLayoutCache* this$0, ::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode* node);
	void init$(::javax::swing::tree::FixedHeightLayoutCache* this$0, ::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode* parent, int32_t startIndex);
	virtual bool findNextValidParent();
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	virtual bool updateNextIndex();
	virtual void updateNextObject();
	::javax::swing::tree::FixedHeightLayoutCache* this$0 = nullptr;
	::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode* parent = nullptr;
	int32_t nextIndex = 0;
	int32_t childCount = 0;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration_h_