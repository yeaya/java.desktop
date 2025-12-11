#include <FPMethodCalledTest$WrappedPlainViewINTAPI.h>

#include <FPMethodCalledTest.h>
#include <java/awt/Graphics.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/WrappedPlainView.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $WrappedPlainView = ::javax::swing::text::WrappedPlainView;

$FieldInfo _FPMethodCalledTest$WrappedPlainViewINTAPI_FieldInfo_[] = {
	{"drawLine", "Z", nullptr, 0, $field(FPMethodCalledTest$WrappedPlainViewINTAPI, drawLine$)},
	{"drawSelected", "Z", nullptr, 0, $field(FPMethodCalledTest$WrappedPlainViewINTAPI, drawSelected)},
	{"drawUnselected", "Z", nullptr, 0, $field(FPMethodCalledTest$WrappedPlainViewINTAPI, drawUnselected)},
	{}
};

$MethodInfo _FPMethodCalledTest$WrappedPlainViewINTAPI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(FPMethodCalledTest$WrappedPlainViewINTAPI::*)($Element*)>(&FPMethodCalledTest$WrappedPlainViewINTAPI::init$))},
	{"drawLine", "(IILjava/awt/Graphics;II)V", nullptr, $PROTECTED},
	{"drawSelectedText", "(Ljava/awt/Graphics;IIII)I", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"drawUnselectedText", "(Ljava/awt/Graphics;IIII)I", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"getResult", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FPMethodCalledTest$WrappedPlainViewINTAPI_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$WrappedPlainViewINTAPI", "FPMethodCalledTest", "WrappedPlainViewINTAPI", $STATIC},
	{"FPMethodCalledTest$Resultable", "FPMethodCalledTest", "Resultable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$WrappedPlainViewINTAPI_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$WrappedPlainViewINTAPI",
	"javax.swing.text.WrappedPlainView",
	"FPMethodCalledTest$Resultable",
	_FPMethodCalledTest$WrappedPlainViewINTAPI_FieldInfo_,
	_FPMethodCalledTest$WrappedPlainViewINTAPI_MethodInfo_,
	nullptr,
	nullptr,
	_FPMethodCalledTest$WrappedPlainViewINTAPI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$WrappedPlainViewINTAPI($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$WrappedPlainViewINTAPI));
}

int32_t FPMethodCalledTest$WrappedPlainViewINTAPI::hashCode() {
	 return this->$WrappedPlainView::hashCode();
}

bool FPMethodCalledTest$WrappedPlainViewINTAPI::equals(Object$* arg0) {
	 return this->$WrappedPlainView::equals(arg0);
}

$Object* FPMethodCalledTest$WrappedPlainViewINTAPI::clone() {
	 return this->$WrappedPlainView::clone();
}

$String* FPMethodCalledTest$WrappedPlainViewINTAPI::toString() {
	 return this->$WrappedPlainView::toString();
}

void FPMethodCalledTest$WrappedPlainViewINTAPI::finalize() {
	this->$WrappedPlainView::finalize();
}

void FPMethodCalledTest$WrappedPlainViewINTAPI::init$($Element* elem) {
	$WrappedPlainView::init$(elem);
	this->drawLine$ = false;
	this->drawSelected = false;
	this->drawUnselected = false;
}

void FPMethodCalledTest$WrappedPlainViewINTAPI::drawLine(int32_t p0, int32_t p1, $Graphics* g, int32_t x, int32_t y) {
	this->drawLine$ = true;
	$WrappedPlainView::drawLine(p0, p1, g, x, y);
}

int32_t FPMethodCalledTest$WrappedPlainViewINTAPI::drawSelectedText($Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) {
	this->drawSelected = true;
	return $WrappedPlainView::drawSelectedText(g, x, y, p0, p1);
}

int32_t FPMethodCalledTest$WrappedPlainViewINTAPI::drawUnselectedText($Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) {
	this->drawUnselected = true;
	return $WrappedPlainView::drawUnselectedText(g, x, y, p0, p1);
}

bool FPMethodCalledTest$WrappedPlainViewINTAPI::getResult() {
	return this->drawLine$ && this->drawSelected && this->drawUnselected;
}

FPMethodCalledTest$WrappedPlainViewINTAPI::FPMethodCalledTest$WrappedPlainViewINTAPI() {
}

$Class* FPMethodCalledTest$WrappedPlainViewINTAPI::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$WrappedPlainViewINTAPI, name, initialize, &_FPMethodCalledTest$WrappedPlainViewINTAPI_ClassInfo_, allocate$FPMethodCalledTest$WrappedPlainViewINTAPI);
	return class$;
}

$Class* FPMethodCalledTest$WrappedPlainViewINTAPI::class$ = nullptr;