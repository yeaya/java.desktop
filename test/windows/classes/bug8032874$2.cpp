#include <bug8032874$2.h>

#include <bug8032874.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTable.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/RowSorter.h>
#include <jcpp.h>

#undef SINGLE_INTERVAL_SELECTION

using $bug8032874 = ::bug8032874;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTable = ::javax::swing::JTable;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $RowSorter = ::javax::swing::RowSorter;

$MethodInfo _bug8032874$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8032874$2::*)()>(&bug8032874$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8032874$2_EnclosingMethodInfo_ = {
	"bug8032874",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8032874$2_InnerClassesInfo_[] = {
	{"bug8032874$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8032874$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug8032874$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8032874$2_MethodInfo_,
	nullptr,
	&_bug8032874$2_EnclosingMethodInfo_,
	_bug8032874$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8032874"
};

$Object* allocate$bug8032874$2($Class* clazz) {
	return $of($alloc(bug8032874$2));
}

void bug8032874$2::init$() {
}

void bug8032874$2::run() {
	$init($bug8032874);
	$nc($($nc($bug8032874::table)->getRowSorter()))->toggleSortOrder(0);
	$nc($($nc($bug8032874::table)->getSelectionModel()))->setSelectionMode($ListSelectionModel::SINGLE_INTERVAL_SELECTION);
	$nc($bug8032874::table)->setRowSelectionInterval(1, 2);
}

bug8032874$2::bug8032874$2() {
}

$Class* bug8032874$2::load$($String* name, bool initialize) {
	$loadClass(bug8032874$2, name, initialize, &_bug8032874$2_ClassInfo_, allocate$bug8032874$2);
	return class$;
}

$Class* bug8032874$2::class$ = nullptr;