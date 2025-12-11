#include <sun/lwawt/LWScrollPanePeer$1.h>

#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWScrollPanePeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $LWScrollPanePeer = ::sun::lwawt::LWScrollPanePeer;

namespace sun {
	namespace lwawt {

$FieldInfo _LWScrollPanePeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/LWScrollPanePeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWScrollPanePeer$1, this$0)},
	{}
};

$MethodInfo _LWScrollPanePeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWScrollPanePeer;)V", nullptr, 0, $method(static_cast<void(LWScrollPanePeer$1::*)($LWScrollPanePeer*)>(&LWScrollPanePeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LWScrollPanePeer$1_EnclosingMethodInfo_ = {
	"sun.lwawt.LWScrollPanePeer",
	"stateChanged",
	"(Ljavax/swing/event/ChangeEvent;)V"
};

$InnerClassInfo _LWScrollPanePeer$1_InnerClassesInfo_[] = {
	{"sun.lwawt.LWScrollPanePeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWScrollPanePeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.LWScrollPanePeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_LWScrollPanePeer$1_FieldInfo_,
	_LWScrollPanePeer$1_MethodInfo_,
	nullptr,
	&_LWScrollPanePeer$1_EnclosingMethodInfo_,
	_LWScrollPanePeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWScrollPanePeer"
};

$Object* allocate$LWScrollPanePeer$1($Class* clazz) {
	return $of($alloc(LWScrollPanePeer$1));
}

void LWScrollPanePeer$1::init$($LWScrollPanePeer* this$0) {
	$set(this, this$0, this$0);
}

void LWScrollPanePeer$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($LWComponentPeer, viewPeer, this->this$0->getViewPeer());
	if (viewPeer != nullptr) {
		$var($Rectangle, r, nullptr);
		$synchronized(this->this$0->getDelegateLock()) {
			$assign(r, $nc($($nc($($nc(($cast($JScrollPane, $(this->this$0->getDelegate()))))->getViewport()))->getView()))->getBounds());
		}
		viewPeer->setBounds($nc(r)->x, r->y, r->width, r->height, 3, true, true);
	}
}

LWScrollPanePeer$1::LWScrollPanePeer$1() {
}

$Class* LWScrollPanePeer$1::load$($String* name, bool initialize) {
	$loadClass(LWScrollPanePeer$1, name, initialize, &_LWScrollPanePeer$1_ClassInfo_, allocate$LWScrollPanePeer$1);
	return class$;
}

$Class* LWScrollPanePeer$1::class$ = nullptr;

	} // lwawt
} // sun