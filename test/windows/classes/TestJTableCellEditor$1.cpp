#include <TestJTableCellEditor$1.h>

#include <TestJTableCellEditor.h>
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

using $TestJTableCellEditor = ::TestJTableCellEditor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

$FieldInfo _TestJTableCellEditor$1_FieldInfo_[] = {
	{"val$cls", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(TestJTableCellEditor$1, val$cls)},
	{}
};

$MethodInfo _TestJTableCellEditor$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, 0, $method(static_cast<void(TestJTableCellEditor$1::*)($Class*)>(&TestJTableCellEditor$1::init$))},
	{"getColumnClass", "(I)Ljava/lang/Class;", nullptr, $PUBLIC},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestJTableCellEditor$1_EnclosingMethodInfo_ = {
	"TestJTableCellEditor",
	"testJTableCellEditor",
	"()V"
};

$InnerClassInfo _TestJTableCellEditor$1_InnerClassesInfo_[] = {
	{"TestJTableCellEditor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJTableCellEditor$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestJTableCellEditor$1",
	"javax.swing.table.AbstractTableModel",
	nullptr,
	_TestJTableCellEditor$1_FieldInfo_,
	_TestJTableCellEditor$1_MethodInfo_,
	nullptr,
	&_TestJTableCellEditor$1_EnclosingMethodInfo_,
	_TestJTableCellEditor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestJTableCellEditor"
};

$Object* allocate$TestJTableCellEditor$1($Class* clazz) {
	return $of($alloc(TestJTableCellEditor$1));
}

void TestJTableCellEditor$1::init$($Class* val$cls) {
	$set(this, val$cls, val$cls);
	$AbstractTableModel::init$();
}

int32_t TestJTableCellEditor$1::getRowCount() {
	return 0;
}

int32_t TestJTableCellEditor$1::getColumnCount() {
	return 1;
}

$Object* TestJTableCellEditor$1::getValueAt(int32_t r, int32_t c) {
	return $of("Some Value"_s);
}

$Class* TestJTableCellEditor$1::getColumnClass(int32_t c) {
	return this->val$cls;
}

TestJTableCellEditor$1::TestJTableCellEditor$1() {
}

$Class* TestJTableCellEditor$1::load$($String* name, bool initialize) {
	$loadClass(TestJTableCellEditor$1, name, initialize, &_TestJTableCellEditor$1_ClassInfo_, allocate$TestJTableCellEditor$1);
	return class$;
}

$Class* TestJTableCellEditor$1::class$ = nullptr;