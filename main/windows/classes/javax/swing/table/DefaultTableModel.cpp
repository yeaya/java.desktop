#include <javax/swing/table/DefaultTableModel.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/swing/event/TableModelEvent.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $TableModelEvent = ::javax::swing::event::TableModelEvent;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

namespace javax {
	namespace swing {
		namespace table {

$FieldInfo _DefaultTableModel_FieldInfo_[] = {
	{"dataVector", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/util/Vector;>;", $PROTECTED, $field(DefaultTableModel, dataVector)},
	{"columnIdentifiers", "Ljava/util/Vector;", nullptr, $PROTECTED, $field(DefaultTableModel, columnIdentifiers)},
	{}
};

$MethodInfo _DefaultTableModel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTableModel::*)()>(&DefaultTableModel::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTableModel::*)(int32_t,int32_t)>(&DefaultTableModel::init$))},
	{"<init>", "(Ljava/util/Vector;I)V", "(Ljava/util/Vector<*>;I)V", $PUBLIC, $method(static_cast<void(DefaultTableModel::*)($Vector*,int32_t)>(&DefaultTableModel::init$))},
	{"<init>", "([Ljava/lang/Object;I)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTableModel::*)($ObjectArray*,int32_t)>(&DefaultTableModel::init$))},
	{"<init>", "(Ljava/util/Vector;Ljava/util/Vector;)V", "(Ljava/util/Vector<+Ljava/util/Vector;>;Ljava/util/Vector<*>;)V", $PUBLIC, $method(static_cast<void(DefaultTableModel::*)($Vector*,$Vector*)>(&DefaultTableModel::init$))},
	{"<init>", "([[Ljava/lang/Object;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTableModel::*)($ObjectArray2*,$ObjectArray*)>(&DefaultTableModel::init$))},
	{"addColumn", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"addColumn", "(Ljava/lang/Object;Ljava/util/Vector;)V", "(Ljava/lang/Object;Ljava/util/Vector<*>;)V", $PUBLIC},
	{"addColumn", "(Ljava/lang/Object;[Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"addRow", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<*>;)V", $PUBLIC},
	{"addRow", "([Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"convertToVector", "([Ljava/lang/Object;)Ljava/util/Vector;", "([Ljava/lang/Object;)Ljava/util/Vector<Ljava/lang/Object;>;", $PROTECTED | $STATIC, $method(static_cast<$Vector*(*)($ObjectArray*)>(&DefaultTableModel::convertToVector))},
	{"convertToVector", "([[Ljava/lang/Object;)Ljava/util/Vector;", "([[Ljava/lang/Object;)Ljava/util/Vector<Ljava/util/Vector<Ljava/lang/Object;>;>;", $PROTECTED | $STATIC, $method(static_cast<$Vector*(*)($ObjectArray2*)>(&DefaultTableModel::convertToVector))},
	{"gcd", "(II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&DefaultTableModel::gcd))},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getColumnName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDataVector", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/util/Vector;>;", $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"insertRow", "(ILjava/util/Vector;)V", "(ILjava/util/Vector<*>;)V", $PUBLIC},
	{"insertRow", "(I[Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"isCellEditable", "(II)Z", nullptr, $PUBLIC},
	{"justifyRows", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultTableModel::*)(int32_t,int32_t)>(&DefaultTableModel::justifyRows))},
	{"moveRow", "(III)V", nullptr, $PUBLIC},
	{"newDataAvailable", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PUBLIC},
	{"newRowsAdded", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PUBLIC},
	{"newVector", "(I)Ljava/util/Vector;", "<E:Ljava/lang/Object;>(I)Ljava/util/Vector<TE;>;", $PRIVATE | $STATIC, $method(static_cast<$Vector*(*)(int32_t)>(&DefaultTableModel::newVector))},
	{"nonNullVector", "(Ljava/util/Vector;)Ljava/util/Vector;", "<E:Ljava/lang/Object;>(Ljava/util/Vector<TE;>;)Ljava/util/Vector<TE;>;", $PRIVATE | $STATIC, $method(static_cast<$Vector*(*)($Vector*)>(&DefaultTableModel::nonNullVector))},
	{"removeRow", "(I)V", nullptr, $PUBLIC},
	{"rotate", "(Ljava/util/Vector;III)V", "<E:Ljava/lang/Object;>(Ljava/util/Vector<TE;>;III)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Vector*,int32_t,int32_t,int32_t)>(&DefaultTableModel::rotate))},
	{"rowsRemoved", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PUBLIC},
	{"setColumnCount", "(I)V", nullptr, $PUBLIC},
	{"setColumnIdentifiers", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<*>;)V", $PUBLIC},
	{"setColumnIdentifiers", "([Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setDataVector", "(Ljava/util/Vector;Ljava/util/Vector;)V", "(Ljava/util/Vector<+Ljava/util/Vector;>;Ljava/util/Vector<*>;)V", $PUBLIC},
	{"setDataVector", "([[Ljava/lang/Object;[Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setNumRows", "(I)V", nullptr, $PUBLIC},
	{"setRowCount", "(I)V", nullptr, $PUBLIC},
	{"setValueAt", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DefaultTableModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.table.DefaultTableModel",
	"javax.swing.table.AbstractTableModel",
	nullptr,
	_DefaultTableModel_FieldInfo_,
	_DefaultTableModel_MethodInfo_
};

$Object* allocate$DefaultTableModel($Class* clazz) {
	return $of($alloc(DefaultTableModel));
}

void DefaultTableModel::init$() {
	DefaultTableModel::init$(0, 0);
}

$Vector* DefaultTableModel::newVector(int32_t size) {
	$init(DefaultTableModel);
	$var($Vector, v, $new($Vector, size));
	v->setSize(size);
	return v;
}

void DefaultTableModel::init$(int32_t rowCount, int32_t columnCount) {
	DefaultTableModel::init$($(newVector(columnCount)), rowCount);
}

void DefaultTableModel::init$($Vector* columnNames, int32_t rowCount) {
	$AbstractTableModel::init$();
	setDataVector($(newVector(rowCount)), columnNames);
}

void DefaultTableModel::init$($ObjectArray* columnNames, int32_t rowCount) {
	DefaultTableModel::init$($(convertToVector(columnNames)), rowCount);
}

void DefaultTableModel::init$($Vector* data, $Vector* columnNames) {
	$AbstractTableModel::init$();
	setDataVector(data, columnNames);
}

void DefaultTableModel::init$($ObjectArray2* data, $ObjectArray* columnNames) {
	$AbstractTableModel::init$();
	setDataVector(data, columnNames);
}

$Vector* DefaultTableModel::getDataVector() {
	return this->dataVector;
}

$Vector* DefaultTableModel::nonNullVector($Vector* v) {
	$init(DefaultTableModel);
	return (v != nullptr) ? v : $new($Vector);
}

void DefaultTableModel::setDataVector($Vector* dataVector, $Vector* columnIdentifiers) {
	$set(this, dataVector, nonNullVector(dataVector));
	$set(this, columnIdentifiers, nonNullVector(columnIdentifiers));
	justifyRows(0, getRowCount());
	fireTableStructureChanged();
}

void DefaultTableModel::setDataVector($ObjectArray2* dataVector, $ObjectArray* columnIdentifiers) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, var$0, convertToVector(dataVector));
	setDataVector(var$0, $(convertToVector(columnIdentifiers)));
}

void DefaultTableModel::newDataAvailable($TableModelEvent* event) {
	fireTableChanged(event);
}

void DefaultTableModel::justifyRows(int32_t from, int32_t to) {
	$useLocalCurrentObjectStackCache();
	$nc(this->dataVector)->setSize(getRowCount());
	for (int32_t i = from; i < to; ++i) {
		if ($nc(this->dataVector)->elementAt(i) == nullptr) {
			$nc(this->dataVector)->setElementAt($$new($Vector), i);
		}
		$nc(($cast($Vector, $($nc(this->dataVector)->elementAt(i)))))->setSize(getColumnCount());
	}
}

void DefaultTableModel::newRowsAdded($TableModelEvent* e) {
	int32_t var$0 = $nc(e)->getFirstRow();
	justifyRows(var$0, e->getLastRow() + 1);
	fireTableChanged(e);
}

void DefaultTableModel::rowsRemoved($TableModelEvent* event) {
	fireTableChanged(event);
}

void DefaultTableModel::setNumRows(int32_t rowCount) {
	int32_t old = getRowCount();
	if (old == rowCount) {
		return;
	}
	$nc(this->dataVector)->setSize(rowCount);
	if (rowCount <= old) {
		fireTableRowsDeleted(rowCount, old - 1);
	} else {
		justifyRows(old, rowCount);
		fireTableRowsInserted(old, rowCount - 1);
	}
}

void DefaultTableModel::setRowCount(int32_t rowCount) {
	setNumRows(rowCount);
}

void DefaultTableModel::addRow($Vector* rowData) {
	insertRow(getRowCount(), rowData);
}

void DefaultTableModel::addRow($ObjectArray* rowData) {
	addRow($(convertToVector(rowData)));
}

void DefaultTableModel::insertRow(int32_t row, $Vector* rowData) {
	$nc(this->dataVector)->insertElementAt(rowData, row);
	justifyRows(row, row + 1);
	fireTableRowsInserted(row, row);
}

void DefaultTableModel::insertRow(int32_t row, $ObjectArray* rowData) {
	insertRow(row, $(convertToVector(rowData)));
}

int32_t DefaultTableModel::gcd(int32_t i, int32_t j) {
	$init(DefaultTableModel);
	return (j == 0) ? i : gcd(j, $mod(i, j));
}

void DefaultTableModel::rotate($Vector* v, int32_t a, int32_t b, int32_t shift) {
	$init(DefaultTableModel);
	$useLocalCurrentObjectStackCache();
	int32_t size = b - a;
	int32_t r = size - shift;
	int32_t g = gcd(size, r);
	for (int32_t i = 0; i < g; ++i) {
		int32_t to = i;
		$var($Object, tmp, $nc(v)->elementAt(a + to));
		for (int32_t from = $mod((to + r), size); from != i; from = $mod((to + r), size)) {
			v->setElementAt($(v->elementAt(a + from)), a + to);
			to = from;
		}
		v->setElementAt(tmp, a + to);
	}
}

void DefaultTableModel::moveRow(int32_t start, int32_t end, int32_t to) {
	int32_t shift = to - start;
	int32_t first = 0;
	int32_t last = 0;
	if (shift < 0) {
		first = to;
		last = end;
	} else {
		first = start;
		last = to + end - start;
	}
	rotate(this->dataVector, first, last + 1, shift);
	fireTableRowsUpdated(first, last);
}

void DefaultTableModel::removeRow(int32_t row) {
	$nc(this->dataVector)->removeElementAt(row);
	fireTableRowsDeleted(row, row);
}

void DefaultTableModel::setColumnIdentifiers($Vector* columnIdentifiers) {
	setDataVector(this->dataVector, columnIdentifiers);
}

void DefaultTableModel::setColumnIdentifiers($ObjectArray* newIdentifiers) {
	setColumnIdentifiers($(convertToVector(newIdentifiers)));
}

void DefaultTableModel::setColumnCount(int32_t columnCount) {
	$nc(this->columnIdentifiers)->setSize(columnCount);
	justifyRows(0, getRowCount());
	fireTableStructureChanged();
}

void DefaultTableModel::addColumn(Object$* columnName) {
	addColumn(columnName, ($Vector*)nullptr);
}

void DefaultTableModel::addColumn(Object$* columnName, $Vector* columnData) {
	$useLocalCurrentObjectStackCache();
	$nc(this->columnIdentifiers)->addElement(columnName);
	if (columnData != nullptr) {
		int32_t columnSize = columnData->size();
		if (columnSize > getRowCount()) {
			$nc(this->dataVector)->setSize(columnSize);
		}
		justifyRows(0, getRowCount());
		int32_t newColumn = getColumnCount() - 1;
		for (int32_t i = 0; i < columnSize; ++i) {
			$var($Vector, row, $cast($Vector, $nc(this->dataVector)->elementAt(i)));
			$nc(row)->setElementAt($(columnData->elementAt(i)), newColumn);
		}
	} else {
		justifyRows(0, getRowCount());
	}
	fireTableStructureChanged();
}

void DefaultTableModel::addColumn(Object$* columnName, $ObjectArray* columnData) {
	addColumn(columnName, $(convertToVector(columnData)));
}

int32_t DefaultTableModel::getRowCount() {
	return $nc(this->dataVector)->size();
}

int32_t DefaultTableModel::getColumnCount() {
	return $nc(this->columnIdentifiers)->size();
}

$String* DefaultTableModel::getColumnName(int32_t column) {
	$var($Object, id, nullptr);
	if (column < $nc(this->columnIdentifiers)->size() && (column >= 0)) {
		$assign(id, $nc(this->columnIdentifiers)->elementAt(column));
	}
	return (id == nullptr) ? $AbstractTableModel::getColumnName(column) : $nc($of(id))->toString();
}

bool DefaultTableModel::isCellEditable(int32_t row, int32_t column) {
	return true;
}

$Object* DefaultTableModel::getValueAt(int32_t row, int32_t column) {
	$var($Vector, rowVector, $cast($Vector, $nc(this->dataVector)->elementAt(row)));
	return $of($nc(rowVector)->elementAt(column));
}

void DefaultTableModel::setValueAt(Object$* aValue, int32_t row, int32_t column) {
	$var($Vector, rowVector, $cast($Vector, $nc(this->dataVector)->elementAt(row)));
	$nc(rowVector)->setElementAt(aValue, column);
	fireTableCellUpdated(row, column);
}

$Vector* DefaultTableModel::convertToVector($ObjectArray* anArray) {
	$init(DefaultTableModel);
	$useLocalCurrentObjectStackCache();
	if (anArray == nullptr) {
		return nullptr;
	}
	$var($Vector, v, $new($Vector, $nc(anArray)->length));
	{
		$var($ObjectArray, arr$, anArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				v->addElement(o);
			}
		}
	}
	return v;
}

$Vector* DefaultTableModel::convertToVector($ObjectArray2* anArray) {
	$init(DefaultTableModel);
	$useLocalCurrentObjectStackCache();
	if (anArray == nullptr) {
		return nullptr;
	}
	$var($Vector, v, $new($Vector, $nc(anArray)->length));
	{
		$var($ObjectArray2, arr$, anArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ObjectArray, o, arr$->get(i$));
			{
				v->addElement($(convertToVector(o)));
			}
		}
	}
	return v;
}

DefaultTableModel::DefaultTableModel() {
}

$Class* DefaultTableModel::load$($String* name, bool initialize) {
	$loadClass(DefaultTableModel, name, initialize, &_DefaultTableModel_ClassInfo_, allocate$DefaultTableModel);
	return class$;
}

$Class* DefaultTableModel::class$ = nullptr;

		} // table
	} // swing
} // javax