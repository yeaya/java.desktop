#include <bug6514582$2.h>

#include <bug6514582.h>
#include <java/awt/Container.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug6514582 = ::bug6514582;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JPopupMenu = ::javax::swing::JPopupMenu;

$MethodInfo _bug6514582$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6514582$2::*)()>(&bug6514582$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6514582$2_EnclosingMethodInfo_ = {
	"bug6514582",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6514582$2_InnerClassesInfo_[] = {
	{"bug6514582$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6514582$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6514582$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6514582$2_MethodInfo_,
	nullptr,
	&_bug6514582$2_EnclosingMethodInfo_,
	_bug6514582$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6514582"
};

$Object* allocate$bug6514582$2($Class* clazz) {
	return $of($alloc(bug6514582$2));
}

void bug6514582$2::init$() {
}

void bug6514582$2::run() {
	$init($bug6514582);
	$nc($bug6514582::popup)->setVisible(false);
	$nc($bug6514582::popup)->removeAll();
	$nc($bug6514582::popup)->setVisible(true);
}

bug6514582$2::bug6514582$2() {
}

$Class* bug6514582$2::load$($String* name, bool initialize) {
	$loadClass(bug6514582$2, name, initialize, &_bug6514582$2_ClassInfo_, allocate$bug6514582$2);
	return class$;
}

$Class* bug6514582$2::class$ = nullptr;