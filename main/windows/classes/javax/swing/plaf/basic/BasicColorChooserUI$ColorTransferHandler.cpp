#include <javax/swing/plaf/basic/BasicColorChooserUI$ColorTransferHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/basic/BasicColorChooserUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler = ::javax::swing::TransferHandler;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicColorChooserUI = ::javax::swing::plaf::basic::BasicColorChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicColorChooserUI$ColorTransferHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicColorChooserUI$ColorTransferHandler::*)()>(&BasicColorChooserUI$ColorTransferHandler::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicColorChooserUI$ColorTransferHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicColorChooserUI$ColorTransferHandler", "javax.swing.plaf.basic.BasicColorChooserUI", "ColorTransferHandler", $STATIC},
	{}
};

$ClassInfo _BasicColorChooserUI$ColorTransferHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicColorChooserUI$ColorTransferHandler",
	"javax.swing.TransferHandler",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BasicColorChooserUI$ColorTransferHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicColorChooserUI$ColorTransferHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicColorChooserUI"
};

$Object* allocate$BasicColorChooserUI$ColorTransferHandler($Class* clazz) {
	return $of($alloc(BasicColorChooserUI$ColorTransferHandler));
}

int32_t BasicColorChooserUI$ColorTransferHandler::hashCode() {
	 return this->$TransferHandler::hashCode();
}

bool BasicColorChooserUI$ColorTransferHandler::equals(Object$* arg0) {
	 return this->$TransferHandler::equals(arg0);
}

$Object* BasicColorChooserUI$ColorTransferHandler::clone() {
	 return this->$TransferHandler::clone();
}

$String* BasicColorChooserUI$ColorTransferHandler::toString() {
	 return this->$TransferHandler::toString();
}

void BasicColorChooserUI$ColorTransferHandler::finalize() {
	this->$TransferHandler::finalize();
}

void BasicColorChooserUI$ColorTransferHandler::init$() {
	$TransferHandler::init$("color"_s);
}

BasicColorChooserUI$ColorTransferHandler::BasicColorChooserUI$ColorTransferHandler() {
}

$Class* BasicColorChooserUI$ColorTransferHandler::load$($String* name, bool initialize) {
	$loadClass(BasicColorChooserUI$ColorTransferHandler, name, initialize, &_BasicColorChooserUI$ColorTransferHandler_ClassInfo_, allocate$BasicColorChooserUI$ColorTransferHandler);
	return class$;
}

$Class* BasicColorChooserUI$ColorTransferHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax