#include <javax/swing/text/html/HTMLDocument$FixedLengthDocument.h>

#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/PlainDocument.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $PlainDocument = ::javax::swing::text::PlainDocument;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$FixedLengthDocument_FieldInfo_[] = {
	{"maxLength", "I", nullptr, $PRIVATE, $field(HTMLDocument$FixedLengthDocument, maxLength)},
	{}
};

$MethodInfo _HTMLDocument$FixedLengthDocument_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument$FixedLengthDocument::*)(int32_t)>(&HTMLDocument$FixedLengthDocument::init$))},
	{"insertString", "(ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{}
};

$InnerClassInfo _HTMLDocument$FixedLengthDocument_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$FixedLengthDocument", "javax.swing.text.html.HTMLDocument", "FixedLengthDocument", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _HTMLDocument$FixedLengthDocument_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$FixedLengthDocument",
	"javax.swing.text.PlainDocument",
	nullptr,
	_HTMLDocument$FixedLengthDocument_FieldInfo_,
	_HTMLDocument$FixedLengthDocument_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$FixedLengthDocument_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$FixedLengthDocument($Class* clazz) {
	return $of($alloc(HTMLDocument$FixedLengthDocument));
}

void HTMLDocument$FixedLengthDocument::init$(int32_t maxLength) {
	$PlainDocument::init$();
	this->maxLength = maxLength;
}

void HTMLDocument$FixedLengthDocument::insertString(int32_t offset, $String* str, $AttributeSet* a) {
	bool var$0 = str != nullptr;
	if (var$0) {
		int32_t var$1 = str->length();
		var$0 = var$1 + getLength() <= this->maxLength;
	}
	if (var$0) {
		$PlainDocument::insertString(offset, str, a);
	}
}

HTMLDocument$FixedLengthDocument::HTMLDocument$FixedLengthDocument() {
}

$Class* HTMLDocument$FixedLengthDocument::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$FixedLengthDocument, name, initialize, &_HTMLDocument$FixedLengthDocument_ClassInfo_, allocate$HTMLDocument$FixedLengthDocument);
	return class$;
}

$Class* HTMLDocument$FixedLengthDocument::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax