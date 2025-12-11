#include <java/awt/SystemTray$1.h>

#include <java/awt/SystemTray.h>
#include <jcpp.h>

using $SystemTray = ::java::awt::SystemTray;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _SystemTray$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SystemTray$1::*)()>(&SystemTray$1::init$))},
	{"firePropertyChange", "(Ljava/awt/SystemTray;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SystemTray$1_EnclosingMethodInfo_ = {
	"java.awt.SystemTray",
	nullptr,
	nullptr
};

$InnerClassInfo _SystemTray$1_InnerClassesInfo_[] = {
	{"java.awt.SystemTray$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$SystemTrayAccessor", "sun.awt.AWTAccessor", "SystemTrayAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SystemTray$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.SystemTray$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$SystemTrayAccessor",
	nullptr,
	_SystemTray$1_MethodInfo_,
	nullptr,
	&_SystemTray$1_EnclosingMethodInfo_,
	_SystemTray$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.SystemTray"
};

$Object* allocate$SystemTray$1($Class* clazz) {
	return $of($alloc(SystemTray$1));
}

void SystemTray$1::init$() {
}

void SystemTray$1::firePropertyChange($SystemTray* tray, $String* propertyName, Object$* oldValue, Object$* newValue) {
	$nc(tray)->firePropertyChange(propertyName, oldValue, newValue);
}

SystemTray$1::SystemTray$1() {
}

$Class* SystemTray$1::load$($String* name, bool initialize) {
	$loadClass(SystemTray$1, name, initialize, &_SystemTray$1_ClassInfo_, allocate$SystemTray$1);
	return class$;
}

$Class* SystemTray$1::class$ = nullptr;

	} // awt
} // java