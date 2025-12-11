#include <javax/swing/text/DocumentFilter$FilterBypass.h>

#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/DocumentFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _DocumentFilter$FilterBypass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(DocumentFilter$FilterBypass::*)()>(&DocumentFilter$FilterBypass::init$))},
	{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC | $ABSTRACT},
	{"insertString", "(ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{"remove", "(II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{"replace", "(IILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{}
};

$InnerClassInfo _DocumentFilter$FilterBypass_InnerClassesInfo_[] = {
	{"javax.swing.text.DocumentFilter$FilterBypass", "javax.swing.text.DocumentFilter", "FilterBypass", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DocumentFilter$FilterBypass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.DocumentFilter$FilterBypass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DocumentFilter$FilterBypass_MethodInfo_,
	nullptr,
	nullptr,
	_DocumentFilter$FilterBypass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DocumentFilter"
};

$Object* allocate$DocumentFilter$FilterBypass($Class* clazz) {
	return $of($alloc(DocumentFilter$FilterBypass));
}

void DocumentFilter$FilterBypass::init$() {
}

DocumentFilter$FilterBypass::DocumentFilter$FilterBypass() {
}

$Class* DocumentFilter$FilterBypass::load$($String* name, bool initialize) {
	$loadClass(DocumentFilter$FilterBypass, name, initialize, &_DocumentFilter$FilterBypass_ClassInfo_, allocate$DocumentFilter$FilterBypass);
	return class$;
}

$Class* DocumentFilter$FilterBypass::class$ = nullptr;

		} // text
	} // swing
} // javax