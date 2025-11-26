#include <javax/swing/text/html/HTMLFrameHyperlinkEvent.h>

#include <java/awt/event/InputEvent.h>
#include <java/net/URL.h>
#include <javax/swing/event/HyperlinkEvent$EventType.h>
#include <javax/swing/event/HyperlinkEvent.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $HyperlinkEvent = ::javax::swing::event::HyperlinkEvent;
using $HyperlinkEvent$EventType = ::javax::swing::event::HyperlinkEvent$EventType;
using $Element = ::javax::swing::text::Element;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLFrameHyperlinkEvent_FieldInfo_[] = {
	{"targetFrame", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HTMLFrameHyperlinkEvent, targetFrame)},
	{}
};

$MethodInfo _HTMLFrameHyperlinkEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/event/HyperlinkEvent$EventType;Ljava/net/URL;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLFrameHyperlinkEvent::*)(Object$*,$HyperlinkEvent$EventType*,$URL*,$String*)>(&HTMLFrameHyperlinkEvent::init$))},
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/event/HyperlinkEvent$EventType;Ljava/net/URL;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLFrameHyperlinkEvent::*)(Object$*,$HyperlinkEvent$EventType*,$URL*,$String*,$String*)>(&HTMLFrameHyperlinkEvent::init$))},
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/event/HyperlinkEvent$EventType;Ljava/net/URL;Ljavax/swing/text/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLFrameHyperlinkEvent::*)(Object$*,$HyperlinkEvent$EventType*,$URL*,$Element*,$String*)>(&HTMLFrameHyperlinkEvent::init$))},
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/event/HyperlinkEvent$EventType;Ljava/net/URL;Ljava/lang/String;Ljavax/swing/text/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLFrameHyperlinkEvent::*)(Object$*,$HyperlinkEvent$EventType*,$URL*,$String*,$Element*,$String*)>(&HTMLFrameHyperlinkEvent::init$))},
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/event/HyperlinkEvent$EventType;Ljava/net/URL;Ljava/lang/String;Ljavax/swing/text/Element;Ljava/awt/event/InputEvent;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLFrameHyperlinkEvent::*)(Object$*,$HyperlinkEvent$EventType*,$URL*,$String*,$Element*,$InputEvent*,$String*)>(&HTMLFrameHyperlinkEvent::init$))},
	{"getTarget", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HTMLFrameHyperlinkEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLFrameHyperlinkEvent",
	"javax.swing.event.HyperlinkEvent",
	nullptr,
	_HTMLFrameHyperlinkEvent_FieldInfo_,
	_HTMLFrameHyperlinkEvent_MethodInfo_
};

$Object* allocate$HTMLFrameHyperlinkEvent($Class* clazz) {
	return $of($alloc(HTMLFrameHyperlinkEvent));
}

void HTMLFrameHyperlinkEvent::init$(Object$* source, $HyperlinkEvent$EventType* type, $URL* targetURL, $String* targetFrame) {
	$HyperlinkEvent::init$(source, type, targetURL);
	$set(this, targetFrame, targetFrame);
}

void HTMLFrameHyperlinkEvent::init$(Object$* source, $HyperlinkEvent$EventType* type, $URL* targetURL, $String* desc, $String* targetFrame) {
	$HyperlinkEvent::init$(source, type, targetURL, desc);
	$set(this, targetFrame, targetFrame);
}

void HTMLFrameHyperlinkEvent::init$(Object$* source, $HyperlinkEvent$EventType* type, $URL* targetURL, $Element* sourceElement, $String* targetFrame) {
	$HyperlinkEvent::init$(source, type, targetURL, nullptr, sourceElement);
	$set(this, targetFrame, targetFrame);
}

void HTMLFrameHyperlinkEvent::init$(Object$* source, $HyperlinkEvent$EventType* type, $URL* targetURL, $String* desc, $Element* sourceElement, $String* targetFrame) {
	$HyperlinkEvent::init$(source, type, targetURL, desc, sourceElement);
	$set(this, targetFrame, targetFrame);
}

void HTMLFrameHyperlinkEvent::init$(Object$* source, $HyperlinkEvent$EventType* type, $URL* targetURL, $String* desc, $Element* sourceElement, $InputEvent* inputEvent, $String* targetFrame) {
	$HyperlinkEvent::init$(source, type, targetURL, desc, sourceElement, inputEvent);
	$set(this, targetFrame, targetFrame);
}

$String* HTMLFrameHyperlinkEvent::getTarget() {
	return this->targetFrame;
}

HTMLFrameHyperlinkEvent::HTMLFrameHyperlinkEvent() {
}

$Class* HTMLFrameHyperlinkEvent::load$($String* name, bool initialize) {
	$loadClass(HTMLFrameHyperlinkEvent, name, initialize, &_HTMLFrameHyperlinkEvent_ClassInfo_, allocate$HTMLFrameHyperlinkEvent);
	return class$;
}

$Class* HTMLFrameHyperlinkEvent::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax