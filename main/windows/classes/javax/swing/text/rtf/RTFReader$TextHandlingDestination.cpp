#include <javax/swing/text/rtf/RTFReader$TextHandlingDestination.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/rtf/RTFReader$AttributeTrackingDestination.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;
using $RTFReader$AttributeTrackingDestination = ::javax::swing::text::rtf::RTFReader$AttributeTrackingDestination;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFReader$TextHandlingDestination_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/rtf/RTFReader;", nullptr, $FINAL | $SYNTHETIC, $field(RTFReader$TextHandlingDestination, this$0)},
	{"inParagraph", "Z", nullptr, 0, $field(RTFReader$TextHandlingDestination, inParagraph)},
	{}
};

$MethodInfo _RTFReader$TextHandlingDestination_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/rtf/RTFReader;)V", nullptr, $PUBLIC, $method(static_cast<void(RTFReader$TextHandlingDestination::*)($RTFReader*)>(&RTFReader$TextHandlingDestination::init$))},
	{"beginParagraph", "()V", nullptr, $PROTECTED},
	{"close", "()V", nullptr, $PUBLIC},
	{"deliverText", "(Ljava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $ABSTRACT},
	{"endParagraph", "()V", nullptr, $PROTECTED},
	{"endSection", "()V", nullptr, $ABSTRACT},
	{"finishParagraph", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/AttributeSet;)V", nullptr, $ABSTRACT},
	{"handleKeyword", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"handleText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RTFReader$TextHandlingDestination_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFReader$TextHandlingDestination", "javax.swing.text.rtf.RTFReader", "TextHandlingDestination", $ABSTRACT},
	{"javax.swing.text.rtf.RTFReader$AttributeTrackingDestination", "javax.swing.text.rtf.RTFReader", "AttributeTrackingDestination", $ABSTRACT},
	{}
};

$ClassInfo _RTFReader$TextHandlingDestination_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.swing.text.rtf.RTFReader$TextHandlingDestination",
	"javax.swing.text.rtf.RTFReader$AttributeTrackingDestination",
	nullptr,
	_RTFReader$TextHandlingDestination_FieldInfo_,
	_RTFReader$TextHandlingDestination_MethodInfo_,
	nullptr,
	nullptr,
	_RTFReader$TextHandlingDestination_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFReader"
};

$Object* allocate$RTFReader$TextHandlingDestination($Class* clazz) {
	return $of($alloc(RTFReader$TextHandlingDestination));
}

void RTFReader$TextHandlingDestination::init$($RTFReader* this$0) {
	$set(this, this$0, this$0);
	$RTFReader$AttributeTrackingDestination::init$(this$0);
	this->inParagraph = false;
}

void RTFReader$TextHandlingDestination::handleText($String* text) {
	if (!this->inParagraph) {
		beginParagraph();
	}
	deliverText(text, $(currentTextAttributes()));
}

void RTFReader$TextHandlingDestination::close() {
	if (this->inParagraph) {
		endParagraph();
	}
	$RTFReader$AttributeTrackingDestination::close();
}

bool RTFReader$TextHandlingDestination::handleKeyword($String* keyword$renamed) {
	$var($String, keyword, keyword$renamed);
	bool var$0 = $nc(keyword)->equals("\r"_s);
	if (var$0 || $nc(keyword)->equals("\n"_s)) {
		$assign(keyword, "par"_s);
	}
	if ($nc(keyword)->equals("par"_s)) {
		endParagraph();
		return true;
	}
	if ($nc(keyword)->equals("sect"_s)) {
		endSection();
		return true;
	}
	return $RTFReader$AttributeTrackingDestination::handleKeyword(keyword);
}

void RTFReader$TextHandlingDestination::beginParagraph() {
	this->inParagraph = true;
}

void RTFReader$TextHandlingDestination::endParagraph() {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, pgfAttributes, currentParagraphAttributes());
	$var($AttributeSet, chrAttributes, currentTextAttributes());
	finishParagraph(pgfAttributes, chrAttributes);
	this->inParagraph = false;
}

RTFReader$TextHandlingDestination::RTFReader$TextHandlingDestination() {
}

$Class* RTFReader$TextHandlingDestination::load$($String* name, bool initialize) {
	$loadClass(RTFReader$TextHandlingDestination, name, initialize, &_RTFReader$TextHandlingDestination_ClassInfo_, allocate$RTFReader$TextHandlingDestination);
	return class$;
}

$Class* RTFReader$TextHandlingDestination::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax