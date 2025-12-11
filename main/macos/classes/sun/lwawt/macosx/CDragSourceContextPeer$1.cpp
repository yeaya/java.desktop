#include <sun/lwawt/macosx/CDragSourceContextPeer$1.h>

#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/macosx/CDragSourceContextPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $CDragSourceContextPeer = ::sun::lwawt::macosx::CDragSourceContextPeer;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CDragSourceContextPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CDragSourceContextPeer;", nullptr, $FINAL | $SYNTHETIC, $field(CDragSourceContextPeer$1, this$0)},
	{"val$y", "I", nullptr, $FINAL | $SYNTHETIC, $field(CDragSourceContextPeer$1, val$y)},
	{"val$x", "I", nullptr, $FINAL | $SYNTHETIC, $field(CDragSourceContextPeer$1, val$x)},
	{}
};

$MethodInfo _CDragSourceContextPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CDragSourceContextPeer;II)V", "()V", 0, $method(static_cast<void(CDragSourceContextPeer$1::*)($CDragSourceContextPeer*,int32_t,int32_t)>(&CDragSourceContextPeer$1::init$))},
	{"call", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CDragSourceContextPeer$1_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CDragSourceContextPeer",
	"dragMouseMoved",
	"(IIII)V"
};

$InnerClassInfo _CDragSourceContextPeer$1_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CDragSourceContextPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CDragSourceContextPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CDragSourceContextPeer$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_CDragSourceContextPeer$1_FieldInfo_,
	_CDragSourceContextPeer$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/awt/Component;>;",
	&_CDragSourceContextPeer$1_EnclosingMethodInfo_,
	_CDragSourceContextPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CDragSourceContextPeer"
};

$Object* allocate$CDragSourceContextPeer$1($Class* clazz) {
	return $of($alloc(CDragSourceContextPeer$1));
}

void CDragSourceContextPeer$1::init$($CDragSourceContextPeer* this$0, int32_t val$x, int32_t val$y) {
	$set(this, this$0, this$0);
	this->val$x = val$x;
	this->val$y = val$y;
}

$Object* CDragSourceContextPeer$1::call() {
	$useLocalCurrentObjectStackCache();
	$var($LWWindowPeer, mouseEventComponent, $LWWindowPeer::getWindowUnderCursor());
	if (mouseEventComponent == nullptr) {
		return $of(nullptr);
	}
	$var($Component, root, $SwingUtilities::getRoot($($nc(mouseEventComponent)->getTarget())));
	if (root == nullptr) {
		return $of(nullptr);
	}
	$var($Point, rootLocation, $nc(root)->getLocationOnScreen());
	return $of($CDragSourceContextPeer::getDropTargetAt(root, this->val$x - $nc(rootLocation)->x, this->val$y - rootLocation->y));
}

CDragSourceContextPeer$1::CDragSourceContextPeer$1() {
}

$Class* CDragSourceContextPeer$1::load$($String* name, bool initialize) {
	$loadClass(CDragSourceContextPeer$1, name, initialize, &_CDragSourceContextPeer$1_ClassInfo_, allocate$CDragSourceContextPeer$1);
	return class$;
}

$Class* CDragSourceContextPeer$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun