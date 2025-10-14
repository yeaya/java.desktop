#include <javax/swing/text/AbstractDocument$DefaultFilterBypass.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $DocumentFilter$FilterBypass = ::javax::swing::text::DocumentFilter$FilterBypass;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AbstractDocument$DefaultFilterBypass_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$DefaultFilterBypass, this$0)},
	{}
};

$MethodInfo _AbstractDocument$DefaultFilterBypass_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AbstractDocument;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractDocument$DefaultFilterBypass::*)($AbstractDocument*)>(&AbstractDocument$DefaultFilterBypass::init$))},
	{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC},
	{"insertString", "(ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"remove", "(II)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"replace", "(IILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{}
};

$InnerClassInfo _AbstractDocument$DefaultFilterBypass_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$DefaultFilterBypass", "javax.swing.text.AbstractDocument", "DefaultFilterBypass", $PRIVATE},
	{"javax.swing.text.DocumentFilter$FilterBypass", "javax.swing.text.DocumentFilter", "FilterBypass", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractDocument$DefaultFilterBypass_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.AbstractDocument$DefaultFilterBypass",
	"javax.swing.text.DocumentFilter$FilterBypass",
	nullptr,
	_AbstractDocument$DefaultFilterBypass_FieldInfo_,
	_AbstractDocument$DefaultFilterBypass_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDocument$DefaultFilterBypass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AbstractDocument"
};

$Object* allocate$AbstractDocument$DefaultFilterBypass($Class* clazz) {
	return $of($alloc(AbstractDocument$DefaultFilterBypass));
}

void AbstractDocument$DefaultFilterBypass::init$($AbstractDocument* this$0) {
	$set(this, this$0, this$0);
	$DocumentFilter$FilterBypass::init$();
}

$Document* AbstractDocument$DefaultFilterBypass::getDocument() {
	return this->this$0;
}

void AbstractDocument$DefaultFilterBypass::remove(int32_t offset, int32_t length) {
	this->this$0->handleRemove(offset, length);
}

void AbstractDocument$DefaultFilterBypass::insertString(int32_t offset, $String* string, $AttributeSet* attr) {
	this->this$0->handleInsertString(offset, string, attr);
}

void AbstractDocument$DefaultFilterBypass::replace(int32_t offset, int32_t length, $String* text, $AttributeSet* attrs) {
	this->this$0->handleRemove(offset, length);
	this->this$0->handleInsertString(offset, text, attrs);
}

AbstractDocument$DefaultFilterBypass::AbstractDocument$DefaultFilterBypass() {
}

$Class* AbstractDocument$DefaultFilterBypass::load$($String* name, bool initialize) {
	$loadClass(AbstractDocument$DefaultFilterBypass, name, initialize, &_AbstractDocument$DefaultFilterBypass_ClassInfo_, allocate$AbstractDocument$DefaultFilterBypass);
	return class$;
}

$Class* AbstractDocument$DefaultFilterBypass::class$ = nullptr;

		} // text
	} // swing
} // javax