#include <javax/swing/plaf/basic/BasicSplitPaneDivider$DragController.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Math.h>
#include <java/util/EventObject.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSplitPane = ::javax::swing::JSplitPane;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSplitPaneDivider$DragController_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneDivider$DragController, this$0)},
	{"initialX", "I", nullptr, 0, $field(BasicSplitPaneDivider$DragController, initialX)},
	{"maxX", "I", nullptr, 0, $field(BasicSplitPaneDivider$DragController, maxX)},
	{"minX", "I", nullptr, 0, $field(BasicSplitPaneDivider$DragController, minX)},
	{"offset", "I", nullptr, 0, $field(BasicSplitPaneDivider$DragController, offset)},
	{}
};

$MethodInfo _BasicSplitPaneDivider$DragController_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneDivider;Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicSplitPaneDivider$DragController::*)($BasicSplitPaneDivider*,$MouseEvent*)>(&BasicSplitPaneDivider$DragController::init$))},
	{"completeDrag", "(II)V", nullptr, $PROTECTED},
	{"completeDrag", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED},
	{"continueDrag", "(II)V", nullptr, $PROTECTED},
	{"continueDrag", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED},
	{"getNeededLocation", "(II)I", nullptr, $PROTECTED},
	{"isValid", "()Z", nullptr, $PROTECTED},
	{"positionForMouseEvent", "(Ljava/awt/event/MouseEvent;)I", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _BasicSplitPaneDivider$DragController_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$DragController", "javax.swing.plaf.basic.BasicSplitPaneDivider", "DragController", $PROTECTED},
	{}
};

$ClassInfo _BasicSplitPaneDivider$DragController_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneDivider$DragController",
	"java.lang.Object",
	nullptr,
	_BasicSplitPaneDivider$DragController_FieldInfo_,
	_BasicSplitPaneDivider$DragController_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSplitPaneDivider$DragController_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneDivider"
};

$Object* allocate$BasicSplitPaneDivider$DragController($Class* clazz) {
	return $of($alloc(BasicSplitPaneDivider$DragController));
}

void BasicSplitPaneDivider$DragController::init$($BasicSplitPaneDivider* this$0, $MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$var($JSplitPane, splitPane, $nc(this$0->splitPaneUI)->getSplitPane());
	$var($Component, leftC, $nc(splitPane)->getLeftComponent());
	$var($Component, rightC, splitPane->getRightComponent());
	this->initialX = $nc($(this$0->getLocation()))->x;
	if ($equals($nc(e)->getSource(), this$0)) {
		this->offset = e->getX();
	} else {
		this->offset = e->getX() - this->initialX;
	}
	if (leftC == nullptr || rightC == nullptr || this->offset < -1 || this->offset >= $nc($(this$0->getSize()))->width) {
		this->maxX = -1;
	} else {
		$var($Insets, insets, splitPane->getInsets());
		if ($nc(leftC)->isVisible()) {
			this->minX = $nc($(leftC->getMinimumSize()))->width;
			if (insets != nullptr) {
				this->minX += insets->left;
			}
		} else {
			this->minX = 0;
		}
		if ($nc(rightC)->isVisible()) {
			int32_t right = (insets != nullptr) ? $nc(insets)->right : 0;
			int32_t var$1 = $nc($(splitPane->getSize()))->width;
			int32_t var$0 = var$1 - ($nc($(this$0->getSize()))->width + right);
			this->maxX = $Math::max(0, var$0 - $nc($(rightC->getMinimumSize()))->width);
		} else {
			int32_t right = (insets != nullptr) ? $nc(insets)->right : 0;
			int32_t var$2 = $nc($(splitPane->getSize()))->width;
			this->maxX = $Math::max(0, var$2 - ($nc($(this$0->getSize()))->width + right));
		}
		if (this->maxX < this->minX) {
			this->minX = (this->maxX = 0);
		}
	}
}

bool BasicSplitPaneDivider$DragController::isValid() {
	return (this->maxX > 0);
}

int32_t BasicSplitPaneDivider$DragController::positionForMouseEvent($MouseEvent* e) {
	int32_t var$0 = 0;
	if ($equals($nc(e)->getSource(), this->this$0)) {
		int32_t var$1 = $nc(e)->getX();
		var$0 = (var$1 + $nc($(this->this$0->getLocation()))->x);
	} else {
		var$0 = e->getX();
	}
	int32_t newX = var$0;
	newX = $Math::min(this->maxX, $Math::max(this->minX, newX - this->offset));
	return newX;
}

int32_t BasicSplitPaneDivider$DragController::getNeededLocation(int32_t x, int32_t y) {
	int32_t newX = 0;
	newX = $Math::min(this->maxX, $Math::max(this->minX, x - this->offset));
	return newX;
}

void BasicSplitPaneDivider$DragController::continueDrag(int32_t newX, int32_t newY) {
	this->this$0->dragDividerTo(getNeededLocation(newX, newY));
}

void BasicSplitPaneDivider$DragController::continueDrag($MouseEvent* e) {
	this->this$0->dragDividerTo(positionForMouseEvent(e));
}

void BasicSplitPaneDivider$DragController::completeDrag(int32_t x, int32_t y) {
	this->this$0->finishDraggingTo(getNeededLocation(x, y));
}

void BasicSplitPaneDivider$DragController::completeDrag($MouseEvent* e) {
	this->this$0->finishDraggingTo(positionForMouseEvent(e));
}

BasicSplitPaneDivider$DragController::BasicSplitPaneDivider$DragController() {
}

$Class* BasicSplitPaneDivider$DragController::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneDivider$DragController, name, initialize, &_BasicSplitPaneDivider$DragController_ClassInfo_, allocate$BasicSplitPaneDivider$DragController);
	return class$;
}

$Class* BasicSplitPaneDivider$DragController::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax