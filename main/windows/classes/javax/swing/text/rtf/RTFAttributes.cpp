#include <javax/swing/text/rtf/RTFAttributes.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Dictionary.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/TabStop.h>
#include <javax/swing/text/rtf/Constants.h>
#include <javax/swing/text/rtf/RTFAttribute.h>
#include <javax/swing/text/rtf/RTFAttributes$AssertiveAttribute.h>
#include <javax/swing/text/rtf/RTFAttributes$BooleanAttribute.h>
#include <javax/swing/text/rtf/RTFAttributes$NumericAttribute.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

#undef ALIGN_CENTER
#undef ALIGN_DECIMAL
#undef ALIGN_JUSTIFIED
#undef ALIGN_LEFT
#undef ALIGN_RIGHT
#undef CHR
#undef DOC
#undef D_CHARACTER
#undef D_DOCUMENT
#undef D_META
#undef D_PARAGRAPH
#undef D_SECTION
#undef LEAD_DOTS
#undef LEAD_EQUALS
#undef LEAD_HYPHENS
#undef LEAD_THICKLINE
#undef LEAD_UNDERLINE
#undef PGF
#undef PST
#undef SEC

using $RTFAttributeArray = $Array<::javax::swing::text::rtf::RTFAttribute>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Dictionary = ::java::util::Dictionary;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $TabStop = ::javax::swing::text::TabStop;
using $Constants = ::javax::swing::text::rtf::Constants;
using $RTFAttribute = ::javax::swing::text::rtf::RTFAttribute;
using $RTFAttributes$AssertiveAttribute = ::javax::swing::text::rtf::RTFAttributes$AssertiveAttribute;
using $RTFAttributes$BooleanAttribute = ::javax::swing::text::rtf::RTFAttributes$BooleanAttribute;
using $RTFAttributes$NumericAttribute = ::javax::swing::text::rtf::RTFAttributes$NumericAttribute;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFAttributes_FieldInfo_[] = {
	{"attributes", "[Ljavax/swing/text/rtf/RTFAttribute;", nullptr, $STATIC, $staticField(RTFAttributes, attributes)},
	{}
};

$MethodInfo _RTFAttributes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RTFAttributes::*)()>(&RTFAttributes::init$))},
	{"attributesByKeyword", "()Ljava/util/Dictionary;", "()Ljava/util/Dictionary<Ljava/lang/String;Ljavax/swing/text/rtf/RTFAttribute;>;", $STATIC, $method(static_cast<$Dictionary*(*)()>(&RTFAttributes::attributesByKeyword))},
	{}
};

$InnerClassInfo _RTFAttributes_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFAttributes$NumericAttribute", "javax.swing.text.rtf.RTFAttributes", "NumericAttribute", $STATIC},
	{"javax.swing.text.rtf.RTFAttributes$AssertiveAttribute", "javax.swing.text.rtf.RTFAttributes", "AssertiveAttribute", $STATIC},
	{"javax.swing.text.rtf.RTFAttributes$BooleanAttribute", "javax.swing.text.rtf.RTFAttributes", "BooleanAttribute", $STATIC},
	{"javax.swing.text.rtf.RTFAttributes$GenericAttribute", "javax.swing.text.rtf.RTFAttributes", "GenericAttribute", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RTFAttributes_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.rtf.RTFAttributes",
	"java.lang.Object",
	nullptr,
	_RTFAttributes_FieldInfo_,
	_RTFAttributes_MethodInfo_,
	nullptr,
	nullptr,
	_RTFAttributes_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFAttributes$NumericAttribute,javax.swing.text.rtf.RTFAttributes$AssertiveAttribute,javax.swing.text.rtf.RTFAttributes$BooleanAttribute,javax.swing.text.rtf.RTFAttributes$GenericAttribute"
};

$Object* allocate$RTFAttributes($Class* clazz) {
	return $of($alloc(RTFAttributes));
}

$RTFAttributeArray* RTFAttributes::attributes = nullptr;

void RTFAttributes::init$() {
}

$Dictionary* RTFAttributes::attributesByKeyword() {
	$init(RTFAttributes);
	$var($Dictionary, d, $new($Hashtable, $nc(RTFAttributes::attributes)->length));
	{
		$var($RTFAttributeArray, arr$, RTFAttributes::attributes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($RTFAttribute, attribute, arr$->get(i$));
			{
				d->put($($nc(attribute)->rtfName()), attribute);
			}
		}
	}
	return d;
}

void clinit$RTFAttributes($Class* class$) {
	{
		$var($Vector, a, $new($Vector));
		int32_t CHR = $RTFAttribute::D_CHARACTER;
		int32_t PGF = $RTFAttribute::D_PARAGRAPH;
		int32_t SEC = $RTFAttribute::D_SECTION;
		int32_t DOC = $RTFAttribute::D_DOCUMENT;
		int32_t PST = $RTFAttribute::D_META;
		$var($Boolean, True, $Boolean::valueOf(true));
		$var($Boolean, False, $Boolean::valueOf(false));
		$init($StyleConstants);
		a->addElement($$new($RTFAttributes$BooleanAttribute, CHR, $StyleConstants::Italic, "i"_s));
		a->addElement($$new($RTFAttributes$BooleanAttribute, CHR, $StyleConstants::Bold, "b"_s));
		a->addElement($$new($RTFAttributes$BooleanAttribute, CHR, $StyleConstants::Underline, "ul"_s));
		a->addElement($($RTFAttributes$NumericAttribute::NewTwips(PGF, $StyleConstants::LeftIndent, "li"_s, 0.0f, 0)));
		a->addElement($($RTFAttributes$NumericAttribute::NewTwips(PGF, $StyleConstants::RightIndent, "ri"_s, 0.0f, 0)));
		a->addElement($($RTFAttributes$NumericAttribute::NewTwips(PGF, $StyleConstants::FirstLineIndent, "fi"_s, 0.0f, 0)));
		a->addElement($$new($RTFAttributes$AssertiveAttribute, PGF, $StyleConstants::Alignment, "ql"_s, $StyleConstants::ALIGN_LEFT));
		a->addElement($$new($RTFAttributes$AssertiveAttribute, PGF, $StyleConstants::Alignment, "qr"_s, $StyleConstants::ALIGN_RIGHT));
		a->addElement($$new($RTFAttributes$AssertiveAttribute, PGF, $StyleConstants::Alignment, "qc"_s, $StyleConstants::ALIGN_CENTER));
		a->addElement($$new($RTFAttributes$AssertiveAttribute, PGF, $StyleConstants::Alignment, "qj"_s, $StyleConstants::ALIGN_JUSTIFIED));
		a->addElement($($RTFAttributes$NumericAttribute::NewTwips(PGF, $StyleConstants::SpaceAbove, "sa"_s, 0)));
		a->addElement($($RTFAttributes$NumericAttribute::NewTwips(PGF, $StyleConstants::SpaceBelow, "sb"_s, 0)));
		$init($RTFReader);
		a->addElement($$new($RTFAttributes$AssertiveAttribute, PST, $of($RTFReader::TabAlignmentKey), "tqr"_s, $TabStop::ALIGN_RIGHT));
		a->addElement($$new($RTFAttributes$AssertiveAttribute, PST, $of($RTFReader::TabAlignmentKey), "tqc"_s, $TabStop::ALIGN_CENTER));
		a->addElement($$new($RTFAttributes$AssertiveAttribute, PST, $of($RTFReader::TabAlignmentKey), "tqdec"_s, $TabStop::ALIGN_DECIMAL));
		a->addElement($$new($RTFAttributes$AssertiveAttribute, PST, $of($RTFReader::TabLeaderKey), "tldot"_s, $TabStop::LEAD_DOTS));
		a->addElement($$new($RTFAttributes$AssertiveAttribute, PST, $of($RTFReader::TabLeaderKey), "tlhyph"_s, $TabStop::LEAD_HYPHENS));
		a->addElement($$new($RTFAttributes$AssertiveAttribute, PST, $of($RTFReader::TabLeaderKey), "tlul"_s, $TabStop::LEAD_UNDERLINE));
		a->addElement($$new($RTFAttributes$AssertiveAttribute, PST, $of($RTFReader::TabLeaderKey), "tlth"_s, $TabStop::LEAD_THICKLINE));
		a->addElement($$new($RTFAttributes$AssertiveAttribute, PST, $of($RTFReader::TabLeaderKey), "tleq"_s, $TabStop::LEAD_EQUALS));
		$init($Constants);
		a->addElement($$new($RTFAttributes$BooleanAttribute, CHR, $Constants::Caps, "caps"_s));
		a->addElement($$new($RTFAttributes$BooleanAttribute, CHR, $Constants::Outline, "outl"_s));
		a->addElement($$new($RTFAttributes$BooleanAttribute, CHR, $Constants::SmallCaps, "scaps"_s));
		a->addElement($$new($RTFAttributes$BooleanAttribute, CHR, $Constants::Shadow, "shad"_s));
		a->addElement($$new($RTFAttributes$BooleanAttribute, CHR, $Constants::Hidden, "v"_s));
		a->addElement($$new($RTFAttributes$BooleanAttribute, CHR, $Constants::Strikethrough, "strike"_s));
		a->addElement($$new($RTFAttributes$BooleanAttribute, CHR, $Constants::Deleted, "deleted"_s));
		a->addElement($$new($RTFAttributes$AssertiveAttribute, DOC, $of("saveformat"_s), "defformat"_s, $of("RTF"_s)));
		a->addElement($$new($RTFAttributes$AssertiveAttribute, DOC, "landscape"_s, "landscape"_s));
		a->addElement($($RTFAttributes$NumericAttribute::NewTwips(DOC, $Constants::PaperWidth, "paperw"_s, 12240)));
		a->addElement($($RTFAttributes$NumericAttribute::NewTwips(DOC, $Constants::PaperHeight, "paperh"_s, 15840)));
		a->addElement($($RTFAttributes$NumericAttribute::NewTwips(DOC, $Constants::MarginLeft, "margl"_s, 1800)));
		a->addElement($($RTFAttributes$NumericAttribute::NewTwips(DOC, $Constants::MarginRight, "margr"_s, 1800)));
		a->addElement($($RTFAttributes$NumericAttribute::NewTwips(DOC, $Constants::MarginTop, "margt"_s, 1440)));
		a->addElement($($RTFAttributes$NumericAttribute::NewTwips(DOC, $Constants::MarginBottom, "margb"_s, 1440)));
		a->addElement($($RTFAttributes$NumericAttribute::NewTwips(DOC, $Constants::GutterWidth, "gutter"_s, 0)));
		a->addElement($$new($RTFAttributes$AssertiveAttribute, PGF, $of($Constants::WidowControl), "nowidctlpar"_s, $of(False)));
		a->addElement($$new($RTFAttributes$AssertiveAttribute, PGF, $of($Constants::WidowControl), "widctlpar"_s, $of(True)));
		a->addElement($$new($RTFAttributes$AssertiveAttribute, DOC, $of($Constants::WidowControl), "widowctrl"_s, $of(True)));
		$var($RTFAttributeArray, attrs, $new($RTFAttributeArray, a->size()));
		a->copyInto(attrs);
		$assignStatic(RTFAttributes::attributes, attrs);
	}
}

RTFAttributes::RTFAttributes() {
}

$Class* RTFAttributes::load$($String* name, bool initialize) {
	$loadClass(RTFAttributes, name, initialize, &_RTFAttributes_ClassInfo_, clinit$RTFAttributes, allocate$RTFAttributes);
	return class$;
}

$Class* RTFAttributes::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax