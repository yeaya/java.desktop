#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/HierarchyListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/Locale.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/Box.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/Icon.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/OptionPaneUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI$1.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI$2.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI$Actions.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonActionListener.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonAreaLayout.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonFactory.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI$MultiplexingTextField.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef BEFORE_LINE_BEGINS
#undef BOTH
#undef CENTER
#undef CLOSE
#undef HORIZONTAL
#undef LEADING
#undef LEFT
#undef NONE
#undef OK_CANCEL_OPTION
#undef REMAINDER
#undef SINGLE_SELECTION
#undef TOP
#undef TRUE
#undef WHEN_IN_FOCUSED_WINDOW
#undef YES_NO_CANCEL_OPTION
#undef YES_NO_OPTION
#undef Y_AXIS

using $JButtonArray = $Array<::javax::swing::JButton>;
using $KeyStrokeArray = $Array<::javax::swing::KeyStroke>;
using $BasicOptionPaneUI$ButtonFactoryArray = $Array<::javax::swing::plaf::basic::BasicOptionPaneUI$ButtonFactory>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionListener = ::java::awt::event::ActionListener;
using $HierarchyListener = ::java::awt::event::HierarchyListener;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Locale = ::java::util::Locale;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $Box = ::javax::swing::Box;
using $BoxLayout = ::javax::swing::BoxLayout;
using $Icon = ::javax::swing::Icon;
using $InputMap = ::javax::swing::InputMap;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JPanel = ::javax::swing::JPanel;
using $JRootPane = ::javax::swing::JRootPane;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextField = ::javax::swing::JTextField;
using $KeyStroke = ::javax::swing::KeyStroke;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $OptionPaneUI = ::javax::swing::plaf::OptionPaneUI;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicOptionPaneUI$1 = ::javax::swing::plaf::basic::BasicOptionPaneUI$1;
using $BasicOptionPaneUI$2 = ::javax::swing::plaf::basic::BasicOptionPaneUI$2;
using $BasicOptionPaneUI$Actions = ::javax::swing::plaf::basic::BasicOptionPaneUI$Actions;
using $BasicOptionPaneUI$ButtonActionListener = ::javax::swing::plaf::basic::BasicOptionPaneUI$ButtonActionListener;
using $BasicOptionPaneUI$ButtonAreaLayout = ::javax::swing::plaf::basic::BasicOptionPaneUI$ButtonAreaLayout;
using $BasicOptionPaneUI$ButtonFactory = ::javax::swing::plaf::basic::BasicOptionPaneUI$ButtonFactory;
using $BasicOptionPaneUI$Handler = ::javax::swing::plaf::basic::BasicOptionPaneUI$Handler;
using $BasicOptionPaneUI$MultiplexingTextField = ::javax::swing::plaf::basic::BasicOptionPaneUI$MultiplexingTextField;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicOptionPaneUI_FieldInfo_[] = {
	{"MinimumWidth", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BasicOptionPaneUI, MinimumWidth)},
	{"MinimumHeight", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BasicOptionPaneUI, MinimumHeight)},
	{"newline", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicOptionPaneUI, newline)},
	{"optionPane", "Ljavax/swing/JOptionPane;", nullptr, $PROTECTED, $field(BasicOptionPaneUI, optionPane)},
	{"minimumSize", "Ljava/awt/Dimension;", nullptr, $PROTECTED, $field(BasicOptionPaneUI, minimumSize)},
	{"inputComponent", "Ljavax/swing/JComponent;", nullptr, $PROTECTED, $field(BasicOptionPaneUI, inputComponent)},
	{"initialFocusComponent", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(BasicOptionPaneUI, initialFocusComponent)},
	{"hasCustomComponents", "Z", nullptr, $PROTECTED, $field(BasicOptionPaneUI, hasCustomComponents)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $field(BasicOptionPaneUI, propertyChangeListener)},
	{"handler", "Ljavax/swing/plaf/basic/BasicOptionPaneUI$Handler;", nullptr, $PRIVATE, $field(BasicOptionPaneUI, handler)},
	{}
};

$MethodInfo _BasicOptionPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicOptionPaneUI::*)()>(&BasicOptionPaneUI::init$))},
	{"addButtonComponents", "(Ljava/awt/Container;[Ljava/lang/Object;I)V", nullptr, $PROTECTED},
	{"addIcon", "(Ljava/awt/Container;)V", nullptr, $PROTECTED},
	{"addMessageComponents", "(Ljava/awt/Container;Ljava/awt/GridBagConstraints;Ljava/lang/Object;IZ)V", nullptr, $PROTECTED},
	{"burstStringInto", "(Ljava/awt/Container;Ljava/lang/String;I)V", nullptr, $PROTECTED},
	{"configureButton", "(Ljavax/swing/JButton;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicOptionPaneUI::*)($JButton*)>(&BasicOptionPaneUI::configureButton))},
	{"configureMessageLabel", "(Ljavax/swing/JLabel;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicOptionPaneUI::*)($JLabel*)>(&BasicOptionPaneUI::configureMessageLabel))},
	{"containsCustomComponents", "(Ljavax/swing/JOptionPane;)Z", nullptr, $PUBLIC},
	{"createButtonActionListener", "(I)Ljava/awt/event/ActionListener;", nullptr, $PROTECTED},
	{"createButtonArea", "()Ljava/awt/Container;", nullptr, $PROTECTED},
	{"createLayoutManager", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createMessageArea", "()Ljava/awt/Container;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createSeparator", "()Ljava/awt/Container;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicOptionPaneUI::createUI))},
	{"getButtons", "()[Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicOptionPaneUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicOptionPaneUI$Handler*(BasicOptionPaneUI::*)()>(&BasicOptionPaneUI::getHandler))},
	{"getIcon", "()Ljavax/swing/Icon;", nullptr, $PROTECTED},
	{"getIconForType", "(I)Ljavax/swing/Icon;", nullptr, $PROTECTED},
	{"getInitialValueIndex", "()I", nullptr, $PROTECTED},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0},
	{"getMaxCharactersPerLineCount", "()I", nullptr, $PROTECTED},
	{"getMessage", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getMinimumOptionPaneSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMnemonic", "(Ljava/lang/String;Ljava/util/Locale;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicOptionPaneUI::*)($String*,$Locale*)>(&BasicOptionPaneUI::getMnemonic))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSizeButtonsToSameWidth", "()Z", nullptr, $PROTECTED},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicOptionPaneUI::loadActionMap))},
	{"resetInputValue", "()V", nullptr, $PROTECTED},
	{"selectInitialValue", "(Ljavax/swing/JOptionPane;)V", nullptr, $PUBLIC},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicOptionPaneUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory", "javax.swing.plaf.basic.BasicOptionPaneUI", "ButtonFactory", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicOptionPaneUI$Actions", "javax.swing.plaf.basic.BasicOptionPaneUI", "Actions", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicOptionPaneUI$MultiplexingTextField", "javax.swing.plaf.basic.BasicOptionPaneUI", "MultiplexingTextField", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicOptionPaneUI$Handler", "javax.swing.plaf.basic.BasicOptionPaneUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonActionListener", "javax.swing.plaf.basic.BasicOptionPaneUI", "ButtonActionListener", $PUBLIC},
	{"javax.swing.plaf.basic.BasicOptionPaneUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicOptionPaneUI", "PropertyChangeHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonAreaLayout", "javax.swing.plaf.basic.BasicOptionPaneUI", "ButtonAreaLayout", $PUBLIC | $STATIC},
	{"javax.swing.plaf.basic.BasicOptionPaneUI$2", nullptr, nullptr, 0},
	{"javax.swing.plaf.basic.BasicOptionPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicOptionPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicOptionPaneUI",
	"javax.swing.plaf.OptionPaneUI",
	nullptr,
	_BasicOptionPaneUI_FieldInfo_,
	_BasicOptionPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicOptionPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory,javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory$ConstrainedButton,javax.swing.plaf.basic.BasicOptionPaneUI$Actions,javax.swing.plaf.basic.BasicOptionPaneUI$MultiplexingTextField,javax.swing.plaf.basic.BasicOptionPaneUI$Handler,javax.swing.plaf.basic.BasicOptionPaneUI$ButtonActionListener,javax.swing.plaf.basic.BasicOptionPaneUI$PropertyChangeHandler,javax.swing.plaf.basic.BasicOptionPaneUI$ButtonAreaLayout,javax.swing.plaf.basic.BasicOptionPaneUI$2,javax.swing.plaf.basic.BasicOptionPaneUI$1"
};

$Object* allocate$BasicOptionPaneUI($Class* clazz) {
	return $of($alloc(BasicOptionPaneUI));
}

$String* BasicOptionPaneUI::newline = nullptr;

void BasicOptionPaneUI::init$() {
	$OptionPaneUI::init$();
}

void BasicOptionPaneUI::loadActionMap($LazyActionMap* map) {
	$init(BasicOptionPaneUI);
	$init($BasicOptionPaneUI$Actions);
	$nc(map)->put($$new($BasicOptionPaneUI$Actions, $BasicOptionPaneUI$Actions::CLOSE));
	$BasicLookAndFeel::installAudioActionMap(map);
}

$ComponentUI* BasicOptionPaneUI::createUI($JComponent* x) {
	$init(BasicOptionPaneUI);
	return $new(BasicOptionPaneUI);
}

void BasicOptionPaneUI::installUI($JComponent* c) {
	$set(this, optionPane, $cast($JOptionPane, c));
	installDefaults();
	$nc(this->optionPane)->setLayout($(createLayoutManager()));
	installComponents();
	installListeners();
	installKeyboardActions();
}

void BasicOptionPaneUI::uninstallUI($JComponent* c) {
	uninstallComponents();
	$nc(this->optionPane)->setLayout(nullptr);
	uninstallKeyboardActions();
	uninstallListeners();
	uninstallDefaults();
	$set(this, optionPane, nullptr);
}

void BasicOptionPaneUI::installDefaults() {
	$LookAndFeel::installColorsAndFont(this->optionPane, "OptionPane.background"_s, "OptionPane.foreground"_s, "OptionPane.font"_s);
	$LookAndFeel::installBorder(this->optionPane, "OptionPane.border"_s);
	$set(this, minimumSize, $UIManager::getDimension("OptionPane.minimumSize"_s));
	$init($Boolean);
	$LookAndFeel::installProperty(this->optionPane, "opaque"_s, $Boolean::TRUE);
}

void BasicOptionPaneUI::uninstallDefaults() {
	$LookAndFeel::uninstallBorder(this->optionPane);
}

void BasicOptionPaneUI::installComponents() {
	$useLocalCurrentObjectStackCache();
	$nc(this->optionPane)->add($(static_cast<$Component*>(createMessageArea())));
	$var($Container, separator, createSeparator());
	if (separator != nullptr) {
		$nc(this->optionPane)->add(static_cast<$Component*>(separator));
	}
	$nc(this->optionPane)->add($(static_cast<$Component*>(createButtonArea())));
	$nc(this->optionPane)->applyComponentOrientation($($nc(this->optionPane)->getComponentOrientation()));
}

void BasicOptionPaneUI::uninstallComponents() {
	this->hasCustomComponents = false;
	$set(this, inputComponent, nullptr);
	$set(this, initialFocusComponent, nullptr);
	$nc(this->optionPane)->removeAll();
}

$LayoutManager* BasicOptionPaneUI::createLayoutManager() {
	return $new($BoxLayout, this->optionPane, $BoxLayout::Y_AXIS);
}

void BasicOptionPaneUI::installListeners() {
	if (($set(this, propertyChangeListener, createPropertyChangeListener())) != nullptr) {
		$nc(this->optionPane)->addPropertyChangeListener(this->propertyChangeListener);
	}
}

void BasicOptionPaneUI::uninstallListeners() {
	if (this->propertyChangeListener != nullptr) {
		$nc(this->optionPane)->removePropertyChangeListener(this->propertyChangeListener);
		$set(this, propertyChangeListener, nullptr);
	}
	$set(this, handler, nullptr);
}

$PropertyChangeListener* BasicOptionPaneUI::createPropertyChangeListener() {
	return getHandler();
}

$BasicOptionPaneUI$Handler* BasicOptionPaneUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicOptionPaneUI$Handler, this));
	}
	return this->handler;
}

void BasicOptionPaneUI::installKeyboardActions() {
	$var($InputMap, map, getInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW));
	$SwingUtilities::replaceUIInputMap(this->optionPane, $JComponent::WHEN_IN_FOCUSED_WINDOW, map);
	$LazyActionMap::installLazyActionMap(this->optionPane, BasicOptionPaneUI::class$, "OptionPane.actionMap"_s);
}

void BasicOptionPaneUI::uninstallKeyboardActions() {
	$SwingUtilities::replaceUIInputMap(this->optionPane, $JComponent::WHEN_IN_FOCUSED_WINDOW, nullptr);
	$SwingUtilities::replaceUIActionMap(this->optionPane, nullptr);
}

$InputMap* BasicOptionPaneUI::getInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_IN_FOCUSED_WINDOW) {
		$var($ObjectArray, bindings, $cast($ObjectArray, $DefaultLookup::get(this->optionPane, this, "OptionPane.windowBindings"_s)));
		if (bindings != nullptr) {
			return $LookAndFeel::makeComponentInputMap(this->optionPane, bindings);
		}
	}
	return nullptr;
}

$Dimension* BasicOptionPaneUI::getMinimumOptionPaneSize() {
	if (this->minimumSize == nullptr) {
		return $new($Dimension, BasicOptionPaneUI::MinimumWidth, BasicOptionPaneUI::MinimumHeight);
	}
	return $new($Dimension, $nc(this->minimumSize)->width, $nc(this->minimumSize)->height);
}

$Dimension* BasicOptionPaneUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	if ($equals(c, this->optionPane)) {
		$var($Dimension, ourMin, getMinimumOptionPaneSize());
		$var($LayoutManager, lm, $nc(c)->getLayout());
		if (lm != nullptr) {
			$var($Dimension, lmSize, lm->preferredLayoutSize(c));
			if (ourMin != nullptr) {
				int32_t var$0 = $Math::max($nc(lmSize)->width, ourMin->width);
				return $new($Dimension, var$0, $Math::max($nc(lmSize)->height, ourMin->height));
			}
			return lmSize;
		}
		return ourMin;
	}
	return nullptr;
}

$Container* BasicOptionPaneUI::createMessageArea() {
	$useLocalCurrentObjectStackCache();
	$var($JPanel, top, $new($JPanel));
	$var($Border, topBorder, $cast($Border, $DefaultLookup::get(this->optionPane, this, "OptionPane.messageAreaBorder"_s)));
	if (topBorder != nullptr) {
		top->setBorder(topBorder);
	}
	top->setLayout($$new($BorderLayout));
	$var($Container, body, $new($JPanel, static_cast<$LayoutManager*>($$new($GridBagLayout))));
	$var($Container, realBody, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	body->setName("OptionPane.body"_s);
	realBody->setName("OptionPane.realBody"_s);
	if (getIcon() != nullptr) {
		$var($JPanel, sep, $new($JPanel));
		sep->setName("OptionPane.separator"_s);
		sep->setPreferredSize($$new($Dimension, 15, 1));
		$init($BorderLayout);
		realBody->add(static_cast<$Component*>(sep), $of($BorderLayout::BEFORE_LINE_BEGINS));
	}
	$init($BorderLayout);
	realBody->add(static_cast<$Component*>(body), $of($BorderLayout::CENTER));
	$var($GridBagConstraints, cons, $new($GridBagConstraints));
	cons->gridx = (cons->gridy = 0);
	cons->gridwidth = $GridBagConstraints::REMAINDER;
	cons->gridheight = 1;
	cons->anchor = $DefaultLookup::getInt(this->optionPane, this, "OptionPane.messageAnchor"_s, $GridBagConstraints::CENTER);
	$set(cons, insets, $new($Insets, 0, 0, 3, 0));
	$var($Container, var$0, body);
	$var($GridBagConstraints, var$1, cons);
	$var($Object, var$2, getMessage());
	addMessageComponents(var$0, var$1, var$2, getMaxCharactersPerLineCount(), false);
	top->add(static_cast<$Component*>(realBody), $of($BorderLayout::CENTER));
	addIcon(top);
	return top;
}

void BasicOptionPaneUI::addMessageComponents($Container* container, $GridBagConstraints* cons, Object$* msg, int32_t maxll, bool internallyCreated) {
	$useLocalCurrentObjectStackCache();
	if (msg == nullptr) {
		return;
	}
	if ($instanceOf($Component, msg)) {
		if ($instanceOf($JScrollPane, msg) || $instanceOf($JPanel, msg)) {
			$nc(cons)->fill = $GridBagConstraints::BOTH;
			cons->weighty = (double)1;
		} else {
			$nc(cons)->fill = $GridBagConstraints::HORIZONTAL;
		}
		$nc(cons)->weightx = (double)1;
		$nc(container)->add($cast($Component, msg), $of(cons));
		cons->weightx = (double)0;
		cons->weighty = (double)0;
		cons->fill = $GridBagConstraints::NONE;
		++cons->gridy;
		if (!internallyCreated) {
			this->hasCustomComponents = true;
		}
	} else if ($instanceOf($ObjectArray, msg)) {
		$var($ObjectArray, msgs, $cast($ObjectArray, msg));
		{
			$var($ObjectArray, arr$, msgs);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Object0, o, arr$->get(i$));
				{
					addMessageComponents(container, cons, o, maxll, false);
				}
			}
		}
	} else if ($instanceOf($Icon, msg)) {
		$var($JLabel, label, $new($JLabel, $cast($Icon, msg), $SwingConstants::CENTER));
		configureMessageLabel(label);
		addMessageComponents(container, cons, label, maxll, true);
	} else {
		$var($String, s, $nc($of(msg))->toString());
		int32_t len = $nc(s)->length();
		if (len <= 0) {
			return;
		}
		int32_t nl = 0;
		int32_t nll = 0;
		if ((nl = s->indexOf(BasicOptionPaneUI::newline)) >= 0) {
			nll = $nc(BasicOptionPaneUI::newline)->length();
		} else if ((nl = s->indexOf("\r\n"_s)) >= 0) {
			nll = 2;
		} else if ((nl = s->indexOf((int32_t)u'\n')) >= 0) {
			nll = 1;
		}
		if (nl >= 0) {
			if (nl == 0) {
				$var($JPanel, breakPanel, $new($BasicOptionPaneUI$1, this));
				breakPanel->setName("OptionPane.break"_s);
				addMessageComponents(container, cons, breakPanel, maxll, true);
			} else {
				addMessageComponents(container, cons, $(s->substring(0, nl)), maxll, false);
			}
			addMessageComponents(container, cons, $(s->substring(nl + nll)), maxll, false);
		} else if (len > maxll) {
			$var($Container, c, $Box::createVerticalBox());
			$nc(c)->setName("OptionPane.verticalBox"_s);
			burstStringInto(c, s, maxll);
			addMessageComponents(container, cons, c, maxll, true);
		} else {
			$var($JLabel, label, nullptr);
			$assign(label, $new($JLabel, s, $JLabel::LEADING));
			label->setName("OptionPane.label"_s);
			configureMessageLabel(label);
			addMessageComponents(container, cons, label, maxll, true);
		}
	}
}

$Object* BasicOptionPaneUI::getMessage() {
	$useLocalCurrentObjectStackCache();
	$set(this, inputComponent, nullptr);
	if (this->optionPane != nullptr) {
		if ($nc(this->optionPane)->getWantsInput()) {
			$var($Object, message, $nc(this->optionPane)->getMessage());
			$var($ObjectArray, sValues, $nc(this->optionPane)->getSelectionValues());
			$var($Object, inputValue, $nc(this->optionPane)->getInitialSelectionValue());
			$var($JComponent, toAdd, nullptr);
			if (sValues != nullptr) {
				if (sValues->length < 20) {
					$var($JComboBox, cBox, $new($JComboBox));
					cBox->setName("OptionPane.comboBox"_s);
					{
						int32_t counter = 0;
						int32_t maxCounter = sValues->length;
						for (; counter < maxCounter; ++counter) {
							cBox->addItem(sValues->get(counter));
						}
					}
					if (inputValue != nullptr) {
						cBox->setSelectedItem(inputValue);
					}
					$set(this, inputComponent, cBox);
					$assign(toAdd, cBox);
				} else {
					$var($JList, list, $new($JList, sValues));
					$var($JScrollPane, sp, $new($JScrollPane, list));
					sp->setName("OptionPane.scrollPane"_s);
					list->setName("OptionPane.list"_s);
					list->setVisibleRowCount(10);
					list->setSelectionMode($ListSelectionModel::SINGLE_SELECTION);
					if (inputValue != nullptr) {
						list->setSelectedValue(inputValue, true);
					}
					list->addMouseListener($(getHandler()));
					$assign(toAdd, sp);
					$set(this, inputComponent, list);
				}
			} else {
				$var($BasicOptionPaneUI$MultiplexingTextField, tf, $new($BasicOptionPaneUI$MultiplexingTextField, 20));
				tf->setName("OptionPane.textField"_s);
				tf->setKeyStrokes($$new($KeyStrokeArray, {$($KeyStroke::getKeyStroke("ENTER"_s))}));
				if (inputValue != nullptr) {
					$var($String, inputString, $of(inputValue)->toString());
					tf->setText(inputString);
					tf->setSelectionStart(0);
					tf->setSelectionEnd($nc(inputString)->length());
				}
				tf->addActionListener($(getHandler()));
				$assign(toAdd, ($set(this, inputComponent, tf)));
			}
			$var($ObjectArray, newMessage, nullptr);
			if (message == nullptr) {
				$assign(newMessage, $new($ObjectArray, 1));
				newMessage->set(0, toAdd);
			} else {
				$assign(newMessage, $new($ObjectArray, 2));
				newMessage->set(0, message);
				newMessage->set(1, toAdd);
			}
			return $of(newMessage);
		}
		return $of($nc(this->optionPane)->getMessage());
	}
	return $of(nullptr);
}

void BasicOptionPaneUI::addIcon($Container* top) {
	$useLocalCurrentObjectStackCache();
	$var($Icon, sideIcon, getIcon());
	if (sideIcon != nullptr) {
		$var($JLabel, iconLabel, $new($JLabel, sideIcon));
		iconLabel->setName("OptionPane.iconLabel"_s);
		iconLabel->setVerticalAlignment($SwingConstants::TOP);
		$init($BorderLayout);
		$nc(top)->add(static_cast<$Component*>(iconLabel), $of($BorderLayout::BEFORE_LINE_BEGINS));
	}
}

$Icon* BasicOptionPaneUI::getIcon() {
	$var($Icon, mIcon, this->optionPane == nullptr ? ($Icon*)nullptr : $nc(this->optionPane)->getIcon());
	if (mIcon == nullptr && this->optionPane != nullptr) {
		$assign(mIcon, getIconForType($nc(this->optionPane)->getMessageType()));
	}
	return mIcon;
}

$Icon* BasicOptionPaneUI::getIconForType(int32_t messageType) {
	if (messageType < 0 || messageType > 3) {
		return nullptr;
	}
	$var($String, propertyName, nullptr);
	switch (messageType) {
	case 0:
		{
			$assign(propertyName, "OptionPane.errorIcon"_s);
			break;
		}
	case 1:
		{
			$assign(propertyName, "OptionPane.informationIcon"_s);
			break;
		}
	case 2:
		{
			$assign(propertyName, "OptionPane.warningIcon"_s);
			break;
		}
	case 3:
		{
			$assign(propertyName, "OptionPane.questionIcon"_s);
			break;
		}
	}
	if (propertyName != nullptr) {
		return $cast($Icon, $DefaultLookup::get(this->optionPane, this, propertyName));
	}
	return nullptr;
}

int32_t BasicOptionPaneUI::getMaxCharactersPerLineCount() {
	return $nc(this->optionPane)->getMaxCharactersPerLineCount();
}

void BasicOptionPaneUI::burstStringInto($Container* c, $String* d, int32_t maxll) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(d)->length();
	if (len <= 0) {
		return;
	}
	if (len > maxll) {
		int32_t p = d->lastIndexOf((int32_t)u' ', maxll);
		if (p <= 0) {
			p = d->indexOf((int32_t)u' ', maxll);
		}
		if (p > 0 && p < len) {
			burstStringInto(c, $(d->substring(0, p)), maxll);
			burstStringInto(c, $(d->substring(p + 1)), maxll);
			return;
		}
	}
	$var($JLabel, label, $new($JLabel, d, $JLabel::LEFT));
	label->setName("OptionPane.label"_s);
	configureMessageLabel(label);
	$nc(c)->add(static_cast<$Component*>(label));
}

$Container* BasicOptionPaneUI::createSeparator() {
	return nullptr;
}

$Container* BasicOptionPaneUI::createButtonArea() {
	$useLocalCurrentObjectStackCache();
	$var($JPanel, bottom, $new($JPanel));
	$var($Border, border, $cast($Border, $DefaultLookup::get(this->optionPane, this, "OptionPane.buttonAreaBorder"_s)));
	bottom->setName("OptionPane.buttonArea"_s);
	if (border != nullptr) {
		bottom->setBorder(border);
	}
	bool var$0 = $DefaultLookup::getBoolean(this->optionPane, this, "OptionPane.sameSizeButtons"_s, true);
	int32_t var$1 = $DefaultLookup::getInt(this->optionPane, this, "OptionPane.buttonPadding"_s, 6);
	int32_t var$2 = $DefaultLookup::getInt(this->optionPane, this, "OptionPane.buttonOrientation"_s, $SwingConstants::CENTER);
	bottom->setLayout($$new($BasicOptionPaneUI$ButtonAreaLayout, var$0, var$1, var$2, $DefaultLookup::getBoolean(this->optionPane, this, "OptionPane.isYesLast"_s, false)));
	$var($Container, var$3, static_cast<$Container*>(bottom));
	$var($ObjectArray, var$4, getButtons());
	addButtonComponents(var$3, var$4, getInitialValueIndex());
	return bottom;
}

void BasicOptionPaneUI::addButtonComponents($Container* container, $ObjectArray* buttons, int32_t initialIndex) {
	$useLocalCurrentObjectStackCache();
	if (buttons != nullptr && buttons->length > 0) {
		bool sizeButtonsToSame = getSizeButtonsToSameWidth();
		bool createdAll = true;
		int32_t numButtons = buttons->length;
		$var($JButtonArray, createdButtons, nullptr);
		int32_t maxWidth = 0;
		if (sizeButtonsToSame) {
			$assign(createdButtons, $new($JButtonArray, numButtons));
		}
		for (int32_t counter = 0; counter < numButtons; ++counter) {
			$var($Object0, button, buttons->get(counter));
			$var($Component, newComponent, nullptr);
			if ($instanceOf($Component, button)) {
				createdAll = false;
				$assign(newComponent, $cast($Component, button));
				$nc(container)->add(newComponent);
				this->hasCustomComponents = true;
			} else {
				$var($JButton, aButton, nullptr);
				if ($instanceOf($BasicOptionPaneUI$ButtonFactory, button)) {
					$assign(aButton, $nc(($cast($BasicOptionPaneUI$ButtonFactory, button)))->createButton());
				} else if ($instanceOf($Icon, button)) {
					$assign(aButton, $new($JButton, $cast($Icon, button)));
				} else {
					$assign(aButton, $new($JButton, $($nc($of(button))->toString())));
				}
				$nc(aButton)->setName("OptionPane.button"_s);
				aButton->setMultiClickThreshhold($DefaultLookup::getInt(this->optionPane, this, "OptionPane.buttonClickThreshhold"_s, 0));
				configureButton(aButton);
				$nc(container)->add(static_cast<$Component*>(aButton));
				$var($ActionListener, buttonListener, createButtonActionListener(counter));
				if (buttonListener != nullptr) {
					aButton->addActionListener(buttonListener);
				}
				$assign(newComponent, aButton);
			}
			if (sizeButtonsToSame && createdAll && ($instanceOf($JButton, newComponent))) {
				$nc(createdButtons)->set(counter, $cast($JButton, newComponent));
				maxWidth = $Math::max(maxWidth, $nc($($nc(newComponent)->getMinimumSize()))->width);
			}
			if (counter == initialIndex) {
				$set(this, initialFocusComponent, newComponent);
				if ($instanceOf($JButton, this->initialFocusComponent)) {
					$var($JButton, defaultB, $cast($JButton, this->initialFocusComponent));
					$nc(defaultB)->addHierarchyListener($$new($BasicOptionPaneUI$2, this));
				}
			}
		}
		$nc(($cast($BasicOptionPaneUI$ButtonAreaLayout, $($nc(container)->getLayout()))))->setSyncAllWidths((sizeButtonsToSame && createdAll));
		if ($DefaultLookup::getBoolean(this->optionPane, this, "OptionPane.setButtonMargin"_s, true) && sizeButtonsToSame && createdAll) {
			$var($JButton, aButton, nullptr);
			int32_t padSize = 0;
			padSize = (numButtons <= 2 ? 8 : 4);
			for (int32_t counter = 0; counter < numButtons; ++counter) {
				$assign(aButton, $nc(createdButtons)->get(counter));
				$nc(aButton)->setMargin($$new($Insets, 2, padSize, 2, padSize));
			}
		}
	}
}

$ActionListener* BasicOptionPaneUI::createButtonActionListener(int32_t buttonIndex) {
	return $new($BasicOptionPaneUI$ButtonActionListener, this, buttonIndex);
}

$ObjectArray* BasicOptionPaneUI::getButtons() {
	$useLocalCurrentObjectStackCache();
	if (this->optionPane != nullptr) {
		$var($ObjectArray, suppliedOptions, $nc(this->optionPane)->getOptions());
		if (suppliedOptions == nullptr) {
			$var($ObjectArray, defaultOptions, nullptr);
			int32_t type = $nc(this->optionPane)->getOptionType();
			$var($Locale, l, $nc(this->optionPane)->getLocale());
			int32_t minimumWidth = $DefaultLookup::getInt(this->optionPane, this, "OptionPane.buttonMinimumWidth"_s, -1);
			if (type == $JOptionPane::YES_NO_OPTION) {
				$assign(defaultOptions, $new($BasicOptionPaneUI$ButtonFactoryArray, 2));
				$var($String, var$0, $UIManager::getString($of("OptionPane.yesButtonText"_s), l));
				int32_t var$1 = getMnemonic("OptionPane.yesButtonMnemonic"_s, l);
				defaultOptions->set(0, $$new($BasicOptionPaneUI$ButtonFactory, var$0, var$1, $cast($Icon, $($DefaultLookup::get(this->optionPane, this, "OptionPane.yesIcon"_s))), minimumWidth));
				$var($String, var$2, $UIManager::getString($of("OptionPane.noButtonText"_s), l));
				int32_t var$3 = getMnemonic("OptionPane.noButtonMnemonic"_s, l);
				defaultOptions->set(1, $$new($BasicOptionPaneUI$ButtonFactory, var$2, var$3, $cast($Icon, $($DefaultLookup::get(this->optionPane, this, "OptionPane.noIcon"_s))), minimumWidth));
			} else if (type == $JOptionPane::YES_NO_CANCEL_OPTION) {
				$assign(defaultOptions, $new($BasicOptionPaneUI$ButtonFactoryArray, 3));
				$var($String, var$4, $UIManager::getString($of("OptionPane.yesButtonText"_s), l));
				int32_t var$5 = getMnemonic("OptionPane.yesButtonMnemonic"_s, l);
				defaultOptions->set(0, $$new($BasicOptionPaneUI$ButtonFactory, var$4, var$5, $cast($Icon, $($DefaultLookup::get(this->optionPane, this, "OptionPane.yesIcon"_s))), minimumWidth));
				$var($String, var$6, $UIManager::getString($of("OptionPane.noButtonText"_s), l));
				int32_t var$7 = getMnemonic("OptionPane.noButtonMnemonic"_s, l);
				defaultOptions->set(1, $$new($BasicOptionPaneUI$ButtonFactory, var$6, var$7, $cast($Icon, $($DefaultLookup::get(this->optionPane, this, "OptionPane.noIcon"_s))), minimumWidth));
				$var($String, var$8, $UIManager::getString($of("OptionPane.cancelButtonText"_s), l));
				int32_t var$9 = getMnemonic("OptionPane.cancelButtonMnemonic"_s, l);
				defaultOptions->set(2, $$new($BasicOptionPaneUI$ButtonFactory, var$8, var$9, $cast($Icon, $($DefaultLookup::get(this->optionPane, this, "OptionPane.cancelIcon"_s))), minimumWidth));
			} else if (type == $JOptionPane::OK_CANCEL_OPTION) {
				$assign(defaultOptions, $new($BasicOptionPaneUI$ButtonFactoryArray, 2));
				$var($String, var$10, $UIManager::getString($of("OptionPane.okButtonText"_s), l));
				int32_t var$11 = getMnemonic("OptionPane.okButtonMnemonic"_s, l);
				defaultOptions->set(0, $$new($BasicOptionPaneUI$ButtonFactory, var$10, var$11, $cast($Icon, $($DefaultLookup::get(this->optionPane, this, "OptionPane.okIcon"_s))), minimumWidth));
				$var($String, var$12, $UIManager::getString($of("OptionPane.cancelButtonText"_s), l));
				int32_t var$13 = getMnemonic("OptionPane.cancelButtonMnemonic"_s, l);
				defaultOptions->set(1, $$new($BasicOptionPaneUI$ButtonFactory, var$12, var$13, $cast($Icon, $($DefaultLookup::get(this->optionPane, this, "OptionPane.cancelIcon"_s))), minimumWidth));
			} else {
				$assign(defaultOptions, $new($BasicOptionPaneUI$ButtonFactoryArray, 1));
				$var($String, var$14, $UIManager::getString($of("OptionPane.okButtonText"_s), l));
				int32_t var$15 = getMnemonic("OptionPane.okButtonMnemonic"_s, l);
				defaultOptions->set(0, $$new($BasicOptionPaneUI$ButtonFactory, var$14, var$15, $cast($Icon, $($DefaultLookup::get(this->optionPane, this, "OptionPane.okIcon"_s))), minimumWidth));
			}
			return defaultOptions;
		}
		return suppliedOptions;
	}
	return nullptr;
}

int32_t BasicOptionPaneUI::getMnemonic($String* key, $Locale* l) {
	$var($String, value, $cast($String, $UIManager::get(key, l)));
	if (value == nullptr) {
		return 0;
	}
	try {
		return $Integer::parseInt(value);
	} catch ($NumberFormatException& nfe) {
	}
	return 0;
}

bool BasicOptionPaneUI::getSizeButtonsToSameWidth() {
	return true;
}

int32_t BasicOptionPaneUI::getInitialValueIndex() {
	$useLocalCurrentObjectStackCache();
	if (this->optionPane != nullptr) {
		$var($Object, iv, $nc(this->optionPane)->getInitialValue());
		$var($ObjectArray, options, $nc(this->optionPane)->getOptions());
		if (options == nullptr) {
			return 0;
		} else if (iv != nullptr) {
			for (int32_t counter = $nc(options)->length - 1; counter >= 0; --counter) {
				if ($nc($of(options->get(counter)))->equals(iv)) {
					return counter;
				}
			}
		}
	}
	return -1;
}

void BasicOptionPaneUI::resetInputValue() {
	$useLocalCurrentObjectStackCache();
	if (this->inputComponent != nullptr && ($instanceOf($JTextField, this->inputComponent))) {
		$nc(this->optionPane)->setInputValue($($nc(($cast($JTextField, this->inputComponent)))->getText()));
	} else if (this->inputComponent != nullptr && ($instanceOf($JComboBox, this->inputComponent))) {
		$nc(this->optionPane)->setInputValue($($nc(($cast($JComboBox, this->inputComponent)))->getSelectedItem()));
	} else if (this->inputComponent != nullptr) {
		$nc(this->optionPane)->setInputValue($($nc(($cast($JList, this->inputComponent)))->getSelectedValue()));
	}
}

void BasicOptionPaneUI::selectInitialValue($JOptionPane* op) {
	if (this->inputComponent != nullptr) {
		$nc(this->inputComponent)->requestFocus();
	} else {
		if (this->initialFocusComponent != nullptr) {
			$nc(this->initialFocusComponent)->requestFocus();
		}
		if ($instanceOf($JButton, this->initialFocusComponent)) {
			$var($JRootPane, root, $SwingUtilities::getRootPane(this->initialFocusComponent));
			if (root != nullptr) {
				root->setDefaultButton($cast($JButton, this->initialFocusComponent));
			}
		}
	}
}

bool BasicOptionPaneUI::containsCustomComponents($JOptionPane* op) {
	return this->hasCustomComponents;
}

void BasicOptionPaneUI::configureMessageLabel($JLabel* label) {
	$useLocalCurrentObjectStackCache();
	$var($Color, color, $cast($Color, $DefaultLookup::get(this->optionPane, this, "OptionPane.messageForeground"_s)));
	if (color != nullptr) {
		$nc(label)->setForeground(color);
	}
	$var($Font, messageFont, $cast($Font, $DefaultLookup::get(this->optionPane, this, "OptionPane.messageFont"_s)));
	if (messageFont != nullptr) {
		$nc(label)->setFont(messageFont);
	}
}

void BasicOptionPaneUI::configureButton($JButton* button) {
	$var($Font, buttonFont, $cast($Font, $DefaultLookup::get(this->optionPane, this, "OptionPane.buttonFont"_s)));
	if (buttonFont != nullptr) {
		$nc(button)->setFont(buttonFont);
	}
}

void clinit$BasicOptionPaneUI($Class* class$) {
	{
		$assignStatic(BasicOptionPaneUI::newline, $System::lineSeparator());
		if (BasicOptionPaneUI::newline == nullptr) {
			$assignStatic(BasicOptionPaneUI::newline, "\n"_s);
		}
	}
}

BasicOptionPaneUI::BasicOptionPaneUI() {
}

$Class* BasicOptionPaneUI::load$($String* name, bool initialize) {
	$loadClass(BasicOptionPaneUI, name, initialize, &_BasicOptionPaneUI_ClassInfo_, clinit$BasicOptionPaneUI, allocate$BasicOptionPaneUI);
	return class$;
}

$Class* BasicOptionPaneUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax