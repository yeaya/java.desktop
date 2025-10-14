#ifndef _javax_swing_DefaultCellEditor_h_
#define _javax_swing_DefaultCellEditor_h_
//$ class javax.swing.DefaultCellEditor
//$ extends javax.swing.AbstractCellEditor
//$ implements javax.swing.table.TableCellEditor,javax.swing.tree.TreeCellEditor

#include <javax/swing/AbstractCellEditor.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/tree/TreeCellEditor.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace util {
		class EventObject;
	}
}
namespace javax {
	namespace swing {
		class DefaultCellEditor$EditorDelegate;
		class JCheckBox;
		class JComboBox;
		class JComponent;
		class JTable;
		class JTextField;
		class JTree;
	}
}

namespace javax {
	namespace swing {

class $export DefaultCellEditor : public ::javax::swing::AbstractCellEditor, public ::javax::swing::table::TableCellEditor, public ::javax::swing::tree::TreeCellEditor {
	$class(DefaultCellEditor, $NO_CLASS_INIT, ::javax::swing::AbstractCellEditor, ::javax::swing::table::TableCellEditor, ::javax::swing::tree::TreeCellEditor)
public:
	DefaultCellEditor();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void addCellEditorListener(::javax::swing::event::CellEditorListener* l) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JTextField* textField);
	void init$(::javax::swing::JCheckBox* checkBox);
	void init$(::javax::swing::JComboBox* comboBox);
	virtual void cancelCellEditing() override;
	virtual $Object* getCellEditorValue() override;
	virtual int32_t getClickCountToStart();
	virtual ::java::awt::Component* getComponent();
	virtual ::java::awt::Component* getTableCellEditorComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, int32_t row, int32_t column) override;
	virtual ::java::awt::Component* getTreeCellEditorComponent(::javax::swing::JTree* tree, Object$* value, bool isSelected, bool expanded, bool leaf, int32_t row) override;
	virtual bool isCellEditable(::java::util::EventObject* anEvent) override;
	virtual void removeCellEditorListener(::javax::swing::event::CellEditorListener* l) override;
	virtual void setClickCountToStart(int32_t count);
	virtual bool shouldSelectCell(::java::util::EventObject* anEvent) override;
	virtual bool stopCellEditing() override;
	virtual $String* toString() override;
	::javax::swing::JComponent* editorComponent = nullptr;
	::javax::swing::DefaultCellEditor$EditorDelegate* delegate = nullptr;
	int32_t clickCountToStart = 0;
};

	} // swing
} // javax

#endif // _javax_swing_DefaultCellEditor_h_