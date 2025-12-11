#include <sun/awt/X11/InfoWindow$Closer$1.h>

#include <java/awt/Container.h>
#include <java/lang/Runnable.h>
#include <sun/awt/X11/InfoWindow$Closer.h>
#include <sun/awt/X11/InfoWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InfoWindow = ::sun::awt::X11::InfoWindow;
using $InfoWindow$Closer = ::sun::awt::X11::InfoWindow$Closer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _InfoWindow$Closer$1_FieldInfo_[] = {
	{"this$1", "Lsun/awt/X11/InfoWindow$Closer;", nullptr, $FINAL | $SYNTHETIC, $field(InfoWindow$Closer$1, this$1)},
	{}
};

$MethodInfo _InfoWindow$Closer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/InfoWindow$Closer;)V", nullptr, 0, $method(static_cast<void(InfoWindow$Closer$1::*)($InfoWindow$Closer*)>(&InfoWindow$Closer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InfoWindow$Closer$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.InfoWindow$Closer",
	"doClose",
	"()V"
};

$InnerClassInfo _InfoWindow$Closer$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$Closer", "sun.awt.X11.InfoWindow", "Closer", $PRIVATE},
	{"sun.awt.X11.InfoWindow$Closer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InfoWindow$Closer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.InfoWindow$Closer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_InfoWindow$Closer$1_FieldInfo_,
	_InfoWindow$Closer$1_MethodInfo_,
	nullptr,
	&_InfoWindow$Closer$1_EnclosingMethodInfo_,
	_InfoWindow$Closer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.InfoWindow"
};

$Object* allocate$InfoWindow$Closer$1($Class* clazz) {
	return $of($alloc(InfoWindow$Closer$1));
}

void InfoWindow$Closer$1::init$($InfoWindow$Closer* this$1) {
	$set(this, this$1, this$1);
}

void InfoWindow$Closer$1::run() {
	$InfoWindow::access$001(this->this$1->this$0);
	$nc(this->this$1->this$0)->invalidate();
	if (this->this$1->action != nullptr) {
		$nc(this->this$1->action)->run();
	}
}

InfoWindow$Closer$1::InfoWindow$Closer$1() {
}

$Class* InfoWindow$Closer$1::load$($String* name, bool initialize) {
	$loadClass(InfoWindow$Closer$1, name, initialize, &_InfoWindow$Closer$1_ClassInfo_, allocate$InfoWindow$Closer$1);
	return class$;
}

$Class* InfoWindow$Closer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun