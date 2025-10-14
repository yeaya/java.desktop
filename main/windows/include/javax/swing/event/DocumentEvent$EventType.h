#ifndef _javax_swing_event_DocumentEvent$EventType_h_
#define _javax_swing_event_DocumentEvent$EventType_h_
//$ class javax.swing.event.DocumentEvent$EventType
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CHANGE")
#undef CHANGE
#pragma push_macro("INSERT")
#undef INSERT
#pragma push_macro("REMOVE")
#undef REMOVE

namespace javax {
	namespace swing {
		namespace event {

class $import DocumentEvent$EventType : public ::java::lang::Object {
	$class(DocumentEvent$EventType, 0, ::java::lang::Object)
public:
	DocumentEvent$EventType();
	void init$($String* s);
	virtual $String* toString() override;
	static ::javax::swing::event::DocumentEvent$EventType* INSERT;
	static ::javax::swing::event::DocumentEvent$EventType* REMOVE;
	static ::javax::swing::event::DocumentEvent$EventType* CHANGE;
	$String* typeString = nullptr;
};

		} // event
	} // swing
} // javax

#pragma pop_macro("CHANGE")
#pragma pop_macro("INSERT")
#pragma pop_macro("REMOVE")

#endif // _javax_swing_event_DocumentEvent$EventType_h_