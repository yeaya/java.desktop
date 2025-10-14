#include <javax/swing/event/DocumentEvent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _DocumentEvent_MethodInfo_[] = {
	{"getChange", "(Ljavax/swing/text/Element;)Ljavax/swing/event/DocumentEvent$ElementChange;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "()Ljavax/swing/event/DocumentEvent$EventType;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DocumentEvent_InnerClassesInfo_[] = {
	{"javax.swing.event.DocumentEvent$ElementChange", "javax.swing.event.DocumentEvent", "ElementChange", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.event.DocumentEvent$EventType", "javax.swing.event.DocumentEvent", "EventType", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DocumentEvent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.DocumentEvent",
	nullptr,
	nullptr,
	nullptr,
	_DocumentEvent_MethodInfo_,
	nullptr,
	nullptr,
	_DocumentEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.event.DocumentEvent$ElementChange,javax.swing.event.DocumentEvent$EventType"
};

$Object* allocate$DocumentEvent($Class* clazz) {
	return $of($alloc(DocumentEvent));
}

$Class* DocumentEvent::load$($String* name, bool initialize) {
	$loadClass(DocumentEvent, name, initialize, &_DocumentEvent_ClassInfo_, allocate$DocumentEvent);
	return class$;
}

$Class* DocumentEvent::class$ = nullptr;

		} // event
	} // swing
} // javax