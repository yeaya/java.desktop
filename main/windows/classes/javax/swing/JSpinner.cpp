#include <javax/swing/JSpinner.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <javax/swing/Action.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSpinner$AccessibleJSpinner.h>
#include <javax/swing/JSpinner$DateEditor.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner$DisabledAction.h>
#include <javax/swing/JSpinner$ListEditor.h>
#include <javax/swing/JSpinner$ModelListener.h>
#include <javax/swing/JSpinner$NumberEditor.h>
#include <javax/swing/SpinnerDateModel.h>
#include <javax/swing/SpinnerListModel.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SpinnerUI.h>
#include <jcpp.h>

#undef DISABLED_ACTION

using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $EventListener = ::java::util::EventListener;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;
using $Action = ::javax::swing::Action;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JPanel = ::javax::swing::JPanel;
using $JSpinner$AccessibleJSpinner = ::javax::swing::JSpinner$AccessibleJSpinner;
using $JSpinner$DateEditor = ::javax::swing::JSpinner$DateEditor;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JSpinner$DisabledAction = ::javax::swing::JSpinner$DisabledAction;
using $JSpinner$ListEditor = ::javax::swing::JSpinner$ListEditor;
using $JSpinner$ModelListener = ::javax::swing::JSpinner$ModelListener;
using $JSpinner$NumberEditor = ::javax::swing::JSpinner$NumberEditor;
using $SpinnerDateModel = ::javax::swing::SpinnerDateModel;
using $SpinnerListModel = ::javax::swing::SpinnerListModel;
using $SpinnerModel = ::javax::swing::SpinnerModel;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;
using $UIManager = ::javax::swing::UIManager;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SpinnerUI = ::javax::swing::plaf::SpinnerUI;

namespace javax {
	namespace swing {

$NamedAttribute JSpinner_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A single line input field that lets the user select a number or an object value from an ordered set."},
	{}
};

$NamedAttribute JSpinner_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _JSpinner_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JSpinner_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JSpinner_Attribute_var$1},
	{}
};

$NamedAttribute JSpinner_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JSpinner_MethodAnnotations_getAccessibleContext6[] = {
	{"Ljava/beans/BeanProperty;", JSpinner_Attribute_var$2},
	{}
};

$NamedAttribute JSpinner_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JSpinner_MethodAnnotations_getChangeListeners7[] = {
	{"Ljava/beans/BeanProperty;", JSpinner_Attribute_var$3},
	{}
};

$NamedAttribute JSpinner_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JSpinner_MethodAnnotations_getNextValue10[] = {
	{"Ljava/beans/BeanProperty;", JSpinner_Attribute_var$4},
	{}
};

$NamedAttribute JSpinner_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JSpinner_MethodAnnotations_getPreviousValue11[] = {
	{"Ljava/beans/BeanProperty;", JSpinner_Attribute_var$5},
	{}
};

$NamedAttribute JSpinner_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JSpinner_MethodAnnotations_getUIClassID13[] = {
	{"Ljava/beans/BeanProperty;", JSpinner_Attribute_var$6},
	{}
};

$NamedAttribute JSpinner_Attribute_var$7[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "JComponent that displays the current value of the model"},
	{}
};

$CompoundAttribute _JSpinner_MethodAnnotations_setEditor16[] = {
	{"Ljava/beans/BeanProperty;", JSpinner_Attribute_var$7},
	{}
};

$NamedAttribute JSpinner_Attribute_var$8[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Model that represents the value of this spinner."},
	{}
};

$CompoundAttribute _JSpinner_MethodAnnotations_setModel17[] = {
	{"Ljava/beans/BeanProperty;", JSpinner_Attribute_var$8},
	{}
};

$FieldInfo _JSpinner_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JSpinner, uiClassID)},
	{"DISABLED_ACTION", "Ljavax/swing/Action;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JSpinner, DISABLED_ACTION)},
	{"model", "Ljavax/swing/SpinnerModel;", nullptr, $PRIVATE, $field(JSpinner, model)},
	{"editor", "Ljavax/swing/JComponent;", nullptr, $PRIVATE, $field(JSpinner, editor)},
	{"modelListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PRIVATE, $field(JSpinner, modelListener)},
	{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PRIVATE | $TRANSIENT, $field(JSpinner, changeEvent)},
	{"editorExplicitlySet", "Z", nullptr, $PRIVATE, $field(JSpinner, editorExplicitlySet)},
	{}
};

$MethodInfo _JSpinner_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/SpinnerModel;)V", nullptr, $PUBLIC, $method(static_cast<void(JSpinner::*)($SpinnerModel*)>(&JSpinner::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JSpinner::*)()>(&JSpinner::init$))},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"commitEdit", "()V", nullptr, $PUBLIC, nullptr, "java.text.ParseException"},
	{"createEditor", "(Ljavax/swing/SpinnerModel;)Ljavax/swing/JComponent;", nullptr, $PROTECTED},
	{"fireStateChanged", "()V", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSpinner_MethodAnnotations_getAccessibleContext6},
	{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSpinner_MethodAnnotations_getChangeListeners7},
	{"getEditor", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC},
	{"getModel", "()Ljavax/swing/SpinnerModel;", nullptr, $PUBLIC},
	{"getNextValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSpinner_MethodAnnotations_getNextValue10},
	{"getPreviousValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSpinner_MethodAnnotations_getPreviousValue11},
	{"getUI", "()Ljavax/swing/plaf/SpinnerUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSpinner_MethodAnnotations_getUIClassID13},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"setEditor", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSpinner_MethodAnnotations_setEditor16},
	{"setModel", "(Ljavax/swing/SpinnerModel;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSpinner_MethodAnnotations_setModel17},
	{"setUI", "(Ljavax/swing/plaf/SpinnerUI;)V", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JSpinner::*)($ObjectOutputStream*)>(&JSpinner::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JSpinner_InnerClassesInfo_[] = {
	{"javax.swing.JSpinner$AccessibleJSpinner", "javax.swing.JSpinner", "AccessibleJSpinner", $PROTECTED},
	{"javax.swing.JSpinner$DisabledAction", "javax.swing.JSpinner", "DisabledAction", $PRIVATE | $STATIC},
	{"javax.swing.JSpinner$ListEditor", "javax.swing.JSpinner", "ListEditor", $PUBLIC | $STATIC},
	{"javax.swing.JSpinner$NumberEditor", "javax.swing.JSpinner", "NumberEditor", $PUBLIC | $STATIC},
	{"javax.swing.JSpinner$NumberEditorFormatter", "javax.swing.JSpinner", "NumberEditorFormatter", $PRIVATE | $STATIC},
	{"javax.swing.JSpinner$DateEditor", "javax.swing.JSpinner", "DateEditor", $PUBLIC | $STATIC},
	{"javax.swing.JSpinner$DateEditorFormatter", "javax.swing.JSpinner", "DateEditorFormatter", $PRIVATE | $STATIC},
	{"javax.swing.JSpinner$DefaultEditor", "javax.swing.JSpinner", "DefaultEditor", $PUBLIC | $STATIC},
	{"javax.swing.JSpinner$ModelListener", "javax.swing.JSpinner", "ModelListener", $PRIVATE},
	{}
};

$ClassInfo _JSpinner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JSpinner",
	"javax.swing.JComponent",
	"javax.accessibility.Accessible",
	_JSpinner_FieldInfo_,
	_JSpinner_MethodInfo_,
	nullptr,
	nullptr,
	_JSpinner_InnerClassesInfo_,
	_JSpinner_Annotations_,
	nullptr,
	"javax.swing.JSpinner$AccessibleJSpinner,javax.swing.JSpinner$DisabledAction,javax.swing.JSpinner$ListEditor,javax.swing.JSpinner$ListEditor$ListFormatter,javax.swing.JSpinner$ListEditor$ListFormatter$Filter,javax.swing.JSpinner$NumberEditor,javax.swing.JSpinner$NumberEditorFormatter,javax.swing.JSpinner$DateEditor,javax.swing.JSpinner$DateEditorFormatter,javax.swing.JSpinner$DefaultEditor,javax.swing.JSpinner$ModelListener"
};

$Object* allocate$JSpinner($Class* clazz) {
	return $of($alloc(JSpinner));
}

$String* JSpinner::toString() {
	 return this->$JComponent::toString();
}

int32_t JSpinner::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JSpinner::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JSpinner::clone() {
	 return this->$JComponent::clone();
}

void JSpinner::finalize() {
	this->$JComponent::finalize();
}

$String* JSpinner::uiClassID = nullptr;
$Action* JSpinner::DISABLED_ACTION = nullptr;

void JSpinner::init$($SpinnerModel* model) {
	$JComponent::init$();
	this->editorExplicitlySet = false;
	if (model == nullptr) {
		$throwNew($NullPointerException, "model cannot be null"_s);
	}
	$set(this, model, model);
	$set(this, editor, createEditor(model));
	setUIProperty("opaque"_s, $($Boolean::valueOf(true)));
	updateUI();
}

void JSpinner::init$() {
	JSpinner::init$($$new($SpinnerNumberModel));
}

$ComponentUI* JSpinner::getUI() {
	return $cast($SpinnerUI, this->ui);
}

void JSpinner::setUI($SpinnerUI* ui) {
	$JComponent::setUI(ui);
}

$String* JSpinner::getUIClassID() {
	return JSpinner::uiClassID;
}

void JSpinner::updateUI() {
	setUI($cast($SpinnerUI, $($UIManager::getUI(this))));
	invalidate();
}

$JComponent* JSpinner::createEditor($SpinnerModel* model) {
	if ($instanceOf($SpinnerDateModel, model)) {
		return $new($JSpinner$DateEditor, this);
	} else if ($instanceOf($SpinnerListModel, model)) {
		return $new($JSpinner$ListEditor, this);
	} else if ($instanceOf($SpinnerNumberModel, model)) {
		return $new($JSpinner$NumberEditor, this);
	} else {
		return $new($JSpinner$DefaultEditor, this);
	}
}

void JSpinner::setModel($SpinnerModel* model) {
	$useLocalCurrentObjectStackCache();
	if (model == nullptr) {
		$throwNew($IllegalArgumentException, "null model"_s);
	}
	if (!$nc($of(model))->equals(this->model)) {
		$var($SpinnerModel, oldModel, this->model);
		$set(this, model, model);
		if (this->modelListener != nullptr) {
			$nc(oldModel)->removeChangeListener(this->modelListener);
			$nc(this->model)->addChangeListener(this->modelListener);
		}
		firePropertyChange("model"_s, $of(oldModel), $of(model));
		if (!this->editorExplicitlySet) {
			setEditor($(createEditor(model)));
			this->editorExplicitlySet = false;
		}
		repaint();
		revalidate();
	}
}

$SpinnerModel* JSpinner::getModel() {
	return this->model;
}

$Object* JSpinner::getValue() {
	return $of($nc($(getModel()))->getValue());
}

void JSpinner::setValue(Object$* value) {
	$nc($(getModel()))->setValue(value);
}

$Object* JSpinner::getNextValue() {
	return $of($nc($(getModel()))->getNextValue());
}

void JSpinner::addChangeListener($ChangeListener* listener) {
	if (this->modelListener == nullptr) {
		$set(this, modelListener, $new($JSpinner$ModelListener, this));
		$nc($(getModel()))->addChangeListener(this->modelListener);
	}
	$load($ChangeListener);
	$nc(this->listenerList)->add($ChangeListener::class$, listener);
}

void JSpinner::removeChangeListener($ChangeListener* listener) {
	$load($ChangeListener);
	$nc(this->listenerList)->remove($ChangeListener::class$, listener);
}

$ChangeListenerArray* JSpinner::getChangeListeners() {
	$load($ChangeListener);
	return $fcast($ChangeListenerArray, $nc(this->listenerList)->getListeners($ChangeListener::class$));
}

void JSpinner::fireStateChanged() {
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

$Object* JSpinner::getPreviousValue() {
	return $of($nc($(getModel()))->getPreviousValue());
}

void JSpinner::setEditor($JComponent* editor) {
	if (editor == nullptr) {
		$throwNew($IllegalArgumentException, "null editor"_s);
	}
	if (!$nc($of(editor))->equals(this->editor)) {
		$var($JComponent, oldEditor, this->editor);
		$set(this, editor, editor);
		if ($instanceOf($JSpinner$DefaultEditor, oldEditor)) {
			$nc(($cast($JSpinner$DefaultEditor, oldEditor)))->dismiss(this);
		}
		this->editorExplicitlySet = true;
		firePropertyChange("editor"_s, $of(oldEditor), $of(editor));
		revalidate();
		repaint();
	}
}

$JComponent* JSpinner::getEditor() {
	return this->editor;
}

void JSpinner::commitEdit() {
	$var($JComponent, editor, getEditor());
	if ($instanceOf($JSpinner$DefaultEditor, editor)) {
		$nc(($cast($JSpinner$DefaultEditor, editor)))->commitEdit();
	}
}

void JSpinner::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JSpinner::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$AccessibleContext* JSpinner::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JSpinner$AccessibleJSpinner, this));
	}
	return this->accessibleContext;
}

void clinit$JSpinner($Class* class$) {
	$assignStatic(JSpinner::uiClassID, "SpinnerUI"_s);
	$assignStatic(JSpinner::DISABLED_ACTION, $new($JSpinner$DisabledAction));
}

JSpinner::JSpinner() {
}

$Class* JSpinner::load$($String* name, bool initialize) {
	$loadClass(JSpinner, name, initialize, &_JSpinner_ClassInfo_, clinit$JSpinner, allocate$JSpinner);
	return class$;
}

$Class* JSpinner::class$ = nullptr;

	} // swing
} // javax