#include <javax/swing/plaf/basic/BasicSplitPaneDivider$VerticalDragController.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider$DragController.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneDivider$DragController = ::javax::swing::plaf::basic::BasicSplitPaneDivider$DragController;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSplitPaneDivider$VerticalDragController_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneDivider$VerticalDragController, this$0)},
	{}
};

$MethodInfo _BasicSplitPaneDivider$VerticalDragController_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneDivider;Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicSplitPaneDivider$VerticalDragController::*)($BasicSplitPaneDivider*,$MouseEvent*)>(&BasicSplitPaneDivider$VerticalDragController::init$))},
	{"getNeededLocation", "(II)I", nullptr, $PROTECTED},
	{"positionForMouseEvent", "(Ljava/awt/event/MouseEvent;)I", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _BasicSplitPaneDivider$VerticalDragController_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$VerticalDragController", "javax.swing.plaf.basic.BasicSplitPaneDivider", "VerticalDragController", $PROTECTED},
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$DragController", "javax.swing.plaf.basic.BasicSplitPaneDivider", "DragController", $PROTECTED},
	{}
};

$ClassInfo _BasicSplitPaneDivider$VerticalDragController_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneDivider$VerticalDragController",
	"javax.swing.plaf.basic.BasicSplitPaneDivider$DragController",
	nullptr,
	_BasicSplitPaneDivider$VerticalDragController_FieldInfo_,
	_BasicSplitPaneDivider$VerticalDragController_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSplitPaneDivider$VerticalDragController_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneDivider"
};

$Object* allocate$BasicSplitPaneDivider$VerticalDragController($Class* clazz) {
	return $of($alloc(BasicSplitPaneDivider$VerticalDragController));
}

void BasicSplitPaneDivider$VerticalDragController::init$($BasicSplitPaneDivider* this$0, $MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$BasicSplitPaneDivider$DragController::init$(this$0, e);
	$var($JSplitPane, splitPane, $nc(this$0->splitPaneUI)->getSplitPane());
	$var($Component, leftC, $nc(splitPane)->getLeftComponent());
	$var($Component, rightC, splitPane->getRightComponent());
	this->initialX = $nc($(this$0->getLocation()))->y;
	if ($equals($nc(e)->getSource(), this$0)) {
		this->offset = e->getY();
	} else {
		this->offset = e->getY() - this->initialX;
	}
	if (leftC == nullptr || rightC == nullptr || this->offset < -1 || this->offset > $nc($(this$0->getSize()))->height) {
		this->maxX = -1;
	} else {
		$var($Insets, insets, splitPane->getInsets());
		if ($nc(leftC)->isVisible()) {
			this->minX = $nc($(leftC->getMinimumSize()))->height;
			if (insets != nullptr) {
				this->minX += insets->top;
			}
		} else {
			this->minX = 0;
		}
		if ($nc(rightC)->isVisible()) {
			int32_t bottom = (insets != nullptr) ? $nc(insets)->bottom : 0;
			int32_t var$1 = $nc($(splitPane->getSize()))->height;
			int32_t var$0 = var$1 - ($nc($(this$0->getSize()))->height + bottom);
			this->maxX = $Math::max(0, var$0 - $nc($(rightC->getMinimumSize()))->height);
		} else {
			int32_t bottom = (insets != nullptr) ? $nc(insets)->bottom : 0;
			int32_t var$2 = $nc($(splitPane->getSize()))->height;
			this->maxX = $Math::max(0, var$2 - ($nc($(this$0->getSize()))->height + bottom));
		}
		if (this->maxX < this->minX) {
			this->minX = (this->maxX = 0);
		}
	}
}

int32_t BasicSplitPaneDivider$VerticalDragController::getNeededLocation(int32_t x, int32_t y) {
	int32_t newY = 0;
	newY = $Math::min(this->maxX, $Math::max(this->minX, y - this->offset));
	return newY;
}

int32_t BasicSplitPaneDivider$VerticalDragController::positionForMouseEvent($MouseEvent* e) {
	int32_t var$0 = 0;
	if ($equals($nc(e)->getSource(), this->this$0)) {
		int32_t var$1 = $nc(e)->getY();
		var$0 = (var$1 + $nc($(this->this$0->getLocation()))->y);
	} else {
		var$0 = e->getY();
	}
	int32_t newY = var$0;
	newY = $Math::min(this->maxX, $Math::max(this->minX, newY - this->offset));
	return newY;
}

BasicSplitPaneDivider$VerticalDragController::BasicSplitPaneDivider$VerticalDragController() {
}

$Class* BasicSplitPaneDivider$VerticalDragController::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneDivider$VerticalDragController, name, initialize, &_BasicSplitPaneDivider$VerticalDragController_ClassInfo_, allocate$BasicSplitPaneDivider$VerticalDragController);
	return class$;
}

$Class* BasicSplitPaneDivider$VerticalDragController::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax