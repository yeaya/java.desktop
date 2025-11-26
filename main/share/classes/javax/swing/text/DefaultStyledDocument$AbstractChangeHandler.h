#ifndef _javax_swing_text_DefaultStyledDocument$AbstractChangeHandler_h_
#define _javax_swing_text_DefaultStyledDocument$AbstractChangeHandler_h_
//$ class javax.swing.text.DefaultStyledDocument$AbstractChangeHandler
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace util {
		class List;
		class Map;
	}
}
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
			class DefaultStyledDocument$AbstractChangeHandler$DocReference;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export DefaultStyledDocument$AbstractChangeHandler : public ::javax::swing::event::ChangeListener {
	$class(DefaultStyledDocument$AbstractChangeHandler, 0, ::javax::swing::event::ChangeListener)
public:
	DefaultStyledDocument$AbstractChangeHandler();
	void init$(::javax::swing::text::DefaultStyledDocument* d);
	virtual void fireStateChanged(::javax::swing::text::DefaultStyledDocument* d, ::javax::swing::event::ChangeEvent* e) {}
	static ::java::util::List* getStaleListeners(::javax::swing::event::ChangeListener* l);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	static ::java::util::Map* queueMap;
	::javax::swing::text::DefaultStyledDocument$AbstractChangeHandler$DocReference* doc = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultStyledDocument$AbstractChangeHandler_h_