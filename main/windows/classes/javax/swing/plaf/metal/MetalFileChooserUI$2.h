#ifndef _javax_swing_plaf_metal_MetalFileChooserUI$2_h_
#define _javax_swing_plaf_metal_MetalFileChooserUI$2_h_
//$ class javax.swing.plaf.metal.MetalFileChooserUI$2
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
				class MetalFileChooserUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalFileChooserUI$2 : public ::java::beans::PropertyChangeListener {
	$class(MetalFileChooserUI$2, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	MetalFileChooserUI$2();
	void init$(::javax::swing::plaf::metal::MetalFileChooserUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::javax::swing::plaf::metal::MetalFileChooserUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalFileChooserUI$2_h_