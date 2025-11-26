#include <bug4361477$2.h>

#include <bug4361477.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <jcpp.h>

using $bug4361477 = ::bug4361477;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;

$MethodInfo _bug4361477$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4361477$2::*)()>(&bug4361477$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4361477$2_EnclosingMethodInfo_ = {
	"bug4361477",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4361477$2_InnerClassesInfo_[] = {
	{"bug4361477$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4361477$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4361477$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4361477$2_MethodInfo_,
	nullptr,
	&_bug4361477$2_EnclosingMethodInfo_,
	_bug4361477$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4361477"
};

$Object* allocate$bug4361477$2($Class* clazz) {
	return $of($alloc(bug4361477$2));
}

void bug4361477$2::init$() {
}

void bug4361477$2::run() {
	$init($bug4361477);
	$assignStatic($bug4361477::bounds, $nc($($cast($TabbedPaneUI, $nc($bug4361477::tabbedPane)->getUI())))->getTabBounds($bug4361477::tabbedPane, 0));
}

bug4361477$2::bug4361477$2() {
}

$Class* bug4361477$2::load$($String* name, bool initialize) {
	$loadClass(bug4361477$2, name, initialize, &_bug4361477$2_ClassInfo_, allocate$bug4361477$2);
	return class$;
}

$Class* bug4361477$2::class$ = nullptr;