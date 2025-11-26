#include <FPMethodCalledTest$PlainViewINTAPI.h>

#include <FPMethodCalledTest.h>
#include <java/awt/Graphics.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/PlainView.h>
#include <jcpp.h>

using $FPMethodCalledTest = ::FPMethodCalledTest;
using $FPMethodCalledTest$Resultable = ::FPMethodCalledTest$Resultable;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $PlainView = ::javax::swing::text::PlainView;

$FieldInfo _FPMethodCalledTest$PlainViewINTAPI_FieldInfo_[] = {
	{"drawLine", "Z", nullptr, 0, $field(FPMethodCalledTest$PlainViewINTAPI, drawLine$)},
	{"drawSelected", "Z", nullptr, 0, $field(FPMethodCalledTest$PlainViewINTAPI, drawSelected)},
	{"drawUnselected", "Z", nullptr, 0, $field(FPMethodCalledTest$PlainViewINTAPI, drawUnselected)},
	{}
};

$MethodInfo _FPMethodCalledTest$PlainViewINTAPI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(FPMethodCalledTest$PlainViewINTAPI::*)($Element*)>(&FPMethodCalledTest$PlainViewINTAPI::init$))},
	{"drawLine", "(ILjava/awt/Graphics;II)V", nullptr, $PROTECTED},
	{"drawSelectedText", "(Ljava/awt/Graphics;IIII)I", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"drawUnselectedText", "(Ljava/awt/Graphics;IIII)I", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"getResult", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FPMethodCalledTest$PlainViewINTAPI_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$PlainViewINTAPI", "FPMethodCalledTest", "PlainViewINTAPI", $STATIC},
	{"FPMethodCalledTest$Resultable", "FPMethodCalledTest", "Resultable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$PlainViewINTAPI_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$PlainViewINTAPI",
	"javax.swing.text.PlainView",
	"FPMethodCalledTest$Resultable",
	_FPMethodCalledTest$PlainViewINTAPI_FieldInfo_,
	_FPMethodCalledTest$PlainViewINTAPI_MethodInfo_,
	nullptr,
	nullptr,
	_FPMethodCalledTest$PlainViewINTAPI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$PlainViewINTAPI($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$PlainViewINTAPI));
}

int32_t FPMethodCalledTest$PlainViewINTAPI::hashCode() {
	 return this->$PlainView::hashCode();
}

bool FPMethodCalledTest$PlainViewINTAPI::equals(Object$* arg0) {
	 return this->$PlainView::equals(arg0);
}

$Object* FPMethodCalledTest$PlainViewINTAPI::clone() {
	 return this->$PlainView::clone();
}

$String* FPMethodCalledTest$PlainViewINTAPI::toString() {
	 return this->$PlainView::toString();
}

void FPMethodCalledTest$PlainViewINTAPI::finalize() {
	this->$PlainView::finalize();
}

void FPMethodCalledTest$PlainViewINTAPI::init$($Element* elem) {
	$PlainView::init$(elem);
	this->drawLine$ = false;
	this->drawSelected = false;
	this->drawUnselected = false;
}

void FPMethodCalledTest$PlainViewINTAPI::drawLine(int32_t lineIndex, $Graphics* g, int32_t x, int32_t y) {
	this->drawLine$ = true;
	$PlainView::drawLine(lineIndex, g, x, y);
}

int32_t FPMethodCalledTest$PlainViewINTAPI::drawSelectedText($Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) {
	this->drawSelected = true;
	return $PlainView::drawSelectedText(g, x, y, p0, p1);
}

int32_t FPMethodCalledTest$PlainViewINTAPI::drawUnselectedText($Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) {
	this->drawUnselected = true;
	return $PlainView::drawUnselectedText(g, x, y, p0, p1);
}

bool FPMethodCalledTest$PlainViewINTAPI::getResult() {
	return this->drawLine$ && this->drawSelected && this->drawUnselected;
}

FPMethodCalledTest$PlainViewINTAPI::FPMethodCalledTest$PlainViewINTAPI() {
}

$Class* FPMethodCalledTest$PlainViewINTAPI::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$PlainViewINTAPI, name, initialize, &_FPMethodCalledTest$PlainViewINTAPI_ClassInfo_, allocate$FPMethodCalledTest$PlainViewINTAPI);
	return class$;
}

$Class* FPMethodCalledTest$PlainViewINTAPI::class$ = nullptr;