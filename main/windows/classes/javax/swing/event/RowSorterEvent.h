#ifndef _javax_swing_event_RowSorterEvent_h_
#define _javax_swing_event_RowSorterEvent_h_
//$ class javax.swing.event.RowSorterEvent
//$ extends java.util.EventObject

#include <java/lang/Array.h>
#include <java/util/EventObject.h>

namespace javax {
	namespace swing {
		class RowSorter;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class RowSorterEvent$Type;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export RowSorterEvent : public ::java::util::EventObject {
	$class(RowSorterEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	RowSorterEvent();
	void init$(::javax::swing::RowSorter* source);
	void init$(::javax::swing::RowSorter* source, ::javax::swing::event::RowSorterEvent$Type* type, $ints* previousRowIndexToModel);
	virtual int32_t convertPreviousRowIndexToModel(int32_t index);
	virtual int32_t getPreviousRowCount();
	virtual $Object* getSource() override;
	virtual ::javax::swing::event::RowSorterEvent$Type* getType();
	::javax::swing::event::RowSorterEvent$Type* type = nullptr;
	$ints* oldViewToModel = nullptr;
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_RowSorterEvent_h_