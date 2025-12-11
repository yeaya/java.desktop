#include <com/apple/laf/AquaTabbedPaneUI$TabbedPanePropertyChangeHandler.h>

#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <com/apple/laf/AquaTabbedPaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

#undef FRAME_ACTIVE_PROPERTY

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler;
using $AquaTabbedPaneUI = ::com::apple::laf::AquaTabbedPaneUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneUI$TabbedPanePropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$TabbedPanePropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _AquaTabbedPaneUI$TabbedPanePropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaTabbedPaneUI$TabbedPanePropertyChangeHandler::*)($AquaTabbedPaneUI*)>(&AquaTabbedPaneUI$TabbedPanePropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTabbedPaneUI$TabbedPanePropertyChangeHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneUI$TabbedPanePropertyChangeHandler", "com.apple.laf.AquaTabbedPaneUI", "TabbedPanePropertyChangeHandler", $PROTECTED},
	{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _AquaTabbedPaneUI$TabbedPanePropertyChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneUI$TabbedPanePropertyChangeHandler",
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler",
	nullptr,
	_AquaTabbedPaneUI$TabbedPanePropertyChangeHandler_FieldInfo_,
	_AquaTabbedPaneUI$TabbedPanePropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneUI$TabbedPanePropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneUI"
};

$Object* allocate$AquaTabbedPaneUI$TabbedPanePropertyChangeHandler($Class* clazz) {
	return $of($alloc(AquaTabbedPaneUI$TabbedPanePropertyChangeHandler));
}

void AquaTabbedPaneUI$TabbedPanePropertyChangeHandler::init$($AquaTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
	$AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler::init$(this$0);
}

void AquaTabbedPaneUI$TabbedPanePropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, prop, $nc(e)->getPropertyName());
	$init($AquaFocusHandler);
	if (!$nc($AquaFocusHandler::FRAME_ACTIVE_PROPERTY)->equals(prop)) {
		$AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler::propertyChange(e);
		return;
	}
	$var($JTabbedPane, comp, $cast($JTabbedPane, e->getSource()));
	$nc(comp)->repaint();
	int32_t selected = $nc(this->this$0->tabPane)->getSelectedIndex();
	$var($RectangleArray, theRects, this->this$0->rects);
	if (selected >= 0 && selected < $nc(theRects)->length) {
		comp->repaint(theRects->get(selected));
	}
	this->this$0->repaintContentBorderEdge();
}

AquaTabbedPaneUI$TabbedPanePropertyChangeHandler::AquaTabbedPaneUI$TabbedPanePropertyChangeHandler() {
}

$Class* AquaTabbedPaneUI$TabbedPanePropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneUI$TabbedPanePropertyChangeHandler, name, initialize, &_AquaTabbedPaneUI$TabbedPanePropertyChangeHandler_ClassInfo_, allocate$AquaTabbedPaneUI$TabbedPanePropertyChangeHandler);
	return class$;
}

$Class* AquaTabbedPaneUI$TabbedPanePropertyChangeHandler::class$ = nullptr;

		} // laf
	} // apple
} // com