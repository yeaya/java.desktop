#include <javax/swing/ButtonModel.h>

#include <java/awt/event/ActionListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ItemSelectable = ::java::awt::ItemSelectable;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$MethodInfo _ButtonModel_MethodInfo_[] = {
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getActionCommand", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGroup", "()Ljavax/swing/ButtonGroup;", nullptr, $PUBLIC},
	{"getMnemonic", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isArmed", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isPressed", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isRollover", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSelected", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setActionCommand", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setArmed", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setGroup", "(Ljavax/swing/ButtonGroup;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMnemonic", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPressed", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setRollover", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSelected", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ButtonModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.ButtonModel",
	nullptr,
	"java.awt.ItemSelectable",
	nullptr,
	_ButtonModel_MethodInfo_
};

$Object* allocate$ButtonModel($Class* clazz) {
	return $of($alloc(ButtonModel));
}

$ButtonGroup* ButtonModel::getGroup() {
	return nullptr;
}

$Class* ButtonModel::load$($String* name, bool initialize) {
	$loadClass(ButtonModel, name, initialize, &_ButtonModel_ClassInfo_, allocate$ButtonModel);
	return class$;
}

$Class* ButtonModel::class$ = nullptr;

	} // swing
} // javax