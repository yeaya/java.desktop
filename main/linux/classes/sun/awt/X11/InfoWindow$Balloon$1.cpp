#include <sun/awt/X11/InfoWindow$Balloon$1.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Panel.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/InfoWindow$Balloon$Displayer.h>
#include <sun/awt/X11/InfoWindow$Balloon.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas.h>
#include <jcpp.h>

using $Panel = ::java::awt::Panel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InfoWindow$Balloon = ::sun::awt::X11::InfoWindow$Balloon;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XTrayIconPeer$IconCanvas = ::sun::awt::X11::XTrayIconPeer$IconCanvas;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _InfoWindow$Balloon$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/InfoWindow$Balloon;", nullptr, $FINAL | $SYNTHETIC, $field(InfoWindow$Balloon$1, this$0)},
	{}
};

$MethodInfo _InfoWindow$Balloon$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/InfoWindow$Balloon;)V", nullptr, 0, $method(static_cast<void(InfoWindow$Balloon$1::*)($InfoWindow$Balloon*)>(&InfoWindow$Balloon$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InfoWindow$Balloon$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.InfoWindow$Balloon",
	"<init>",
	"(Ljava/awt/Frame;Ljava/lang/Object;Lsun/awt/X11/InfoWindow$Balloon$LiveArguments;)V"
};

$InnerClassInfo _InfoWindow$Balloon$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$Balloon", "sun.awt.X11.InfoWindow", "Balloon", $PUBLIC | $STATIC},
	{"sun.awt.X11.InfoWindow$Balloon$1", nullptr, nullptr, 0},
	{"sun.awt.X11.InfoWindow$Balloon$LiveArguments", "sun.awt.X11.InfoWindow$Balloon", "LiveArguments", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InfoWindow$Balloon$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.InfoWindow$Balloon$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_InfoWindow$Balloon$1_FieldInfo_,
	_InfoWindow$Balloon$1_MethodInfo_,
	nullptr,
	&_InfoWindow$Balloon$1_EnclosingMethodInfo_,
	_InfoWindow$Balloon$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.InfoWindow"
};

$Object* allocate$InfoWindow$Balloon$1($Class* clazz) {
	return $of($alloc(InfoWindow$Balloon$1));
}

void InfoWindow$Balloon$1::init$($InfoWindow$Balloon* this$0) {
	$set(this, this$0, this$0);
}

void InfoWindow$Balloon$1::run() {
	if (this->this$0->textPanel != nullptr) {
		$nc(this->this$0->textPanel)->removeAll();
		$nc(this->this$0->textPanel)->setSize(0, 0);
		$nc(this->this$0->iconCanvas)->setSize(0, 0);
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(this->this$0->displayer)->isDisplayed = false;
				$XToolkit::awtLockNotifyAll();
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

InfoWindow$Balloon$1::InfoWindow$Balloon$1() {
}

$Class* InfoWindow$Balloon$1::load$($String* name, bool initialize) {
	$loadClass(InfoWindow$Balloon$1, name, initialize, &_InfoWindow$Balloon$1_ClassInfo_, allocate$InfoWindow$Balloon$1);
	return class$;
}

$Class* InfoWindow$Balloon$1::class$ = nullptr;

		} // X11
	} // awt
} // sun