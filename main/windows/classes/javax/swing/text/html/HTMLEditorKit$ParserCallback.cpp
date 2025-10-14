#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

#undef IMPLIED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLEditorKit$ParserCallback_FieldInfo_[] = {
	{"IMPLIED", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLEditorKit$ParserCallback, IMPLIED)},
	{}
};

$MethodInfo _HTMLEditorKit$ParserCallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HTMLEditorKit$ParserCallback::*)()>(&HTMLEditorKit$ParserCallback::init$))},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"handleComment", "([CI)V", nullptr, $PUBLIC},
	{"handleEndOfLineString", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"handleEndTag", "(Ljavax/swing/text/html/HTML$Tag;I)V", nullptr, $PUBLIC},
	{"handleError", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"handleSimpleTag", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;I)V", nullptr, $PUBLIC},
	{"handleStartTag", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;I)V", nullptr, $PUBLIC},
	{"handleText", "([CI)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLEditorKit$ParserCallback_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLEditorKit$ParserCallback", "javax.swing.text.html.HTMLEditorKit", "ParserCallback", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _HTMLEditorKit$ParserCallback_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLEditorKit$ParserCallback",
	"java.lang.Object",
	nullptr,
	_HTMLEditorKit$ParserCallback_FieldInfo_,
	_HTMLEditorKit$ParserCallback_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLEditorKit$ParserCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLEditorKit"
};

$Object* allocate$HTMLEditorKit$ParserCallback($Class* clazz) {
	return $of($alloc(HTMLEditorKit$ParserCallback));
}


$Object* HTMLEditorKit$ParserCallback::IMPLIED = nullptr;

void HTMLEditorKit$ParserCallback::init$() {
}

void HTMLEditorKit$ParserCallback::flush() {
}

void HTMLEditorKit$ParserCallback::handleText($chars* data, int32_t pos) {
}

void HTMLEditorKit$ParserCallback::handleComment($chars* data, int32_t pos) {
}

void HTMLEditorKit$ParserCallback::handleStartTag($HTML$Tag* t, $MutableAttributeSet* a, int32_t pos) {
}

void HTMLEditorKit$ParserCallback::handleEndTag($HTML$Tag* t, int32_t pos) {
}

void HTMLEditorKit$ParserCallback::handleSimpleTag($HTML$Tag* t, $MutableAttributeSet* a, int32_t pos) {
}

void HTMLEditorKit$ParserCallback::handleError($String* errorMsg, int32_t pos) {
}

void HTMLEditorKit$ParserCallback::handleEndOfLineString($String* eol) {
}

void clinit$HTMLEditorKit$ParserCallback($Class* class$) {
	$assignStatic(HTMLEditorKit$ParserCallback::IMPLIED, "_implied_"_s);
}

HTMLEditorKit$ParserCallback::HTMLEditorKit$ParserCallback() {
}

$Class* HTMLEditorKit$ParserCallback::load$($String* name, bool initialize) {
	$loadClass(HTMLEditorKit$ParserCallback, name, initialize, &_HTMLEditorKit$ParserCallback_ClassInfo_, clinit$HTMLEditorKit$ParserCallback, allocate$HTMLEditorKit$ParserCallback);
	return class$;
}

$Class* HTMLEditorKit$ParserCallback::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax