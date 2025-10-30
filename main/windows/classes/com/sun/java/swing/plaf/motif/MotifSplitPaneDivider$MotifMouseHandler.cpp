#include <com/sun/java/swing/plaf/motif/MotifSplitPaneDivider$MotifMouseHandler.h>

#include <com/sun/java/swing/plaf/motif/MotifSplitPaneDivider.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider$DragController.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider$MouseHandler.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <jcpp.h>

using $MotifSplitPaneDivider = ::com::sun::java::swing::plaf::motif::MotifSplitPaneDivider;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JSplitPane = ::javax::swing::JSplitPane;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneDivider$DragController = ::javax::swing::plaf::basic::BasicSplitPaneDivider$DragController;
using $BasicSplitPaneDivider$MouseHandler = ::javax::swing::plaf::basic::BasicSplitPaneDivider$MouseHandler;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifSplitPaneDivider$MotifMouseHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifSplitPaneDivider;", nullptr, $FINAL | $SYNTHETIC, $field(MotifSplitPaneDivider$MotifMouseHandler, this$0)},
	{}
};

$MethodInfo _MotifSplitPaneDivider$MotifMouseHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifSplitPaneDivider;)V", nullptr, $PRIVATE, $method(static_cast<void(MotifSplitPaneDivider$MotifMouseHandler::*)($MotifSplitPaneDivider*)>(&MotifSplitPaneDivider$MotifMouseHandler::init$))},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifSplitPaneDivider$MotifMouseHandler_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifSplitPaneDivider$MotifMouseHandler", "com.sun.java.swing.plaf.motif.MotifSplitPaneDivider", "MotifMouseHandler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$MouseHandler", "javax.swing.plaf.basic.BasicSplitPaneDivider", "MouseHandler", $PROTECTED},
	{}
};

$ClassInfo _MotifSplitPaneDivider$MotifMouseHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifSplitPaneDivider$MotifMouseHandler",
	"javax.swing.plaf.basic.BasicSplitPaneDivider$MouseHandler",
	nullptr,
	_MotifSplitPaneDivider$MotifMouseHandler_FieldInfo_,
	_MotifSplitPaneDivider$MotifMouseHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MotifSplitPaneDivider$MotifMouseHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifSplitPaneDivider"
};

$Object* allocate$MotifSplitPaneDivider$MotifMouseHandler($Class* clazz) {
	return $of($alloc(MotifSplitPaneDivider$MotifMouseHandler));
}

void MotifSplitPaneDivider$MotifMouseHandler::init$($MotifSplitPaneDivider* this$0) {
	$set(this, this$0, this$0);
	$BasicSplitPaneDivider$MouseHandler::init$(this$0);
}

void MotifSplitPaneDivider$MotifMouseHandler::mousePressed($MouseEvent* e) {
	bool var$2 = $equals($nc(e)->getSource(), this->this$0);
	bool var$1 = var$2 && this->this$0->getDragger() == nullptr;
	bool var$0 = var$1 && $nc($(this->this$0->getSplitPane()))->isEnabled();
	if (var$0) {
		int32_t var$3 = e->getX();
		var$0 = this->this$0->isInThumb(var$3, e->getY());
	}
	if (var$0) {
		$BasicSplitPaneDivider$MouseHandler::mousePressed(e);
	}
}

void MotifSplitPaneDivider$MotifMouseHandler::mouseMoved($MouseEvent* e) {
	if (this->this$0->getDragger() != nullptr) {
		return;
	}
	int32_t var$0 = $nc(e)->getX();
	if (!this->this$0->isInThumb(var$0, e->getY())) {
		if (this->this$0->getCursor() != $MotifSplitPaneDivider::defaultCursor) {
			this->this$0->setCursor($MotifSplitPaneDivider::defaultCursor);
		}
		return;
	}
	$BasicSplitPaneDivider$MouseHandler::mouseMoved(e);
}

MotifSplitPaneDivider$MotifMouseHandler::MotifSplitPaneDivider$MotifMouseHandler() {
}

$Class* MotifSplitPaneDivider$MotifMouseHandler::load$($String* name, bool initialize) {
	$loadClass(MotifSplitPaneDivider$MotifMouseHandler, name, initialize, &_MotifSplitPaneDivider$MotifMouseHandler_ClassInfo_, allocate$MotifSplitPaneDivider$MotifMouseHandler);
	return class$;
}

$Class* MotifSplitPaneDivider$MotifMouseHandler::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com