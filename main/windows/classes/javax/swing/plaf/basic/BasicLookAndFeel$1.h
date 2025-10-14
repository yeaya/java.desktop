#ifndef _javax_swing_plaf_basic_BasicLookAndFeel$1_h_
#define _javax_swing_plaf_basic_BasicLookAndFeel$1_h_
//$ class javax.swing.plaf.basic.BasicLookAndFeel$1
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
				class BasicLookAndFeel;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicLookAndFeel$1 : public ::java::beans::PropertyChangeListener {
	$class(BasicLookAndFeel$1, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	BasicLookAndFeel$1();
	void init$(::javax::swing::plaf::basic::BasicLookAndFeel* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* prpChg) override;
	::javax::swing::plaf::basic::BasicLookAndFeel* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicLookAndFeel$1_h_