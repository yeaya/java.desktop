#include <javax/swing/text/html/AccessibleHTML$DocumentHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $AccessibleHTML = ::javax::swing::text::html::AccessibleHTML;
using $AccessibleHTML$ElementInfo = ::javax::swing::text::html::AccessibleHTML$ElementInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _AccessibleHTML$DocumentHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/AccessibleHTML;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$DocumentHandler, this$0)},
	{}
};

$MethodInfo _AccessibleHTML$DocumentHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML;)V", nullptr, $PRIVATE, $method(static_cast<void(AccessibleHTML$DocumentHandler::*)($AccessibleHTML*)>(&AccessibleHTML$DocumentHandler::init$))},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AccessibleHTML$DocumentHandler_InnerClassesInfo_[] = {
	{"javax.swing.text.html.AccessibleHTML$DocumentHandler", "javax.swing.text.html.AccessibleHTML", "DocumentHandler", $PRIVATE},
	{}
};

$ClassInfo _AccessibleHTML$DocumentHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.AccessibleHTML$DocumentHandler",
	"java.lang.Object",
	"javax.swing.event.DocumentListener",
	_AccessibleHTML$DocumentHandler_FieldInfo_,
	_AccessibleHTML$DocumentHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleHTML$DocumentHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.AccessibleHTML"
};

$Object* allocate$AccessibleHTML$DocumentHandler($Class* clazz) {
	return $of($alloc(AccessibleHTML$DocumentHandler));
}

void AccessibleHTML$DocumentHandler::init$($AccessibleHTML* this$0) {
	$set(this, this$0, this$0);
}

void AccessibleHTML$DocumentHandler::insertUpdate($DocumentEvent* e) {
	$nc($(this->this$0->getRootInfo()))->update(e);
}

void AccessibleHTML$DocumentHandler::removeUpdate($DocumentEvent* e) {
	$nc($(this->this$0->getRootInfo()))->update(e);
}

void AccessibleHTML$DocumentHandler::changedUpdate($DocumentEvent* e) {
	$nc($(this->this$0->getRootInfo()))->update(e);
}

AccessibleHTML$DocumentHandler::AccessibleHTML$DocumentHandler() {
}

$Class* AccessibleHTML$DocumentHandler::load$($String* name, bool initialize) {
	$loadClass(AccessibleHTML$DocumentHandler, name, initialize, &_AccessibleHTML$DocumentHandler_ClassInfo_, allocate$AccessibleHTML$DocumentHandler);
	return class$;
}

$Class* AccessibleHTML$DocumentHandler::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax