#ifndef _javax_swing_text_html_AccessibleHTML$PropertyChangeHandler_h_
#define _javax_swing_text_html_AccessibleHTML$PropertyChangeHandler_h_
//$ class javax.swing.text.html.AccessibleHTML$PropertyChangeHandler
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class AccessibleHTML;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class AccessibleHTML$PropertyChangeHandler : public ::java::beans::PropertyChangeListener {
	$class(AccessibleHTML$PropertyChangeHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	AccessibleHTML$PropertyChangeHandler();
	void init$(::javax::swing::text::html::AccessibleHTML* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	::javax::swing::text::html::AccessibleHTML* this$0 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_AccessibleHTML$PropertyChangeHandler_h_