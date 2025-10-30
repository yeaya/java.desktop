#include <bug6675802.h>

#include <java/awt/Component.h>
#include <java/lang/SecurityManager.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;

$MethodInfo _bug6675802_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6675802::*)()>(&bug6675802::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6675802::main))},
	{}
};

$ClassInfo _bug6675802_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6675802",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6675802_MethodInfo_
};

$Object* allocate$bug6675802($Class* clazz) {
	return $of($alloc(bug6675802));
}

void bug6675802::init$() {
}

void bug6675802::main($StringArray* args) {
	$load(bug6675802);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$System::setSecurityManager($$new($SecurityManager));
	$var($JPopupMenu, popupMenu, $new($JPopupMenu));
	popupMenu->add($$new($JMenuItem, "Click"_s));
	popupMenu->show(nullptr, 0, 0);
	$nc($System::out)->println("Test passed"_s);
}

bug6675802::bug6675802() {
}

$Class* bug6675802::load$($String* name, bool initialize) {
	$loadClass(bug6675802, name, initialize, &_bug6675802_ClassInfo_, allocate$bug6675802);
	return class$;
}

$Class* bug6675802::class$ = nullptr;