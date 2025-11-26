#include <javax/swing/JSlider.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Image.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/Dictionary.h>
#include <java/util/Enumeration.h>
#include <java/util/EventListener.h>
#include <java/util/Hashtable.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/DefaultBoundedRangeModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JSlider$1SmartHashtable.h>
#include <javax/swing/JSlider$AccessibleJSlider.h>
#include <javax/swing/JSlider$ModelListener.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SliderUI.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef ACCESSIBLE_VALUE_PROPERTY
#undef BUSY
#undef HORIZONTAL
#undef VERTICAL

using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Image = ::java::awt::Image;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
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
using $Dictionary = ::java::util::Dictionary;
using $Enumeration = ::java::util::Enumeration;
using $EventListener = ::java::util::EventListener;
using $Hashtable = ::java::util::Hashtable;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $DefaultBoundedRangeModel = ::javax::swing::DefaultBoundedRangeModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JLabel = ::javax::swing::JLabel;
using $JSlider$1SmartHashtable = ::javax::swing::JSlider$1SmartHashtable;
using $JSlider$AccessibleJSlider = ::javax::swing::JSlider$AccessibleJSlider;
using $JSlider$ModelListener = ::javax::swing::JSlider$ModelListener;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SliderUI = ::javax::swing::plaf::SliderUI;

namespace javax {
	namespace swing {

$NamedAttribute JSlider_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A component that supports selecting a integer value from a range."},
	{}
};

$NamedAttribute JSlider_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _JSlider_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JSlider_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JSlider_Attribute_var$1},
	{}
};

$NamedAttribute JSlider_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_getAccessibleContext12[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$2},
	{}
};

$NamedAttribute JSlider_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_getChangeListeners13[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$3},
	{}
};

$NamedAttribute JSlider_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_getUIClassID29[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$4},
	{}
};

$NamedAttribute JSlider_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "Size of the range covered by the knob."},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setExtent35[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$5},
	{}
};

$NamedAttribute JSlider_Attribute_var$6[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "If true reverses the slider values from their normal order"},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setInverted37[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$6},
	{}
};

$NamedAttribute JSlider_Attribute_var$7[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Specifies what labels will be drawn for any given value."},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setLabelTable38[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$7},
	{}
};

$NamedAttribute JSlider_Attribute_var$8[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Sets the number of values between major tick marks."},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setMajorTickSpacing39[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$8},
	{}
};

$NamedAttribute JSlider_Attribute_var$9[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The sliders maximum value."},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setMaximum40[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$9},
	{}
};

$NamedAttribute JSlider_Attribute_var$10[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The sliders minimum value."},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setMinimum41[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$10},
	{}
};

$NamedAttribute JSlider_Attribute_var$11[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Sets the number of values between minor tick marks."},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setMinorTickSpacing42[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$11},
	{}
};

$NamedAttribute JSlider_Attribute_var$12[] = {
	{"description", 's', "The sliders BoundedRangeModel."},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setModel43[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$12},
	{}
};

$Attribute JSlider_Attribute_var$14[] = {
	{'s', "JSlider.VERTICAL"},
	{'s', "JSlider.HORIZONTAL"},
	{'-'}
};

$NamedAttribute JSlider_Attribute_var$13[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"enumerationValues", '[', JSlider_Attribute_var$14},
	{"description", 's', "Set the scrollbars orientation to either VERTICAL or HORIZONTAL."},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setOrientation44[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$13},
	{}
};

$NamedAttribute JSlider_Attribute_var$15[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "If true labels are painted on the slider."},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setPaintLabels45[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$15},
	{}
};

$NamedAttribute JSlider_Attribute_var$16[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "If true tick marks are painted on the slider."},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setPaintTicks46[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$16},
	{}
};

$NamedAttribute JSlider_Attribute_var$17[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "If true, the track is painted on the slider."},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setPaintTrack47[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$17},
	{}
};

$NamedAttribute JSlider_Attribute_var$18[] = {
	{"description", 's', "If true snap the knob to the nearest tick mark."},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setSnapToTicks48[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$18},
	{}
};

$NamedAttribute JSlider_Attribute_var$19[] = {
	{"description", 's', "If true snap the knob to the nearest slider value."},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setSnapToValue49[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$19},
	{}
};

$NamedAttribute JSlider_Attribute_var$20[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the slider\'s LookAndFeel."},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setUI50[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$20},
	{}
};

$NamedAttribute JSlider_Attribute_var$21[] = {
	{"bound", 'Z', "false"},
	{"preferred", 'Z', "true"},
	{"description", 's', "The sliders current value."},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setValue51[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$21},
	{}
};

$NamedAttribute JSlider_Attribute_var$22[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "True if the slider knob is being dragged."},
	{}
};

$CompoundAttribute _JSlider_MethodAnnotations_setValueIsAdjusting52[] = {
	{"Ljava/beans/BeanProperty;", JSlider_Attribute_var$22},
	{}
};

$FieldInfo _JSlider_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JSlider, uiClassID)},
	{"paintTicks", "Z", nullptr, $PRIVATE, $field(JSlider, paintTicks)},
	{"paintTrack", "Z", nullptr, $PRIVATE, $field(JSlider, paintTrack)},
	{"paintLabels", "Z", nullptr, $PRIVATE, $field(JSlider, paintLabels)},
	{"isInverted", "Z", nullptr, $PRIVATE, $field(JSlider, isInverted)},
	{"sliderModel", "Ljavax/swing/BoundedRangeModel;", nullptr, $PROTECTED, $field(JSlider, sliderModel)},
	{"majorTickSpacing", "I", nullptr, $PROTECTED, $field(JSlider, majorTickSpacing)},
	{"minorTickSpacing", "I", nullptr, $PROTECTED, $field(JSlider, minorTickSpacing)},
	{"snapToTicks", "Z", nullptr, $PROTECTED, $field(JSlider, snapToTicks)},
	{"snapToValue", "Z", nullptr, 0, $field(JSlider, snapToValue)},
	{"orientation", "I", nullptr, $PROTECTED, $field(JSlider, orientation)},
	{"labelTable", "Ljava/util/Dictionary;", nullptr, $PRIVATE, $field(JSlider, labelTable)},
	{"changeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(JSlider, changeListener)},
	{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PROTECTED | $TRANSIENT, $field(JSlider, changeEvent)},
	{}
};

$MethodInfo _JSlider_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JSlider::*)()>(&JSlider::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JSlider::*)(int32_t)>(&JSlider::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(JSlider::*)(int32_t,int32_t)>(&JSlider::init$))},
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(JSlider::*)(int32_t,int32_t,int32_t)>(&JSlider::init$))},
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(JSlider::*)(int32_t,int32_t,int32_t,int32_t)>(&JSlider::init$))},
	{"<init>", "(Ljavax/swing/BoundedRangeModel;)V", nullptr, $PUBLIC, $method(static_cast<void(JSlider::*)($BoundedRangeModel*)>(&JSlider::init$))},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"checkOrientation", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JSlider::*)(int32_t)>(&JSlider::checkOrientation))},
	{"createChangeListener", "()Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"createStandardLabels", "(I)Ljava/util/Hashtable;", "(I)Ljava/util/Hashtable<Ljava/lang/Integer;Ljavax/swing/JComponent;>;", $PUBLIC},
	{"createStandardLabels", "(II)Ljava/util/Hashtable;", "(II)Ljava/util/Hashtable<Ljava/lang/Integer;Ljavax/swing/JComponent;>;", $PUBLIC},
	{"fireStateChanged", "()V", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_getAccessibleContext12},
	{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_getChangeListeners13},
	{"getExtent", "()I", nullptr, $PUBLIC},
	{"getInverted", "()Z", nullptr, $PUBLIC},
	{"getLabelTable", "()Ljava/util/Dictionary;", nullptr, $PUBLIC},
	{"getMajorTickSpacing", "()I", nullptr, $PUBLIC},
	{"getMaximum", "()I", nullptr, $PUBLIC},
	{"getMinimum", "()I", nullptr, $PUBLIC},
	{"getMinorTickSpacing", "()I", nullptr, $PUBLIC},
	{"getModel", "()Ljavax/swing/BoundedRangeModel;", nullptr, $PUBLIC},
	{"getOrientation", "()I", nullptr, $PUBLIC},
	{"getPaintLabels", "()Z", nullptr, $PUBLIC},
	{"getPaintTicks", "()Z", nullptr, $PUBLIC},
	{"getPaintTrack", "()Z", nullptr, $PUBLIC},
	{"getSnapToTicks", "()Z", nullptr, $PUBLIC},
	{"getSnapToValue", "()Z", nullptr, 0},
	{"getUI", "()Ljavax/swing/plaf/SliderUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_getUIClassID29},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC},
	{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"setExtent", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setExtent35},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setInverted", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setInverted37},
	{"setLabelTable", "(Ljava/util/Dictionary;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setLabelTable38},
	{"setMajorTickSpacing", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setMajorTickSpacing39},
	{"setMaximum", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setMaximum40},
	{"setMinimum", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setMinimum41},
	{"setMinorTickSpacing", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setMinorTickSpacing42},
	{"setModel", "(Ljavax/swing/BoundedRangeModel;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setModel43},
	{"setOrientation", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setOrientation44},
	{"setPaintLabels", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setPaintLabels45},
	{"setPaintTicks", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setPaintTicks46},
	{"setPaintTrack", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setPaintTrack47},
	{"setSnapToTicks", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setSnapToTicks48},
	{"setSnapToValue", "(Z)V", nullptr, 0, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setSnapToValue49},
	{"setUI", "(Ljavax/swing/plaf/SliderUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setUI50},
	{"setValue", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setValue51},
	{"setValueIsAdjusting", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSlider_MethodAnnotations_setValueIsAdjusting52},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateLabelSizes", "()V", nullptr, $PRIVATE, $method(static_cast<void(JSlider::*)()>(&JSlider::updateLabelSizes))},
	{"updateLabelUIs", "()V", nullptr, $PROTECTED},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JSlider::*)($ObjectOutputStream*)>(&JSlider::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JSlider_InnerClassesInfo_[] = {
	{"javax.swing.JSlider$AccessibleJSlider", "javax.swing.JSlider", "AccessibleJSlider", $PROTECTED},
	{"javax.swing.JSlider$ModelListener", "javax.swing.JSlider", "ModelListener", $PRIVATE},
	{"javax.swing.JSlider$1SmartHashtable", nullptr, "SmartHashtable", 0},
	{}
};

$ClassInfo _JSlider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JSlider",
	"javax.swing.JComponent",
	"javax.swing.SwingConstants,javax.accessibility.Accessible",
	_JSlider_FieldInfo_,
	_JSlider_MethodInfo_,
	nullptr,
	nullptr,
	_JSlider_InnerClassesInfo_,
	_JSlider_Annotations_,
	nullptr,
	"javax.swing.JSlider$AccessibleJSlider,javax.swing.JSlider$ModelListener,javax.swing.JSlider$1SmartHashtable,javax.swing.JSlider$1SmartHashtable$LabelUIResource"
};

$Object* allocate$JSlider($Class* clazz) {
	return $of($alloc(JSlider));
}

$String* JSlider::toString() {
	 return this->$JComponent::toString();
}

int32_t JSlider::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JSlider::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JSlider::clone() {
	 return this->$JComponent::clone();
}

void JSlider::finalize() {
	this->$JComponent::finalize();
}

$String* JSlider::uiClassID = nullptr;

void JSlider::checkOrientation(int32_t orientation) {
	switch (orientation) {
	case $SwingConstants::VERTICAL:
		{}
	case $SwingConstants::HORIZONTAL:
		{
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "orientation must be one of: VERTICAL, HORIZONTAL"_s);
		}
	}
}

void JSlider::init$() {
	JSlider::init$($SwingConstants::HORIZONTAL, 0, 100, 50);
}

void JSlider::init$(int32_t orientation) {
	JSlider::init$(orientation, 0, 100, 50);
}

void JSlider::init$(int32_t min, int32_t max) {
	JSlider::init$($SwingConstants::HORIZONTAL, min, max, (min + max) / 2);
}

void JSlider::init$(int32_t min, int32_t max, int32_t value) {
	JSlider::init$($SwingConstants::HORIZONTAL, min, max, value);
}

void JSlider::init$(int32_t orientation, int32_t min, int32_t max, int32_t value) {
	$JComponent::init$();
	this->paintTicks = false;
	this->paintTrack = true;
	this->paintLabels = false;
	this->isInverted = false;
	this->snapToTicks = false;
	this->snapToValue = true;
	$set(this, changeListener, createChangeListener());
	$set(this, changeEvent, nullptr);
	checkOrientation(orientation);
	this->orientation = orientation;
	setModel($$new($DefaultBoundedRangeModel, value, 0, min, max));
	updateUI();
}

void JSlider::init$($BoundedRangeModel* brm) {
	$JComponent::init$();
	this->paintTicks = false;
	this->paintTrack = true;
	this->paintLabels = false;
	this->isInverted = false;
	this->snapToTicks = false;
	this->snapToValue = true;
	$set(this, changeListener, createChangeListener());
	$set(this, changeEvent, nullptr);
	this->orientation = JSlider::HORIZONTAL;
	setModel(brm);
	updateUI();
}

$ComponentUI* JSlider::getUI() {
	return $cast($SliderUI, this->ui);
}

void JSlider::setUI($SliderUI* ui) {
	$JComponent::setUI(ui);
}

void JSlider::updateUI() {
	setUI($cast($SliderUI, $($UIManager::getUI(this))));
	updateLabelUIs();
}

$String* JSlider::getUIClassID() {
	return JSlider::uiClassID;
}

$ChangeListener* JSlider::createChangeListener() {
	return $new($JSlider$ModelListener, this);
}

void JSlider::addChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->add($ChangeListener::class$, l);
}

void JSlider::removeChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->remove($ChangeListener::class$, l);
}

$ChangeListenerArray* JSlider::getChangeListeners() {
	$load($ChangeListener);
	return $fcast($ChangeListenerArray, $nc(this->listenerList)->getListeners($ChangeListener::class$));
}

void JSlider::fireStateChanged() {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ChangeListener);
		if ($equals(listeners->get(i), $ChangeListener::class$)) {
			if (this->changeEvent == nullptr) {
				$set(this, changeEvent, $new($ChangeEvent, this));
			}
			$nc(($cast($ChangeListener, listeners->get(i + 1))))->stateChanged(this->changeEvent);
		}
	}
}

$BoundedRangeModel* JSlider::getModel() {
	return this->sliderModel;
}

void JSlider::setModel($BoundedRangeModel* newModel) {
	$useLocalCurrentObjectStackCache();
	$var($BoundedRangeModel, oldModel, getModel());
	if (oldModel != nullptr) {
		oldModel->removeChangeListener(this->changeListener);
	}
	$set(this, sliderModel, newModel);
	if (newModel != nullptr) {
		newModel->addChangeListener(this->changeListener);
	}
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$var($String, var$0, $AccessibleContext::ACCESSIBLE_VALUE_PROPERTY);
		$var($Object, var$1, ($of((oldModel == nullptr ? ($Integer*)nullptr : $Integer::valueOf($nc(oldModel)->getValue())))));
		$nc(this->accessibleContext)->firePropertyChange(var$0, var$1, (newModel == nullptr ? ($Integer*)nullptr : $($Integer::valueOf($nc(newModel)->getValue()))));
	}
	firePropertyChange("model"_s, $of(oldModel), $of(this->sliderModel));
}

int32_t JSlider::getValue() {
	return $nc($(getModel()))->getValue();
}

void JSlider::setValue(int32_t n) {
	$var($BoundedRangeModel, m, getModel());
	int32_t oldValue = $nc(m)->getValue();
	if (oldValue == n) {
		return;
	}
	m->setValue(n);
}

int32_t JSlider::getMinimum() {
	return $nc($(getModel()))->getMinimum();
}

void JSlider::setMinimum(int32_t minimum) {
	$useLocalCurrentObjectStackCache();
	int32_t oldMin = $nc($(getModel()))->getMinimum();
	$nc($(getModel()))->setMinimum(minimum);
	$var($String, var$0, "minimum"_s);
	$var($Object, var$1, $of($Integer::valueOf(oldMin)));
	firePropertyChange(var$0, var$1, $($of($Integer::valueOf(minimum))));
}

int32_t JSlider::getMaximum() {
	return $nc($(getModel()))->getMaximum();
}

void JSlider::setMaximum(int32_t maximum) {
	$useLocalCurrentObjectStackCache();
	int32_t oldMax = $nc($(getModel()))->getMaximum();
	$nc($(getModel()))->setMaximum(maximum);
	$var($String, var$0, "maximum"_s);
	$var($Object, var$1, $of($Integer::valueOf(oldMax)));
	firePropertyChange(var$0, var$1, $($of($Integer::valueOf(maximum))));
}

bool JSlider::getValueIsAdjusting() {
	return $nc($(getModel()))->getValueIsAdjusting();
}

void JSlider::setValueIsAdjusting(bool b) {
	$var($BoundedRangeModel, m, getModel());
	bool oldValue = $nc(m)->getValueIsAdjusting();
	m->setValueIsAdjusting(b);
	if ((oldValue != b) && (this->accessibleContext != nullptr)) {
		$init($AccessibleContext);
		$init($AccessibleState);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, ((oldValue) ? $of($AccessibleState::BUSY) : ($Object*)nullptr), ((b) ? $of($AccessibleState::BUSY) : ($Object*)nullptr));
	}
}

int32_t JSlider::getExtent() {
	return $nc($(getModel()))->getExtent();
}

void JSlider::setExtent(int32_t extent) {
	$nc($(getModel()))->setExtent(extent);
}

int32_t JSlider::getOrientation() {
	return this->orientation;
}

void JSlider::setOrientation(int32_t orientation) {
	checkOrientation(orientation);
	int32_t oldValue = this->orientation;
	this->orientation = orientation;
	firePropertyChange("orientation"_s, oldValue, orientation);
	if ((oldValue != orientation) && (this->accessibleContext != nullptr)) {
		$init($AccessibleContext);
		$init($AccessibleState);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, ((oldValue == $SwingConstants::VERTICAL) ? $of($AccessibleState::VERTICAL) : $of($AccessibleState::HORIZONTAL)), ((orientation == $SwingConstants::VERTICAL) ? $of($AccessibleState::VERTICAL) : $of($AccessibleState::HORIZONTAL)));
	}
	if (orientation != oldValue) {
		revalidate();
	}
}

void JSlider::setFont($Font* font) {
	$JComponent::setFont(font);
	updateLabelSizes();
}

bool JSlider::imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (!isShowing()) {
		return false;
	}
	$var($Enumeration, elements, $nc(this->labelTable)->elements());
	while ($nc(elements)->hasMoreElements()) {
		$var($Component, component, $cast($Component, elements->nextElement()));
		if ($instanceOf($JLabel, component)) {
			$var($JLabel, label, $cast($JLabel, component));
			bool var$0 = $SwingUtilities::doesIconReferenceImage($($nc(label)->getIcon()), img);
			if (var$0 || $SwingUtilities::doesIconReferenceImage($($nc(label)->getDisabledIcon()), img)) {
				return $JComponent::imageUpdate(img, infoflags, x, y, w, h);
			}
		}
	}
	return false;
}

$Dictionary* JSlider::getLabelTable() {
	return this->labelTable;
}

void JSlider::setLabelTable($Dictionary* labels) {
	$var($Dictionary, oldTable, this->labelTable);
	$set(this, labelTable, labels);
	updateLabelUIs();
	firePropertyChange("labelTable"_s, $of(oldTable), $of(this->labelTable));
	if (labels != oldTable) {
		revalidate();
		repaint();
	}
}

void JSlider::updateLabelUIs() {
	$useLocalCurrentObjectStackCache();
	$var($Dictionary, labelTable, getLabelTable());
	if (labelTable == nullptr) {
		return;
	}
	$var($Enumeration, labels, $nc(labelTable)->keys());
	while ($nc(labels)->hasMoreElements()) {
		$var($JComponent, component, $cast($JComponent, labelTable->get($(labels->nextElement()))));
		$nc(component)->updateUI();
		component->setSize($(component->getPreferredSize()));
	}
}

void JSlider::updateLabelSizes() {
	$useLocalCurrentObjectStackCache();
	$var($Dictionary, labelTable, getLabelTable());
	if (labelTable != nullptr) {
		$var($Enumeration, labels, labelTable->elements());
		while ($nc(labels)->hasMoreElements()) {
			$var($JComponent, component, $cast($JComponent, labels->nextElement()));
			$nc(component)->setSize($(component->getPreferredSize()));
		}
	}
}

$Hashtable* JSlider::createStandardLabels(int32_t increment) {
	return createStandardLabels(increment, getMinimum());
}

$Hashtable* JSlider::createStandardLabels(int32_t increment, int32_t start) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = start > getMaximum();
	if (var$0 || start < getMinimum()) {
		$throwNew($IllegalArgumentException, "Slider label start point out of range."_s);
	}
	if (increment <= 0) {
		$throwNew($IllegalArgumentException, "Label incremement must be > 0"_s);
	}
	{
	}
	$var($JSlider$1SmartHashtable, table, $new($JSlider$1SmartHashtable, this, increment, start));
	$var($Dictionary, labelTable, getLabelTable());
	if (labelTable != nullptr && ($instanceOf($PropertyChangeListener, labelTable))) {
		removePropertyChangeListener($cast($PropertyChangeListener, labelTable));
	}
	addPropertyChangeListener(table);
	return table;
}

bool JSlider::getInverted() {
	return this->isInverted;
}

void JSlider::setInverted(bool b) {
	bool oldValue = this->isInverted;
	this->isInverted = b;
	firePropertyChange("inverted"_s, oldValue, this->isInverted);
	if (b != oldValue) {
		repaint();
	}
}

int32_t JSlider::getMajorTickSpacing() {
	return this->majorTickSpacing;
}

void JSlider::setMajorTickSpacing(int32_t n) {
	int32_t oldValue = this->majorTickSpacing;
	this->majorTickSpacing = n;
	bool var$0 = this->labelTable == nullptr && getMajorTickSpacing() > 0;
	if (var$0 && getPaintLabels()) {
		setLabelTable($(createStandardLabels(getMajorTickSpacing())));
	}
	firePropertyChange("majorTickSpacing"_s, oldValue, this->majorTickSpacing);
	if (this->majorTickSpacing != oldValue && getPaintTicks()) {
		repaint();
	}
}

int32_t JSlider::getMinorTickSpacing() {
	return this->minorTickSpacing;
}

void JSlider::setMinorTickSpacing(int32_t n) {
	int32_t oldValue = this->minorTickSpacing;
	this->minorTickSpacing = n;
	firePropertyChange("minorTickSpacing"_s, oldValue, this->minorTickSpacing);
	if (this->minorTickSpacing != oldValue && getPaintTicks()) {
		repaint();
	}
}

bool JSlider::getSnapToTicks() {
	return this->snapToTicks;
}

bool JSlider::getSnapToValue() {
	return this->snapToValue;
}

void JSlider::setSnapToTicks(bool b) {
	bool oldValue = this->snapToTicks;
	this->snapToTicks = b;
	firePropertyChange("snapToTicks"_s, oldValue, this->snapToTicks);
}

void JSlider::setSnapToValue(bool b) {
	bool oldValue = this->snapToValue;
	this->snapToValue = b;
	firePropertyChange("snapToValue"_s, oldValue, this->snapToValue);
}

bool JSlider::getPaintTicks() {
	return this->paintTicks;
}

void JSlider::setPaintTicks(bool b) {
	bool oldValue = this->paintTicks;
	this->paintTicks = b;
	firePropertyChange("paintTicks"_s, oldValue, this->paintTicks);
	if (this->paintTicks != oldValue) {
		revalidate();
		repaint();
	}
}

bool JSlider::getPaintTrack() {
	return this->paintTrack;
}

void JSlider::setPaintTrack(bool b) {
	bool oldValue = this->paintTrack;
	this->paintTrack = b;
	firePropertyChange("paintTrack"_s, oldValue, this->paintTrack);
	if (this->paintTrack != oldValue) {
		repaint();
	}
}

bool JSlider::getPaintLabels() {
	return this->paintLabels;
}

void JSlider::setPaintLabels(bool b) {
	bool oldValue = this->paintLabels;
	this->paintLabels = b;
	if (this->labelTable == nullptr && getMajorTickSpacing() > 0) {
		setLabelTable($(createStandardLabels(getMajorTickSpacing())));
	}
	firePropertyChange("paintLabels"_s, oldValue, this->paintLabels);
	if (this->paintLabels != oldValue) {
		revalidate();
		repaint();
	}
}

void JSlider::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JSlider::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JSlider::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, paintTicksString, this->paintTicks ? "true"_s : "false"_s);
	$var($String, paintTrackString, this->paintTrack ? "true"_s : "false"_s);
	$var($String, paintLabelsString, this->paintLabels ? "true"_s : "false"_s);
	$var($String, isInvertedString, this->isInverted ? "true"_s : "false"_s);
	$var($String, snapToTicksString, this->snapToTicks ? "true"_s : "false"_s);
	$var($String, snapToValueString, this->snapToValue ? "true"_s : "false"_s);
	$var($String, orientationString, this->orientation == $SwingConstants::HORIZONTAL ? "HORIZONTAL"_s : "VERTICAL"_s);
	return $str({$($JComponent::paramString()), ",isInverted="_s, isInvertedString, ",majorTickSpacing="_s, $$str(this->majorTickSpacing), ",minorTickSpacing="_s, $$str(this->minorTickSpacing), ",orientation="_s, orientationString, ",paintLabels="_s, paintLabelsString, ",paintTicks="_s, paintTicksString, ",paintTrack="_s, paintTrackString, ",snapToTicks="_s, 
	snapToTicksString, ",snapToValue="_s, snapToValueString});
}

$AccessibleContext* JSlider::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JSlider$AccessibleJSlider, this));
	}
	return this->accessibleContext;
}

JSlider::JSlider() {
}

void clinit$JSlider($Class* class$) {
	$assignStatic(JSlider::uiClassID, "SliderUI"_s);
}

$Class* JSlider::load$($String* name, bool initialize) {
	$loadClass(JSlider, name, initialize, &_JSlider_ClassInfo_, clinit$JSlider, allocate$JSlider);
	return class$;
}

$Class* JSlider::class$ = nullptr;

	} // swing
} // javax