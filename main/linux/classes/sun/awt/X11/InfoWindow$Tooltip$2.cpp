#include <sun/awt/X11/InfoWindow$Tooltip$2.h>

#include <java/awt/Label.h>
#include <java/awt/Point.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/X11/InfoWindow$LiveArguments.h>
#include <sun/awt/X11/InfoWindow$Tooltip$2$1.h>
#include <sun/awt/X11/InfoWindow$Tooltip$LiveArguments.h>
#include <sun/awt/X11/InfoWindow$Tooltip.h>
#include <jcpp.h>

using $Label = ::java::awt::Label;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $InfoWindow$Tooltip = ::sun::awt::X11::InfoWindow$Tooltip;
using $InfoWindow$Tooltip$2$1 = ::sun::awt::X11::InfoWindow$Tooltip$2$1;
using $InfoWindow$Tooltip$LiveArguments = ::sun::awt::X11::InfoWindow$Tooltip$LiveArguments;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _InfoWindow$Tooltip$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/InfoWindow$Tooltip;", nullptr, $FINAL | $SYNTHETIC, $field(InfoWindow$Tooltip$2, this$0)},
	{}
};

$MethodInfo _InfoWindow$Tooltip$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/InfoWindow$Tooltip;)V", nullptr, 0, $method(static_cast<void(InfoWindow$Tooltip$2::*)($InfoWindow$Tooltip*)>(&InfoWindow$Tooltip$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InfoWindow$Tooltip$2_EnclosingMethodInfo_ = {
	"sun.awt.X11.InfoWindow$Tooltip",
	"display",
	"()V"
};

$InnerClassInfo _InfoWindow$Tooltip$2_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$Tooltip", "sun.awt.X11.InfoWindow", "Tooltip", $PUBLIC | $STATIC},
	{"sun.awt.X11.InfoWindow$Tooltip$2", nullptr, nullptr, 0},
	{"sun.awt.X11.InfoWindow$Tooltip$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InfoWindow$Tooltip$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.InfoWindow$Tooltip$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_InfoWindow$Tooltip$2_FieldInfo_,
	_InfoWindow$Tooltip$2_MethodInfo_,
	nullptr,
	&_InfoWindow$Tooltip$2_EnclosingMethodInfo_,
	_InfoWindow$Tooltip$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.InfoWindow"
};

$Object* allocate$InfoWindow$Tooltip$2($Class* clazz) {
	return $of($alloc(InfoWindow$Tooltip$2));
}

void InfoWindow$Tooltip$2::init$($InfoWindow$Tooltip* this$0) {
	$set(this, this$0, this$0);
}

void InfoWindow$Tooltip$2::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($nc(this->this$0->liveArguments)->isDisposed()) {
		return;
	}
	$var($String, tooltipString, $nc(this->this$0->liveArguments)->getTooltipString());
	if (tooltipString == nullptr) {
		return;
	} else if ($nc(tooltipString)->length() > 64) {
		$nc(this->this$0->textLabel)->setText($(tooltipString->substring(0, 64)));
	} else {
		$nc(this->this$0->textLabel)->setText(tooltipString);
	}
	$var($Point, pointer, $cast($Point, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($InfoWindow$Tooltip$2$1, this)))));
	if (pointer == nullptr) {
		return;
	}
	this->this$0->show($$new($Point, $nc(pointer)->x, pointer->y), 5);
}

InfoWindow$Tooltip$2::InfoWindow$Tooltip$2() {
}

$Class* InfoWindow$Tooltip$2::load$($String* name, bool initialize) {
	$loadClass(InfoWindow$Tooltip$2, name, initialize, &_InfoWindow$Tooltip$2_ClassInfo_, allocate$InfoWindow$Tooltip$2);
	return class$;
}

$Class* InfoWindow$Tooltip$2::class$ = nullptr;

		} // X11
	} // awt
} // sun