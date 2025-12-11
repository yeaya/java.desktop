#include <com/apple/laf/AquaScrollBarUI$PropertyChangeHandler.h>

#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaScrollBarUI$ModelListener.h>
#include <com/apple/laf/AquaScrollBarUI.h>
#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

#undef FRAME_ACTIVE_PROPERTY

using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaScrollBarUI = ::com::apple::laf::AquaScrollBarUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $JScrollBar = ::javax::swing::JScrollBar;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaScrollBarUI$PropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaScrollBarUI$PropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _AquaScrollBarUI$PropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaScrollBarUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaScrollBarUI$PropertyChangeHandler::*)($AquaScrollBarUI*)>(&AquaScrollBarUI$PropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaScrollBarUI$PropertyChangeHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaScrollBarUI$PropertyChangeHandler", "com.apple.laf.AquaScrollBarUI", "PropertyChangeHandler", $PROTECTED},
	{}
};

$ClassInfo _AquaScrollBarUI$PropertyChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaScrollBarUI$PropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_AquaScrollBarUI$PropertyChangeHandler_FieldInfo_,
	_AquaScrollBarUI$PropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaScrollBarUI$PropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaScrollBarUI"
};

$Object* allocate$AquaScrollBarUI$PropertyChangeHandler($Class* clazz) {
	return $of($alloc(AquaScrollBarUI$PropertyChangeHandler));
}

void AquaScrollBarUI$PropertyChangeHandler::init$($AquaScrollBarUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaScrollBarUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, propertyName, $nc(e)->getPropertyName());
	if ("model"_s->equals(propertyName)) {
		$var($BoundedRangeModel, oldModel, $cast($BoundedRangeModel, e->getOldValue()));
		$var($BoundedRangeModel, newModel, $cast($BoundedRangeModel, e->getNewValue()));
		$nc(oldModel)->removeChangeListener(this->this$0->fModelListener);
		$nc(newModel)->addChangeListener(this->this$0->fModelListener);
		$nc(this->this$0->fScrollBar)->repaint();
		$nc(this->this$0->fScrollBar)->revalidate();
	} else {
		$init($AquaFocusHandler);
		if ($nc($AquaFocusHandler::FRAME_ACTIVE_PROPERTY)->equals(propertyName)) {
			$nc(this->this$0->fScrollBar)->repaint();
		}
	}
}

AquaScrollBarUI$PropertyChangeHandler::AquaScrollBarUI$PropertyChangeHandler() {
}

$Class* AquaScrollBarUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(AquaScrollBarUI$PropertyChangeHandler, name, initialize, &_AquaScrollBarUI$PropertyChangeHandler_ClassInfo_, allocate$AquaScrollBarUI$PropertyChangeHandler);
	return class$;
}

$Class* AquaScrollBarUI$PropertyChangeHandler::class$ = nullptr;

		} // laf
	} // apple
} // com