#include <javax/swing/event/DocumentEvent$ElementChange.h>

#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $ElementArray = $Array<::javax::swing::text::Element>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $Element = ::javax::swing::text::Element;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _DocumentEvent$ElementChange_MethodInfo_[] = {
	{"getChildrenAdded", "()[Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getChildrenRemoved", "()[Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getIndex", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DocumentEvent$ElementChange_InnerClassesInfo_[] = {
	{"javax.swing.event.DocumentEvent$ElementChange", "javax.swing.event.DocumentEvent", "ElementChange", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DocumentEvent$ElementChange_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.DocumentEvent$ElementChange",
	nullptr,
	nullptr,
	nullptr,
	_DocumentEvent$ElementChange_MethodInfo_,
	nullptr,
	nullptr,
	_DocumentEvent$ElementChange_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.event.DocumentEvent"
};

$Object* allocate$DocumentEvent$ElementChange($Class* clazz) {
	return $of($alloc(DocumentEvent$ElementChange));
}

$Class* DocumentEvent$ElementChange::load$($String* name, bool initialize) {
	$loadClass(DocumentEvent$ElementChange, name, initialize, &_DocumentEvent$ElementChange_ClassInfo_, allocate$DocumentEvent$ElementChange);
	return class$;
}

$Class* DocumentEvent$ElementChange::class$ = nullptr;

		} // event
	} // swing
} // javax