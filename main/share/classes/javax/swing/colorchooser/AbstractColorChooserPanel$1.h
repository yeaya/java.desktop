#ifndef _javax_swing_colorchooser_AbstractColorChooserPanel$1_h_
#define _javax_swing_colorchooser_AbstractColorChooserPanel$1_h_
//$ class javax.swing.colorchooser.AbstractColorChooserPanel$1
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		namespace colorchooser {
			class AbstractColorChooserPanel;
		}
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class AbstractColorChooserPanel$1 : public ::java::beans::PropertyChangeListener {
	$class(AbstractColorChooserPanel$1, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	AbstractColorChooserPanel$1();
	void init$(::javax::swing::colorchooser::AbstractColorChooserPanel* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* event) override;
	::javax::swing::colorchooser::AbstractColorChooserPanel* this$0 = nullptr;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_AbstractColorChooserPanel$1_h_