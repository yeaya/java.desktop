#include <bug8032874$3.h>

#include <bug8032874$TestTableModel.h>
#include <bug8032874.h>
#include <javax/swing/JTable.h>
#include <javax/swing/RowSorter.h>
#include <jcpp.h>

using $bug8032874 = ::bug8032874;
using $bug8032874$TestTableModel = ::bug8032874$TestTableModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTable = ::javax::swing::JTable;
using $RowSorter = ::javax::swing::RowSorter;

$MethodInfo _bug8032874$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8032874$3::*)()>(&bug8032874$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8032874$3_EnclosingMethodInfo_ = {
	"bug8032874",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8032874$3_InnerClassesInfo_[] = {
	{"bug8032874$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8032874$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug8032874$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8032874$3_MethodInfo_,
	nullptr,
	&_bug8032874$3_EnclosingMethodInfo_,
	_bug8032874$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8032874"
};

$Object* allocate$bug8032874$3($Class* clazz) {
	return $of($alloc(bug8032874$3));
}

void bug8032874$3::init$() {
}

void bug8032874$3::run() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < 5; ++i) {
		$init($bug8032874);
		$nc($bug8032874::tableModel)->remove(0);
		$nc($($nc($bug8032874::table)->getRowSorter()))->toggleSortOrder(0);
	}
}

bug8032874$3::bug8032874$3() {
}

$Class* bug8032874$3::load$($String* name, bool initialize) {
	$loadClass(bug8032874$3, name, initialize, &_bug8032874$3_ClassInfo_, allocate$bug8032874$3);
	return class$;
}

$Class* bug8032874$3::class$ = nullptr;