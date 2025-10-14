#ifndef _javax_swing_text_DefaultStyledDocument$StyleContextChangeHandler_h_
#define _javax_swing_text_DefaultStyledDocument$StyleContextChangeHandler_h_
//$ class javax.swing.text.DefaultStyledDocument$StyleContextChangeHandler
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

class $export DefaultStyledDocument$StyleContextChangeHandler : public ::javax::swing::text::DefaultStyledDocument$AbstractChangeHandler {
	$class(DefaultStyledDocument$StyleContextChangeHandler, $NO_CLASS_INIT, ::javax::swing::text::DefaultStyledDocument$AbstractChangeHandler)
public:
	DefaultStyledDocument$StyleContextChangeHandler();
	void init$(::javax::swing::text::DefaultStyledDocument* d);
	virtual void fireStateChanged(::javax::swing::text::DefaultStyledDocument* d, ::javax::swing::event::ChangeEvent* e) override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultStyledDocument$StyleContextChangeHandler_h_