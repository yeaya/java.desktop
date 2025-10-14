#include <javax/swing/JTable$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

namespace javax {
	namespace swing {

$FieldInfo _JTable$1_FieldInfo_[] = {
	{"val$rowData", "[[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$1, val$rowData)},
	{"val$columnNames", "[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$1, val$columnNames)},
	{}
};

$MethodInfo _JTable$1_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/Object;[[Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(JTable$1::*)($ObjectArray*,$ObjectArray2*)>(&JTable$1::init$))},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getColumnName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isCellEditable", "(II)Z", nullptr, $PUBLIC},
	{"setValueAt", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTable$1_EnclosingMethodInfo_ = {
	"javax.swing.JTable",
	"<init>",
	"([[Ljava/lang/Object;[Ljava/lang/Object;)V"
};

$InnerClassInfo _JTable$1_InnerClassesInfo_[] = {
	{"javax.swing.JTable$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTable$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$1",
	"javax.swing.table.AbstractTableModel",
	nullptr,
	_JTable$1_FieldInfo_,
	_JTable$1_MethodInfo_,
	nullptr,
	&_JTable$1_EnclosingMethodInfo_,
	_JTable$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$1($Class* clazz) {
	return $of($alloc(JTable$1));
}

void JTable$1::init$($ObjectArray* val$columnNames, $ObjectArray2* val$rowData) {
	$set(this, val$columnNames, val$columnNames);
	$set(this, val$rowData, val$rowData);
	$AbstractTableModel::init$();
}

$String* JTable$1::getColumnName(int32_t column) {
	return $nc($of($nc(this->val$columnNames)->get(column)))->toString();
}

int32_t JTable$1::getRowCount() {
	return $nc(this->val$rowData)->length;
}

int32_t JTable$1::getColumnCount() {
	return $nc(this->val$columnNames)->length;
}

$Object* JTable$1::getValueAt(int32_t row, int32_t col) {
	return $of($nc($nc(this->val$rowData)->get(row))->get(col));
}

bool JTable$1::isCellEditable(int32_t row, int32_t column) {
	return true;
}

void JTable$1::setValueAt(Object$* value, int32_t row, int32_t col) {
	$nc($nc(this->val$rowData)->get(row))->set(col, value);
	fireTableCellUpdated(row, col);
}

JTable$1::JTable$1() {
}

$Class* JTable$1::load$($String* name, bool initialize) {
	$loadClass(JTable$1, name, initialize, &_JTable$1_ClassInfo_, allocate$JTable$1);
	return class$;
}

$Class* JTable$1::class$ = nullptr;

	} // swing
} // javax