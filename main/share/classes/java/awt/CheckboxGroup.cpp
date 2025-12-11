#include <java/awt/CheckboxGroup.h>

#include <java/awt/Checkbox.h>
#include <jcpp.h>

using $Checkbox = ::java::awt::Checkbox;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$CompoundAttribute _CheckboxGroup_MethodAnnotations_getCurrent1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CheckboxGroup_MethodAnnotations_setCurrent3[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _CheckboxGroup_FieldInfo_[] = {
	{"selectedCheckbox", "Ljava/awt/Checkbox;", nullptr, 0, $field(CheckboxGroup, selectedCheckbox)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CheckboxGroup, serialVersionUID)},
	{}
};

$MethodInfo _CheckboxGroup_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CheckboxGroup::*)()>(&CheckboxGroup::init$))},
	{"getCurrent", "()Ljava/awt/Checkbox;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _CheckboxGroup_MethodAnnotations_getCurrent1},
	{"getSelectedCheckbox", "()Ljava/awt/Checkbox;", nullptr, $PUBLIC},
	{"setCurrent", "(Ljava/awt/Checkbox;)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _CheckboxGroup_MethodAnnotations_setCurrent3},
	{"setSelectedCheckbox", "(Ljava/awt/Checkbox;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CheckboxGroup_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.CheckboxGroup",
	"java.lang.Object",
	"java.io.Serializable",
	_CheckboxGroup_FieldInfo_,
	_CheckboxGroup_MethodInfo_
};

$Object* allocate$CheckboxGroup($Class* clazz) {
	return $of($alloc(CheckboxGroup));
}

void CheckboxGroup::init$() {
	$set(this, selectedCheckbox, nullptr);
}

$Checkbox* CheckboxGroup::getSelectedCheckbox() {
	return getCurrent();
}

$Checkbox* CheckboxGroup::getCurrent() {
	return this->selectedCheckbox;
}

void CheckboxGroup::setSelectedCheckbox($Checkbox* box) {
	setCurrent(box);
}

void CheckboxGroup::setCurrent($Checkbox* box) {
	$synchronized(this) {
		if (box != nullptr && box->group != this) {
			return;
		}
		$var($Checkbox, oldChoice, this->selectedCheckbox);
		$set(this, selectedCheckbox, box);
		if (oldChoice != nullptr && oldChoice != box && oldChoice->group == this) {
			oldChoice->setState(false);
		}
		if (box != nullptr && oldChoice != box && !box->getState()) {
			box->setStateInternal(true);
		}
	}
}

$String* CheckboxGroup::toString() {
	return $str({$($of(this)->getClass()->getName()), "[selectedCheckbox="_s, this->selectedCheckbox, "]"_s});
}

CheckboxGroup::CheckboxGroup() {
}

$Class* CheckboxGroup::load$($String* name, bool initialize) {
	$loadClass(CheckboxGroup, name, initialize, &_CheckboxGroup_ClassInfo_, allocate$CheckboxGroup);
	return class$;
}

$Class* CheckboxGroup::class$ = nullptr;

	} // awt
} // java