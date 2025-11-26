#include <sun/awt/X11/InfoWindow$1.h>

#include <java/awt/Container.h>
#include <java/awt/Insets.h>
#include <sun/awt/X11/InfoWindow.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InfoWindow = ::sun::awt::X11::InfoWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _InfoWindow$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/InfoWindow;", nullptr, $FINAL | $SYNTHETIC, $field(InfoWindow$1, this$0)},
	{}
};

$MethodInfo _InfoWindow$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/InfoWindow;)V", nullptr, 0, $method(static_cast<void(InfoWindow$1::*)($InfoWindow*)>(&InfoWindow$1::init$))},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InfoWindow$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.InfoWindow",
	"<init>",
	"(Ljava/awt/Frame;Ljava/awt/Color;)V"
};

$InnerClassInfo _InfoWindow$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InfoWindow$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.InfoWindow$1",
	"java.awt.Container",
	nullptr,
	_InfoWindow$1_FieldInfo_,
	_InfoWindow$1_MethodInfo_,
	nullptr,
	&_InfoWindow$1_EnclosingMethodInfo_,
	_InfoWindow$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.InfoWindow"
};

$Object* allocate$InfoWindow$1($Class* clazz) {
	return $of($alloc(InfoWindow$1));
}

void InfoWindow$1::init$($InfoWindow* this$0) {
	$set(this, this$0, this$0);
	$Container::init$();
}

$Insets* InfoWindow$1::getInsets() {
	return $new($Insets, 1, 1, 1, 1);
}

InfoWindow$1::InfoWindow$1() {
}

$Class* InfoWindow$1::load$($String* name, bool initialize) {
	$loadClass(InfoWindow$1, name, initialize, &_InfoWindow$1_ClassInfo_, allocate$InfoWindow$1);
	return class$;
}

$Class* InfoWindow$1::class$ = nullptr;

		} // X11
	} // awt
} // sun