#include <javax/swing/plaf/metal/MetalSliderUI$MetalPropertyListener.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicSliderUI$PropertyChangeHandler.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <javax/swing/plaf/metal/MetalSliderUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $BasicSliderUI$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicSliderUI$PropertyChangeHandler;
using $MetalSliderUI = ::javax::swing::plaf::metal::MetalSliderUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalSliderUI$MetalPropertyListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalSliderUI$MetalPropertyListener, this$0)},
	{}
};

$MethodInfo _MetalSliderUI$MetalPropertyListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalSliderUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MetalSliderUI$MetalPropertyListener::*)($MetalSliderUI*)>(&MetalSliderUI$MetalPropertyListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalSliderUI$MetalPropertyListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalSliderUI$MetalPropertyListener", "javax.swing.plaf.metal.MetalSliderUI", "MetalPropertyListener", $PROTECTED},
	{"javax.swing.plaf.basic.BasicSliderUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicSliderUI", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _MetalSliderUI$MetalPropertyListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalSliderUI$MetalPropertyListener",
	"javax.swing.plaf.basic.BasicSliderUI$PropertyChangeHandler",
	nullptr,
	_MetalSliderUI$MetalPropertyListener_FieldInfo_,
	_MetalSliderUI$MetalPropertyListener_MethodInfo_,
	nullptr,
	nullptr,
	_MetalSliderUI$MetalPropertyListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalSliderUI"
};

$Object* allocate$MetalSliderUI$MetalPropertyListener($Class* clazz) {
	return $of($alloc(MetalSliderUI$MetalPropertyListener));
}

void MetalSliderUI$MetalPropertyListener::init$($MetalSliderUI* this$0) {
	$set(this, this$0, this$0);
	$BasicSliderUI$PropertyChangeHandler::init$(this$0);
}

void MetalSliderUI$MetalPropertyListener::propertyChange($PropertyChangeEvent* e) {
	$BasicSliderUI$PropertyChangeHandler::propertyChange(e);
	if ($nc($($nc(e)->getPropertyName()))->equals("JSlider.isFilled"_s)) {
		this->this$0->prepareFilledSliderField();
	}
}

MetalSliderUI$MetalPropertyListener::MetalSliderUI$MetalPropertyListener() {
}

$Class* MetalSliderUI$MetalPropertyListener::load$($String* name, bool initialize) {
	$loadClass(MetalSliderUI$MetalPropertyListener, name, initialize, &_MetalSliderUI$MetalPropertyListener_ClassInfo_, allocate$MetalSliderUI$MetalPropertyListener);
	return class$;
}

$Class* MetalSliderUI$MetalPropertyListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax