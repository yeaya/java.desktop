#include <javax/swing/plaf/metal/MetalInternalFrameTitlePane$MetalPropertyChangeHandler.h>

#include <java/awt/Component.h>
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
#include <javax/swing/JButton.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$PropertyChangeHandler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/metal/MetalInternalFrameTitlePane.h>
#include <jcpp.h>

#undef IS_SELECTED_PROPERTY

using $Component = ::java::awt::Component;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameTitlePane$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$PropertyChangeHandler;
using $MetalInternalFrameTitlePane = ::javax::swing::plaf::metal::MetalInternalFrameTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalInternalFrameTitlePane$MetalPropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MetalInternalFrameTitlePane$MetalPropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _MetalInternalFrameTitlePane$MetalPropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)V", nullptr, 0, $method(static_cast<void(MetalInternalFrameTitlePane$MetalPropertyChangeHandler::*)($MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane$MetalPropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalInternalFrameTitlePane$MetalPropertyChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalInternalFrameTitlePane$MetalPropertyChangeHandler", "javax.swing.plaf.metal.MetalInternalFrameTitlePane", "MetalPropertyChangeHandler", 0},
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _MetalInternalFrameTitlePane$MetalPropertyChangeHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalInternalFrameTitlePane$MetalPropertyChangeHandler",
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler",
	nullptr,
	_MetalInternalFrameTitlePane$MetalPropertyChangeHandler_FieldInfo_,
	_MetalInternalFrameTitlePane$MetalPropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MetalInternalFrameTitlePane$MetalPropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalInternalFrameTitlePane"
};

$Object* allocate$MetalInternalFrameTitlePane$MetalPropertyChangeHandler($Class* clazz) {
	return $of($alloc(MetalInternalFrameTitlePane$MetalPropertyChangeHandler));
}

void MetalInternalFrameTitlePane$MetalPropertyChangeHandler::init$($MetalInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$BasicInternalFrameTitlePane$PropertyChangeHandler::init$(this$0);
}

void MetalInternalFrameTitlePane$MetalPropertyChangeHandler::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($String, prop, $nc(evt)->getPropertyName());
	$init($JInternalFrame);
	if ($nc(prop)->equals($JInternalFrame::IS_SELECTED_PROPERTY)) {
		$var($Boolean, b, $cast($Boolean, evt->getNewValue()));
		$nc($($MetalInternalFrameTitlePane::access$000(this->this$0)))->putClientProperty("paintActive"_s, b);
		$nc($($MetalInternalFrameTitlePane::access$100(this->this$0)))->putClientProperty("paintActive"_s, b);
		$nc($($MetalInternalFrameTitlePane::access$200(this->this$0)))->putClientProperty("paintActive"_s, b);
	} else if ("JInternalFrame.messageType"_s->equals(prop)) {
		this->this$0->updateOptionPaneState();
		$nc($($MetalInternalFrameTitlePane::access$300(this->this$0)))->repaint();
	}
	$BasicInternalFrameTitlePane$PropertyChangeHandler::propertyChange(evt);
}

MetalInternalFrameTitlePane$MetalPropertyChangeHandler::MetalInternalFrameTitlePane$MetalPropertyChangeHandler() {
}

$Class* MetalInternalFrameTitlePane$MetalPropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(MetalInternalFrameTitlePane$MetalPropertyChangeHandler, name, initialize, &_MetalInternalFrameTitlePane$MetalPropertyChangeHandler_ClassInfo_, allocate$MetalInternalFrameTitlePane$MetalPropertyChangeHandler);
	return class$;
}

$Class* MetalInternalFrameTitlePane$MetalPropertyChangeHandler::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax