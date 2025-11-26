#include <sun/awt/X11/XTrayIconPeer$2.h>

#include <java/awt/Dialog$ModalExclusionType.h>
#include <java/awt/Window.h>
#include <sun/awt/X11/XTrayIconPeer$XTrayIconEmbeddedFrame.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <jcpp.h>

#undef TOOLKIT_EXCLUDE

using $Dialog$ModalExclusionType = ::java::awt::Dialog$ModalExclusionType;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $XTrayIconPeer = ::sun::awt::X11::XTrayIconPeer;
using $XTrayIconPeer$XTrayIconEmbeddedFrame = ::sun::awt::X11::XTrayIconPeer$XTrayIconEmbeddedFrame;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTrayIconPeer$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XTrayIconPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTrayIconPeer$2, this$0)},
	{}
};

$MethodInfo _XTrayIconPeer$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XTrayIconPeer;)V", nullptr, 0, $method(static_cast<void(XTrayIconPeer$2::*)($XTrayIconPeer*)>(&XTrayIconPeer$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XTrayIconPeer$2_EnclosingMethodInfo_ = {
	"sun.awt.X11.XTrayIconPeer",
	"<init>",
	"(Ljava/awt/TrayIcon;)V"
};

$InnerClassInfo _XTrayIconPeer$2_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTrayIconPeer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XTrayIconPeer$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XTrayIconPeer$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_XTrayIconPeer$2_FieldInfo_,
	_XTrayIconPeer$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_XTrayIconPeer$2_EnclosingMethodInfo_,
	_XTrayIconPeer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTrayIconPeer"
};

$Object* allocate$XTrayIconPeer$2($Class* clazz) {
	return $of($alloc(XTrayIconPeer$2));
}

void XTrayIconPeer$2::init$($XTrayIconPeer* this$0) {
	$set(this, this$0, this$0);
}

$Object* XTrayIconPeer$2::run() {
	$init($Dialog$ModalExclusionType);
	$nc(this->this$0->eframe)->setModalExclusionType($Dialog$ModalExclusionType::TOOLKIT_EXCLUDE);
	return $of(nullptr);
}

XTrayIconPeer$2::XTrayIconPeer$2() {
}

$Class* XTrayIconPeer$2::load$($String* name, bool initialize) {
	$loadClass(XTrayIconPeer$2, name, initialize, &_XTrayIconPeer$2_ClassInfo_, allocate$XTrayIconPeer$2);
	return class$;
}

$Class* XTrayIconPeer$2::class$ = nullptr;

		} // X11
	} // awt
} // sun