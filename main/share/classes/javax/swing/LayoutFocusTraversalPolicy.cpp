#include <javax/swing/LayoutFocusTraversalPolicy.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/Comparator.h>
#include <java/util/Enumeration.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/LayoutComparator.h>
#include <javax/swing/SortingFocusTraversalPolicy.h>
#include <javax/swing/SwingDefaultFocusTraversalPolicy.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef WHEN_FOCUSED

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Enumeration = ::java::util::Enumeration;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $ButtonModel = ::javax::swing::ButtonModel;
using $InputMap = ::javax::swing::InputMap;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JToggleButton = ::javax::swing::JToggleButton;
using $LayoutComparator = ::javax::swing::LayoutComparator;
using $SortingFocusTraversalPolicy = ::javax::swing::SortingFocusTraversalPolicy;
using $SwingDefaultFocusTraversalPolicy = ::javax::swing::SwingDefaultFocusTraversalPolicy;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace javax {
	namespace swing {

$FieldInfo _LayoutFocusTraversalPolicy_FieldInfo_[] = {
	{"fitnessTestPolicy", "Ljavax/swing/SwingDefaultFocusTraversalPolicy;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LayoutFocusTraversalPolicy, fitnessTestPolicy)},
	{}
};

$MethodInfo _LayoutFocusTraversalPolicy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LayoutFocusTraversalPolicy::*)()>(&LayoutFocusTraversalPolicy::init$))},
	{"<init>", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<-Ljava/awt/Component;>;)V", 0, $method(static_cast<void(LayoutFocusTraversalPolicy::*)($Comparator*)>(&LayoutFocusTraversalPolicy::init$))},
	{"accept", "(Ljava/awt/Component;)Z", nullptr, $PROTECTED},
	{"getComponentAfter", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getComponentBefore", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getFirstComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getLastComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(LayoutFocusTraversalPolicy::*)($ObjectInputStream*)>(&LayoutFocusTraversalPolicy::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(LayoutFocusTraversalPolicy::*)($ObjectOutputStream*)>(&LayoutFocusTraversalPolicy::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _LayoutFocusTraversalPolicy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.LayoutFocusTraversalPolicy",
	"javax.swing.SortingFocusTraversalPolicy",
	"java.io.Serializable",
	_LayoutFocusTraversalPolicy_FieldInfo_,
	_LayoutFocusTraversalPolicy_MethodInfo_
};

$Object* allocate$LayoutFocusTraversalPolicy($Class* clazz) {
	return $of($alloc(LayoutFocusTraversalPolicy));
}

int32_t LayoutFocusTraversalPolicy::hashCode() {
	 return this->$SortingFocusTraversalPolicy::hashCode();
}

bool LayoutFocusTraversalPolicy::equals(Object$* arg0) {
	 return this->$SortingFocusTraversalPolicy::equals(arg0);
}

$Object* LayoutFocusTraversalPolicy::clone() {
	 return this->$SortingFocusTraversalPolicy::clone();
}

$String* LayoutFocusTraversalPolicy::toString() {
	 return this->$SortingFocusTraversalPolicy::toString();
}

void LayoutFocusTraversalPolicy::finalize() {
	this->$SortingFocusTraversalPolicy::finalize();
}

$SwingDefaultFocusTraversalPolicy* LayoutFocusTraversalPolicy::fitnessTestPolicy = nullptr;

void LayoutFocusTraversalPolicy::init$() {
	$SortingFocusTraversalPolicy::init$($$new($LayoutComparator));
}

void LayoutFocusTraversalPolicy::init$($Comparator* c) {
	$SortingFocusTraversalPolicy::init$(c);
}

$Component* LayoutFocusTraversalPolicy::getComponentAfter($Container* aContainer, $Component* aComponent) {
	$useLocalCurrentObjectStackCache();
	if (aContainer == nullptr || aComponent == nullptr) {
		$throwNew($IllegalArgumentException, "aContainer and aComponent cannot be null"_s);
	}
	$var($Comparator, comparator, getComparator());
	if ($instanceOf($LayoutComparator, comparator)) {
		$nc(($cast($LayoutComparator, comparator)))->setComponentOrientation($($nc(aContainer)->getComponentOrientation()));
	}
	return $SortingFocusTraversalPolicy::getComponentAfter(aContainer, aComponent);
}

$Component* LayoutFocusTraversalPolicy::getComponentBefore($Container* aContainer, $Component* aComponent) {
	$useLocalCurrentObjectStackCache();
	if (aContainer == nullptr || aComponent == nullptr) {
		$throwNew($IllegalArgumentException, "aContainer and aComponent cannot be null"_s);
	}
	$var($Comparator, comparator, getComparator());
	if ($instanceOf($LayoutComparator, comparator)) {
		$nc(($cast($LayoutComparator, comparator)))->setComponentOrientation($($nc(aContainer)->getComponentOrientation()));
	}
	return $SortingFocusTraversalPolicy::getComponentBefore(aContainer, aComponent);
}

$Component* LayoutFocusTraversalPolicy::getFirstComponent($Container* aContainer) {
	$useLocalCurrentObjectStackCache();
	if (aContainer == nullptr) {
		$throwNew($IllegalArgumentException, "aContainer cannot be null"_s);
	}
	$var($Comparator, comparator, getComparator());
	if ($instanceOf($LayoutComparator, comparator)) {
		$nc(($cast($LayoutComparator, comparator)))->setComponentOrientation($($nc(aContainer)->getComponentOrientation()));
	}
	return $SortingFocusTraversalPolicy::getFirstComponent(aContainer);
}

$Component* LayoutFocusTraversalPolicy::getLastComponent($Container* aContainer) {
	$useLocalCurrentObjectStackCache();
	if (aContainer == nullptr) {
		$throwNew($IllegalArgumentException, "aContainer cannot be null"_s);
	}
	$var($Comparator, comparator, getComparator());
	if ($instanceOf($LayoutComparator, comparator)) {
		$nc(($cast($LayoutComparator, comparator)))->setComponentOrientation($($nc(aContainer)->getComponentOrientation()));
	}
	return $SortingFocusTraversalPolicy::getLastComponent(aContainer);
}

bool LayoutFocusTraversalPolicy::accept($Component* aComponent) {
	$useLocalCurrentObjectStackCache();
	if (!$SortingFocusTraversalPolicy::accept(aComponent)) {
		return false;
	} else if ($SunToolkit::isInstanceOf($of(aComponent), "javax.swing.JTable"_s)) {
		return true;
	} else if ($SunToolkit::isInstanceOf($of(aComponent), "javax.swing.JComboBox"_s)) {
		$var($JComboBox, box, $cast($JComboBox, aComponent));
		return $nc($($cast($ComboBoxUI, $nc(box)->getUI())))->isFocusTraversable(box);
	} else if ($instanceOf($JComponent, aComponent)) {
		if ($SunToolkit::isInstanceOf($of(aComponent), "javax.swing.JToggleButton"_s)) {
			$var($ButtonModel, model, $nc(($cast($JToggleButton, aComponent)))->getModel());
			if (model != nullptr) {
				$var($ButtonGroup, group, model->getGroup());
				if (group != nullptr) {
					$var($Enumeration, elements, group->getElements());
					int32_t idx = 0;
					while ($nc(elements)->hasMoreElements()) {
						$var($AbstractButton, member, $cast($AbstractButton, elements->nextElement()));
						bool var$2 = $instanceOf($JToggleButton, member) && $nc(member)->isVisible();
						bool var$1 = var$2 && member->isDisplayable();
						bool var$0 = var$1 && member->isEnabled();
						if (var$0 && member->isFocusable()) {
							if ($equals(member, aComponent)) {
								return idx == 0;
							}
							++idx;
						}
					}
				}
			}
		}
		$var($JComponent, jComponent, $cast($JComponent, aComponent));
		$var($InputMap, inputMap, $nc(jComponent)->getInputMap($JComponent::WHEN_FOCUSED, false));
		while (inputMap != nullptr && inputMap->size() == 0) {
			$assign(inputMap, inputMap->getParent());
		}
		if (inputMap != nullptr) {
			return true;
		}
	}
	return $nc(LayoutFocusTraversalPolicy::fitnessTestPolicy)->accept(aComponent);
}

void LayoutFocusTraversalPolicy::writeObject($ObjectOutputStream* out) {
	$nc(out)->writeObject($(getComparator()));
	out->writeBoolean(getImplicitDownCycleTraversal());
}

void LayoutFocusTraversalPolicy::readObject($ObjectInputStream* in) {
	setComparator($cast($Comparator, $($nc(in)->readObject())));
	setImplicitDownCycleTraversal($nc(in)->readBoolean());
}

void clinit$LayoutFocusTraversalPolicy($Class* class$) {
	$assignStatic(LayoutFocusTraversalPolicy::fitnessTestPolicy, $new($SwingDefaultFocusTraversalPolicy));
}

LayoutFocusTraversalPolicy::LayoutFocusTraversalPolicy() {
}

$Class* LayoutFocusTraversalPolicy::load$($String* name, bool initialize) {
	$loadClass(LayoutFocusTraversalPolicy, name, initialize, &_LayoutFocusTraversalPolicy_ClassInfo_, clinit$LayoutFocusTraversalPolicy, allocate$LayoutFocusTraversalPolicy);
	return class$;
}

$Class* LayoutFocusTraversalPolicy::class$ = nullptr;

	} // swing
} // javax