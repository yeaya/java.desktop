#ifndef _javax_swing_plaf_metal_MetalDesktopIconUI$TitleListener_h_
#define _javax_swing_plaf_metal_MetalDesktopIconUI$TitleListener_h_
//$ class javax.swing.plaf.metal.MetalDesktopIconUI$TitleListener
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
				class MetalDesktopIconUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalDesktopIconUI$TitleListener : public ::java::beans::PropertyChangeListener {
	$class(MetalDesktopIconUI$TitleListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	MetalDesktopIconUI$TitleListener();
	void init$(::javax::swing::plaf::metal::MetalDesktopIconUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::javax::swing::plaf::metal::MetalDesktopIconUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalDesktopIconUI$TitleListener_h_