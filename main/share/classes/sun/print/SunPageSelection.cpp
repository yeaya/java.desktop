#include <sun/print/SunPageSelection.h>

#include <jcpp.h>

#undef ALL
#undef RANGE
#undef SELECTION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace print {

$FieldInfo _SunPageSelection_FieldInfo_[] = {
	{"ALL", "Lsun/print/SunPageSelection;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunPageSelection, ALL)},
	{"RANGE", "Lsun/print/SunPageSelection;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunPageSelection, RANGE)},
	{"SELECTION", "Lsun/print/SunPageSelection;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunPageSelection, SELECTION)},
	{"pages", "I", nullptr, $PRIVATE, $field(SunPageSelection, pages)},
	{}
};

$MethodInfo _SunPageSelection_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SunPageSelection::*)(int32_t)>(&SunPageSelection::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SunPageSelection_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.SunPageSelection",
	"java.lang.Object",
	"javax.print.attribute.PrintRequestAttribute",
	_SunPageSelection_FieldInfo_,
	_SunPageSelection_MethodInfo_
};

$Object* allocate$SunPageSelection($Class* clazz) {
	return $of($alloc(SunPageSelection));
}

SunPageSelection* SunPageSelection::ALL = nullptr;
SunPageSelection* SunPageSelection::RANGE = nullptr;
SunPageSelection* SunPageSelection::SELECTION = nullptr;

void SunPageSelection::init$(int32_t value) {
	this->pages = value;
}

$Class* SunPageSelection::getCategory() {
	return SunPageSelection::class$;
}

$String* SunPageSelection::getName() {
	return "sun-page-selection"_s;
}

$String* SunPageSelection::toString() {
	return $str({"page-selection: "_s, $$str(this->pages)});
}

void clinit$SunPageSelection($Class* class$) {
	$assignStatic(SunPageSelection::ALL, $new(SunPageSelection, 0));
	$assignStatic(SunPageSelection::RANGE, $new(SunPageSelection, 1));
	$assignStatic(SunPageSelection::SELECTION, $new(SunPageSelection, 2));
}

SunPageSelection::SunPageSelection() {
}

$Class* SunPageSelection::load$($String* name, bool initialize) {
	$loadClass(SunPageSelection, name, initialize, &_SunPageSelection_ClassInfo_, clinit$SunPageSelection, allocate$SunPageSelection);
	return class$;
}

$Class* SunPageSelection::class$ = nullptr;

	} // print
} // sun