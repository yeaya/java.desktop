#include <javax/print/attribute/standard/MediaSize$Other.h>

#include <javax/print/attribute/Size2DSyntax.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <jcpp.h>

#undef EXECUTIVE
#undef FOLIO
#undef INCH
#undef INVOICE
#undef ITALY_ENVELOPE
#undef JAPANESE_DOUBLE_POSTCARD
#undef JAPANESE_POSTCARD
#undef LEDGER
#undef MM
#undef MONARCH_ENVELOPE
#undef PERSONAL_ENVELOPE
#undef QUARTO
#undef TABLOID

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

$FieldInfo _MediaSize$Other_FieldInfo_[] = {
	{"EXECUTIVE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$Other, EXECUTIVE)},
	{"LEDGER", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$Other, LEDGER)},
	{"TABLOID", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$Other, TABLOID)},
	{"INVOICE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$Other, INVOICE)},
	{"FOLIO", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$Other, FOLIO)},
	{"QUARTO", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$Other, QUARTO)},
	{"ITALY_ENVELOPE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$Other, ITALY_ENVELOPE)},
	{"MONARCH_ENVELOPE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$Other, MONARCH_ENVELOPE)},
	{"PERSONAL_ENVELOPE", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$Other, PERSONAL_ENVELOPE)},
	{"JAPANESE_POSTCARD", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$Other, JAPANESE_POSTCARD)},
	{"JAPANESE_DOUBLE_POSTCARD", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$Other, JAPANESE_DOUBLE_POSTCARD)},
	{}
};

$MethodInfo _MediaSize$Other_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MediaSize$Other::*)()>(&MediaSize$Other::init$))},
	{}
};

$InnerClassInfo _MediaSize$Other_InnerClassesInfo_[] = {
	{"javax.print.attribute.standard.MediaSize$Other", "javax.print.attribute.standard.MediaSize", "Other", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _MediaSize$Other_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.MediaSize$Other",
	"java.lang.Object",
	nullptr,
	_MediaSize$Other_FieldInfo_,
	_MediaSize$Other_MethodInfo_,
	nullptr,
	nullptr,
	_MediaSize$Other_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.attribute.standard.MediaSize"
};

$Object* allocate$MediaSize$Other($Class* clazz) {
	return $of($alloc(MediaSize$Other));
}

$MediaSize* MediaSize$Other::EXECUTIVE = nullptr;
$MediaSize* MediaSize$Other::LEDGER = nullptr;
$MediaSize* MediaSize$Other::TABLOID = nullptr;
$MediaSize* MediaSize$Other::INVOICE = nullptr;
$MediaSize* MediaSize$Other::FOLIO = nullptr;
$MediaSize* MediaSize$Other::QUARTO = nullptr;
$MediaSize* MediaSize$Other::ITALY_ENVELOPE = nullptr;
$MediaSize* MediaSize$Other::MONARCH_ENVELOPE = nullptr;
$MediaSize* MediaSize$Other::PERSONAL_ENVELOPE = nullptr;
$MediaSize* MediaSize$Other::JAPANESE_POSTCARD = nullptr;
$MediaSize* MediaSize$Other::JAPANESE_DOUBLE_POSTCARD = nullptr;

void MediaSize$Other::init$() {
}

void clinit$MediaSize$Other($Class* class$) {
	$init($MediaSizeName);
	$assignStatic(MediaSize$Other::EXECUTIVE, $new($MediaSize, 7.25f, 10.5f, $Size2DSyntax::INCH, $MediaSizeName::EXECUTIVE));
	$assignStatic(MediaSize$Other::LEDGER, $new($MediaSize, 11.0f, 17.0f, $Size2DSyntax::INCH, $MediaSizeName::LEDGER));
	$assignStatic(MediaSize$Other::TABLOID, $new($MediaSize, 11.0f, 17.0f, $Size2DSyntax::INCH, $MediaSizeName::TABLOID));
	$assignStatic(MediaSize$Other::INVOICE, $new($MediaSize, 5.5f, 8.5f, $Size2DSyntax::INCH, $MediaSizeName::INVOICE));
	$assignStatic(MediaSize$Other::FOLIO, $new($MediaSize, 8.5f, 13.0f, $Size2DSyntax::INCH, $MediaSizeName::FOLIO));
	$assignStatic(MediaSize$Other::QUARTO, $new($MediaSize, 8.5f, 10.83f, $Size2DSyntax::INCH, $MediaSizeName::QUARTO));
	$assignStatic(MediaSize$Other::ITALY_ENVELOPE, $new($MediaSize, 110, 230, $Size2DSyntax::MM, $MediaSizeName::ITALY_ENVELOPE));
	$assignStatic(MediaSize$Other::MONARCH_ENVELOPE, $new($MediaSize, 3.87f, 7.5f, $Size2DSyntax::INCH, $MediaSizeName::MONARCH_ENVELOPE));
	$assignStatic(MediaSize$Other::PERSONAL_ENVELOPE, $new($MediaSize, 3.625f, 6.5f, $Size2DSyntax::INCH, $MediaSizeName::PERSONAL_ENVELOPE));
	$assignStatic(MediaSize$Other::JAPANESE_POSTCARD, $new($MediaSize, 100, 148, $Size2DSyntax::MM, $MediaSizeName::JAPANESE_POSTCARD));
	$assignStatic(MediaSize$Other::JAPANESE_DOUBLE_POSTCARD, $new($MediaSize, 148, 200, $Size2DSyntax::MM, $MediaSizeName::JAPANESE_DOUBLE_POSTCARD));
}

MediaSize$Other::MediaSize$Other() {
}

$Class* MediaSize$Other::load$($String* name, bool initialize) {
	$loadClass(MediaSize$Other, name, initialize, &_MediaSize$Other_ClassInfo_, clinit$MediaSize$Other, allocate$MediaSize$Other);
	return class$;
}

$Class* MediaSize$Other::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax