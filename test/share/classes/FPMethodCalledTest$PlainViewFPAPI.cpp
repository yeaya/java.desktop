#include <FPMethodCalledTest$PlainViewFPAPI.h>

#include <FPMethodCalledTest.h>
#include <java/awt/Graphics2D.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/PlainView.h>
#include <jcpp.h>

using $Graphics2D = ::java::awt::Graphics2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $PlainView = ::javax::swing::text::PlainView;

$FieldInfo _FPMethodCalledTest$PlainViewFPAPI_FieldInfo_[] = {
	{"drawLine", "Z", nullptr, 0, $field(FPMethodCalledTest$PlainViewFPAPI, drawLine$)},
	{"drawSelected", "Z", nullptr, 0, $field(FPMethodCalledTest$PlainViewFPAPI, drawSelected)},
	{"drawUnselected", "Z", nullptr, 0, $field(FPMethodCalledTest$PlainViewFPAPI, drawUnselected)},
	{}
};

$MethodInfo _FPMethodCalledTest$PlainViewFPAPI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(FPMethodCalledTest$PlainViewFPAPI::*)($Element*)>(&FPMethodCalledTest$PlainViewFPAPI::init$))},
	{"drawLine", "(ILjava/awt/Graphics2D;FF)V", nullptr, $PROTECTED},
	{"drawSelectedText", "(Ljava/awt/Graphics2D;FFII)F", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"drawUnselectedText", "(Ljava/awt/Graphics2D;FFII)F", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"getResult", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FPMethodCalledTest$PlainViewFPAPI_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$PlainViewFPAPI", "FPMethodCalledTest", "PlainViewFPAPI", $STATIC},
	{"FPMethodCalledTest$Resultable", "FPMethodCalledTest", "Resultable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$PlainViewFPAPI_ClassInfo_ = {
	$ACC_SUPER,
	"FPMethodCalledTest$PlainViewFPAPI",
	"javax.swing.text.PlainView",
	"FPMethodCalledTest$Resultable",
	_FPMethodCalledTest$PlainViewFPAPI_FieldInfo_,
	_FPMethodCalledTest$PlainViewFPAPI_MethodInfo_,
	nullptr,
	nullptr,
	_FPMethodCalledTest$PlainViewFPAPI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$PlainViewFPAPI($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$PlainViewFPAPI));
}

int32_t FPMethodCalledTest$PlainViewFPAPI::hashCode() {
	 return this->$PlainView::hashCode();
}

bool FPMethodCalledTest$PlainViewFPAPI::equals(Object$* arg0) {
	 return this->$PlainView::equals(arg0);
}

$Object* FPMethodCalledTest$PlainViewFPAPI::clone() {
	 return this->$PlainView::clone();
}

$String* FPMethodCalledTest$PlainViewFPAPI::toString() {
	 return this->$PlainView::toString();
}

void FPMethodCalledTest$PlainViewFPAPI::finalize() {
	this->$PlainView::finalize();
}

void FPMethodCalledTest$PlainViewFPAPI::init$($Element* elem) {
	$PlainView::init$(elem);
	this->drawLine$ = false;
	this->drawSelected = false;
	this->drawUnselected = false;
}

void FPMethodCalledTest$PlainViewFPAPI::drawLine(int32_t lineIndex, $Graphics2D* g, float x, float y) {
	this->drawLine$ = true;
	$PlainView::drawLine(lineIndex, g, x, y);
}

float FPMethodCalledTest$PlainViewFPAPI::drawSelectedText($Graphics2D* g, float x, float y, int32_t p0, int32_t p1) {
	this->drawSelected = true;
	return $PlainView::drawSelectedText(g, x, y, p0, p1);
}

float FPMethodCalledTest$PlainViewFPAPI::drawUnselectedText($Graphics2D* g, float x, float y, int32_t p0, int32_t p1) {
	this->drawUnselected = true;
	return $PlainView::drawUnselectedText(g, x, y, p0, p1);
}

bool FPMethodCalledTest$PlainViewFPAPI::getResult() {
	return this->drawSelected;
}

FPMethodCalledTest$PlainViewFPAPI::FPMethodCalledTest$PlainViewFPAPI() {
}

$Class* FPMethodCalledTest$PlainViewFPAPI::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$PlainViewFPAPI, name, initialize, &_FPMethodCalledTest$PlainViewFPAPI_ClassInfo_, allocate$FPMethodCalledTest$PlainViewFPAPI);
	return class$;
}

$Class* FPMethodCalledTest$PlainViewFPAPI::class$ = nullptr;