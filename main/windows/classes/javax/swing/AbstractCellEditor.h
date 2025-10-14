#ifndef _javax_swing_AbstractCellEditor_h_
#define _javax_swing_AbstractCellEditor_h_
//$ class javax.swing.AbstractCellEditor
//$ extends javax.swing.CellEditor
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/CellEditor.h>

namespace java {
	namespace util {
		class EventObject;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class CellEditorListener;
			class ChangeEvent;
			class EventListenerList;
		}
	}
}

namespace javax {
	namespace swing {

class $export AbstractCellEditor : public ::javax::swing::CellEditor, public ::java::io::Serializable {
	$class(AbstractCellEditor, $NO_CLASS_INIT, ::javax::swing::CellEditor, ::java::io::Serializable)
public:
	AbstractCellEditor();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addCellEditorListener(::javax::swing::event::CellEditorListener* l) override;
	virtual void cancelCellEditing() override;
	virtual void fireEditingCanceled();
	virtual void fireEditingStopped();
	virtual $Array<::javax::swing::event::CellEditorListener>* getCellEditorListeners();
	virtual bool isCellEditable(::java::util::EventObject* e) override;
	virtual void removeCellEditorListener(::javax::swing::event::CellEditorListener* l) override;
	virtual bool shouldSelectCell(::java::util::EventObject* anEvent) override;
	virtual bool stopCellEditing() override;
	virtual $String* toString() override;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
	::javax::swing::event::ChangeEvent* changeEvent = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_AbstractCellEditor_h_