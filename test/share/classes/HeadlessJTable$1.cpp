#include <HeadlessJTable$1.h>

#include <HeadlessJTable.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $HeadlessJTable = ::HeadlessJTable;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

$FieldInfo _HeadlessJTable$1_FieldInfo_[] = {
	{"val$data", "[[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(HeadlessJTable$1, val$data)},
	{}
};

$MethodInfo _HeadlessJTable$1_MethodInfo_[] = {
	{"<init>", "([[Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(HeadlessJTable$1::*)($ObjectArray2*)>(&HeadlessJTable$1::init$))},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HeadlessJTable$1_EnclosingMethodInfo_ = {
	"HeadlessJTable",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTable$1_InnerClassesInfo_[] = {
	{"HeadlessJTable$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTable$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTable$1",
	"javax.swing.table.AbstractTableModel",
	nullptr,
	_HeadlessJTable$1_FieldInfo_,
	_HeadlessJTable$1_MethodInfo_,
	nullptr,
	&_HeadlessJTable$1_EnclosingMethodInfo_,
	_HeadlessJTable$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTable"
};

$Object* allocate$HeadlessJTable$1($Class* clazz) {
	return $of($alloc(HeadlessJTable$1));
}

void HeadlessJTable$1::init$($ObjectArray2* val$data) {
	$set(this, val$data, val$data);
	$AbstractTableModel::init$();
}

int32_t HeadlessJTable$1::getColumnCount() {
	return 3;
}

int32_t HeadlessJTable$1::getRowCount() {
	return $nc(this->val$data)->length;
}

$Object* HeadlessJTable$1::getValueAt(int32_t row, int32_t col) {
	return $of($nc($nc(this->val$data)->get(row))->get(col));
}

HeadlessJTable$1::HeadlessJTable$1() {
}

$Class* HeadlessJTable$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTable$1, name, initialize, &_HeadlessJTable$1_ClassInfo_, allocate$HeadlessJTable$1);
	return class$;
}

$Class* HeadlessJTable$1::class$ = nullptr;