#include <javax/swing/text/DefaultStyledDocument$StyleContextChangeHandler.h>

#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/text/DefaultStyledDocument$AbstractChangeHandler.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $DefaultStyledDocument$AbstractChangeHandler = ::javax::swing::text::DefaultStyledDocument$AbstractChangeHandler;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _DefaultStyledDocument$StyleContextChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/DefaultStyledDocument;)V", nullptr, 0, $method(static_cast<void(DefaultStyledDocument$StyleContextChangeHandler::*)($DefaultStyledDocument*)>(&DefaultStyledDocument$StyleContextChangeHandler::init$))},
	{"fireStateChanged", "(Ljavax/swing/text/DefaultStyledDocument;Ljavax/swing/event/ChangeEvent;)V", nullptr, 0},
	{}
};

$InnerClassInfo _DefaultStyledDocument$StyleContextChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultStyledDocument$StyleContextChangeHandler", "javax.swing.text.DefaultStyledDocument", "StyleContextChangeHandler", $STATIC},
	{"javax.swing.text.DefaultStyledDocument$AbstractChangeHandler", "javax.swing.text.DefaultStyledDocument", "AbstractChangeHandler", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultStyledDocument$StyleContextChangeHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultStyledDocument$StyleContextChangeHandler",
	"javax.swing.text.DefaultStyledDocument$AbstractChangeHandler",
	nullptr,
	nullptr,
	_DefaultStyledDocument$StyleContextChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultStyledDocument$StyleContextChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultStyledDocument"
};

$Object* allocate$DefaultStyledDocument$StyleContextChangeHandler($Class* clazz) {
	return $of($alloc(DefaultStyledDocument$StyleContextChangeHandler));
}

void DefaultStyledDocument$StyleContextChangeHandler::init$($DefaultStyledDocument* d) {
	$DefaultStyledDocument$AbstractChangeHandler::init$(d);
}

void DefaultStyledDocument$StyleContextChangeHandler::fireStateChanged($DefaultStyledDocument* d, $ChangeEvent* e) {
	$nc(d)->updateStylesListeningTo();
}

DefaultStyledDocument$StyleContextChangeHandler::DefaultStyledDocument$StyleContextChangeHandler() {
}

$Class* DefaultStyledDocument$StyleContextChangeHandler::load$($String* name, bool initialize) {
	$loadClass(DefaultStyledDocument$StyleContextChangeHandler, name, initialize, &_DefaultStyledDocument$StyleContextChangeHandler_ClassInfo_, allocate$DefaultStyledDocument$StyleContextChangeHandler);
	return class$;
}

$Class* DefaultStyledDocument$StyleContextChangeHandler::class$ = nullptr;

		} // text
	} // swing
} // javax