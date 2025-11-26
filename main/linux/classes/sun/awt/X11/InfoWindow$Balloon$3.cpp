#include <sun/awt/X11/InfoWindow$Balloon$3.h>

#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <sun/awt/X11/InfoWindow$Balloon$LiveArguments.h>
#include <sun/awt/X11/InfoWindow$Balloon.h>
#include <sun/awt/X11/InfoWindow$LiveArguments.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InfoWindow = ::sun::awt::X11::InfoWindow;
using $InfoWindow$Balloon = ::sun::awt::X11::InfoWindow$Balloon;
using $InfoWindow$Balloon$LiveArguments = ::sun::awt::X11::InfoWindow$Balloon$LiveArguments;
using $InfoWindow$LiveArguments = ::sun::awt::X11::InfoWindow$LiveArguments;
using $XTrayIconPeer$IconCanvas = ::sun::awt::X11::XTrayIconPeer$IconCanvas;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _InfoWindow$Balloon$3_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/InfoWindow$Balloon;", nullptr, $FINAL | $SYNTHETIC, $field(InfoWindow$Balloon$3, this$0)},
	{}
};

$MethodInfo _InfoWindow$Balloon$3_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/InfoWindow$Balloon;)V", nullptr, 0, $method(static_cast<void(InfoWindow$Balloon$3::*)($InfoWindow$Balloon*)>(&InfoWindow$Balloon$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InfoWindow$Balloon$3_EnclosingMethodInfo_ = {
	"sun.awt.X11.InfoWindow$Balloon",
	"_display",
	"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V"
};

$InnerClassInfo _InfoWindow$Balloon$3_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$Balloon", "sun.awt.X11.InfoWindow", "Balloon", $PUBLIC | $STATIC},
	{"sun.awt.X11.InfoWindow$Balloon$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InfoWindow$Balloon$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.InfoWindow$Balloon$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_InfoWindow$Balloon$3_FieldInfo_,
	_InfoWindow$Balloon$3_MethodInfo_,
	nullptr,
	&_InfoWindow$Balloon$3_EnclosingMethodInfo_,
	_InfoWindow$Balloon$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.InfoWindow"
};

$Object* allocate$InfoWindow$Balloon$3($Class* clazz) {
	return $of($alloc(InfoWindow$Balloon$3));
}

void InfoWindow$Balloon$3::init$($InfoWindow$Balloon* this$0) {
	$set(this, this$0, this$0);
}

void InfoWindow$Balloon$3::run() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->this$0->liveArguments)->isDisposed()) {
		return;
	}
	$var($Point, parLoc, $nc($(this->this$0->getParent()))->getLocationOnScreen());
	$var($Dimension, parSize, $nc($(this->this$0->getParent()))->getSize());
	this->this$0->show($$new($Point, $nc(parLoc)->x + $nc(parSize)->width / 2, parLoc->y + parSize->height / 2), 0);
	if (this->this$0->iconImage != nullptr) {
		$nc(this->this$0->iconCanvas)->updateImage(this->this$0->iconImage);
	}
}

InfoWindow$Balloon$3::InfoWindow$Balloon$3() {
}

$Class* InfoWindow$Balloon$3::load$($String* name, bool initialize) {
	$loadClass(InfoWindow$Balloon$3, name, initialize, &_InfoWindow$Balloon$3_ClassInfo_, allocate$InfoWindow$Balloon$3);
	return class$;
}

$Class* InfoWindow$Balloon$3::class$ = nullptr;

		} // X11
	} // awt
} // sun