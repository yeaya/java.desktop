#include <javax/swing/text/DefaultStyledDocument$StyleChangeHandler.h>

#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/text/DefaultStyledDocument$AbstractChangeHandler.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Style.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $DefaultStyledDocument$AbstractChangeHandler = ::javax::swing::text::DefaultStyledDocument$AbstractChangeHandler;
using $Style = ::javax::swing::text::Style;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _DefaultStyledDocument$StyleChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/DefaultStyledDocument;)V", nullptr, 0, $method(static_cast<void(DefaultStyledDocument$StyleChangeHandler::*)($DefaultStyledDocument*)>(&DefaultStyledDocument$StyleChangeHandler::init$))},
	{"fireStateChanged", "(Ljavax/swing/text/DefaultStyledDocument;Ljavax/swing/event/ChangeEvent;)V", nullptr, 0},
	{}
};

$InnerClassInfo _DefaultStyledDocument$StyleChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultStyledDocument$StyleChangeHandler", "javax.swing.text.DefaultStyledDocument", "StyleChangeHandler", $STATIC},
	{"javax.swing.text.DefaultStyledDocument$AbstractChangeHandler", "javax.swing.text.DefaultStyledDocument", "AbstractChangeHandler", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultStyledDocument$StyleChangeHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultStyledDocument$StyleChangeHandler",
	"javax.swing.text.DefaultStyledDocument$AbstractChangeHandler",
	nullptr,
	nullptr,
	_DefaultStyledDocument$StyleChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultStyledDocument$StyleChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultStyledDocument"
};

$Object* allocate$DefaultStyledDocument$StyleChangeHandler($Class* clazz) {
	return $of($alloc(DefaultStyledDocument$StyleChangeHandler));
}

void DefaultStyledDocument$StyleChangeHandler::init$($DefaultStyledDocument* d) {
	$DefaultStyledDocument$AbstractChangeHandler::init$(d);
}

void DefaultStyledDocument$StyleChangeHandler::fireStateChanged($DefaultStyledDocument* d, $ChangeEvent* e) {
	$var($Object, source, $nc(e)->getSource());
	if ($instanceOf($Style, source)) {
		$nc(d)->styleChanged($cast($Style, source));
	} else {
		$nc(d)->styleChanged(nullptr);
	}
}

DefaultStyledDocument$StyleChangeHandler::DefaultStyledDocument$StyleChangeHandler() {
}

$Class* DefaultStyledDocument$StyleChangeHandler::load$($String* name, bool initialize) {
	$loadClass(DefaultStyledDocument$StyleChangeHandler, name, initialize, &_DefaultStyledDocument$StyleChangeHandler_ClassInfo_, allocate$DefaultStyledDocument$StyleChangeHandler);
	return class$;
}

$Class* DefaultStyledDocument$StyleChangeHandler::class$ = nullptr;

		} // text
	} // swing
} // javax