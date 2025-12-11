#include <sun/awt/windows/WScrollPanePeer$Adjustor.h>

#include <java/awt/Adjustable.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/ScrollPane.h>
#include <java/awt/ScrollPaneAdjustable.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/Math.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$ScrollPaneAdjustableAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WScrollPanePeer.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BLOCK_DECREMENT
#undef BLOCK_INCREMENT
#undef FINE
#undef HORIZONTAL
#undef TRACK
#undef UNIT_DECREMENT
#undef UNIT_INCREMENT
#undef VERTICAL

using $Adjustable = ::java::awt::Adjustable;
using $Component = ::java::awt::Component;
using $ScrollPane = ::java::awt::ScrollPane;
using $ScrollPaneAdjustable = ::java::awt::ScrollPaneAdjustable;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$ScrollPaneAdjustableAccessor = ::sun::awt::AWTAccessor$ScrollPaneAdjustableAccessor;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WScrollPanePeer = ::sun::awt::windows::WScrollPanePeer;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WScrollPanePeer$Adjustor_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WScrollPanePeer;", nullptr, $FINAL | $SYNTHETIC, $field(WScrollPanePeer$Adjustor, this$0)},
	{"orient", "I", nullptr, 0, $field(WScrollPanePeer$Adjustor, orient)},
	{"type", "I", nullptr, 0, $field(WScrollPanePeer$Adjustor, type)},
	{"pos", "I", nullptr, 0, $field(WScrollPanePeer$Adjustor, pos)},
	{"isAdjusting", "Z", nullptr, 0, $field(WScrollPanePeer$Adjustor, isAdjusting)},
	{}
};

$MethodInfo _WScrollPanePeer$Adjustor_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WScrollPanePeer;IIIZ)V", nullptr, 0, $method(static_cast<void(WScrollPanePeer$Adjustor::*)($WScrollPanePeer*,int32_t,int32_t,int32_t,bool)>(&WScrollPanePeer$Adjustor::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WScrollPanePeer$Adjustor_InnerClassesInfo_[] = {
	{"sun.awt.windows.WScrollPanePeer$Adjustor", "sun.awt.windows.WScrollPanePeer", "Adjustor", 0},
	{}
};

$ClassInfo _WScrollPanePeer$Adjustor_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WScrollPanePeer$Adjustor",
	"java.lang.Object",
	"java.lang.Runnable",
	_WScrollPanePeer$Adjustor_FieldInfo_,
	_WScrollPanePeer$Adjustor_MethodInfo_,
	nullptr,
	nullptr,
	_WScrollPanePeer$Adjustor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WScrollPanePeer"
};

$Object* allocate$WScrollPanePeer$Adjustor($Class* clazz) {
	return $of($alloc(WScrollPanePeer$Adjustor));
}

void WScrollPanePeer$Adjustor::init$($WScrollPanePeer* this$0, int32_t orient, int32_t type, int32_t pos, bool isAdjusting) {
	$set(this, this$0, this$0);
	this->orient = orient;
	this->type = type;
	this->pos = pos;
	this->isAdjusting = isAdjusting;
}

void WScrollPanePeer$Adjustor::run() {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->getScrollChild() == nullptr) {
		return;
	}
	$var($ScrollPane, sp, $cast($ScrollPane, this->this$0->target));
	$var($ScrollPaneAdjustable, adj, nullptr);
	if (this->orient == $Adjustable::VERTICAL) {
		$assign(adj, $cast($ScrollPaneAdjustable, $nc(sp)->getVAdjustable()));
	} else if (this->orient == $Adjustable::HORIZONTAL) {
		$assign(adj, $cast($ScrollPaneAdjustable, $nc(sp)->getHAdjustable()));
	} else {
		$init($PlatformLogger$Level);
		if ($nc($WScrollPanePeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc($WScrollPanePeer::log)->fine("Assertion failed: unknown orient"_s);
		}
	}
	if (adj == nullptr) {
		return;
	}
	int32_t newpos = $nc(adj)->getValue();
	switch (this->type) {
	case $AdjustmentEvent::UNIT_DECREMENT:
		{
			newpos -= adj->getUnitIncrement();
			break;
		}
	case $AdjustmentEvent::UNIT_INCREMENT:
		{
			newpos += adj->getUnitIncrement();
			break;
		}
	case $AdjustmentEvent::BLOCK_DECREMENT:
		{
			newpos -= adj->getBlockIncrement();
			break;
		}
	case $AdjustmentEvent::BLOCK_INCREMENT:
		{
			newpos += adj->getBlockIncrement();
			break;
		}
	case $AdjustmentEvent::TRACK:
		{
			newpos = this->pos;
			break;
		}
	default:
		{
			$init($PlatformLogger$Level);
			if ($nc($WScrollPanePeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc($WScrollPanePeer::log)->fine("Assertion failed: unknown type"_s);
			}
			return;
		}
	}
	newpos = $Math::max(adj->getMinimum(), newpos);
	newpos = $Math::min(adj->getMaximum(), newpos);
	adj->setValueIsAdjusting(this->isAdjusting);
	$nc($($AWTAccessor::getScrollPaneAdjustableAccessor()))->setTypedValue(adj, newpos, this->type);
	$var($Component, hwAncestor, this->this$0->getScrollChild());
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	while (hwAncestor != nullptr && !($instanceOf($WComponentPeer, $($nc(acc)->getPeer(hwAncestor))))) {
		$assign(hwAncestor, hwAncestor->getParent());
	}
	$init($PlatformLogger$Level);
	if ($nc($WScrollPanePeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		if (hwAncestor == nullptr) {
			$nc($WScrollPanePeer::log)->fine("Assertion (hwAncestor != null) failed, couldn\'t find heavyweight ancestor of scroll pane child"_s);
		}
	}
	$var($WComponentPeer, hwPeer, $cast($WComponentPeer, $nc(acc)->getPeer(hwAncestor)));
	$nc(hwPeer)->paintDamagedAreaImmediately();
}

WScrollPanePeer$Adjustor::WScrollPanePeer$Adjustor() {
}

$Class* WScrollPanePeer$Adjustor::load$($String* name, bool initialize) {
	$loadClass(WScrollPanePeer$Adjustor, name, initialize, &_WScrollPanePeer$Adjustor_ClassInfo_, allocate$WScrollPanePeer$Adjustor);
	return class$;
}

$Class* WScrollPanePeer$Adjustor::class$ = nullptr;

		} // windows
	} // awt
} // sun