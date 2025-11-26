#include <sun/awt/X11/XFileDialogPeer$2.h>

#include <java/awt/Choice.h>
#include <java/awt/Dimension.h>
#include <java/awt/TextField.h>
#include <sun/awt/X11/XFileDialogPeer.h>
#include <jcpp.h>

using $Choice = ::java::awt::Choice;
using $Dimension = ::java::awt::Dimension;
using $TextField = ::java::awt::TextField;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XFileDialogPeer = ::sun::awt::X11::XFileDialogPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XFileDialogPeer$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XFileDialogPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XFileDialogPeer$2, this$0)},
	{}
};

$MethodInfo _XFileDialogPeer$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XFileDialogPeer;)V", nullptr, 0, $method(static_cast<void(XFileDialogPeer$2::*)($XFileDialogPeer*)>(&XFileDialogPeer$2::init$))},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XFileDialogPeer$2_EnclosingMethodInfo_ = {
	"sun.awt.X11.XFileDialogPeer",
	"init",
	"(Ljava/awt/FileDialog;)V"
};

$InnerClassInfo _XFileDialogPeer$2_InnerClassesInfo_[] = {
	{"sun.awt.X11.XFileDialogPeer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XFileDialogPeer$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XFileDialogPeer$2",
	"java.awt.Choice",
	nullptr,
	_XFileDialogPeer$2_FieldInfo_,
	_XFileDialogPeer$2_MethodInfo_,
	nullptr,
	&_XFileDialogPeer$2_EnclosingMethodInfo_,
	_XFileDialogPeer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XFileDialogPeer"
};

$Object* allocate$XFileDialogPeer$2($Class* clazz) {
	return $of($alloc(XFileDialogPeer$2));
}

void XFileDialogPeer$2::init$($XFileDialogPeer* this$0) {
	$set(this, this$0, this$0);
	$Choice::init$();
}

$Dimension* XFileDialogPeer$2::getPreferredSize() {
	return $new($Dimension, 20, $nc($($nc(this->this$0->pathField)->getPreferredSize()))->height);
}

XFileDialogPeer$2::XFileDialogPeer$2() {
}

$Class* XFileDialogPeer$2::load$($String* name, bool initialize) {
	$loadClass(XFileDialogPeer$2, name, initialize, &_XFileDialogPeer$2_ClassInfo_, allocate$XFileDialogPeer$2);
	return class$;
}

$Class* XFileDialogPeer$2::class$ = nullptr;

		} // X11
	} // awt
} // sun