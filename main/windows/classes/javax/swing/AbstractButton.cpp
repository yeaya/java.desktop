#include <javax/swing/AbstractButton.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Attribute.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton$ButtonActionPropertyChangeListener.h>
#include <javax/swing/AbstractButton$Handler.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionPropertyChangeListener.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/OverlayLayout.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef ACCESSIBLE_VALUE_PROPERTY
#undef ACCESSIBLE_VISIBLE_DATA_PROPERTY
#undef ACTION_COMMAND_KEY
#undef ACTION_PERFORMED
#undef BORDER_PAINTED_CHANGED_PROPERTY
#undef BOTTOM
#undef CENTER
#undef CENTER_ALIGNMENT
#undef CONTENT_AREA_FILLED_CHANGED_PROPERTY
#undef DISABLED_ICON_CHANGED_PROPERTY
#undef DISABLED_SELECTED_ICON_CHANGED_PROPERTY
#undef DISPLAYED_MNEMONIC_INDEX_KEY
#undef FOCUS_PAINTED_CHANGED_PROPERTY
#undef HORIZONTAL_ALIGNMENT_CHANGED_PROPERTY
#undef HORIZONTAL_TEXT_POSITION_CHANGED_PROPERTY
#undef ICON_CHANGED_PROPERTY
#undef ITEM_STATE_CHANGED
#undef LARGE_ICON_KEY
#undef LEADING
#undef LEFT
#undef LEFT_ALIGNMENT
#undef MARGIN_CHANGED_PROPERTY
#undef MNEMONIC_CHANGED_PROPERTY
#undef MNEMONIC_KEY
#undef MODEL_CHANGED_PROPERTY
#undef NAME
#undef PRESSED_ICON_CHANGED_PROPERTY
#undef RIGHT
#undef ROLLOVER_ENABLED_CHANGED_PROPERTY
#undef ROLLOVER_ICON_CHANGED_PROPERTY
#undef ROLLOVER_SELECTED_ICON_CHANGED_PROPERTY
#undef SELECTED
#undef SELECTED_ICON_CHANGED_PROPERTY
#undef SELECTED_KEY
#undef SHORT_DESCRIPTION
#undef SMALL_ICON
#undef TEXT_CHANGED_PROPERTY
#undef TOP
#undef TRAILING
#undef VERTICAL_ALIGNMENT_CHANGED_PROPERTY
#undef VERTICAL_TEXT_POSITION_CHANGED_PROPERTY

using $ActionListenerArray = $Array<::java::awt::event::ActionListener>;
using $ItemListenerArray = $Array<::java::awt::event::ItemListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Number = ::java::lang::Number;
using $EventListener = ::java::util::EventListener;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton$ButtonActionPropertyChangeListener = ::javax::swing::AbstractButton$ButtonActionPropertyChangeListener;
using $AbstractButton$Handler = ::javax::swing::AbstractButton$Handler;
using $Action = ::javax::swing::Action;
using $ActionPropertyChangeListener = ::javax::swing::ActionPropertyChangeListener;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $ButtonModel = ::javax::swing::ButtonModel;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $OverlayLayout = ::javax::swing::OverlayLayout;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace javax {
	namespace swing {

$NamedAttribute AbstractButton_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{}
};
$CompoundAttribute _AbstractButton_Annotations_[] = {
	{"Ljava/beans/JavaBean;", AbstractButton_Attribute_var$0},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$1[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_getActionListeners23[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$1},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_getChangeListeners24[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$2},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_getDisabledIcon25[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_getItemListeners34[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$3},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_getLabel35[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_getSelectedObjects44[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$4},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$5[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "the Action instance connected with this ActionEvent source"},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setAction64[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$5},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$6[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Whether the border should be painted."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setBorderPainted67[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$6},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$7[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Whether the button should paint the content area or leave it transparent."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setContentAreaFilled68[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$7},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$8[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The disabled icon for the button."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setDisabledIcon69[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$8},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$9[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The disabled selection icon for the button."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setDisabledSelectedIcon70[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$9},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$10[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "the index into the String to draw the keyboard character mnemonic at"},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setDisplayedMnemonicIndex71[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$10},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$11[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Whether focus should be painted"},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setFocusPainted74[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$11},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$12[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "Whether the text of the button should come from the <code>Action</code>."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setHideActionText75[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$12},
	{}
};

$Attribute AbstractButton_Attribute_var$14[] = {
	{'s', "SwingConstants.LEFT"},
	{'s', "SwingConstants.CENTER"},
	{'s', "SwingConstants.RIGHT"},
	{'s', "SwingConstants.LEADING"},
	{'s', "SwingConstants.TRAILING"},
	{'-'}
};

$NamedAttribute AbstractButton_Attribute_var$13[] = {
	{"visualUpdate", 'Z', "true"},
	{"enumerationValues", '[', AbstractButton_Attribute_var$14},
	{"description", 's', "The horizontal alignment of the icon and text."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setHorizontalAlignment76[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$13},
	{}
};

$Attribute AbstractButton_Attribute_var$16[] = {
	{'s', "SwingConstants.LEFT"},
	{'s', "SwingConstants.CENTER"},
	{'s', "SwingConstants.RIGHT"},
	{'s', "SwingConstants.LEADING"},
	{'s', "SwingConstants.TRAILING"},
	{'-'}
};

$NamedAttribute AbstractButton_Attribute_var$15[] = {
	{"visualUpdate", 'Z', "true"},
	{"enumerationValues", '[', AbstractButton_Attribute_var$16},
	{"description", 's', "The horizontal position of the text relative to the icon."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setHorizontalTextPosition77[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$15},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$17[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The button\'s default icon"},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setIcon78[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$17},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$18[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "If both the icon and text properties are set, this property defines the space between them."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setIconTextGap80[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$18},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$19[] = {
	{"description", 's', "Replace by setText(text)"},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setLabel81[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$19},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$20[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The space between the button\'s border and the label."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setMargin83[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$20},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$21[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "the keyboard character mnemonic"},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setMnemonic84[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$21},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$22[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "the keyboard character mnemonic"},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setMnemonic85[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$22},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$23[] = {
	{"description", 's', "Model that the Button uses."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setModel87[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$23},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$24[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The pressed icon for the button."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setPressedIcon89[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$24},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$25[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Whether rollover effects should be enabled."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setRolloverEnabled90[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$25},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$26[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The rollover icon for the button."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setRolloverIcon91[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$26},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$27[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The rollover selected icon for the button."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setRolloverSelectedIcon92[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$27},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$28[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The selected icon for the button."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setSelectedIcon95[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$28},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$29[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The button\'s text."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setText96[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$29},
	{}
};

$NamedAttribute AbstractButton_Attribute_var$30[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the LookAndFeel."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setUI98[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$30},
	{}
};

$Attribute AbstractButton_Attribute_var$32[] = {
	{'s', "SwingConstants.TOP"},
	{'s', "SwingConstants.CENTER"},
	{'s', "SwingConstants.BOTTOM"},
	{'-'}
};

$NamedAttribute AbstractButton_Attribute_var$31[] = {
	{"visualUpdate", 'Z', "true"},
	{"enumerationValues", '[', AbstractButton_Attribute_var$32},
	{"description", 's', "The vertical alignment of the icon and text."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setVerticalAlignment100[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$31},
	{}
};

$Attribute AbstractButton_Attribute_var$34[] = {
	{'s', "SwingConstants.TOP"},
	{'s', "SwingConstants.CENTER"},
	{'s', "SwingConstants.BOTTOM"},
	{'-'}
};

$NamedAttribute AbstractButton_Attribute_var$33[] = {
	{"visualUpdate", 'Z', "true"},
	{"enumerationValues", '[', AbstractButton_Attribute_var$34},
	{"description", 's', "The vertical position of the text relative to the icon."},
	{}
};

$CompoundAttribute _AbstractButton_MethodAnnotations_setVerticalTextPosition101[] = {
	{"Ljava/beans/BeanProperty;", AbstractButton_Attribute_var$33},
	{}
};


$FieldInfo _AbstractButton_FieldInfo_[] = {
	{"MODEL_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, MODEL_CHANGED_PROPERTY)},
	{"TEXT_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, TEXT_CHANGED_PROPERTY)},
	{"MNEMONIC_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, MNEMONIC_CHANGED_PROPERTY)},
	{"MARGIN_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, MARGIN_CHANGED_PROPERTY)},
	{"VERTICAL_ALIGNMENT_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, VERTICAL_ALIGNMENT_CHANGED_PROPERTY)},
	{"HORIZONTAL_ALIGNMENT_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, HORIZONTAL_ALIGNMENT_CHANGED_PROPERTY)},
	{"VERTICAL_TEXT_POSITION_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, VERTICAL_TEXT_POSITION_CHANGED_PROPERTY)},
	{"HORIZONTAL_TEXT_POSITION_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, HORIZONTAL_TEXT_POSITION_CHANGED_PROPERTY)},
	{"BORDER_PAINTED_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, BORDER_PAINTED_CHANGED_PROPERTY)},
	{"FOCUS_PAINTED_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, FOCUS_PAINTED_CHANGED_PROPERTY)},
	{"ROLLOVER_ENABLED_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, ROLLOVER_ENABLED_CHANGED_PROPERTY)},
	{"CONTENT_AREA_FILLED_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, CONTENT_AREA_FILLED_CHANGED_PROPERTY)},
	{"ICON_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, ICON_CHANGED_PROPERTY)},
	{"PRESSED_ICON_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, PRESSED_ICON_CHANGED_PROPERTY)},
	{"SELECTED_ICON_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, SELECTED_ICON_CHANGED_PROPERTY)},
	{"ROLLOVER_ICON_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, ROLLOVER_ICON_CHANGED_PROPERTY)},
	{"ROLLOVER_SELECTED_ICON_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, ROLLOVER_SELECTED_ICON_CHANGED_PROPERTY)},
	{"DISABLED_ICON_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, DISABLED_ICON_CHANGED_PROPERTY)},
	{"DISABLED_SELECTED_ICON_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractButton, DISABLED_SELECTED_ICON_CHANGED_PROPERTY)},
	{"model", "Ljavax/swing/ButtonModel;", nullptr, $PROTECTED, $field(AbstractButton, model)},
	{"text", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AbstractButton, text)},
	{"margin", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(AbstractButton, margin)},
	{"defaultMargin", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(AbstractButton, defaultMargin)},
	{"defaultIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(AbstractButton, defaultIcon)},
	{"pressedIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(AbstractButton, pressedIcon)},
	{"disabledIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(AbstractButton, disabledIcon)},
	{"selectedIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(AbstractButton, selectedIcon)},
	{"disabledSelectedIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(AbstractButton, disabledSelectedIcon)},
	{"rolloverIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(AbstractButton, rolloverIcon)},
	{"rolloverSelectedIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(AbstractButton, rolloverSelectedIcon)},
	{"paintBorder", "Z", nullptr, $PRIVATE, $field(AbstractButton, paintBorder$)},
	{"paintFocus", "Z", nullptr, $PRIVATE, $field(AbstractButton, paintFocus)},
	{"rolloverEnabled", "Z", nullptr, $PRIVATE, $field(AbstractButton, rolloverEnabled)},
	{"contentAreaFilled", "Z", nullptr, $PRIVATE, $field(AbstractButton, contentAreaFilled)},
	{"verticalAlignment", "I", nullptr, $PRIVATE, $field(AbstractButton, verticalAlignment)},
	{"horizontalAlignment", "I", nullptr, $PRIVATE, $field(AbstractButton, horizontalAlignment)},
	{"verticalTextPosition", "I", nullptr, $PRIVATE, $field(AbstractButton, verticalTextPosition)},
	{"horizontalTextPosition", "I", nullptr, $PRIVATE, $field(AbstractButton, horizontalTextPosition)},
	{"iconTextGap", "I", nullptr, $PRIVATE, $field(AbstractButton, iconTextGap)},
	{"mnemonic", "I", nullptr, $PRIVATE, $field(AbstractButton, mnemonic)},
	{"mnemonicIndex", "I", nullptr, $PRIVATE, $field(AbstractButton, mnemonicIndex)},
	{"multiClickThreshhold", "J", nullptr, $PRIVATE, $field(AbstractButton, multiClickThreshhold)},
	{"borderPaintedSet", "Z", nullptr, $PRIVATE, $field(AbstractButton, borderPaintedSet)},
	{"rolloverEnabledSet", "Z", nullptr, $PRIVATE, $field(AbstractButton, rolloverEnabledSet)},
	{"iconTextGapSet", "Z", nullptr, $PRIVATE, $field(AbstractButton, iconTextGapSet)},
	{"contentAreaFilledSet", "Z", nullptr, $PRIVATE, $field(AbstractButton, contentAreaFilledSet)},
	{"setLayout", "Z", nullptr, $PRIVATE, $field(AbstractButton, setLayout$)},
	{"defaultCapable", "Z", nullptr, 0, $field(AbstractButton, defaultCapable)},
	{"handler", "Ljavax/swing/AbstractButton$Handler;", nullptr, $PRIVATE, $field(AbstractButton, handler)},
	{"changeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(AbstractButton, changeListener)},
	{"actionListener", "Ljava/awt/event/ActionListener;", nullptr, $PROTECTED, $field(AbstractButton, actionListener)},
	{"itemListener", "Ljava/awt/event/ItemListener;", nullptr, $PROTECTED, $field(AbstractButton, itemListener)},
	{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PROTECTED | $TRANSIENT, $field(AbstractButton, changeEvent)},
	{"hideActionText", "Z", nullptr, $PRIVATE, $field(AbstractButton, hideActionText)},
	{"action", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(AbstractButton, action$)},
	{"actionPropertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(AbstractButton, actionPropertyChangeListener)},
	{}
};

$MethodInfo _AbstractButton_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractButton::*)()>(&AbstractButton::init$))},
	{"access$000", "(Ljavax/swing/AbstractButton;)Ljavax/accessibility/AccessibleContext;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$AccessibleContext*(*)(AbstractButton*)>(&AbstractButton::access$000))},
	{"actionPropertyChanged", "(Ljavax/swing/Action;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED},
	{"addItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC},
	{"checkHorizontalKey", "(ILjava/lang/String;)I", nullptr, $PROTECTED},
	{"checkVerticalKey", "(ILjava/lang/String;)I", nullptr, $PROTECTED},
	{"clientPropertyChanged", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0},
	{"configurePropertiesFromAction", "(Ljavax/swing/Action;)V", nullptr, $PROTECTED},
	{"createActionListener", "()Ljava/awt/event/ActionListener;", nullptr, $PROTECTED},
	{"createActionPropertyChangeListener", "(Ljavax/swing/Action;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createActionPropertyChangeListener0", "(Ljavax/swing/Action;)Ljava/beans/PropertyChangeListener;", nullptr, 0},
	{"createChangeListener", "()Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"createItemListener", "()Ljava/awt/event/ItemListener;", nullptr, $PROTECTED},
	{"doClick", "()V", nullptr, $PUBLIC},
	{"doClick", "(I)V", nullptr, $PUBLIC},
	{"fireActionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PROTECTED},
	{"fireItemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PROTECTED},
	{"fireStateChanged", "()V", nullptr, $PROTECTED},
	{"getAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getActionCommand", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getActionListeners", "()[Ljava/awt/event/ActionListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_getActionListeners23},
	{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_getChangeListeners24},
	{"getDisabledIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_getDisabledIcon25},
	{"getDisabledSelectedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getDisplayedMnemonicIndex", "()I", nullptr, $PUBLIC},
	{"getHandler", "()Ljavax/swing/AbstractButton$Handler;", nullptr, $PRIVATE, $method(static_cast<$AbstractButton$Handler*(AbstractButton::*)()>(&AbstractButton::getHandler))},
	{"getHideActionText", "()Z", nullptr, $PUBLIC},
	{"getHorizontalAlignment", "()I", nullptr, $PUBLIC},
	{"getHorizontalTextPosition", "()I", nullptr, $PUBLIC},
	{"getIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getIconTextGap", "()I", nullptr, $PUBLIC},
	{"getItemListeners", "()[Ljava/awt/event/ItemListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_getItemListeners34},
	{"getLabel", "()Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_getLabel35},
	{"getMargin", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getMnemonic", "()I", nullptr, $PUBLIC},
	{"getModel", "()Ljavax/swing/ButtonModel;", nullptr, $PUBLIC},
	{"getMultiClickThreshhold", "()J", nullptr, $PUBLIC},
	{"getPressedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getRolloverIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getRolloverSelectedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getSelectedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getSelectedObjects", "()[Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_getSelectedObjects44},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/ButtonUI;", nullptr, $PUBLIC},
	{"getVerticalAlignment", "()I", nullptr, $PUBLIC},
	{"getVerticalTextPosition", "()I", nullptr, $PUBLIC},
	{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC},
	{"init", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PROTECTED},
	{"isBorderPainted", "()Z", nullptr, $PUBLIC},
	{"isContentAreaFilled", "()Z", nullptr, $PUBLIC},
	{"isFocusPainted", "()Z", nullptr, $PUBLIC},
	{"isListener", "(Ljava/lang/Class;Ljava/awt/event/ActionListener;)Z", "(Ljava/lang/Class<*>;Ljava/awt/event/ActionListener;)Z", $PRIVATE, $method(static_cast<bool(AbstractButton::*)($Class*,$ActionListener*)>(&AbstractButton::isListener))},
	{"isRolloverEnabled", "()Z", nullptr, $PUBLIC},
	{"isSelected", "()Z", nullptr, $PUBLIC},
	{"largeIconChanged", "(Ljavax/swing/Action;)V", nullptr, 0},
	{"paintBorder", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"removeItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"setAction", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setAction64},
	{"setActionCommand", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setActionCommandFromAction", "(Ljavax/swing/Action;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractButton::*)($Action*)>(&AbstractButton::setActionCommandFromAction))},
	{"setBorderPainted", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setBorderPainted67},
	{"setContentAreaFilled", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setContentAreaFilled68},
	{"setDisabledIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setDisabledIcon69},
	{"setDisabledSelectedIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setDisabledSelectedIcon70},
	{"setDisplayedMnemonicIndex", "(I)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException", nullptr, _AbstractButton_MethodAnnotations_setDisplayedMnemonicIndex71},
	{"setDisplayedMnemonicIndexFromAction", "(Ljavax/swing/Action;Z)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractButton::*)($Action*,bool)>(&AbstractButton::setDisplayedMnemonicIndexFromAction))},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFocusPainted", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setFocusPainted74},
	{"setHideActionText", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setHideActionText75},
	{"setHorizontalAlignment", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setHorizontalAlignment76},
	{"setHorizontalTextPosition", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setHorizontalTextPosition77},
	{"setIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setIcon78},
	{"setIconFromAction", "(Ljavax/swing/Action;)V", nullptr, 0},
	{"setIconTextGap", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setIconTextGap80},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setLabel81},
	{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC},
	{"setMargin", "(Ljava/awt/Insets;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setMargin83},
	{"setMnemonic", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setMnemonic84},
	{"setMnemonic", "(C)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setMnemonic85},
	{"setMnemonicFromAction", "(Ljavax/swing/Action;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractButton::*)($Action*)>(&AbstractButton::setMnemonicFromAction))},
	{"setModel", "(Ljavax/swing/ButtonModel;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setModel87},
	{"setMultiClickThreshhold", "(J)V", nullptr, $PUBLIC},
	{"setPressedIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setPressedIcon89},
	{"setRolloverEnabled", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setRolloverEnabled90},
	{"setRolloverIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setRolloverIcon91},
	{"setRolloverSelectedIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setRolloverSelectedIcon92},
	{"setSelected", "(Z)V", nullptr, $PUBLIC},
	{"setSelectedFromAction", "(Ljavax/swing/Action;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractButton::*)($Action*)>(&AbstractButton::setSelectedFromAction))},
	{"setSelectedIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setSelectedIcon95},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setText96},
	{"setTextFromAction", "(Ljavax/swing/Action;Z)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractButton::*)($Action*,bool)>(&AbstractButton::setTextFromAction))},
	{"setUI", "(Ljavax/swing/plaf/ButtonUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setUI98},
	{"setUIProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0},
	{"setVerticalAlignment", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setVerticalAlignment100},
	{"setVerticalTextPosition", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AbstractButton_MethodAnnotations_setVerticalTextPosition101},
	{"shouldUpdateSelectedStateFromAction", "()Z", nullptr, 0},
	{"smallIconChanged", "(Ljavax/swing/Action;)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateDisplayedMnemonicIndex", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractButton::*)($String*,int32_t)>(&AbstractButton::updateDisplayedMnemonicIndex))},
	{"updateMnemonicProperties", "()V", nullptr, $PRIVATE, $method(static_cast<void(AbstractButton::*)()>(&AbstractButton::updateMnemonicProperties))},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractButton_InnerClassesInfo_[] = {
	{"javax.swing.AbstractButton$AccessibleAbstractButton", "javax.swing.AbstractButton", "AccessibleAbstractButton", $PROTECTED | $ABSTRACT},
	{"javax.swing.AbstractButton$Handler", "javax.swing.AbstractButton", "Handler", 0},
	{"javax.swing.AbstractButton$ButtonChangeListener", "javax.swing.AbstractButton", "ButtonChangeListener", $PROTECTED},
	{"javax.swing.AbstractButton$ButtonActionPropertyChangeListener", "javax.swing.AbstractButton", "ButtonActionPropertyChangeListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AbstractButton_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.AbstractButton",
	"javax.swing.JComponent",
	"java.awt.ItemSelectable,javax.swing.SwingConstants",
	_AbstractButton_FieldInfo_,
	_AbstractButton_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractButton_InnerClassesInfo_,
	_AbstractButton_Annotations_,
	nullptr,
	"javax.swing.AbstractButton$AccessibleAbstractButton,javax.swing.AbstractButton$AccessibleAbstractButton$ButtonKeyBinding,javax.swing.AbstractButton$Handler,javax.swing.AbstractButton$ButtonChangeListener,javax.swing.AbstractButton$ButtonActionPropertyChangeListener"
};

$Object* allocate$AbstractButton($Class* clazz) {
	return $of($alloc(AbstractButton));
}

$String* AbstractButton::toString() {
	 return this->$JComponent::toString();
}

int32_t AbstractButton::hashCode() {
	 return this->$JComponent::hashCode();
}

bool AbstractButton::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* AbstractButton::clone() {
	 return this->$JComponent::clone();
}

void AbstractButton::finalize() {
	this->$JComponent::finalize();
}


$String* AbstractButton::MODEL_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::TEXT_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::MNEMONIC_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::MARGIN_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::VERTICAL_ALIGNMENT_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::HORIZONTAL_ALIGNMENT_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::VERTICAL_TEXT_POSITION_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::HORIZONTAL_TEXT_POSITION_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::BORDER_PAINTED_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::FOCUS_PAINTED_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::ROLLOVER_ENABLED_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::CONTENT_AREA_FILLED_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::ICON_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::PRESSED_ICON_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::SELECTED_ICON_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::ROLLOVER_ICON_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::ROLLOVER_SELECTED_ICON_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::DISABLED_ICON_CHANGED_PROPERTY = nullptr;

$String* AbstractButton::DISABLED_SELECTED_ICON_CHANGED_PROPERTY = nullptr;

$AccessibleContext* AbstractButton::access$000(AbstractButton* x0) {
	$init(AbstractButton);
	return $nc(x0)->accessibleContext;
}

void AbstractButton::init$() {
	$JComponent::init$();
	$set(this, model, nullptr);
	$set(this, text, ""_s);
	$set(this, margin, nullptr);
	$set(this, defaultMargin, nullptr);
	$set(this, defaultIcon, nullptr);
	$set(this, pressedIcon, nullptr);
	$set(this, disabledIcon, nullptr);
	$set(this, selectedIcon, nullptr);
	$set(this, disabledSelectedIcon, nullptr);
	$set(this, rolloverIcon, nullptr);
	$set(this, rolloverSelectedIcon, nullptr);
	this->paintBorder$ = true;
	this->paintFocus = true;
	this->rolloverEnabled = false;
	this->contentAreaFilled = true;
	this->verticalAlignment = $SwingConstants::CENTER;
	this->horizontalAlignment = $SwingConstants::CENTER;
	this->verticalTextPosition = $SwingConstants::CENTER;
	this->horizontalTextPosition = $SwingConstants::TRAILING;
	this->iconTextGap = 4;
	this->mnemonicIndex = -1;
	this->multiClickThreshhold = 0;
	this->borderPaintedSet = false;
	this->rolloverEnabledSet = false;
	this->iconTextGapSet = false;
	this->contentAreaFilledSet = false;
	this->setLayout$ = false;
	this->defaultCapable = true;
	$set(this, changeListener, nullptr);
	$set(this, actionListener, nullptr);
	$set(this, itemListener, nullptr);
	this->hideActionText = false;
}

void AbstractButton::setHideActionText(bool hideActionText) {
	if (hideActionText != this->hideActionText) {
		this->hideActionText = hideActionText;
		if (getAction() != nullptr) {
			setTextFromAction($(getAction()), false);
		}
		firePropertyChange("hideActionText"_s, !hideActionText, hideActionText);
	}
}

bool AbstractButton::getHideActionText() {
	return this->hideActionText;
}

$String* AbstractButton::getText() {
	return this->text;
}

void AbstractButton::setText($String* text) {
	$var($String, oldValue, this->text);
	$set(this, text, text);
	firePropertyChange(AbstractButton::TEXT_CHANGED_PROPERTY, $of(oldValue), $of(text));
	updateDisplayedMnemonicIndex(text, getMnemonic());
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, oldValue, text);
	}
	if (text == nullptr || oldValue == nullptr || !$nc(text)->equals(oldValue)) {
		revalidate();
		repaint();
	}
}

bool AbstractButton::isSelected() {
	return $nc(this->model)->isSelected();
}

void AbstractButton::setSelected(bool b) {
	bool oldValue = isSelected();
	$nc(this->model)->setSelected(b);
}

void AbstractButton::doClick() {
	doClick(68);
}

void AbstractButton::doClick(int32_t pressTime) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, getSize());
	$nc(this->model)->setArmed(true);
	$nc(this->model)->setPressed(true);
	paintImmediately($$new($Rectangle, 0, 0, $nc(size)->width, size->height));
	try {
		$Thread::sleep(pressTime);
	} catch ($InterruptedException&) {
		$catch();
	}
	$nc(this->model)->setPressed(false);
	$nc(this->model)->setArmed(false);
}

void AbstractButton::setMargin($Insets* m$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, m, m$renamed);
	if ($instanceOf($UIResource, m)) {
		$set(this, defaultMargin, m);
	} else if ($instanceOf($UIResource, this->margin)) {
		$set(this, defaultMargin, this->margin);
	}
	if (m == nullptr && this->defaultMargin != nullptr) {
		$assign(m, this->defaultMargin);
	}
	$var($Insets, old, this->margin);
	$set(this, margin, m);
	firePropertyChange(AbstractButton::MARGIN_CHANGED_PROPERTY, $of(old), $of(m));
	if (old == nullptr || !$nc(old)->equals(m)) {
		revalidate();
		repaint();
	}
}

$Insets* AbstractButton::getMargin() {
	return (this->margin == nullptr) ? ($Insets*)nullptr : $cast($Insets, $nc(this->margin)->clone());
}

$Icon* AbstractButton::getIcon() {
	return this->defaultIcon;
}

void AbstractButton::setIcon($Icon* defaultIcon) {
	$var($Icon, oldValue, this->defaultIcon);
	$set(this, defaultIcon, defaultIcon);
	if (defaultIcon != oldValue && ($instanceOf($UIResource, this->disabledIcon))) {
		$set(this, disabledIcon, nullptr);
	}
	firePropertyChange(AbstractButton::ICON_CHANGED_PROPERTY, $of(oldValue), $of(defaultIcon));
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, oldValue, defaultIcon);
	}
	if (defaultIcon != oldValue) {
		bool var$1 = defaultIcon == nullptr || oldValue == nullptr;
		if (!var$1) {
			int32_t var$2 = $nc(defaultIcon)->getIconWidth();
			var$1 = var$2 != $nc(oldValue)->getIconWidth();
		}
		bool var$0 = var$1;
		if (!var$0) {
			int32_t var$3 = $nc(defaultIcon)->getIconHeight();
			var$0 = var$3 != $nc(oldValue)->getIconHeight();
		}
		if (var$0) {
			revalidate();
		}
		repaint();
	}
}

$Icon* AbstractButton::getPressedIcon() {
	return this->pressedIcon;
}

void AbstractButton::setPressedIcon($Icon* pressedIcon) {
	$useLocalCurrentObjectStackCache();
	$var($Icon, oldValue, this->pressedIcon);
	$set(this, pressedIcon, pressedIcon);
	firePropertyChange(AbstractButton::PRESSED_ICON_CHANGED_PROPERTY, $of(oldValue), $of(pressedIcon));
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, oldValue, pressedIcon);
	}
	if (pressedIcon != oldValue) {
		if ($nc($(getModel()))->isPressed()) {
			repaint();
		}
	}
}

$Icon* AbstractButton::getSelectedIcon() {
	return this->selectedIcon;
}

void AbstractButton::setSelectedIcon($Icon* selectedIcon) {
	$var($Icon, oldValue, this->selectedIcon);
	$set(this, selectedIcon, selectedIcon);
	if (selectedIcon != oldValue && $instanceOf($UIResource, this->disabledSelectedIcon)) {
		$set(this, disabledSelectedIcon, nullptr);
	}
	firePropertyChange(AbstractButton::SELECTED_ICON_CHANGED_PROPERTY, $of(oldValue), $of(selectedIcon));
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, oldValue, selectedIcon);
	}
	if (selectedIcon != oldValue) {
		if (isSelected()) {
			repaint();
		}
	}
}

$Icon* AbstractButton::getRolloverIcon() {
	return this->rolloverIcon;
}

void AbstractButton::setRolloverIcon($Icon* rolloverIcon) {
	$var($Icon, oldValue, this->rolloverIcon);
	$set(this, rolloverIcon, rolloverIcon);
	firePropertyChange(AbstractButton::ROLLOVER_ICON_CHANGED_PROPERTY, $of(oldValue), $of(rolloverIcon));
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, oldValue, rolloverIcon);
	}
	setRolloverEnabled(true);
	if (rolloverIcon != oldValue) {
		repaint();
	}
}

$Icon* AbstractButton::getRolloverSelectedIcon() {
	return this->rolloverSelectedIcon;
}

void AbstractButton::setRolloverSelectedIcon($Icon* rolloverSelectedIcon) {
	$var($Icon, oldValue, this->rolloverSelectedIcon);
	$set(this, rolloverSelectedIcon, rolloverSelectedIcon);
	firePropertyChange(AbstractButton::ROLLOVER_SELECTED_ICON_CHANGED_PROPERTY, $of(oldValue), $of(rolloverSelectedIcon));
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, oldValue, rolloverSelectedIcon);
	}
	setRolloverEnabled(true);
	if (rolloverSelectedIcon != oldValue) {
		if (isSelected()) {
			repaint();
		}
	}
}

$Icon* AbstractButton::getDisabledIcon() {
	$useLocalCurrentObjectStackCache();
	if (this->disabledIcon == nullptr) {
		$set(this, disabledIcon, $nc($($UIManager::getLookAndFeel()))->getDisabledIcon(this, $(getIcon())));
		if (this->disabledIcon != nullptr) {
			firePropertyChange(AbstractButton::DISABLED_ICON_CHANGED_PROPERTY, ($Object*)nullptr, $of(this->disabledIcon));
		}
	}
	return this->disabledIcon;
}

void AbstractButton::setDisabledIcon($Icon* disabledIcon) {
	$var($Icon, oldValue, this->disabledIcon);
	$set(this, disabledIcon, disabledIcon);
	firePropertyChange(AbstractButton::DISABLED_ICON_CHANGED_PROPERTY, $of(oldValue), $of(disabledIcon));
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, oldValue, disabledIcon);
	}
	if (disabledIcon != oldValue) {
		if (!isEnabled()) {
			repaint();
		}
	}
}

$Icon* AbstractButton::getDisabledSelectedIcon() {
	$useLocalCurrentObjectStackCache();
	if (this->disabledSelectedIcon == nullptr) {
		if (this->selectedIcon != nullptr) {
			$set(this, disabledSelectedIcon, $nc($($UIManager::getLookAndFeel()))->getDisabledSelectedIcon(this, $(getSelectedIcon())));
		} else {
			return getDisabledIcon();
		}
	}
	return this->disabledSelectedIcon;
}

void AbstractButton::setDisabledSelectedIcon($Icon* disabledSelectedIcon) {
	$var($Icon, oldValue, this->disabledSelectedIcon);
	$set(this, disabledSelectedIcon, disabledSelectedIcon);
	firePropertyChange(AbstractButton::DISABLED_SELECTED_ICON_CHANGED_PROPERTY, $of(oldValue), $of(disabledSelectedIcon));
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, oldValue, disabledSelectedIcon);
	}
	if (disabledSelectedIcon != oldValue) {
		bool var$1 = disabledSelectedIcon == nullptr || oldValue == nullptr;
		if (!var$1) {
			int32_t var$2 = $nc(disabledSelectedIcon)->getIconWidth();
			var$1 = var$2 != $nc(oldValue)->getIconWidth();
		}
		bool var$0 = var$1;
		if (!var$0) {
			int32_t var$3 = $nc(disabledSelectedIcon)->getIconHeight();
			var$0 = var$3 != $nc(oldValue)->getIconHeight();
		}
		if (var$0) {
			revalidate();
		}
		bool var$4 = !isEnabled();
		if (var$4 && isSelected()) {
			repaint();
		}
	}
}

int32_t AbstractButton::getVerticalAlignment() {
	return this->verticalAlignment;
}

void AbstractButton::setVerticalAlignment(int32_t alignment) {
	if (alignment == this->verticalAlignment) {
		return;
	}
	int32_t oldValue = this->verticalAlignment;
	this->verticalAlignment = checkVerticalKey(alignment, "verticalAlignment"_s);
	firePropertyChange(AbstractButton::VERTICAL_ALIGNMENT_CHANGED_PROPERTY, oldValue, this->verticalAlignment);
	repaint();
}

int32_t AbstractButton::getHorizontalAlignment() {
	return this->horizontalAlignment;
}

void AbstractButton::setHorizontalAlignment(int32_t alignment) {
	if (alignment == this->horizontalAlignment) {
		return;
	}
	int32_t oldValue = this->horizontalAlignment;
	this->horizontalAlignment = checkHorizontalKey(alignment, "horizontalAlignment"_s);
	firePropertyChange(AbstractButton::HORIZONTAL_ALIGNMENT_CHANGED_PROPERTY, oldValue, this->horizontalAlignment);
	repaint();
}

int32_t AbstractButton::getVerticalTextPosition() {
	return this->verticalTextPosition;
}

void AbstractButton::setVerticalTextPosition(int32_t textPosition) {
	if (textPosition == this->verticalTextPosition) {
		return;
	}
	int32_t oldValue = this->verticalTextPosition;
	this->verticalTextPosition = checkVerticalKey(textPosition, "verticalTextPosition"_s);
	firePropertyChange(AbstractButton::VERTICAL_TEXT_POSITION_CHANGED_PROPERTY, oldValue, this->verticalTextPosition);
	revalidate();
	repaint();
}

int32_t AbstractButton::getHorizontalTextPosition() {
	return this->horizontalTextPosition;
}

void AbstractButton::setHorizontalTextPosition(int32_t textPosition) {
	if (textPosition == this->horizontalTextPosition) {
		return;
	}
	int32_t oldValue = this->horizontalTextPosition;
	this->horizontalTextPosition = checkHorizontalKey(textPosition, "horizontalTextPosition"_s);
	firePropertyChange(AbstractButton::HORIZONTAL_TEXT_POSITION_CHANGED_PROPERTY, oldValue, this->horizontalTextPosition);
	revalidate();
	repaint();
}

int32_t AbstractButton::getIconTextGap() {
	return this->iconTextGap;
}

void AbstractButton::setIconTextGap(int32_t iconTextGap) {
	int32_t oldValue = this->iconTextGap;
	this->iconTextGap = iconTextGap;
	this->iconTextGapSet = true;
	firePropertyChange("iconTextGap"_s, oldValue, iconTextGap);
	if (iconTextGap != oldValue) {
		revalidate();
		repaint();
	}
}

int32_t AbstractButton::checkHorizontalKey(int32_t key, $String* exception) {
	if ((key == $SwingConstants::LEFT) || (key == $SwingConstants::CENTER) || (key == $SwingConstants::RIGHT) || (key == $SwingConstants::LEADING) || (key == $SwingConstants::TRAILING)) {
		return key;
	} else {
		$throwNew($IllegalArgumentException, exception);
	}
}

int32_t AbstractButton::checkVerticalKey(int32_t key, $String* exception) {
	if ((key == $SwingConstants::TOP) || (key == $SwingConstants::CENTER) || (key == $SwingConstants::BOTTOM)) {
		return key;
	} else {
		$throwNew($IllegalArgumentException, exception);
	}
}

void AbstractButton::removeNotify() {
	$JComponent::removeNotify();
	if (isRolloverEnabled()) {
		$nc($(getModel()))->setRollover(false);
	}
}

void AbstractButton::setActionCommand($String* actionCommand) {
	$nc($(getModel()))->setActionCommand(actionCommand);
}

$String* AbstractButton::getActionCommand() {
	$useLocalCurrentObjectStackCache();
	$var($String, ac, $nc($(getModel()))->getActionCommand());
	if (ac == nullptr) {
		$assign(ac, getText());
	}
	return ac;
}

void AbstractButton::setAction($Action* a) {
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

bool AbstractButton::isListener($Class* c, $ActionListener* a) {
	bool isListener = false;
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		if ($equals(listeners->get(i), c) && $equals(listeners->get(i + 1), a)) {
			isListener = true;
		}
	}
	return isListener;
}

$Action* AbstractButton::getAction() {
	return this->action$;
}

void AbstractButton::configurePropertiesFromAction($Action* a) {
	setMnemonicFromAction(a);
	setTextFromAction(a, false);
	$AbstractAction::setToolTipTextFromAction(this, a);
	setIconFromAction(a);
	setActionCommandFromAction(a);
	$AbstractAction::setEnabledFromAction(this, a);
	bool var$0 = $AbstractAction::hasSelectedKey(a);
	if (var$0 && shouldUpdateSelectedStateFromAction()) {
		setSelectedFromAction(a);
	}
	setDisplayedMnemonicIndexFromAction(a, false);
}

void AbstractButton::clientPropertyChanged(Object$* key, Object$* oldValue, Object$* newValue) {
	if ($equals(key, "hideActionText"_s)) {
		bool current = ($instanceOf($Boolean, newValue)) ? $nc(($cast($Boolean, newValue)))->booleanValue() : false;
		if (getHideActionText() != current) {
			setHideActionText(current);
		}
	}
}

bool AbstractButton::shouldUpdateSelectedStateFromAction() {
	return false;
}

void AbstractButton::actionPropertyChanged($Action* action, $String* propertyName) {
	$init($Action);
	if (propertyName == $Action::NAME) {
		setTextFromAction(action, true);
	} else if (propertyName == "enabled"_s) {
		$AbstractAction::setEnabledFromAction(this, action);
	} else {
		if (propertyName == $Action::SHORT_DESCRIPTION) {
			$AbstractAction::setToolTipTextFromAction(this, action);
		} else {
			if (propertyName == $Action::SMALL_ICON) {
				smallIconChanged(action);
			} else {
				if (propertyName == $Action::MNEMONIC_KEY) {
					setMnemonicFromAction(action);
				} else {
					if (propertyName == $Action::ACTION_COMMAND_KEY) {
						setActionCommandFromAction(action);
					} else {
						bool var$1 = propertyName == $Action::SELECTED_KEY && $AbstractAction::hasSelectedKey(action);
						if (var$1 && shouldUpdateSelectedStateFromAction()) {
							setSelectedFromAction(action);
						} else {
							if (propertyName == $Action::DISPLAYED_MNEMONIC_INDEX_KEY) {
								setDisplayedMnemonicIndexFromAction(action, true);
							} else {
								if (propertyName == $Action::LARGE_ICON_KEY) {
									largeIconChanged(action);
								}
							}
						}
					}
				}
			}
		}
	}
}

void AbstractButton::setDisplayedMnemonicIndexFromAction($Action* a, bool fromPropertyChange) {
	$useLocalCurrentObjectStackCache();
	$init($Action);
	$var($Integer, iValue, (a == nullptr) ? ($Integer*)nullptr : $cast($Integer, $nc(a)->getValue($Action::DISPLAYED_MNEMONIC_INDEX_KEY)));
	if (fromPropertyChange || iValue != nullptr) {
		int32_t value = 0;
		if (iValue == nullptr) {
			value = -1;
		} else {
			value = iValue->intValue();
			$var($String, text, getText());
			if (text == nullptr || value >= $nc(text)->length()) {
				value = -1;
			}
		}
		setDisplayedMnemonicIndex(value);
	}
}

void AbstractButton::setMnemonicFromAction($Action* a) {
	$init($Action);
	$var($Integer, n, (a == nullptr) ? ($Integer*)nullptr : $cast($Integer, $nc(a)->getValue($Action::MNEMONIC_KEY)));
	setMnemonic((n == nullptr) ? (int32_t)u'\0' : $nc(n)->intValue());
}

void AbstractButton::setTextFromAction($Action* a, bool propertyChange) {
	$useLocalCurrentObjectStackCache();
	bool hideText = getHideActionText();
	if (!propertyChange) {
		$init($Action);
		setText((a != nullptr && !hideText) ? $cast($String, $($nc(a)->getValue($Action::NAME))) : ($String*)nullptr);
	} else if (!hideText) {
		$init($Action);
		setText($cast($String, $($nc(a)->getValue($Action::NAME))));
	}
}

void AbstractButton::setIconFromAction($Action* a) {
	$var($Icon, icon, nullptr);
	if (a != nullptr) {
		$init($Action);
		$assign(icon, $cast($Icon, a->getValue($Action::LARGE_ICON_KEY)));
		if (icon == nullptr) {
			$assign(icon, $cast($Icon, a->getValue($Action::SMALL_ICON)));
		}
	}
	setIcon(icon);
}

void AbstractButton::smallIconChanged($Action* a) {
	$init($Action);
	if ($nc(a)->getValue($Action::LARGE_ICON_KEY) == nullptr) {
		setIconFromAction(a);
	}
}

void AbstractButton::largeIconChanged($Action* a) {
	setIconFromAction(a);
}

void AbstractButton::setActionCommandFromAction($Action* a) {
	$init($Action);
	setActionCommand((a != nullptr) ? $cast($String, $($nc(a)->getValue($Action::ACTION_COMMAND_KEY))) : ($String*)nullptr);
}

void AbstractButton::setSelectedFromAction($Action* a) {
	$useLocalCurrentObjectStackCache();
	bool selected = false;
	if (a != nullptr) {
		selected = $AbstractAction::isSelected(a);
	}
	if (selected != isSelected()) {
		setSelected(selected);
		if (!selected && isSelected()) {
			if ($instanceOf($DefaultButtonModel, $(getModel()))) {
				$var($ButtonGroup, group, $nc(($cast($DefaultButtonModel, $(getModel()))))->getGroup());
				if (group != nullptr) {
					group->clearSelection();
				}
			}
		}
	}
}

$PropertyChangeListener* AbstractButton::createActionPropertyChangeListener($Action* a) {
	return createActionPropertyChangeListener0(a);
}

$PropertyChangeListener* AbstractButton::createActionPropertyChangeListener0($Action* a) {
	return $new($AbstractButton$ButtonActionPropertyChangeListener, this, a);
}

bool AbstractButton::isBorderPainted() {
	return this->paintBorder$;
}

void AbstractButton::setBorderPainted(bool b) {
	bool oldValue = this->paintBorder$;
	this->paintBorder$ = b;
	this->borderPaintedSet = true;
	firePropertyChange(AbstractButton::BORDER_PAINTED_CHANGED_PROPERTY, oldValue, this->paintBorder$);
	if (b != oldValue) {
		revalidate();
		repaint();
	}
}

void AbstractButton::paintBorder($Graphics* g) {
	if (isBorderPainted()) {
		$JComponent::paintBorder(g);
	}
}

bool AbstractButton::isFocusPainted() {
	return this->paintFocus;
}

void AbstractButton::setFocusPainted(bool b) {
	bool oldValue = this->paintFocus;
	this->paintFocus = b;
	firePropertyChange(AbstractButton::FOCUS_PAINTED_CHANGED_PROPERTY, oldValue, this->paintFocus);
	if (b != oldValue && isFocusOwner()) {
		revalidate();
		repaint();
	}
}

bool AbstractButton::isContentAreaFilled() {
	return this->contentAreaFilled;
}

void AbstractButton::setContentAreaFilled(bool b) {
	bool oldValue = this->contentAreaFilled;
	this->contentAreaFilled = b;
	this->contentAreaFilledSet = true;
	firePropertyChange(AbstractButton::CONTENT_AREA_FILLED_CHANGED_PROPERTY, oldValue, this->contentAreaFilled);
	if (b != oldValue) {
		repaint();
	}
}

bool AbstractButton::isRolloverEnabled() {
	return this->rolloverEnabled;
}

void AbstractButton::setRolloverEnabled(bool b) {
	bool oldValue = this->rolloverEnabled;
	this->rolloverEnabled = b;
	this->rolloverEnabledSet = true;
	firePropertyChange(AbstractButton::ROLLOVER_ENABLED_CHANGED_PROPERTY, oldValue, this->rolloverEnabled);
	if (b != oldValue) {
		repaint();
	}
}

int32_t AbstractButton::getMnemonic() {
	return this->mnemonic;
}

void AbstractButton::setMnemonic(int32_t mnemonic) {
	int32_t oldValue = getMnemonic();
	$nc(this->model)->setMnemonic(mnemonic);
	updateMnemonicProperties();
}

void AbstractButton::setMnemonic(char16_t mnemonic) {
	int32_t vk = (int32_t)mnemonic;
	if (vk >= u'a' && vk <= u'z') {
		vk -= (u'a' - u'A');
	}
	setMnemonic(vk);
}

void AbstractButton::setDisplayedMnemonicIndex(int32_t index) {
	$useLocalCurrentObjectStackCache();
	int32_t oldValue = this->mnemonicIndex;
	if (index == -1) {
		this->mnemonicIndex = -1;
	} else {
		$var($String, text, getText());
		int32_t textLength = (text == nullptr) ? 0 : $nc(text)->length();
		if (index < -1 || index >= textLength) {
			$throwNew($IllegalArgumentException, $$str({"index == "_s, $$str(index)}));
		}
	}
	this->mnemonicIndex = index;
	firePropertyChange("displayedMnemonicIndex"_s, oldValue, index);
	if (index != oldValue) {
		revalidate();
		repaint();
	}
}

int32_t AbstractButton::getDisplayedMnemonicIndex() {
	return this->mnemonicIndex;
}

void AbstractButton::updateDisplayedMnemonicIndex($String* text, int32_t mnemonic) {
	setDisplayedMnemonicIndex($SwingUtilities::findDisplayedMnemonicIndex(text, mnemonic));
}

void AbstractButton::updateMnemonicProperties() {
	int32_t newMnemonic = $nc(this->model)->getMnemonic();
	if (this->mnemonic != newMnemonic) {
		int32_t oldValue = this->mnemonic;
		this->mnemonic = newMnemonic;
		firePropertyChange(AbstractButton::MNEMONIC_CHANGED_PROPERTY, oldValue, this->mnemonic);
		updateDisplayedMnemonicIndex($(getText()), this->mnemonic);
		revalidate();
		repaint();
	}
}

void AbstractButton::setMultiClickThreshhold(int64_t threshhold) {
	if (threshhold < 0) {
		$throwNew($IllegalArgumentException, "threshhold must be >= 0"_s);
	}
	this->multiClickThreshhold = threshhold;
}

int64_t AbstractButton::getMultiClickThreshhold() {
	return this->multiClickThreshhold;
}

$ButtonModel* AbstractButton::getModel() {
	return this->model;
}

void AbstractButton::setModel($ButtonModel* newModel) {
	$useLocalCurrentObjectStackCache();
	$var($ButtonModel, oldModel, getModel());
	if (oldModel != nullptr) {
		oldModel->removeChangeListener(this->changeListener);
		oldModel->removeActionListener(this->actionListener);
		oldModel->removeItemListener(this->itemListener);
		$set(this, changeListener, nullptr);
		$set(this, actionListener, nullptr);
		$set(this, itemListener, nullptr);
	}
	$set(this, model, newModel);
	if (newModel != nullptr) {
		$set(this, changeListener, createChangeListener());
		$set(this, actionListener, createActionListener());
		$set(this, itemListener, createItemListener());
		newModel->addChangeListener(this->changeListener);
		newModel->addActionListener(this->actionListener);
		newModel->addItemListener(this->itemListener);
		updateMnemonicProperties();
		$JComponent::setEnabled(newModel->isEnabled());
	} else {
		this->mnemonic = u'\0';
	}
	updateDisplayedMnemonicIndex($(getText()), this->mnemonic);
	firePropertyChange(AbstractButton::MODEL_CHANGED_PROPERTY, $of(oldModel), $of(newModel));
	if (newModel != oldModel) {
		revalidate();
		repaint();
	}
}

$ComponentUI* AbstractButton::getUI() {
	return $cast($ButtonUI, this->ui);
}

void AbstractButton::setUI($ButtonUI* ui) {
	$JComponent::setUI(ui);
	if ($instanceOf($UIResource, this->disabledIcon)) {
		setDisabledIcon(nullptr);
	}
	if ($instanceOf($UIResource, this->disabledSelectedIcon)) {
		setDisabledSelectedIcon(nullptr);
	}
}

void AbstractButton::updateUI() {
}

void AbstractButton::addImpl($Component* comp, Object$* constraints, int32_t index) {
	if (!this->setLayout$) {
		setLayout($$new($OverlayLayout, this));
	}
	$JComponent::addImpl(comp, constraints, index);
}

void AbstractButton::setLayout($LayoutManager* mgr) {
	this->setLayout$ = true;
	$JComponent::setLayout(mgr);
}

void AbstractButton::addChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->add($ChangeListener::class$, l);
}

void AbstractButton::removeChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->remove($ChangeListener::class$, l);
}

$ChangeListenerArray* AbstractButton::getChangeListeners() {
	$load($ChangeListener);
	return $fcast($ChangeListenerArray, $nc(this->listenerList)->getListeners($ChangeListener::class$));
}

void AbstractButton::fireStateChanged() {
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

void AbstractButton::addActionListener($ActionListener* l) {
	$load($ActionListener);
	$nc(this->listenerList)->add($ActionListener::class$, l);
}

void AbstractButton::removeActionListener($ActionListener* l) {
	if ((l != nullptr) && ($equals(getAction(), l))) {
		setAction(nullptr);
	} else {
		$load($ActionListener);
		$nc(this->listenerList)->remove($ActionListener::class$, l);
	}
}

$ActionListenerArray* AbstractButton::getActionListeners() {
	$load($ActionListener);
	return $fcast($ActionListenerArray, $nc(this->listenerList)->getListeners($ActionListener::class$));
}

$ChangeListener* AbstractButton::createChangeListener() {
	return getHandler();
}

void AbstractButton::fireActionPerformed($ActionEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($ActionEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ActionListener);
		if ($equals(listeners->get(i), $ActionListener::class$)) {
			if (e == nullptr) {
				$var($String, actionCommand, $nc(event)->getActionCommand());
				if (actionCommand == nullptr) {
					$assign(actionCommand, getActionCommand());
				}
				$var($String, var$0, actionCommand);
				int64_t var$1 = event->getWhen();
				$assign(e, $new($ActionEvent, this, $ActionEvent::ACTION_PERFORMED, var$0, var$1, event->getModifiers()));
			}
			$nc(($cast($ActionListener, listeners->get(i + 1))))->actionPerformed(e);
		}
	}
}

void AbstractButton::fireItemStateChanged($ItemEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($ItemEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ItemListener);
		if ($equals(listeners->get(i), $ItemListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($ItemEvent, this, $ItemEvent::ITEM_STATE_CHANGED, this, $nc(event)->getStateChange()));
			}
			$nc(($cast($ItemListener, listeners->get(i + 1))))->itemStateChanged(e);
		}
	}
	if (this->accessibleContext != nullptr) {
		if ($nc(event)->getStateChange() == $ItemEvent::SELECTED) {
			$init($AccessibleContext);
			$init($AccessibleState);
			$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::SELECTED);
			$var($String, var$0, $AccessibleContext::ACCESSIBLE_VALUE_PROPERTY);
			$var($Object, var$1, $of($Integer::valueOf(0)));
			$nc(this->accessibleContext)->firePropertyChange(var$0, var$1, $($Integer::valueOf(1)));
		} else {
			$init($AccessibleContext);
			$init($AccessibleState);
			$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::SELECTED, nullptr);
			$var($String, var$2, $AccessibleContext::ACCESSIBLE_VALUE_PROPERTY);
			$var($Object, var$3, $of($Integer::valueOf(1)));
			$nc(this->accessibleContext)->firePropertyChange(var$2, var$3, $($Integer::valueOf(0)));
		}
	}
}

$ActionListener* AbstractButton::createActionListener() {
	return getHandler();
}

$ItemListener* AbstractButton::createItemListener() {
	return getHandler();
}

void AbstractButton::setEnabled(bool b) {
	if (!b && $nc(this->model)->isRollover()) {
		$nc(this->model)->setRollover(false);
	}
	$JComponent::setEnabled(b);
	$nc(this->model)->setEnabled(b);
}

$String* AbstractButton::getLabel() {
	return getText();
}

void AbstractButton::setLabel($String* label) {
	setText(label);
}

void AbstractButton::addItemListener($ItemListener* l) {
	$load($ItemListener);
	$nc(this->listenerList)->add($ItemListener::class$, l);
}

void AbstractButton::removeItemListener($ItemListener* l) {
	$load($ItemListener);
	$nc(this->listenerList)->remove($ItemListener::class$, l);
}

$ItemListenerArray* AbstractButton::getItemListeners() {
	$load($ItemListener);
	return $fcast($ItemListenerArray, $nc(this->listenerList)->getListeners($ItemListener::class$));
}

$ObjectArray* AbstractButton::getSelectedObjects() {
	$useLocalCurrentObjectStackCache();
	if (isSelected() == false) {
		return nullptr;
	}
	$var($ObjectArray, selectedObjects, $new($ObjectArray, 1));
	selectedObjects->set(0, $(getText()));
	return selectedObjects;
}

void AbstractButton::init($String* text, $Icon* icon) {
	if (text != nullptr) {
		setText(text);
	}
	if (icon != nullptr) {
		setIcon(icon);
	}
	updateUI();
	$init($Component);
	setAlignmentX($Component::LEFT_ALIGNMENT);
	setAlignmentY($Component::CENTER_ALIGNMENT);
}

bool AbstractButton::imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Icon, iconDisplayed, nullptr);
	if (!$nc(this->model)->isEnabled()) {
		if ($nc(this->model)->isSelected()) {
			$assign(iconDisplayed, getDisabledSelectedIcon());
		} else {
			$assign(iconDisplayed, getDisabledIcon());
		}
	} else {
		bool var$1 = $nc(this->model)->isPressed();
		if (var$1 && $nc(this->model)->isArmed()) {
			$assign(iconDisplayed, getPressedIcon());
		} else {
			bool var$3 = isRolloverEnabled();
			if (var$3 && $nc(this->model)->isRollover()) {
				if ($nc(this->model)->isSelected()) {
					$assign(iconDisplayed, getRolloverSelectedIcon());
				} else {
					$assign(iconDisplayed, getRolloverIcon());
				}
			} else if ($nc(this->model)->isSelected()) {
				$assign(iconDisplayed, getSelectedIcon());
			}
		}
	}
	if (iconDisplayed == nullptr) {
		$assign(iconDisplayed, getIcon());
	}
	if (iconDisplayed == nullptr || !$SwingUtilities::doesIconReferenceImage(iconDisplayed, img)) {
		return false;
	}
	return $JComponent::imageUpdate(img, infoflags, x, y, w, h);
}

void AbstractButton::setUIProperty($String* propertyName, Object$* value) {
	if (propertyName == "borderPainted"_s) {
		if (!this->borderPaintedSet) {
			setBorderPainted($nc(($cast($Boolean, value)))->booleanValue());
			this->borderPaintedSet = false;
		}
	} else if (propertyName == "rolloverEnabled"_s) {
		if (!this->rolloverEnabledSet) {
			setRolloverEnabled($nc(($cast($Boolean, value)))->booleanValue());
			this->rolloverEnabledSet = false;
		}
	} else if (propertyName == "iconTextGap"_s) {
		if (!this->iconTextGapSet) {
			setIconTextGap($nc(($cast($Number, value)))->intValue());
			this->iconTextGapSet = false;
		}
	} else if (propertyName == "contentAreaFilled"_s) {
		if (!this->contentAreaFilledSet) {
			setContentAreaFilled($nc(($cast($Boolean, value)))->booleanValue());
			this->contentAreaFilledSet = false;
		}
	} else {
		$JComponent::setUIProperty(propertyName, value);
	}
}

$String* AbstractButton::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, defaultIconString, (this->defaultIcon != nullptr) && (!$equals(this->defaultIcon, this)) ? $nc($of(this->defaultIcon))->toString() : ""_s);
	$var($String, pressedIconString, (this->pressedIcon != nullptr) && (!$equals(this->pressedIcon, this)) ? $nc($of(this->pressedIcon))->toString() : ""_s);
	$var($String, disabledIconString, (this->disabledIcon != nullptr) && (!$equals(this->disabledIcon, this)) ? $nc($of(this->disabledIcon))->toString() : ""_s);
	$var($String, selectedIconString, (this->selectedIcon != nullptr) && (!$equals(this->selectedIcon, this)) ? $nc($of(this->selectedIcon))->toString() : ""_s);
	$var($String, disabledSelectedIconString, (this->disabledSelectedIcon != nullptr) && (!$equals(this->disabledSelectedIcon, this)) ? $nc($of(this->disabledSelectedIcon))->toString() : ""_s);
	$var($String, rolloverIconString, (this->rolloverIcon != nullptr) && (!$equals(this->rolloverIcon, this)) ? $nc($of(this->rolloverIcon))->toString() : ""_s);
	$var($String, rolloverSelectedIconString, (this->rolloverSelectedIcon != nullptr) && (!$equals(this->rolloverSelectedIcon, this)) ? $nc($of(this->rolloverSelectedIcon))->toString() : ""_s);
	$var($String, paintBorderString, this->paintBorder$ ? "true"_s : "false"_s);
	$var($String, paintFocusString, this->paintFocus ? "true"_s : "false"_s);
	$var($String, rolloverEnabledString, this->rolloverEnabled ? "true"_s : "false"_s);
	return $str({$($JComponent::paramString()), ",defaultIcon="_s, defaultIconString, ",disabledIcon="_s, disabledIconString, ",disabledSelectedIcon="_s, disabledSelectedIconString, ",margin="_s, this->margin, ",paintBorder="_s, paintBorderString, ",paintFocus="_s, paintFocusString, ",pressedIcon="_s, pressedIconString, ",rolloverEnabled="_s, 
	rolloverEnabledString, ",rolloverIcon="_s, rolloverIconString, ",rolloverSelectedIcon="_s, rolloverSelectedIconString, ",selectedIcon="_s, selectedIconString, ",text="_s, this->text});
}

$AbstractButton$Handler* AbstractButton::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($AbstractButton$Handler, this));
	}
	return this->handler;
}

AbstractButton::AbstractButton() {
}

void clinit$AbstractButton($Class* class$) {
	$assignStatic(AbstractButton::MODEL_CHANGED_PROPERTY, "model"_s);
	$assignStatic(AbstractButton::TEXT_CHANGED_PROPERTY, "text"_s);
	$assignStatic(AbstractButton::MNEMONIC_CHANGED_PROPERTY, "mnemonic"_s);
	$assignStatic(AbstractButton::MARGIN_CHANGED_PROPERTY, "margin"_s);
	$assignStatic(AbstractButton::VERTICAL_ALIGNMENT_CHANGED_PROPERTY, "verticalAlignment"_s);
	$assignStatic(AbstractButton::HORIZONTAL_ALIGNMENT_CHANGED_PROPERTY, "horizontalAlignment"_s);
	$assignStatic(AbstractButton::VERTICAL_TEXT_POSITION_CHANGED_PROPERTY, "verticalTextPosition"_s);
	$assignStatic(AbstractButton::HORIZONTAL_TEXT_POSITION_CHANGED_PROPERTY, "horizontalTextPosition"_s);
	$assignStatic(AbstractButton::BORDER_PAINTED_CHANGED_PROPERTY, "borderPainted"_s);
	$assignStatic(AbstractButton::FOCUS_PAINTED_CHANGED_PROPERTY, "focusPainted"_s);
	$assignStatic(AbstractButton::ROLLOVER_ENABLED_CHANGED_PROPERTY, "rolloverEnabled"_s);
	$assignStatic(AbstractButton::CONTENT_AREA_FILLED_CHANGED_PROPERTY, "contentAreaFilled"_s);
	$assignStatic(AbstractButton::ICON_CHANGED_PROPERTY, "icon"_s);
	$assignStatic(AbstractButton::PRESSED_ICON_CHANGED_PROPERTY, "pressedIcon"_s);
	$assignStatic(AbstractButton::SELECTED_ICON_CHANGED_PROPERTY, "selectedIcon"_s);
	$assignStatic(AbstractButton::ROLLOVER_ICON_CHANGED_PROPERTY, "rolloverIcon"_s);
	$assignStatic(AbstractButton::ROLLOVER_SELECTED_ICON_CHANGED_PROPERTY, "rolloverSelectedIcon"_s);
	$assignStatic(AbstractButton::DISABLED_ICON_CHANGED_PROPERTY, "disabledIcon"_s);
	$assignStatic(AbstractButton::DISABLED_SELECTED_ICON_CHANGED_PROPERTY, "disabledSelectedIcon"_s);
}

$Class* AbstractButton::load$($String* name, bool initialize) {
	$loadClass(AbstractButton, name, initialize, &_AbstractButton_ClassInfo_, clinit$AbstractButton, allocate$AbstractButton);
	return class$;
}

$Class* AbstractButton::class$ = nullptr;

	} // swing
} // javax