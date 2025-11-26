#include <bug7036148.h>

#include <bug7036148$1.h>
#include <java/awt/Window.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

using $bug7036148$1 = ::bug7036148$1;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $Icon = ::javax::swing::Icon;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;

$MethodInfo _bug7036148_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7036148::*)()>(&bug7036148::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7036148::main))},
	{}
};

$InnerClassInfo _bug7036148_InnerClassesInfo_[] = {
	{"bug7036148$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7036148_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7036148",
	"javax.swing.JFrame",
	nullptr,
	nullptr,
	_bug7036148_MethodInfo_,
	nullptr,
	nullptr,
	_bug7036148_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7036148$1"
};

$Object* allocate$bug7036148($Class* clazz) {
	return $of($alloc(bug7036148));
}

void bug7036148::init$() {
	$useLocalCurrentObjectStackCache();
	$JFrame::init$();
	$var($JMenuBar, bar, $new($JMenuBar));
	$var($Action, menuAction, $new($bug7036148$1, this, nullptr, nullptr));
	$var($JMenu, menu, $new($JMenu, menuAction));
	menu->add($$new($JMenuItem, "test"_s));
	bar->add(menu);
	setJMenuBar(bar);
	pack();
}

void bug7036148::main($StringArray* args) {
	$init(bug7036148);
	$new(bug7036148);
}

bug7036148::bug7036148() {
}

$Class* bug7036148::load$($String* name, bool initialize) {
	$loadClass(bug7036148, name, initialize, &_bug7036148_ClassInfo_, allocate$bug7036148);
	return class$;
}

$Class* bug7036148::class$ = nullptr;