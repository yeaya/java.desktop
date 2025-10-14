#include <Test6888156$2.h>

#include <Test6888156.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

#undef ICON
#undef TYPE

using $Test6888156 = ::Test6888156;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

$FieldInfo _Test6888156$2_FieldInfo_[] = {
	{"this$0", "LTest6888156;", nullptr, $FINAL | $SYNTHETIC, $field(Test6888156$2, this$0)},
	{}
};

$MethodInfo _Test6888156$2_MethodInfo_[] = {
	{"<init>", "(LTest6888156;)V", nullptr, 0, $method(static_cast<void(Test6888156$2::*)($Test6888156*)>(&Test6888156$2::init$))},
	{"getColumnClass", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", $PUBLIC},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test6888156$2_EnclosingMethodInfo_ = {
	"Test6888156",
	"<init>",
	"()V"
};

$InnerClassInfo _Test6888156$2_InnerClassesInfo_[] = {
	{"Test6888156$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6888156$2_ClassInfo_ = {
	$ACC_SUPER,
	"Test6888156$2",
	"javax.swing.table.AbstractTableModel",
	nullptr,
	_Test6888156$2_FieldInfo_,
	_Test6888156$2_MethodInfo_,
	nullptr,
	&_Test6888156$2_EnclosingMethodInfo_,
	_Test6888156$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6888156"
};

$Object* allocate$Test6888156$2($Class* clazz) {
	return $of($alloc(Test6888156$2));
}

void Test6888156$2::init$($Test6888156* this$0) {
	$set(this, this$0, this$0);
	$AbstractTableModel::init$();
}

int32_t Test6888156$2::getRowCount() {
	return 3;
}

int32_t Test6888156$2::getColumnCount() {
	return 2;
}

$Object* Test6888156$2::getValueAt(int32_t rowIndex, int32_t columnIndex) {
	return $of((columnIndex == 1 ? $of(this->this$0->ICON) : $of($Integer::valueOf(4))));
}

$Class* Test6888156$2::getColumnClass(int32_t columnIndex) {
	$load($Icon);
	$init($Integer);
	return (columnIndex == 1 ? $Icon::class$ : $Integer::TYPE);
}

Test6888156$2::Test6888156$2() {
}

$Class* Test6888156$2::load$($String* name, bool initialize) {
	$loadClass(Test6888156$2, name, initialize, &_Test6888156$2_ClassInfo_, allocate$Test6888156$2);
	return class$;
}

$Class* Test6888156$2::class$ = nullptr;