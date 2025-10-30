#include <javax/swing/Action.h>

#include <java/beans/PropertyChangeListener.h>
#include <jcpp.h>

#undef ACCELERATOR_KEY
#undef ACTION_COMMAND_KEY
#undef DEFAULT
#undef DISPLAYED_MNEMONIC_INDEX_KEY
#undef LARGE_ICON_KEY
#undef LONG_DESCRIPTION
#undef MNEMONIC_KEY
#undef NAME
#undef SELECTED_KEY
#undef SHORT_DESCRIPTION
#undef SMALL_ICON

using $ActionListener = ::java::awt::event::ActionListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$FieldInfo _Action_FieldInfo_[] = {
	{"DEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Action, DEFAULT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Action, NAME)},
	{"SHORT_DESCRIPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Action, SHORT_DESCRIPTION)},
	{"LONG_DESCRIPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Action, LONG_DESCRIPTION)},
	{"SMALL_ICON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Action, SMALL_ICON)},
	{"ACTION_COMMAND_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Action, ACTION_COMMAND_KEY)},
	{"ACCELERATOR_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Action, ACCELERATOR_KEY)},
	{"MNEMONIC_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Action, MNEMONIC_KEY)},
	{"SELECTED_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Action, SELECTED_KEY)},
	{"DISPLAYED_MNEMONIC_INDEX_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Action, DISPLAYED_MNEMONIC_INDEX_KEY)},
	{"LARGE_ICON_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Action, LARGE_ICON_KEY)},
	{}
};

$MethodInfo _Action_MethodInfo_[] = {
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"isEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"putValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Action_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.Action",
	nullptr,
	"java.awt.event.ActionListener",
	_Action_FieldInfo_,
	_Action_MethodInfo_
};

$Object* allocate$Action($Class* clazz) {
	return $of($alloc(Action));
}

$String* Action::DEFAULT = nullptr;
$String* Action::NAME = nullptr;
$String* Action::SHORT_DESCRIPTION = nullptr;
$String* Action::LONG_DESCRIPTION = nullptr;
$String* Action::SMALL_ICON = nullptr;
$String* Action::ACTION_COMMAND_KEY = nullptr;
$String* Action::ACCELERATOR_KEY = nullptr;
$String* Action::MNEMONIC_KEY = nullptr;
$String* Action::SELECTED_KEY = nullptr;
$String* Action::DISPLAYED_MNEMONIC_INDEX_KEY = nullptr;
$String* Action::LARGE_ICON_KEY = nullptr;

bool Action::accept(Object$* sender) {
	return isEnabled();
}

void clinit$Action($Class* class$) {
	$assignStatic(Action::DEFAULT, "Default"_s);
	$assignStatic(Action::NAME, "Name"_s);
	$assignStatic(Action::SHORT_DESCRIPTION, "ShortDescription"_s);
	$assignStatic(Action::LONG_DESCRIPTION, "LongDescription"_s);
	$assignStatic(Action::SMALL_ICON, "SmallIcon"_s);
	$assignStatic(Action::ACTION_COMMAND_KEY, "ActionCommandKey"_s);
	$assignStatic(Action::ACCELERATOR_KEY, "AcceleratorKey"_s);
	$assignStatic(Action::MNEMONIC_KEY, "MnemonicKey"_s);
	$assignStatic(Action::SELECTED_KEY, "SwingSelectedKey"_s);
	$assignStatic(Action::DISPLAYED_MNEMONIC_INDEX_KEY, "SwingDisplayedMnemonicIndexKey"_s);
	$assignStatic(Action::LARGE_ICON_KEY, "SwingLargeIconKey"_s);
}

$Class* Action::load$($String* name, bool initialize) {
	$loadClass(Action, name, initialize, &_Action_ClassInfo_, clinit$Action, allocate$Action);
	return class$;
}

$Class* Action::class$ = nullptr;

	} // swing
} // javax