#ifndef _javax_swing_tree_AbstractLayoutCache$NodeDimensions_h_
#define _javax_swing_tree_AbstractLayoutCache$NodeDimensions_h_
//$ class javax.swing.tree.AbstractLayoutCache$NodeDimensions
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $export AbstractLayoutCache$NodeDimensions : public ::java::lang::Object {
	$class(AbstractLayoutCache$NodeDimensions, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AbstractLayoutCache$NodeDimensions();
	void init$();
	virtual ::java::awt::Rectangle* getNodeDimensions(Object$* value, int32_t row, int32_t depth, bool expanded, ::java::awt::Rectangle* bounds) {return nullptr;}
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_AbstractLayoutCache$NodeDimensions_h_