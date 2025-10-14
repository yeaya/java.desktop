#ifndef _javax_swing_plaf_metal_MetalInternalFrameTitlePane$MetalPropertyChangeHandler_h_
#define _javax_swing_plaf_metal_MetalInternalFrameTitlePane$MetalPropertyChangeHandler_h_
//$ class javax.swing.plaf.metal.MetalInternalFrameTitlePane$MetalPropertyChangeHandler
//$ extends javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler

#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$PropertyChangeHandler.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalInternalFrameTitlePane;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalInternalFrameTitlePane$MetalPropertyChangeHandler : public ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$PropertyChangeHandler {
	$class(MetalInternalFrameTitlePane$MetalPropertyChangeHandler, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$PropertyChangeHandler)
public:
	MetalInternalFrameTitlePane$MetalPropertyChangeHandler();
	void init$(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	::javax::swing::plaf::metal::MetalInternalFrameTitlePane* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalInternalFrameTitlePane$MetalPropertyChangeHandler_h_