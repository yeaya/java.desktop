#include <javax/swing/text/html/AccessibleHTML$PropertyChangeHandler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $AccessibleHTML = ::javax::swing::text::html::AccessibleHTML;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _AccessibleHTML$PropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/AccessibleHTML;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$PropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _AccessibleHTML$PropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML;)V", nullptr, $PRIVATE, $method(static_cast<void(AccessibleHTML$PropertyChangeHandler::*)($AccessibleHTML*)>(&AccessibleHTML$PropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AccessibleHTML$PropertyChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.text.html.AccessibleHTML$PropertyChangeHandler", "javax.swing.text.html.AccessibleHTML", "PropertyChangeHandler", $PRIVATE},
	{}
};

$ClassInfo _AccessibleHTML$PropertyChangeHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.AccessibleHTML$PropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_AccessibleHTML$PropertyChangeHandler_FieldInfo_,
	_AccessibleHTML$PropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleHTML$PropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.AccessibleHTML"
};

$Object* allocate$AccessibleHTML$PropertyChangeHandler($Class* clazz) {
	return $of($alloc(AccessibleHTML$PropertyChangeHandler));
}

void AccessibleHTML$PropertyChangeHandler::init$($AccessibleHTML* this$0) {
	$set(this, this$0, this$0);
}

void AccessibleHTML$PropertyChangeHandler::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(evt)->getPropertyName()))->equals("document"_s)) {
		this->this$0->setDocument($($nc(this->this$0->editor)->getDocument()));
	}
}

AccessibleHTML$PropertyChangeHandler::AccessibleHTML$PropertyChangeHandler() {
}

$Class* AccessibleHTML$PropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(AccessibleHTML$PropertyChangeHandler, name, initialize, &_AccessibleHTML$PropertyChangeHandler_ClassInfo_, allocate$AccessibleHTML$PropertyChangeHandler);
	return class$;
}

$Class* AccessibleHTML$PropertyChangeHandler::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax