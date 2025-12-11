#include <com/apple/laf/AquaListUI$AquaPropertyChangeHandler.h>

#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaListUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/basic/BasicListUI$PropertyChangeHandler.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <jcpp.h>

#undef FRAME_ACTIVE_PROPERTY

using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaListUI = ::com::apple::laf::AquaListUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;
using $BasicListUI$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicListUI$PropertyChangeHandler;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaListUI$AquaPropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaListUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaListUI$AquaPropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _AquaListUI$AquaPropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaListUI;)V", nullptr, 0, $method(static_cast<void(AquaListUI$AquaPropertyChangeHandler::*)($AquaListUI*)>(&AquaListUI$AquaPropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaListUI$AquaPropertyChangeHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaListUI$AquaPropertyChangeHandler", "com.apple.laf.AquaListUI", "AquaPropertyChangeHandler", 0},
	{"javax.swing.plaf.basic.BasicListUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicListUI", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _AquaListUI$AquaPropertyChangeHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaListUI$AquaPropertyChangeHandler",
	"javax.swing.plaf.basic.BasicListUI$PropertyChangeHandler",
	nullptr,
	_AquaListUI$AquaPropertyChangeHandler_FieldInfo_,
	_AquaListUI$AquaPropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaListUI$AquaPropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaListUI"
};

$Object* allocate$AquaListUI$AquaPropertyChangeHandler($Class* clazz) {
	return $of($alloc(AquaListUI$AquaPropertyChangeHandler));
}

void AquaListUI$AquaPropertyChangeHandler::init$($AquaListUI* this$0) {
	$set(this, this$0, this$0);
	$BasicListUI$PropertyChangeHandler::init$(this$0);
}

void AquaListUI$AquaPropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, prop, $nc(e)->getPropertyName());
	$init($AquaFocusHandler);
	if ($nc($AquaFocusHandler::FRAME_ACTIVE_PROPERTY)->equals(prop)) {
		$AquaBorder::repaintBorder($(this->this$0->getComponent()));
		$var($String, var$0, "List"_s);
		$var($JList, var$1, this->this$0->getComponent());
		$AquaFocusHandler::swapSelectionColors(var$0, var$1, $(e->getNewValue()));
	} else {
		$BasicListUI$PropertyChangeHandler::propertyChange(e);
	}
}

AquaListUI$AquaPropertyChangeHandler::AquaListUI$AquaPropertyChangeHandler() {
}

$Class* AquaListUI$AquaPropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(AquaListUI$AquaPropertyChangeHandler, name, initialize, &_AquaListUI$AquaPropertyChangeHandler_ClassInfo_, allocate$AquaListUI$AquaPropertyChangeHandler);
	return class$;
}

$Class* AquaListUI$AquaPropertyChangeHandler::class$ = nullptr;

		} // laf
	} // apple
} // com