#ifndef _javax_swing_CellEditor_h_
#define _javax_swing_CellEditor_h_
//$ interface javax.swing.CellEditor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class EventObject;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class CellEditorListener;
		}
	}
}

namespace javax {
	namespace swing {

class $import CellEditor : public ::java::lang::Object {
	$interface(CellEditor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addCellEditorListener(::javax::swing::event::CellEditorListener* l) {}
	virtual void cancelCellEditing() {}
	virtual $Object* getCellEditorValue() {return nullptr;}
	virtual bool isCellEditable(::java::util::EventObject* anEvent) {return false;}
	virtual void removeCellEditorListener(::javax::swing::event::CellEditorListener* l) {}
	virtual bool shouldSelectCell(::java::util::EventObject* anEvent) {return false;}
	virtual bool stopCellEditing() {return false;}
};

	} // swing
} // javax

#endif // _javax_swing_CellEditor_h_