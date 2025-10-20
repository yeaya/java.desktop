#include <javax/swing/plaf/metal/MetalInternalFrameUI$MetalPropertyChangeHandler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InternalFrameUI.h>
#include <javax/swing/plaf/metal/MetalInternalFrameUI.h>
#include <jcpp.h>

#undef CONTENT_PANE_PROPERTY
#undef FRAME_TYPE
#undef IS_PALETTE_KEY

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $InternalFrameUI = ::javax::swing::plaf::InternalFrameUI;
using $MetalInternalFrameUI = ::javax::swing::plaf::metal::MetalInternalFrameUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalInternalFrameUI$MetalPropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalInternalFrameUI$MetalPropertyChangeHandler::*)()>(&MetalInternalFrameUI$MetalPropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalInternalFrameUI$MetalPropertyChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalInternalFrameUI$MetalPropertyChangeHandler", "javax.swing.plaf.metal.MetalInternalFrameUI", "MetalPropertyChangeHandler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalInternalFrameUI$MetalPropertyChangeHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalInternalFrameUI$MetalPropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	nullptr,
	_MetalInternalFrameUI$MetalPropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MetalInternalFrameUI$MetalPropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalInternalFrameUI"
};

$Object* allocate$MetalInternalFrameUI$MetalPropertyChangeHandler($Class* clazz) {
	return $of($alloc(MetalInternalFrameUI$MetalPropertyChangeHandler));
}

void MetalInternalFrameUI$MetalPropertyChangeHandler::init$() {
}

void MetalInternalFrameUI$MetalPropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(e)->getPropertyName());
	$var($JInternalFrame, jif, $cast($JInternalFrame, e->getSource()));
	if (!($instanceOf($MetalInternalFrameUI, $($cast($InternalFrameUI, $nc(jif)->getUI()))))) {
		return;
	}
	$var($MetalInternalFrameUI, ui, $cast($MetalInternalFrameUI, $cast($InternalFrameUI, $nc(jif)->getUI())));
	$init($MetalInternalFrameUI);
	if ($nc(name)->equals($MetalInternalFrameUI::FRAME_TYPE)) {
		if ($instanceOf($String, $(e->getNewValue()))) {
			$nc(ui)->setFrameType($cast($String, $(e->getNewValue())));
		}
	} else {
		if (name->equals($MetalInternalFrameUI::IS_PALETTE_KEY)) {
			if (e->getNewValue() != nullptr) {
				$nc(ui)->setPalette($nc(($cast($Boolean, $(e->getNewValue()))))->booleanValue());
			} else {
				$nc(ui)->setPalette(false);
			}
		} else {
			if (name->equals($JInternalFrame::CONTENT_PANE_PROPERTY)) {
				$nc(ui)->stripContentBorder($(e->getNewValue()));
			}
		}
	}
}

MetalInternalFrameUI$MetalPropertyChangeHandler::MetalInternalFrameUI$MetalPropertyChangeHandler() {
}

$Class* MetalInternalFrameUI$MetalPropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(MetalInternalFrameUI$MetalPropertyChangeHandler, name, initialize, &_MetalInternalFrameUI$MetalPropertyChangeHandler_ClassInfo_, allocate$MetalInternalFrameUI$MetalPropertyChangeHandler);
	return class$;
}

$Class* MetalInternalFrameUI$MetalPropertyChangeHandler::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax