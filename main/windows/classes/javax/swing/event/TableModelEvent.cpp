#include <javax/swing/event/TableModelEvent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef ALL_COLUMNS
#undef DELETE
#undef HEADER_ROW
#undef INSERT
#undef MAX_VALUE
#undef UPDATE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $TableModel = ::javax::swing::table::TableModel;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _TableModelEvent_FieldInfo_[] = {
	{"INSERT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TableModelEvent, INSERT)},
	{"UPDATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TableModelEvent, UPDATE)},
	{"DELETE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TableModelEvent, DELETE)},
	{"HEADER_ROW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TableModelEvent, HEADER_ROW)},
	{"ALL_COLUMNS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TableModelEvent, ALL_COLUMNS)},
	{"type", "I", nullptr, $PROTECTED, $field(TableModelEvent, type)},
	{"firstRow", "I", nullptr, $PROTECTED, $field(TableModelEvent, firstRow)},
	{"lastRow", "I", nullptr, $PROTECTED, $field(TableModelEvent, lastRow)},
	{"column", "I", nullptr, $PROTECTED, $field(TableModelEvent, column)},
	{}
};

$MethodInfo _TableModelEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/table/TableModel;)V", nullptr, $PUBLIC, $method(static_cast<void(TableModelEvent::*)($TableModel*)>(&TableModelEvent::init$))},
	{"<init>", "(Ljavax/swing/table/TableModel;I)V", nullptr, $PUBLIC, $method(static_cast<void(TableModelEvent::*)($TableModel*,int32_t)>(&TableModelEvent::init$))},
	{"<init>", "(Ljavax/swing/table/TableModel;II)V", nullptr, $PUBLIC, $method(static_cast<void(TableModelEvent::*)($TableModel*,int32_t,int32_t)>(&TableModelEvent::init$))},
	{"<init>", "(Ljavax/swing/table/TableModel;III)V", nullptr, $PUBLIC, $method(static_cast<void(TableModelEvent::*)($TableModel*,int32_t,int32_t,int32_t)>(&TableModelEvent::init$))},
	{"<init>", "(Ljavax/swing/table/TableModel;IIII)V", nullptr, $PUBLIC, $method(static_cast<void(TableModelEvent::*)($TableModel*,int32_t,int32_t,int32_t,int32_t)>(&TableModelEvent::init$))},
	{"getColumn", "()I", nullptr, $PUBLIC},
	{"getFirstRow", "()I", nullptr, $PUBLIC},
	{"getLastRow", "()I", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TableModelEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.TableModelEvent",
	"java.util.EventObject",
	nullptr,
	_TableModelEvent_FieldInfo_,
	_TableModelEvent_MethodInfo_
};

$Object* allocate$TableModelEvent($Class* clazz) {
	return $of($alloc(TableModelEvent));
}

void TableModelEvent::init$($TableModel* source) {
	TableModelEvent::init$(source, 0, $Integer::MAX_VALUE, TableModelEvent::ALL_COLUMNS, TableModelEvent::UPDATE);
}

void TableModelEvent::init$($TableModel* source, int32_t row) {
	TableModelEvent::init$(source, row, row, TableModelEvent::ALL_COLUMNS, TableModelEvent::UPDATE);
}

void TableModelEvent::init$($TableModel* source, int32_t firstRow, int32_t lastRow) {
	TableModelEvent::init$(source, firstRow, lastRow, TableModelEvent::ALL_COLUMNS, TableModelEvent::UPDATE);
}

void TableModelEvent::init$($TableModel* source, int32_t firstRow, int32_t lastRow, int32_t column) {
	TableModelEvent::init$(source, firstRow, lastRow, column, TableModelEvent::UPDATE);
}

void TableModelEvent::init$($TableModel* source, int32_t firstRow, int32_t lastRow, int32_t column, int32_t type) {
	$EventObject::init$(source);
	this->firstRow = firstRow;
	this->lastRow = lastRow;
	this->column = column;
	this->type = type;
}

int32_t TableModelEvent::getFirstRow() {
	return this->firstRow;
}

int32_t TableModelEvent::getLastRow() {
	return this->lastRow;
}

int32_t TableModelEvent::getColumn() {
	return this->column;
}

int32_t TableModelEvent::getType() {
	return this->type;
}

TableModelEvent::TableModelEvent() {
}

$Class* TableModelEvent::load$($String* name, bool initialize) {
	$loadClass(TableModelEvent, name, initialize, &_TableModelEvent_ClassInfo_, allocate$TableModelEvent);
	return class$;
}

$Class* TableModelEvent::class$ = nullptr;

		} // event
	} // swing
} // javax