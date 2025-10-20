#include <javax/swing/text/rtf/RTFReader$AttributeTrackingDestination.h>

#include <java/awt/Color.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Dictionary.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/TabStop.h>
#include <javax/swing/text/rtf/Constants.h>
#include <javax/swing/text/rtf/MockAttributeSet.h>
#include <javax/swing/text/rtf/RTFAttribute.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

#undef ALIGN_BAR
#undef ALIGN_LEFT
#undef DEFAULT_STYLE
#undef D_CHARACTER
#undef D_DOCUMENT
#undef D_META
#undef D_PARAGRAPH
#undef D_SECTION
#undef LEAD_NONE

using $ColorArray = $Array<::java::awt::Color>;
using $StyleArray = $Array<::javax::swing::text::Style>;
using $TabStopArray = $Array<::javax::swing::text::TabStop>;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Dictionary = ::java::util::Dictionary;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $TabStop = ::javax::swing::text::TabStop;
using $Constants = ::javax::swing::text::rtf::Constants;
using $MockAttributeSet = ::javax::swing::text::rtf::MockAttributeSet;
using $RTFAttribute = ::javax::swing::text::rtf::RTFAttribute;
using $RTFParser = ::javax::swing::text::rtf::RTFParser;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;
using $RTFReader$Destination = ::javax::swing::text::rtf::RTFReader$Destination;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFReader$AttributeTrackingDestination_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/rtf/RTFReader;", nullptr, $FINAL | $SYNTHETIC, $field(RTFReader$AttributeTrackingDestination, this$0)},
	{"characterAttributes", "Ljavax/swing/text/MutableAttributeSet;", nullptr, 0, $field(RTFReader$AttributeTrackingDestination, characterAttributes)},
	{"paragraphAttributes", "Ljavax/swing/text/MutableAttributeSet;", nullptr, 0, $field(RTFReader$AttributeTrackingDestination, paragraphAttributes)},
	{"sectionAttributes", "Ljavax/swing/text/MutableAttributeSet;", nullptr, 0, $field(RTFReader$AttributeTrackingDestination, sectionAttributes)},
	{}
};

$MethodInfo _RTFReader$AttributeTrackingDestination_MethodInfo_[] = {
	{"handleText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(Ljavax/swing/text/rtf/RTFReader;)V", nullptr, $PUBLIC, $method(static_cast<void(RTFReader$AttributeTrackingDestination::*)($RTFReader*)>(&RTFReader$AttributeTrackingDestination::init$))},
	{"begingroup", "()V", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC},
	{"currentParagraphAttributes", "()Ljavax/swing/text/MutableAttributeSet;", nullptr, 0},
	{"currentSectionAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"currentTextAttributes", "()Ljavax/swing/text/MutableAttributeSet;", nullptr, 0},
	{"endgroup", "(Ljava/util/Dictionary;)V", "(Ljava/util/Dictionary<Ljava/lang/Object;Ljava/lang/Object;>;)V", $PUBLIC},
	{"handleBinaryBlob", "([B)V", nullptr, $PUBLIC},
	{"handleKeyword", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"handleKeyword", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC},
	{"resetCharacterAttributes", "()V", nullptr, $PROTECTED},
	{"resetParagraphAttributes", "()V", nullptr, $PROTECTED},
	{"resetSectionAttributes", "()V", nullptr, $PROTECTED},
	{"rootCharacterAttributes", "()Ljavax/swing/text/MutableAttributeSet;", nullptr, $PROTECTED},
	{"rootParagraphAttributes", "()Ljavax/swing/text/MutableAttributeSet;", nullptr, $PROTECTED},
	{"rootSectionAttributes", "()Ljavax/swing/text/MutableAttributeSet;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _RTFReader$AttributeTrackingDestination_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFReader$AttributeTrackingDestination", "javax.swing.text.rtf.RTFReader", "AttributeTrackingDestination", $ABSTRACT},
	{"javax.swing.text.rtf.RTFReader$Destination", "javax.swing.text.rtf.RTFReader", "Destination", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RTFReader$AttributeTrackingDestination_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.swing.text.rtf.RTFReader$AttributeTrackingDestination",
	"java.lang.Object",
	"javax.swing.text.rtf.RTFReader$Destination",
	_RTFReader$AttributeTrackingDestination_FieldInfo_,
	_RTFReader$AttributeTrackingDestination_MethodInfo_,
	nullptr,
	nullptr,
	_RTFReader$AttributeTrackingDestination_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFReader"
};

$Object* allocate$RTFReader$AttributeTrackingDestination($Class* clazz) {
	return $of($alloc(RTFReader$AttributeTrackingDestination));
}

void RTFReader$AttributeTrackingDestination::init$($RTFReader* this$0) {
	$set(this, this$0, this$0);
	$set(this, characterAttributes, rootCharacterAttributes());
	$nc(this$0->parserState)->put("chr"_s, this->characterAttributes);
	$set(this, paragraphAttributes, rootParagraphAttributes());
	$nc(this$0->parserState)->put("pgf"_s, this->paragraphAttributes);
	$set(this, sectionAttributes, rootSectionAttributes());
	$nc(this$0->parserState)->put("sec"_s, this->sectionAttributes);
}

void RTFReader$AttributeTrackingDestination::handleBinaryBlob($bytes* data) {
	this->this$0->warning("Unexpected binary data in RTF file."_s);
}

void RTFReader$AttributeTrackingDestination::begingroup() {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, characterParent, currentTextAttributes());
	$var($AttributeSet, paragraphParent, currentParagraphAttributes());
	$var($AttributeSet, sectionParent, currentSectionAttributes());
	$set(this, characterAttributes, $new($SimpleAttributeSet));
	$nc(this->characterAttributes)->addAttributes(characterParent);
	$nc(this->this$0->parserState)->put("chr"_s, this->characterAttributes);
	$set(this, paragraphAttributes, $new($SimpleAttributeSet));
	$nc(this->paragraphAttributes)->addAttributes(paragraphParent);
	$nc(this->this$0->parserState)->put("pgf"_s, this->paragraphAttributes);
	$set(this, sectionAttributes, $new($SimpleAttributeSet));
	$nc(this->sectionAttributes)->addAttributes(sectionParent);
	$nc(this->this$0->parserState)->put("sec"_s, this->sectionAttributes);
}

void RTFReader$AttributeTrackingDestination::endgroup($Dictionary* oldState) {
	$set(this, characterAttributes, $cast($MutableAttributeSet, $nc(this->this$0->parserState)->get("chr"_s)));
	$set(this, paragraphAttributes, $cast($MutableAttributeSet, $nc(this->this$0->parserState)->get("pgf"_s)));
	$set(this, sectionAttributes, $cast($MutableAttributeSet, $nc(this->this$0->parserState)->get("sec"_s)));
}

void RTFReader$AttributeTrackingDestination::close() {
}

bool RTFReader$AttributeTrackingDestination::handleKeyword($String* keyword) {
	if ($nc(keyword)->equals("ulnone"_s)) {
		return handleKeyword("ul"_s, 0);
	}
	{
		$init($RTFReader);
		$var($RTFAttribute, attr, $cast($RTFAttribute, $nc($RTFReader::straightforwardAttributes)->get(keyword)));
		if (attr != nullptr) {
			bool ok = false;
			switch (attr->domain()) {
			case $RTFAttribute::D_CHARACTER:
				{
					ok = attr->set(this->characterAttributes);
					break;
				}
			case $RTFAttribute::D_PARAGRAPH:
				{
					ok = attr->set(this->paragraphAttributes);
					break;
				}
			case $RTFAttribute::D_SECTION:
				{
					ok = attr->set(this->sectionAttributes);
					break;
				}
			case $RTFAttribute::D_META:
				{
					$set($nc(this->this$0->mockery), backing, this->this$0->parserState);
					ok = attr->set(this->this$0->mockery);
					$set($nc(this->this$0->mockery), backing, nullptr);
					break;
				}
			case $RTFAttribute::D_DOCUMENT:
				{
					ok = attr->set(this->this$0->documentAttributes);
					break;
				}
			default:
				{
					ok = false;
					break;
				}
			}
			if (ok) {
				return true;
			}
		}
	}
	if ($nc(keyword)->equals("plain"_s)) {
		resetCharacterAttributes();
		return true;
	}
	if ($nc(keyword)->equals("pard"_s)) {
		resetParagraphAttributes();
		return true;
	}
	if ($nc(keyword)->equals("sectd"_s)) {
		resetSectionAttributes();
		return true;
	}
	return false;
}

bool RTFReader$AttributeTrackingDestination::handleKeyword($String* keyword$renamed, int32_t parameter) {
	$useLocalCurrentObjectStackCache();
	$var($String, keyword, keyword$renamed);
	bool booleanParameter = (parameter != 0);
	if ($nc(keyword)->equals("fc"_s)) {
		$assign(keyword, "cf"_s);
	}
	if ($nc(keyword)->equals("f"_s)) {
		$nc(this->this$0->parserState)->put(keyword, $($Integer::valueOf(parameter)));
		return true;
	}
	if ($nc(keyword)->equals("cf"_s)) {
		$nc(this->this$0->parserState)->put(keyword, $($Integer::valueOf(parameter)));
		return true;
	}
	if ($nc(keyword)->equals("cb"_s)) {
		$nc(this->this$0->parserState)->put(keyword, $($Integer::valueOf(parameter)));
		return true;
	}
	{
		$init($RTFReader);
		$var($RTFAttribute, attr, $cast($RTFAttribute, $nc($RTFReader::straightforwardAttributes)->get(keyword)));
		if (attr != nullptr) {
			bool ok = false;
			switch (attr->domain()) {
			case $RTFAttribute::D_CHARACTER:
				{
					ok = attr->set(this->characterAttributes, parameter);
					break;
				}
			case $RTFAttribute::D_PARAGRAPH:
				{
					ok = attr->set(this->paragraphAttributes, parameter);
					break;
				}
			case $RTFAttribute::D_SECTION:
				{
					ok = attr->set(this->sectionAttributes, parameter);
					break;
				}
			case $RTFAttribute::D_META:
				{
					$set($nc(this->this$0->mockery), backing, this->this$0->parserState);
					ok = attr->set(this->this$0->mockery, parameter);
					$set($nc(this->this$0->mockery), backing, nullptr);
					break;
				}
			case $RTFAttribute::D_DOCUMENT:
				{
					ok = attr->set(this->this$0->documentAttributes, parameter);
					break;
				}
			default:
				{
					ok = false;
					break;
				}
			}
			if (ok) {
				return true;
			}
		}
	}
	if ($nc(keyword)->equals("fs"_s)) {
		$StyleConstants::setFontSize(this->characterAttributes, (parameter / 2));
		return true;
	}
	if ($nc(keyword)->equals("sl"_s)) {
		if (parameter == 1000) {
			$init($StyleConstants);
			$nc(this->characterAttributes)->removeAttribute($StyleConstants::LineSpacing);
		} else {
			$StyleConstants::setLineSpacing(this->characterAttributes, parameter / 20.0f);
		}
		return true;
	}
	bool var$0 = $nc(keyword)->equals("tx"_s);
	if (var$0 || $nc(keyword)->equals("tb"_s)) {
		float tabPosition = parameter / 20.0f;
		int32_t tabAlignment = 0;
		int32_t tabLeader = 0;
		$var($Number, item, nullptr);
		tabAlignment = $TabStop::ALIGN_LEFT;
		$assign(item, ($cast($Number, $nc(this->this$0->parserState)->get("tab_alignment"_s))));
		if (item != nullptr) {
			tabAlignment = item->intValue();
		}
		tabLeader = $TabStop::LEAD_NONE;
		$assign(item, ($cast($Number, $nc(this->this$0->parserState)->get("tab_leader"_s))));
		if (item != nullptr) {
			tabLeader = item->intValue();
		}
		if (keyword->equals("tb"_s)) {
			tabAlignment = $TabStop::ALIGN_BAR;
		}
		$nc(this->this$0->parserState)->remove("tab_alignment"_s);
		$nc(this->this$0->parserState)->remove("tab_leader"_s);
		$var($TabStop, newStop, $new($TabStop, tabPosition, tabAlignment, tabLeader));
		$var($Dictionary, tabs, nullptr);
		$var($Integer, stopCount, nullptr);
		$var($Dictionary, tmp, $cast($Dictionary, $nc(this->this$0->parserState)->get("_tabs"_s)));
		$assign(tabs, tmp);
		if (tabs == nullptr) {
			$assign(tabs, $new($Hashtable));
			$nc(this->this$0->parserState)->put("_tabs"_s, tabs);
			$assign(stopCount, $Integer::valueOf(1));
		} else {
			$assign(stopCount, $cast($Integer, $nc(tabs)->get("stop count"_s)));
			$assign(stopCount, $Integer::valueOf(1 + $nc(stopCount)->intValue()));
		}
		$nc(tabs)->put(stopCount, newStop);
		tabs->put("stop count"_s, stopCount);
		$nc(this->this$0->parserState)->remove("_tabs_immutable"_s);
		return true;
	}
	if ($nc(keyword)->equals("s"_s) && this->this$0->paragraphStyles != nullptr) {
		$nc(this->this$0->parserState)->put("paragraphStyle"_s, $nc(this->this$0->paragraphStyles)->get(parameter));
		return true;
	}
	if ($nc(keyword)->equals("cs"_s) && this->this$0->characterStyles != nullptr) {
		$nc(this->this$0->parserState)->put("characterStyle"_s, $nc(this->this$0->characterStyles)->get(parameter));
		return true;
	}
	if ($nc(keyword)->equals("ds"_s) && this->this$0->sectionStyles != nullptr) {
		$nc(this->this$0->parserState)->put("sectionStyle"_s, $nc(this->this$0->sectionStyles)->get(parameter));
		return true;
	}
	return false;
}

$MutableAttributeSet* RTFReader$AttributeTrackingDestination::rootCharacterAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($MutableAttributeSet, set, $new($SimpleAttributeSet));
	$StyleConstants::setItalic(set, false);
	$StyleConstants::setBold(set, false);
	$StyleConstants::setUnderline(set, false);
	$StyleConstants::setForeground(set, $(this->this$0->defaultColor()));
	return set;
}

$MutableAttributeSet* RTFReader$AttributeTrackingDestination::rootParagraphAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($MutableAttributeSet, set, $new($SimpleAttributeSet));
	$StyleConstants::setLeftIndent(set, 0.0f);
	$StyleConstants::setRightIndent(set, 0.0f);
	$StyleConstants::setFirstLineIndent(set, 0.0f);
	$init($StyleContext);
	set->setResolveParent($($nc(this->this$0->target)->getStyle($StyleContext::DEFAULT_STYLE)));
	return set;
}

$MutableAttributeSet* RTFReader$AttributeTrackingDestination::rootSectionAttributes() {
	$var($MutableAttributeSet, set, $new($SimpleAttributeSet));
	return set;
}

$MutableAttributeSet* RTFReader$AttributeTrackingDestination::currentTextAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($MutableAttributeSet, attributes, $new($SimpleAttributeSet, this->characterAttributes));
	$var($Integer, fontnum, nullptr);
	$var($Integer, stateItem, nullptr);
	$assign(fontnum, $cast($Integer, $nc(this->this$0->parserState)->get("f"_s)));
	$var($String, fontFamily, nullptr);
	if (fontnum != nullptr) {
		$assign(fontFamily, $cast($String, $nc(this->this$0->fontTable)->get(fontnum)));
	} else {
		$assign(fontFamily, nullptr);
	}
	if (fontFamily != nullptr) {
		$StyleConstants::setFontFamily(attributes, fontFamily);
	} else {
		$init($StyleConstants);
		attributes->removeAttribute($StyleConstants::FontFamily);
	}
	if (this->this$0->colorTable != nullptr) {
		$assign(stateItem, $cast($Integer, $nc(this->this$0->parserState)->get("cf"_s)));
		if (stateItem != nullptr) {
			$var($Color, fg, $nc(this->this$0->colorTable)->get(stateItem->intValue()));
			$StyleConstants::setForeground(attributes, fg);
		} else {
			$init($StyleConstants);
			attributes->removeAttribute($StyleConstants::Foreground);
		}
	}
	if (this->this$0->colorTable != nullptr) {
		$assign(stateItem, $cast($Integer, $nc(this->this$0->parserState)->get("cb"_s)));
		if (stateItem != nullptr) {
			$var($Color, bg, $nc(this->this$0->colorTable)->get(stateItem->intValue()));
			$init($StyleConstants);
			attributes->addAttribute($StyleConstants::Background, bg);
		} else {
			$init($StyleConstants);
			attributes->removeAttribute($StyleConstants::Background);
		}
	}
	$var($Style, characterStyle, $cast($Style, $nc(this->this$0->parserState)->get("characterStyle"_s)));
	if (characterStyle != nullptr) {
		attributes->setResolveParent(characterStyle);
	}
	return attributes;
}

$MutableAttributeSet* RTFReader$AttributeTrackingDestination::currentParagraphAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($MutableAttributeSet, bld, $new($SimpleAttributeSet, this->paragraphAttributes));
	$var($Integer, stateItem, nullptr);
	$var($TabStopArray, tabs, nullptr);
	$assign(tabs, $cast($TabStopArray, $nc(this->this$0->parserState)->get("_tabs_immutable"_s)));
	if (tabs == nullptr) {
		$var($Dictionary, workingTabs, $cast($Dictionary, $nc(this->this$0->parserState)->get("_tabs"_s)));
		if (workingTabs != nullptr) {
			int32_t count = $nc(($cast($Integer, $(workingTabs->get("stop count"_s)))))->intValue();
			$assign(tabs, $new($TabStopArray, count));
			for (int32_t ix = 1; ix <= count; ++ix) {
				tabs->set(ix - 1, $cast($TabStop, $(workingTabs->get($($Integer::valueOf(ix))))));
			}
			$nc(this->this$0->parserState)->put("_tabs_immutable"_s, tabs);
		}
	}
	if (tabs != nullptr) {
		$init($Constants);
		bld->addAttribute($Constants::Tabs, tabs);
	}
	$var($Style, paragraphStyle, $cast($Style, $nc(this->this$0->parserState)->get("paragraphStyle"_s)));
	if (paragraphStyle != nullptr) {
		bld->setResolveParent(paragraphStyle);
	}
	return bld;
}

$AttributeSet* RTFReader$AttributeTrackingDestination::currentSectionAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($MutableAttributeSet, attributes, $new($SimpleAttributeSet, this->sectionAttributes));
	$var($Style, sectionStyle, $cast($Style, $nc(this->this$0->parserState)->get("sectionStyle"_s)));
	if (sectionStyle != nullptr) {
		attributes->setResolveParent(sectionStyle);
	}
	return attributes;
}

void RTFReader$AttributeTrackingDestination::resetCharacterAttributes() {
	$useLocalCurrentObjectStackCache();
	handleKeyword("f"_s, 0);
	handleKeyword("cf"_s, 0);
	handleKeyword("fs"_s, 24);
	$init($RTFReader);
	$var($Enumeration, attributes, $nc($RTFReader::straightforwardAttributes)->elements());
	while ($nc(attributes)->hasMoreElements()) {
		$var($RTFAttribute, attr, $cast($RTFAttribute, attributes->nextElement()));
		if ($nc(attr)->domain() == $RTFAttribute::D_CHARACTER) {
			attr->setDefault(this->characterAttributes);
		}
	}
	handleKeyword("sl"_s, 1000);
	$nc(this->this$0->parserState)->remove("characterStyle"_s);
}

void RTFReader$AttributeTrackingDestination::resetParagraphAttributes() {
	$useLocalCurrentObjectStackCache();
	$nc(this->this$0->parserState)->remove("_tabs"_s);
	$nc(this->this$0->parserState)->remove("_tabs_immutable"_s);
	$nc(this->this$0->parserState)->remove("paragraphStyle"_s);
	$StyleConstants::setAlignment(this->paragraphAttributes, $StyleConstants::ALIGN_LEFT);
	$init($RTFReader);
	$var($Enumeration, attributes, $nc($RTFReader::straightforwardAttributes)->elements());
	while ($nc(attributes)->hasMoreElements()) {
		$var($RTFAttribute, attr, $cast($RTFAttribute, attributes->nextElement()));
		if ($nc(attr)->domain() == $RTFAttribute::D_PARAGRAPH) {
			attr->setDefault(this->characterAttributes);
		}
	}
}

void RTFReader$AttributeTrackingDestination::resetSectionAttributes() {
	$useLocalCurrentObjectStackCache();
	$init($RTFReader);
	$var($Enumeration, attributes, $nc($RTFReader::straightforwardAttributes)->elements());
	while ($nc(attributes)->hasMoreElements()) {
		$var($RTFAttribute, attr, $cast($RTFAttribute, attributes->nextElement()));
		if ($nc(attr)->domain() == $RTFAttribute::D_SECTION) {
			attr->setDefault(this->characterAttributes);
		}
	}
	$nc(this->this$0->parserState)->remove("sectionStyle"_s);
}

RTFReader$AttributeTrackingDestination::RTFReader$AttributeTrackingDestination() {
}

$Class* RTFReader$AttributeTrackingDestination::load$($String* name, bool initialize) {
	$loadClass(RTFReader$AttributeTrackingDestination, name, initialize, &_RTFReader$AttributeTrackingDestination_ClassInfo_, allocate$RTFReader$AttributeTrackingDestination);
	return class$;
}

$Class* RTFReader$AttributeTrackingDestination::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax