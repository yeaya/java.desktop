#include <FPMethodCalledTest$WrappedPlainViewMixedAPI.h>

#include <FPMethodCalledTest.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/WrappedPlainView.h>
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
using $WrappedPlainView = ::javax::swing::text::WrappedPlainView;

$FieldInfo _FPMethodCalledTest$WrappedPlainViewMixedAPI_FieldInfo_[] = {
	{"isIntMethodCalled", "Z", nullptr, 0, $field(FPMethodCalledTest$WrappedPlainViewMixedAPI, isIntMethodCalled)},
	{"isFPMethodCalled", "Z", nullptr, 0, $field(FPMethodCalledTest$WrappedPlainViewMixedAPI, isFPMethodCalled)},
	{}
};

$MethodInfo _FPMethodCalledTest$WrappedPlainViewMixedAPI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(FPMethodCalledTest$WrappedPlainViewMixedAPI::*)($Element*)>(&FPMethodCalledTest$WrappedPlainViewMixedAPI::init$))},
	{"drawUnselectedText", "(Ljava/awt/Graphics;IIII)I", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"drawUnselectedText", "(Ljava/awt/Graphics2D;FFII)F", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"getResult", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FPMethodCalledTest$WrappedPlainViewMixedAPI_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$WrappedPlainViewMixedAPI", "FPMethodCalledTest", "WrappedPlainViewMixedAPI", $STATIC},
	{"FPMethodCalledTest$Resultable", "FPMethodCalledTest", "Resultable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$WrappedPlainViewMixedAPI_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$WrappedPlainViewMixedAPI",
	"javax.swing.text.WrappedPlainView",
	"FPMethodCalledTest$Resultable",
	_FPMethodCalledTest$WrappedPlainViewMixedAPI_FieldInfo_,
	_FPMethodCalledTest$WrappedPlainViewMixedAPI_MethodInfo_,
	nullptr,
	nullptr,
	_FPMethodCalledTest$WrappedPlainViewMixedAPI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$WrappedPlainViewMixedAPI($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$WrappedPlainViewMixedAPI));
}

int32_t FPMethodCalledTest$WrappedPlainViewMixedAPI::hashCode() {
	 return this->$WrappedPlainView::hashCode();
}

bool FPMethodCalledTest$WrappedPlainViewMixedAPI::equals(Object$* arg0) {
	 return this->$WrappedPlainView::equals(arg0);
}

$Object* FPMethodCalledTest$WrappedPlainViewMixedAPI::clone() {
	 return this->$WrappedPlainView::clone();
}

$String* FPMethodCalledTest$WrappedPlainViewMixedAPI::toString() {
	 return this->$WrappedPlainView::toString();
}

void FPMethodCalledTest$WrappedPlainViewMixedAPI::finalize() {
	this->$WrappedPlainView::finalize();
}

void FPMethodCalledTest$WrappedPlainViewMixedAPI::init$($Element* elem) {
	$WrappedPlainView::init$(elem);
	this->isIntMethodCalled = false;
	this->isFPMethodCalled = false;
}

int32_t FPMethodCalledTest$WrappedPlainViewMixedAPI::drawUnselectedText($Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) {
	this->isIntMethodCalled = true;
	return $WrappedPlainView::drawUnselectedText(g, x, y, p0, p1);
}

float FPMethodCalledTest$WrappedPlainViewMixedAPI::drawUnselectedText($Graphics2D* g, float x, float y, int32_t p0, int32_t p1) {
	this->isFPMethodCalled = true;
	return $WrappedPlainView::drawUnselectedText(g, x, y, p0, p1);
}

bool FPMethodCalledTest$WrappedPlainViewMixedAPI::getResult() {
	return !this->isIntMethodCalled && this->isFPMethodCalled;
}

FPMethodCalledTest$WrappedPlainViewMixedAPI::FPMethodCalledTest$WrappedPlainViewMixedAPI() {
}

$Class* FPMethodCalledTest$WrappedPlainViewMixedAPI::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$WrappedPlainViewMixedAPI, name, initialize, &_FPMethodCalledTest$WrappedPlainViewMixedAPI_ClassInfo_, allocate$FPMethodCalledTest$WrappedPlainViewMixedAPI);
	return class$;
}

$Class* FPMethodCalledTest$WrappedPlainViewMixedAPI::class$ = nullptr;