#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler.h>

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$Handler.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $AquaTabbedPaneCopyFromBasicUI$Handler = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$Handler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler, this$0)},
	{}
};

$MethodInfo _AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler::*)($AquaTabbedPaneCopyFromBasicUI*)>(&AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "TabSelectionHandler", $PUBLIC},
	{}
};

$ClassInfo _AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler_FieldInfo_,
	_AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
};

$Object* allocate$AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler($Class* clazz) {
	return $of($alloc(AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler));
}

void AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler::init$($AquaTabbedPaneCopyFromBasicUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler::stateChanged($ChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->stateChanged(e);
}

AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler::AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler, name, initialize, &_AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler_ClassInfo_, allocate$AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler);
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler::class$ = nullptr;

		} // laf
	} // apple
} // com