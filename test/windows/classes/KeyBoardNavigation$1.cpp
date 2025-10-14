#include <KeyBoardNavigation$1.h>

#include <KeyBoardNavigation.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $KeyBoardNavigation = ::KeyBoardNavigation;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

$FieldInfo _KeyBoardNavigation$1_FieldInfo_[] = {
	{"val$data", "[[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(KeyBoardNavigation$1, val$data)},
	{"val$names", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(KeyBoardNavigation$1, val$names)},
	{}
};

$MethodInfo _KeyBoardNavigation$1_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/String;[[Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(KeyBoardNavigation$1::*)($StringArray*,$ObjectArray2*)>(&KeyBoardNavigation$1::init$))},
	{"getColumnClass", "(I)Ljava/lang/Class;", nullptr, $PUBLIC},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getColumnName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isCellEditable", "(II)Z", nullptr, $PUBLIC},
	{"setValueAt", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _KeyBoardNavigation$1_EnclosingMethodInfo_ = {
	"KeyBoardNavigation",
	"initTest",
	"(Ljava/awt/Container;)V"
};

$InnerClassInfo _KeyBoardNavigation$1_InnerClassesInfo_[] = {
	{"KeyBoardNavigation$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeyBoardNavigation$1_ClassInfo_ = {
	$ACC_SUPER,
	"KeyBoardNavigation$1",
	"javax.swing.table.AbstractTableModel",
	nullptr,
	_KeyBoardNavigation$1_FieldInfo_,
	_KeyBoardNavigation$1_MethodInfo_,
	nullptr,
	&_KeyBoardNavigation$1_EnclosingMethodInfo_,
	_KeyBoardNavigation$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"KeyBoardNavigation"
};

$Object* allocate$KeyBoardNavigation$1($Class* clazz) {
	return $of($alloc(KeyBoardNavigation$1));
}

void KeyBoardNavigation$1::init$($StringArray* val$names, $ObjectArray2* val$data) {
	$set(this, val$names, val$names);
	$set(this, val$data, val$data);
	$AbstractTableModel::init$();
}

int32_t KeyBoardNavigation$1::getColumnCount() {
	return $nc(this->val$names)->length;
}

int32_t KeyBoardNavigation$1::getRowCount() {
	return $nc(this->val$data)->length;
}

$Object* KeyBoardNavigation$1::getValueAt(int32_t row, int32_t col) {
	return $of($nc($nc(this->val$data)->get(row))->get(col));
}

$String* KeyBoardNavigation$1::getColumnName(int32_t column) {
	return $nc(this->val$names)->get(column);
}

$Class* KeyBoardNavigation$1::getColumnClass(int32_t c) {
	return $nc($of($(getValueAt(0, c))))->getClass();
}

bool KeyBoardNavigation$1::isCellEditable(int32_t row, int32_t col) {
	return true;
}

void KeyBoardNavigation$1::setValueAt(Object$* aValue, int32_t row, int32_t column) {
	$init($System);
	$nc($System::out)->println($$str({"Setting value to: "_s, aValue}));
	$nc($nc(this->val$data)->get(row))->set(column, aValue);
}

KeyBoardNavigation$1::KeyBoardNavigation$1() {
}

$Class* KeyBoardNavigation$1::load$($String* name, bool initialize) {
	$loadClass(KeyBoardNavigation$1, name, initialize, &_KeyBoardNavigation$1_ClassInfo_, allocate$KeyBoardNavigation$1);
	return class$;
}

$Class* KeyBoardNavigation$1::class$ = nullptr;