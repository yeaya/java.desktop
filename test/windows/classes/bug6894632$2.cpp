#include <bug6894632$2.h>

#include <bug6894632.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <jcpp.h>

using $bug6894632 = ::bug6894632;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;

$MethodInfo _bug6894632$2_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(bug6894632$2::*)(int32_t,int32_t)>(&bug6894632$2::init$))},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6894632$2_EnclosingMethodInfo_ = {
	"bug6894632",
	"test",
	"(Ljava/util/List;)V"
};

$InnerClassInfo _bug6894632$2_InnerClassesInfo_[] = {
	{"bug6894632$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6894632$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6894632$2",
	"javax.swing.table.DefaultTableModel",
	nullptr,
	nullptr,
	_bug6894632$2_MethodInfo_,
	nullptr,
	&_bug6894632$2_EnclosingMethodInfo_,
	_bug6894632$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6894632"
};

$Object* allocate$bug6894632$2($Class* clazz) {
	return $of($alloc(bug6894632$2));
}

void bug6894632$2::init$(int32_t arg0, int32_t arg1) {
	$DefaultTableModel::init$(arg0, arg1);
}

$Object* bug6894632$2::getValueAt(int32_t row, int32_t column) {
	return $of(row == getRowCount() - 1 ? $of($str({$$str(row), "==last"_s})) : $of($Integer::valueOf(row)));
}

bug6894632$2::bug6894632$2() {
}

$Class* bug6894632$2::load$($String* name, bool initialize) {
	$loadClass(bug6894632$2, name, initialize, &_bug6894632$2_ClassInfo_, allocate$bug6894632$2);
	return class$;
}

$Class* bug6894632$2::class$ = nullptr;