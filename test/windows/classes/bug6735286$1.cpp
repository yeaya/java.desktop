#include <bug6735286$1.h>

#include <bug6735286.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <jcpp.h>

using $bug6735286 = ::bug6735286;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTable = ::javax::swing::JTable;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;

$MethodInfo _bug6735286$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6735286$1::*)()>(&bug6735286$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6735286$1_EnclosingMethodInfo_ = {
	"bug6735286",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6735286$1_InnerClassesInfo_[] = {
	{"bug6735286$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6735286$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6735286$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6735286$1_MethodInfo_,
	nullptr,
	&_bug6735286$1_EnclosingMethodInfo_,
	_bug6735286$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6735286"
};

$Object* allocate$bug6735286$1($Class* clazz) {
	return $of($alloc(bug6735286$1));
}

void bug6735286$1::init$() {
}

void bug6735286$1::run() {
	$useLocalCurrentObjectStackCache();
	$load($Object);
	$nc($($$new($JTable)->getDefaultRenderer($Object::class$)))->getTableCellRendererComponent(nullptr, "a value"_s, true, true, 0, 0);
}

bug6735286$1::bug6735286$1() {
}

$Class* bug6735286$1::load$($String* name, bool initialize) {
	$loadClass(bug6735286$1, name, initialize, &_bug6735286$1_ClassInfo_, allocate$bug6735286$1);
	return class$;
}

$Class* bug6735286$1::class$ = nullptr;