#include <javax/swing/text/html/FormSubmitEvent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/swing/event/HyperlinkEvent$EventType.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/html/FormSubmitEvent$MethodType.h>
#include <javax/swing/text/html/HTMLFrameHyperlinkEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $HyperlinkEvent$EventType = ::javax::swing::event::HyperlinkEvent$EventType;
using $Element = ::javax::swing::text::Element;
using $FormSubmitEvent$MethodType = ::javax::swing::text::html::FormSubmitEvent$MethodType;
using $HTMLFrameHyperlinkEvent = ::javax::swing::text::html::HTMLFrameHyperlinkEvent;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _FormSubmitEvent_FieldInfo_[] = {
	{"method", "Ljavax/swing/text/html/FormSubmitEvent$MethodType;", nullptr, $PRIVATE, $field(FormSubmitEvent, method)},
	{"data", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FormSubmitEvent, data)},
	{}
};

$MethodInfo _FormSubmitEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/event/HyperlinkEvent$EventType;Ljava/net/URL;Ljavax/swing/text/Element;Ljava/lang/String;Ljavax/swing/text/html/FormSubmitEvent$MethodType;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(FormSubmitEvent::*)(Object$*,$HyperlinkEvent$EventType*,$URL*,$Element*,$String*,$FormSubmitEvent$MethodType*,$String*)>(&FormSubmitEvent::init$))},
	{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMethod", "()Ljavax/swing/text/html/FormSubmitEvent$MethodType;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FormSubmitEvent_InnerClassesInfo_[] = {
	{"javax.swing.text.html.FormSubmitEvent$MethodType", "javax.swing.text.html.FormSubmitEvent", "MethodType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _FormSubmitEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.FormSubmitEvent",
	"javax.swing.text.html.HTMLFrameHyperlinkEvent",
	nullptr,
	_FormSubmitEvent_FieldInfo_,
	_FormSubmitEvent_MethodInfo_,
	nullptr,
	nullptr,
	_FormSubmitEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.FormSubmitEvent$MethodType"
};

$Object* allocate$FormSubmitEvent($Class* clazz) {
	return $of($alloc(FormSubmitEvent));
}

void FormSubmitEvent::init$(Object$* source, $HyperlinkEvent$EventType* type, $URL* targetURL, $Element* sourceElement, $String* targetFrame, $FormSubmitEvent$MethodType* method, $String* data) {
	$HTMLFrameHyperlinkEvent::init$(source, type, targetURL, sourceElement, targetFrame);
	$set(this, method, method);
	$set(this, data, data);
}

$FormSubmitEvent$MethodType* FormSubmitEvent::getMethod() {
	return this->method;
}

$String* FormSubmitEvent::getData() {
	return this->data;
}

FormSubmitEvent::FormSubmitEvent() {
}

$Class* FormSubmitEvent::load$($String* name, bool initialize) {
	$loadClass(FormSubmitEvent, name, initialize, &_FormSubmitEvent_ClassInfo_, allocate$FormSubmitEvent);
	return class$;
}

$Class* FormSubmitEvent::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax