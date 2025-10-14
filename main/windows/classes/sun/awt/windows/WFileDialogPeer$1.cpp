#include <sun/awt/windows/WFileDialogPeer$1.h>

#include <java/awt/FileDialog.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _WFileDialogPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WFileDialogPeer;", nullptr, $FINAL | $SYNTHETIC, $field(WFileDialogPeer$1, this$0)},
	{"val$fileDialog", "Ljava/awt/FileDialog;", nullptr, $FINAL | $SYNTHETIC, $field(WFileDialogPeer$1, val$fileDialog)},
	{}
};

$MethodInfo _WFileDialogPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WFileDialogPeer;Ljava/awt/FileDialog;)V", "()V", 0, $method(static_cast<void(WFileDialogPeer$1::*)($WFileDialogPeer*,$FileDialog*)>(&WFileDialogPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WFileDialogPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.windows.WFileDialogPeer",
	"handleSelected",
	"([C)V"
};

$InnerClassInfo _WFileDialogPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.windows.WFileDialogPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WFileDialogPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WFileDialogPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_WFileDialogPeer$1_FieldInfo_,
	_WFileDialogPeer$1_MethodInfo_,
	nullptr,
	&_WFileDialogPeer$1_EnclosingMethodInfo_,
	_WFileDialogPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WFileDialogPeer"
};

$Object* allocate$WFileDialogPeer$1($Class* clazz) {
	return $of($alloc(WFileDialogPeer$1));
}

void WFileDialogPeer$1::init$($WFileDialogPeer* this$0, $FileDialog* val$fileDialog) {
	$set(this, this$0, this$0);
	$set(this, val$fileDialog, val$fileDialog);
}

void WFileDialogPeer$1::run() {
	$nc(this->val$fileDialog)->setVisible(false);
}

WFileDialogPeer$1::WFileDialogPeer$1() {
}

$Class* WFileDialogPeer$1::load$($String* name, bool initialize) {
	$loadClass(WFileDialogPeer$1, name, initialize, &_WFileDialogPeer$1_ClassInfo_, allocate$WFileDialogPeer$1);
	return class$;
}

$Class* WFileDialogPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun