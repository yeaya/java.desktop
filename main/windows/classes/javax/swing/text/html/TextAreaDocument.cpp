#include <javax/swing/text/html/TextAreaDocument.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/PlainDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $PlainDocument = ::javax::swing::text::PlainDocument;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _TextAreaDocument_FieldInfo_[] = {
	{"initialText", "Ljava/lang/String;", nullptr, 0, $field(TextAreaDocument, initialText)},
	{}
};

$MethodInfo _TextAreaDocument_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TextAreaDocument::*)()>(&TextAreaDocument::init$))},
	{"reset", "()V", nullptr, 0},
	{"storeInitialText", "()V", nullptr, 0},
	{}
};

$ClassInfo _TextAreaDocument_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.TextAreaDocument",
	"javax.swing.text.PlainDocument",
	nullptr,
	_TextAreaDocument_FieldInfo_,
	_TextAreaDocument_MethodInfo_
};

$Object* allocate$TextAreaDocument($Class* clazz) {
	return $of($alloc(TextAreaDocument));
}

void TextAreaDocument::init$() {
	$PlainDocument::init$();
}

void TextAreaDocument::reset() {
	try {
		remove(0, getLength());
		if (this->initialText != nullptr) {
			insertString(0, this->initialText, nullptr);
		}
	} catch ($BadLocationException&) {
		$catch();
	}
}

void TextAreaDocument::storeInitialText() {
	try {
		$set(this, initialText, getText(0, getLength()));
	} catch ($BadLocationException&) {
		$catch();
	}
}

TextAreaDocument::TextAreaDocument() {
}

$Class* TextAreaDocument::load$($String* name, bool initialize) {
	$loadClass(TextAreaDocument, name, initialize, &_TextAreaDocument_ClassInfo_, allocate$TextAreaDocument);
	return class$;
}

$Class* TextAreaDocument::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax