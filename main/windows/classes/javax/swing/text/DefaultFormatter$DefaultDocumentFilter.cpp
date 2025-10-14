#include <javax/swing/text/DefaultFormatter$DefaultDocumentFilter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <javax/swing/text/DocumentFilter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Utilities.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JTextField = ::javax::swing::JTextField;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;
using $DocumentFilter = ::javax::swing::text::DocumentFilter;
using $DocumentFilter$FilterBypass = ::javax::swing::text::DocumentFilter$FilterBypass;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Utilities = ::javax::swing::text::Utilities;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultFormatter$DefaultDocumentFilter_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/DefaultFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultFormatter$DefaultDocumentFilter, this$0)},
	{}
};

$MethodInfo _DefaultFormatter$DefaultDocumentFilter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/DefaultFormatter;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultFormatter$DefaultDocumentFilter::*)($DefaultFormatter*)>(&DefaultFormatter$DefaultDocumentFilter::init$))},
	{"insertString", "(Ljavax/swing/text/DocumentFilter$FilterBypass;ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"remove", "(Ljavax/swing/text/DocumentFilter$FilterBypass;II)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"replace", "(Ljavax/swing/text/DocumentFilter$FilterBypass;IILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultFormatter$DefaultDocumentFilter_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultFormatter$DefaultDocumentFilter", "javax.swing.text.DefaultFormatter", "DefaultDocumentFilter", $PRIVATE},
	{}
};

$ClassInfo _DefaultFormatter$DefaultDocumentFilter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultFormatter$DefaultDocumentFilter",
	"javax.swing.text.DocumentFilter",
	"java.io.Serializable",
	_DefaultFormatter$DefaultDocumentFilter_FieldInfo_,
	_DefaultFormatter$DefaultDocumentFilter_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultFormatter$DefaultDocumentFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultFormatter"
};

$Object* allocate$DefaultFormatter$DefaultDocumentFilter($Class* clazz) {
	return $of($alloc(DefaultFormatter$DefaultDocumentFilter));
}

int32_t DefaultFormatter$DefaultDocumentFilter::hashCode() {
	 return this->$DocumentFilter::hashCode();
}

bool DefaultFormatter$DefaultDocumentFilter::equals(Object$* arg0) {
	 return this->$DocumentFilter::equals(arg0);
}

$Object* DefaultFormatter$DefaultDocumentFilter::clone() {
	 return this->$DocumentFilter::clone();
}

$String* DefaultFormatter$DefaultDocumentFilter::toString() {
	 return this->$DocumentFilter::toString();
}

void DefaultFormatter$DefaultDocumentFilter::finalize() {
	this->$DocumentFilter::finalize();
}

void DefaultFormatter$DefaultDocumentFilter::init$($DefaultFormatter* this$0) {
	$set(this, this$0, this$0);
	$DocumentFilter::init$();
}

void DefaultFormatter$DefaultDocumentFilter::remove($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length) {
	$var($JTextComponent, tc, $DefaultFormatter::access$200(this->this$0));
	if ($nc(tc)->composedTextExists()) {
		$nc(fb)->remove(offset, length);
	} else {
		this->this$0->replace(fb, offset, length, nullptr, nullptr);
	}
}

void DefaultFormatter$DefaultDocumentFilter::insertString($DocumentFilter$FilterBypass* fb, int32_t offset, $String* string, $AttributeSet* attr) {
	$var($JTextComponent, tc, $DefaultFormatter::access$300(this->this$0));
	bool var$0 = $nc(tc)->composedTextExists();
	if (var$0 || $Utilities::isComposedTextAttributeDefined(attr)) {
		$nc(fb)->insertString(offset, string, attr);
	} else {
		this->this$0->replace(fb, offset, 0, string, attr);
	}
}

void DefaultFormatter$DefaultDocumentFilter::replace($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, $AttributeSet* attr) {
	$var($JTextComponent, tc, $DefaultFormatter::access$400(this->this$0));
	bool var$0 = $nc(tc)->composedTextExists();
	if (var$0 || $Utilities::isComposedTextAttributeDefined(attr)) {
		$nc(fb)->replace(offset, length, text, attr);
	} else {
		this->this$0->replace(fb, offset, length, text, attr);
	}
}

DefaultFormatter$DefaultDocumentFilter::DefaultFormatter$DefaultDocumentFilter() {
}

$Class* DefaultFormatter$DefaultDocumentFilter::load$($String* name, bool initialize) {
	$loadClass(DefaultFormatter$DefaultDocumentFilter, name, initialize, &_DefaultFormatter$DefaultDocumentFilter_ClassInfo_, allocate$DefaultFormatter$DefaultDocumentFilter);
	return class$;
}

$Class* DefaultFormatter$DefaultDocumentFilter::class$ = nullptr;

		} // text
	} // swing
} // javax