#include <PrintManualTest_FitWidthMultiple$1$1.h>

#include <PrintManualTest_FitWidthMultiple$1.h>
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
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $PrintManualTest_FitWidthMultiple$1 = ::PrintManualTest_FitWidthMultiple$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

$FieldInfo _PrintManualTest_FitWidthMultiple$1$1_FieldInfo_[] = {
	{"this$1", "LPrintManualTest_FitWidthMultiple$1;", nullptr, $FINAL | $SYNTHETIC, $field(PrintManualTest_FitWidthMultiple$1$1, this$1)},
	{}
};

$MethodInfo _PrintManualTest_FitWidthMultiple$1$1_MethodInfo_[] = {
	{"<init>", "(LPrintManualTest_FitWidthMultiple$1;)V", nullptr, 0, $method(static_cast<void(PrintManualTest_FitWidthMultiple$1$1::*)($PrintManualTest_FitWidthMultiple$1*)>(&PrintManualTest_FitWidthMultiple$1$1::init$))},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PrintManualTest_FitWidthMultiple$1$1_EnclosingMethodInfo_ = {
	"PrintManualTest_FitWidthMultiple$1",
	"run",
	"()V"
};

$InnerClassInfo _PrintManualTest_FitWidthMultiple$1$1_InnerClassesInfo_[] = {
	{"PrintManualTest_FitWidthMultiple$1", nullptr, nullptr, 0},
	{"PrintManualTest_FitWidthMultiple$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintManualTest_FitWidthMultiple$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"PrintManualTest_FitWidthMultiple$1$1",
	"javax.swing.table.AbstractTableModel",
	nullptr,
	_PrintManualTest_FitWidthMultiple$1$1_FieldInfo_,
	_PrintManualTest_FitWidthMultiple$1$1_MethodInfo_,
	nullptr,
	&_PrintManualTest_FitWidthMultiple$1$1_EnclosingMethodInfo_,
	_PrintManualTest_FitWidthMultiple$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PrintManualTest_FitWidthMultiple"
};

$Object* allocate$PrintManualTest_FitWidthMultiple$1$1($Class* clazz) {
	return $of($alloc(PrintManualTest_FitWidthMultiple$1$1));
}

void PrintManualTest_FitWidthMultiple$1$1::init$($PrintManualTest_FitWidthMultiple$1* this$1) {
	$set(this, this$1, this$1);
	$AbstractTableModel::init$();
}

int32_t PrintManualTest_FitWidthMultiple$1$1::getColumnCount() {
	return 50;
}

int32_t PrintManualTest_FitWidthMultiple$1$1::getRowCount() {
	return 50;
}

$Object* PrintManualTest_FitWidthMultiple$1$1::getValueAt(int32_t row, int32_t column) {
	return $of($new($Integer, row * column));
}

PrintManualTest_FitWidthMultiple$1$1::PrintManualTest_FitWidthMultiple$1$1() {
}

$Class* PrintManualTest_FitWidthMultiple$1$1::load$($String* name, bool initialize) {
	$loadClass(PrintManualTest_FitWidthMultiple$1$1, name, initialize, &_PrintManualTest_FitWidthMultiple$1$1_ClassInfo_, allocate$PrintManualTest_FitWidthMultiple$1$1);
	return class$;
}

$Class* PrintManualTest_FitWidthMultiple$1$1::class$ = nullptr;