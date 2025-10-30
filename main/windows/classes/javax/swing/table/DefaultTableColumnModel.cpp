#include <javax/swing/table/DefaultTableColumnModel.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/util/Enumeration.h>
#include <java/util/EventListener.h>
#include <java/util/Vector.h>
#include <javax/swing/DefaultListSelectionModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/event/TableColumnModelEvent.h>
#include <javax/swing/event/TableColumnModelListener.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

using $EventListenerArray = $Array<::java::util::EventListener>;
using $TableColumnModelListenerArray = $Array<::javax::swing::event::TableColumnModelListener>;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $EventListener = ::java::util::EventListener;
using $Vector = ::java::util::Vector;
using $DefaultListSelectionModel = ::javax::swing::DefaultListSelectionModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $TableColumnModelEvent = ::javax::swing::event::TableColumnModelEvent;
using $TableColumnModelListener = ::javax::swing::event::TableColumnModelListener;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

namespace javax {
	namespace swing {
		namespace table {

$FieldInfo _DefaultTableColumnModel_FieldInfo_[] = {
	{"tableColumns", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/table/TableColumn;>;", $PROTECTED, $field(DefaultTableColumnModel, tableColumns)},
	{"selectionModel", "Ljavax/swing/ListSelectionModel;", nullptr, $PROTECTED, $field(DefaultTableColumnModel, selectionModel)},
	{"columnMargin", "I", nullptr, $PROTECTED, $field(DefaultTableColumnModel, columnMargin)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(DefaultTableColumnModel, listenerList)},
	{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultTableColumnModel, changeEvent)},
	{"columnSelectionAllowed", "Z", nullptr, $PROTECTED, $field(DefaultTableColumnModel, columnSelectionAllowed)},
	{"totalColumnWidth", "I", nullptr, $PROTECTED, $field(DefaultTableColumnModel, totalColumnWidth)},
	{}
};

$MethodInfo _DefaultTableColumnModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTableColumnModel::*)()>(&DefaultTableColumnModel::init$))},
	{"addColumn", "(Ljavax/swing/table/TableColumn;)V", nullptr, $PUBLIC},
	{"addColumnModelListener", "(Ljavax/swing/event/TableColumnModelListener;)V", nullptr, $PUBLIC},
	{"createSelectionModel", "()Ljavax/swing/ListSelectionModel;", nullptr, $PROTECTED},
	{"fireColumnAdded", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PROTECTED},
	{"fireColumnMarginChanged", "()V", nullptr, $PROTECTED},
	{"fireColumnMoved", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PROTECTED},
	{"fireColumnRemoved", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PROTECTED},
	{"fireColumnSelectionChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PROTECTED},
	{"getColumn", "(I)Ljavax/swing/table/TableColumn;", nullptr, $PUBLIC},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getColumnIndex", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getColumnIndexAtX", "(I)I", nullptr, $PUBLIC},
	{"getColumnMargin", "()I", nullptr, $PUBLIC},
	{"getColumnModelListeners", "()[Ljavax/swing/event/TableColumnModelListener;", nullptr, $PUBLIC},
	{"getColumnSelectionAllowed", "()Z", nullptr, $PUBLIC},
	{"getColumns", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/swing/table/TableColumn;>;", $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getSelectedColumnCount", "()I", nullptr, $PUBLIC},
	{"getSelectedColumns", "()[I", nullptr, $PUBLIC},
	{"getSelectionModel", "()Ljavax/swing/ListSelectionModel;", nullptr, $PUBLIC},
	{"getTotalColumnWidth", "()I", nullptr, $PUBLIC},
	{"invalidateWidthCache", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultTableColumnModel::*)()>(&DefaultTableColumnModel::invalidateWidthCache))},
	{"moveColumn", "(II)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"recalcWidthCache", "()V", nullptr, $PROTECTED},
	{"removeColumn", "(Ljavax/swing/table/TableColumn;)V", nullptr, $PUBLIC},
	{"removeColumnModelListener", "(Ljavax/swing/event/TableColumnModelListener;)V", nullptr, $PUBLIC},
	{"setColumnMargin", "(I)V", nullptr, $PUBLIC},
	{"setColumnSelectionAllowed", "(Z)V", nullptr, $PUBLIC},
	{"setSelectionModel", "(Ljavax/swing/ListSelectionModel;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DefaultTableColumnModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.table.DefaultTableColumnModel",
	"java.lang.Object",
	"javax.swing.table.TableColumnModel,java.beans.PropertyChangeListener,javax.swing.event.ListSelectionListener,java.io.Serializable",
	_DefaultTableColumnModel_FieldInfo_,
	_DefaultTableColumnModel_MethodInfo_
};

$Object* allocate$DefaultTableColumnModel($Class* clazz) {
	return $of($alloc(DefaultTableColumnModel));
}

int32_t DefaultTableColumnModel::hashCode() {
	 return this->$TableColumnModel::hashCode();
}

bool DefaultTableColumnModel::equals(Object$* arg0) {
	 return this->$TableColumnModel::equals(arg0);
}

$Object* DefaultTableColumnModel::clone() {
	 return this->$TableColumnModel::clone();
}

$String* DefaultTableColumnModel::toString() {
	 return this->$TableColumnModel::toString();
}

void DefaultTableColumnModel::finalize() {
	this->$TableColumnModel::finalize();
}

void DefaultTableColumnModel::init$() {
	$set(this, listenerList, $new($EventListenerList));
	$set(this, changeEvent, nullptr);
	$set(this, tableColumns, $new($Vector));
	setSelectionModel($(createSelectionModel()));
	setColumnMargin(1);
	invalidateWidthCache();
	setColumnSelectionAllowed(false);
}

void DefaultTableColumnModel::addColumn($TableColumn* aColumn) {
	if (aColumn == nullptr) {
		$throwNew($IllegalArgumentException, "Object is null"_s);
	}
	$nc(this->tableColumns)->addElement(aColumn);
	$nc(aColumn)->addPropertyChangeListener(this);
	invalidateWidthCache();
	fireColumnAdded($$new($TableColumnModelEvent, this, 0, getColumnCount() - 1));
}

void DefaultTableColumnModel::removeColumn($TableColumn* column) {
	int32_t columnIndex = $nc(this->tableColumns)->indexOf(column);
	if (columnIndex != -1) {
		if (this->selectionModel != nullptr) {
			$nc(this->selectionModel)->removeIndexInterval(columnIndex, columnIndex);
		}
		$nc(column)->removePropertyChangeListener(this);
		$nc(this->tableColumns)->removeElementAt(columnIndex);
		invalidateWidthCache();
		fireColumnRemoved($$new($TableColumnModelEvent, this, columnIndex, 0));
	}
}

void DefaultTableColumnModel::moveColumn(int32_t columnIndex, int32_t newIndex) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = (columnIndex < 0) || (columnIndex >= getColumnCount()) || (newIndex < 0);
	if (var$0 || (newIndex >= getColumnCount())) {
		$throwNew($IllegalArgumentException, "moveColumn() - Index out of range"_s);
	}
	$var($TableColumn, aColumn, nullptr);
	if (columnIndex == newIndex) {
		fireColumnMoved($$new($TableColumnModelEvent, this, columnIndex, newIndex));
		return;
	}
	$assign(aColumn, $cast($TableColumn, $nc(this->tableColumns)->elementAt(columnIndex)));
	$nc(this->tableColumns)->removeElementAt(columnIndex);
	bool selected = $nc(this->selectionModel)->isSelectedIndex(columnIndex);
	$nc(this->selectionModel)->removeIndexInterval(columnIndex, columnIndex);
	$nc(this->tableColumns)->insertElementAt(aColumn, newIndex);
	$nc(this->selectionModel)->insertIndexInterval(newIndex, 1, true);
	if (selected) {
		$nc(this->selectionModel)->addSelectionInterval(newIndex, newIndex);
	} else {
		$nc(this->selectionModel)->removeSelectionInterval(newIndex, newIndex);
	}
	fireColumnMoved($$new($TableColumnModelEvent, this, columnIndex, newIndex));
}

void DefaultTableColumnModel::setColumnMargin(int32_t newMargin) {
	if (newMargin != this->columnMargin) {
		this->columnMargin = newMargin;
		fireColumnMarginChanged();
	}
}

int32_t DefaultTableColumnModel::getColumnCount() {
	return $nc(this->tableColumns)->size();
}

$Enumeration* DefaultTableColumnModel::getColumns() {
	return $nc(this->tableColumns)->elements();
}

int32_t DefaultTableColumnModel::getColumnIndex(Object$* identifier) {
	$useLocalCurrentObjectStackCache();
	if (identifier == nullptr) {
		$throwNew($IllegalArgumentException, "Identifier is null"_s);
	}
	$var($Enumeration, enumeration, getColumns());
	$var($TableColumn, aColumn, nullptr);
	int32_t index = 0;
	while ($nc(enumeration)->hasMoreElements()) {
		$assign(aColumn, $cast($TableColumn, enumeration->nextElement()));
		if ($nc($of(identifier))->equals($($nc(aColumn)->getIdentifier()))) {
			return index;
		}
		++index;
	}
	$throwNew($IllegalArgumentException, "Identifier not found"_s);
}

$TableColumn* DefaultTableColumnModel::getColumn(int32_t columnIndex) {
	return $cast($TableColumn, $nc(this->tableColumns)->elementAt(columnIndex));
}

int32_t DefaultTableColumnModel::getColumnMargin() {
	return this->columnMargin;
}

int32_t DefaultTableColumnModel::getColumnIndexAtX(int32_t x) {
	$useLocalCurrentObjectStackCache();
	if (x < 0) {
		return -1;
	}
	int32_t cc = getColumnCount();
	for (int32_t column = 0; column < cc; ++column) {
		x = x - $nc($(getColumn(column)))->getWidth();
		if (x < 0) {
			return column;
		}
	}
	return -1;
}

int32_t DefaultTableColumnModel::getTotalColumnWidth() {
	if (this->totalColumnWidth == -1) {
		recalcWidthCache();
	}
	return this->totalColumnWidth;
}

void DefaultTableColumnModel::setSelectionModel($ListSelectionModel* newModel) {
	if (newModel == nullptr) {
		$throwNew($IllegalArgumentException, "Cannot set a null SelectionModel"_s);
	}
	$var($ListSelectionModel, oldModel, this->selectionModel);
	if (newModel != oldModel) {
		if (oldModel != nullptr) {
			oldModel->removeListSelectionListener(this);
		}
		$set(this, selectionModel, newModel);
		$nc(newModel)->addListSelectionListener(this);
	}
}

$ListSelectionModel* DefaultTableColumnModel::getSelectionModel() {
	return this->selectionModel;
}

void DefaultTableColumnModel::setColumnSelectionAllowed(bool flag) {
	this->columnSelectionAllowed = flag;
}

bool DefaultTableColumnModel::getColumnSelectionAllowed() {
	return this->columnSelectionAllowed;
}

$ints* DefaultTableColumnModel::getSelectedColumns() {
	if (this->selectionModel != nullptr) {
		return $nc(this->selectionModel)->getSelectedIndices();
	}
	return $new($ints, 0);
}

int32_t DefaultTableColumnModel::getSelectedColumnCount() {
	if (this->selectionModel != nullptr) {
		return $nc(this->selectionModel)->getSelectedItemsCount();
	}
	return 0;
}

void DefaultTableColumnModel::addColumnModelListener($TableColumnModelListener* x) {
	$load($TableColumnModelListener);
	$nc(this->listenerList)->add($TableColumnModelListener::class$, x);
}

void DefaultTableColumnModel::removeColumnModelListener($TableColumnModelListener* x) {
	$load($TableColumnModelListener);
	$nc(this->listenerList)->remove($TableColumnModelListener::class$, x);
}

$TableColumnModelListenerArray* DefaultTableColumnModel::getColumnModelListeners() {
	$load($TableColumnModelListener);
	return $fcast($TableColumnModelListenerArray, $nc(this->listenerList)->getListeners($TableColumnModelListener::class$));
}

void DefaultTableColumnModel::fireColumnAdded($TableColumnModelEvent* e) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TableColumnModelListener);
		if ($equals(listeners->get(i), $TableColumnModelListener::class$)) {
			$nc(($cast($TableColumnModelListener, listeners->get(i + 1))))->columnAdded(e);
		}
	}
}

void DefaultTableColumnModel::fireColumnRemoved($TableColumnModelEvent* e) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TableColumnModelListener);
		if ($equals(listeners->get(i), $TableColumnModelListener::class$)) {
			$nc(($cast($TableColumnModelListener, listeners->get(i + 1))))->columnRemoved(e);
		}
	}
}

void DefaultTableColumnModel::fireColumnMoved($TableColumnModelEvent* e) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TableColumnModelListener);
		if ($equals(listeners->get(i), $TableColumnModelListener::class$)) {
			$nc(($cast($TableColumnModelListener, listeners->get(i + 1))))->columnMoved(e);
		}
	}
}

void DefaultTableColumnModel::fireColumnSelectionChanged($ListSelectionEvent* e) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TableColumnModelListener);
		if ($equals(listeners->get(i), $TableColumnModelListener::class$)) {
			$nc(($cast($TableColumnModelListener, listeners->get(i + 1))))->columnSelectionChanged(e);
		}
	}
}

void DefaultTableColumnModel::fireColumnMarginChanged() {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TableColumnModelListener);
		if ($equals(listeners->get(i), $TableColumnModelListener::class$)) {
			if (this->changeEvent == nullptr) {
				$set(this, changeEvent, $new($ChangeEvent, this));
			}
			$nc(($cast($TableColumnModelListener, listeners->get(i + 1))))->columnMarginChanged(this->changeEvent);
		}
	}
}

$EventListenerArray* DefaultTableColumnModel::getListeners($Class* listenerType) {
	return $nc(this->listenerList)->getListeners(listenerType);
}

void DefaultTableColumnModel::propertyChange($PropertyChangeEvent* evt) {
	$var($String, name, $nc(evt)->getPropertyName());
	if (name == "width"_s || name == "preferredWidth"_s) {
		invalidateWidthCache();
		fireColumnMarginChanged();
	}
}

void DefaultTableColumnModel::valueChanged($ListSelectionEvent* e) {
	fireColumnSelectionChanged(e);
}

$ListSelectionModel* DefaultTableColumnModel::createSelectionModel() {
	return $new($DefaultListSelectionModel);
}

void DefaultTableColumnModel::recalcWidthCache() {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, enumeration, getColumns());
	this->totalColumnWidth = 0;
	while ($nc(enumeration)->hasMoreElements()) {
		this->totalColumnWidth += $nc(($cast($TableColumn, $(enumeration->nextElement()))))->getWidth();
	}
}

void DefaultTableColumnModel::invalidateWidthCache() {
	this->totalColumnWidth = -1;
}

DefaultTableColumnModel::DefaultTableColumnModel() {
}

$Class* DefaultTableColumnModel::load$($String* name, bool initialize) {
	$loadClass(DefaultTableColumnModel, name, initialize, &_DefaultTableColumnModel_ClassInfo_, allocate$DefaultTableColumnModel);
	return class$;
}

$Class* DefaultTableColumnModel::class$ = nullptr;

		} // table
	} // swing
} // javax