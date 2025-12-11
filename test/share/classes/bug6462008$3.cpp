#include <bug6462008$3.h>

#include <bug6462008.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION

using $bug6462008 = ::bug6462008;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

$MethodInfo _bug6462008$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6462008$3::*)()>(&bug6462008$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6462008$3_EnclosingMethodInfo_ = {
	"bug6462008",
	"resetList",
	"()V"
};

$InnerClassInfo _bug6462008$3_InnerClassesInfo_[] = {
	{"bug6462008$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6462008$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug6462008$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6462008$3_MethodInfo_,
	nullptr,
	&_bug6462008$3_EnclosingMethodInfo_,
	_bug6462008$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6462008"
};

$Object* allocate$bug6462008$3($Class* clazz) {
	return $of($alloc(bug6462008$3));
}

void bug6462008$3::init$() {
}

void bug6462008$3::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6462008);
	$nc($($nc($bug6462008::list)->getSelectionModel()))->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	$nc($($nc($bug6462008::list)->getSelectionModel()))->clearSelection();
	$bug6462008::setAnchorLeadNonThreadSafe();
}

bug6462008$3::bug6462008$3() {
}

$Class* bug6462008$3::load$($String* name, bool initialize) {
	$loadClass(bug6462008$3, name, initialize, &_bug6462008$3_ClassInfo_, allocate$bug6462008$3);
	return class$;
}

$Class* bug6462008$3::class$ = nullptr;