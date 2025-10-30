#include <javax/swing/text/TextAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/util/Enumeration.h>
#include <java/util/EventObject.h>
#include <java/util/Hashtable.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef NAME

using $ActionArray = $Array<::javax::swing::Action>;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $EventObject = ::java::util::EventObject;
using $Hashtable = ::java::util::Hashtable;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _TextAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TextAction::*)($String*)>(&TextAction::init$))},
	{"augmentList", "([Ljavax/swing/Action;[Ljavax/swing/Action;)[Ljavax/swing/Action;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$ActionArray*(*)($ActionArray*,$ActionArray*)>(&TextAction::augmentList))},
	{"getFocusedComponent", "()Ljavax/swing/text/JTextComponent;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$JTextComponent*(TextAction::*)()>(&TextAction::getFocusedComponent))},
	{"getTextComponent", "(Ljava/awt/event/ActionEvent;)Ljavax/swing/text/JTextComponent;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$JTextComponent*(TextAction::*)($ActionEvent*)>(&TextAction::getTextComponent))},
	{}
};

$ClassInfo _TextAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.TextAction",
	"javax.swing.AbstractAction",
	nullptr,
	nullptr,
	_TextAction_MethodInfo_
};

$Object* allocate$TextAction($Class* clazz) {
	return $of($alloc(TextAction));
}

void TextAction::init$($String* name) {
	$AbstractAction::init$(name);
}

$JTextComponent* TextAction::getTextComponent($ActionEvent* e) {
	if (e != nullptr) {
		$var($Object, o, e->getSource());
		if ($instanceOf($JTextComponent, o)) {
			return $cast($JTextComponent, o);
		}
	}
	return getFocusedComponent();
}

$ActionArray* TextAction::augmentList($ActionArray* list1, $ActionArray* list2) {
	$init(TextAction);
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, h, $new($Hashtable));
	{
		$var($ActionArray, arr$, list1);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Action, a, arr$->get(i$));
			{
				$init($Action);
				$var($String, value, $cast($String, $nc(a)->getValue($Action::NAME)));
				h->put((value != nullptr ? value : ""_s), a);
			}
		}
	}
	{
		$var($ActionArray, arr$, list2);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Action, a, arr$->get(i$));
			{
				$init($Action);
				$var($String, value, $cast($String, $nc(a)->getValue($Action::NAME)));
				h->put((value != nullptr ? value : ""_s), a);
			}
		}
	}
	$var($ActionArray, actions, $new($ActionArray, h->size()));
	int32_t index = 0;
	{
		$var($Enumeration, e, h->elements());
		for (; $nc(e)->hasMoreElements();) {
			actions->set(index++, $cast($Action, $(e->nextElement())));
		}
	}
	return actions;
}

$JTextComponent* TextAction::getFocusedComponent() {
	return $JTextComponent::getFocusedComponent();
}

TextAction::TextAction() {
}

$Class* TextAction::load$($String* name, bool initialize) {
	$loadClass(TextAction, name, initialize, &_TextAction_ClassInfo_, allocate$TextAction);
	return class$;
}

$Class* TextAction::class$ = nullptr;

		} // text
	} // swing
} // javax