#include <javax/swing/plaf/basic/BasicScrollBarUI$ArrowButtonListener.h>

#include <java/awt/Component.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI$ScrollListener.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;
using $BasicScrollBarUI$ScrollListener = ::javax::swing::plaf::basic::BasicScrollBarUI$ScrollListener;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicScrollBarUI$ArrowButtonListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicScrollBarUI$ArrowButtonListener, this$0)},
	{"handledEvent", "Z", nullptr, 0, $field(BasicScrollBarUI$ArrowButtonListener, handledEvent)},
	{}
};

$MethodInfo _BasicScrollBarUI$ArrowButtonListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicScrollBarUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicScrollBarUI$ArrowButtonListener::*)($BasicScrollBarUI*)>(&BasicScrollBarUI$ArrowButtonListener::init$))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicScrollBarUI$ArrowButtonListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicScrollBarUI$ArrowButtonListener", "javax.swing.plaf.basic.BasicScrollBarUI", "ArrowButtonListener", $PROTECTED},
	{}
};

$ClassInfo _BasicScrollBarUI$ArrowButtonListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicScrollBarUI$ArrowButtonListener",
	"java.awt.event.MouseAdapter",
	nullptr,
	_BasicScrollBarUI$ArrowButtonListener_FieldInfo_,
	_BasicScrollBarUI$ArrowButtonListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicScrollBarUI$ArrowButtonListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicScrollBarUI"
};

$Object* allocate$BasicScrollBarUI$ArrowButtonListener($Class* clazz) {
	return $of($alloc(BasicScrollBarUI$ArrowButtonListener));
}

void BasicScrollBarUI$ArrowButtonListener::init$($BasicScrollBarUI* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void BasicScrollBarUI$ArrowButtonListener::mousePressed($MouseEvent* e) {
	if (!$nc(this->this$0->scrollbar)->isEnabled()) {
		return;
	}
	if (!$SwingUtilities::isLeftMouseButton(e)) {
		return;
	}
	int32_t direction = ($equals($nc(e)->getSource(), this->this$0->incrButton)) ? 1 : -1;
	this->this$0->scrollByUnit(direction);
	$nc(this->this$0->scrollTimer)->stop();
	$nc(this->this$0->scrollListener)->setDirection(direction);
	$nc(this->this$0->scrollListener)->setScrollByBlock(false);
	$nc(this->this$0->scrollTimer)->start();
	this->handledEvent = true;
	bool var$0 = !$nc(this->this$0->scrollbar)->hasFocus();
	if (var$0 && $nc(this->this$0->scrollbar)->isRequestFocusEnabled()) {
		$nc(this->this$0->scrollbar)->requestFocus();
	}
}

void BasicScrollBarUI$ArrowButtonListener::mouseReleased($MouseEvent* e) {
	$nc(this->this$0->scrollTimer)->stop();
	this->handledEvent = false;
	$nc(this->this$0->scrollbar)->setValueIsAdjusting(false);
}

BasicScrollBarUI$ArrowButtonListener::BasicScrollBarUI$ArrowButtonListener() {
}

$Class* BasicScrollBarUI$ArrowButtonListener::load$($String* name, bool initialize) {
	$loadClass(BasicScrollBarUI$ArrowButtonListener, name, initialize, &_BasicScrollBarUI$ArrowButtonListener_ClassInfo_, allocate$BasicScrollBarUI$ArrowButtonListener);
	return class$;
}

$Class* BasicScrollBarUI$ArrowButtonListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax