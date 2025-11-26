#ifndef _javax_swing_plaf_basic_BasicFileChooserUI$SelectionListener_h_
#define _javax_swing_plaf_basic_BasicFileChooserUI$SelectionListener_h_
//$ class javax.swing.plaf.basic.BasicFileChooserUI$SelectionListener
//$ extends javax.swing.event.ListSelectionListener

#include <javax/swing/event/ListSelectionListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class ListSelectionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicFileChooserUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicFileChooserUI$SelectionListener : public ::javax::swing::event::ListSelectionListener {
	$class(BasicFileChooserUI$SelectionListener, $NO_CLASS_INIT, ::javax::swing::event::ListSelectionListener)
public:
	BasicFileChooserUI$SelectionListener();
	void init$(::javax::swing::plaf::basic::BasicFileChooserUI* this$0);
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e) override;
	::javax::swing::plaf::basic::BasicFileChooserUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicFileChooserUI$SelectionListener_h_