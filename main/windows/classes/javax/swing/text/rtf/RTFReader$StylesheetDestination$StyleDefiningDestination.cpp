#include <javax/swing/text/rtf/RTFReader$StylesheetDestination$StyleDefiningDestination.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Dictionary.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/rtf/Constants.h>
#include <javax/swing/text/rtf/RTFReader$AttributeTrackingDestination.h>
#include <javax/swing/text/rtf/RTFReader$StylesheetDestination.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

#undef STYLENUMBER_NONE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Dictionary = ::java::util::Dictionary;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $Style = ::javax::swing::text::Style;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $Constants = ::javax::swing::text::rtf::Constants;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;
using $RTFReader$AttributeTrackingDestination = ::javax::swing::text::rtf::RTFReader$AttributeTrackingDestination;
using $RTFReader$StylesheetDestination = ::javax::swing::text::rtf::RTFReader$StylesheetDestination;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFReader$StylesheetDestination$StyleDefiningDestination_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/rtf/RTFReader$StylesheetDestination;", nullptr, $FINAL | $SYNTHETIC, $field(RTFReader$StylesheetDestination$StyleDefiningDestination, this$1)},
	{"STYLENUMBER_NONE", "I", nullptr, $STATIC | $FINAL, $constField(RTFReader$StylesheetDestination$StyleDefiningDestination, STYLENUMBER_NONE)},
	{"additive", "Z", nullptr, 0, $field(RTFReader$StylesheetDestination$StyleDefiningDestination, additive)},
	{"characterStyle", "Z", nullptr, 0, $field(RTFReader$StylesheetDestination$StyleDefiningDestination, characterStyle)},
	{"sectionStyle", "Z", nullptr, 0, $field(RTFReader$StylesheetDestination$StyleDefiningDestination, sectionStyle)},
	{"styleName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(RTFReader$StylesheetDestination$StyleDefiningDestination, styleName)},
	{"number", "I", nullptr, $PUBLIC, $field(RTFReader$StylesheetDestination$StyleDefiningDestination, number)},
	{"basedOn", "I", nullptr, 0, $field(RTFReader$StylesheetDestination$StyleDefiningDestination, basedOn)},
	{"nextStyle", "I", nullptr, 0, $field(RTFReader$StylesheetDestination$StyleDefiningDestination, nextStyle)},
	{"hidden", "Z", nullptr, 0, $field(RTFReader$StylesheetDestination$StyleDefiningDestination, hidden)},
	{"realizedStyle", "Ljavax/swing/text/Style;", nullptr, 0, $field(RTFReader$StylesheetDestination$StyleDefiningDestination, realizedStyle)},
	{}
};

$MethodInfo _RTFReader$StylesheetDestination$StyleDefiningDestination_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/rtf/RTFReader$StylesheetDestination;)V", nullptr, $PUBLIC, $method(static_cast<void(RTFReader$StylesheetDestination$StyleDefiningDestination::*)($RTFReader$StylesheetDestination*)>(&RTFReader$StylesheetDestination$StyleDefiningDestination::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"handleKeyword", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"handleKeyword", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC},
	{"handleText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"realize", "()Ljavax/swing/text/Style;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RTFReader$StylesheetDestination$StyleDefiningDestination_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFReader$StylesheetDestination", "javax.swing.text.rtf.RTFReader", "StylesheetDestination", 0},
	{"javax.swing.text.rtf.RTFReader$StylesheetDestination$StyleDefiningDestination", "javax.swing.text.rtf.RTFReader$StylesheetDestination", "StyleDefiningDestination", 0},
	{"javax.swing.text.rtf.RTFReader$AttributeTrackingDestination", "javax.swing.text.rtf.RTFReader", "AttributeTrackingDestination", $ABSTRACT},
	{}
};

$ClassInfo _RTFReader$StylesheetDestination$StyleDefiningDestination_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.rtf.RTFReader$StylesheetDestination$StyleDefiningDestination",
	"javax.swing.text.rtf.RTFReader$AttributeTrackingDestination",
	nullptr,
	_RTFReader$StylesheetDestination$StyleDefiningDestination_FieldInfo_,
	_RTFReader$StylesheetDestination$StyleDefiningDestination_MethodInfo_,
	nullptr,
	nullptr,
	_RTFReader$StylesheetDestination$StyleDefiningDestination_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFReader"
};

$Object* allocate$RTFReader$StylesheetDestination$StyleDefiningDestination($Class* clazz) {
	return $of($alloc(RTFReader$StylesheetDestination$StyleDefiningDestination));
}

void RTFReader$StylesheetDestination$StyleDefiningDestination::init$($RTFReader$StylesheetDestination* this$1) {
	$set(this, this$1, this$1);
	$RTFReader$AttributeTrackingDestination::init$(this$1->this$0);
	this->additive = false;
	this->characterStyle = false;
	this->sectionStyle = false;
	$set(this, styleName, nullptr);
	this->number = 0;
	this->basedOn = this->STYLENUMBER_NONE;
	this->nextStyle = this->STYLENUMBER_NONE;
	this->hidden = false;
}

void RTFReader$StylesheetDestination$StyleDefiningDestination::handleText($String* text) {
	if (this->styleName != nullptr) {
		$set(this, styleName, $str({this->styleName, text}));
	} else {
		$set(this, styleName, text);
	}
}

void RTFReader$StylesheetDestination$StyleDefiningDestination::close() {
	int32_t semicolon = (this->styleName == nullptr) ? 0 : $nc(this->styleName)->indexOf((int32_t)u';');
	if (semicolon > 0) {
		$set(this, styleName, $nc(this->styleName)->substring(0, semicolon));
	}
	$nc(this->this$1->definedStyles)->put($($Integer::valueOf(this->number)), this);
	$RTFReader$AttributeTrackingDestination::close();
}

bool RTFReader$StylesheetDestination$StyleDefiningDestination::handleKeyword($String* keyword) {
	if ($nc(keyword)->equals("additive"_s)) {
		this->additive = true;
		return true;
	}
	if ($nc(keyword)->equals("shidden"_s)) {
		this->hidden = true;
		return true;
	}
	return $RTFReader$AttributeTrackingDestination::handleKeyword(keyword);
}

bool RTFReader$StylesheetDestination$StyleDefiningDestination::handleKeyword($String* keyword, int32_t parameter) {
	if ($nc(keyword)->equals("s"_s)) {
		this->characterStyle = false;
		this->sectionStyle = false;
		this->number = parameter;
	} else if (keyword->equals("cs"_s)) {
		this->characterStyle = true;
		this->sectionStyle = false;
		this->number = parameter;
	} else if (keyword->equals("ds"_s)) {
		this->characterStyle = false;
		this->sectionStyle = true;
		this->number = parameter;
	} else if (keyword->equals("sbasedon"_s)) {
		this->basedOn = parameter;
	} else if (keyword->equals("snext"_s)) {
		this->nextStyle = parameter;
	} else {
		return $RTFReader$AttributeTrackingDestination::handleKeyword(keyword, parameter);
	}
	return true;
}

$Style* RTFReader$StylesheetDestination$StyleDefiningDestination::realize() {
	$var($Style, basis, nullptr);
	$var($Style, next, nullptr);
	if (this->realizedStyle != nullptr) {
		return this->realizedStyle;
	}
	if (this->basedOn != this->STYLENUMBER_NONE) {
		$var(RTFReader$StylesheetDestination$StyleDefiningDestination, styleDest, nullptr);
		$assign(styleDest, $cast(RTFReader$StylesheetDestination$StyleDefiningDestination, $nc(this->this$1->definedStyles)->get($($Integer::valueOf(this->basedOn)))));
		if (styleDest != nullptr && styleDest != this) {
			$assign(basis, styleDest->realize());
		}
	}
	$set(this, realizedStyle, $nc($nc(this->this$1->this$0)->target)->addStyle(this->styleName, basis));
	if (this->characterStyle) {
		$nc(this->realizedStyle)->addAttributes($(currentTextAttributes()));
		$init($Constants);
		$nc(this->realizedStyle)->addAttribute($Constants::StyleType, $Constants::STCharacter);
	} else if (this->sectionStyle) {
		$nc(this->realizedStyle)->addAttributes($(currentSectionAttributes()));
		$init($Constants);
		$nc(this->realizedStyle)->addAttribute($Constants::StyleType, $Constants::STSection);
	} else {
		$nc(this->realizedStyle)->addAttributes($(currentParagraphAttributes()));
		$init($Constants);
		$nc(this->realizedStyle)->addAttribute($Constants::StyleType, $Constants::STParagraph);
	}
	if (this->nextStyle != this->STYLENUMBER_NONE) {
		$var(RTFReader$StylesheetDestination$StyleDefiningDestination, styleDest, nullptr);
		$assign(styleDest, $cast(RTFReader$StylesheetDestination$StyleDefiningDestination, $nc(this->this$1->definedStyles)->get($($Integer::valueOf(this->nextStyle)))));
		if (styleDest != nullptr) {
			$assign(next, styleDest->realize());
		}
	}
	if (next != nullptr) {
		$init($Constants);
		$nc(this->realizedStyle)->addAttribute($Constants::StyleNext, next);
	}
	$init($Constants);
	$nc(this->realizedStyle)->addAttribute($Constants::StyleAdditive, $($Boolean::valueOf(this->additive)));
	$nc(this->realizedStyle)->addAttribute($Constants::StyleHidden, $($Boolean::valueOf(this->hidden)));
	return this->realizedStyle;
}

RTFReader$StylesheetDestination$StyleDefiningDestination::RTFReader$StylesheetDestination$StyleDefiningDestination() {
}

$Class* RTFReader$StylesheetDestination$StyleDefiningDestination::load$($String* name, bool initialize) {
	$loadClass(RTFReader$StylesheetDestination$StyleDefiningDestination, name, initialize, &_RTFReader$StylesheetDestination$StyleDefiningDestination_ClassInfo_, allocate$RTFReader$StylesheetDestination$StyleDefiningDestination);
	return class$;
}

$Class* RTFReader$StylesheetDestination$StyleDefiningDestination::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax