#include <sun/awt/windows/WFileDialogPeer$2.h>

#include <java/awt/FileDialog.h>
#include <sun/awt/windows/WFileDialogPeer.h>
#include <jcpp.h>

using $Dialog = ::java::awt::Dialog;
using $FileDialog = ::java::awt::FileDialog;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WFileDialogPeer = ::sun::awt::windows::WFileDialogPeer;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WFileDialogPeer$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WFileDialogPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WFileDialogPeer$2, this$0)},
	{"val$fileDialog", "Ljava/awt/FileDialog;", nullptr, $FINAL | $SYNTHETIC, $field(WFileDialogPeer$2, val$fileDialog)},
	{}
};

$MethodInfo _WFileDialogPeer$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WFileDialogPeer;Ljava/awt/FileDialog;)V", "()V", 0, $method(static_cast<void(WFileDialogPeer$2::*)($WFileDialogPeer*,$FileDialog*)>(&WFileDialogPeer$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WFileDialogPeer$2_EnclosingMethodInfo_ = {
	"sun.awt.windows.WFileDialogPeer",
	"handleCancel",
	"()V"
};

$InnerClassInfo _WFileDialogPeer$2_InnerClassesInfo_[] = {
	{"sun.awt.windows.WFileDialogPeer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WFileDialogPeer$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WFileDialogPeer$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_WFileDialogPeer$2_FieldInfo_,
	_WFileDialogPeer$2_MethodInfo_,
	nullptr,
	&_WFileDialogPeer$2_EnclosingMethodInfo_,
	_WFileDialogPeer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WFileDialogPeer"
};

$Object* allocate$WFileDialogPeer$2($Class* clazz) {
	return $of($alloc(WFileDialogPeer$2));
}

void WFileDialogPeer$2::init$($WFileDialogPeer* this$0, $FileDialog* val$fileDialog) {
	$set(this, this$0, this$0);
	$set(this, val$fileDialog, val$fileDialog);
}

void WFileDialogPeer$2::run() {
	$nc(this->val$fileDialog)->setVisible(false);
}

WFileDialogPeer$2::WFileDialogPeer$2() {
}

$Class* WFileDialogPeer$2::load$($String* name, bool initialize) {
	$loadClass(WFileDialogPeer$2, name, initialize, &_WFileDialogPeer$2_ClassInfo_, allocate$WFileDialogPeer$2);
	return class$;
}

$Class* WFileDialogPeer$2::class$ = nullptr;

		} // windows
	} // awt
} // sun