#ifndef _javax_swing_plaf_basic_BasicInternalFrameUI$InternalFramePropertyChangeListener_h_
#define _javax_swing_plaf_basic_BasicInternalFrameUI$InternalFramePropertyChangeListener_h_
//$ class javax.swing.plaf.basic.BasicInternalFrameUI$InternalFramePropertyChangeListener
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
			namespace basic {
				class BasicInternalFrameUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicInternalFrameUI$InternalFramePropertyChangeListener : public ::java::beans::PropertyChangeListener {
	$class(BasicInternalFrameUI$InternalFramePropertyChangeListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	BasicInternalFrameUI$InternalFramePropertyChangeListener();
	void init$(::javax::swing::plaf::basic::BasicInternalFrameUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	::javax::swing::plaf::basic::BasicInternalFrameUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicInternalFrameUI$InternalFramePropertyChangeListener_h_