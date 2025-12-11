#include <java/awt/MenuBar$1.h>

#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;

namespace java {
	namespace awt {

$MethodInfo _MenuBar$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MenuBar$1::*)()>(&MenuBar$1::init$))},
	{"getHelpMenu", "(Ljava/awt/MenuBar;)Ljava/awt/Menu;", nullptr, $PUBLIC},
	{"getMenus", "(Ljava/awt/MenuBar;)Ljava/util/Vector;", "(Ljava/awt/MenuBar;)Ljava/util/Vector<Ljava/awt/Menu;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _MenuBar$1_EnclosingMethodInfo_ = {
	"java.awt.MenuBar",
	nullptr,
	nullptr
};

$InnerClassInfo _MenuBar$1_InnerClassesInfo_[] = {
	{"java.awt.MenuBar$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$MenuBarAccessor", "sun.awt.AWTAccessor", "MenuBarAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MenuBar$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.MenuBar$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$MenuBarAccessor",
	nullptr,
	_MenuBar$1_MethodInfo_,
	nullptr,
	&_MenuBar$1_EnclosingMethodInfo_,
	_MenuBar$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.MenuBar"
};

$Object* allocate$MenuBar$1($Class* clazz) {
	return $of($alloc(MenuBar$1));
}

void MenuBar$1::init$() {
}

$Menu* MenuBar$1::getHelpMenu($MenuBar* menuBar) {
	return $nc(menuBar)->helpMenu;
}

$Vector* MenuBar$1::getMenus($MenuBar* menuBar) {
	return $nc(menuBar)->menus;
}

MenuBar$1::MenuBar$1() {
}

$Class* MenuBar$1::load$($String* name, bool initialize) {
	$loadClass(MenuBar$1, name, initialize, &_MenuBar$1_ClassInfo_, allocate$MenuBar$1);
	return class$;
}

$Class* MenuBar$1::class$ = nullptr;

	} // awt
} // java