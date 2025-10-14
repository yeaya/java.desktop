#ifndef _javax_swing_text_DefaultStyledDocument$StyleChangeHandler_h_
#define _javax_swing_text_DefaultStyledDocument$StyleChangeHandler_h_
//$ class javax.swing.text.DefaultStyledDocument$StyleChangeHandler
//$ extends javax.swing.text.DefaultStyledDocument$AbstractChangeHandler

#include <javax/swing/text/DefaultStyledDocument$AbstractChangeHandler.h>

namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class DefaultStyledDocument;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export DefaultStyledDocument$StyleChangeHandler : public ::javax::swing::text::DefaultStyledDocument$AbstractChangeHandler {
	$class(DefaultStyledDocument$StyleChangeHandler, $NO_CLASS_INIT, ::javax::swing::text::DefaultStyledDocument$AbstractChangeHandler)
public:
	DefaultStyledDocument$StyleChangeHandler();
	void init$(::javax::swing::text::DefaultStyledDocument* d);
	virtual void fireStateChanged(::javax::swing::text::DefaultStyledDocument* d, ::javax::swing::event::ChangeEvent* e) override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultStyledDocument$StyleChangeHandler_h_