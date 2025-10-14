#ifndef _javax_swing_event_DocumentEvent_h_
#define _javax_swing_event_DocumentEvent_h_
//$ interface javax.swing.event.DocumentEvent
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent$ElementChange;
			class DocumentEvent$EventType;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Document;
			class Element;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export DocumentEvent : public ::java::lang::Object {
	$interface(DocumentEvent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::swing::event::DocumentEvent$ElementChange* getChange(::javax::swing::text::Element* elem) {return nullptr;}
	virtual ::javax::swing::text::Document* getDocument() {return nullptr;}
	virtual int32_t getLength() {return 0;}
	virtual int32_t getOffset() {return 0;}
	virtual ::javax::swing::event::DocumentEvent$EventType* getType() {return nullptr;}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_DocumentEvent_h_