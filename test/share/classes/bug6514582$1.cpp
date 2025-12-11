#include <bug6514582$1.h>

#include <bug6514582.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug6514582 = ::bug6514582;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;

$MethodInfo _bug6514582$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6514582$1::*)()>(&bug6514582$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6514582$1_EnclosingMethodInfo_ = {
	"bug6514582",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6514582$1_InnerClassesInfo_[] = {
	{"bug6514582$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6514582$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6514582$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6514582$1_MethodInfo_,
	nullptr,
	&_bug6514582$1_EnclosingMethodInfo_,
	_bug6514582$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6514582"
};

$Object* allocate$bug6514582$1($Class* clazz) {
	return $of($alloc(bug6514582$1));
}

void bug6514582$1::init$() {
}

void bug6514582$1::run() {
	$init($bug6514582);
	$assignStatic($bug6514582::popup, $new($JPopupMenu));
	$nc($bug6514582::popup)->add($$new($JMenuItem, "item"_s));
	$nc($bug6514582::popup)->setVisible(true);
}

bug6514582$1::bug6514582$1() {
}

$Class* bug6514582$1::load$($String* name, bool initialize) {
	$loadClass(bug6514582$1, name, initialize, &_bug6514582$1_ClassInfo_, allocate$bug6514582$1);
	return class$;
}

$Class* bug6514582$1::class$ = nullptr;