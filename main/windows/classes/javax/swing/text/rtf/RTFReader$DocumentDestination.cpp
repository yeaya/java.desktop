#include <javax/swing/text/rtf/RTFReader$DocumentDestination.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/rtf/RTFReader$AttributeTrackingDestination.h>
#include <javax/swing/text/rtf/RTFReader$TextHandlingDestination.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;
using $RTFReader$AttributeTrackingDestination = ::javax::swing::text::rtf::RTFReader$AttributeTrackingDestination;
using $RTFReader$TextHandlingDestination = ::javax::swing::text::rtf::RTFReader$TextHandlingDestination;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFReader$DocumentDestination_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/rtf/RTFReader;", nullptr, $FINAL | $SYNTHETIC, $field(RTFReader$DocumentDestination, this$0)},
	{}
};

$MethodInfo _RTFReader$DocumentDestination_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/rtf/RTFReader;)V", nullptr, 0, $method(static_cast<void(RTFReader$DocumentDestination::*)($RTFReader*)>(&RTFReader$DocumentDestination::init$))},
	{"deliverText", "(Ljava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"endSection", "()V", nullptr, $PUBLIC},
	{"finishParagraph", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RTFReader$DocumentDestination_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFReader$DocumentDestination", "javax.swing.text.rtf.RTFReader", "DocumentDestination", 0},
	{"javax.swing.text.rtf.RTFReader$TextHandlingDestination", "javax.swing.text.rtf.RTFReader", "TextHandlingDestination", $ABSTRACT},
	{}
};

$ClassInfo _RTFReader$DocumentDestination_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.rtf.RTFReader$DocumentDestination",
	"javax.swing.text.rtf.RTFReader$TextHandlingDestination",
	nullptr,
	_RTFReader$DocumentDestination_FieldInfo_,
	_RTFReader$DocumentDestination_MethodInfo_,
	nullptr,
	nullptr,
	_RTFReader$DocumentDestination_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFReader"
};

$Object* allocate$RTFReader$DocumentDestination($Class* clazz) {
	return $of($alloc(RTFReader$DocumentDestination));
}

void RTFReader$DocumentDestination::init$($RTFReader* this$0) {
	$set(this, this$0, this$0);
	$RTFReader$TextHandlingDestination::init$(this$0);
}

void RTFReader$DocumentDestination::deliverText($String* text, $AttributeSet* characterAttributes) {
	try {
		int32_t var$0 = $nc(this->this$0->target)->getLength();
		$var($String, var$1, text);
		$nc(this->this$0->target)->insertString(var$0, var$1, $(currentTextAttributes()));
	} catch ($BadLocationException&) {
		$var($BadLocationException, ble, $catch());
		$throwNew($InternalError, $(ble->getMessage()), ble);
	}
}

void RTFReader$DocumentDestination::finishParagraph($AttributeSet* pgfAttributes, $AttributeSet* chrAttributes) {
	int32_t pgfEndPosition = $nc(this->this$0->target)->getLength();
	try {
		$nc(this->this$0->target)->insertString(pgfEndPosition, "\n"_s, chrAttributes);
		$nc(this->this$0->target)->setParagraphAttributes(pgfEndPosition, 1, pgfAttributes, true);
	} catch ($BadLocationException&) {
		$var($BadLocationException, ble, $catch());
		$throwNew($InternalError, $(ble->getMessage()), ble);
	}
}

void RTFReader$DocumentDestination::endSection() {
}

RTFReader$DocumentDestination::RTFReader$DocumentDestination() {
}

$Class* RTFReader$DocumentDestination::load$($String* name, bool initialize) {
	$loadClass(RTFReader$DocumentDestination, name, initialize, &_RTFReader$DocumentDestination_ClassInfo_, allocate$RTFReader$DocumentDestination);
	return class$;
}

$Class* RTFReader$DocumentDestination::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax