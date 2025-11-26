#include <sun/awt/X11/InfoWindow$Tooltip$2$1.h>

#include <java/awt/MouseInfo.h>
#include <java/awt/Point.h>
#include <java/awt/PointerInfo.h>
#include <java/awt/Rectangle.h>
#include <sun/awt/X11/InfoWindow$LiveArguments.h>
#include <sun/awt/X11/InfoWindow$Tooltip$2.h>
#include <sun/awt/X11/InfoWindow$Tooltip$LiveArguments.h>
#include <sun/awt/X11/InfoWindow$Tooltip.h>
#include <jcpp.h>

using $MouseInfo = ::java::awt::MouseInfo;
using $Point = ::java::awt::Point;
using $PointerInfo = ::java::awt::PointerInfo;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $InfoWindow$LiveArguments = ::sun::awt::X11::InfoWindow$LiveArguments;
using $InfoWindow$Tooltip = ::sun::awt::X11::InfoWindow$Tooltip;
using $InfoWindow$Tooltip$2 = ::sun::awt::X11::InfoWindow$Tooltip$2;
using $InfoWindow$Tooltip$LiveArguments = ::sun::awt::X11::InfoWindow$Tooltip$LiveArguments;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _InfoWindow$Tooltip$2$1_FieldInfo_[] = {
	{"this$1", "Lsun/awt/X11/InfoWindow$Tooltip$2;", nullptr, $FINAL | $SYNTHETIC, $field(InfoWindow$Tooltip$2$1, this$1)},
	{}
};

$MethodInfo _InfoWindow$Tooltip$2$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/InfoWindow$Tooltip$2;)V", nullptr, 0, $method(static_cast<void(InfoWindow$Tooltip$2$1::*)($InfoWindow$Tooltip$2*)>(&InfoWindow$Tooltip$2$1::init$))},
	{"run", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InfoWindow$Tooltip$2$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.InfoWindow$Tooltip$2",
	"run",
	"()V"
};

$InnerClassInfo _InfoWindow$Tooltip$2$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$Tooltip", "sun.awt.X11.InfoWindow", "Tooltip", $PUBLIC | $STATIC},
	{"sun.awt.X11.InfoWindow$Tooltip$2", nullptr, nullptr, 0},
	{"sun.awt.X11.InfoWindow$Tooltip$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InfoWindow$Tooltip$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.InfoWindow$Tooltip$2$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_InfoWindow$Tooltip$2$1_FieldInfo_,
	_InfoWindow$Tooltip$2$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/Point;>;",
	&_InfoWindow$Tooltip$2$1_EnclosingMethodInfo_,
	_InfoWindow$Tooltip$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.InfoWindow"
};

$Object* allocate$InfoWindow$Tooltip$2$1($Class* clazz) {
	return $of($alloc(InfoWindow$Tooltip$2$1));
}

void InfoWindow$Tooltip$2$1::init$($InfoWindow$Tooltip$2* this$1) {
	$set(this, this$1, this$1);
}

$Object* InfoWindow$Tooltip$2$1::run() {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->this$1->this$0)->isPointerOverTrayIcon($($nc($nc(this->this$1->this$0)->liveArguments)->getBounds()))) {
		return $of(nullptr);
	}
	return $of($nc($($MouseInfo::getPointerInfo()))->getLocation());
}

InfoWindow$Tooltip$2$1::InfoWindow$Tooltip$2$1() {
}

$Class* InfoWindow$Tooltip$2$1::load$($String* name, bool initialize) {
	$loadClass(InfoWindow$Tooltip$2$1, name, initialize, &_InfoWindow$Tooltip$2$1_ClassInfo_, allocate$InfoWindow$Tooltip$2$1);
	return class$;
}

$Class* InfoWindow$Tooltip$2$1::class$ = nullptr;

		} // X11
	} // awt
} // sun