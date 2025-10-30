#include <javax/swing/text/DefaultFormatter$ReplaceHolder.h>

#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;
using $DocumentFilter$FilterBypass = ::javax::swing::text::DocumentFilter$FilterBypass;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultFormatter$ReplaceHolder_FieldInfo_[] = {
	{"fb", "Ljavax/swing/text/DocumentFilter$FilterBypass;", nullptr, 0, $field(DefaultFormatter$ReplaceHolder, fb)},
	{"offset", "I", nullptr, 0, $field(DefaultFormatter$ReplaceHolder, offset)},
	{"length", "I", nullptr, 0, $field(DefaultFormatter$ReplaceHolder, length)},
	{"text", "Ljava/lang/String;", nullptr, 0, $field(DefaultFormatter$ReplaceHolder, text)},
	{"attrs", "Ljavax/swing/text/AttributeSet;", nullptr, 0, $field(DefaultFormatter$ReplaceHolder, attrs)},
	{"value", "Ljava/lang/Object;", nullptr, 0, $field(DefaultFormatter$ReplaceHolder, value)},
	{"cursorPosition", "I", nullptr, 0, $field(DefaultFormatter$ReplaceHolder, cursorPosition)},
	{}
};

$MethodInfo _DefaultFormatter$ReplaceHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultFormatter$ReplaceHolder::*)()>(&DefaultFormatter$ReplaceHolder::init$))},
	{"reset", "(Ljavax/swing/text/DocumentFilter$FilterBypass;IILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, 0},
	{}
};

$InnerClassInfo _DefaultFormatter$ReplaceHolder_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultFormatter$ReplaceHolder", "javax.swing.text.DefaultFormatter", "ReplaceHolder", $STATIC},
	{}
};

$ClassInfo _DefaultFormatter$ReplaceHolder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultFormatter$ReplaceHolder",
	"java.lang.Object",
	nullptr,
	_DefaultFormatter$ReplaceHolder_FieldInfo_,
	_DefaultFormatter$ReplaceHolder_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultFormatter$ReplaceHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultFormatter"
};

$Object* allocate$DefaultFormatter$ReplaceHolder($Class* clazz) {
	return $of($alloc(DefaultFormatter$ReplaceHolder));
}

void DefaultFormatter$ReplaceHolder::init$() {
}

void DefaultFormatter$ReplaceHolder::reset($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, $AttributeSet* attrs) {
	$set(this, fb, fb);
	this->offset = offset;
	this->length = length;
	$set(this, text, text);
	$set(this, attrs, attrs);
	$set(this, value, nullptr);
	this->cursorPosition = -1;
}

DefaultFormatter$ReplaceHolder::DefaultFormatter$ReplaceHolder() {
}

$Class* DefaultFormatter$ReplaceHolder::load$($String* name, bool initialize) {
	$loadClass(DefaultFormatter$ReplaceHolder, name, initialize, &_DefaultFormatter$ReplaceHolder_ClassInfo_, allocate$DefaultFormatter$ReplaceHolder);
	return class$;
}

$Class* DefaultFormatter$ReplaceHolder::class$ = nullptr;

		} // text
	} // swing
} // javax