#include <sun/awt/X11/InfoWindow$Tooltip$1.h>

#include <sun/awt/X11/InfoWindow$Tooltip.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InfoWindow$Tooltip = ::sun::awt::X11::InfoWindow$Tooltip;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _InfoWindow$Tooltip$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/InfoWindow$Tooltip;", nullptr, $FINAL | $SYNTHETIC, $field(InfoWindow$Tooltip$1, this$0)},
	{}
};

$MethodInfo _InfoWindow$Tooltip$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/InfoWindow$Tooltip;)V", nullptr, 0, $method(static_cast<void(InfoWindow$Tooltip$1::*)($InfoWindow$Tooltip*)>(&InfoWindow$Tooltip$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InfoWindow$Tooltip$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.InfoWindow$Tooltip",
	nullptr,
	nullptr
};

$InnerClassInfo _InfoWindow$Tooltip$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$Tooltip", "sun.awt.X11.InfoWindow", "Tooltip", $PUBLIC | $STATIC},
	{"sun.awt.X11.InfoWindow$Tooltip$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InfoWindow$Tooltip$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.InfoWindow$Tooltip$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_InfoWindow$Tooltip$1_FieldInfo_,
	_InfoWindow$Tooltip$1_MethodInfo_,
	nullptr,
	&_InfoWindow$Tooltip$1_EnclosingMethodInfo_,
	_InfoWindow$Tooltip$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.InfoWindow"
};

$Object* allocate$InfoWindow$Tooltip$1($Class* clazz) {
	return $of($alloc(InfoWindow$Tooltip$1));
}

void InfoWindow$Tooltip$1::init$($InfoWindow$Tooltip* this$0) {
	$set(this, this$0, this$0);
}

void InfoWindow$Tooltip$1::run() {
	this->this$0->display();
}

InfoWindow$Tooltip$1::InfoWindow$Tooltip$1() {
}

$Class* InfoWindow$Tooltip$1::load$($String* name, bool initialize) {
	$loadClass(InfoWindow$Tooltip$1, name, initialize, &_InfoWindow$Tooltip$1_ClassInfo_, allocate$InfoWindow$Tooltip$1);
	return class$;
}

$Class* InfoWindow$Tooltip$1::class$ = nullptr;

		} // X11
	} // awt
} // sun