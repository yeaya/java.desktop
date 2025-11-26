#include <javax/swing/ButtonGroup.h>

#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;

namespace javax {
	namespace swing {

$FieldInfo _ButtonGroup_FieldInfo_[] = {
	{"buttons", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/AbstractButton;>;", $PROTECTED, $field(ButtonGroup, buttons)},
	{"selection", "Ljavax/swing/ButtonModel;", nullptr, 0, $field(ButtonGroup, selection)},
	{}
};

$MethodInfo _ButtonGroup_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ButtonGroup::*)()>(&ButtonGroup::init$))},
	{"add", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC},
	{"clearSelection", "()V", nullptr, $PUBLIC},
	{"getButtonCount", "()I", nullptr, $PUBLIC},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/swing/AbstractButton;>;", $PUBLIC},
	{"getSelection", "()Ljavax/swing/ButtonModel;", nullptr, $PUBLIC},
	{"isSelected", "(Ljavax/swing/ButtonModel;)Z", nullptr, $PUBLIC},
	{"remove", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC},
	{"setSelected", "(Ljavax/swing/ButtonModel;Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ButtonGroup_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.ButtonGroup",
	"java.lang.Object",
	"java.io.Serializable",
	_ButtonGroup_FieldInfo_,
	_ButtonGroup_MethodInfo_
};

$Object* allocate$ButtonGroup($Class* clazz) {
	return $of($alloc(ButtonGroup));
}

void ButtonGroup::init$() {
	$set(this, buttons, $new($Vector));
	$set(this, selection, nullptr);
}

void ButtonGroup::add($AbstractButton* b) {
	if (b == nullptr) {
		return;
	}
	$nc(this->buttons)->addElement(b);
	if ($nc(b)->isSelected()) {
		if (this->selection == nullptr) {
			$set(this, selection, b->getModel());
		} else {
			b->setSelected(false);
		}
	}
	$nc($($nc(b)->getModel()))->setGroup(this);
}

void ButtonGroup::remove($AbstractButton* b) {
	if (b == nullptr) {
		return;
	}
	$nc(this->buttons)->removeElement(b);
	if ($nc(b)->getModel() == this->selection) {
		$set(this, selection, nullptr);
	}
	$nc($($nc(b)->getModel()))->setGroup(nullptr);
}

void ButtonGroup::clearSelection() {
	if (this->selection != nullptr) {
		$var($ButtonModel, oldSelection, this->selection);
		$set(this, selection, nullptr);
		$nc(oldSelection)->setSelected(false);
	}
}

$Enumeration* ButtonGroup::getElements() {
	return $nc(this->buttons)->elements();
}

$ButtonModel* ButtonGroup::getSelection() {
	return this->selection;
}

void ButtonGroup::setSelected($ButtonModel* m, bool b) {
	if (b && m != nullptr && m != this->selection) {
		$var($ButtonModel, oldSelection, this->selection);
		$set(this, selection, m);
		if (oldSelection != nullptr) {
			oldSelection->setSelected(false);
		}
		m->setSelected(true);
	}
}

bool ButtonGroup::isSelected($ButtonModel* m) {
	return (m == this->selection);
}

int32_t ButtonGroup::getButtonCount() {
	if (this->buttons == nullptr) {
		return 0;
	} else {
		return $nc(this->buttons)->size();
	}
}

ButtonGroup::ButtonGroup() {
}

$Class* ButtonGroup::load$($String* name, bool initialize) {
	$loadClass(ButtonGroup, name, initialize, &_ButtonGroup_ClassInfo_, allocate$ButtonGroup);
	return class$;
}

$Class* ButtonGroup::class$ = nullptr;

	} // swing
} // javax