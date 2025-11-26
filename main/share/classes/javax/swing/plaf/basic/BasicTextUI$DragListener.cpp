#include <javax/swing/plaf/basic/BasicTextUI$DragListener.h>

#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Math.h>
#include <java/util/EventObject.h>
#include <javax/swing/event/MouseInputAdapter.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/plaf/basic/DragRecognitionSupport$BeforeDrag.h>
#include <javax/swing/plaf/basic/DragRecognitionSupport.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $MouseInputAdapter = ::javax::swing::event::MouseInputAdapter;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $DragRecognitionSupport = ::javax::swing::plaf::basic::DragRecognitionSupport;
using $DragRecognitionSupport$BeforeDrag = ::javax::swing::plaf::basic::DragRecognitionSupport$BeforeDrag;
using $Caret = ::javax::swing::text::Caret;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTextUI$DragListener_FieldInfo_[] = {
	{"dragStarted", "Z", nullptr, $PRIVATE, $field(BasicTextUI$DragListener, dragStarted)},
	{}
};

$MethodInfo _BasicTextUI$DragListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicTextUI$DragListener::*)()>(&BasicTextUI$DragListener::init$))},
	{"dragStarting", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"isDragPossible", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PROTECTED},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTextUI$DragListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextUI$DragListener", "javax.swing.plaf.basic.BasicTextUI", "DragListener", $STATIC},
	{"javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag", "javax.swing.plaf.basic.DragRecognitionSupport", "BeforeDrag", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _BasicTextUI$DragListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextUI$DragListener",
	"javax.swing.event.MouseInputAdapter",
	"javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag",
	_BasicTextUI$DragListener_FieldInfo_,
	_BasicTextUI$DragListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTextUI$DragListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextUI"
};

$Object* allocate$BasicTextUI$DragListener($Class* clazz) {
	return $of($alloc(BasicTextUI$DragListener));
}

int32_t BasicTextUI$DragListener::hashCode() {
	 return this->$MouseInputAdapter::hashCode();
}

bool BasicTextUI$DragListener::equals(Object$* arg0) {
	 return this->$MouseInputAdapter::equals(arg0);
}

$Object* BasicTextUI$DragListener::clone() {
	 return this->$MouseInputAdapter::clone();
}

$String* BasicTextUI$DragListener::toString() {
	 return this->$MouseInputAdapter::toString();
}

void BasicTextUI$DragListener::finalize() {
	this->$MouseInputAdapter::finalize();
}

void BasicTextUI$DragListener::init$() {
	$MouseInputAdapter::init$();
}

void BasicTextUI$DragListener::dragStarting($MouseEvent* me) {
	this->dragStarted = true;
}

void BasicTextUI$DragListener::mousePressed($MouseEvent* e) {
	$var($JTextComponent, c, $cast($JTextComponent, $nc(e)->getSource()));
	if ($nc(c)->getDragEnabled()) {
		this->dragStarted = false;
		bool var$0 = isDragPossible(e);
		if (var$0 && $DragRecognitionSupport::mousePressed(e)) {
			e->consume();
		}
	}
}

void BasicTextUI$DragListener::mouseReleased($MouseEvent* e) {
	$var($JTextComponent, c, $cast($JTextComponent, $nc(e)->getSource()));
	if ($nc(c)->getDragEnabled()) {
		if (this->dragStarted) {
			e->consume();
		}
		$DragRecognitionSupport::mouseReleased(e);
	}
}

void BasicTextUI$DragListener::mouseDragged($MouseEvent* e) {
	$var($JTextComponent, c, $cast($JTextComponent, $nc(e)->getSource()));
	if ($nc(c)->getDragEnabled()) {
		if (this->dragStarted || $DragRecognitionSupport::mouseDragged(e, this)) {
			e->consume();
		}
	}
}

bool BasicTextUI$DragListener::isDragPossible($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, c, $cast($JTextComponent, $nc(e)->getSource()));
	if ($nc(c)->isEnabled()) {
		$var($Caret, caret, c->getCaret());
		int32_t dot = $nc(caret)->getDot();
		int32_t mark = caret->getMark();
		if (dot != mark) {
			int32_t var$0 = e->getX();
			$var($Point, p, $new($Point, var$0, e->getY()));
			int32_t pos = c->viewToModel(p);
			int32_t p0 = $Math::min(dot, mark);
			int32_t p1 = $Math::max(dot, mark);
			if ((pos >= p0) && (pos < p1)) {
				return true;
			}
		}
	}
	return false;
}

BasicTextUI$DragListener::BasicTextUI$DragListener() {
}

$Class* BasicTextUI$DragListener::load$($String* name, bool initialize) {
	$loadClass(BasicTextUI$DragListener, name, initialize, &_BasicTextUI$DragListener_ClassInfo_, allocate$BasicTextUI$DragListener);
	return class$;
}

$Class* BasicTextUI$DragListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax