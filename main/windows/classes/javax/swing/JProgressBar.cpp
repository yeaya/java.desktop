#include <javax/swing/JProgressBar.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Graphics.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/Format.h>
#include <java/text/NumberFormat.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/DefaultBoundedRangeModel.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JProgressBar$AccessibleJProgressBar.h>
#include <javax/swing/JProgressBar$ModelListener.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ProgressBarUI.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef ACCESSIBLE_VALUE_PROPERTY
#undef HORIZONTAL
#undef VERTICAL

using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Graphics = ::java::awt::Graphics;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Format = ::java::text::Format;
using $NumberFormat = ::java::text::NumberFormat;
using $EventListener = ::java::util::EventListener;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $DefaultBoundedRangeModel = ::javax::swing::DefaultBoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JProgressBar$AccessibleJProgressBar = ::javax::swing::JProgressBar$AccessibleJProgressBar;
using $JProgressBar$ModelListener = ::javax::swing::JProgressBar$ModelListener;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ProgressBarUI = ::javax::swing::plaf::ProgressBarUI;

namespace javax {
	namespace swing {

$NamedAttribute JProgressBar_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A component that displays an integer value."},
	{}
};

$NamedAttribute JProgressBar_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};
$CompoundAttribute _JProgressBar_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JProgressBar_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JProgressBar_Attribute_var$1},
	{}
};

$NamedAttribute JProgressBar_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "The AccessibleContext associated with this ProgressBar."},
	{}
};

$CompoundAttribute _JProgressBar_MethodAnnotations_getAccessibleContext8[] = {
	{"Ljava/beans/BeanProperty;", JProgressBar_Attribute_var$2},
	{}
};

$NamedAttribute JProgressBar_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JProgressBar_MethodAnnotations_getChangeListeners9[] = {
	{"Ljava/beans/BeanProperty;", JProgressBar_Attribute_var$3},
	{}
};

$NamedAttribute JProgressBar_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JProgressBar_MethodAnnotations_getPercentComplete14[] = {
	{"Ljava/beans/BeanProperty;", JProgressBar_Attribute_var$4},
	{}
};

$NamedAttribute JProgressBar_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "A string that specifies the name of the look-and-feel class."},
	{}
};

$CompoundAttribute _JProgressBar_MethodAnnotations_getUIClassID17[] = {
	{"Ljava/beans/BeanProperty;", JProgressBar_Attribute_var$5},
	{}
};

$NamedAttribute JProgressBar_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "Is the progress bar indeterminate (true) or normal (false)?"},
	{}
};

$CompoundAttribute _JProgressBar_MethodAnnotations_isIndeterminate20[] = {
	{"Ljava/beans/BeanProperty;", JProgressBar_Attribute_var$6},
	{}
};

$NamedAttribute JProgressBar_Attribute_var$7[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Whether the progress bar should paint its border."},
	{}
};

$CompoundAttribute _JProgressBar_MethodAnnotations_setBorderPainted25[] = {
	{"Ljava/beans/BeanProperty;", JProgressBar_Attribute_var$7},
	{}
};

$NamedAttribute JProgressBar_Attribute_var$8[] = {
	{"bound", 'Z', "false"},
	{"preferred", 'Z', "true"},
	{"description", 's', "The progress bar\'s maximum value."},
	{}
};

$CompoundAttribute _JProgressBar_MethodAnnotations_setMaximum27[] = {
	{"Ljava/beans/BeanProperty;", JProgressBar_Attribute_var$8},
	{}
};

$NamedAttribute JProgressBar_Attribute_var$9[] = {
	{"bound", 'Z', "false"},
	{"preferred", 'Z', "true"},
	{"description", 's', "The progress bar\'s minimum value."},
	{}
};

$CompoundAttribute _JProgressBar_MethodAnnotations_setMinimum28[] = {
	{"Ljava/beans/BeanProperty;", JProgressBar_Attribute_var$9},
	{}
};

$NamedAttribute JProgressBar_Attribute_var$10[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "The data model used by the JProgressBar."},
	{}
};

$CompoundAttribute _JProgressBar_MethodAnnotations_setModel29[] = {
	{"Ljava/beans/BeanProperty;", JProgressBar_Attribute_var$10},
	{}
};

$NamedAttribute JProgressBar_Attribute_var$11[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Set the progress bar\'s orientation."},
	{}
};

$CompoundAttribute _JProgressBar_MethodAnnotations_setOrientation30[] = {
	{"Ljava/beans/BeanProperty;", JProgressBar_Attribute_var$11},
	{}
};

$NamedAttribute JProgressBar_Attribute_var$12[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Specifies the progress string to paint"},
	{}
};

$CompoundAttribute _JProgressBar_MethodAnnotations_setString31[] = {
	{"Ljava/beans/BeanProperty;", JProgressBar_Attribute_var$12},
	{}
};

$NamedAttribute JProgressBar_Attribute_var$13[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Whether the progress bar should render a string."},
	{}
};

$CompoundAttribute _JProgressBar_MethodAnnotations_setStringPainted32[] = {
	{"Ljava/beans/BeanProperty;", JProgressBar_Attribute_var$13},
	{}
};

$NamedAttribute JProgressBar_Attribute_var$14[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
	{}
};

$CompoundAttribute _JProgressBar_MethodAnnotations_setUI33[] = {
	{"Ljava/beans/BeanProperty;", JProgressBar_Attribute_var$14},
	{}
};

$NamedAttribute JProgressBar_Attribute_var$15[] = {
	{"bound", 'Z', "false"},
	{"preferred", 'Z', "true"},
	{"description", 's', "The progress bar\'s current value."},
	{}
};

$CompoundAttribute _JProgressBar_MethodAnnotations_setValue34[] = {
	{"Ljava/beans/BeanProperty;", JProgressBar_Attribute_var$15},
	{}
};


$FieldInfo _JProgressBar_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JProgressBar, uiClassID)},
	{"orientation", "I", nullptr, $PROTECTED, $field(JProgressBar, orientation)},
	{"paintBorder", "Z", nullptr, $PROTECTED, $field(JProgressBar, paintBorder$)},
	{"model", "Ljavax/swing/BoundedRangeModel;", nullptr, $PROTECTED, $field(JProgressBar, model)},
	{"progressString", "Ljava/lang/String;", nullptr, $PROTECTED, $field(JProgressBar, progressString)},
	{"paintString", "Z", nullptr, $PROTECTED, $field(JProgressBar, paintString)},
	{"defaultMinimum", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JProgressBar, defaultMinimum)},
	{"defaultMaximum", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JProgressBar, defaultMaximum)},
	{"defaultOrientation", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JProgressBar, defaultOrientation)},
	{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PROTECTED | $TRANSIENT, $field(JProgressBar, changeEvent)},
	{"changeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(JProgressBar, changeListener)},
	{"format", "Ljava/text/Format;", nullptr, $PRIVATE | $TRANSIENT, $field(JProgressBar, format)},
	{"indeterminate", "Z", nullptr, $PRIVATE, $field(JProgressBar, indeterminate)},
	{}
};

$MethodInfo _JProgressBar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JProgressBar::*)()>(&JProgressBar::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JProgressBar::*)(int32_t)>(&JProgressBar::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(JProgressBar::*)(int32_t,int32_t)>(&JProgressBar::init$))},
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(JProgressBar::*)(int32_t,int32_t,int32_t)>(&JProgressBar::init$))},
	{"<init>", "(Ljavax/swing/BoundedRangeModel;)V", nullptr, $PUBLIC, $method(static_cast<void(JProgressBar::*)($BoundedRangeModel*)>(&JProgressBar::init$))},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"createChangeListener", "()Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"fireStateChanged", "()V", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JProgressBar_MethodAnnotations_getAccessibleContext8},
	{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JProgressBar_MethodAnnotations_getChangeListeners9},
	{"getMaximum", "()I", nullptr, $PUBLIC},
	{"getMinimum", "()I", nullptr, $PUBLIC},
	{"getModel", "()Ljavax/swing/BoundedRangeModel;", nullptr, $PUBLIC},
	{"getOrientation", "()I", nullptr, $PUBLIC},
	{"getPercentComplete", "()D", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JProgressBar_MethodAnnotations_getPercentComplete14},
	{"getString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/ProgressBarUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JProgressBar_MethodAnnotations_getUIClassID17},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"isBorderPainted", "()Z", nullptr, $PUBLIC},
	{"isIndeterminate", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JProgressBar_MethodAnnotations_isIndeterminate20},
	{"isStringPainted", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"setBorderPainted", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JProgressBar_MethodAnnotations_setBorderPainted25},
	{"setIndeterminate", "(Z)V", nullptr, $PUBLIC},
	{"setMaximum", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JProgressBar_MethodAnnotations_setMaximum27},
	{"setMinimum", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JProgressBar_MethodAnnotations_setMinimum28},
	{"setModel", "(Ljavax/swing/BoundedRangeModel;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JProgressBar_MethodAnnotations_setModel29},
	{"setOrientation", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JProgressBar_MethodAnnotations_setOrientation30},
	{"setString", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JProgressBar_MethodAnnotations_setString31},
	{"setStringPainted", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JProgressBar_MethodAnnotations_setStringPainted32},
	{"setUI", "(Ljavax/swing/plaf/ProgressBarUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JProgressBar_MethodAnnotations_setUI33},
	{"setValue", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JProgressBar_MethodAnnotations_setValue34},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JProgressBar::*)($ObjectOutputStream*)>(&JProgressBar::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JProgressBar_InnerClassesInfo_[] = {
	{"javax.swing.JProgressBar$AccessibleJProgressBar", "javax.swing.JProgressBar", "AccessibleJProgressBar", $PROTECTED},
	{"javax.swing.JProgressBar$ModelListener", "javax.swing.JProgressBar", "ModelListener", $PRIVATE},
	{}
};

$ClassInfo _JProgressBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JProgressBar",
	"javax.swing.JComponent",
	"javax.swing.SwingConstants,javax.accessibility.Accessible",
	_JProgressBar_FieldInfo_,
	_JProgressBar_MethodInfo_,
	nullptr,
	nullptr,
	_JProgressBar_InnerClassesInfo_,
	_JProgressBar_Annotations_,
	nullptr,
	"javax.swing.JProgressBar$AccessibleJProgressBar,javax.swing.JProgressBar$ModelListener"
};

$Object* allocate$JProgressBar($Class* clazz) {
	return $of($alloc(JProgressBar));
}

$String* JProgressBar::toString() {
	 return this->$JComponent::toString();
}

int32_t JProgressBar::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JProgressBar::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JProgressBar::clone() {
	 return this->$JComponent::clone();
}

void JProgressBar::finalize() {
	this->$JComponent::finalize();
}


$String* JProgressBar::uiClassID = nullptr;

void JProgressBar::init$() {
	JProgressBar::init$(JProgressBar::defaultOrientation);
}

void JProgressBar::init$(int32_t orient) {
	JProgressBar::init$(orient, JProgressBar::defaultMinimum, JProgressBar::defaultMaximum);
}

void JProgressBar::init$(int32_t min, int32_t max) {
	JProgressBar::init$(JProgressBar::defaultOrientation, min, max);
}

void JProgressBar::init$(int32_t orient, int32_t min, int32_t max) {
	$JComponent::init$();
	$set(this, changeEvent, nullptr);
	$set(this, changeListener, nullptr);
	setModel($$new($DefaultBoundedRangeModel, min, 0, min, max));
	updateUI();
	setOrientation(orient);
	setBorderPainted(true);
	setStringPainted(false);
	setString(nullptr);
	setIndeterminate(false);
}

void JProgressBar::init$($BoundedRangeModel* newModel) {
	$JComponent::init$();
	$set(this, changeEvent, nullptr);
	$set(this, changeListener, nullptr);
	setModel(newModel);
	updateUI();
	setOrientation(JProgressBar::defaultOrientation);
	setBorderPainted(true);
	setStringPainted(false);
	setString(nullptr);
	setIndeterminate(false);
}

int32_t JProgressBar::getOrientation() {
	return this->orientation;
}

void JProgressBar::setOrientation(int32_t newOrientation) {
	$useLocalCurrentObjectStackCache();
	if (this->orientation != newOrientation) {
		{
			int32_t oldOrientation = 0;
			switch (newOrientation) {
			case $SwingConstants::VERTICAL:
				{}
			case $SwingConstants::HORIZONTAL:
				{
					oldOrientation = this->orientation;
					this->orientation = newOrientation;
					firePropertyChange("orientation"_s, oldOrientation, newOrientation);
					if (this->accessibleContext != nullptr) {
						$init($AccessibleContext);
						$init($AccessibleState);
						$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, ((oldOrientation == $SwingConstants::VERTICAL) ? $of($AccessibleState::VERTICAL) : $of($AccessibleState::HORIZONTAL)), ((this->orientation == $SwingConstants::VERTICAL) ? $of($AccessibleState::VERTICAL) : $of($AccessibleState::HORIZONTAL)));
					}
					break;
				}
			default:
				{
					$throwNew($IllegalArgumentException, $$str({$$str(newOrientation), " is not a legal orientation"_s}));
				}
			}
		}
		revalidate();
	}
}

bool JProgressBar::isStringPainted() {
	return this->paintString;
}

void JProgressBar::setStringPainted(bool b) {
	bool oldValue = this->paintString;
	this->paintString = b;
	firePropertyChange("stringPainted"_s, oldValue, this->paintString);
	if (this->paintString != oldValue) {
		revalidate();
		repaint();
	}
}

$String* JProgressBar::getString() {
	if (this->progressString != nullptr) {
		return this->progressString;
	} else {
		if (this->format == nullptr) {
			$set(this, format, $NumberFormat::getPercentInstance());
		}
		return $nc(this->format)->format($($Double::valueOf(getPercentComplete())));
	}
}

void JProgressBar::setString($String* s) {
	$var($String, oldValue, this->progressString);
	$set(this, progressString, s);
	firePropertyChange("string"_s, $of(oldValue), $of(this->progressString));
	if (this->progressString == nullptr || oldValue == nullptr || !$nc(this->progressString)->equals(oldValue)) {
		repaint();
	}
}

double JProgressBar::getPercentComplete() {
	int32_t var$0 = $nc(this->model)->getMaximum();
	int64_t span = var$0 - $nc(this->model)->getMinimum();
	double currentValue = (double)$nc(this->model)->getValue();
	double pc = (currentValue - $nc(this->model)->getMinimum()) / span;
	return pc;
}

bool JProgressBar::isBorderPainted() {
	return this->paintBorder$;
}

void JProgressBar::setBorderPainted(bool b) {
	bool oldValue = this->paintBorder$;
	this->paintBorder$ = b;
	firePropertyChange("borderPainted"_s, oldValue, this->paintBorder$);
	if (this->paintBorder$ != oldValue) {
		repaint();
	}
}

void JProgressBar::paintBorder($Graphics* g) {
	if (isBorderPainted()) {
		$JComponent::paintBorder(g);
	}
}

$ComponentUI* JProgressBar::getUI() {
	return $cast($ProgressBarUI, this->ui);
}

void JProgressBar::setUI($ProgressBarUI* ui) {
	$JComponent::setUI(ui);
}

void JProgressBar::updateUI() {
	setUI($cast($ProgressBarUI, $($UIManager::getUI(this))));
}

$String* JProgressBar::getUIClassID() {
	return JProgressBar::uiClassID;
}

$ChangeListener* JProgressBar::createChangeListener() {
	return $new($JProgressBar$ModelListener, this);
}

void JProgressBar::addChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->add($ChangeListener::class$, l);
}

void JProgressBar::removeChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->remove($ChangeListener::class$, l);
}

$ChangeListenerArray* JProgressBar::getChangeListeners() {
	$load($ChangeListener);
	return $fcast($ChangeListenerArray, $nc(this->listenerList)->getListeners($ChangeListener::class$));
}

void JProgressBar::fireStateChanged() {
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

$BoundedRangeModel* JProgressBar::getModel() {
	return this->model;
}

void JProgressBar::setModel($BoundedRangeModel* newModel) {
	$useLocalCurrentObjectStackCache();
	$var($BoundedRangeModel, oldModel, getModel());
	if (newModel != oldModel) {
		if (oldModel != nullptr) {
			oldModel->removeChangeListener(this->changeListener);
			$set(this, changeListener, nullptr);
		}
		$set(this, model, newModel);
		if (newModel != nullptr) {
			$set(this, changeListener, createChangeListener());
			newModel->addChangeListener(this->changeListener);
		}
		if (this->accessibleContext != nullptr) {
			$init($AccessibleContext);
			$var($String, var$0, $AccessibleContext::ACCESSIBLE_VALUE_PROPERTY);
			$var($Object, var$1, ($of((oldModel == nullptr ? ($Integer*)nullptr : $Integer::valueOf($nc(oldModel)->getValue())))));
			$nc(this->accessibleContext)->firePropertyChange(var$0, var$1, (newModel == nullptr ? ($Integer*)nullptr : $($Integer::valueOf($nc(newModel)->getValue()))));
		}
		if (this->model != nullptr) {
			$nc(this->model)->setExtent(0);
		}
		repaint();
	}
}

int32_t JProgressBar::getValue() {
	return $nc($(getModel()))->getValue();
}

int32_t JProgressBar::getMinimum() {
	return $nc($(getModel()))->getMinimum();
}

int32_t JProgressBar::getMaximum() {
	return $nc($(getModel()))->getMaximum();
}

void JProgressBar::setValue(int32_t n) {
	$useLocalCurrentObjectStackCache();
	$var($BoundedRangeModel, brm, getModel());
	int32_t oldValue = $nc(brm)->getValue();
	brm->setValue(n);
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$var($String, var$0, $AccessibleContext::ACCESSIBLE_VALUE_PROPERTY);
		$var($Object, var$1, $of($Integer::valueOf(oldValue)));
		$nc(this->accessibleContext)->firePropertyChange(var$0, var$1, $($Integer::valueOf(brm->getValue())));
	}
}

void JProgressBar::setMinimum(int32_t n) {
	$nc($(getModel()))->setMinimum(n);
}

void JProgressBar::setMaximum(int32_t n) {
	$nc($(getModel()))->setMaximum(n);
}

void JProgressBar::setIndeterminate(bool newValue) {
	bool oldValue = this->indeterminate;
	this->indeterminate = newValue;
	firePropertyChange("indeterminate"_s, oldValue, this->indeterminate);
}

bool JProgressBar::isIndeterminate() {
	return this->indeterminate;
}

void JProgressBar::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JProgressBar::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JProgressBar::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, orientationString, this->orientation == $SwingConstants::HORIZONTAL ? "HORIZONTAL"_s : "VERTICAL"_s);
	$var($String, paintBorderString, this->paintBorder$ ? "true"_s : "false"_s);
	$var($String, progressStringString, this->progressString != nullptr ? this->progressString : ""_s);
	$var($String, paintStringString, this->paintString ? "true"_s : "false"_s);
	$var($String, indeterminateString, this->indeterminate ? "true"_s : "false"_s);
	return $str({$($JComponent::paramString()), ",orientation="_s, orientationString, ",paintBorder="_s, paintBorderString, ",paintString="_s, paintStringString, ",progressString="_s, progressStringString, ",indeterminateString="_s, indeterminateString});
}

$AccessibleContext* JProgressBar::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JProgressBar$AccessibleJProgressBar, this));
	}
	return this->accessibleContext;
}

JProgressBar::JProgressBar() {
}

void clinit$JProgressBar($Class* class$) {
	$assignStatic(JProgressBar::uiClassID, "ProgressBarUI"_s);
}

$Class* JProgressBar::load$($String* name, bool initialize) {
	$loadClass(JProgressBar, name, initialize, &_JProgressBar_ClassInfo_, clinit$JProgressBar, allocate$JProgressBar);
	return class$;
}

$Class* JProgressBar::class$ = nullptr;

	} // swing
} // javax