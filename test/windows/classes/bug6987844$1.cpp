#include <bug6987844$1.h>

#include <bug6987844.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug6987844 = ::bug6987844;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;

$MethodInfo _bug6987844$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6987844$1::*)()>(&bug6987844$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6987844$1_EnclosingMethodInfo_ = {
	"bug6987844",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6987844$1_InnerClassesInfo_[] = {
	{"bug6987844$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6987844$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6987844$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6987844$1_MethodInfo_,
	nullptr,
	&_bug6987844$1_EnclosingMethodInfo_,
	_bug6987844$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6987844"
};

$Object* allocate$bug6987844$1($Class* clazz) {
	return $of($alloc(bug6987844$1));
}

void bug6987844$1::init$() {
}

void bug6987844$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6987844);
	$assignStatic($bug6987844::frame, $new($JFrame));
	$nc($bug6987844::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JMenuBar, bar, $new($JMenuBar));
	$assignStatic($bug6987844::menu1, $new($JMenu, "Menu1"_s));
	$nc($bug6987844::menu1)->add($$new($JMenuItem, "item"_s));
	bar->add($bug6987844::menu1);
	$assignStatic($bug6987844::menu2, $new($JMenu, "Menu2"_s));
	$nc($bug6987844::menu2)->add($$new($JMenuItem, "item"_s));
	$nc($bug6987844::menu2)->add($$new($JMenuItem, "item"_s));
	bar->add($bug6987844::menu2);
	$nc($bug6987844::frame)->setJMenuBar(bar);
	$nc($bug6987844::frame)->pack();
	$nc($bug6987844::frame)->setVisible(true);
}

bug6987844$1::bug6987844$1() {
}

$Class* bug6987844$1::load$($String* name, bool initialize) {
	$loadClass(bug6987844$1, name, initialize, &_bug6987844$1_ClassInfo_, allocate$bug6987844$1);
	return class$;
}

$Class* bug6987844$1::class$ = nullptr;