#include <javax/swing/JFormattedTextField.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/im/InputContext.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Number.h>
#include <java/lang/Runnable.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/DateFormat.h>
#include <java/text/DecimalFormat.h>
#include <java/text/Format.h>
#include <java/text/NumberFormat.h>
#include <java/util/Date.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JFormattedTextField$AbstractFormatterFactory.h>
#include <javax/swing/JFormattedTextField$CancelAction.h>
#include <javax/swing/JFormattedTextField$CommitAction.h>
#include <javax/swing/JFormattedTextField$DocumentHandler.h>
#include <javax/swing/JFormattedTextField$FocusLostHandler.h>
#include <javax/swing/JTextField$NotifyAction.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/text/DateFormatter.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <javax/swing/text/DefaultFormatterFactory.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/InternationalFormatter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/NumberFormatter.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

#undef COMMIT
#undef COMMIT_OR_REVERT
#undef FOCUS_EVENT_MASK
#undef FOCUS_LOST
#undef NAME
#undef PERSIST
#undef REVERT

using $ActionArray = $Array<::javax::swing::Action>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $InputContext = ::java::awt::im::InputContext;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Number = ::java::lang::Number;
using $Runnable = ::java::lang::Runnable;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $DateFormat = ::java::text::DateFormat;
using $DecimalFormat = ::java::text::DecimalFormat;
using $Format = ::java::text::Format;
using $NumberFormat = ::java::text::NumberFormat;
using $Date = ::java::util::Date;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField$AbstractFormatter = ::javax::swing::JFormattedTextField$AbstractFormatter;
using $JFormattedTextField$AbstractFormatterFactory = ::javax::swing::JFormattedTextField$AbstractFormatterFactory;
using $JFormattedTextField$CancelAction = ::javax::swing::JFormattedTextField$CancelAction;
using $JFormattedTextField$CommitAction = ::javax::swing::JFormattedTextField$CommitAction;
using $JFormattedTextField$DocumentHandler = ::javax::swing::JFormattedTextField$DocumentHandler;
using $JFormattedTextField$FocusLostHandler = ::javax::swing::JFormattedTextField$FocusLostHandler;
using $JTextField = ::javax::swing::JTextField;
using $JTextField$NotifyAction = ::javax::swing::JTextField$NotifyAction;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $DateFormatter = ::javax::swing::text::DateFormatter;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;
using $DefaultFormatterFactory = ::javax::swing::text::DefaultFormatterFactory;
using $Document = ::javax::swing::text::Document;
using $InternationalFormatter = ::javax::swing::text::InternationalFormatter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $NumberFormatter = ::javax::swing::text::NumberFormatter;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {

$CompoundAttribute _JFormattedTextField_Annotations_[] = {
	{"Ljava/beans/JavaBean;", nullptr},
	{}
};

$NamedAttribute JFormattedTextField_Attribute_var$0[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JFormattedTextField_MethodAnnotations_getActions7[] = {
	{"Ljava/beans/BeanProperty;", JFormattedTextField_Attribute_var$0},
	{}
};

$NamedAttribute JFormattedTextField_Attribute_var$1[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "TextFormatter, responsible for formatting the current value"},
	{}
};

$CompoundAttribute _JFormattedTextField_MethodAnnotations_getFormatter10[] = {
	{"Ljava/beans/BeanProperty;", JFormattedTextField_Attribute_var$1},
	{}
};

$NamedAttribute JFormattedTextField_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JFormattedTextField_MethodAnnotations_getUIClassID12[] = {
	{"Ljava/beans/BeanProperty;", JFormattedTextField_Attribute_var$2},
	{}
};

$NamedAttribute JFormattedTextField_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JFormattedTextField_MethodAnnotations_isEditValid15[] = {
	{"Ljava/beans/BeanProperty;", JFormattedTextField_Attribute_var$3},
	{}
};

$NamedAttribute JFormattedTextField_Attribute_var$4[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "the text document model"},
	{}
};

$CompoundAttribute _JFormattedTextField_MethodAnnotations_setDocument19[] = {
	{"Ljava/beans/BeanProperty;", JFormattedTextField_Attribute_var$4},
	{}
};

$NamedAttribute JFormattedTextField_Attribute_var$5[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "True indicates the edited value is valid"},
	{}
};

$CompoundAttribute _JFormattedTextField_MethodAnnotations_setEditValid20[] = {
	{"Ljava/beans/BeanProperty;", JFormattedTextField_Attribute_var$5},
	{}
};

$Attribute JFormattedTextField_Attribute_var$7[] = {
	{'s', "JFormattedTextField.COMMIT"},
	{'s', "JFormattedTextField.COMMIT_OR_REVERT"},
	{'s', "JFormattedTextField.REVERT"},
	{'s', "JFormattedTextField.PERSIST"},
	{'-'}
};

$NamedAttribute JFormattedTextField_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{"enumerationValues", '[', JFormattedTextField_Attribute_var$7},
	{"description", 's', "Behavior when component loses focus"},
	{}
};

$CompoundAttribute _JFormattedTextField_MethodAnnotations_setFocusLostBehavior22[] = {
	{"Ljava/beans/BeanProperty;", JFormattedTextField_Attribute_var$6},
	{}
};

$NamedAttribute JFormattedTextField_Attribute_var$8[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "AbstractFormatterFactory, responsible for returning an AbstractFormatter that can format the current value."},
	{}
};

$CompoundAttribute _JFormattedTextField_MethodAnnotations_setFormatterFactory25[] = {
	{"Ljava/beans/BeanProperty;", JFormattedTextField_Attribute_var$8},
	{}
};

$NamedAttribute JFormattedTextField_Attribute_var$9[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The value to be formatted."},
	{}
};

$CompoundAttribute _JFormattedTextField_MethodAnnotations_setValue26[] = {
	{"Ljava/beans/BeanProperty;", JFormattedTextField_Attribute_var$9},
	{}
};

$FieldInfo _JFormattedTextField_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JFormattedTextField, uiClassID)},
	{"defaultActions", "[Ljavax/swing/Action;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JFormattedTextField, defaultActions)},
	{"COMMIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFormattedTextField, COMMIT)},
	{"COMMIT_OR_REVERT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFormattedTextField, COMMIT_OR_REVERT)},
	{"REVERT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFormattedTextField, REVERT)},
	{"PERSIST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFormattedTextField, PERSIST)},
	{"factory", "Ljavax/swing/JFormattedTextField$AbstractFormatterFactory;", nullptr, $PRIVATE, $field(JFormattedTextField, factory)},
	{"format", "Ljavax/swing/JFormattedTextField$AbstractFormatter;", nullptr, $PRIVATE, $field(JFormattedTextField, format)},
	{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(JFormattedTextField, value)},
	{"editValid", "Z", nullptr, $PRIVATE, $field(JFormattedTextField, editValid)},
	{"focusLostBehavior", "I", nullptr, $PRIVATE, $field(JFormattedTextField, focusLostBehavior)},
	{"edited", "Z", nullptr, $PRIVATE, $field(JFormattedTextField, edited)},
	{"documentListener", "Ljavax/swing/event/DocumentListener;", nullptr, $PRIVATE, $field(JFormattedTextField, documentListener)},
	{"mask", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(JFormattedTextField, mask)},
	{"textFormatterActionMap", "Ljavax/swing/ActionMap;", nullptr, $PRIVATE, $field(JFormattedTextField, textFormatterActionMap)},
	{"composedTextExists", "Z", nullptr, $PRIVATE, $field(JFormattedTextField, composedTextExists$)},
	{"focusLostHandler", "Ljavax/swing/JFormattedTextField$FocusLostHandler;", nullptr, $PRIVATE, $field(JFormattedTextField, focusLostHandler)},
	{}
};

$MethodInfo _JFormattedTextField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JFormattedTextField::*)()>(&JFormattedTextField::init$))},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(JFormattedTextField::*)(Object$*)>(&JFormattedTextField::init$))},
	{"<init>", "(Ljava/text/Format;)V", nullptr, $PUBLIC, $method(static_cast<void(JFormattedTextField::*)($Format*)>(&JFormattedTextField::init$))},
	{"<init>", "(Ljavax/swing/JFormattedTextField$AbstractFormatter;)V", nullptr, $PUBLIC, $method(static_cast<void(JFormattedTextField::*)($JFormattedTextField$AbstractFormatter*)>(&JFormattedTextField::init$))},
	{"<init>", "(Ljavax/swing/JFormattedTextField$AbstractFormatterFactory;)V", nullptr, $PUBLIC, $method(static_cast<void(JFormattedTextField::*)($JFormattedTextField$AbstractFormatterFactory*)>(&JFormattedTextField::init$))},
	{"<init>", "(Ljavax/swing/JFormattedTextField$AbstractFormatterFactory;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(JFormattedTextField::*)($JFormattedTextField$AbstractFormatterFactory*,Object$*)>(&JFormattedTextField::init$))},
	{"commitEdit", "()V", nullptr, $PUBLIC, nullptr, "java.text.ParseException"},
	{"getActions", "()[Ljavax/swing/Action;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFormattedTextField_MethodAnnotations_getActions7},
	{"getDefaultFormatterFactory", "(Ljava/lang/Object;)Ljavax/swing/JFormattedTextField$AbstractFormatterFactory;", nullptr, $PRIVATE, $method(static_cast<$JFormattedTextField$AbstractFormatterFactory*(JFormattedTextField::*)(Object$*)>(&JFormattedTextField::getDefaultFormatterFactory))},
	{"getFocusLostBehavior", "()I", nullptr, $PUBLIC},
	{"getFormatter", "()Ljavax/swing/JFormattedTextField$AbstractFormatter;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFormattedTextField_MethodAnnotations_getFormatter10},
	{"getFormatterFactory", "()Ljavax/swing/JFormattedTextField$AbstractFormatterFactory;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFormattedTextField_MethodAnnotations_getUIClassID12},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"invalidEdit", "()V", nullptr, $PROTECTED},
	{"isEditValid", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFormattedTextField_MethodAnnotations_isEditValid15},
	{"isEdited", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(JFormattedTextField::*)()>(&JFormattedTextField::isEdited))},
	{"processFocusEvent", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PROTECTED},
	{"processInputMethodEvent", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PROTECTED},
	{"setDocument", "(Ljavax/swing/text/Document;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFormattedTextField_MethodAnnotations_setDocument19},
	{"setEditValid", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(JFormattedTextField::*)(bool)>(&JFormattedTextField::setEditValid)), nullptr, nullptr, _JFormattedTextField_MethodAnnotations_setEditValid20},
	{"setEdited", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(JFormattedTextField::*)(bool)>(&JFormattedTextField::setEdited))},
	{"setFocusLostBehavior", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFormattedTextField_MethodAnnotations_setFocusLostBehavior22},
	{"setFormatter", "(Ljavax/swing/JFormattedTextField$AbstractFormatter;)V", nullptr, $PROTECTED},
	{"setFormatterActions", "([Ljavax/swing/Action;)V", nullptr, $PRIVATE, $method(static_cast<void(JFormattedTextField::*)($ActionArray*)>(&JFormattedTextField::setFormatterActions))},
	{"setFormatterFactory", "(Ljavax/swing/JFormattedTextField$AbstractFormatterFactory;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFormattedTextField_MethodAnnotations_setFormatterFactory25},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFormattedTextField_MethodAnnotations_setValue26},
	{"setValue", "(Ljava/lang/Object;ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(JFormattedTextField::*)(Object$*,bool,bool)>(&JFormattedTextField::setValue))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JFormattedTextField::*)($ObjectOutputStream*)>(&JFormattedTextField::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JFormattedTextField_InnerClassesInfo_[] = {
	{"javax.swing.JFormattedTextField$DocumentHandler", "javax.swing.JFormattedTextField", "DocumentHandler", $PRIVATE},
	{"javax.swing.JFormattedTextField$CancelAction", "javax.swing.JFormattedTextField", "CancelAction", $PRIVATE | $STATIC},
	{"javax.swing.JFormattedTextField$CommitAction", "javax.swing.JFormattedTextField", "CommitAction", $STATIC},
	{"javax.swing.JFormattedTextField$AbstractFormatter", "javax.swing.JFormattedTextField", "AbstractFormatter", $PUBLIC | $STATIC | $ABSTRACT},
	{"javax.swing.JFormattedTextField$AbstractFormatterFactory", "javax.swing.JFormattedTextField", "AbstractFormatterFactory", $PUBLIC | $STATIC | $ABSTRACT},
	{"javax.swing.JFormattedTextField$FocusLostHandler", "javax.swing.JFormattedTextField", "FocusLostHandler", $PRIVATE},
	{}
};

$ClassInfo _JFormattedTextField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JFormattedTextField",
	"javax.swing.JTextField",
	nullptr,
	_JFormattedTextField_FieldInfo_,
	_JFormattedTextField_MethodInfo_,
	nullptr,
	nullptr,
	_JFormattedTextField_InnerClassesInfo_,
	_JFormattedTextField_Annotations_,
	nullptr,
	"javax.swing.JFormattedTextField$DocumentHandler,javax.swing.JFormattedTextField$CancelAction,javax.swing.JFormattedTextField$CommitAction,javax.swing.JFormattedTextField$AbstractFormatter,javax.swing.JFormattedTextField$AbstractFormatterFactory,javax.swing.JFormattedTextField$FocusLostHandler"
};

$Object* allocate$JFormattedTextField($Class* clazz) {
	return $of($alloc(JFormattedTextField));
}

$String* JFormattedTextField::uiClassID = nullptr;
$ActionArray* JFormattedTextField::defaultActions = nullptr;

void JFormattedTextField::init$() {
	$JTextField::init$();
	this->composedTextExists$ = false;
	enableEvents($AWTEvent::FOCUS_EVENT_MASK);
	setFocusLostBehavior(JFormattedTextField::COMMIT_OR_REVERT);
}

void JFormattedTextField::init$(Object$* value) {
	JFormattedTextField::init$();
	setValue(value);
}

void JFormattedTextField::init$($Format* format) {
	JFormattedTextField::init$();
	setFormatterFactory($(getDefaultFormatterFactory(format)));
}

void JFormattedTextField::init$($JFormattedTextField$AbstractFormatter* formatter) {
	JFormattedTextField::init$(static_cast<$JFormattedTextField$AbstractFormatterFactory*>($$new($DefaultFormatterFactory, formatter)));
}

void JFormattedTextField::init$($JFormattedTextField$AbstractFormatterFactory* factory) {
	JFormattedTextField::init$();
	setFormatterFactory(factory);
}

void JFormattedTextField::init$($JFormattedTextField$AbstractFormatterFactory* factory, Object$* currentValue) {
	JFormattedTextField::init$(currentValue);
	setFormatterFactory(factory);
}

void JFormattedTextField::setFocusLostBehavior(int32_t behavior) {
	if (behavior != JFormattedTextField::COMMIT && behavior != JFormattedTextField::COMMIT_OR_REVERT && behavior != JFormattedTextField::PERSIST && behavior != JFormattedTextField::REVERT) {
		$throwNew($IllegalArgumentException, "setFocusLostBehavior must be one of: JFormattedTextField.COMMIT, JFormattedTextField.COMMIT_OR_REVERT, JFormattedTextField.PERSIST or JFormattedTextField.REVERT"_s);
	}
	this->focusLostBehavior = behavior;
}

int32_t JFormattedTextField::getFocusLostBehavior() {
	return this->focusLostBehavior;
}

void JFormattedTextField::setFormatterFactory($JFormattedTextField$AbstractFormatterFactory* tf) {
	$useLocalCurrentObjectStackCache();
	$var($JFormattedTextField$AbstractFormatterFactory, oldFactory, this->factory);
	$set(this, factory, tf);
	firePropertyChange("formatterFactory"_s, $of(oldFactory), $of(tf));
	setValue($(getValue()), true, false);
}

$JFormattedTextField$AbstractFormatterFactory* JFormattedTextField::getFormatterFactory() {
	return this->factory;
}

void JFormattedTextField::setFormatter($JFormattedTextField$AbstractFormatter* format) {
	$var($JFormattedTextField$AbstractFormatter, oldFormat, this->format);
	if (oldFormat != nullptr) {
		oldFormat->uninstall();
	}
	setEditValid(true);
	$set(this, format, format);
	if (format != nullptr) {
		format->install(this);
	}
	setEdited(false);
	firePropertyChange("textFormatter"_s, $of(oldFormat), $of(format));
}

$JFormattedTextField$AbstractFormatter* JFormattedTextField::getFormatter() {
	return this->format;
}

void JFormattedTextField::setValue(Object$* value) {
	if (value != nullptr && getFormatterFactory() == nullptr) {
		setFormatterFactory($(getDefaultFormatterFactory(value)));
	}
	setValue(value, true, true);
}

$Object* JFormattedTextField::getValue() {
	return $of(this->value);
}

void JFormattedTextField::commitEdit() {
	$useLocalCurrentObjectStackCache();
	$var($JFormattedTextField$AbstractFormatter, format, getFormatter());
	if (format != nullptr) {
		setValue($(format->stringToValue($(getText()))), false, true);
	}
}

void JFormattedTextField::setEditValid(bool isValid) {
	$useLocalCurrentObjectStackCache();
	if (isValid != this->editValid) {
		this->editValid = isValid;
		$var($String, var$0, "editValid"_s);
		$var($Object, var$1, $of($Boolean::valueOf(!isValid)));
		firePropertyChange(var$0, var$1, $($of($Boolean::valueOf(isValid))));
	}
}

bool JFormattedTextField::isEditValid() {
	return this->editValid;
}

void JFormattedTextField::invalidEdit() {
	$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(this);
}

void JFormattedTextField::processInputMethodEvent($InputMethodEvent* e) {
	$var($AttributedCharacterIterator, text, $nc(e)->getText());
	int32_t commitCount = e->getCommittedCharacterCount();
	if (text != nullptr) {
		int32_t begin = text->getBeginIndex();
		int32_t end = text->getEndIndex();
		this->composedTextExists$ = ((end - begin) > commitCount);
	} else {
		this->composedTextExists$ = false;
	}
	$JTextField::processInputMethodEvent(e);
}

void JFormattedTextField::processFocusEvent($FocusEvent* e) {
	$useLocalCurrentObjectStackCache();
	$JTextField::processFocusEvent(e);
	if ($nc(e)->isTemporary()) {
		return;
	}
	bool var$0 = isEdited();
	if (var$0 && $nc(e)->getID() == $FocusEvent::FOCUS_LOST) {
		$var($InputContext, ic, getInputContext());
		if (this->focusLostHandler == nullptr) {
			$set(this, focusLostHandler, $new($JFormattedTextField$FocusLostHandler, this));
		}
		if ((ic != nullptr) && this->composedTextExists$) {
			ic->endComposition();
			$EventQueue::invokeLater(this->focusLostHandler);
		} else {
			$nc(this->focusLostHandler)->run();
		}
	} else if (!isEdited()) {
		setValue($(getValue()), true, true);
	}
}

$ActionArray* JFormattedTextField::getActions() {
	return $TextAction::augmentList($($JTextField::getActions()), JFormattedTextField::defaultActions);
}

$String* JFormattedTextField::getUIClassID() {
	return JFormattedTextField::uiClassID;
}

void JFormattedTextField::setDocument($Document* doc) {
	if (this->documentListener != nullptr && getDocument() != nullptr) {
		$nc($(getDocument()))->removeDocumentListener(this->documentListener);
	}
	$JTextField::setDocument(doc);
	if (this->documentListener == nullptr) {
		$set(this, documentListener, $new($JFormattedTextField$DocumentHandler, this));
	}
	$nc(doc)->addDocumentListener(this->documentListener);
}

void JFormattedTextField::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JFormattedTextField::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

void JFormattedTextField::setFormatterActions($ActionArray* actions) {
	$useLocalCurrentObjectStackCache();
	if (actions == nullptr) {
		if (this->textFormatterActionMap != nullptr) {
			$nc(this->textFormatterActionMap)->clear();
		}
	} else {
		if (this->textFormatterActionMap == nullptr) {
			$var($ActionMap, map, getActionMap());
			$set(this, textFormatterActionMap, $new($ActionMap));
			while (map != nullptr) {
				$var($ActionMap, parent, map->getParent());
				if ($instanceOf($UIResource, parent) || parent == nullptr) {
					map->setParent(this->textFormatterActionMap);
					$nc(this->textFormatterActionMap)->setParent(parent);
					break;
				}
				$assign(map, parent);
			}
		}
		for (int32_t counter = $nc(actions)->length - 1; counter >= 0; --counter) {
			$init($Action);
			$var($Object, key, $nc(actions->get(counter))->getValue($Action::NAME));
			if (key != nullptr) {
				$nc(this->textFormatterActionMap)->put(key, actions->get(counter));
			}
		}
	}
}

void JFormattedTextField::setValue(Object$* value, bool createFormat, bool firePC) {
	$useLocalCurrentObjectStackCache();
	$var($Object, oldValue, this->value);
	$set(this, value, value);
	if (createFormat) {
		$var($JFormattedTextField$AbstractFormatterFactory, factory, getFormatterFactory());
		$var($JFormattedTextField$AbstractFormatter, atf, nullptr);
		if (factory != nullptr) {
			$assign(atf, factory->getFormatter(this));
		} else {
			$assign(atf, nullptr);
		}
		setFormatter(atf);
	} else {
		setEditValid(true);
	}
	setEdited(false);
	if (firePC) {
		firePropertyChange("value"_s, oldValue, value);
	}
}

void JFormattedTextField::setEdited(bool edited) {
	this->edited = edited;
}

bool JFormattedTextField::isEdited() {
	return this->edited;
}

$JFormattedTextField$AbstractFormatterFactory* JFormattedTextField::getDefaultFormatterFactory(Object$* type) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($DateFormat, type)) {
		return $new($DefaultFormatterFactory, $$new($DateFormatter, $cast($DateFormat, type)));
	}
	if ($instanceOf($NumberFormat, type)) {
		return $new($DefaultFormatterFactory, $$new($NumberFormatter, $cast($NumberFormat, type)));
	}
	if ($instanceOf($Format, type)) {
		return $new($DefaultFormatterFactory, $$new($InternationalFormatter, $cast($Format, type)));
	}
	if ($instanceOf($Date, type)) {
		return $new($DefaultFormatterFactory, $$new($DateFormatter));
	}
	if ($instanceOf($Number, type)) {
		$var($JFormattedTextField$AbstractFormatter, displayFormatter, $new($NumberFormatter));
		$nc(($cast($NumberFormatter, displayFormatter)))->setValueClass($nc($of(type))->getClass());
		$var($JFormattedTextField$AbstractFormatter, editFormatter, $new($NumberFormatter, $$new($DecimalFormat, "#.#"_s)));
		$nc(($cast($NumberFormatter, editFormatter)))->setValueClass($nc($of(type))->getClass());
		return $new($DefaultFormatterFactory, displayFormatter, displayFormatter, editFormatter);
	}
	return $new($DefaultFormatterFactory, $$new($DefaultFormatter));
}

void clinit$JFormattedTextField($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JFormattedTextField::uiClassID, "FormattedTextFieldUI"_s);
	$assignStatic(JFormattedTextField::defaultActions, $new($ActionArray, {
		static_cast<$Action*>($$new($JFormattedTextField$CommitAction)),
		static_cast<$Action*>($$new($JFormattedTextField$CancelAction))
	}));
}

JFormattedTextField::JFormattedTextField() {
}

$Class* JFormattedTextField::load$($String* name, bool initialize) {
	$loadClass(JFormattedTextField, name, initialize, &_JFormattedTextField_ClassInfo_, clinit$JFormattedTextField, allocate$JFormattedTextField);
	return class$;
}

$Class* JFormattedTextField::class$ = nullptr;

	} // swing
} // javax