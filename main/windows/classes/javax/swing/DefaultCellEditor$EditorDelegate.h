#ifndef _javax_swing_DefaultCellEditor$EditorDelegate_h_
#define _javax_swing_DefaultCellEditor$EditorDelegate_h_
//$ class javax.swing.DefaultCellEditor$EditorDelegate
//$ extends java.awt.event.ActionListener
//$ implements java.awt.event.ItemListener,java.io.Serializable

#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemListener.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ItemEvent;
		}
	}
}
namespace java {
	namespace util {
		class EventObject;
	}
}
namespace javax {
	namespace swing {
		class DefaultCellEditor;
	}
}

namespace javax {
	namespace swing {

class $export DefaultCellEditor$EditorDelegate : public ::java::awt::event::ActionListener, public ::java::awt::event::ItemListener, public ::java::io::Serializable {
	$class(DefaultCellEditor$EditorDelegate, $NO_CLASS_INIT, ::java::awt::event::ActionListener, ::java::awt::event::ItemListener, ::java::io::Serializable)
public:
	DefaultCellEditor$EditorDelegate();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::DefaultCellEditor* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void cancelCellEditing();
	virtual $Object* getCellEditorValue();
	virtual bool isCellEditable(::java::util::EventObject* anEvent);
	virtual void itemStateChanged(::java::awt::event::ItemEvent* e) override;
	virtual void setValue(Object$* value);
	virtual bool shouldSelectCell(::java::util::EventObject* anEvent);
	virtual bool startCellEditing(::java::util::EventObject* anEvent);
	virtual bool stopCellEditing();
	virtual $String* toString() override;
	::javax::swing::DefaultCellEditor* this$0 = nullptr;
	$Object* value = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_DefaultCellEditor$EditorDelegate_h_