#include <javax/swing/plaf/metal/MetalScrollBarUI$ScrollBarListener.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI$PropertyChangeHandler.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <javax/swing/plaf/metal/MetalScrollBarUI.h>
#include <javax/swing/plaf/metal/MetalScrollButton.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;
using $BasicScrollBarUI$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicScrollBarUI$PropertyChangeHandler;
using $MetalScrollBarUI = ::javax::swing::plaf::metal::MetalScrollBarUI;
using $MetalScrollButton = ::javax::swing::plaf::metal::MetalScrollButton;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalScrollBarUI$ScrollBarListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalScrollBarUI$ScrollBarListener, this$0)},
	{}
};

$MethodInfo _MetalScrollBarUI$ScrollBarListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalScrollBarUI;)V", nullptr, 0, $method(static_cast<void(MetalScrollBarUI$ScrollBarListener::*)($MetalScrollBarUI*)>(&MetalScrollBarUI$ScrollBarListener::init$))},
	{"handlePropertyChange", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"toFlush", "()V", nullptr, $PROTECTED},
	{"toFreeStanding", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetalScrollBarUI$ScrollBarListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalScrollBarUI$ScrollBarListener", "javax.swing.plaf.metal.MetalScrollBarUI", "ScrollBarListener", 0},
	{"javax.swing.plaf.basic.BasicScrollBarUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicScrollBarUI", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _MetalScrollBarUI$ScrollBarListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalScrollBarUI$ScrollBarListener",
	"javax.swing.plaf.basic.BasicScrollBarUI$PropertyChangeHandler",
	nullptr,
	_MetalScrollBarUI$ScrollBarListener_FieldInfo_,
	_MetalScrollBarUI$ScrollBarListener_MethodInfo_,
	nullptr,
	nullptr,
	_MetalScrollBarUI$ScrollBarListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalScrollBarUI"
};

$Object* allocate$MetalScrollBarUI$ScrollBarListener($Class* clazz) {
	return $of($alloc(MetalScrollBarUI$ScrollBarListener));
}

void MetalScrollBarUI$ScrollBarListener::init$($MetalScrollBarUI* this$0) {
	$set(this, this$0, this$0);
	$BasicScrollBarUI$PropertyChangeHandler::init$(this$0);
}

void MetalScrollBarUI$ScrollBarListener::propertyChange($PropertyChangeEvent* e) {
	$var($String, name, $nc(e)->getPropertyName());
	if ($nc(name)->equals("JScrollBar.isFreeStanding"_s)) {
		handlePropertyChange($(e->getNewValue()));
	} else {
		$BasicScrollBarUI$PropertyChangeHandler::propertyChange(e);
	}
}

void MetalScrollBarUI$ScrollBarListener::handlePropertyChange(Object$* newValue) {
	if (newValue != nullptr) {
		bool temp = $nc(($cast($Boolean, newValue)))->booleanValue();
		bool becameFlush = temp == false && this->this$0->isFreeStanding == true;
		bool becameNormal = temp == true && this->this$0->isFreeStanding == false;
		this->this$0->isFreeStanding = temp;
		if (becameFlush) {
			toFlush();
		} else if (becameNormal) {
			toFreeStanding();
		}
	} else if (!this->this$0->isFreeStanding) {
		this->this$0->isFreeStanding = true;
		toFreeStanding();
	}
	if (this->this$0->increaseButton != nullptr) {
		$nc(this->this$0->increaseButton)->setFreeStanding(this->this$0->isFreeStanding);
	}
	if (this->this$0->decreaseButton != nullptr) {
		$nc(this->this$0->decreaseButton)->setFreeStanding(this->this$0->isFreeStanding);
	}
}

void MetalScrollBarUI$ScrollBarListener::toFlush() {
	this->this$0->scrollBarWidth -= 2;
}

void MetalScrollBarUI$ScrollBarListener::toFreeStanding() {
	this->this$0->scrollBarWidth += 2;
}

MetalScrollBarUI$ScrollBarListener::MetalScrollBarUI$ScrollBarListener() {
}

$Class* MetalScrollBarUI$ScrollBarListener::load$($String* name, bool initialize) {
	$loadClass(MetalScrollBarUI$ScrollBarListener, name, initialize, &_MetalScrollBarUI$ScrollBarListener_ClassInfo_, allocate$MetalScrollBarUI$ScrollBarListener);
	return class$;
}

$Class* MetalScrollBarUI$ScrollBarListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax