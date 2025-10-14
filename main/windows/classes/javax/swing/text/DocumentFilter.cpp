#include <javax/swing/text/DocumentFilter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DocumentFilter$FilterBypass = ::javax::swing::text::DocumentFilter$FilterBypass;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _DocumentFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DocumentFilter::*)()>(&DocumentFilter::init$))},
	{"insertString", "(Ljavax/swing/text/DocumentFilter$FilterBypass;ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"remove", "(Ljavax/swing/text/DocumentFilter$FilterBypass;II)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"replace", "(Ljavax/swing/text/DocumentFilter$FilterBypass;IILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{}
};

$InnerClassInfo _DocumentFilter_InnerClassesInfo_[] = {
	{"javax.swing.text.DocumentFilter$FilterBypass", "javax.swing.text.DocumentFilter", "FilterBypass", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DocumentFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DocumentFilter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DocumentFilter_MethodInfo_,
	nullptr,
	nullptr,
	_DocumentFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.DocumentFilter$FilterBypass"
};

$Object* allocate$DocumentFilter($Class* clazz) {
	return $of($alloc(DocumentFilter));
}

void DocumentFilter::init$() {
}

void DocumentFilter::remove($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length) {
	$nc(fb)->remove(offset, length);
}

void DocumentFilter::insertString($DocumentFilter$FilterBypass* fb, int32_t offset, $String* string, $AttributeSet* attr) {
	$nc(fb)->insertString(offset, string, attr);
}

void DocumentFilter::replace($DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, $AttributeSet* attrs) {
	$nc(fb)->replace(offset, length, text, attrs);
}

DocumentFilter::DocumentFilter() {
}

$Class* DocumentFilter::load$($String* name, bool initialize) {
	$loadClass(DocumentFilter, name, initialize, &_DocumentFilter_ClassInfo_, allocate$DocumentFilter);
	return class$;
}

$Class* DocumentFilter::class$ = nullptr;

		} // text
	} // swing
} // javax