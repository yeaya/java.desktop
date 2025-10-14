#ifndef _javax_swing_JTable$AccessibleJTable_h_
#define _javax_swing_JTable$AccessibleJTable_h_
//$ class javax.swing.JTable$AccessibleJTable
//$ extends javax.swing.JComponent$AccessibleJComponent
//$ implements javax.accessibility.AccessibleSelection,javax.swing.event.ListSelectionListener,javax.swing.event.TableModelListener,javax.swing.event.TableColumnModelListener,javax.swing.event.CellEditorListener,java.beans.PropertyChangeListener,javax.accessibility.AccessibleExtendedTable

#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <javax/accessibility/AccessibleExtendedTable.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/event/CellEditorListener.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/event/TableColumnModelListener.h>
#include <javax/swing/event/TableModelListener.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleRole;
		class AccessibleTable;
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
			class ListSelectionEvent;
			class TableColumnModelEvent;
			class TableModelEvent;
		}
	}
}

namespace javax {
	namespace swing {

class $import JTable$AccessibleJTable : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::accessibility::AccessibleSelection, public ::javax::swing::event::ListSelectionListener, public ::javax::swing::event::TableModelListener, public ::javax::swing::event::TableColumnModelListener, public ::javax::swing::event::CellEditorListener, public ::java::beans::PropertyChangeListener, public ::javax::accessibility::AccessibleExtendedTable {
	$class(JTable$AccessibleJTable, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::accessibility::AccessibleSelection, ::javax::swing::event::ListSelectionListener, ::javax::swing::event::TableModelListener, ::javax::swing::event::TableColumnModelListener, ::javax::swing::event::CellEditorListener, ::java::beans::PropertyChangeListener, ::javax::accessibility::AccessibleExtendedTable)
public:
	JTable$AccessibleJTable();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JTable* this$0);
	virtual void addAccessibleSelection(int32_t i) override;
	virtual void clearAccessibleSelection() override;
	virtual void columnAdded(::javax::swing::event::TableColumnModelEvent* e) override;
	virtual void columnMarginChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual void columnMoved(::javax::swing::event::TableColumnModelEvent* e) override;
	virtual void columnRemoved(::javax::swing::event::TableColumnModelEvent* e) override;
	virtual void columnSelectionChanged(::javax::swing::event::ListSelectionEvent* e) override;
	virtual void editingCanceled(::javax::swing::event::ChangeEvent* e) override;
	virtual void editingStopped(::javax::swing::event::ChangeEvent* e) override;
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleAt(int32_t r, int32_t c) override;
	virtual ::javax::accessibility::Accessible* getAccessibleCaption() override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual int32_t getAccessibleColumn(int32_t index) override;
	virtual int32_t getAccessibleColumnAtIndex(int32_t i);
	virtual int32_t getAccessibleColumnCount() override;
	virtual ::javax::accessibility::Accessible* getAccessibleColumnDescription(int32_t c) override;
	virtual int32_t getAccessibleColumnExtentAt(int32_t r, int32_t c) override;
	virtual ::javax::accessibility::AccessibleTable* getAccessibleColumnHeader() override;
	virtual int32_t getAccessibleIndex(int32_t r, int32_t c) override;
	virtual int32_t getAccessibleIndexAt(int32_t r, int32_t c);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual int32_t getAccessibleRow(int32_t index) override;
	virtual int32_t getAccessibleRowAtIndex(int32_t i);
	virtual int32_t getAccessibleRowCount() override;
	virtual ::javax::accessibility::Accessible* getAccessibleRowDescription(int32_t r) override;
	virtual int32_t getAccessibleRowExtentAt(int32_t r, int32_t c) override;
	virtual ::javax::accessibility::AccessibleTable* getAccessibleRowHeader() override;
	virtual ::javax::accessibility::AccessibleSelection* getAccessibleSelection() override;
	virtual ::javax::accessibility::Accessible* getAccessibleSelection(int32_t i) override;
	virtual int32_t getAccessibleSelectionCount() override;
	virtual ::javax::accessibility::Accessible* getAccessibleSummary() override;
	virtual ::javax::accessibility::AccessibleTable* getAccessibleTable() override;
	virtual $ints* getSelectedAccessibleColumns() override;
	virtual $ints* getSelectedAccessibleRows() override;
	virtual bool isAccessibleChildSelected(int32_t i) override;
	virtual bool isAccessibleColumnSelected(int32_t c) override;
	virtual bool isAccessibleRowSelected(int32_t r) override;
	virtual bool isAccessibleSelected(int32_t r, int32_t c) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void removeAccessibleSelection(int32_t i) override;
	virtual void selectAllAccessibleSelection() override;
	virtual void setAccessibleCaption(::javax::accessibility::Accessible* a) override;
	virtual void setAccessibleColumnDescription(int32_t c, ::javax::accessibility::Accessible* a) override;
	virtual void setAccessibleColumnHeader(::javax::accessibility::AccessibleTable* a) override;
	virtual void setAccessibleRowDescription(int32_t r, ::javax::accessibility::Accessible* a) override;
	virtual void setAccessibleRowHeader(::javax::accessibility::AccessibleTable* a) override;
	virtual void setAccessibleSummary(::javax::accessibility::Accessible* a) override;
	virtual void tableChanged(::javax::swing::event::TableModelEvent* e) override;
	virtual void tableRowsDeleted(::javax::swing::event::TableModelEvent* e);
	virtual void tableRowsInserted(::javax::swing::event::TableModelEvent* e);
	virtual $String* toString() override;
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e) override;
	::javax::swing::JTable* this$0 = nullptr;
	int32_t previousFocusedRow = 0;
	int32_t previousFocusedCol = 0;
	::javax::accessibility::Accessible* caption = nullptr;
	::javax::accessibility::Accessible* summary = nullptr;
	$Array<::javax::accessibility::Accessible>* rowDescription = nullptr;
	$Array<::javax::accessibility::Accessible>* columnDescription = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$AccessibleJTable_h_