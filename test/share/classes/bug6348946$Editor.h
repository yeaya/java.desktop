#ifndef _bug6348946$Editor_h_
#define _bug6348946$Editor_h_
//$ class bug6348946$Editor
//$ extends javax.swing.AbstractCellEditor
//$ implements javax.swing.table.TableCellEditor

#include <javax/swing/AbstractCellEditor.h>
#include <javax/swing/table/TableCellEditor.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JSlider;
		class JTable;
	}
}

class bug6348946$Editor : public ::javax::swing::AbstractCellEditor, public ::javax::swing::table::TableCellEditor {
	$class(bug6348946$Editor, $NO_CLASS_INIT, ::javax::swing::AbstractCellEditor, ::javax::swing::table::TableCellEditor)
public:
	bug6348946$Editor();
	virtual void addCellEditorListener(::javax::swing::event::CellEditorListener* arg0) override;
	virtual void cancelCellEditing() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Object* getCellEditorValue() override;
	virtual ::java::awt::Component* getTableCellEditorComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, int32_t row, int32_t col) override;
	virtual bool isCellEditable(::java::util::EventObject* arg0) override;
	virtual void removeCellEditorListener(::javax::swing::event::CellEditorListener* arg0) override;
	virtual bool shouldSelectCell(::java::util::EventObject* arg0) override;
	virtual bool stopCellEditing() override;
	virtual $String* toString() override;
	::javax::swing::JSlider* slider = nullptr;
};

#endif // _bug6348946$Editor_h_