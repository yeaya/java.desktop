#include <sun/print/SunMinMaxPage.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace print {

$FieldInfo _SunMinMaxPage_FieldInfo_[] = {
	{"page_max", "I", nullptr, $PRIVATE, $field(SunMinMaxPage, page_max)},
	{"page_min", "I", nullptr, $PRIVATE, $field(SunMinMaxPage, page_min)},
	{}
};

$MethodInfo _SunMinMaxPage_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(SunMinMaxPage::*)(int32_t,int32_t)>(&SunMinMaxPage::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/PrintRequestAttribute;>;", $PUBLIC},
	{"getMax", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SunMinMaxPage::*)()>(&SunMinMaxPage::getMax))},
	{"getMin", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SunMinMaxPage::*)()>(&SunMinMaxPage::getMin))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SunMinMaxPage_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.SunMinMaxPage",
	"java.lang.Object",
	"javax.print.attribute.PrintRequestAttribute",
	_SunMinMaxPage_FieldInfo_,
	_SunMinMaxPage_MethodInfo_
};

$Object* allocate$SunMinMaxPage($Class* clazz) {
	return $of($alloc(SunMinMaxPage));
}

void SunMinMaxPage::init$(int32_t min, int32_t max) {
	this->page_min = min;
	this->page_max = max;
}

$Class* SunMinMaxPage::getCategory() {
	return SunMinMaxPage::class$;
}

int32_t SunMinMaxPage::getMin() {
	return this->page_min;
}

int32_t SunMinMaxPage::getMax() {
	return this->page_max;
}

$String* SunMinMaxPage::getName() {
	return "sun-page-minmax"_s;
}

SunMinMaxPage::SunMinMaxPage() {
}

$Class* SunMinMaxPage::load$($String* name, bool initialize) {
	$loadClass(SunMinMaxPage, name, initialize, &_SunMinMaxPage_ClassInfo_, allocate$SunMinMaxPage);
	return class$;
}

$Class* SunMinMaxPage::class$ = nullptr;

	} // print
} // sun