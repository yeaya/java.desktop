#include <javax/swing/text/InternationalFormatter$ExtendedReplaceHolder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/ParseException.h>
#include <javax/swing/text/DefaultFormatter$ReplaceHolder.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <javax/swing/text/InternationalFormatter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParseException = ::java::text::ParseException;
using $DefaultFormatter$ReplaceHolder = ::javax::swing::text::DefaultFormatter$ReplaceHolder;
using $Document = ::javax::swing::text::Document;
using $DocumentFilter$FilterBypass = ::javax::swing::text::DocumentFilter$FilterBypass;
using $InternationalFormatter = ::javax::swing::text::InternationalFormatter;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _InternationalFormatter$ExtendedReplaceHolder_FieldInfo_[] = {
	{"endOffset", "I", nullptr, 0, $field(InternationalFormatter$ExtendedReplaceHolder, endOffset)},
	{"endTextLength", "I", nullptr, 0, $field(InternationalFormatter$ExtendedReplaceHolder, endTextLength)},
	{}
};

$MethodInfo _InternationalFormatter$ExtendedReplaceHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InternationalFormatter$ExtendedReplaceHolder::*)()>(&InternationalFormatter$ExtendedReplaceHolder::init$))},
	{"resetFromValue", "(Ljavax/swing/text/InternationalFormatter;)V", nullptr, 0},
	{}
};

$InnerClassInfo _InternationalFormatter$ExtendedReplaceHolder_InnerClassesInfo_[] = {
	{"javax.swing.text.InternationalFormatter$ExtendedReplaceHolder", "javax.swing.text.InternationalFormatter", "ExtendedReplaceHolder", $STATIC},
	{"javax.swing.text.DefaultFormatter$ReplaceHolder", "javax.swing.text.DefaultFormatter", "ReplaceHolder", $STATIC},
	{}
};

$ClassInfo _InternationalFormatter$ExtendedReplaceHolder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.InternationalFormatter$ExtendedReplaceHolder",
	"javax.swing.text.DefaultFormatter$ReplaceHolder",
	nullptr,
	_InternationalFormatter$ExtendedReplaceHolder_FieldInfo_,
	_InternationalFormatter$ExtendedReplaceHolder_MethodInfo_,
	nullptr,
	nullptr,
	_InternationalFormatter$ExtendedReplaceHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.InternationalFormatter"
};

$Object* allocate$InternationalFormatter$ExtendedReplaceHolder($Class* clazz) {
	return $of($alloc(InternationalFormatter$ExtendedReplaceHolder));
}

void InternationalFormatter$ExtendedReplaceHolder::init$() {
	$DefaultFormatter$ReplaceHolder::init$();
}

void InternationalFormatter$ExtendedReplaceHolder::resetFromValue($InternationalFormatter* formatter) {
	$useLocalCurrentObjectStackCache();
	this->offset = 0;
	try {
		$set(this, text, $nc(formatter)->valueToString(this->value));
	} catch ($ParseException&) {
		$var($ParseException, pe, $catch());
		$set(this, text, ""_s);
	}
	this->length = $nc($($nc(this->fb)->getDocument()))->getLength();
}

InternationalFormatter$ExtendedReplaceHolder::InternationalFormatter$ExtendedReplaceHolder() {
}

$Class* InternationalFormatter$ExtendedReplaceHolder::load$($String* name, bool initialize) {
	$loadClass(InternationalFormatter$ExtendedReplaceHolder, name, initialize, &_InternationalFormatter$ExtendedReplaceHolder_ClassInfo_, allocate$InternationalFormatter$ExtendedReplaceHolder);
	return class$;
}

$Class* InternationalFormatter$ExtendedReplaceHolder::class$ = nullptr;

		} // text
	} // swing
} // javax