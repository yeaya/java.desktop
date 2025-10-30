#include <sun/awt/windows/WPageDialogPeer.h>

#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WPageDialog.h>
#include <sun/awt/windows/WPrintDialog.h>
#include <sun/awt/windows/WPrintDialogPeer.h>
#include <jcpp.h>

using $Dialog = ::java::awt::Dialog;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WPageDialog = ::sun::awt::windows::WPageDialog;
using $WPrintDialog = ::sun::awt::windows::WPrintDialog;
using $WPrintDialogPeer = ::sun::awt::windows::WPrintDialogPeer;

namespace sun {
	namespace awt {
		namespace windows {

class WPageDialogPeer$$Lambda$lambda$show$0 : public $Runnable {
	$class(WPageDialogPeer$$Lambda$lambda$show$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(WPageDialogPeer* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$show$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WPageDialogPeer$$Lambda$lambda$show$0>());
	}
	WPageDialogPeer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WPageDialogPeer$$Lambda$lambda$show$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WPageDialogPeer$$Lambda$lambda$show$0, inst$)},
	{}
};
$MethodInfo WPageDialogPeer$$Lambda$lambda$show$0::methodInfos[3] = {
	{"<init>", "(Lsun/awt/windows/WPageDialogPeer;)V", nullptr, $PUBLIC, $method(static_cast<void(WPageDialogPeer$$Lambda$lambda$show$0::*)(WPageDialogPeer*)>(&WPageDialogPeer$$Lambda$lambda$show$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo WPageDialogPeer$$Lambda$lambda$show$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.windows.WPageDialogPeer$$Lambda$lambda$show$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* WPageDialogPeer$$Lambda$lambda$show$0::load$($String* name, bool initialize) {
	$loadClass(WPageDialogPeer$$Lambda$lambda$show$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WPageDialogPeer$$Lambda$lambda$show$0::class$ = nullptr;

$MethodInfo _WPageDialogPeer_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WPageDialog;)V", nullptr, 0, $method(static_cast<void(WPageDialogPeer::*)($WPageDialog*)>(&WPageDialogPeer::init$))},
	{"_show", "()Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(WPageDialogPeer::*)()>(&WPageDialogPeer::_show))},
	{"lambda$show$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(WPageDialogPeer::*)()>(&WPageDialogPeer::lambda$show$0))},
	{"show", "()V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX__show 1

$ClassInfo _WPageDialogPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WPageDialogPeer",
	"sun.awt.windows.WPrintDialogPeer",
	nullptr,
	nullptr,
	_WPageDialogPeer_MethodInfo_
};

$Object* allocate$WPageDialogPeer($Class* clazz) {
	return $of($alloc(WPageDialogPeer));
}

void WPageDialogPeer::init$($WPageDialog* target) {
	$WPrintDialogPeer::init$(target);
}

bool WPageDialogPeer::_show() {
	bool $ret = false;
	$prepareNative(WPageDialogPeer, _show, bool);
	$ret = $invokeNative(WPageDialogPeer, _show);
	$finishNative();
	return $ret;
}

void WPageDialogPeer::show() {
	$useLocalCurrentObjectStackCache();
	$var($Runnable, runnable, static_cast<$Runnable*>($new(WPageDialogPeer$$Lambda$lambda$show$0, this)));
	$$new($Thread, nullptr, runnable, "PageDialog"_s, 0, false)->start();
}

void WPageDialogPeer::lambda$show$0() {
	try {
		$nc(($cast($WPrintDialog, this->target)))->setRetVal(_show());
	} catch ($Exception& e) {
	}
	$nc(($cast($WPrintDialog, this->target)))->setVisible(false);
}

WPageDialogPeer::WPageDialogPeer() {
}

$Class* WPageDialogPeer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WPageDialogPeer$$Lambda$lambda$show$0::classInfo$.name)) {
			return WPageDialogPeer$$Lambda$lambda$show$0::load$(name, initialize);
		}
	}
	$loadClass(WPageDialogPeer, name, initialize, &_WPageDialogPeer_ClassInfo_, allocate$WPageDialogPeer);
	return class$;
}

$Class* WPageDialogPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun