#include <javax/swing/plaf/nimbus/TextAreaNotInScrollPaneState.h>

#include <java/awt/Container.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JViewport = ::javax::swing::JViewport;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _TextAreaNotInScrollPaneState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TextAreaNotInScrollPaneState::*)()>(&TextAreaNotInScrollPaneState::init$))},
	{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _TextAreaNotInScrollPaneState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.TextAreaNotInScrollPaneState",
	"javax.swing.plaf.nimbus.State",
	nullptr,
	nullptr,
	_TextAreaNotInScrollPaneState_MethodInfo_,
	"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
};

$Object* allocate$TextAreaNotInScrollPaneState($Class* clazz) {
	return $of($alloc(TextAreaNotInScrollPaneState));
}

void TextAreaNotInScrollPaneState::init$() {
	$State::init$("NotInScrollPane"_s);
}

bool TextAreaNotInScrollPaneState::isInState($JComponent* c) {
	return !($instanceOf($JViewport, $($nc(c)->getParent())));
}

TextAreaNotInScrollPaneState::TextAreaNotInScrollPaneState() {
}

$Class* TextAreaNotInScrollPaneState::load$($String* name, bool initialize) {
	$loadClass(TextAreaNotInScrollPaneState, name, initialize, &_TextAreaNotInScrollPaneState_ClassInfo_, allocate$TextAreaNotInScrollPaneState);
	return class$;
}

$Class* TextAreaNotInScrollPaneState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax