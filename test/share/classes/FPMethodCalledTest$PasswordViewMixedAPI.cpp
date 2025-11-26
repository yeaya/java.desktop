#include <FPMethodCalledTest$PasswordViewMixedAPI.h>

#include <FPMethodCalledTest.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/PasswordView.h>
#include <jcpp.h>

using $FPMethodCalledTest = ::FPMethodCalledTest;
using $FPMethodCalledTest$Resultable = ::FPMethodCalledTest$Resultable;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $PasswordView = ::javax::swing::text::PasswordView;

$FieldInfo _FPMethodCalledTest$PasswordViewMixedAPI_FieldInfo_[] = {
	{"isIntMethodCalled", "Z", nullptr, 0, $field(FPMethodCalledTest$PasswordViewMixedAPI, isIntMethodCalled)},
	{"isFPMethodCalled", "Z", nullptr, 0, $field(FPMethodCalledTest$PasswordViewMixedAPI, isFPMethodCalled)},
	{}
};

$MethodInfo _FPMethodCalledTest$PasswordViewMixedAPI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(FPMethodCalledTest$PasswordViewMixedAPI::*)($Element*)>(&FPMethodCalledTest$PasswordViewMixedAPI::init$))},
	{"drawEchoCharacter", "(Ljava/awt/Graphics;IIC)I", nullptr, $PROTECTED},
	{"drawEchoCharacter", "(Ljava/awt/Graphics2D;FFC)F", nullptr, $PROTECTED},
	{"getResult", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FPMethodCalledTest$PasswordViewMixedAPI_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$PasswordViewMixedAPI", "FPMethodCalledTest", "PasswordViewMixedAPI", $STATIC},
	{"FPMethodCalledTest$Resultable", "FPMethodCalledTest", "Resultable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$PasswordViewMixedAPI_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$PasswordViewMixedAPI",
	"javax.swing.text.PasswordView",
	"FPMethodCalledTest$Resultable",
	_FPMethodCalledTest$PasswordViewMixedAPI_FieldInfo_,
	_FPMethodCalledTest$PasswordViewMixedAPI_MethodInfo_,
	nullptr,
	nullptr,
	_FPMethodCalledTest$PasswordViewMixedAPI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$PasswordViewMixedAPI($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$PasswordViewMixedAPI));
}

int32_t FPMethodCalledTest$PasswordViewMixedAPI::hashCode() {
	 return this->$PasswordView::hashCode();
}

bool FPMethodCalledTest$PasswordViewMixedAPI::equals(Object$* arg0) {
	 return this->$PasswordView::equals(arg0);
}

$Object* FPMethodCalledTest$PasswordViewMixedAPI::clone() {
	 return this->$PasswordView::clone();
}

$String* FPMethodCalledTest$PasswordViewMixedAPI::toString() {
	 return this->$PasswordView::toString();
}

void FPMethodCalledTest$PasswordViewMixedAPI::finalize() {
	this->$PasswordView::finalize();
}

void FPMethodCalledTest$PasswordViewMixedAPI::init$($Element* elem) {
	$PasswordView::init$(elem);
	this->isIntMethodCalled = false;
	this->isFPMethodCalled = false;
}

int32_t FPMethodCalledTest$PasswordViewMixedAPI::drawEchoCharacter($Graphics* g, int32_t x, int32_t y, char16_t c) {
	this->isIntMethodCalled = true;
	return $PasswordView::drawEchoCharacter(g, x, y, c);
}

float FPMethodCalledTest$PasswordViewMixedAPI::drawEchoCharacter($Graphics2D* g, float x, float y, char16_t c) {
	this->isFPMethodCalled = true;
	return $PasswordView::drawEchoCharacter(g, x, y, c);
}

bool FPMethodCalledTest$PasswordViewMixedAPI::getResult() {
	return !this->isIntMethodCalled && this->isFPMethodCalled;
}

FPMethodCalledTest$PasswordViewMixedAPI::FPMethodCalledTest$PasswordViewMixedAPI() {
}

$Class* FPMethodCalledTest$PasswordViewMixedAPI::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$PasswordViewMixedAPI, name, initialize, &_FPMethodCalledTest$PasswordViewMixedAPI_ClassInfo_, allocate$FPMethodCalledTest$PasswordViewMixedAPI);
	return class$;
}

$Class* FPMethodCalledTest$PasswordViewMixedAPI::class$ = nullptr;