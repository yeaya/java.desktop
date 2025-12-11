#include <sun/lwawt/LWComponentPeer$1.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;

namespace sun {
	namespace lwawt {

$FieldInfo _LWComponentPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/LWComponentPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWComponentPeer$1, this$0)},
	{}
};

$MethodInfo _LWComponentPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWComponentPeer;)V", nullptr, 0, $method(static_cast<void(LWComponentPeer$1::*)($LWComponentPeer*)>(&LWComponentPeer$1::init$))},
	{"addDirtyRegion", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LWComponentPeer$1_EnclosingMethodInfo_ = {
	"sun.lwawt.LWComponentPeer",
	"<init>",
	"(Ljava/awt/Component;Lsun/lwawt/PlatformComponent;)V"
};

$InnerClassInfo _LWComponentPeer$1_InnerClassesInfo_[] = {
	{"sun.lwawt.LWComponentPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWComponentPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.LWComponentPeer$1",
	"javax.swing.RepaintManager",
	nullptr,
	_LWComponentPeer$1_FieldInfo_,
	_LWComponentPeer$1_MethodInfo_,
	nullptr,
	&_LWComponentPeer$1_EnclosingMethodInfo_,
	_LWComponentPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWComponentPeer"
};

$Object* allocate$LWComponentPeer$1($Class* clazz) {
	return $of($alloc(LWComponentPeer$1));
}

void LWComponentPeer$1::init$($LWComponentPeer* this$0) {
	$set(this, this$0, this$0);
	$RepaintManager::init$();
}

void LWComponentPeer$1::addDirtyRegion($JComponent* c, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Component, var$0, static_cast<$Component*>(c));
	$var($Rectangle, var$1, $new($Rectangle, x, y, w, h));
	this->this$0->repaintPeer($($SwingUtilities::convertRectangle(var$0, var$1, $(this->this$0->getDelegate()))));
}

LWComponentPeer$1::LWComponentPeer$1() {
}

$Class* LWComponentPeer$1::load$($String* name, bool initialize) {
	$loadClass(LWComponentPeer$1, name, initialize, &_LWComponentPeer$1_ClassInfo_, allocate$LWComponentPeer$1);
	return class$;
}

$Class* LWComponentPeer$1::class$ = nullptr;

	} // lwawt
} // sun