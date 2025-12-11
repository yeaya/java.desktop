#include <TabProb$1.h>

#include <TabProb.h>
#include <java/awt/Window.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

#undef SCROLL_TAB_LAYOUT
#undef WRAP_TAB_LAYOUT

using $TabProb = ::TabProb;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;

$MethodInfo _TabProb$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TabProb$1::*)()>(&TabProb$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TabProb$1_EnclosingMethodInfo_ = {
	"TabProb",
	"test",
	"()V"
};

$InnerClassInfo _TabProb$1_InnerClassesInfo_[] = {
	{"TabProb$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TabProb$1_ClassInfo_ = {
	$ACC_SUPER,
	"TabProb$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TabProb$1_MethodInfo_,
	nullptr,
	&_TabProb$1_EnclosingMethodInfo_,
	_TabProb$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TabProb"
};

$Object* allocate$TabProb$1($Class* clazz) {
	return $of($alloc(TabProb$1));
}

void TabProb$1::init$() {
}

void TabProb$1::run() {
	$init($TabProb);
	$assignStatic($TabProb::tb1, $new($TabProb, $JTabbedPane::SCROLL_TAB_LAYOUT));
	$nc($TabProb::tb1)->pack();
	$nc($TabProb::tb1)->setVisible(true);
	$assignStatic($TabProb::tb2, $new($TabProb, $JTabbedPane::WRAP_TAB_LAYOUT));
	$nc($TabProb::tb2)->pack();
	$nc($TabProb::tb2)->setVisible(true);
}

TabProb$1::TabProb$1() {
}

$Class* TabProb$1::load$($String* name, bool initialize) {
	$loadClass(TabProb$1, name, initialize, &_TabProb$1_ClassInfo_, allocate$TabProb$1);
	return class$;
}

$Class* TabProb$1::class$ = nullptr;