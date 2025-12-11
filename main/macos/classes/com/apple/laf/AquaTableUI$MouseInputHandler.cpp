#include <com/apple/laf/AquaTableUI$MouseInputHandler.h>

#include <com/apple/laf/AquaTableUI.h>
#include <javax/swing/plaf/basic/BasicTableUI$MouseInputHandler.h>
#include <javax/swing/plaf/basic/BasicTableUI.h>
#include <jcpp.h>

using $AquaTableUI = ::com::apple::laf::AquaTableUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTableUI = ::javax::swing::plaf::basic::BasicTableUI;
using $BasicTableUI$MouseInputHandler = ::javax::swing::plaf::basic::BasicTableUI$MouseInputHandler;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTableUI$MouseInputHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTableUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTableUI$MouseInputHandler, this$0)},
	{}
};

$MethodInfo _AquaTableUI$MouseInputHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTableUI;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaTableUI$MouseInputHandler::*)($AquaTableUI*)>(&AquaTableUI$MouseInputHandler::init$))},
	{}
};

$InnerClassInfo _AquaTableUI$MouseInputHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTableUI$MouseInputHandler", "com.apple.laf.AquaTableUI", "MouseInputHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTableUI$MouseInputHandler", "javax.swing.plaf.basic.BasicTableUI", "MouseInputHandler", $PUBLIC},
	{}
};

$ClassInfo _AquaTableUI$MouseInputHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTableUI$MouseInputHandler",
	"javax.swing.plaf.basic.BasicTableUI$MouseInputHandler",
	nullptr,
	_AquaTableUI$MouseInputHandler_FieldInfo_,
	_AquaTableUI$MouseInputHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTableUI$MouseInputHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTableUI"
};

$Object* allocate$AquaTableUI$MouseInputHandler($Class* clazz) {
	return $of($alloc(AquaTableUI$MouseInputHandler));
}

void AquaTableUI$MouseInputHandler::init$($AquaTableUI* this$0) {
	$set(this, this$0, this$0);
	$BasicTableUI$MouseInputHandler::init$(this$0);
}

AquaTableUI$MouseInputHandler::AquaTableUI$MouseInputHandler() {
}

$Class* AquaTableUI$MouseInputHandler::load$($String* name, bool initialize) {
	$loadClass(AquaTableUI$MouseInputHandler, name, initialize, &_AquaTableUI$MouseInputHandler_ClassInfo_, allocate$AquaTableUI$MouseInputHandler);
	return class$;
}

$Class* AquaTableUI$MouseInputHandler::class$ = nullptr;

		} // laf
	} // apple
} // com