#ifndef _sun_swing_JLightweightFrame$2_h_
#define _sun_swing_JLightweightFrame$2_h_
//$ class sun.swing.JLightweightFrame$2
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace sun {
	namespace swing {
		class JLightweightFrame;
	}
}

namespace sun {
	namespace swing {

class JLightweightFrame$2 : public ::java::beans::PropertyChangeListener {
	$class(JLightweightFrame$2, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	JLightweightFrame$2();
	void init$(::sun::swing::JLightweightFrame* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::sun::swing::JLightweightFrame* this$0 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_JLightweightFrame$2_h_