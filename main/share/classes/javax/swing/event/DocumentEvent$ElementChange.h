#ifndef _javax_swing_event_DocumentEvent$ElementChange_h_
#define _javax_swing_event_DocumentEvent$ElementChange_h_
//$ interface javax.swing.event.DocumentEvent$ElementChange
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export DocumentEvent$ElementChange : public ::java::lang::Object {
	$interface(DocumentEvent$ElementChange, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Array<::javax::swing::text::Element>* getChildrenAdded() {return nullptr;}
	virtual $Array<::javax::swing::text::Element>* getChildrenRemoved() {return nullptr;}
	virtual ::javax::swing::text::Element* getElement() {return nullptr;}
	virtual int32_t getIndex() {return 0;}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_DocumentEvent$ElementChange_h_