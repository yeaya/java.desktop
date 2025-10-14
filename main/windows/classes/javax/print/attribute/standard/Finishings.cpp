#include <javax/print/attribute/standard/Finishings.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef BIND
#undef COVER
#undef EDGE_STITCH
#undef EDGE_STITCH_BOTTOM
#undef EDGE_STITCH_LEFT
#undef EDGE_STITCH_RIGHT
#undef EDGE_STITCH_TOP
#undef NONE
#undef SADDLE_STITCH
#undef STAPLE
#undef STAPLE_BOTTOM_LEFT
#undef STAPLE_BOTTOM_RIGHT
#undef STAPLE_DUAL_BOTTOM
#undef STAPLE_DUAL_LEFT
#undef STAPLE_DUAL_RIGHT
#undef STAPLE_DUAL_TOP
#undef STAPLE_TOP_LEFT
#undef STAPLE_TOP_RIGHT

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $FinishingsArray = $Array<::javax::print::attribute::standard::Finishings>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _Finishings_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Finishings, serialVersionUID)},
	{"NONE", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, NONE)},
	{"STAPLE", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, STAPLE)},
	{"COVER", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, COVER)},
	{"BIND", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, BIND)},
	{"SADDLE_STITCH", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, SADDLE_STITCH)},
	{"EDGE_STITCH", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, EDGE_STITCH)},
	{"STAPLE_TOP_LEFT", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, STAPLE_TOP_LEFT)},
	{"STAPLE_BOTTOM_LEFT", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, STAPLE_BOTTOM_LEFT)},
	{"STAPLE_TOP_RIGHT", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, STAPLE_TOP_RIGHT)},
	{"STAPLE_BOTTOM_RIGHT", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, STAPLE_BOTTOM_RIGHT)},
	{"EDGE_STITCH_LEFT", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, EDGE_STITCH_LEFT)},
	{"EDGE_STITCH_TOP", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, EDGE_STITCH_TOP)},
	{"EDGE_STITCH_RIGHT", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, EDGE_STITCH_RIGHT)},
	{"EDGE_STITCH_BOTTOM", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, EDGE_STITCH_BOTTOM)},
	{"STAPLE_DUAL_LEFT", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, STAPLE_DUAL_LEFT)},
	{"STAPLE_DUAL_TOP", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, STAPLE_DUAL_TOP)},
	{"STAPLE_DUAL_RIGHT", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, STAPLE_DUAL_RIGHT)},
	{"STAPLE_DUAL_BOTTOM", "Ljavax/print/attribute/standard/Finishings;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Finishings, STAPLE_DUAL_BOTTOM)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Finishings, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/Finishings;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Finishings, myEnumValueTable)},
	{}
};

$MethodInfo _Finishings_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(Finishings::*)(int32_t)>(&Finishings::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getOffset", "()I", nullptr, $PROTECTED},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Finishings_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.standard.Finishings",
	"javax.print.attribute.EnumSyntax",
	"javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
	_Finishings_FieldInfo_,
	_Finishings_MethodInfo_
};

$Object* allocate$Finishings($Class* clazz) {
	return $of($alloc(Finishings));
}

$Object* Finishings::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t Finishings::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* Finishings::toString() {
	 return this->$EnumSyntax::toString();
}

bool Finishings::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void Finishings::finalize() {
	this->$EnumSyntax::finalize();
}


Finishings* Finishings::NONE = nullptr;

Finishings* Finishings::STAPLE = nullptr;

Finishings* Finishings::COVER = nullptr;

Finishings* Finishings::BIND = nullptr;

Finishings* Finishings::SADDLE_STITCH = nullptr;

Finishings* Finishings::EDGE_STITCH = nullptr;

Finishings* Finishings::STAPLE_TOP_LEFT = nullptr;

Finishings* Finishings::STAPLE_BOTTOM_LEFT = nullptr;

Finishings* Finishings::STAPLE_TOP_RIGHT = nullptr;

Finishings* Finishings::STAPLE_BOTTOM_RIGHT = nullptr;

Finishings* Finishings::EDGE_STITCH_LEFT = nullptr;

Finishings* Finishings::EDGE_STITCH_TOP = nullptr;

Finishings* Finishings::EDGE_STITCH_RIGHT = nullptr;

Finishings* Finishings::EDGE_STITCH_BOTTOM = nullptr;

Finishings* Finishings::STAPLE_DUAL_LEFT = nullptr;

Finishings* Finishings::STAPLE_DUAL_TOP = nullptr;

Finishings* Finishings::STAPLE_DUAL_RIGHT = nullptr;

Finishings* Finishings::STAPLE_DUAL_BOTTOM = nullptr;

$StringArray* Finishings::myStringTable = nullptr;

$FinishingsArray* Finishings::myEnumValueTable = nullptr;

void Finishings::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* Finishings::getStringTable() {
	return $cast($StringArray, $nc(Finishings::myStringTable)->clone());
}

$EnumSyntaxArray* Finishings::getEnumValueTable() {
	return $cast($EnumSyntaxArray, $nc(Finishings::myEnumValueTable)->clone());
}

int32_t Finishings::getOffset() {
	return 3;
}

$Class* Finishings::getCategory() {
	return Finishings::class$;
}

$String* Finishings::getName() {
	return "finishings"_s;
}

void clinit$Finishings($Class* class$) {
	$assignStatic(Finishings::NONE, $new(Finishings, 3));
	$assignStatic(Finishings::STAPLE, $new(Finishings, 4));
	$assignStatic(Finishings::COVER, $new(Finishings, 6));
	$assignStatic(Finishings::BIND, $new(Finishings, 7));
	$assignStatic(Finishings::SADDLE_STITCH, $new(Finishings, 8));
	$assignStatic(Finishings::EDGE_STITCH, $new(Finishings, 9));
	$assignStatic(Finishings::STAPLE_TOP_LEFT, $new(Finishings, 20));
	$assignStatic(Finishings::STAPLE_BOTTOM_LEFT, $new(Finishings, 21));
	$assignStatic(Finishings::STAPLE_TOP_RIGHT, $new(Finishings, 22));
	$assignStatic(Finishings::STAPLE_BOTTOM_RIGHT, $new(Finishings, 23));
	$assignStatic(Finishings::EDGE_STITCH_LEFT, $new(Finishings, 24));
	$assignStatic(Finishings::EDGE_STITCH_TOP, $new(Finishings, 25));
	$assignStatic(Finishings::EDGE_STITCH_RIGHT, $new(Finishings, 26));
	$assignStatic(Finishings::EDGE_STITCH_BOTTOM, $new(Finishings, 27));
	$assignStatic(Finishings::STAPLE_DUAL_LEFT, $new(Finishings, 28));
	$assignStatic(Finishings::STAPLE_DUAL_TOP, $new(Finishings, 29));
	$assignStatic(Finishings::STAPLE_DUAL_RIGHT, $new(Finishings, 30));
	$assignStatic(Finishings::STAPLE_DUAL_BOTTOM, $new(Finishings, 31));
	$assignStatic(Finishings::myStringTable, $new($StringArray, {
		"none"_s,
		"staple"_s,
		($String*)nullptr,
		"cover"_s,
		"bind"_s,
		"saddle-stitch"_s,
		"edge-stitch"_s,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		"staple-top-left"_s,
		"staple-bottom-left"_s,
		"staple-top-right"_s,
		"staple-bottom-right"_s,
		"edge-stitch-left"_s,
		"edge-stitch-top"_s,
		"edge-stitch-right"_s,
		"edge-stitch-bottom"_s,
		"staple-dual-left"_s,
		"staple-dual-top"_s,
		"staple-dual-right"_s,
		"staple-dual-bottom"_s
	}));
	$assignStatic(Finishings::myEnumValueTable, $new($FinishingsArray, {
		Finishings::NONE,
		Finishings::STAPLE,
		(Finishings*)nullptr,
		Finishings::COVER,
		Finishings::BIND,
		Finishings::SADDLE_STITCH,
		Finishings::EDGE_STITCH,
		(Finishings*)nullptr,
		(Finishings*)nullptr,
		(Finishings*)nullptr,
		(Finishings*)nullptr,
		(Finishings*)nullptr,
		(Finishings*)nullptr,
		(Finishings*)nullptr,
		(Finishings*)nullptr,
		(Finishings*)nullptr,
		(Finishings*)nullptr,
		Finishings::STAPLE_TOP_LEFT,
		Finishings::STAPLE_BOTTOM_LEFT,
		Finishings::STAPLE_TOP_RIGHT,
		Finishings::STAPLE_BOTTOM_RIGHT,
		Finishings::EDGE_STITCH_LEFT,
		Finishings::EDGE_STITCH_TOP,
		Finishings::EDGE_STITCH_RIGHT,
		Finishings::EDGE_STITCH_BOTTOM,
		Finishings::STAPLE_DUAL_LEFT,
		Finishings::STAPLE_DUAL_TOP,
		Finishings::STAPLE_DUAL_RIGHT,
		Finishings::STAPLE_DUAL_BOTTOM
	}));
}

Finishings::Finishings() {
}

$Class* Finishings::load$($String* name, bool initialize) {
	$loadClass(Finishings, name, initialize, &_Finishings_ClassInfo_, clinit$Finishings, allocate$Finishings);
	return class$;
}

$Class* Finishings::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax