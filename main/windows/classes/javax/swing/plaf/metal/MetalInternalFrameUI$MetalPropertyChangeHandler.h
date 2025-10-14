#ifndef _javax_swing_plaf_metal_MetalInternalFrameUI$MetalPropertyChangeHandler_h_
#define _javax_swing_plaf_metal_MetalInternalFrameUI$MetalPropertyChangeHandler_h_
//$ class javax.swing.plaf.metal.MetalInternalFrameUI$MetalPropertyChangeHandler
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalInternalFrameUI$MetalPropertyChangeHandler : public ::java::beans::PropertyChangeListener {
	$class(MetalInternalFrameUI$MetalPropertyChangeHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	MetalInternalFrameUI$MetalPropertyChangeHandler();
	void init$();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalInternalFrameUI$MetalPropertyChangeHandler_h_