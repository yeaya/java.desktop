#include <javax/swing/JTable$AccessibleJTable.h>

#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleExtendedTable.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/accessibility/AccessibleTable.h>
#include <javax/accessibility/AccessibleTableModelChange.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable$AccessibleJTable$AccessibleJTableCell.h>
#include <javax/swing/JTable$AccessibleJTable$AccessibleJTableModelChange.h>
#include <javax/swing/JTable$AccessibleJTable$AccessibleTableHeader.h>
#include <javax/swing/JTable.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/event/CellEditorListener.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/event/TableColumnModelEvent.h>
#include <javax/swing/event/TableColumnModelListener.h>
#include <javax/swing/event/TableModelEvent.h>
#include <javax/swing/event/TableModelListener.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableColumnModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY
#undef ACCESSIBLE_SELECTION_PROPERTY
#undef ACCESSIBLE_TABLE_CAPTION_CHANGED
#undef ACCESSIBLE_TABLE_MODEL_CHANGED
#undef ACCESSIBLE_TABLE_SUMMARY_CHANGED
#undef ACCESSIBLE_VISIBLE_DATA_PROPERTY
#undef ALL_COLUMNS
#undef DELETE
#undef INSERT
#undef IN_ROW
#undef NOT_IN_ROW
#undef TABLE

using $AccessibleArray = $Array<::javax::accessibility::Accessible>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleExtendedTable = ::javax::accessibility::AccessibleExtendedTable;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $AccessibleTable = ::javax::accessibility::AccessibleTable;
using $AccessibleTableModelChange = ::javax::accessibility::AccessibleTableModelChange;
using $CellEditor = ::javax::swing::CellEditor;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JTable = ::javax::swing::JTable;
using $JTable$AccessibleJTable$AccessibleJTableCell = ::javax::swing::JTable$AccessibleJTable$AccessibleJTableCell;
using $JTable$AccessibleJTable$AccessibleJTableModelChange = ::javax::swing::JTable$AccessibleJTable$AccessibleJTableModelChange;
using $JTable$AccessibleJTable$AccessibleTableHeader = ::javax::swing::JTable$AccessibleJTable$AccessibleTableHeader;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $CellEditorListener = ::javax::swing::event::CellEditorListener;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $TableColumnModelEvent = ::javax::swing::event::TableColumnModelEvent;
using $TableColumnModelListener = ::javax::swing::event::TableColumnModelListener;
using $TableModelEvent = ::javax::swing::event::TableModelEvent;
using $TableModelListener = ::javax::swing::event::TableModelListener;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;
using $TableModel = ::javax::swing::table::TableModel;

namespace javax {
	namespace swing {

$FieldInfo _JTable$AccessibleJTable_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$AccessibleJTable, this$0)},
	{"previousFocusedRow", "I", nullptr, 0, $field(JTable$AccessibleJTable, previousFocusedRow)},
	{"previousFocusedCol", "I", nullptr, 0, $field(JTable$AccessibleJTable, previousFocusedCol)},
	{"caption", "Ljavax/accessibility/Accessible;", nullptr, $PRIVATE, $field(JTable$AccessibleJTable, caption)},
	{"summary", "Ljavax/accessibility/Accessible;", nullptr, $PRIVATE, $field(JTable$AccessibleJTable, summary)},
	{"rowDescription", "[Ljavax/accessibility/Accessible;", nullptr, $PRIVATE, $field(JTable$AccessibleJTable, rowDescription)},
	{"columnDescription", "[Ljavax/accessibility/Accessible;", nullptr, $PRIVATE, $field(JTable$AccessibleJTable, columnDescription)},
	{}
};

$MethodInfo _JTable$AccessibleJTable_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JTable;)V", nullptr, $PROTECTED, $method(static_cast<void(JTable$AccessibleJTable::*)($JTable*)>(&JTable$AccessibleJTable::init$))},
	{"addAccessibleSelection", "(I)V", nullptr, $PUBLIC},
	{"clearAccessibleSelection", "()V", nullptr, $PUBLIC},
	{"columnAdded", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PUBLIC},
	{"columnMarginChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"columnMoved", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PUBLIC},
	{"columnRemoved", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PUBLIC},
	{"columnSelectionChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{"editingCanceled", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"editingStopped", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleAt", "(II)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleCaption", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleColumn", "(I)I", nullptr, $PUBLIC},
	{"getAccessibleColumnAtIndex", "(I)I", nullptr, $PUBLIC},
	{"getAccessibleColumnCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleColumnDescription", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleColumnExtentAt", "(II)I", nullptr, $PUBLIC},
	{"getAccessibleColumnHeader", "()Ljavax/accessibility/AccessibleTable;", nullptr, $PUBLIC},
	{"getAccessibleIndex", "(II)I", nullptr, $PUBLIC},
	{"getAccessibleIndexAt", "(II)I", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleRow", "(I)I", nullptr, $PUBLIC},
	{"getAccessibleRowAtIndex", "(I)I", nullptr, $PUBLIC},
	{"getAccessibleRowCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleRowDescription", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleRowExtentAt", "(II)I", nullptr, $PUBLIC},
	{"getAccessibleRowHeader", "()Ljavax/accessibility/AccessibleTable;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleSelectionCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleSummary", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleTable", "()Ljavax/accessibility/AccessibleTable;", nullptr, $PUBLIC},
	{"getSelectedAccessibleColumns", "()[I", nullptr, $PUBLIC},
	{"getSelectedAccessibleRows", "()[I", nullptr, $PUBLIC},
	{"isAccessibleChildSelected", "(I)Z", nullptr, $PUBLIC},
	{"isAccessibleColumnSelected", "(I)Z", nullptr, $PUBLIC},
	{"isAccessibleRowSelected", "(I)Z", nullptr, $PUBLIC},
	{"isAccessibleSelected", "(II)Z", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"removeAccessibleSelection", "(I)V", nullptr, $PUBLIC},
	{"selectAllAccessibleSelection", "()V", nullptr, $PUBLIC},
	{"setAccessibleCaption", "(Ljavax/accessibility/Accessible;)V", nullptr, $PUBLIC},
	{"setAccessibleColumnDescription", "(ILjavax/accessibility/Accessible;)V", nullptr, $PUBLIC},
	{"setAccessibleColumnHeader", "(Ljavax/accessibility/AccessibleTable;)V", nullptr, $PUBLIC},
	{"setAccessibleRowDescription", "(ILjavax/accessibility/Accessible;)V", nullptr, $PUBLIC},
	{"setAccessibleRowHeader", "(Ljavax/accessibility/AccessibleTable;)V", nullptr, $PUBLIC},
	{"setAccessibleSummary", "(Ljavax/accessibility/Accessible;)V", nullptr, $PUBLIC},
	{"tableChanged", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PUBLIC},
	{"tableRowsDeleted", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PUBLIC},
	{"tableRowsInserted", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTable$AccessibleJTable_InnerClassesInfo_[] = {
	{"javax.swing.JTable$AccessibleJTable", "javax.swing.JTable", "AccessibleJTable", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{"javax.swing.JTable$AccessibleJTable$AccessibleJTableHeaderCell", "javax.swing.JTable$AccessibleJTable", "AccessibleJTableHeaderCell", $PRIVATE},
	{"javax.swing.JTable$AccessibleJTable$AccessibleJTableCell", "javax.swing.JTable$AccessibleJTable", "AccessibleJTableCell", $PROTECTED},
	{"javax.swing.JTable$AccessibleJTable$AccessibleTableHeader", "javax.swing.JTable$AccessibleJTable", "AccessibleTableHeader", $PRIVATE},
	{"javax.swing.JTable$AccessibleJTable$AccessibleJTableModelChange", "javax.swing.JTable$AccessibleJTable", "AccessibleJTableModelChange", $PROTECTED},
	{}
};

$ClassInfo _JTable$AccessibleJTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTable$AccessibleJTable",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.accessibility.AccessibleSelection,javax.swing.event.ListSelectionListener,javax.swing.event.TableModelListener,javax.swing.event.TableColumnModelListener,javax.swing.event.CellEditorListener,java.beans.PropertyChangeListener,javax.accessibility.AccessibleExtendedTable",
	_JTable$AccessibleJTable_FieldInfo_,
	_JTable$AccessibleJTable_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$AccessibleJTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$AccessibleJTable($Class* clazz) {
	return $of($alloc(JTable$AccessibleJTable));
}

int32_t JTable$AccessibleJTable::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JTable$AccessibleJTable::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JTable$AccessibleJTable::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JTable$AccessibleJTable::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JTable$AccessibleJTable::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JTable$AccessibleJTable::init$($JTable* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
	this$0->putClientProperty("JTable.forceAutoStartsEdit"_s, $($Boolean::valueOf(true)));
	this$0->addPropertyChangeListener(this);
	$nc($(this$0->getSelectionModel()))->addListSelectionListener(this);
	$var($TableColumnModel, tcm, this$0->getColumnModel());
	$nc(tcm)->addColumnModelListener(this);
	$nc($(tcm->getSelectionModel()))->addListSelectionListener(this);
	$nc($(this$0->getModel()))->addTableModelListener(this);
	this->previousFocusedRow = $nc($(this$0->getSelectionModel()))->getLeadSelectionIndex();
	this->previousFocusedCol = $nc($($nc($(this$0->getColumnModel()))->getSelectionModel()))->getLeadSelectionIndex();
}

void JTable$AccessibleJTable::propertyChange($PropertyChangeEvent* e) {
	$var($String, name, $nc(e)->getPropertyName());
	$var($Object, oldValue, e->getOldValue());
	$var($Object, newValue, e->getNewValue());
	if ($nc(name)->compareTo("model"_s) == 0) {
		if (oldValue != nullptr && $instanceOf($TableModel, oldValue)) {
			$nc(($cast($TableModel, oldValue)))->removeTableModelListener(this);
		}
		if (newValue != nullptr && $instanceOf($TableModel, newValue)) {
			$nc(($cast($TableModel, newValue)))->addTableModelListener(this);
		}
	} else if (name->compareTo("selectionModel"_s) == 0) {
		$var($Object, source, e->getSource());
		if ($equals(source, this->this$0)) {
			if (oldValue != nullptr && $instanceOf($ListSelectionModel, oldValue)) {
				$nc(($cast($ListSelectionModel, oldValue)))->removeListSelectionListener(this);
			}
			if (newValue != nullptr && $instanceOf($ListSelectionModel, newValue)) {
				$nc(($cast($ListSelectionModel, newValue)))->addListSelectionListener(this);
			}
		} else if ($equals(source, this->this$0->getColumnModel())) {
			if (oldValue != nullptr && $instanceOf($ListSelectionModel, oldValue)) {
				$nc(($cast($ListSelectionModel, oldValue)))->removeListSelectionListener(this);
			}
			if (newValue != nullptr && $instanceOf($ListSelectionModel, newValue)) {
				$nc(($cast($ListSelectionModel, newValue)))->addListSelectionListener(this);
			}
		} else {
		}
	} else if (name->compareTo("columnModel"_s) == 0) {
		if (oldValue != nullptr && $instanceOf($TableColumnModel, oldValue)) {
			$var($TableColumnModel, tcm, $cast($TableColumnModel, oldValue));
			tcm->removeColumnModelListener(this);
			$nc($(tcm->getSelectionModel()))->removeListSelectionListener(this);
		}
		if (newValue != nullptr && $instanceOf($TableColumnModel, newValue)) {
			$var($TableColumnModel, tcm, $cast($TableColumnModel, newValue));
			tcm->addColumnModelListener(this);
			$nc($(tcm->getSelectionModel()))->addListSelectionListener(this);
		}
	} else if (name->compareTo("tableCellEditor"_s) == 0) {
		if (oldValue != nullptr && $instanceOf($TableCellEditor, oldValue)) {
			$nc(($cast($TableCellEditor, oldValue)))->removeCellEditorListener(this);
		}
		if (newValue != nullptr && $instanceOf($TableCellEditor, newValue)) {
			$nc(($cast($TableCellEditor, newValue)))->addCellEditorListener(this);
		}
	}
}

void JTable$AccessibleJTable::tableChanged($TableModelEvent* e) {
	$init($AccessibleContext);
	firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, nullptr, nullptr);
	if (e != nullptr) {
		int32_t firstColumn = e->getColumn();
		int32_t lastColumn = e->getColumn();
		if (firstColumn == $TableModelEvent::ALL_COLUMNS) {
			firstColumn = 0;
			lastColumn = this->this$0->getColumnCount() - 1;
		}
		int32_t var$0 = e->getType();
		int32_t var$1 = e->getFirstRow();
		$var($JTable$AccessibleJTable$AccessibleJTableModelChange, change, $new($JTable$AccessibleJTable$AccessibleJTableModelChange, this, var$0, var$1, e->getLastRow(), firstColumn, lastColumn));
		firePropertyChange($AccessibleContext::ACCESSIBLE_TABLE_MODEL_CHANGED, nullptr, change);
	}
}

void JTable$AccessibleJTable::tableRowsInserted($TableModelEvent* e) {
	$init($AccessibleContext);
	firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, nullptr, nullptr);
	int32_t firstColumn = $nc(e)->getColumn();
	int32_t lastColumn = e->getColumn();
	if (firstColumn == $TableModelEvent::ALL_COLUMNS) {
		firstColumn = 0;
		lastColumn = this->this$0->getColumnCount() - 1;
	}
	int32_t var$0 = e->getType();
	int32_t var$1 = e->getFirstRow();
	$var($JTable$AccessibleJTable$AccessibleJTableModelChange, change, $new($JTable$AccessibleJTable$AccessibleJTableModelChange, this, var$0, var$1, e->getLastRow(), firstColumn, lastColumn));
	firePropertyChange($AccessibleContext::ACCESSIBLE_TABLE_MODEL_CHANGED, nullptr, change);
}

void JTable$AccessibleJTable::tableRowsDeleted($TableModelEvent* e) {
	$init($AccessibleContext);
	firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, nullptr, nullptr);
	int32_t firstColumn = $nc(e)->getColumn();
	int32_t lastColumn = e->getColumn();
	if (firstColumn == $TableModelEvent::ALL_COLUMNS) {
		firstColumn = 0;
		lastColumn = this->this$0->getColumnCount() - 1;
	}
	int32_t var$0 = e->getType();
	int32_t var$1 = e->getFirstRow();
	$var($JTable$AccessibleJTable$AccessibleJTableModelChange, change, $new($JTable$AccessibleJTable$AccessibleJTableModelChange, this, var$0, var$1, e->getLastRow(), firstColumn, lastColumn));
	firePropertyChange($AccessibleContext::ACCESSIBLE_TABLE_MODEL_CHANGED, nullptr, change);
}

void JTable$AccessibleJTable::columnAdded($TableColumnModelEvent* e) {
	$init($AccessibleContext);
	firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, nullptr, nullptr);
	int32_t type = $AccessibleTableModelChange::INSERT;
	int32_t var$0 = type;
	int32_t var$1 = $nc(e)->getFromIndex();
	$var($JTable$AccessibleJTable$AccessibleJTableModelChange, change, $new($JTable$AccessibleJTable$AccessibleJTableModelChange, this, var$0, 0, 0, var$1, e->getToIndex()));
	firePropertyChange($AccessibleContext::ACCESSIBLE_TABLE_MODEL_CHANGED, nullptr, change);
}

void JTable$AccessibleJTable::columnRemoved($TableColumnModelEvent* e) {
	$init($AccessibleContext);
	firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, nullptr, nullptr);
	int32_t type = $AccessibleTableModelChange::DELETE;
	int32_t var$0 = type;
	int32_t var$1 = $nc(e)->getFromIndex();
	$var($JTable$AccessibleJTable$AccessibleJTableModelChange, change, $new($JTable$AccessibleJTable$AccessibleJTableModelChange, this, var$0, 0, 0, var$1, e->getToIndex()));
	firePropertyChange($AccessibleContext::ACCESSIBLE_TABLE_MODEL_CHANGED, nullptr, change);
}

void JTable$AccessibleJTable::columnMoved($TableColumnModelEvent* e) {
	$init($AccessibleContext);
	firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, nullptr, nullptr);
	int32_t type = $AccessibleTableModelChange::DELETE;
	int32_t var$0 = type;
	int32_t var$1 = $nc(e)->getFromIndex();
	$var($JTable$AccessibleJTable$AccessibleJTableModelChange, change, $new($JTable$AccessibleJTable$AccessibleJTableModelChange, this, var$0, 0, 0, var$1, e->getFromIndex()));
	firePropertyChange($AccessibleContext::ACCESSIBLE_TABLE_MODEL_CHANGED, nullptr, change);
	int32_t type2 = $AccessibleTableModelChange::INSERT;
	int32_t var$2 = type2;
	int32_t var$3 = $nc(e)->getToIndex();
	$var($JTable$AccessibleJTable$AccessibleJTableModelChange, change2, $new($JTable$AccessibleJTable$AccessibleJTableModelChange, this, var$2, 0, 0, var$3, e->getToIndex()));
	firePropertyChange($AccessibleContext::ACCESSIBLE_TABLE_MODEL_CHANGED, nullptr, change2);
}

void JTable$AccessibleJTable::columnMarginChanged($ChangeEvent* e) {
	$init($AccessibleContext);
	firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, nullptr, nullptr);
}

void JTable$AccessibleJTable::columnSelectionChanged($ListSelectionEvent* e) {
}

void JTable$AccessibleJTable::editingStopped($ChangeEvent* e) {
	$init($AccessibleContext);
	firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, nullptr, nullptr);
}

void JTable$AccessibleJTable::editingCanceled($ChangeEvent* e) {
}

void JTable$AccessibleJTable::valueChanged($ListSelectionEvent* e) {
	$init($AccessibleContext);
	$var($String, var$0, $AccessibleContext::ACCESSIBLE_SELECTION_PROPERTY);
	$var($Object, var$1, $of($Boolean::valueOf(false)));
	firePropertyChange(var$0, var$1, $($Boolean::valueOf(true)));
	int32_t focusedRow = $nc($(this->this$0->getSelectionModel()))->getLeadSelectionIndex();
	int32_t focusedCol = $nc($($nc($(this->this$0->getColumnModel()))->getSelectionModel()))->getLeadSelectionIndex();
	if (focusedRow != this->previousFocusedRow || focusedCol != this->previousFocusedCol) {
		$var($Accessible, oldA, getAccessibleAt(this->previousFocusedRow, this->previousFocusedCol));
		$var($Accessible, newA, getAccessibleAt(focusedRow, focusedCol));
		firePropertyChange($AccessibleContext::ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY, oldA, newA);
		this->previousFocusedRow = focusedRow;
		this->previousFocusedCol = focusedCol;
	}
}

$AccessibleSelection* JTable$AccessibleJTable::getAccessibleSelection() {
	return this;
}

$AccessibleRole* JTable$AccessibleJTable::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::TABLE;
}

$Accessible* JTable$AccessibleJTable::getAccessibleAt($Point* p) {
	int32_t column = this->this$0->columnAtPoint(p);
	int32_t row = this->this$0->rowAtPoint(p);
	if ((column != -1) && (row != -1)) {
		bool var$0 = row == this->this$0->getEditingRow();
		if (var$0 && column == this->this$0->getEditingColumn()) {
			$var($Component, editor, this->this$0->getEditorComponent());
			if ($instanceOf($Accessible, editor)) {
				return $cast($Accessible, editor);
			}
		}
		return $new($JTable$AccessibleJTable$AccessibleJTableCell, this, this->this$0, row, column, getAccessibleIndexAt(row, column));
	}
	return nullptr;
}

int32_t JTable$AccessibleJTable::getAccessibleChildrenCount() {
	int32_t var$0 = this->this$0->getColumnCount();
	return (var$0 * this->this$0->getRowCount());
}

$Accessible* JTable$AccessibleJTable::getAccessibleChild(int32_t i) {
	if (i < 0 || i >= getAccessibleChildrenCount()) {
		return nullptr;
	} else {
		int32_t column = getAccessibleColumnAtIndex(i);
		int32_t row = getAccessibleRowAtIndex(i);
		bool var$0 = row == this->this$0->getEditingRow();
		if (var$0 && column == this->this$0->getEditingColumn()) {
			$var($Component, editor, this->this$0->getEditorComponent());
			if ($instanceOf($Accessible, editor)) {
				return $cast($Accessible, editor);
			}
		}
		return $new($JTable$AccessibleJTable$AccessibleJTableCell, this, this->this$0, row, column, getAccessibleIndexAt(row, column));
	}
}

int32_t JTable$AccessibleJTable::getAccessibleSelectionCount() {
	int32_t rowsSel = this->this$0->getSelectedRowCount();
	int32_t colsSel = this->this$0->getSelectedColumnCount();
	if (this->this$0->cellSelectionEnabled) {
		return rowsSel * colsSel;
	} else {
		bool var$1 = this->this$0->getRowSelectionAllowed();
		if (var$1 && this->this$0->getColumnSelectionAllowed()) {
			int32_t var$2 = rowsSel * this->this$0->getColumnCount();
			return var$2 + colsSel * this->this$0->getRowCount() - rowsSel * colsSel;
		} else if (this->this$0->getRowSelectionAllowed()) {
			return rowsSel * this->this$0->getColumnCount();
		} else if (this->this$0->getColumnSelectionAllowed()) {
			return colsSel * this->this$0->getRowCount();
		} else {
			return 0;
		}
	}
}

$Accessible* JTable$AccessibleJTable::getAccessibleSelection(int32_t i) {
	if (i < 0 || i > getAccessibleSelectionCount()) {
		return nullptr;
	}
	int32_t rowsSel = this->this$0->getSelectedRowCount();
	int32_t colsSel = this->this$0->getSelectedColumnCount();
	$var($ints, rowIndicies, this->this$0->getSelectedRows());
	$var($ints, colIndicies, this->this$0->getSelectedColumns());
	int32_t ttlCols = this->this$0->getColumnCount();
	int32_t ttlRows = this->this$0->getRowCount();
	int32_t r = 0;
	int32_t c = 0;
	if (this->this$0->cellSelectionEnabled) {
		r = $nc(rowIndicies)->get($div(i, colsSel));
		c = $nc(colIndicies)->get($mod(i, colsSel));
		return getAccessibleChild((r * ttlCols) + c);
	} else {
		bool var$1 = this->this$0->getRowSelectionAllowed();
		if (var$1 && this->this$0->getColumnSelectionAllowed()) {
			int32_t curIndex = i;
			int32_t IN_ROW = 0;
			int32_t NOT_IN_ROW = 1;
			int32_t state = ($nc(rowIndicies)->get(0) == 0 ? IN_ROW : NOT_IN_ROW);
			int32_t j = 0;
			int32_t prevRow = -1;
			while (j < $nc(rowIndicies)->length) {
				do {
					if (state == IN_ROW) {
						goto case$0;
					}
					if (state == NOT_IN_ROW) {
						goto case$1;
					}
					break;
case$0:
					// IN_ROW
					{
						if (curIndex < ttlCols) {
							c = $mod(curIndex, ttlCols);
							r = rowIndicies->get(j);
							return getAccessibleChild((r * ttlCols) + c);
						} else {
							curIndex -= ttlCols;
						}
						if (j + 1 == rowIndicies->length || rowIndicies->get(j) != rowIndicies->get(j + 1) - 1) {
							state = NOT_IN_ROW;
							prevRow = rowIndicies->get(j);
						}
						++j;
						break;
					}
case$1:
					// NOT_IN_ROW
					{
						if (curIndex < (colsSel * (rowIndicies->get(j) - (prevRow == -1 ? 0 : (prevRow + 1))))) {
							c = $nc(colIndicies)->get($mod(curIndex, colsSel));
							r = (j > 0 ? rowIndicies->get(j - 1) + 1 : 0) + $div(curIndex, colsSel);
							return getAccessibleChild((r * ttlCols) + c);
						} else {
							curIndex -= colsSel * (rowIndicies->get(j) - (prevRow == -1 ? 0 : (prevRow + 1)));
						}
						state = IN_ROW;
						break;
					}
				} while (false);
			}
			if (curIndex < (colsSel * (ttlRows - (prevRow == -1 ? 0 : (prevRow + 1))))) {
				c = $nc(colIndicies)->get($mod(curIndex, colsSel));
				r = $nc(rowIndicies)->get(j - 1) + $div(curIndex, colsSel) + 1;
				return getAccessibleChild((r * ttlCols) + c);
			} else {
			}
		} else if (this->this$0->getRowSelectionAllowed()) {
			c = $mod(i, ttlCols);
			r = $nc(rowIndicies)->get($div(i, ttlCols));
			return getAccessibleChild((r * ttlCols) + c);
		} else if (this->this$0->getColumnSelectionAllowed()) {
			c = $nc(colIndicies)->get($mod(i, colsSel));
			r = $div(i, colsSel);
			return getAccessibleChild((r * ttlCols) + c);
		}
	}
	return nullptr;
}

bool JTable$AccessibleJTable::isAccessibleChildSelected(int32_t i) {
	int32_t column = getAccessibleColumnAtIndex(i);
	int32_t row = getAccessibleRowAtIndex(i);
	return this->this$0->isCellSelected(row, column);
}

void JTable$AccessibleJTable::addAccessibleSelection(int32_t i) {
	int32_t column = getAccessibleColumnAtIndex(i);
	int32_t row = getAccessibleRowAtIndex(i);
	this->this$0->changeSelection(row, column, true, false);
}

void JTable$AccessibleJTable::removeAccessibleSelection(int32_t i) {
	if (this->this$0->cellSelectionEnabled) {
		int32_t column = getAccessibleColumnAtIndex(i);
		int32_t row = getAccessibleRowAtIndex(i);
		this->this$0->removeRowSelectionInterval(row, row);
		this->this$0->removeColumnSelectionInterval(column, column);
	}
}

void JTable$AccessibleJTable::clearAccessibleSelection() {
	this->this$0->clearSelection();
}

void JTable$AccessibleJTable::selectAllAccessibleSelection() {
	if (this->this$0->cellSelectionEnabled) {
		this->this$0->selectAll();
	}
}

int32_t JTable$AccessibleJTable::getAccessibleRow(int32_t index) {
	return getAccessibleRowAtIndex(index);
}

int32_t JTable$AccessibleJTable::getAccessibleColumn(int32_t index) {
	return getAccessibleColumnAtIndex(index);
}

int32_t JTable$AccessibleJTable::getAccessibleIndex(int32_t r, int32_t c) {
	return getAccessibleIndexAt(r, c);
}

$AccessibleTable* JTable$AccessibleJTable::getAccessibleTable() {
	return this;
}

$Accessible* JTable$AccessibleJTable::getAccessibleCaption() {
	return this->caption;
}

void JTable$AccessibleJTable::setAccessibleCaption($Accessible* a) {
	$var($Accessible, oldCaption, this->caption);
	$set(this, caption, a);
	$init($AccessibleContext);
	firePropertyChange($AccessibleContext::ACCESSIBLE_TABLE_CAPTION_CHANGED, oldCaption, this->caption);
}

$Accessible* JTable$AccessibleJTable::getAccessibleSummary() {
	return this->summary;
}

void JTable$AccessibleJTable::setAccessibleSummary($Accessible* a) {
	$var($Accessible, oldSummary, this->summary);
	$set(this, summary, a);
	$init($AccessibleContext);
	firePropertyChange($AccessibleContext::ACCESSIBLE_TABLE_SUMMARY_CHANGED, oldSummary, this->summary);
}

int32_t JTable$AccessibleJTable::getAccessibleRowCount() {
	return this->this$0->getRowCount();
}

int32_t JTable$AccessibleJTable::getAccessibleColumnCount() {
	return this->this$0->getColumnCount();
}

$Accessible* JTable$AccessibleJTable::getAccessibleAt(int32_t r, int32_t c) {
	return getAccessibleChild((r * getAccessibleColumnCount()) + c);
}

int32_t JTable$AccessibleJTable::getAccessibleRowExtentAt(int32_t r, int32_t c) {
	return 1;
}

int32_t JTable$AccessibleJTable::getAccessibleColumnExtentAt(int32_t r, int32_t c) {
	return 1;
}

$AccessibleTable* JTable$AccessibleJTable::getAccessibleRowHeader() {
	return nullptr;
}

void JTable$AccessibleJTable::setAccessibleRowHeader($AccessibleTable* a) {
}

$AccessibleTable* JTable$AccessibleJTable::getAccessibleColumnHeader() {
	$var($JTableHeader, header, this->this$0->getTableHeader());
	return header == nullptr ? ($AccessibleTable*)nullptr : static_cast<$AccessibleTable*>($new($JTable$AccessibleJTable$AccessibleTableHeader, this, header));
}

void JTable$AccessibleJTable::setAccessibleColumnHeader($AccessibleTable* a) {
}

$Accessible* JTable$AccessibleJTable::getAccessibleRowDescription(int32_t r) {
	if (r < 0 || r >= getAccessibleRowCount()) {
		$throwNew($IllegalArgumentException, $($Integer::toString(r)));
	}
	if (this->rowDescription == nullptr) {
		return nullptr;
	} else {
		return $nc(this->rowDescription)->get(r);
	}
}

void JTable$AccessibleJTable::setAccessibleRowDescription(int32_t r, $Accessible* a) {
	if (r < 0 || r >= getAccessibleRowCount()) {
		$throwNew($IllegalArgumentException, $($Integer::toString(r)));
	}
	if (this->rowDescription == nullptr) {
		int32_t numRows = getAccessibleRowCount();
		$set(this, rowDescription, $new($AccessibleArray, numRows));
	}
	$nc(this->rowDescription)->set(r, a);
}

$Accessible* JTable$AccessibleJTable::getAccessibleColumnDescription(int32_t c) {
	if (c < 0 || c >= getAccessibleColumnCount()) {
		$throwNew($IllegalArgumentException, $($Integer::toString(c)));
	}
	if (this->columnDescription == nullptr) {
		return nullptr;
	} else {
		return $nc(this->columnDescription)->get(c);
	}
}

void JTable$AccessibleJTable::setAccessibleColumnDescription(int32_t c, $Accessible* a) {
	if (c < 0 || c >= getAccessibleColumnCount()) {
		$throwNew($IllegalArgumentException, $($Integer::toString(c)));
	}
	if (this->columnDescription == nullptr) {
		int32_t numColumns = getAccessibleColumnCount();
		$set(this, columnDescription, $new($AccessibleArray, numColumns));
	}
	$nc(this->columnDescription)->set(c, a);
}

bool JTable$AccessibleJTable::isAccessibleSelected(int32_t r, int32_t c) {
	return this->this$0->isCellSelected(r, c);
}

bool JTable$AccessibleJTable::isAccessibleRowSelected(int32_t r) {
	return this->this$0->isRowSelected(r);
}

bool JTable$AccessibleJTable::isAccessibleColumnSelected(int32_t c) {
	return this->this$0->isColumnSelected(c);
}

$ints* JTable$AccessibleJTable::getSelectedAccessibleRows() {
	return this->this$0->getSelectedRows();
}

$ints* JTable$AccessibleJTable::getSelectedAccessibleColumns() {
	return this->this$0->getSelectedColumns();
}

int32_t JTable$AccessibleJTable::getAccessibleRowAtIndex(int32_t i) {
	int32_t columnCount = getAccessibleColumnCount();
	if (columnCount == 0) {
		return -1;
	} else {
		return ($div(i, columnCount));
	}
}

int32_t JTable$AccessibleJTable::getAccessibleColumnAtIndex(int32_t i) {
	int32_t columnCount = getAccessibleColumnCount();
	if (columnCount == 0) {
		return -1;
	} else {
		return ($mod(i, columnCount));
	}
}

int32_t JTable$AccessibleJTable::getAccessibleIndexAt(int32_t r, int32_t c) {
	return ((r * getAccessibleColumnCount()) + c);
}

JTable$AccessibleJTable::JTable$AccessibleJTable() {
}

$Class* JTable$AccessibleJTable::load$($String* name, bool initialize) {
	$loadClass(JTable$AccessibleJTable, name, initialize, &_JTable$AccessibleJTable_ClassInfo_, allocate$JTable$AccessibleJTable);
	return class$;
}

$Class* JTable$AccessibleJTable::class$ = nullptr;

	} // swing
} // javax