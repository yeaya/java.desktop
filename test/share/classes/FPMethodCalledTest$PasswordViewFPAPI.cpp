#include <FPMethodCalledTest$PasswordViewFPAPI.h>

#include <FPMethodCalledTest.h>
#include <java/awt/Graphics2D.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/PasswordView.h>
#include <jcpp.h>

using $Graphics2D = ::java::awt::Graphics2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $PasswordView = ::javax::swing::text::PasswordView;

$FieldInfo _FPMethodCalledTest$PasswordViewFPAPI_FieldInfo_[] = {
	{"isFPMethodCalled", "Z", nullptr, 0, $field(FPMethodCalledTest$PasswordViewFPAPI, isFPMethodCalled)},
	{}
};

$MethodInfo _FPMethodCalledTest$PasswordViewFPAPI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(FPMethodCalledTest$PasswordViewFPAPI::*)($Element*)>(&FPMethodCalledTest$PasswordViewFPAPI::init$))},
	{"drawEchoCharacter", "(Ljava/awt/Graphics2D;FFC)F", nullptr, $PROTECTED},
	{"getResult", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FPMethodCalledTest$PasswordViewFPAPI_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$PasswordViewFPAPI", "FPMethodCalledTest", "PasswordViewFPAPI", $STATIC},
	{"FPMethodCalledTest$Resultable", "FPMethodCalledTest", "Resultable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$PasswordViewFPAPI_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$PasswordViewFPAPI",
	"javax.swing.text.PasswordView",
	"FPMethodCalledTest$Resultable",
	_FPMethodCalledTest$PasswordViewFPAPI_FieldInfo_,
	_FPMethodCalledTest$PasswordViewFPAPI_MethodInfo_,
	nullptr,
	nullptr,
	_FPMethodCalledTest$PasswordViewFPAPI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$PasswordViewFPAPI($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$PasswordViewFPAPI));
}

int32_t FPMethodCalledTest$PasswordViewFPAPI::hashCode() {
	 return this->$PasswordView::hashCode();
}

bool FPMethodCalledTest$PasswordViewFPAPI::equals(Object$* arg0) {
	 return this->$PasswordView::equals(arg0);
}

$Object* FPMethodCalledTest$PasswordViewFPAPI::clone() {
	 return this->$PasswordView::clone();
}

$String* FPMethodCalledTest$PasswordViewFPAPI::toString() {
	 return this->$PasswordView::toString();
}

void FPMethodCalledTest$PasswordViewFPAPI::finalize() {
	this->$PasswordView::finalize();
}

void FPMethodCalledTest$PasswordViewFPAPI::init$($Element* elem) {
	$PasswordView::init$(elem);
	this->isFPMethodCalled = false;
}

float FPMethodCalledTest$PasswordViewFPAPI::drawEchoCharacter($Graphics2D* g, float x, float y, char16_t c) {
	this->isFPMethodCalled = true;
	return $PasswordView::drawEchoCharacter(g, x, y, c);
}

bool FPMethodCalledTest$PasswordViewFPAPI::getResult() {
	return this->isFPMethodCalled;
}

FPMethodCalledTest$PasswordViewFPAPI::FPMethodCalledTest$PasswordViewFPAPI() {
}

$Class* FPMethodCalledTest$PasswordViewFPAPI::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$PasswordViewFPAPI, name, initialize, &_FPMethodCalledTest$PasswordViewFPAPI_ClassInfo_, allocate$FPMethodCalledTest$PasswordViewFPAPI);
	return class$;
}

$Class* FPMethodCalledTest$PasswordViewFPAPI::class$ = nullptr;