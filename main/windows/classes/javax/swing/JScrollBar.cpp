#include <javax/swing/JScrollBar.h>

#include <java/awt/Adjustable.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/AdjustmentListener.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/DefaultBoundedRangeModel.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar$AccessibleJScrollBar.h>
#include <javax/swing/JScrollBar$ModelListener.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollBarUI.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef ACCESSIBLE_VALUE_PROPERTY
#undef BUSY
#undef HORIZONTAL
#undef MAX_VALUE
#undef VERTICAL

using $ComponentArray = $Array<::java::awt::Component>;
using $AdjustmentListenerArray = $Array<::java::awt::event::AdjustmentListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $Adjustable = ::java::awt::Adjustable;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $AdjustmentListener = ::java::awt::event::AdjustmentListener;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Short = ::java::lang::Short;
using $EventListener = ::java::util::EventListener;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $DefaultBoundedRangeModel = ::javax::swing::DefaultBoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JScrollBar$AccessibleJScrollBar = ::javax::swing::JScrollBar$AccessibleJScrollBar;
using $JScrollBar$ModelListener = ::javax::swing::JScrollBar$ModelListener;
using $UIManager = ::javax::swing::UIManager;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollBarUI = ::javax::swing::plaf::ScrollBarUI;

namespace javax {
	namespace swing {

$NamedAttribute JScrollBar_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A component that helps determine the visible content range of an area."},
	{}
};

$NamedAttribute JScrollBar_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};
$CompoundAttribute _JScrollBar_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JScrollBar_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JScrollBar_Attribute_var$1},
	{}
};

$NamedAttribute JScrollBar_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JScrollBar_MethodAnnotations_getAccessibleContext7[] = {
	{"Ljava/beans/BeanProperty;", JScrollBar_Attribute_var$2},
	{}
};

$NamedAttribute JScrollBar_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JScrollBar_MethodAnnotations_getAdjustmentListeners8[] = {
	{"Ljava/beans/BeanProperty;", JScrollBar_Attribute_var$3},
	{}
};

$NamedAttribute JScrollBar_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JScrollBar_MethodAnnotations_getUIClassID18[] = {
	{"Ljava/beans/BeanProperty;", JScrollBar_Attribute_var$4},
	{}
};

$NamedAttribute JScrollBar_Attribute_var$5[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The scrollbar\'s block increment."},
	{}
};

$CompoundAttribute _JScrollBar_MethodAnnotations_setBlockIncrement26[] = {
	{"Ljava/beans/BeanProperty;", JScrollBar_Attribute_var$5},
	{}
};

$NamedAttribute JScrollBar_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{"preferred", 'Z', "true"},
	{"description", 's', "The scrollbar\'s maximum value."},
	{}
};

$CompoundAttribute _JScrollBar_MethodAnnotations_setMaximum28[] = {
	{"Ljava/beans/BeanProperty;", JScrollBar_Attribute_var$6},
	{}
};

$NamedAttribute JScrollBar_Attribute_var$7[] = {
	{"bound", 'Z', "false"},
	{"preferred", 'Z', "true"},
	{"description", 's', "The scrollbar\'s minimum value."},
	{}
};

$CompoundAttribute _JScrollBar_MethodAnnotations_setMinimum29[] = {
	{"Ljava/beans/BeanProperty;", JScrollBar_Attribute_var$7},
	{}
};

$NamedAttribute JScrollBar_Attribute_var$8[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "The scrollbar\'s BoundedRangeModel."},
	{}
};

$CompoundAttribute _JScrollBar_MethodAnnotations_setModel30[] = {
	{"Ljava/beans/BeanProperty;", JScrollBar_Attribute_var$8},
	{}
};

$Attribute JScrollBar_Attribute_var$10[] = {
	{'s', "JScrollBar.VERTICAL"},
	{'s', "JScrollBar.HORIZONTAL"},
	{'-'}
};

$NamedAttribute JScrollBar_Attribute_var$9[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"enumerationValues", '[', JScrollBar_Attribute_var$10},
	{"description", 's', "The scrollbar\'s orientation."},
	{}
};

$CompoundAttribute _JScrollBar_MethodAnnotations_setOrientation31[] = {
	{"Ljava/beans/BeanProperty;", JScrollBar_Attribute_var$9},
	{}
};

$NamedAttribute JScrollBar_Attribute_var$11[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the Component\'s LookAndFeel"},
	{}
};

$CompoundAttribute _JScrollBar_MethodAnnotations_setUI32[] = {
	{"Ljava/beans/BeanProperty;", JScrollBar_Attribute_var$11},
	{}
};

$NamedAttribute JScrollBar_Attribute_var$12[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The scrollbar\'s unit increment."},
	{}
};

$CompoundAttribute _JScrollBar_MethodAnnotations_setUnitIncrement33[] = {
	{"Ljava/beans/BeanProperty;", JScrollBar_Attribute_var$12},
	{}
};

$NamedAttribute JScrollBar_Attribute_var$13[] = {
	{"bound", 'Z', "false"},
	{"preferred", 'Z', "true"},
	{"description", 's', "The scrollbar\'s current value."},
	{}
};

$CompoundAttribute _JScrollBar_MethodAnnotations_setValue34[] = {
	{"Ljava/beans/BeanProperty;", JScrollBar_Attribute_var$13},
	{}
};

$NamedAttribute JScrollBar_Attribute_var$14[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "True if the scrollbar thumb is being dragged."},
	{}
};

$CompoundAttribute _JScrollBar_MethodAnnotations_setValueIsAdjusting35[] = {
	{"Ljava/beans/BeanProperty;", JScrollBar_Attribute_var$14},
	{}
};

$NamedAttribute JScrollBar_Attribute_var$15[] = {
	{"bound", 'Z', "false"},
	{"preferred", 'Z', "true"},
	{"description", 's', "The amount of the view that is currently visible."},
	{}
};

$CompoundAttribute _JScrollBar_MethodAnnotations_setVisibleAmount37[] = {
	{"Ljava/beans/BeanProperty;", JScrollBar_Attribute_var$15},
	{}
};


$FieldInfo _JScrollBar_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JScrollBar, uiClassID)},
	{"fwdAdjustmentEvents", "Ljavax/swing/event/ChangeListener;", nullptr, $PRIVATE, $field(JScrollBar, fwdAdjustmentEvents)},
	{"model", "Ljavax/swing/BoundedRangeModel;", nullptr, $PROTECTED, $field(JScrollBar, model)},
	{"orientation", "I", nullptr, $PROTECTED, $field(JScrollBar, orientation)},
	{"unitIncrement", "I", nullptr, $PROTECTED, $field(JScrollBar, unitIncrement)},
	{"blockIncrement", "I", nullptr, $PROTECTED, $field(JScrollBar, blockIncrement)},
	{}
};

$MethodInfo _JScrollBar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(IIIII)V", nullptr, $PUBLIC, $method(static_cast<void(JScrollBar::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&JScrollBar::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JScrollBar::*)(int32_t)>(&JScrollBar::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JScrollBar::*)()>(&JScrollBar::init$))},
	{"addAdjustmentListener", "(Ljava/awt/event/AdjustmentListener;)V", nullptr, $PUBLIC},
	{"checkOrientation", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JScrollBar::*)(int32_t)>(&JScrollBar::checkOrientation))},
	{"fireAdjustmentValueChanged", "(III)V", nullptr, $PROTECTED},
	{"fireAdjustmentValueChanged", "(IIIZ)V", nullptr, $PRIVATE, $method(static_cast<void(JScrollBar::*)(int32_t,int32_t,int32_t,bool)>(&JScrollBar::fireAdjustmentValueChanged))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollBar_MethodAnnotations_getAccessibleContext7},
	{"getAdjustmentListeners", "()[Ljava/awt/event/AdjustmentListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollBar_MethodAnnotations_getAdjustmentListeners8},
	{"getBlockIncrement", "(I)I", nullptr, $PUBLIC},
	{"getBlockIncrement", "()I", nullptr, $PUBLIC},
	{"getMaximum", "()I", nullptr, $PUBLIC},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimum", "()I", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getModel", "()Ljavax/swing/BoundedRangeModel;", nullptr, $PUBLIC},
	{"getOrientation", "()I", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/ScrollBarUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollBar_MethodAnnotations_getUIClassID18},
	{"getUnitIncrement", "(I)I", nullptr, $PUBLIC},
	{"getUnitIncrement", "()I", nullptr, $PUBLIC},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC},
	{"getVisibleAmount", "()I", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"removeAdjustmentListener", "(Ljava/awt/event/AdjustmentListener;)V", nullptr, $PUBLIC},
	{"setBlockIncrement", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollBar_MethodAnnotations_setBlockIncrement26},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setMaximum", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollBar_MethodAnnotations_setMaximum28},
	{"setMinimum", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollBar_MethodAnnotations_setMinimum29},
	{"setModel", "(Ljavax/swing/BoundedRangeModel;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollBar_MethodAnnotations_setModel30},
	{"setOrientation", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollBar_MethodAnnotations_setOrientation31},
	{"setUI", "(Ljavax/swing/plaf/ScrollBarUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollBar_MethodAnnotations_setUI32},
	{"setUnitIncrement", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollBar_MethodAnnotations_setUnitIncrement33},
	{"setValue", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollBar_MethodAnnotations_setValue34},
	{"setValueIsAdjusting", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollBar_MethodAnnotations_setValueIsAdjusting35},
	{"setValues", "(IIII)V", nullptr, $PUBLIC},
	{"setVisibleAmount", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollBar_MethodAnnotations_setVisibleAmount37},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JScrollBar::*)($ObjectOutputStream*)>(&JScrollBar::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JScrollBar_InnerClassesInfo_[] = {
	{"javax.swing.JScrollBar$AccessibleJScrollBar", "javax.swing.JScrollBar", "AccessibleJScrollBar", $PROTECTED},
	{"javax.swing.JScrollBar$ModelListener", "javax.swing.JScrollBar", "ModelListener", $PRIVATE},
	{}
};

$ClassInfo _JScrollBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JScrollBar",
	"javax.swing.JComponent",
	"java.awt.Adjustable,javax.accessibility.Accessible",
	_JScrollBar_FieldInfo_,
	_JScrollBar_MethodInfo_,
	nullptr,
	nullptr,
	_JScrollBar_InnerClassesInfo_,
	_JScrollBar_Annotations_,
	nullptr,
	"javax.swing.JScrollBar$AccessibleJScrollBar,javax.swing.JScrollBar$ModelListener"
};

$Object* allocate$JScrollBar($Class* clazz) {
	return $of($alloc(JScrollBar));
}

$String* JScrollBar::toString() {
	 return this->$JComponent::toString();
}

int32_t JScrollBar::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JScrollBar::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JScrollBar::clone() {
	 return this->$JComponent::clone();
}

void JScrollBar::finalize() {
	this->$JComponent::finalize();
}


$String* JScrollBar::uiClassID = nullptr;

void JScrollBar::checkOrientation(int32_t orientation) {
	switch (orientation) {
	case $Adjustable::VERTICAL:
		{}
	case $Adjustable::HORIZONTAL:
		{
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "orientation must be one of: VERTICAL, HORIZONTAL"_s);
		}
	}
}

void JScrollBar::init$(int32_t orientation, int32_t value, int32_t extent, int32_t min, int32_t max) {
	$JComponent::init$();
	$set(this, fwdAdjustmentEvents, $new($JScrollBar$ModelListener, this));
	checkOrientation(orientation);
	this->unitIncrement = 1;
	this->blockIncrement = (extent == 0) ? 1 : extent;
	this->orientation = orientation;
	$set(this, model, $new($DefaultBoundedRangeModel, value, extent, min, max));
	$nc(this->model)->addChangeListener(this->fwdAdjustmentEvents);
	setRequestFocusEnabled(false);
	updateUI();
}

void JScrollBar::init$(int32_t orientation) {
	JScrollBar::init$(orientation, 0, 10, 0, 100);
}

void JScrollBar::init$() {
	JScrollBar::init$($Adjustable::VERTICAL);
}

void JScrollBar::setUI($ScrollBarUI* ui) {
	$JComponent::setUI(ui);
}

$ComponentUI* JScrollBar::getUI() {
	return $cast($ScrollBarUI, this->ui);
}

void JScrollBar::updateUI() {
	setUI($cast($ScrollBarUI, $($UIManager::getUI(this))));
}

$String* JScrollBar::getUIClassID() {
	return JScrollBar::uiClassID;
}

int32_t JScrollBar::getOrientation() {
	return this->orientation;
}

void JScrollBar::setOrientation(int32_t orientation) {
	checkOrientation(orientation);
	int32_t oldValue = this->orientation;
	this->orientation = orientation;
	firePropertyChange("orientation"_s, oldValue, orientation);
	if ((oldValue != orientation) && (this->accessibleContext != nullptr)) {
		$init($AccessibleContext);
		$init($AccessibleState);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, ((oldValue == $Adjustable::VERTICAL) ? $of($AccessibleState::VERTICAL) : $of($AccessibleState::HORIZONTAL)), ((orientation == $Adjustable::VERTICAL) ? $of($AccessibleState::VERTICAL) : $of($AccessibleState::HORIZONTAL)));
	}
	if (orientation != oldValue) {
		revalidate();
	}
}

$BoundedRangeModel* JScrollBar::getModel() {
	return this->model;
}

void JScrollBar::setModel($BoundedRangeModel* newModel) {
	$var($Integer, oldValue, nullptr);
	$var($BoundedRangeModel, oldModel, this->model);
	if (this->model != nullptr) {
		$nc(this->model)->removeChangeListener(this->fwdAdjustmentEvents);
		$assign(oldValue, $Integer::valueOf($nc(this->model)->getValue()));
	}
	$set(this, model, newModel);
	if (this->model != nullptr) {
		$nc(this->model)->addChangeListener(this->fwdAdjustmentEvents);
	}
	firePropertyChange("model"_s, $of(oldModel), $of(this->model));
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_VALUE_PROPERTY, oldValue, $($Integer::valueOf($nc(this->model)->getValue())));
	}
}

int32_t JScrollBar::getUnitIncrement(int32_t direction) {
	return this->unitIncrement;
}

void JScrollBar::setUnitIncrement(int32_t unitIncrement) {
	int32_t oldValue = this->unitIncrement;
	this->unitIncrement = unitIncrement;
	firePropertyChange("unitIncrement"_s, oldValue, unitIncrement);
}

int32_t JScrollBar::getBlockIncrement(int32_t direction) {
	return this->blockIncrement;
}

void JScrollBar::setBlockIncrement(int32_t blockIncrement) {
	int32_t oldValue = this->blockIncrement;
	this->blockIncrement = blockIncrement;
	firePropertyChange("blockIncrement"_s, oldValue, blockIncrement);
}

int32_t JScrollBar::getUnitIncrement() {
	return this->unitIncrement;
}

int32_t JScrollBar::getBlockIncrement() {
	return this->blockIncrement;
}

int32_t JScrollBar::getValue() {
	return $nc($(getModel()))->getValue();
}

void JScrollBar::setValue(int32_t value) {
	$var($BoundedRangeModel, m, getModel());
	int32_t oldValue = $nc(m)->getValue();
	m->setValue(value);
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$var($String, var$0, $AccessibleContext::ACCESSIBLE_VALUE_PROPERTY);
		$var($Object, var$1, $of($Integer::valueOf(oldValue)));
		$nc(this->accessibleContext)->firePropertyChange(var$0, var$1, $($Integer::valueOf(m->getValue())));
	}
}

int32_t JScrollBar::getVisibleAmount() {
	return $nc($(getModel()))->getExtent();
}

void JScrollBar::setVisibleAmount(int32_t extent) {
	$nc($(getModel()))->setExtent(extent);
}

int32_t JScrollBar::getMinimum() {
	return $nc($(getModel()))->getMinimum();
}

void JScrollBar::setMinimum(int32_t minimum) {
	$nc($(getModel()))->setMinimum(minimum);
}

int32_t JScrollBar::getMaximum() {
	return $nc($(getModel()))->getMaximum();
}

void JScrollBar::setMaximum(int32_t maximum) {
	$nc($(getModel()))->setMaximum(maximum);
}

bool JScrollBar::getValueIsAdjusting() {
	return $nc($(getModel()))->getValueIsAdjusting();
}

void JScrollBar::setValueIsAdjusting(bool b) {
	$var($BoundedRangeModel, m, getModel());
	bool oldValue = $nc(m)->getValueIsAdjusting();
	m->setValueIsAdjusting(b);
	if ((oldValue != b) && (this->accessibleContext != nullptr)) {
		$init($AccessibleContext);
		$init($AccessibleState);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, ((oldValue) ? $of($AccessibleState::BUSY) : ($Object*)nullptr), ((b) ? $of($AccessibleState::BUSY) : ($Object*)nullptr));
	}
}

void JScrollBar::setValues(int32_t newValue, int32_t newExtent, int32_t newMin, int32_t newMax) {
	$var($BoundedRangeModel, m, getModel());
	int32_t oldValue = $nc(m)->getValue();
	m->setRangeProperties(newValue, newExtent, newMin, newMax, m->getValueIsAdjusting());
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$var($String, var$0, $AccessibleContext::ACCESSIBLE_VALUE_PROPERTY);
		$var($Object, var$1, $of($Integer::valueOf(oldValue)));
		$nc(this->accessibleContext)->firePropertyChange(var$0, var$1, $($Integer::valueOf(m->getValue())));
	}
}

void JScrollBar::addAdjustmentListener($AdjustmentListener* l) {
	$load($AdjustmentListener);
	$nc(this->listenerList)->add($AdjustmentListener::class$, l);
}

void JScrollBar::removeAdjustmentListener($AdjustmentListener* l) {
	$load($AdjustmentListener);
	$nc(this->listenerList)->remove($AdjustmentListener::class$, l);
}

$AdjustmentListenerArray* JScrollBar::getAdjustmentListeners() {
	$load($AdjustmentListener);
	return $fcast($AdjustmentListenerArray, $nc(this->listenerList)->getListeners($AdjustmentListener::class$));
}

void JScrollBar::fireAdjustmentValueChanged(int32_t id, int32_t type, int32_t value) {
	fireAdjustmentValueChanged(id, type, value, getValueIsAdjusting());
}

void JScrollBar::fireAdjustmentValueChanged(int32_t id, int32_t type, int32_t value, bool isAdjusting) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($AdjustmentEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($AdjustmentListener);
		if ($equals(listeners->get(i), $AdjustmentListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($AdjustmentEvent, this, id, type, value, isAdjusting));
			}
			$nc(($cast($AdjustmentListener, listeners->get(i + 1))))->adjustmentValueChanged(e);
		}
	}
}

$Dimension* JScrollBar::getMinimumSize() {
	$var($Dimension, pref, getPreferredSize());
	if (this->orientation == $Adjustable::VERTICAL) {
		return $new($Dimension, $nc(pref)->width, 5);
	} else {
		return $new($Dimension, 5, $nc(pref)->height);
	}
}

$Dimension* JScrollBar::getMaximumSize() {
	$var($Dimension, pref, getPreferredSize());
	if (getOrientation() == $Adjustable::VERTICAL) {
		return $new($Dimension, $nc(pref)->width, $Short::MAX_VALUE);
	} else {
		return $new($Dimension, $Short::MAX_VALUE, $nc(pref)->height);
	}
}

void JScrollBar::setEnabled(bool x) {
	$JComponent::setEnabled(x);
	$var($ComponentArray, children, getComponents());
	{
		$var($ComponentArray, arr$, children);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Component, child, arr$->get(i$));
			{
				$nc(child)->setEnabled(x);
			}
		}
	}
}

void JScrollBar::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JScrollBar::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JScrollBar::paramString() {
	$var($String, orientationString, this->orientation == $Adjustable::HORIZONTAL ? "HORIZONTAL"_s : "VERTICAL"_s);
	return $str({$($JComponent::paramString()), ",blockIncrement="_s, $$str(this->blockIncrement), ",orientation="_s, orientationString, ",unitIncrement="_s, $$str(this->unitIncrement)});
}

$AccessibleContext* JScrollBar::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JScrollBar$AccessibleJScrollBar, this));
	}
	return this->accessibleContext;
}

JScrollBar::JScrollBar() {
}

void clinit$JScrollBar($Class* class$) {
	$assignStatic(JScrollBar::uiClassID, "ScrollBarUI"_s);
}

$Class* JScrollBar::load$($String* name, bool initialize) {
	$loadClass(JScrollBar, name, initialize, &_JScrollBar_ClassInfo_, clinit$JScrollBar, allocate$JScrollBar);
	return class$;
}

$Class* JScrollBar::class$ = nullptr;

	} // swing
} // javax