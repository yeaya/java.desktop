#include <bug6883341.h>

#include <bug6883341$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6883341$1 = ::bug6883341$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug6883341_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6883341::*)()>(&bug6883341::init$))},
	{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6883341::createGui))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6883341::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6883341_InnerClassesInfo_[] = {
	{"bug6883341$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6883341_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6883341",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6883341_MethodInfo_,
	nullptr,
	nullptr,
	_bug6883341_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6883341$1"
};

$Object* allocate$bug6883341($Class* clazz) {
	return $of($alloc(bug6883341));
}

void bug6883341::init$() {
}

void bug6883341::createGui() {
	$var($JPopupMenu, menu, $new($JPopupMenu));
	menu->add($$new($JMenuItem));
	menu->setVisible(true);
	menu->setVisible(false);
}

void bug6883341::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6883341$1));
}

bug6883341::bug6883341() {
}

$Class* bug6883341::load$($String* name, bool initialize) {
	$loadClass(bug6883341, name, initialize, &_bug6883341_ClassInfo_, allocate$bug6883341);
	return class$;
}

$Class* bug6883341::class$ = nullptr;