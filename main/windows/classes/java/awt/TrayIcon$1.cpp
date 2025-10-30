#include <java/awt/TrayIcon$1.h>

#include <java/awt/TrayIcon.h>
#include <jcpp.h>

using $TrayIcon = ::java::awt::TrayIcon;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor$TrayIconAccessor = ::sun::awt::AWTAccessor$TrayIconAccessor;

namespace java {
	namespace awt {

$MethodInfo _TrayIcon$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TrayIcon$1::*)()>(&TrayIcon$1::init$))},
	{"addNotify", "(Ljava/awt/TrayIcon;)V", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"removeNotify", "(Ljava/awt/TrayIcon;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TrayIcon$1_EnclosingMethodInfo_ = {
	"java.awt.TrayIcon",
	nullptr,
	nullptr
};

$InnerClassInfo _TrayIcon$1_InnerClassesInfo_[] = {
	{"java.awt.TrayIcon$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$TrayIconAccessor", "sun.awt.AWTAccessor", "TrayIconAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TrayIcon$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.TrayIcon$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$TrayIconAccessor",
	nullptr,
	_TrayIcon$1_MethodInfo_,
	nullptr,
	&_TrayIcon$1_EnclosingMethodInfo_,
	_TrayIcon$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.TrayIcon"
};

$Object* allocate$TrayIcon$1($Class* clazz) {
	return $of($alloc(TrayIcon$1));
}

void TrayIcon$1::init$() {
}

void TrayIcon$1::addNotify($TrayIcon* trayIcon) {
	$nc(trayIcon)->addNotify();
}

void TrayIcon$1::removeNotify($TrayIcon* trayIcon) {
	$nc(trayIcon)->removeNotify();
}

TrayIcon$1::TrayIcon$1() {
}

$Class* TrayIcon$1::load$($String* name, bool initialize) {
	$loadClass(TrayIcon$1, name, initialize, &_TrayIcon$1_ClassInfo_, allocate$TrayIcon$1);
	return class$;
}

$Class* TrayIcon$1::class$ = nullptr;

	} // awt
} // java