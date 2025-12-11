#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler.h>

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$Handler.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <jcpp.h>

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $AquaTabbedPaneCopyFromBasicUI$Handler = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$Handler;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler::*)($AquaTabbedPaneCopyFromBasicUI*)>(&AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler_FieldInfo_,
	_AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
};

$Object* allocate$AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler($Class* clazz) {
	return $of($alloc(AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler));
}

void AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler::init$($AquaTabbedPaneCopyFromBasicUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->propertyChange(e);
}

AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler::AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler, name, initialize, &_AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler_ClassInfo_, allocate$AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler);
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler::class$ = nullptr;

		} // laf
	} // apple
} // com