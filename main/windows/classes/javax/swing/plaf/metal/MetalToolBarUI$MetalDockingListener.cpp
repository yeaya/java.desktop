#include <javax/swing/plaf/metal/MetalToolBarUI$MetalDockingListener.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$DockingListener.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <javax/swing/plaf/metal/MetalToolBarUI.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

#undef HORIZONTAL

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JToolBar = ::javax::swing::JToolBar;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;
using $BasicToolBarUI$DockingListener = ::javax::swing::plaf::basic::BasicToolBarUI$DockingListener;
using $MetalToolBarUI = ::javax::swing::plaf::metal::MetalToolBarUI;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalToolBarUI$MetalDockingListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalToolBarUI$MetalDockingListener, this$0)},
	{"pressedInBumps", "Z", nullptr, $PRIVATE, $field(MetalToolBarUI$MetalDockingListener, pressedInBumps)},
	{}
};

$MethodInfo _MetalToolBarUI$MetalDockingListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalToolBarUI;Ljavax/swing/JToolBar;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalToolBarUI$MetalDockingListener::*)($MetalToolBarUI*,$JToolBar*)>(&MetalToolBarUI$MetalDockingListener::init$))},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalToolBarUI$MetalDockingListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalToolBarUI$MetalDockingListener", "javax.swing.plaf.metal.MetalToolBarUI", "MetalDockingListener", $PROTECTED},
	{"javax.swing.plaf.basic.BasicToolBarUI$DockingListener", "javax.swing.plaf.basic.BasicToolBarUI", "DockingListener", $PUBLIC},
	{}
};

$ClassInfo _MetalToolBarUI$MetalDockingListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalToolBarUI$MetalDockingListener",
	"javax.swing.plaf.basic.BasicToolBarUI$DockingListener",
	nullptr,
	_MetalToolBarUI$MetalDockingListener_FieldInfo_,
	_MetalToolBarUI$MetalDockingListener_MethodInfo_,
	nullptr,
	nullptr,
	_MetalToolBarUI$MetalDockingListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalToolBarUI"
};

$Object* allocate$MetalToolBarUI$MetalDockingListener($Class* clazz) {
	return $of($alloc(MetalToolBarUI$MetalDockingListener));
}

void MetalToolBarUI$MetalDockingListener::init$($MetalToolBarUI* this$0, $JToolBar* t) {
	$set(this, this$0, this$0);
	$BasicToolBarUI$DockingListener::init$(this$0, t);
	this->pressedInBumps = false;
}

void MetalToolBarUI$MetalDockingListener::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$BasicToolBarUI$DockingListener::mousePressed(e);
	if (!$nc(this->toolBar)->isEnabled()) {
		return;
	}
	this->pressedInBumps = false;
	$var($Rectangle, bumpRect, $new($Rectangle));
	if ($nc(this->toolBar)->getOrientation() == $JToolBar::HORIZONTAL) {
		int32_t x = $MetalUtils::isLeftToRight(this->toolBar) ? 0 : $nc($($nc(this->toolBar)->getSize()))->width - 14;
		bumpRect->setBounds(x, 0, 14, $nc($($nc(this->toolBar)->getSize()))->height);
	} else {
		bumpRect->setBounds(0, 0, $nc($($nc(this->toolBar)->getSize()))->width, 14);
	}
	if (bumpRect->contains($($nc(e)->getPoint()))) {
		this->pressedInBumps = true;
		$var($Point, dragOffset, $nc(e)->getPoint());
		if (!$MetalUtils::isLeftToRight(this->toolBar)) {
			int32_t var$0 = $nc($($nc(this->toolBar)->getSize()))->width;
			$nc(dragOffset)->x -= (var$0 - $nc($($nc(this->toolBar)->getPreferredSize()))->width);
		}
		this->this$0->setDragOffset(dragOffset);
	}
}

void MetalToolBarUI$MetalDockingListener::mouseDragged($MouseEvent* e) {
	if (this->pressedInBumps) {
		$BasicToolBarUI$DockingListener::mouseDragged(e);
	}
}

MetalToolBarUI$MetalDockingListener::MetalToolBarUI$MetalDockingListener() {
}

$Class* MetalToolBarUI$MetalDockingListener::load$($String* name, bool initialize) {
	$loadClass(MetalToolBarUI$MetalDockingListener, name, initialize, &_MetalToolBarUI$MetalDockingListener_ClassInfo_, allocate$MetalToolBarUI$MetalDockingListener);
	return class$;
}

$Class* MetalToolBarUI$MetalDockingListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax