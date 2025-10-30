#include <javax/print/attribute/standard/MediaSize$NA.h>

#include <javax/print/attribute/Size2DSyntax.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <jcpp.h>

#undef INCH
#undef LEGAL
#undef LETTER
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

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _MediaSize$NA_FieldInfo_[] = {
	{"LETTER", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$NA, LETTER)},
	{"LEGAL", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$NA, LEGAL)},
	{"NA_5X7", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$NA, NA_5X7)},
	{"NA_8X10", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$NA, NA_8X10)},
	{"NA_NUMBER_9_ENVELOPE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$NA, NA_NUMBER_9_ENVELOPE)},
	{"NA_NUMBER_10_ENVELOPE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$NA, NA_NUMBER_10_ENVELOPE)},
	{"NA_NUMBER_11_ENVELOPE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$NA, NA_NUMBER_11_ENVELOPE)},
	{"NA_NUMBER_12_ENVELOPE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$NA, NA_NUMBER_12_ENVELOPE)},
	{"NA_NUMBER_14_ENVELOPE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$NA, NA_NUMBER_14_ENVELOPE)},
	{"NA_6X9_ENVELOPE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$NA, NA_6X9_ENVELOPE)},
	{"NA_7X9_ENVELOPE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$NA, NA_7X9_ENVELOPE)},
	{"NA_9x11_ENVELOPE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$NA, NA_9x11_ENVELOPE)},
	{"NA_9x12_ENVELOPE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$NA, NA_9x12_ENVELOPE)},
	{"NA_10x13_ENVELOPE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$NA, NA_10x13_ENVELOPE)},
	{"NA_10x14_ENVELOPE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$NA, NA_10x14_ENVELOPE)},
	{"NA_10X15_ENVELOPE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$NA, NA_10X15_ENVELOPE)},
	{}
};

$MethodInfo _MediaSize$NA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MediaSize$NA::*)()>(&MediaSize$NA::init$))},
	{}
};

$InnerClassInfo _MediaSize$NA_InnerClassesInfo_[] = {
	{"javax.print.attribute.standard.MediaSize$NA", "javax.print.attribute.standard.MediaSize", "NA", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _MediaSize$NA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.MediaSize$NA",
	"java.lang.Object",
	nullptr,
	_MediaSize$NA_FieldInfo_,
	_MediaSize$NA_MethodInfo_,
	nullptr,
	nullptr,
	_MediaSize$NA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.attribute.standard.MediaSize"
};

$Object* allocate$MediaSize$NA($Class* clazz) {
	return $of($alloc(MediaSize$NA));
}

$MediaSize* MediaSize$NA::LETTER = nullptr;
$MediaSize* MediaSize$NA::LEGAL = nullptr;
$MediaSize* MediaSize$NA::NA_5X7 = nullptr;
$MediaSize* MediaSize$NA::NA_8X10 = nullptr;
$MediaSize* MediaSize$NA::NA_NUMBER_9_ENVELOPE = nullptr;
$MediaSize* MediaSize$NA::NA_NUMBER_10_ENVELOPE = nullptr;
$MediaSize* MediaSize$NA::NA_NUMBER_11_ENVELOPE = nullptr;
$MediaSize* MediaSize$NA::NA_NUMBER_12_ENVELOPE = nullptr;
$MediaSize* MediaSize$NA::NA_NUMBER_14_ENVELOPE = nullptr;
$MediaSize* MediaSize$NA::NA_6X9_ENVELOPE = nullptr;
$MediaSize* MediaSize$NA::NA_7X9_ENVELOPE = nullptr;
$MediaSize* MediaSize$NA::NA_9x11_ENVELOPE = nullptr;
$MediaSize* MediaSize$NA::NA_9x12_ENVELOPE = nullptr;
$MediaSize* MediaSize$NA::NA_10x13_ENVELOPE = nullptr;
$MediaSize* MediaSize$NA::NA_10x14_ENVELOPE = nullptr;
$MediaSize* MediaSize$NA::NA_10X15_ENVELOPE = nullptr;

void MediaSize$NA::init$() {
}

void clinit$MediaSize$NA($Class* class$) {
	$init($MediaSizeName);
	$assignStatic(MediaSize$NA::LETTER, $new($MediaSize, 8.5f, 11.0f, $Size2DSyntax::INCH, $MediaSizeName::NA_LETTER));
	$assignStatic(MediaSize$NA::LEGAL, $new($MediaSize, 8.5f, 14.0f, $Size2DSyntax::INCH, $MediaSizeName::NA_LEGAL));
	$assignStatic(MediaSize$NA::NA_5X7, $new($MediaSize, 5, 7, $Size2DSyntax::INCH, $MediaSizeName::NA_5X7));
	$assignStatic(MediaSize$NA::NA_8X10, $new($MediaSize, 8, 10, $Size2DSyntax::INCH, $MediaSizeName::NA_8X10));
	$assignStatic(MediaSize$NA::NA_NUMBER_9_ENVELOPE, $new($MediaSize, 3.875f, 8.875f, $Size2DSyntax::INCH, $MediaSizeName::NA_NUMBER_9_ENVELOPE));
	$assignStatic(MediaSize$NA::NA_NUMBER_10_ENVELOPE, $new($MediaSize, 4.125f, 9.5f, $Size2DSyntax::INCH, $MediaSizeName::NA_NUMBER_10_ENVELOPE));
	$assignStatic(MediaSize$NA::NA_NUMBER_11_ENVELOPE, $new($MediaSize, 4.5f, 10.375f, $Size2DSyntax::INCH, $MediaSizeName::NA_NUMBER_11_ENVELOPE));
	$assignStatic(MediaSize$NA::NA_NUMBER_12_ENVELOPE, $new($MediaSize, 4.75f, 11.0f, $Size2DSyntax::INCH, $MediaSizeName::NA_NUMBER_12_ENVELOPE));
	$assignStatic(MediaSize$NA::NA_NUMBER_14_ENVELOPE, $new($MediaSize, 5.0f, 11.5f, $Size2DSyntax::INCH, $MediaSizeName::NA_NUMBER_14_ENVELOPE));
	$assignStatic(MediaSize$NA::NA_6X9_ENVELOPE, $new($MediaSize, 6.0f, 9.0f, $Size2DSyntax::INCH, $MediaSizeName::NA_6X9_ENVELOPE));
	$assignStatic(MediaSize$NA::NA_7X9_ENVELOPE, $new($MediaSize, 7.0f, 9.0f, $Size2DSyntax::INCH, $MediaSizeName::NA_7X9_ENVELOPE));
	$assignStatic(MediaSize$NA::NA_9x11_ENVELOPE, $new($MediaSize, 9.0f, 11.0f, $Size2DSyntax::INCH, $MediaSizeName::NA_9X11_ENVELOPE));
	$assignStatic(MediaSize$NA::NA_9x12_ENVELOPE, $new($MediaSize, 9.0f, 12.0f, $Size2DSyntax::INCH, $MediaSizeName::NA_9X12_ENVELOPE));
	$assignStatic(MediaSize$NA::NA_10x13_ENVELOPE, $new($MediaSize, 10.0f, 13.0f, $Size2DSyntax::INCH, $MediaSizeName::NA_10X13_ENVELOPE));
	$assignStatic(MediaSize$NA::NA_10x14_ENVELOPE, $new($MediaSize, 10.0f, 14.0f, $Size2DSyntax::INCH, $MediaSizeName::NA_10X14_ENVELOPE));
	$assignStatic(MediaSize$NA::NA_10X15_ENVELOPE, $new($MediaSize, 10.0f, 15.0f, $Size2DSyntax::INCH, $MediaSizeName::NA_10X15_ENVELOPE));
}

MediaSize$NA::MediaSize$NA() {
}

$Class* MediaSize$NA::load$($String* name, bool initialize) {
	$loadClass(MediaSize$NA, name, initialize, &_MediaSize$NA_ClassInfo_, clinit$MediaSize$NA, allocate$MediaSize$NA);
	return class$;
}

$Class* MediaSize$NA::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax