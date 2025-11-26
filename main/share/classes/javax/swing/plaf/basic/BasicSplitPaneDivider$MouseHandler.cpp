#include <javax/swing/plaf/basic/BasicSplitPaneDivider$MouseHandler.h>

#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/util/EventObject.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider$DragController.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider$VerticalDragController.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

#undef HORIZONTAL_SPLIT

using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JSplitPane = ::javax::swing::JSplitPane;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneDivider$DragController = ::javax::swing::plaf::basic::BasicSplitPaneDivider$DragController;
using $BasicSplitPaneDivider$VerticalDragController = ::javax::swing::plaf::basic::BasicSplitPaneDivider$VerticalDragController;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSplitPaneDivider$MouseHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneDivider$MouseHandler, this$0)},
	{}
};

$MethodInfo _BasicSplitPaneDivider$MouseHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneDivider;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicSplitPaneDivider$MouseHandler::*)($BasicSplitPaneDivider*)>(&BasicSplitPaneDivider$MouseHandler::init$))},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSplitPaneDivider$MouseHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$MouseHandler", "javax.swing.plaf.basic.BasicSplitPaneDivider", "MouseHandler", $PROTECTED},
	{}
};

$ClassInfo _BasicSplitPaneDivider$MouseHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneDivider$MouseHandler",
	"java.awt.event.MouseAdapter",
	nullptr,
	_BasicSplitPaneDivider$MouseHandler_FieldInfo_,
	_BasicSplitPaneDivider$MouseHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSplitPaneDivider$MouseHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneDivider"
};

$Object* allocate$BasicSplitPaneDivider$MouseHandler($Class* clazz) {
	return $of($alloc(BasicSplitPaneDivider$MouseHandler));
}

void BasicSplitPaneDivider$MouseHandler::init$($BasicSplitPaneDivider* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void BasicSplitPaneDivider$MouseHandler::mousePressed($MouseEvent* e) {
	bool var$1 = $equals($nc(e)->getSource(), this->this$0);
	bool var$0 = (var$1 || $equals($nc(e)->getSource(), this->this$0->splitPane)) && this->this$0->dragger == nullptr;
	if (var$0 && $nc(this->this$0->splitPane)->isEnabled()) {
		$var($Component, newHiddenDivider, $nc(this->this$0->splitPaneUI)->getNonContinuousLayoutDivider());
		if (this->this$0->hiddenDivider != newHiddenDivider) {
			if (this->this$0->hiddenDivider != nullptr) {
				$nc(this->this$0->hiddenDivider)->removeMouseListener(this);
				$nc(this->this$0->hiddenDivider)->removeMouseMotionListener(this);
			}
			$set(this->this$0, hiddenDivider, newHiddenDivider);
			if (this->this$0->hiddenDivider != nullptr) {
				$nc(this->this$0->hiddenDivider)->addMouseMotionListener(this);
				$nc(this->this$0->hiddenDivider)->addMouseListener(this);
			}
		}
		bool var$2 = $nc(this->this$0->splitPane)->getLeftComponent() != nullptr;
		if (var$2 && $nc(this->this$0->splitPane)->getRightComponent() != nullptr) {
			if (this->this$0->orientation == $JSplitPane::HORIZONTAL_SPLIT) {
				$set(this->this$0, dragger, $new($BasicSplitPaneDivider$DragController, this->this$0, e));
			} else {
				$set(this->this$0, dragger, $new($BasicSplitPaneDivider$VerticalDragController, this->this$0, e));
			}
			if (!$nc(this->this$0->dragger)->isValid()) {
				$set(this->this$0, dragger, nullptr);
			} else {
				this->this$0->prepareForDragging();
				$nc(this->this$0->dragger)->continueDrag(e);
			}
		}
		e->consume();
	}
}

void BasicSplitPaneDivider$MouseHandler::mouseReleased($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->dragger != nullptr) {
		if ($equals($nc(e)->getSource(), this->this$0->splitPane)) {
			int32_t var$0 = e->getX();
			$nc(this->this$0->dragger)->completeDrag(var$0, e->getY());
		} else if ($equals(e->getSource(), this->this$0)) {
			$var($Point, ourLoc, this->this$0->getLocation());
			int32_t var$1 = e->getX() + $nc(ourLoc)->x;
			$nc(this->this$0->dragger)->completeDrag(var$1, e->getY() + ourLoc->y);
		} else if ($equals(e->getSource(), this->this$0->hiddenDivider)) {
			$var($Point, hDividerLoc, $nc(this->this$0->hiddenDivider)->getLocation());
			int32_t ourX = e->getX() + $nc(hDividerLoc)->x;
			int32_t ourY = e->getY() + hDividerLoc->y;
			$nc(this->this$0->dragger)->completeDrag(ourX, ourY);
		}
		$set(this->this$0, dragger, nullptr);
		$nc(e)->consume();
	}
}

void BasicSplitPaneDivider$MouseHandler::mouseDragged($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->dragger != nullptr) {
		if ($equals($nc(e)->getSource(), this->this$0->splitPane)) {
			int32_t var$0 = e->getX();
			$nc(this->this$0->dragger)->continueDrag(var$0, e->getY());
		} else if ($equals(e->getSource(), this->this$0)) {
			$var($Point, ourLoc, this->this$0->getLocation());
			int32_t var$1 = e->getX() + $nc(ourLoc)->x;
			$nc(this->this$0->dragger)->continueDrag(var$1, e->getY() + ourLoc->y);
		} else if ($equals(e->getSource(), this->this$0->hiddenDivider)) {
			$var($Point, hDividerLoc, $nc(this->this$0->hiddenDivider)->getLocation());
			int32_t ourX = e->getX() + $nc(hDividerLoc)->x;
			int32_t ourY = e->getY() + hDividerLoc->y;
			$nc(this->this$0->dragger)->continueDrag(ourX, ourY);
		}
		$nc(e)->consume();
	}
}

void BasicSplitPaneDivider$MouseHandler::mouseMoved($MouseEvent* e) {
}

void BasicSplitPaneDivider$MouseHandler::mouseEntered($MouseEvent* e) {
	if ($equals($nc(e)->getSource(), this->this$0)) {
		this->this$0->setMouseOver(true);
	}
}

void BasicSplitPaneDivider$MouseHandler::mouseExited($MouseEvent* e) {
	if ($equals($nc(e)->getSource(), this->this$0)) {
		this->this$0->setMouseOver(false);
	}
}

BasicSplitPaneDivider$MouseHandler::BasicSplitPaneDivider$MouseHandler() {
}

$Class* BasicSplitPaneDivider$MouseHandler::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneDivider$MouseHandler, name, initialize, &_BasicSplitPaneDivider$MouseHandler_ClassInfo_, allocate$BasicSplitPaneDivider$MouseHandler);
	return class$;
}

$Class* BasicSplitPaneDivider$MouseHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax