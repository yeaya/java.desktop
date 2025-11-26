#include <bug6777378$1$1.h>

#include <bug6777378$1.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $bug6777378$1 = ::bug6777378$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

$FieldInfo _bug6777378$1$1_FieldInfo_[] = {
	{"this$0", "Lbug6777378$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug6777378$1$1, this$0)},
	{}
};

$MethodInfo _bug6777378$1$1_MethodInfo_[] = {
	{"<init>", "(Lbug6777378$1;)V", nullptr, 0, $method(static_cast<void(bug6777378$1$1::*)($bug6777378$1*)>(&bug6777378$1$1::init$))},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6777378$1$1_EnclosingMethodInfo_ = {
	"bug6777378$1",
	"run",
	"()V"
};

$InnerClassInfo _bug6777378$1$1_InnerClassesInfo_[] = {
	{"bug6777378$1", nullptr, nullptr, 0},
	{"bug6777378$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6777378$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6777378$1$1",
	"javax.swing.table.AbstractTableModel",
	nullptr,
	_bug6777378$1$1_FieldInfo_,
	_bug6777378$1$1_MethodInfo_,
	nullptr,
	&_bug6777378$1$1_EnclosingMethodInfo_,
	_bug6777378$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6777378"
};

$Object* allocate$bug6777378$1$1($Class* clazz) {
	return $of($alloc(bug6777378$1$1));
}

void bug6777378$1$1::init$($bug6777378$1* this$0) {
	$set(this, this$0, this$0);
	$AbstractTableModel::init$();
}

int32_t bug6777378$1$1::getRowCount() {
	return 10;
}

int32_t bug6777378$1$1::getColumnCount() {
	return 10;
}

$Object* bug6777378$1$1::getValueAt(int32_t rowIndex, int32_t columnIndex) {
	$useLocalCurrentObjectStackCache();
	return $of($str({""_s, $$str(rowIndex), " "_s, $$str(columnIndex)}));
}

bug6777378$1$1::bug6777378$1$1() {
}

$Class* bug6777378$1$1::load$($String* name, bool initialize) {
	$loadClass(bug6777378$1$1, name, initialize, &_bug6777378$1$1_ClassInfo_, allocate$bug6777378$1$1);
	return class$;
}

$Class* bug6777378$1$1::class$ = nullptr;