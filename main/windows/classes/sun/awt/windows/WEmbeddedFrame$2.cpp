#include <sun/awt/windows/WEmbeddedFrame$2.h>

#include <java/awt/peer/FramePeer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WEmbeddedFrame.h>
#include <jcpp.h>

using $FramePeer = ::java::awt::peer::FramePeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WEmbeddedFrame = ::sun::awt::windows::WEmbeddedFrame;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WEmbeddedFrame$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WEmbeddedFrame;", nullptr, $FINAL | $SYNTHETIC, $field(WEmbeddedFrame$2, this$0)},
	{"val$peer", "Ljava/awt/peer/FramePeer;", nullptr, $FINAL | $SYNTHETIC, $field(WEmbeddedFrame$2, val$peer)},
	{}
};

$MethodInfo _WEmbeddedFrame$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WEmbeddedFrame;Ljava/awt/peer/FramePeer;)V", "()V", 0, $method(static_cast<void(WEmbeddedFrame$2::*)($WEmbeddedFrame*,$FramePeer*)>(&WEmbeddedFrame$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WEmbeddedFrame$2_EnclosingMethodInfo_ = {
	"sun.awt.windows.WEmbeddedFrame",
	"synthesizeWindowActivation",
	"(Z)V"
};

$InnerClassInfo _WEmbeddedFrame$2_InnerClassesInfo_[] = {
	{"sun.awt.windows.WEmbeddedFrame$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WEmbeddedFrame$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WEmbeddedFrame$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_WEmbeddedFrame$2_FieldInfo_,
	_WEmbeddedFrame$2_MethodInfo_,
	nullptr,
	&_WEmbeddedFrame$2_EnclosingMethodInfo_,
	_WEmbeddedFrame$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WEmbeddedFrame"
};

$Object* allocate$WEmbeddedFrame$2($Class* clazz) {
	return $of($alloc(WEmbeddedFrame$2));
}

void WEmbeddedFrame$2::init$($WEmbeddedFrame* this$0, $FramePeer* val$peer) {
	$set(this, this$0, this$0);
	$set(this, val$peer, val$peer);
}

void WEmbeddedFrame$2::run() {
	$nc(this->val$peer)->emulateActivation(true);
}

WEmbeddedFrame$2::WEmbeddedFrame$2() {
}

$Class* WEmbeddedFrame$2::load$($String* name, bool initialize) {
	$loadClass(WEmbeddedFrame$2, name, initialize, &_WEmbeddedFrame$2_ClassInfo_, allocate$WEmbeddedFrame$2);
	return class$;
}

$Class* WEmbeddedFrame$2::class$ = nullptr;

		} // windows
	} // awt
} // sun