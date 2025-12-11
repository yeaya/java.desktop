#include <com/apple/laf/AquaListUI$MouseInputHandler.h>

#include <com/apple/laf/AquaListUI.h>
#include <javax/swing/plaf/basic/BasicListUI$MouseInputHandler.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <jcpp.h>

using $AquaListUI = ::com::apple::laf::AquaListUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;
using $BasicListUI$MouseInputHandler = ::javax::swing::plaf::basic::BasicListUI$MouseInputHandler;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaListUI$MouseInputHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaListUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaListUI$MouseInputHandler, this$0)},
	{}
};

$MethodInfo _AquaListUI$MouseInputHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaListUI;)V", nullptr, 0, $method(static_cast<void(AquaListUI$MouseInputHandler::*)($AquaListUI*)>(&AquaListUI$MouseInputHandler::init$))},
	{}
};

$InnerClassInfo _AquaListUI$MouseInputHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaListUI$MouseInputHandler", "com.apple.laf.AquaListUI", "MouseInputHandler", 0},
	{"javax.swing.plaf.basic.BasicListUI$MouseInputHandler", "javax.swing.plaf.basic.BasicListUI", "MouseInputHandler", $PUBLIC},
	{}
};

$ClassInfo _AquaListUI$MouseInputHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaListUI$MouseInputHandler",
	"javax.swing.plaf.basic.BasicListUI$MouseInputHandler",
	nullptr,
	_AquaListUI$MouseInputHandler_FieldInfo_,
	_AquaListUI$MouseInputHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaListUI$MouseInputHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaListUI"
};

$Object* allocate$AquaListUI$MouseInputHandler($Class* clazz) {
	return $of($alloc(AquaListUI$MouseInputHandler));
}

void AquaListUI$MouseInputHandler::init$($AquaListUI* this$0) {
	$set(this, this$0, this$0);
	$BasicListUI$MouseInputHandler::init$(this$0);
}

AquaListUI$MouseInputHandler::AquaListUI$MouseInputHandler() {
}

$Class* AquaListUI$MouseInputHandler::load$($String* name, bool initialize) {
	$loadClass(AquaListUI$MouseInputHandler, name, initialize, &_AquaListUI$MouseInputHandler_ClassInfo_, allocate$AquaListUI$MouseInputHandler);
	return class$;
}

$Class* AquaListUI$MouseInputHandler::class$ = nullptr;

		} // laf
	} // apple
} // com