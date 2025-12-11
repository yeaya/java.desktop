#ifndef _com_apple_laf_AquaFileChooserUI$2_h_
#define _com_apple_laf_AquaFileChooserUI$2_h_
//$ class com.apple.laf.AquaFileChooserUI$2
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$2 : public ::java::beans::PropertyChangeListener {
	$class(AquaFileChooserUI$2, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	AquaFileChooserUI$2();
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$2_h_