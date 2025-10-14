#include <javax/print/attribute/standard/MediaSizeName.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/standard/Media.h>
#include <jcpp.h>

#undef A
#undef B
#undef C
#undef D
#undef E
#undef EXECUTIVE
#undef FOLIO
#undef INVOICE
#undef ISO_A0
#undef ISO_A1
#undef ISO_A10
#undef ISO_A2
#undef ISO_A3
#undef ISO_A4
#undef ISO_A5
#undef ISO_A6
#undef ISO_A7
#undef ISO_A8
#undef ISO_A9
#undef ISO_B0
#undef ISO_B1
#undef ISO_B10
#undef ISO_B2
#undef ISO_B3
#undef ISO_B4
#undef ISO_B5
#undef ISO_B6
#undef ISO_B7
#undef ISO_B8
#undef ISO_B9
#undef ISO_C0
#undef ISO_C1
#undef ISO_C2
#undef ISO_C3
#undef ISO_C4
#undef ISO_C5
#undef ISO_C6
#undef ISO_DESIGNATED_LONG
#undef ITALY_ENVELOPE
#undef JAPANESE_DOUBLE_POSTCARD
#undef JAPANESE_POSTCARD
#undef JIS_B0
#undef JIS_B1
#undef JIS_B10
#undef JIS_B2
#undef JIS_B3
#undef JIS_B4
#undef JIS_B5
#undef JIS_B6
#undef JIS_B7
#undef JIS_B8
#undef JIS_B9
#undef LEDGER
#undef MONARCH_ENVELOPE
#undef NA_5X7
#undef NA_6X9_ENVELOPE
#undef NA_7X9_ENVELOPE
#undef NA_9X11_ENVELOPE
#undef NA_9X12_ENVELOPE
#undef NA_LEGAL
#undef NA_LETTER
#undef NA_NUMBER_10_ENVELOPE
#undef NA_NUMBER_11_ENVELOPE
#undef NA_NUMBER_12_ENVELOPE
#undef NA_NUMBER_14_ENVELOPE
#undef NA_NUMBER_9_ENVELOPE
#undef PERSONAL_ENVELOPE
#undef QUARTO
#undef TABLOID

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $MediaSizeNameArray = $Array<::javax::print::attribute::standard::MediaSizeName>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $Media = ::javax::print::attribute::standard::Media;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _MediaSizeName_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MediaSizeName, serialVersionUID)},
	{"ISO_A0", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_A0)},
	{"ISO_A1", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_A1)},
	{"ISO_A2", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_A2)},
	{"ISO_A3", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_A3)},
	{"ISO_A4", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_A4)},
	{"ISO_A5", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_A5)},
	{"ISO_A6", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_A6)},
	{"ISO_A7", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_A7)},
	{"ISO_A8", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_A8)},
	{"ISO_A9", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_A9)},
	{"ISO_A10", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_A10)},
	{"ISO_B0", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_B0)},
	{"ISO_B1", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_B1)},
	{"ISO_B2", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_B2)},
	{"ISO_B3", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_B3)},
	{"ISO_B4", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_B4)},
	{"ISO_B5", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_B5)},
	{"ISO_B6", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_B6)},
	{"ISO_B7", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_B7)},
	{"ISO_B8", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_B8)},
	{"ISO_B9", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_B9)},
	{"ISO_B10", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_B10)},
	{"JIS_B0", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, JIS_B0)},
	{"JIS_B1", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, JIS_B1)},
	{"JIS_B2", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, JIS_B2)},
	{"JIS_B3", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, JIS_B3)},
	{"JIS_B4", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, JIS_B4)},
	{"JIS_B5", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, JIS_B5)},
	{"JIS_B6", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, JIS_B6)},
	{"JIS_B7", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, JIS_B7)},
	{"JIS_B8", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, JIS_B8)},
	{"JIS_B9", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, JIS_B9)},
	{"JIS_B10", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, JIS_B10)},
	{"ISO_C0", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_C0)},
	{"ISO_C1", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_C1)},
	{"ISO_C2", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_C2)},
	{"ISO_C3", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_C3)},
	{"ISO_C4", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_C4)},
	{"ISO_C5", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_C5)},
	{"ISO_C6", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_C6)},
	{"NA_LETTER", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, NA_LETTER)},
	{"NA_LEGAL", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, NA_LEGAL)},
	{"EXECUTIVE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, EXECUTIVE)},
	{"LEDGER", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, LEDGER)},
	{"TABLOID", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, TABLOID)},
	{"INVOICE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, INVOICE)},
	{"FOLIO", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, FOLIO)},
	{"QUARTO", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, QUARTO)},
	{"JAPANESE_POSTCARD", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, JAPANESE_POSTCARD)},
	{"JAPANESE_DOUBLE_POSTCARD", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, JAPANESE_DOUBLE_POSTCARD)},
	{"A", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, A)},
	{"B", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, B)},
	{"C", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, C)},
	{"D", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, D)},
	{"E", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, E)},
	{"ISO_DESIGNATED_LONG", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ISO_DESIGNATED_LONG)},
	{"ITALY_ENVELOPE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, ITALY_ENVELOPE)},
	{"MONARCH_ENVELOPE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, MONARCH_ENVELOPE)},
	{"PERSONAL_ENVELOPE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, PERSONAL_ENVELOPE)},
	{"NA_NUMBER_9_ENVELOPE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, NA_NUMBER_9_ENVELOPE)},
	{"NA_NUMBER_10_ENVELOPE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, NA_NUMBER_10_ENVELOPE)},
	{"NA_NUMBER_11_ENVELOPE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, NA_NUMBER_11_ENVELOPE)},
	{"NA_NUMBER_12_ENVELOPE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, NA_NUMBER_12_ENVELOPE)},
	{"NA_NUMBER_14_ENVELOPE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, NA_NUMBER_14_ENVELOPE)},
	{"NA_6X9_ENVELOPE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, NA_6X9_ENVELOPE)},
	{"NA_7X9_ENVELOPE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, NA_7X9_ENVELOPE)},
	{"NA_9X11_ENVELOPE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, NA_9X11_ENVELOPE)},
	{"NA_9X12_ENVELOPE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, NA_9X12_ENVELOPE)},
	{"NA_10X13_ENVELOPE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, NA_10X13_ENVELOPE)},
	{"NA_10X14_ENVELOPE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, NA_10X14_ENVELOPE)},
	{"NA_10X15_ENVELOPE", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, NA_10X15_ENVELOPE)},
	{"NA_5X7", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, NA_5X7)},
	{"NA_8X10", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSizeName, NA_8X10)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MediaSizeName, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MediaSizeName, myEnumValueTable)},
	{}
};

$MethodInfo _MediaSizeName_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(MediaSizeName::*)(int32_t)>(&MediaSizeName::init$))},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MediaSizeName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.standard.MediaSizeName",
	"javax.print.attribute.standard.Media",
	nullptr,
	_MediaSizeName_FieldInfo_,
	_MediaSizeName_MethodInfo_
};

$Object* allocate$MediaSizeName($Class* clazz) {
	return $of($alloc(MediaSizeName));
}


MediaSizeName* MediaSizeName::ISO_A0 = nullptr;

MediaSizeName* MediaSizeName::ISO_A1 = nullptr;

MediaSizeName* MediaSizeName::ISO_A2 = nullptr;

MediaSizeName* MediaSizeName::ISO_A3 = nullptr;

MediaSizeName* MediaSizeName::ISO_A4 = nullptr;

MediaSizeName* MediaSizeName::ISO_A5 = nullptr;

MediaSizeName* MediaSizeName::ISO_A6 = nullptr;

MediaSizeName* MediaSizeName::ISO_A7 = nullptr;

MediaSizeName* MediaSizeName::ISO_A8 = nullptr;

MediaSizeName* MediaSizeName::ISO_A9 = nullptr;

MediaSizeName* MediaSizeName::ISO_A10 = nullptr;

MediaSizeName* MediaSizeName::ISO_B0 = nullptr;

MediaSizeName* MediaSizeName::ISO_B1 = nullptr;

MediaSizeName* MediaSizeName::ISO_B2 = nullptr;

MediaSizeName* MediaSizeName::ISO_B3 = nullptr;

MediaSizeName* MediaSizeName::ISO_B4 = nullptr;

MediaSizeName* MediaSizeName::ISO_B5 = nullptr;

MediaSizeName* MediaSizeName::ISO_B6 = nullptr;

MediaSizeName* MediaSizeName::ISO_B7 = nullptr;

MediaSizeName* MediaSizeName::ISO_B8 = nullptr;

MediaSizeName* MediaSizeName::ISO_B9 = nullptr;

MediaSizeName* MediaSizeName::ISO_B10 = nullptr;

MediaSizeName* MediaSizeName::JIS_B0 = nullptr;

MediaSizeName* MediaSizeName::JIS_B1 = nullptr;

MediaSizeName* MediaSizeName::JIS_B2 = nullptr;

MediaSizeName* MediaSizeName::JIS_B3 = nullptr;

MediaSizeName* MediaSizeName::JIS_B4 = nullptr;

MediaSizeName* MediaSizeName::JIS_B5 = nullptr;

MediaSizeName* MediaSizeName::JIS_B6 = nullptr;

MediaSizeName* MediaSizeName::JIS_B7 = nullptr;

MediaSizeName* MediaSizeName::JIS_B8 = nullptr;

MediaSizeName* MediaSizeName::JIS_B9 = nullptr;

MediaSizeName* MediaSizeName::JIS_B10 = nullptr;

MediaSizeName* MediaSizeName::ISO_C0 = nullptr;

MediaSizeName* MediaSizeName::ISO_C1 = nullptr;

MediaSizeName* MediaSizeName::ISO_C2 = nullptr;

MediaSizeName* MediaSizeName::ISO_C3 = nullptr;

MediaSizeName* MediaSizeName::ISO_C4 = nullptr;

MediaSizeName* MediaSizeName::ISO_C5 = nullptr;

MediaSizeName* MediaSizeName::ISO_C6 = nullptr;

MediaSizeName* MediaSizeName::NA_LETTER = nullptr;

MediaSizeName* MediaSizeName::NA_LEGAL = nullptr;

MediaSizeName* MediaSizeName::EXECUTIVE = nullptr;

MediaSizeName* MediaSizeName::LEDGER = nullptr;

MediaSizeName* MediaSizeName::TABLOID = nullptr;

MediaSizeName* MediaSizeName::INVOICE = nullptr;

MediaSizeName* MediaSizeName::FOLIO = nullptr;

MediaSizeName* MediaSizeName::QUARTO = nullptr;

MediaSizeName* MediaSizeName::JAPANESE_POSTCARD = nullptr;

MediaSizeName* MediaSizeName::JAPANESE_DOUBLE_POSTCARD = nullptr;

MediaSizeName* MediaSizeName::A = nullptr;

MediaSizeName* MediaSizeName::B = nullptr;

MediaSizeName* MediaSizeName::C = nullptr;

MediaSizeName* MediaSizeName::D = nullptr;

MediaSizeName* MediaSizeName::E = nullptr;

MediaSizeName* MediaSizeName::ISO_DESIGNATED_LONG = nullptr;

MediaSizeName* MediaSizeName::ITALY_ENVELOPE = nullptr;

MediaSizeName* MediaSizeName::MONARCH_ENVELOPE = nullptr;

MediaSizeName* MediaSizeName::PERSONAL_ENVELOPE = nullptr;

MediaSizeName* MediaSizeName::NA_NUMBER_9_ENVELOPE = nullptr;

MediaSizeName* MediaSizeName::NA_NUMBER_10_ENVELOPE = nullptr;

MediaSizeName* MediaSizeName::NA_NUMBER_11_ENVELOPE = nullptr;

MediaSizeName* MediaSizeName::NA_NUMBER_12_ENVELOPE = nullptr;

MediaSizeName* MediaSizeName::NA_NUMBER_14_ENVELOPE = nullptr;

MediaSizeName* MediaSizeName::NA_6X9_ENVELOPE = nullptr;

MediaSizeName* MediaSizeName::NA_7X9_ENVELOPE = nullptr;

MediaSizeName* MediaSizeName::NA_9X11_ENVELOPE = nullptr;

MediaSizeName* MediaSizeName::NA_9X12_ENVELOPE = nullptr;

MediaSizeName* MediaSizeName::NA_10X13_ENVELOPE = nullptr;

MediaSizeName* MediaSizeName::NA_10X14_ENVELOPE = nullptr;

MediaSizeName* MediaSizeName::NA_10X15_ENVELOPE = nullptr;

MediaSizeName* MediaSizeName::NA_5X7 = nullptr;

MediaSizeName* MediaSizeName::NA_8X10 = nullptr;

$StringArray* MediaSizeName::myStringTable = nullptr;

$MediaSizeNameArray* MediaSizeName::myEnumValueTable = nullptr;

void MediaSizeName::init$(int32_t value) {
	$Media::init$(value);
}

$StringArray* MediaSizeName::getStringTable() {
	return $cast($StringArray, $nc(MediaSizeName::myStringTable)->clone());
}

$EnumSyntaxArray* MediaSizeName::getEnumValueTable() {
	return $cast($EnumSyntaxArray, $nc(MediaSizeName::myEnumValueTable)->clone());
}

void clinit$MediaSizeName($Class* class$) {
	$assignStatic(MediaSizeName::ISO_A0, $new(MediaSizeName, 0));
	$assignStatic(MediaSizeName::ISO_A1, $new(MediaSizeName, 1));
	$assignStatic(MediaSizeName::ISO_A2, $new(MediaSizeName, 2));
	$assignStatic(MediaSizeName::ISO_A3, $new(MediaSizeName, 3));
	$assignStatic(MediaSizeName::ISO_A4, $new(MediaSizeName, 4));
	$assignStatic(MediaSizeName::ISO_A5, $new(MediaSizeName, 5));
	$assignStatic(MediaSizeName::ISO_A6, $new(MediaSizeName, 6));
	$assignStatic(MediaSizeName::ISO_A7, $new(MediaSizeName, 7));
	$assignStatic(MediaSizeName::ISO_A8, $new(MediaSizeName, 8));
	$assignStatic(MediaSizeName::ISO_A9, $new(MediaSizeName, 9));
	$assignStatic(MediaSizeName::ISO_A10, $new(MediaSizeName, 10));
	$assignStatic(MediaSizeName::ISO_B0, $new(MediaSizeName, 11));
	$assignStatic(MediaSizeName::ISO_B1, $new(MediaSizeName, 12));
	$assignStatic(MediaSizeName::ISO_B2, $new(MediaSizeName, 13));
	$assignStatic(MediaSizeName::ISO_B3, $new(MediaSizeName, 14));
	$assignStatic(MediaSizeName::ISO_B4, $new(MediaSizeName, 15));
	$assignStatic(MediaSizeName::ISO_B5, $new(MediaSizeName, 16));
	$assignStatic(MediaSizeName::ISO_B6, $new(MediaSizeName, 17));
	$assignStatic(MediaSizeName::ISO_B7, $new(MediaSizeName, 18));
	$assignStatic(MediaSizeName::ISO_B8, $new(MediaSizeName, 19));
	$assignStatic(MediaSizeName::ISO_B9, $new(MediaSizeName, 20));
	$assignStatic(MediaSizeName::ISO_B10, $new(MediaSizeName, 21));
	$assignStatic(MediaSizeName::JIS_B0, $new(MediaSizeName, 22));
	$assignStatic(MediaSizeName::JIS_B1, $new(MediaSizeName, 23));
	$assignStatic(MediaSizeName::JIS_B2, $new(MediaSizeName, 24));
	$assignStatic(MediaSizeName::JIS_B3, $new(MediaSizeName, 25));
	$assignStatic(MediaSizeName::JIS_B4, $new(MediaSizeName, 26));
	$assignStatic(MediaSizeName::JIS_B5, $new(MediaSizeName, 27));
	$assignStatic(MediaSizeName::JIS_B6, $new(MediaSizeName, 28));
	$assignStatic(MediaSizeName::JIS_B7, $new(MediaSizeName, 29));
	$assignStatic(MediaSizeName::JIS_B8, $new(MediaSizeName, 30));
	$assignStatic(MediaSizeName::JIS_B9, $new(MediaSizeName, 31));
	$assignStatic(MediaSizeName::JIS_B10, $new(MediaSizeName, 32));
	$assignStatic(MediaSizeName::ISO_C0, $new(MediaSizeName, 33));
	$assignStatic(MediaSizeName::ISO_C1, $new(MediaSizeName, 34));
	$assignStatic(MediaSizeName::ISO_C2, $new(MediaSizeName, 35));
	$assignStatic(MediaSizeName::ISO_C3, $new(MediaSizeName, 36));
	$assignStatic(MediaSizeName::ISO_C4, $new(MediaSizeName, 37));
	$assignStatic(MediaSizeName::ISO_C5, $new(MediaSizeName, 38));
	$assignStatic(MediaSizeName::ISO_C6, $new(MediaSizeName, 39));
	$assignStatic(MediaSizeName::NA_LETTER, $new(MediaSizeName, 40));
	$assignStatic(MediaSizeName::NA_LEGAL, $new(MediaSizeName, 41));
	$assignStatic(MediaSizeName::EXECUTIVE, $new(MediaSizeName, 42));
	$assignStatic(MediaSizeName::LEDGER, $new(MediaSizeName, 43));
	$assignStatic(MediaSizeName::TABLOID, $new(MediaSizeName, 44));
	$assignStatic(MediaSizeName::INVOICE, $new(MediaSizeName, 45));
	$assignStatic(MediaSizeName::FOLIO, $new(MediaSizeName, 46));
	$assignStatic(MediaSizeName::QUARTO, $new(MediaSizeName, 47));
	$assignStatic(MediaSizeName::JAPANESE_POSTCARD, $new(MediaSizeName, 48));
	$assignStatic(MediaSizeName::JAPANESE_DOUBLE_POSTCARD, $new(MediaSizeName, 49));
	$assignStatic(MediaSizeName::A, $new(MediaSizeName, 50));
	$assignStatic(MediaSizeName::B, $new(MediaSizeName, 51));
	$assignStatic(MediaSizeName::C, $new(MediaSizeName, 52));
	$assignStatic(MediaSizeName::D, $new(MediaSizeName, 53));
	$assignStatic(MediaSizeName::E, $new(MediaSizeName, 54));
	$assignStatic(MediaSizeName::ISO_DESIGNATED_LONG, $new(MediaSizeName, 55));
	$assignStatic(MediaSizeName::ITALY_ENVELOPE, $new(MediaSizeName, 56));
	$assignStatic(MediaSizeName::MONARCH_ENVELOPE, $new(MediaSizeName, 57));
	$assignStatic(MediaSizeName::PERSONAL_ENVELOPE, $new(MediaSizeName, 58));
	$assignStatic(MediaSizeName::NA_NUMBER_9_ENVELOPE, $new(MediaSizeName, 59));
	$assignStatic(MediaSizeName::NA_NUMBER_10_ENVELOPE, $new(MediaSizeName, 60));
	$assignStatic(MediaSizeName::NA_NUMBER_11_ENVELOPE, $new(MediaSizeName, 61));
	$assignStatic(MediaSizeName::NA_NUMBER_12_ENVELOPE, $new(MediaSizeName, 62));
	$assignStatic(MediaSizeName::NA_NUMBER_14_ENVELOPE, $new(MediaSizeName, 63));
	$assignStatic(MediaSizeName::NA_6X9_ENVELOPE, $new(MediaSizeName, 64));
	$assignStatic(MediaSizeName::NA_7X9_ENVELOPE, $new(MediaSizeName, 65));
	$assignStatic(MediaSizeName::NA_9X11_ENVELOPE, $new(MediaSizeName, 66));
	$assignStatic(MediaSizeName::NA_9X12_ENVELOPE, $new(MediaSizeName, 67));
	$assignStatic(MediaSizeName::NA_10X13_ENVELOPE, $new(MediaSizeName, 68));
	$assignStatic(MediaSizeName::NA_10X14_ENVELOPE, $new(MediaSizeName, 69));
	$assignStatic(MediaSizeName::NA_10X15_ENVELOPE, $new(MediaSizeName, 70));
	$assignStatic(MediaSizeName::NA_5X7, $new(MediaSizeName, 71));
	$assignStatic(MediaSizeName::NA_8X10, $new(MediaSizeName, 72));
	$assignStatic(MediaSizeName::myStringTable, $new($StringArray, {
		"iso-a0"_s,
		"iso-a1"_s,
		"iso-a2"_s,
		"iso-a3"_s,
		"iso-a4"_s,
		"iso-a5"_s,
		"iso-a6"_s,
		"iso-a7"_s,
		"iso-a8"_s,
		"iso-a9"_s,
		"iso-a10"_s,
		"iso-b0"_s,
		"iso-b1"_s,
		"iso-b2"_s,
		"iso-b3"_s,
		"iso-b4"_s,
		"iso-b5"_s,
		"iso-b6"_s,
		"iso-b7"_s,
		"iso-b8"_s,
		"iso-b9"_s,
		"iso-b10"_s,
		"jis-b0"_s,
		"jis-b1"_s,
		"jis-b2"_s,
		"jis-b3"_s,
		"jis-b4"_s,
		"jis-b5"_s,
		"jis-b6"_s,
		"jis-b7"_s,
		"jis-b8"_s,
		"jis-b9"_s,
		"jis-b10"_s,
		"iso-c0"_s,
		"iso-c1"_s,
		"iso-c2"_s,
		"iso-c3"_s,
		"iso-c4"_s,
		"iso-c5"_s,
		"iso-c6"_s,
		"na-letter"_s,
		"na-legal"_s,
		"executive"_s,
		"ledger"_s,
		"tabloid"_s,
		"invoice"_s,
		"folio"_s,
		"quarto"_s,
		"japanese-postcard"_s,
		"oufuko-postcard"_s,
		"a"_s,
		"b"_s,
		"c"_s,
		"d"_s,
		"e"_s,
		"iso-designated-long"_s,
		"italian-envelope"_s,
		"monarch-envelope"_s,
		"personal-envelope"_s,
		"na-number-9-envelope"_s,
		"na-number-10-envelope"_s,
		"na-number-11-envelope"_s,
		"na-number-12-envelope"_s,
		"na-number-14-envelope"_s,
		"na-6x9-envelope"_s,
		"na-7x9-envelope"_s,
		"na-9x11-envelope"_s,
		"na-9x12-envelope"_s,
		"na-10x13-envelope"_s,
		"na-10x14-envelope"_s,
		"na-10x15-envelope"_s,
		"na-5x7"_s,
		"na-8x10"_s
	}));
	$assignStatic(MediaSizeName::myEnumValueTable, $new($MediaSizeNameArray, {
		MediaSizeName::ISO_A0,
		MediaSizeName::ISO_A1,
		MediaSizeName::ISO_A2,
		MediaSizeName::ISO_A3,
		MediaSizeName::ISO_A4,
		MediaSizeName::ISO_A5,
		MediaSizeName::ISO_A6,
		MediaSizeName::ISO_A7,
		MediaSizeName::ISO_A8,
		MediaSizeName::ISO_A9,
		MediaSizeName::ISO_A10,
		MediaSizeName::ISO_B0,
		MediaSizeName::ISO_B1,
		MediaSizeName::ISO_B2,
		MediaSizeName::ISO_B3,
		MediaSizeName::ISO_B4,
		MediaSizeName::ISO_B5,
		MediaSizeName::ISO_B6,
		MediaSizeName::ISO_B7,
		MediaSizeName::ISO_B8,
		MediaSizeName::ISO_B9,
		MediaSizeName::ISO_B10,
		MediaSizeName::JIS_B0,
		MediaSizeName::JIS_B1,
		MediaSizeName::JIS_B2,
		MediaSizeName::JIS_B3,
		MediaSizeName::JIS_B4,
		MediaSizeName::JIS_B5,
		MediaSizeName::JIS_B6,
		MediaSizeName::JIS_B7,
		MediaSizeName::JIS_B8,
		MediaSizeName::JIS_B9,
		MediaSizeName::JIS_B10,
		MediaSizeName::ISO_C0,
		MediaSizeName::ISO_C1,
		MediaSizeName::ISO_C2,
		MediaSizeName::ISO_C3,
		MediaSizeName::ISO_C4,
		MediaSizeName::ISO_C5,
		MediaSizeName::ISO_C6,
		MediaSizeName::NA_LETTER,
		MediaSizeName::NA_LEGAL,
		MediaSizeName::EXECUTIVE,
		MediaSizeName::LEDGER,
		MediaSizeName::TABLOID,
		MediaSizeName::INVOICE,
		MediaSizeName::FOLIO,
		MediaSizeName::QUARTO,
		MediaSizeName::JAPANESE_POSTCARD,
		MediaSizeName::JAPANESE_DOUBLE_POSTCARD,
		MediaSizeName::A,
		MediaSizeName::B,
		MediaSizeName::C,
		MediaSizeName::D,
		MediaSizeName::E,
		MediaSizeName::ISO_DESIGNATED_LONG,
		MediaSizeName::ITALY_ENVELOPE,
		MediaSizeName::MONARCH_ENVELOPE,
		MediaSizeName::PERSONAL_ENVELOPE,
		MediaSizeName::NA_NUMBER_9_ENVELOPE,
		MediaSizeName::NA_NUMBER_10_ENVELOPE,
		MediaSizeName::NA_NUMBER_11_ENVELOPE,
		MediaSizeName::NA_NUMBER_12_ENVELOPE,
		MediaSizeName::NA_NUMBER_14_ENVELOPE,
		MediaSizeName::NA_6X9_ENVELOPE,
		MediaSizeName::NA_7X9_ENVELOPE,
		MediaSizeName::NA_9X11_ENVELOPE,
		MediaSizeName::NA_9X12_ENVELOPE,
		MediaSizeName::NA_10X13_ENVELOPE,
		MediaSizeName::NA_10X14_ENVELOPE,
		MediaSizeName::NA_10X15_ENVELOPE,
		MediaSizeName::NA_5X7,
		MediaSizeName::NA_8X10
	}));
}

MediaSizeName::MediaSizeName() {
}

$Class* MediaSizeName::load$($String* name, bool initialize) {
	$loadClass(MediaSizeName, name, initialize, &_MediaSizeName_ClassInfo_, clinit$MediaSizeName, allocate$MediaSizeName);
	return class$;
}

$Class* MediaSizeName::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax