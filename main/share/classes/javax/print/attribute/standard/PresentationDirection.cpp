#include <javax/print/attribute/standard/PresentationDirection.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef TOBOTTOM_TOLEFT
#undef TOBOTTOM_TORIGHT
#undef TOLEFT_TOBOTTOM
#undef TOLEFT_TOTOP
#undef TORIGHT_TOBOTTOM
#undef TORIGHT_TOTOP
#undef TOTOP_TOLEFT
#undef TOTOP_TORIGHT

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $PresentationDirectionArray = $Array<::javax::print::attribute::standard::PresentationDirection>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _PresentationDirection_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PresentationDirection, serialVersionUID)},
	{"TOBOTTOM_TORIGHT", "Ljavax/print/attribute/standard/PresentationDirection;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PresentationDirection, TOBOTTOM_TORIGHT)},
	{"TOBOTTOM_TOLEFT", "Ljavax/print/attribute/standard/PresentationDirection;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PresentationDirection, TOBOTTOM_TOLEFT)},
	{"TOTOP_TORIGHT", "Ljavax/print/attribute/standard/PresentationDirection;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PresentationDirection, TOTOP_TORIGHT)},
	{"TOTOP_TOLEFT", "Ljavax/print/attribute/standard/PresentationDirection;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PresentationDirection, TOTOP_TOLEFT)},
	{"TORIGHT_TOBOTTOM", "Ljavax/print/attribute/standard/PresentationDirection;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PresentationDirection, TORIGHT_TOBOTTOM)},
	{"TORIGHT_TOTOP", "Ljavax/print/attribute/standard/PresentationDirection;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PresentationDirection, TORIGHT_TOTOP)},
	{"TOLEFT_TOBOTTOM", "Ljavax/print/attribute/standard/PresentationDirection;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PresentationDirection, TOLEFT_TOBOTTOM)},
	{"TOLEFT_TOTOP", "Ljavax/print/attribute/standard/PresentationDirection;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PresentationDirection, TOLEFT_TOTOP)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PresentationDirection, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/PresentationDirection;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PresentationDirection, myEnumValueTable)},
	{}
};

$MethodInfo _PresentationDirection_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PresentationDirection::*)(int32_t)>(&PresentationDirection::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PresentationDirection_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.PresentationDirection",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.PrintJobAttribute,javax.print.attribute.PrintRequestAttribute",
	_PresentationDirection_FieldInfo_,
	_PresentationDirection_MethodInfo_
};

$Object* allocate$PresentationDirection($Class* clazz) {
	return $of($alloc(PresentationDirection));
}

$Object* PresentationDirection::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t PresentationDirection::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* PresentationDirection::toString() {
	 return this->$EnumSyntax::toString();
}

bool PresentationDirection::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void PresentationDirection::finalize() {
	this->$EnumSyntax::finalize();
}

PresentationDirection* PresentationDirection::TOBOTTOM_TORIGHT = nullptr;
PresentationDirection* PresentationDirection::TOBOTTOM_TOLEFT = nullptr;
PresentationDirection* PresentationDirection::TOTOP_TORIGHT = nullptr;
PresentationDirection* PresentationDirection::TOTOP_TOLEFT = nullptr;
PresentationDirection* PresentationDirection::TORIGHT_TOBOTTOM = nullptr;
PresentationDirection* PresentationDirection::TORIGHT_TOTOP = nullptr;
PresentationDirection* PresentationDirection::TOLEFT_TOBOTTOM = nullptr;
PresentationDirection* PresentationDirection::TOLEFT_TOTOP = nullptr;
$StringArray* PresentationDirection::myStringTable = nullptr;
$PresentationDirectionArray* PresentationDirection::myEnumValueTable = nullptr;

void PresentationDirection::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* PresentationDirection::getStringTable() {
	return PresentationDirection::myStringTable;
}

$EnumSyntaxArray* PresentationDirection::getEnumValueTable() {
	return $fcast($EnumSyntaxArray, PresentationDirection::myEnumValueTable);
}

$Class* PresentationDirection::getCategory() {
	return PresentationDirection::class$;
}

$String* PresentationDirection::getName() {
	return "presentation-direction"_s;
}

void clinit$PresentationDirection($Class* class$) {
	$assignStatic(PresentationDirection::TOBOTTOM_TORIGHT, $new(PresentationDirection, 0));
	$assignStatic(PresentationDirection::TOBOTTOM_TOLEFT, $new(PresentationDirection, 1));
	$assignStatic(PresentationDirection::TOTOP_TORIGHT, $new(PresentationDirection, 2));
	$assignStatic(PresentationDirection::TOTOP_TOLEFT, $new(PresentationDirection, 3));
	$assignStatic(PresentationDirection::TORIGHT_TOBOTTOM, $new(PresentationDirection, 4));
	$assignStatic(PresentationDirection::TORIGHT_TOTOP, $new(PresentationDirection, 5));
	$assignStatic(PresentationDirection::TOLEFT_TOBOTTOM, $new(PresentationDirection, 6));
	$assignStatic(PresentationDirection::TOLEFT_TOTOP, $new(PresentationDirection, 7));
	$assignStatic(PresentationDirection::myStringTable, $new($StringArray, {
		"tobottom-toright"_s,
		"tobottom-toleft"_s,
		"totop-toright"_s,
		"totop-toleft"_s,
		"toright-tobottom"_s,
		"toright-totop"_s,
		"toleft-tobottom"_s,
		"toleft-totop"_s
	}));
	$assignStatic(PresentationDirection::myEnumValueTable, $new($PresentationDirectionArray, {
		PresentationDirection::TOBOTTOM_TORIGHT,
		PresentationDirection::TOBOTTOM_TOLEFT,
		PresentationDirection::TOTOP_TORIGHT,
		PresentationDirection::TOTOP_TOLEFT,
		PresentationDirection::TORIGHT_TOBOTTOM,
		PresentationDirection::TORIGHT_TOTOP,
		PresentationDirection::TOLEFT_TOBOTTOM,
		PresentationDirection::TOLEFT_TOTOP
	}));
}

PresentationDirection::PresentationDirection() {
}

$Class* PresentationDirection::load$($String* name, bool initialize) {
	$loadClass(PresentationDirection, name, initialize, &_PresentationDirection_ClassInfo_, clinit$PresentationDirection, allocate$PresentationDirection);
	return class$;
}

$Class* PresentationDirection::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax