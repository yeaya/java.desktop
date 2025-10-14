#ifndef _javax_swing_plaf_basic_BasicTreeUI$NodeDimensionsHandler_h_
#define _javax_swing_plaf_basic_BasicTreeUI$NodeDimensionsHandler_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$NodeDimensionsHandler
//$ extends javax.swing.tree.AbstractLayoutCache$NodeDimensions

#include <javax/swing/tree/AbstractLayoutCache$NodeDimensions.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTreeUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTreeUI$NodeDimensionsHandler : public ::javax::swing::tree::AbstractLayoutCache$NodeDimensions {
	$class(BasicTreeUI$NodeDimensionsHandler, $NO_CLASS_INIT, ::javax::swing::tree::AbstractLayoutCache$NodeDimensions)
public:
	BasicTreeUI$NodeDimensionsHandler();
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0);
	virtual ::java::awt::Rectangle* getNodeDimensions(Object$* value, int32_t row, int32_t depth, bool expanded, ::java::awt::Rectangle* size) override;
	virtual int32_t getRowX(int32_t row, int32_t depth);
	::javax::swing::plaf::basic::BasicTreeUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$NodeDimensionsHandler_h_