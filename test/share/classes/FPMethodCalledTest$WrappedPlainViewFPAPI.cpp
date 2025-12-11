#include <FPMethodCalledTest$WrappedPlainViewFPAPI.h>

#include <FPMethodCalledTest.h>
#include <java/awt/Graphics2D.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/WrappedPlainView.h>
#include <jcpp.h>

using $Graphics2D = ::java::awt::Graphics2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $WrappedPlainView = ::javax::swing::text::WrappedPlainView;

$FieldInfo _FPMethodCalledTest$WrappedPlainViewFPAPI_FieldInfo_[] = {
	{"drawLine", "Z", nullptr, 0, $field(FPMethodCalledTest$WrappedPlainViewFPAPI, drawLine$)},
	{"drawSelected", "Z", nullptr, 0, $field(FPMethodCalledTest$WrappedPlainViewFPAPI, drawSelected)},
	{"drawUnselected", "Z", nullptr, 0, $field(FPMethodCalledTest$WrappedPlainViewFPAPI, drawUnselected)},
	{}
};

$MethodInfo _FPMethodCalledTest$WrappedPlainViewFPAPI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(FPMethodCalledTest$WrappedPlainViewFPAPI::*)($Element*)>(&FPMethodCalledTest$WrappedPlainViewFPAPI::init$))},
	{"drawLine", "(IILjava/awt/Graphics2D;FF)V", nullptr, $PROTECTED},
	{"drawSelectedText", "(Ljava/awt/Graphics2D;FFII)F", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"drawUnselectedText", "(Ljava/awt/Graphics2D;FFII)F", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"getResult", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FPMethodCalledTest$WrappedPlainViewFPAPI_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$WrappedPlainViewFPAPI", "FPMethodCalledTest", "WrappedPlainViewFPAPI", $STATIC},
	{"FPMethodCalledTest$Resultable", "FPMethodCalledTest", "Resultable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$WrappedPlainViewFPAPI_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$WrappedPlainViewFPAPI",
	"javax.swing.text.WrappedPlainView",
	"FPMethodCalledTest$Resultable",
	_FPMethodCalledTest$WrappedPlainViewFPAPI_FieldInfo_,
	_FPMethodCalledTest$WrappedPlainViewFPAPI_MethodInfo_,
	nullptr,
	nullptr,
	_FPMethodCalledTest$WrappedPlainViewFPAPI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$WrappedPlainViewFPAPI($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$WrappedPlainViewFPAPI));
}

int32_t FPMethodCalledTest$WrappedPlainViewFPAPI::hashCode() {
	 return this->$WrappedPlainView::hashCode();
}

bool FPMethodCalledTest$WrappedPlainViewFPAPI::equals(Object$* arg0) {
	 return this->$WrappedPlainView::equals(arg0);
}

$Object* FPMethodCalledTest$WrappedPlainViewFPAPI::clone() {
	 return this->$WrappedPlainView::clone();
}

$String* FPMethodCalledTest$WrappedPlainViewFPAPI::toString() {
	 return this->$WrappedPlainView::toString();
}

void FPMethodCalledTest$WrappedPlainViewFPAPI::finalize() {
	this->$WrappedPlainView::finalize();
}

void FPMethodCalledTest$WrappedPlainViewFPAPI::init$($Element* elem) {
	$WrappedPlainView::init$(elem);
	this->drawLine$ = false;
	this->drawSelected = false;
	this->drawUnselected = false;
}

void FPMethodCalledTest$WrappedPlainViewFPAPI::drawLine(int32_t p0, int32_t p1, $Graphics2D* g, float x, float y) {
	this->drawLine$ = true;
	$WrappedPlainView::drawLine(p0, p1, g, x, y);
}

float FPMethodCalledTest$WrappedPlainViewFPAPI::drawSelectedText($Graphics2D* g, float x, float y, int32_t p0, int32_t p1) {
	this->drawSelected = true;
	return $WrappedPlainView::drawSelectedText(g, x, y, p0, p1);
}

float FPMethodCalledTest$WrappedPlainViewFPAPI::drawUnselectedText($Graphics2D* g, float x, float y, int32_t p0, int32_t p1) {
	this->drawUnselected = true;
	return $WrappedPlainView::drawUnselectedText(g, x, y, p0, p1);
}

bool FPMethodCalledTest$WrappedPlainViewFPAPI::getResult() {
	return this->drawLine$ && this->drawSelected && this->drawUnselected;
}

FPMethodCalledTest$WrappedPlainViewFPAPI::FPMethodCalledTest$WrappedPlainViewFPAPI() {
}

$Class* FPMethodCalledTest$WrappedPlainViewFPAPI::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$WrappedPlainViewFPAPI, name, initialize, &_FPMethodCalledTest$WrappedPlainViewFPAPI_ClassInfo_, allocate$FPMethodCalledTest$WrappedPlainViewFPAPI);
	return class$;
}

$Class* FPMethodCalledTest$WrappedPlainViewFPAPI::class$ = nullptr;