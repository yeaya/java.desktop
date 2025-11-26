#include <JTableScrollTest$2.h>

#include <JTableScrollTest.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $JTableScrollTest = ::JTableScrollTest;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

$FieldInfo _JTableScrollTest$2_FieldInfo_[] = {
	{"val$data", "[[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(JTableScrollTest$2, val$data)},
	{"val$names", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JTableScrollTest$2, val$names)},
	{}
};

$MethodInfo _JTableScrollTest$2_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/String;[[Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(JTableScrollTest$2::*)($StringArray*,$ObjectArray2*)>(&JTableScrollTest$2::init$))},
	{"getColumnClass", "(I)Ljava/lang/Class;", nullptr, $PUBLIC},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getColumnName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isCellEditable", "(II)Z", nullptr, $PUBLIC},
	{"setValueAt", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTableScrollTest$2_EnclosingMethodInfo_ = {
	"JTableScrollTest",
	"createTable",
	"()V"
};

$InnerClassInfo _JTableScrollTest$2_InnerClassesInfo_[] = {
	{"JTableScrollTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTableScrollTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"JTableScrollTest$2",
	"javax.swing.table.AbstractTableModel",
	nullptr,
	_JTableScrollTest$2_FieldInfo_,
	_JTableScrollTest$2_MethodInfo_,
	nullptr,
	&_JTableScrollTest$2_EnclosingMethodInfo_,
	_JTableScrollTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JTableScrollTest"
};

$Object* allocate$JTableScrollTest$2($Class* clazz) {
	return $of($alloc(JTableScrollTest$2));
}

void JTableScrollTest$2::init$($StringArray* val$names, $ObjectArray2* val$data) {
	$set(this, val$names, val$names);
	$set(this, val$data, val$data);
	$AbstractTableModel::init$();
}

int32_t JTableScrollTest$2::getColumnCount() {
	return $nc(this->val$names)->length;
}

int32_t JTableScrollTest$2::getRowCount() {
	return $nc(this->val$data)->length;
}

$Object* JTableScrollTest$2::getValueAt(int32_t row, int32_t col) {
	return $of($nc($nc(this->val$data)->get(row))->get(col));
}

$String* JTableScrollTest$2::getColumnName(int32_t column) {
	return $nc(this->val$names)->get(column);
}

$Class* JTableScrollTest$2::getColumnClass(int32_t c) {
	return $nc($of($(getValueAt(0, c))))->getClass();
}

bool JTableScrollTest$2::isCellEditable(int32_t row, int32_t col) {
	return col != 5;
}

void JTableScrollTest$2::setValueAt(Object$* aValue, int32_t row, int32_t column) {
	$nc($nc(this->val$data)->get(row))->set(column, aValue);
}

JTableScrollTest$2::JTableScrollTest$2() {
}

$Class* JTableScrollTest$2::load$($String* name, bool initialize) {
	$loadClass(JTableScrollTest$2, name, initialize, &_JTableScrollTest$2_ClassInfo_, allocate$JTableScrollTest$2);
	return class$;
}

$Class* JTableScrollTest$2::class$ = nullptr;