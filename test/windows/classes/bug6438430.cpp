#include <bug6438430.h>

#include <java/awt/Dimension.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JCheckBoxMenuItem.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;

$MethodInfo _bug6438430_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6438430::*)()>(&bug6438430::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6438430::main))},
	{}
};

$ClassInfo _bug6438430_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6438430",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6438430_MethodInfo_
};

$Object* allocate$bug6438430($Class* clazz) {
	return $of($alloc(bug6438430));
}

void bug6438430::init$() {
}

void bug6438430::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JMenu, subMenu1, $new($JMenu, "Long-titled Sub Menu"_s));
	subMenu1->add($$new($JMenuItem, "SubMenu Item"_s));
	$var($JMenuItem, checkBoxMenuItem1, $new($JCheckBoxMenuItem, "CheckBox"_s));
	$var($JMenu, menu1, $new($JMenu, "It works always"_s));
	menu1->add(checkBoxMenuItem1);
	menu1->add(static_cast<$JMenuItem*>(subMenu1));
	checkBoxMenuItem1->getPreferredSize();
	int32_t width1 = $nc($(subMenu1->getPreferredSize()))->width;
	$init($System);
	$nc($System::out)->println($$str({"width1 = "_s, $$str(width1)}));
	$var($JMenu, subMenu2, $new($JMenu, "Long-titled Sub Menu"_s));
	subMenu2->add($$new($JMenuItem, "SubMenu Item"_s));
	$var($JMenuItem, checkBoxMenuItem2, $new($JCheckBoxMenuItem, "CheckBox"_s));
	$var($JMenu, menu2, $new($JMenu, "It did not work before the fix"_s));
	menu2->add(static_cast<$JMenuItem*>(subMenu2));
	menu2->add(checkBoxMenuItem2);
	subMenu2->getPreferredSize();
	int32_t width2 = $nc($(checkBoxMenuItem2->getPreferredSize()))->width;
	$nc($System::out)->println($$str({"width2 = "_s, $$str(width2)}));
	if (width1 != width2) {
		$throwNew($RuntimeException, "Submenu title and submenu indicator overlap on JMenuItem!"_s);
	}
	$nc($System::out)->println("Test passed"_s);
}

bug6438430::bug6438430() {
}

$Class* bug6438430::load$($String* name, bool initialize) {
	$loadClass(bug6438430, name, initialize, &_bug6438430_ClassInfo_, allocate$bug6438430);
	return class$;
}

$Class* bug6438430::class$ = nullptr;