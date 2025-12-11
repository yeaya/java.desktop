#include <javax/swing/JTextField.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionPropertyChangeListener.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/DefaultBoundedRangeModel.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField$AccessibleJTextField.h>
#include <javax/swing/JTextField$NotifyAction.h>
#include <javax/swing/JTextField$ScrollRepainter.h>
#include <javax/swing/JTextField$TextFieldActionPropertyChangeListener.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PlainDocument.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

#undef ACTION_COMMAND_KEY
#undef ACTION_PERFORMED
#undef CENTER
#undef LEADING
#undef LEFT
#undef RIGHT
#undef SHORT_DESCRIPTION
#undef TRAILING
#undef TRUE

using $ActionListenerArray = $Array<::java::awt::event::ActionListener>;
using $ActionArray = $Array<::javax::swing::Action>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
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
using $EventListener = ::java::util::EventListener;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionPropertyChangeListener = ::javax::swing::ActionPropertyChangeListener;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $DefaultBoundedRangeModel = ::javax::swing::DefaultBoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JTextField$AccessibleJTextField = ::javax::swing::JTextField$AccessibleJTextField;
using $JTextField$NotifyAction = ::javax::swing::JTextField$NotifyAction;
using $JTextField$ScrollRepainter = ::javax::swing::JTextField$ScrollRepainter;
using $JTextField$TextFieldActionPropertyChangeListener = ::javax::swing::JTextField$TextFieldActionPropertyChangeListener;
using $JViewport = ::javax::swing::JViewport;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$AccessibleJTextComponent = ::javax::swing::text::JTextComponent$AccessibleJTextComponent;
using $PlainDocument = ::javax::swing::text::PlainDocument;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {

$NamedAttribute JTextField_Attribute_var$0[] = {
	{"defaultProperty", 's', "UIClassID"},
	{"description", 's', "A component which allows for the editing of a single line of text."},
	{}
};

$NamedAttribute JTextField_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _JTextField_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JTextField_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JTextField_Attribute_var$1},
	{}
};

$NamedAttribute JTextField_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTextField_MethodAnnotations_getAccessibleContext11[] = {
	{"Ljava/beans/BeanProperty;", JTextField_Attribute_var$2},
	{}
};

$NamedAttribute JTextField_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTextField_MethodAnnotations_getActionListeners13[] = {
	{"Ljava/beans/BeanProperty;", JTextField_Attribute_var$3},
	{}
};

$NamedAttribute JTextField_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTextField_MethodAnnotations_getActions14[] = {
	{"Ljava/beans/BeanProperty;", JTextField_Attribute_var$4},
	{}
};

$NamedAttribute JTextField_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTextField_MethodAnnotations_getHorizontalVisibility18[] = {
	{"Ljava/beans/BeanProperty;", JTextField_Attribute_var$5},
	{}
};

$NamedAttribute JTextField_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTextField_MethodAnnotations_getUIClassID21[] = {
	{"Ljava/beans/BeanProperty;", JTextField_Attribute_var$6},
	{}
};

$NamedAttribute JTextField_Attribute_var$7[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "the Action instance connected with this ActionEvent source"},
	{}
};

$CompoundAttribute _JTextField_MethodAnnotations_setAction29[] = {
	{"Ljava/beans/BeanProperty;", JTextField_Attribute_var$7},
	{}
};

$NamedAttribute JTextField_Attribute_var$8[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "the number of columns preferred for display"},
	{}
};

$CompoundAttribute _JTextField_MethodAnnotations_setColumns32[] = {
	{"Ljava/beans/BeanProperty;", JTextField_Attribute_var$8},
	{}
};

$NamedAttribute JTextField_Attribute_var$9[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "the text document model"},
	{}
};

$CompoundAttribute _JTextField_MethodAnnotations_setDocument33[] = {
	{"Ljava/beans/BeanProperty;", JTextField_Attribute_var$9},
	{}
};

$Attribute JTextField_Attribute_var$11[] = {
	{'s', "JTextField.LEFT"},
	{'s', "JTextField.CENTER"},
	{'s', "JTextField.RIGHT"},
	{'s', "JTextField.LEADING"},
	{'s', "JTextField.TRAILING"},
	{'-'}
};

$NamedAttribute JTextField_Attribute_var$10[] = {
	{"preferred", 'Z', "true"},
	{"enumerationValues", '[', JTextField_Attribute_var$11},
	{"description", 's', "Set the field alignment to LEFT, CENTER, RIGHT, LEADING (the default) or TRAILING"},
	{}
};

$CompoundAttribute _JTextField_MethodAnnotations_setHorizontalAlignment35[] = {
	{"Ljava/beans/BeanProperty;", JTextField_Attribute_var$10},
	{}
};

$FieldInfo _JTextField_FieldInfo_[] = {
	{"action", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(JTextField, action$)},
	{"actionPropertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(JTextField, actionPropertyChangeListener)},
	{"notifyAction", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTextField, notifyAction)},
	{"visibility", "Ljavax/swing/BoundedRangeModel;", nullptr, $PRIVATE, $field(JTextField, visibility)},
	{"horizontalAlignment", "I", nullptr, $PRIVATE, $field(JTextField, horizontalAlignment)},
	{"columns", "I", nullptr, $PRIVATE, $field(JTextField, columns)},
	{"columnWidth", "I", nullptr, $PRIVATE, $field(JTextField, columnWidth)},
	{"command", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JTextField, command)},
	{"defaultActions", "[Ljavax/swing/Action;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JTextField, defaultActions)},
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JTextField, uiClassID)},
	{}
};

$MethodInfo _JTextField_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTextField::*)()>(&JTextField::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JTextField::*)($String*)>(&JTextField::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JTextField::*)(int32_t)>(&JTextField::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(JTextField::*)($String*,int32_t)>(&JTextField::init$))},
	{"<init>", "(Ljavax/swing/text/Document;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(JTextField::*)($Document*,$String*,int32_t)>(&JTextField::init$))},
	{"actionPropertyChanged", "(Ljavax/swing/Action;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"configurePropertiesFromAction", "(Ljavax/swing/Action;)V", nullptr, $PROTECTED},
	{"createActionPropertyChangeListener", "(Ljavax/swing/Action;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createDefaultModel", "()Ljavax/swing/text/Document;", nullptr, $PROTECTED},
	{"fireActionPerformed", "()V", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextField_MethodAnnotations_getAccessibleContext11},
	{"getAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getActionListeners", "()[Ljava/awt/event/ActionListener;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, nullptr, nullptr, _JTextField_MethodAnnotations_getActionListeners13},
	{"getActions", "()[Ljavax/swing/Action;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextField_MethodAnnotations_getActions14},
	{"getColumnWidth", "()I", nullptr, $PROTECTED},
	{"getColumns", "()I", nullptr, $PUBLIC},
	{"getHorizontalAlignment", "()I", nullptr, $PUBLIC},
	{"getHorizontalVisibility", "()Ljavax/swing/BoundedRangeModel;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextField_MethodAnnotations_getHorizontalVisibility18},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getScrollOffset", "()I", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextField_MethodAnnotations_getUIClassID21},
	{"hasActionListener", "()Z", nullptr, 0},
	{"isListener", "(Ljava/lang/Class;Ljava/awt/event/ActionListener;)Z", "(Ljava/lang/Class<*>;Ljava/awt/event/ActionListener;)Z", $PRIVATE, $method(static_cast<bool(JTextField::*)($Class*,$ActionListener*)>(&JTextField::isListener))},
	{"isValidateRoot", "()Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"postActionEvent", "()V", nullptr, $PUBLIC},
	{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"scrollRectToVisible", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setAction", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextField_MethodAnnotations_setAction29},
	{"setActionCommand", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setActionCommandFromAction", "(Ljavax/swing/Action;)V", nullptr, $PRIVATE, $method(static_cast<void(JTextField::*)($Action*)>(&JTextField::setActionCommandFromAction))},
	{"setColumns", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextField_MethodAnnotations_setColumns32},
	{"setDocument", "(Ljavax/swing/text/Document;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextField_MethodAnnotations_setDocument33},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setHorizontalAlignment", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextField_MethodAnnotations_setHorizontalAlignment35},
	{"setScrollOffset", "(I)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JTextField::*)($ObjectOutputStream*)>(&JTextField::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JTextField_InnerClassesInfo_[] = {
	{"javax.swing.JTextField$AccessibleJTextField", "javax.swing.JTextField", "AccessibleJTextField", $PROTECTED},
	{"javax.swing.JTextField$ScrollRepainter", "javax.swing.JTextField", "ScrollRepainter", 0},
	{"javax.swing.JTextField$NotifyAction", "javax.swing.JTextField", "NotifyAction", $STATIC},
	{"javax.swing.JTextField$TextFieldActionPropertyChangeListener", "javax.swing.JTextField", "TextFieldActionPropertyChangeListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JTextField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTextField",
	"javax.swing.text.JTextComponent",
	"javax.swing.SwingConstants",
	_JTextField_FieldInfo_,
	_JTextField_MethodInfo_,
	nullptr,
	nullptr,
	_JTextField_InnerClassesInfo_,
	_JTextField_Annotations_,
	nullptr,
	"javax.swing.JTextField$AccessibleJTextField,javax.swing.JTextField$ScrollRepainter,javax.swing.JTextField$NotifyAction,javax.swing.JTextField$TextFieldActionPropertyChangeListener"
};

$Object* allocate$JTextField($Class* clazz) {
	return $of($alloc(JTextField));
}

$String* JTextField::toString() {
	 return this->$JTextComponent::toString();
}

int32_t JTextField::hashCode() {
	 return this->$JTextComponent::hashCode();
}

bool JTextField::equals(Object$* arg0) {
	 return this->$JTextComponent::equals(arg0);
}

$Object* JTextField::clone() {
	 return this->$JTextComponent::clone();
}

void JTextField::finalize() {
	this->$JTextComponent::finalize();
}

$String* JTextField::notifyAction = nullptr;
$ActionArray* JTextField::defaultActions = nullptr;
$String* JTextField::uiClassID = nullptr;

void JTextField::init$() {
	JTextField::init$(nullptr, nullptr, 0);
}

void JTextField::init$($String* text) {
	JTextField::init$(nullptr, text, 0);
}

void JTextField::init$(int32_t columns) {
	JTextField::init$(nullptr, nullptr, columns);
}

void JTextField::init$($String* text, int32_t columns) {
	JTextField::init$(nullptr, text, columns);
}

void JTextField::init$($Document* doc$renamed, $String* text, int32_t columns) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, doc$renamed);
	$JTextComponent::init$();
	this->horizontalAlignment = $SwingConstants::LEADING;
	if (columns < 0) {
		$throwNew($IllegalArgumentException, "columns less than zero."_s);
	}
	$set(this, visibility, $new($DefaultBoundedRangeModel));
	$nc(this->visibility)->addChangeListener($$new($JTextField$ScrollRepainter, this));
	this->columns = columns;
	if (doc == nullptr) {
		$assign(doc, createDefaultModel());
	}
	setDocument(doc);
	if (text != nullptr) {
		setText(text);
	}
}

$String* JTextField::getUIClassID() {
	return JTextField::uiClassID;
}

void JTextField::setDocument($Document* doc) {
	if (doc != nullptr) {
		$init($Boolean);
		doc->putProperty("filterNewlines"_s, $Boolean::TRUE);
	}
	$JTextComponent::setDocument(doc);
}

bool JTextField::isValidateRoot() {
	return !($instanceOf($JViewport, $($SwingUtilities::getUnwrappedParent(this))));
}

int32_t JTextField::getHorizontalAlignment() {
	return this->horizontalAlignment;
}

void JTextField::setHorizontalAlignment(int32_t alignment) {
	if (alignment == this->horizontalAlignment) {
		return;
	}
	int32_t oldValue = this->horizontalAlignment;
	if ((alignment == $SwingConstants::LEFT) || (alignment == $SwingConstants::CENTER) || (alignment == $SwingConstants::RIGHT) || (alignment == $SwingConstants::LEADING) || (alignment == $SwingConstants::TRAILING)) {
		this->horizontalAlignment = alignment;
	} else {
		$throwNew($IllegalArgumentException, "horizontalAlignment"_s);
	}
	firePropertyChange("horizontalAlignment"_s, oldValue, this->horizontalAlignment);
	invalidate();
	repaint();
}

$Document* JTextField::createDefaultModel() {
	return $new($PlainDocument);
}

int32_t JTextField::getColumns() {
	return this->columns;
}

void JTextField::setColumns(int32_t columns) {
	int32_t oldVal = this->columns;
	if (columns < 0) {
		$throwNew($IllegalArgumentException, "columns less than zero."_s);
	}
	if (columns != oldVal) {
		this->columns = columns;
		invalidate();
	}
}

int32_t JTextField::getColumnWidth() {
	$useLocalCurrentObjectStackCache();
	if (this->columnWidth == 0) {
		$var($FontMetrics, metrics, getFontMetrics($(getFont())));
		this->columnWidth = $nc(metrics)->charWidth(u'm');
	}
	return this->columnWidth;
}

$Dimension* JTextField::getPreferredSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, $JTextComponent::getPreferredSize());
	if (this->columns != 0) {
		$var($Insets, insets, getInsets());
		$nc(size)->width = this->columns * getColumnWidth() + $nc(insets)->left + insets->right;
	}
	return size;
}

void JTextField::setFont($Font* f) {
	$JTextComponent::setFont(f);
	this->columnWidth = 0;
}

void JTextField::addActionListener($ActionListener* l) {
	$synchronized(this) {
		$load($ActionListener);
		$nc(this->listenerList)->add($ActionListener::class$, l);
	}
}

void JTextField::removeActionListener($ActionListener* l) {
	$synchronized(this) {
		if ((l != nullptr) && ($equals(getAction(), l))) {
			setAction(nullptr);
		} else {
			$load($ActionListener);
			$nc(this->listenerList)->remove($ActionListener::class$, l);
		}
	}
}

$ActionListenerArray* JTextField::getActionListeners() {
	$synchronized(this) {
		$load($ActionListener);
		return $fcast($ActionListenerArray, $nc(this->listenerList)->getListeners($ActionListener::class$));
	}
}

void JTextField::fireActionPerformed() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	int32_t modifiers = 0;
	$var($AWTEvent, currentEvent, $EventQueue::getCurrentEvent());
	if ($instanceOf($InputEvent, currentEvent)) {
		modifiers = $nc(($cast($InputEvent, currentEvent)))->getModifiers();
	} else if ($instanceOf($ActionEvent, currentEvent)) {
		modifiers = $nc(($cast($ActionEvent, currentEvent)))->getModifiers();
	}
	$var($String, var$0, (this->command != nullptr) ? this->command : getText());
	$var($ActionEvent, e, $new($ActionEvent, this, $ActionEvent::ACTION_PERFORMED, var$0, $EventQueue::getMostRecentEventTime(), modifiers));
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ActionListener);
		if ($equals(listeners->get(i), $ActionListener::class$)) {
			$nc(($cast($ActionListener, listeners->get(i + 1))))->actionPerformed(e);
		}
	}
}

void JTextField::setActionCommand($String* command) {
	$set(this, command, command);
}

void JTextField::setAction($Action* a) {
	$var($Action, oldValue, getAction());
	if (this->action$ == nullptr || !$nc($of(this->action$))->equals(a)) {
		$set(this, action$, a);
		if (oldValue != nullptr) {
			removeActionListener(oldValue);
			oldValue->removePropertyChangeListener(this->actionPropertyChangeListener);
			$set(this, actionPropertyChangeListener, nullptr);
		}
		configurePropertiesFromAction(this->action$);
		if (this->action$ != nullptr) {
			$load($ActionListener);
			if (!isListener($ActionListener::class$, this->action$)) {
				addActionListener(this->action$);
			}
			$set(this, actionPropertyChangeListener, createActionPropertyChangeListener(this->action$));
			$nc(this->action$)->addPropertyChangeListener(this->actionPropertyChangeListener);
		}
		firePropertyChange("action"_s, $of(oldValue), $of(this->action$));
	}
}

bool JTextField::isListener($Class* c, $ActionListener* a) {
	bool isListener = false;
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		if ($equals(listeners->get(i), c) && $equals(listeners->get(i + 1), a)) {
			isListener = true;
		}
	}
	return isListener;
}

$Action* JTextField::getAction() {
	return this->action$;
}

void JTextField::configurePropertiesFromAction($Action* a) {
	$AbstractAction::setEnabledFromAction(this, a);
	$AbstractAction::setToolTipTextFromAction(this, a);
	setActionCommandFromAction(a);
}

void JTextField::actionPropertyChanged($Action* action, $String* propertyName) {
	$init($Action);
	if (propertyName == $Action::ACTION_COMMAND_KEY) {
		setActionCommandFromAction(action);
	} else if (propertyName == "enabled"_s) {
		$AbstractAction::setEnabledFromAction(this, action);
	} else {
		if (propertyName == $Action::SHORT_DESCRIPTION) {
			$AbstractAction::setToolTipTextFromAction(this, action);
		}
	}
}

void JTextField::setActionCommandFromAction($Action* action) {
	$init($Action);
	setActionCommand((action == nullptr) ? ($String*)nullptr : $cast($String, $($nc(action)->getValue($Action::ACTION_COMMAND_KEY))));
}

$PropertyChangeListener* JTextField::createActionPropertyChangeListener($Action* a) {
	return $new($JTextField$TextFieldActionPropertyChangeListener, this, a);
}

$ActionArray* JTextField::getActions() {
	return $TextAction::augmentList($($JTextComponent::getActions()), JTextField::defaultActions);
}

void JTextField::postActionEvent() {
	fireActionPerformed();
}

$BoundedRangeModel* JTextField::getHorizontalVisibility() {
	return this->visibility;
}

int32_t JTextField::getScrollOffset() {
	return $nc(this->visibility)->getValue();
}

void JTextField::setScrollOffset(int32_t scrollOffset) {
	$nc(this->visibility)->setValue(scrollOffset);
}

void JTextField::scrollRectToVisible($Rectangle* r) {
	$var($Insets, i, getInsets());
	int32_t x0 = $nc(r)->x + $nc(this->visibility)->getValue() - $nc(i)->left;
	int32_t x1 = x0 + r->width;
	if (x0 < $nc(this->visibility)->getValue()) {
		$nc(this->visibility)->setValue(x0);
	} else {
		int32_t var$3 = x1;
		int32_t var$5 = $nc(this->visibility)->getValue();
		int32_t var$4 = var$5 + $nc(this->visibility)->getExtent();
		if (var$3 > var$4) {
			$nc(this->visibility)->setValue(x1 - $nc(this->visibility)->getExtent());
		}
	}
}

bool JTextField::hasActionListener() {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ActionListener);
		if ($equals(listeners->get(i), $ActionListener::class$)) {
			return true;
		}
	}
	return false;
}

void JTextField::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JTextField::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JTextField::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, horizontalAlignmentString, nullptr);
	if (this->horizontalAlignment == $SwingConstants::LEFT) {
		$assign(horizontalAlignmentString, "LEFT"_s);
	} else if (this->horizontalAlignment == $SwingConstants::CENTER) {
		$assign(horizontalAlignmentString, "CENTER"_s);
	} else if (this->horizontalAlignment == $SwingConstants::RIGHT) {
		$assign(horizontalAlignmentString, "RIGHT"_s);
	} else if (this->horizontalAlignment == $SwingConstants::LEADING) {
		$assign(horizontalAlignmentString, "LEADING"_s);
	} else if (this->horizontalAlignment == $SwingConstants::TRAILING) {
		$assign(horizontalAlignmentString, "TRAILING"_s);
	} else {
		$assign(horizontalAlignmentString, ""_s);
	}
	$var($String, commandString, this->command != nullptr ? this->command : ""_s);
	return $str({$($JTextComponent::paramString()), ",columns="_s, $$str(this->columns), ",columnWidth="_s, $$str(this->columnWidth), ",command="_s, commandString, ",horizontalAlignment="_s, horizontalAlignmentString});
}

$AccessibleContext* JTextField::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JTextField$AccessibleJTextField, this));
	}
	return this->accessibleContext;
}

void clinit$JTextField($Class* class$) {
	$assignStatic(JTextField::notifyAction, "notify-field-accept"_s);
	$assignStatic(JTextField::uiClassID, "TextFieldUI"_s);
	$assignStatic(JTextField::defaultActions, $new($ActionArray, {static_cast<$Action*>($$new($JTextField$NotifyAction))}));
}

JTextField::JTextField() {
}

$Class* JTextField::load$($String* name, bool initialize) {
	$loadClass(JTextField, name, initialize, &_JTextField_ClassInfo_, clinit$JTextField, allocate$JTextField);
	return class$;
}

$Class* JTextField::class$ = nullptr;

	} // swing
} // javax