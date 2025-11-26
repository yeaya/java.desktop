#include <sun/awt/X11/XFileDialogPeer$3.h>

#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <sun/awt/X11/XFileDialogPeer.h>
#include <jcpp.h>

using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XFileDialogPeer = ::sun::awt::X11::XFileDialogPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XFileDialogPeer$3_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XFileDialogPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XFileDialogPeer$3, this$0)},
	{}
};

$MethodInfo _XFileDialogPeer$3_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XFileDialogPeer;)V", nullptr, 0, $method(static_cast<void(XFileDialogPeer$3::*)($XFileDialogPeer*)>(&XFileDialogPeer$3::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XFileDialogPeer$3_EnclosingMethodInfo_ = {
	"sun.awt.X11.XFileDialogPeer",
	"init",
	"(Ljava/awt/FileDialog;)V"
};

$InnerClassInfo _XFileDialogPeer$3_InnerClassesInfo_[] = {
	{"sun.awt.X11.XFileDialogPeer$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XFileDialogPeer$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XFileDialogPeer$3",
	"java.awt.event.WindowAdapter",
	nullptr,
	_XFileDialogPeer$3_FieldInfo_,
	_XFileDialogPeer$3_MethodInfo_,
	nullptr,
	&_XFileDialogPeer$3_EnclosingMethodInfo_,
	_XFileDialogPeer$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XFileDialogPeer"
};

$Object* allocate$XFileDialogPeer$3($Class* clazz) {
	return $of($alloc(XFileDialogPeer$3));
}

void XFileDialogPeer$3::init$($XFileDialogPeer* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void XFileDialogPeer$3::windowClosing($WindowEvent* e) {
	this->this$0->handleCancel();
}

XFileDialogPeer$3::XFileDialogPeer$3() {
}

$Class* XFileDialogPeer$3::load$($String* name, bool initialize) {
	$loadClass(XFileDialogPeer$3, name, initialize, &_XFileDialogPeer$3_ClassInfo_, allocate$XFileDialogPeer$3);
	return class$;
}

$Class* XFileDialogPeer$3::class$ = nullptr;

		} // X11
	} // awt
} // sun