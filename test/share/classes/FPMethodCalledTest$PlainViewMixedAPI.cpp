#include <FPMethodCalledTest$PlainViewMixedAPI.h>

#include <FPMethodCalledTest.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/PlainView.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $PlainView = ::javax::swing::text::PlainView;

$FieldInfo _FPMethodCalledTest$PlainViewMixedAPI_FieldInfo_[] = {
	{"isIntMethodCalled", "Z", nullptr, 0, $field(FPMethodCalledTest$PlainViewMixedAPI, isIntMethodCalled)},
	{"isFPMethodCalled", "Z", nullptr, 0, $field(FPMethodCalledTest$PlainViewMixedAPI, isFPMethodCalled)},
	{}
};

$MethodInfo _FPMethodCalledTest$PlainViewMixedAPI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(FPMethodCalledTest$PlainViewMixedAPI::*)($Element*)>(&FPMethodCalledTest$PlainViewMixedAPI::init$))},
	{"drawSelectedText", "(Ljava/awt/Graphics;IIII)I", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"drawSelectedText", "(Ljava/awt/Graphics2D;FFII)F", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"getResult", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FPMethodCalledTest$PlainViewMixedAPI_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$PlainViewMixedAPI", "FPMethodCalledTest", "PlainViewMixedAPI", $STATIC},
	{"FPMethodCalledTest$Resultable", "FPMethodCalledTest", "Resultable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$PlainViewMixedAPI_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$PlainViewMixedAPI",
	"javax.swing.text.PlainView",
	"FPMethodCalledTest$Resultable",
	_FPMethodCalledTest$PlainViewMixedAPI_FieldInfo_,
	_FPMethodCalledTest$PlainViewMixedAPI_MethodInfo_,
	nullptr,
	nullptr,
	_FPMethodCalledTest$PlainViewMixedAPI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$PlainViewMixedAPI($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$PlainViewMixedAPI));
}

int32_t FPMethodCalledTest$PlainViewMixedAPI::hashCode() {
	 return this->$PlainView::hashCode();
}

bool FPMethodCalledTest$PlainViewMixedAPI::equals(Object$* arg0) {
	 return this->$PlainView::equals(arg0);
}

$Object* FPMethodCalledTest$PlainViewMixedAPI::clone() {
	 return this->$PlainView::clone();
}

$String* FPMethodCalledTest$PlainViewMixedAPI::toString() {
	 return this->$PlainView::toString();
}

void FPMethodCalledTest$PlainViewMixedAPI::finalize() {
	this->$PlainView::finalize();
}

void FPMethodCalledTest$PlainViewMixedAPI::init$($Element* elem) {
	$PlainView::init$(elem);
	this->isIntMethodCalled = false;
	this->isFPMethodCalled = false;
}

int32_t FPMethodCalledTest$PlainViewMixedAPI::drawSelectedText($Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) {
	this->isIntMethodCalled = true;
	return $PlainView::drawSelectedText(g, x, y, p0, p1);
}

float FPMethodCalledTest$PlainViewMixedAPI::drawSelectedText($Graphics2D* g, float x, float y, int32_t p0, int32_t p1) {
	this->isFPMethodCalled = true;
	return $PlainView::drawSelectedText(g, x, y, p0, p1);
}

bool FPMethodCalledTest$PlainViewMixedAPI::getResult() {
	return !this->isIntMethodCalled && this->isFPMethodCalled;
}

FPMethodCalledTest$PlainViewMixedAPI::FPMethodCalledTest$PlainViewMixedAPI() {
}

$Class* FPMethodCalledTest$PlainViewMixedAPI::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$PlainViewMixedAPI, name, initialize, &_FPMethodCalledTest$PlainViewMixedAPI_ClassInfo_, allocate$FPMethodCalledTest$PlainViewMixedAPI);
	return class$;
}

$Class* FPMethodCalledTest$PlainViewMixedAPI::class$ = nullptr;