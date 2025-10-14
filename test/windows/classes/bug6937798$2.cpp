#include <bug6937798$2.h>

#include <bug6937798.h>
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
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $bug6937798 = ::bug6937798;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

$FieldInfo _bug6937798$2_FieldInfo_[] = {
	{"this$0", "Lbug6937798;", nullptr, $FINAL | $SYNTHETIC, $field(bug6937798$2, this$0)},
	{"val$data", "[[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(bug6937798$2, val$data)},
	{"val$headers", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(bug6937798$2, val$headers)},
	{}
};

$MethodInfo _bug6937798$2_MethodInfo_[] = {
	{"<init>", "(Lbug6937798;[Ljava/lang/String;[[Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(bug6937798$2::*)($bug6937798*,$StringArray*,$ObjectArray2*)>(&bug6937798$2::init$))},
	{"getColumnClass", "(I)Ljava/lang/Class;", nullptr, $PUBLIC},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getColumnName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isCellEditable", "(II)Z", nullptr, $PUBLIC},
	{"setValueAt", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6937798$2_EnclosingMethodInfo_ = {
	"bug6937798",
	"createCountryTable",
	"()Ljavax/swing/JTable;"
};

$InnerClassInfo _bug6937798$2_InnerClassesInfo_[] = {
	{"bug6937798$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6937798$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6937798$2",
	"javax.swing.table.AbstractTableModel",
	nullptr,
	_bug6937798$2_FieldInfo_,
	_bug6937798$2_MethodInfo_,
	nullptr,
	&_bug6937798$2_EnclosingMethodInfo_,
	_bug6937798$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6937798"
};

$Object* allocate$bug6937798$2($Class* clazz) {
	return $of($alloc(bug6937798$2));
}

void bug6937798$2::init$($bug6937798* this$0, $StringArray* val$headers, $ObjectArray2* val$data) {
	$set(this, this$0, this$0);
	$set(this, val$headers, val$headers);
	$set(this, val$data, val$data);
	$AbstractTableModel::init$();
}

int32_t bug6937798$2::getColumnCount() {
	return $nc(this->val$headers)->length;
}

int32_t bug6937798$2::getRowCount() {
	return $nc(this->val$data)->length;
}

$Object* bug6937798$2::getValueAt(int32_t row, int32_t col) {
	return $of($nc($nc(this->val$data)->get(row))->get(col));
}

$String* bug6937798$2::getColumnName(int32_t column) {
	return $nc(this->val$headers)->get(column);
}

$Class* bug6937798$2::getColumnClass(int32_t col) {
	return $nc($of($(getValueAt(0, col))))->getClass();
}

void bug6937798$2::setValueAt(Object$* aValue, int32_t row, int32_t column) {
	$nc($nc(this->val$data)->get(row))->set(column, aValue);
}

bool bug6937798$2::isCellEditable(int32_t row, int32_t col) {
	return (col == 4);
}

bug6937798$2::bug6937798$2() {
}

$Class* bug6937798$2::load$($String* name, bool initialize) {
	$loadClass(bug6937798$2, name, initialize, &_bug6937798$2_ClassInfo_, allocate$bug6937798$2);
	return class$;
}

$Class* bug6937798$2::class$ = nullptr;