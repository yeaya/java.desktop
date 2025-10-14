#include <bug6884066$2.h>

#include <bug6884066.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

using $bug6884066 = ::bug6884066;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

$MethodInfo _bug6884066$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6884066$2::*)()>(&bug6884066$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6884066$2_EnclosingMethodInfo_ = {
	"bug6884066",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6884066$2_InnerClassesInfo_[] = {
	{"bug6884066$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6884066$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6884066$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6884066$2_MethodInfo_,
	nullptr,
	&_bug6884066$2_EnclosingMethodInfo_,
	_bug6884066$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6884066"
};

$Object* allocate$bug6884066$2($Class* clazz) {
	return $of($alloc(bug6884066$2));
}

void bug6884066$2::init$() {
}

void bug6884066$2::run() {
	$init($bug6884066);
	$var($TableColumnModel, model, $nc($bug6884066::header)->getColumnModel());
	$bug6884066::checkColumn($nc(model)->getColumnCount() - 1, "A"_s);
}

bug6884066$2::bug6884066$2() {
}

$Class* bug6884066$2::load$($String* name, bool initialize) {
	$loadClass(bug6884066$2, name, initialize, &_bug6884066$2_ClassInfo_, allocate$bug6884066$2);
	return class$;
}

$Class* bug6884066$2::class$ = nullptr;