#include <TAB$1.h>

#include <TAB.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

$FieldInfo _TAB$1_FieldInfo_[] = {
	{"val$data", "[[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(TAB$1, val$data)},
	{"val$names", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(TAB$1, val$names)},
	{}
};

$MethodInfo _TAB$1_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/String;[[Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(TAB$1::*)($StringArray*,$ObjectArray2*)>(&TAB$1::init$))},
	{"getColumnClass", "(I)Ljava/lang/Class;", nullptr, $PUBLIC},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getColumnName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isCellEditable", "(II)Z", nullptr, $PUBLIC},
	{"setValueAt", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TAB$1_EnclosingMethodInfo_ = {
	"TAB",
	"initTest",
	"(Ljava/awt/Container;)V"
};

$InnerClassInfo _TAB$1_InnerClassesInfo_[] = {
	{"TAB$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TAB$1_ClassInfo_ = {
	$ACC_SUPER,
	"TAB$1",
	"javax.swing.table.AbstractTableModel",
	nullptr,
	_TAB$1_FieldInfo_,
	_TAB$1_MethodInfo_,
	nullptr,
	&_TAB$1_EnclosingMethodInfo_,
	_TAB$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TAB"
};

$Object* allocate$TAB$1($Class* clazz) {
	return $of($alloc(TAB$1));
}

void TAB$1::init$($StringArray* val$names, $ObjectArray2* val$data) {
	$set(this, val$names, val$names);
	$set(this, val$data, val$data);
	$AbstractTableModel::init$();
}

int32_t TAB$1::getColumnCount() {
	return $nc(this->val$names)->length;
}

int32_t TAB$1::getRowCount() {
	return $nc(this->val$data)->length;
}

$Object* TAB$1::getValueAt(int32_t row, int32_t col) {
	return $of($nc($nc(this->val$data)->get(row))->get(col));
}

$String* TAB$1::getColumnName(int32_t column) {
	return $nc(this->val$names)->get(column);
}

$Class* TAB$1::getColumnClass(int32_t c) {
	return $nc($of($(getValueAt(0, c))))->getClass();
}

bool TAB$1::isCellEditable(int32_t row, int32_t col) {
	return true;
}

void TAB$1::setValueAt(Object$* aValue, int32_t row, int32_t column) {
	$nc($System::out)->println($$str({"Setting value to: "_s, aValue}));
	$nc($nc(this->val$data)->get(row))->set(column, aValue);
}

TAB$1::TAB$1() {
}

$Class* TAB$1::load$($String* name, bool initialize) {
	$loadClass(TAB$1, name, initialize, &_TAB$1_ClassInfo_, allocate$TAB$1);
	return class$;
}

$Class* TAB$1::class$ = nullptr;