#include <sun/awt/X11/XFileDialogPeer$1.h>

#include <sun/awt/X11/XFileDialogPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $XFileDialogPeer = ::sun::awt::X11::XFileDialogPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XFileDialogPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XFileDialogPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XFileDialogPeer$1, this$0)},
	{}
};

$MethodInfo _XFileDialogPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XFileDialogPeer;)V", nullptr, 0, $method(static_cast<void(XFileDialogPeer$1::*)($XFileDialogPeer*)>(&XFileDialogPeer$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XFileDialogPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XFileDialogPeer",
	"init",
	"(Ljava/awt/FileDialog;)V"
};

$InnerClassInfo _XFileDialogPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XFileDialogPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XFileDialogPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XFileDialogPeer$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_XFileDialogPeer$1_FieldInfo_,
	_XFileDialogPeer$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_XFileDialogPeer$1_EnclosingMethodInfo_,
	_XFileDialogPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XFileDialogPeer"
};

$Object* allocate$XFileDialogPeer$1($Class* clazz) {
	return $of($alloc(XFileDialogPeer$1));
}

void XFileDialogPeer$1::init$($XFileDialogPeer* this$0) {
	$set(this, this$0, this$0);
}

$Object* XFileDialogPeer$1::run() {
	return $of($System::getProperty("user.dir"_s));
}

XFileDialogPeer$1::XFileDialogPeer$1() {
}

$Class* XFileDialogPeer$1::load$($String* name, bool initialize) {
	$loadClass(XFileDialogPeer$1, name, initialize, &_XFileDialogPeer$1_ClassInfo_, allocate$XFileDialogPeer$1);
	return class$;
}

$Class* XFileDialogPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun