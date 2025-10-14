#include <FPMethodCalledTest$PasswordViewINTAPI.h>

#include <FPMethodCalledTest.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/PasswordView.h>
#include <jcpp.h>

using $FPMethodCalledTest = ::FPMethodCalledTest;
using $FPMethodCalledTest$Resultable = ::FPMethodCalledTest$Resultable;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $PasswordView = ::javax::swing::text::PasswordView;

$FieldInfo _FPMethodCalledTest$PasswordViewINTAPI_FieldInfo_[] = {
	{"isIntMethodCalled", "Z", nullptr, 0, $field(FPMethodCalledTest$PasswordViewINTAPI, isIntMethodCalled)},
	{}
};

$MethodInfo _FPMethodCalledTest$PasswordViewINTAPI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(FPMethodCalledTest$PasswordViewINTAPI::*)($Element*)>(&FPMethodCalledTest$PasswordViewINTAPI::init$))},
	{"drawEchoCharacter", "(Ljava/awt/Graphics;IIC)I", nullptr, $PROTECTED},
	{"getResult", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FPMethodCalledTest$PasswordViewINTAPI_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$PasswordViewINTAPI", "FPMethodCalledTest", "PasswordViewINTAPI", $STATIC},
	{"FPMethodCalledTest$Resultable", "FPMethodCalledTest", "Resultable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$PasswordViewINTAPI_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$PasswordViewINTAPI",
	"javax.swing.text.PasswordView",
	"FPMethodCalledTest$Resultable",
	_FPMethodCalledTest$PasswordViewINTAPI_FieldInfo_,
	_FPMethodCalledTest$PasswordViewINTAPI_MethodInfo_,
	nullptr,
	nullptr,
	_FPMethodCalledTest$PasswordViewINTAPI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$PasswordViewINTAPI($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$PasswordViewINTAPI));
}

int32_t FPMethodCalledTest$PasswordViewINTAPI::hashCode() {
	 return this->$PasswordView::hashCode();
}

bool FPMethodCalledTest$PasswordViewINTAPI::equals(Object$* arg0) {
	 return this->$PasswordView::equals(arg0);
}

$Object* FPMethodCalledTest$PasswordViewINTAPI::clone() {
	 return this->$PasswordView::clone();
}

$String* FPMethodCalledTest$PasswordViewINTAPI::toString() {
	 return this->$PasswordView::toString();
}

void FPMethodCalledTest$PasswordViewINTAPI::finalize() {
	this->$PasswordView::finalize();
}

void FPMethodCalledTest$PasswordViewINTAPI::init$($Element* elem) {
	$PasswordView::init$(elem);
	this->isIntMethodCalled = false;
}

int32_t FPMethodCalledTest$PasswordViewINTAPI::drawEchoCharacter($Graphics* g, int32_t x, int32_t y, char16_t c) {
	this->isIntMethodCalled = true;
	return $PasswordView::drawEchoCharacter(g, x, y, c);
}

bool FPMethodCalledTest$PasswordViewINTAPI::getResult() {
	return this->isIntMethodCalled;
}

FPMethodCalledTest$PasswordViewINTAPI::FPMethodCalledTest$PasswordViewINTAPI() {
}

$Class* FPMethodCalledTest$PasswordViewINTAPI::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$PasswordViewINTAPI, name, initialize, &_FPMethodCalledTest$PasswordViewINTAPI_ClassInfo_, allocate$FPMethodCalledTest$PasswordViewINTAPI);
	return class$;
}

$Class* FPMethodCalledTest$PasswordViewINTAPI::class$ = nullptr;