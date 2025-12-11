#include <com/apple/laf/AquaTextFieldSearch.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIConstants$Variant.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon.h>
#include <com/apple/laf/AquaIcon$JRSUIIcon.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaTextFieldBorder.h>
#include <com/apple/laf/AquaTextFieldSearch$1.h>
#include <com/apple/laf/AquaTextFieldSearch$10.h>
#include <com/apple/laf/AquaTextFieldSearch$11.h>
#include <com/apple/laf/AquaTextFieldSearch$12.h>
#include <com/apple/laf/AquaTextFieldSearch$2.h>
#include <com/apple/laf/AquaTextFieldSearch$3.h>
#include <com/apple/laf/AquaTextFieldSearch$4.h>
#include <com/apple/laf/AquaTextFieldSearch$5.h>
#include <com/apple/laf/AquaTextFieldSearch$6.h>
#include <com/apple/laf/AquaTextFieldSearch$7.h>
#include <com/apple/laf/AquaTextFieldSearch$8.h>
#include <com/apple/laf/AquaTextFieldSearch$9.h>
#include <com/apple/laf/AquaTextFieldSearch$SearchFieldBorder.h>
#include <com/apple/laf/AquaTextFieldSearch$SearchFieldPropertyListener.h>
#include <com/apple/laf/AquaTextFieldUI.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtils$JComponentPainter.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Runnable.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef ACTIVE
#undef CANCEL_ACTION_KEY
#undef CENTER
#undef DEFAULT_CURSOR
#undef EAST
#undef FIND_ACTION_KEY
#undef FIND_POPUP_KEY
#undef INACTIVE
#undef MENU_GLYPH
#undef PRESSED
#undef PROMPT_KEY
#undef SEARCH_FIELD_PROPERTY_LISTENER
#undef SEARCH_VARIANT_VALUE
#undef VARIANT_KEY
#undef WEST

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIConstants$Variant = ::apple::laf::JRSUIConstants$Variant;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaIcon$DynamicallySizingJRSUIIcon = ::com::apple::laf::AquaIcon$DynamicallySizingJRSUIIcon;
using $AquaIcon$JRSUIIcon = ::com::apple::laf::AquaIcon$JRSUIIcon;
using $AquaTextFieldBorder = ::com::apple::laf::AquaTextFieldBorder;
using $AquaTextFieldSearch$1 = ::com::apple::laf::AquaTextFieldSearch$1;
using $AquaTextFieldSearch$10 = ::com::apple::laf::AquaTextFieldSearch$10;
using $AquaTextFieldSearch$11 = ::com::apple::laf::AquaTextFieldSearch$11;
using $AquaTextFieldSearch$12 = ::com::apple::laf::AquaTextFieldSearch$12;
using $AquaTextFieldSearch$2 = ::com::apple::laf::AquaTextFieldSearch$2;
using $AquaTextFieldSearch$3 = ::com::apple::laf::AquaTextFieldSearch$3;
using $AquaTextFieldSearch$4 = ::com::apple::laf::AquaTextFieldSearch$4;
using $AquaTextFieldSearch$5 = ::com::apple::laf::AquaTextFieldSearch$5;
using $AquaTextFieldSearch$6 = ::com::apple::laf::AquaTextFieldSearch$6;
using $AquaTextFieldSearch$7 = ::com::apple::laf::AquaTextFieldSearch$7;
using $AquaTextFieldSearch$8 = ::com::apple::laf::AquaTextFieldSearch$8;
using $AquaTextFieldSearch$9 = ::com::apple::laf::AquaTextFieldSearch$9;
using $AquaTextFieldSearch$SearchFieldBorder = ::com::apple::laf::AquaTextFieldSearch$SearchFieldBorder;
using $AquaTextFieldSearch$SearchFieldPropertyListener = ::com::apple::laf::AquaTextFieldSearch$SearchFieldPropertyListener;
using $AquaTextFieldUI = ::com::apple::laf::AquaTextFieldUI;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $AquaUtils$JComponentPainter = ::com::apple::laf::AquaUtils$JComponentPainter;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Insets = ::java::awt::Insets;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusListener = ::java::awt::event::FocusListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $BorderFactory = ::javax::swing::BorderFactory;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $TextUI = ::javax::swing::plaf::TextUI;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTextFieldSearch_FieldInfo_[] = {
	{"VARIANT_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaTextFieldSearch, VARIANT_KEY)},
	{"SEARCH_VARIANT_VALUE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaTextFieldSearch, SEARCH_VARIANT_VALUE)},
	{"FIND_POPUP_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaTextFieldSearch, FIND_POPUP_KEY)},
	{"FIND_ACTION_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaTextFieldSearch, FIND_ACTION_KEY)},
	{"CANCEL_ACTION_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaTextFieldSearch, CANCEL_ACTION_KEY)},
	{"PROMPT_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaTextFieldSearch, PROMPT_KEY)},
	{"SEARCH_FIELD_PROPERTY_LISTENER", "Lcom/apple/laf/AquaTextFieldSearch$SearchFieldPropertyListener;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaTextFieldSearch, SEARCH_FIELD_PROPERTY_LISTENER)},
	{"instance", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaTextFieldSearch$SearchFieldBorder;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaTextFieldSearch, instance)},
	{}
};

$MethodInfo _AquaTextFieldSearch_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaTextFieldSearch::*)()>(&AquaTextFieldSearch::init$))},
	{"createButton", "(Ljavax/swing/text/JTextComponent;Lcom/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon;)Ljavax/swing/JButton;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$JButton*(*)($JTextComponent*,$AquaIcon$DynamicallySizingJRSUIIcon*)>(&AquaTextFieldSearch::createButton))},
	{"getCancelButton", "(Ljavax/swing/text/JTextComponent;)Ljavax/swing/JButton;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$JButton*(*)($JTextComponent*)>(&AquaTextFieldSearch::getCancelButton))},
	{"getCancelIcon", "()Lcom/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$AquaIcon$DynamicallySizingJRSUIIcon*(*)()>(&AquaTextFieldSearch::getCancelIcon))},
	{"getFindButton", "(Ljavax/swing/text/JTextComponent;)Ljavax/swing/JButton;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$JButton*(*)($JTextComponent*)>(&AquaTextFieldSearch::getFindButton))},
	{"getFindIcon", "(Ljavax/swing/text/JTextComponent;)Lcom/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$AquaIcon$DynamicallySizingJRSUIIcon*(*)($JTextComponent*)>(&AquaTextFieldSearch::getFindIcon))},
	{"getPromptLabel", "(Ljavax/swing/text/JTextComponent;)Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Component*(*)($JTextComponent*)>(&AquaTextFieldSearch::getPromptLabel))},
	{"getSearchTextFieldBorder", "()Lcom/apple/laf/AquaTextFieldSearch$SearchFieldBorder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AquaTextFieldSearch$SearchFieldBorder*(*)()>(&AquaTextFieldSearch::getSearchTextFieldBorder))},
	{"getState", "(Ljavax/swing/JButton;)Lapple/laf/JRSUIConstants$State;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$JRSUIConstants$State*(*)($JButton*)>(&AquaTextFieldSearch::getState))},
	{"hasPopupMenu", "(Ljavax/swing/text/JTextComponent;)Z", nullptr, $PROTECTED | $STATIC, $method(static_cast<bool(*)($JTextComponent*)>(&AquaTextFieldSearch::hasPopupMenu))},
	{"installSearchField", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($JTextComponent*)>(&AquaTextFieldSearch::installSearchField))},
	{"installSearchFieldListener", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($JTextComponent*)>(&AquaTextFieldSearch::installSearchFieldListener))},
	{"uninstallSearchField", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($JTextComponent*)>(&AquaTextFieldSearch::uninstallSearchField))},
	{"uninstallSearchFieldListener", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($JTextComponent*)>(&AquaTextFieldSearch::uninstallSearchFieldListener))},
	{"updateCancelIcon", "(Ljavax/swing/JButton;Ljavax/swing/text/JTextComponent;)V", nullptr, $STATIC, $method(static_cast<void(*)($JButton*,$JTextComponent*)>(&AquaTextFieldSearch::updateCancelIcon))},
	{"updateCancelIconOnEDT", "(Ljavax/swing/JButton;Ljavax/swing/text/JTextComponent;)V", nullptr, $STATIC, $method(static_cast<void(*)($JButton*,$JTextComponent*)>(&AquaTextFieldSearch::updateCancelIconOnEDT))},
	{"updatePromptLabel", "(Ljavax/swing/JLabel;Ljavax/swing/text/JTextComponent;)V", nullptr, $STATIC, $method(static_cast<void(*)($JLabel*,$JTextComponent*)>(&AquaTextFieldSearch::updatePromptLabel))},
	{"updatePromptLabelOnEDT", "(Ljavax/swing/JLabel;Ljavax/swing/text/JTextComponent;)V", nullptr, $STATIC, $method(static_cast<void(*)($JLabel*,$JTextComponent*)>(&AquaTextFieldSearch::updatePromptLabelOnEDT))},
	{"wantsToBeASearchField", "(Ljavax/swing/text/JTextComponent;)Z", nullptr, $PROTECTED | $STATIC, $method(static_cast<bool(*)($JTextComponent*)>(&AquaTextFieldSearch::wantsToBeASearchField))},
	{}
};

$InnerClassInfo _AquaTextFieldSearch_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTextFieldSearch$SearchFieldBorder", "com.apple.laf.AquaTextFieldSearch", "SearchFieldBorder", $STATIC},
	{"com.apple.laf.AquaTextFieldSearch$SearchFieldPropertyListener", "com.apple.laf.AquaTextFieldSearch", "SearchFieldPropertyListener", $STATIC},
	{"com.apple.laf.AquaTextFieldSearch$12", nullptr, nullptr, 0},
	{"com.apple.laf.AquaTextFieldSearch$11", nullptr, nullptr, 0},
	{"com.apple.laf.AquaTextFieldSearch$10", nullptr, nullptr, 0},
	{"com.apple.laf.AquaTextFieldSearch$9", nullptr, nullptr, 0},
	{"com.apple.laf.AquaTextFieldSearch$8", nullptr, nullptr, 0},
	{"com.apple.laf.AquaTextFieldSearch$7", nullptr, nullptr, 0},
	{"com.apple.laf.AquaTextFieldSearch$6", nullptr, nullptr, 0},
	{"com.apple.laf.AquaTextFieldSearch$5", nullptr, nullptr, 0},
	{"com.apple.laf.AquaTextFieldSearch$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaTextFieldSearch$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaTextFieldSearch$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaTextFieldSearch$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTextFieldSearch_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTextFieldSearch",
	"java.lang.Object",
	nullptr,
	_AquaTextFieldSearch_FieldInfo_,
	_AquaTextFieldSearch_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTextFieldSearch_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTextFieldSearch$SearchFieldBorder,com.apple.laf.AquaTextFieldSearch$SearchFieldBorder$1,com.apple.laf.AquaTextFieldSearch$SearchFieldPropertyListener,com.apple.laf.AquaTextFieldSearch$12,com.apple.laf.AquaTextFieldSearch$11,com.apple.laf.AquaTextFieldSearch$10,com.apple.laf.AquaTextFieldSearch$9,com.apple.laf.AquaTextFieldSearch$8,com.apple.laf.AquaTextFieldSearch$7,com.apple.laf.AquaTextFieldSearch$6,com.apple.laf.AquaTextFieldSearch$5,com.apple.laf.AquaTextFieldSearch$4,com.apple.laf.AquaTextFieldSearch$3,com.apple.laf.AquaTextFieldSearch$2,com.apple.laf.AquaTextFieldSearch$1"
};

$Object* allocate$AquaTextFieldSearch($Class* clazz) {
	return $of($alloc(AquaTextFieldSearch));
}

$String* AquaTextFieldSearch::VARIANT_KEY = nullptr;
$String* AquaTextFieldSearch::SEARCH_VARIANT_VALUE = nullptr;
$String* AquaTextFieldSearch::FIND_POPUP_KEY = nullptr;
$String* AquaTextFieldSearch::FIND_ACTION_KEY = nullptr;
$String* AquaTextFieldSearch::CANCEL_ACTION_KEY = nullptr;
$String* AquaTextFieldSearch::PROMPT_KEY = nullptr;
$AquaTextFieldSearch$SearchFieldPropertyListener* AquaTextFieldSearch::SEARCH_FIELD_PROPERTY_LISTENER = nullptr;
$AquaUtils$RecyclableSingleton* AquaTextFieldSearch::instance = nullptr;

void AquaTextFieldSearch::init$() {
}

void AquaTextFieldSearch::installSearchFieldListener($JTextComponent* c) {
	$init(AquaTextFieldSearch);
	$nc(c)->addPropertyChangeListener(AquaTextFieldSearch::SEARCH_FIELD_PROPERTY_LISTENER);
}

void AquaTextFieldSearch::uninstallSearchFieldListener($JTextComponent* c) {
	$init(AquaTextFieldSearch);
	$nc(c)->removePropertyChangeListener(AquaTextFieldSearch::SEARCH_FIELD_PROPERTY_LISTENER);
}

bool AquaTextFieldSearch::wantsToBeASearchField($JTextComponent* c) {
	$init(AquaTextFieldSearch);
	return $nc(AquaTextFieldSearch::SEARCH_VARIANT_VALUE)->equals($($nc(c)->getClientProperty(AquaTextFieldSearch::VARIANT_KEY)));
}

bool AquaTextFieldSearch::hasPopupMenu($JTextComponent* c) {
	$init(AquaTextFieldSearch);
	return ($instanceOf($JPopupMenu, $($nc(c)->getClientProperty(AquaTextFieldSearch::FIND_POPUP_KEY))));
}

$AquaTextFieldSearch$SearchFieldBorder* AquaTextFieldSearch::getSearchTextFieldBorder() {
	$init(AquaTextFieldSearch);
	return $cast($AquaTextFieldSearch$SearchFieldBorder, $nc(AquaTextFieldSearch::instance)->get());
}

void AquaTextFieldSearch::installSearchField($JTextComponent* c) {
	$init(AquaTextFieldSearch);
	$useLocalCurrentObjectStackCache();
	$var($AquaTextFieldSearch$SearchFieldBorder, border, getSearchTextFieldBorder());
	$nc(c)->setBorder(border);
	c->setLayout($($nc(border)->getCustomLayout()));
	$init($BorderLayout);
	c->add($(static_cast<$Component*>(getFindButton(c))), $of($BorderLayout::WEST));
	c->add($(static_cast<$Component*>(getCancelButton(c))), $of($BorderLayout::EAST));
	c->add($(getPromptLabel(c)), $of($BorderLayout::CENTER));
	$var($TextUI, ui, $cast($TextUI, c->getUI()));
	if ($instanceOf($AquaTextFieldUI, ui)) {
		$nc(($cast($AquaTextFieldUI, ui)))->setPaintingDelegate(border);
	}
}

void AquaTextFieldSearch::uninstallSearchField($JTextComponent* c) {
	$init(AquaTextFieldSearch);
	$useLocalCurrentObjectStackCache();
	$nc(c)->setBorder($($UIManager::getBorder("TextField.border"_s)));
	c->removeAll();
	$var($TextUI, ui, $cast($TextUI, c->getUI()));
	if ($instanceOf($AquaTextFieldUI, ui)) {
		$nc(($cast($AquaTextFieldUI, ui)))->setPaintingDelegate(nullptr);
	}
}

$AquaIcon$DynamicallySizingJRSUIIcon* AquaTextFieldSearch::getFindIcon($JTextComponent* text) {
	$init(AquaTextFieldSearch);
	$useLocalCurrentObjectStackCache();
	return ($nc(text)->getClientProperty(AquaTextFieldSearch::FIND_POPUP_KEY) == nullptr) ? static_cast<$AquaIcon$DynamicallySizingJRSUIIcon*>($new($AquaTextFieldSearch$1, $$new($AquaUtilControlSize$SizeDescriptor, $($$new($AquaUtilControlSize$SizeVariant, 25, 22)->alterMargins(0, 4, 0, -5))))) : static_cast<$AquaIcon$DynamicallySizingJRSUIIcon*>($new($AquaTextFieldSearch$2, $$new($AquaUtilControlSize$SizeDescriptor, $($$new($AquaUtilControlSize$SizeVariant, 25, 22)->alterMargins(0, 4, 0, 2)))));
}

$AquaIcon$DynamicallySizingJRSUIIcon* AquaTextFieldSearch::getCancelIcon() {
	$init(AquaTextFieldSearch);
	$useLocalCurrentObjectStackCache();
	return $new($AquaTextFieldSearch$3, $$new($AquaUtilControlSize$SizeDescriptor, $($$new($AquaUtilControlSize$SizeVariant, 22, 22)->alterMargins(0, 0, 0, 4))));
}

$JRSUIConstants$State* AquaTextFieldSearch::getState($JButton* b) {
	$init(AquaTextFieldSearch);
	if (!$AquaFocusHandler::isActive(b)) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::INACTIVE;
	}
	if ($nc($($nc(b)->getModel()))->isPressed()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::PRESSED;
	}
	$init($JRSUIConstants$State);
	return $JRSUIConstants$State::ACTIVE;
}

$JButton* AquaTextFieldSearch::createButton($JTextComponent* c, $AquaIcon$DynamicallySizingJRSUIIcon* icon) {
	$init(AquaTextFieldSearch);
	$useLocalCurrentObjectStackCache();
	$var($JButton, b, $new($JButton));
	$var($Insets, i, $nc($nc(icon)->sizeVariant)->margins);
	b->setBorder($($BorderFactory::createEmptyBorder($nc(i)->top, i->left, i->bottom, i->right)));
	b->setIcon(icon);
	b->setBorderPainted(false);
	b->setFocusable(false);
	b->setCursor($$new($Cursor, $Cursor::DEFAULT_CURSOR));
	b->addChangeListener($$new($AquaTextFieldSearch$4, icon, b));
	b->addMouseListener($$new($AquaTextFieldSearch$5, c));
	return b;
}

$JButton* AquaTextFieldSearch::getFindButton($JTextComponent* c) {
	$init(AquaTextFieldSearch);
	$useLocalCurrentObjectStackCache();
	$var($AquaIcon$DynamicallySizingJRSUIIcon, findIcon, getFindIcon(c));
	$var($JButton, b, createButton(c, findIcon));
	$nc(b)->setName("find"_s);
	$var($Object, findPopup, $nc(c)->getClientProperty(AquaTextFieldSearch::FIND_POPUP_KEY));
	if ($instanceOf($JPopupMenu, findPopup)) {
		$init($JRSUIConstants$Variant);
		$nc($nc($nc(findIcon)->painter)->state)->set($JRSUIConstants$Variant::MENU_GLYPH);
		b->addMouseListener($$new($AquaTextFieldSearch$6, findPopup, b, c));
	}
	$var($Object, findAction, c->getClientProperty(AquaTextFieldSearch::FIND_ACTION_KEY));
	if ($instanceOf($ActionListener, findAction)) {
		b->addActionListener($cast($ActionListener, findAction));
	}
	return b;
}

$Component* AquaTextFieldSearch::getPromptLabel($JTextComponent* c) {
	$init(AquaTextFieldSearch);
	$useLocalCurrentObjectStackCache();
	$var($JLabel, label, $new($JLabel));
	label->setForeground($($UIManager::getColor("TextField.inactiveForeground"_s)));
	$nc($($nc(c)->getDocument()))->addDocumentListener($$new($AquaTextFieldSearch$7, label, c));
	c->addFocusListener($$new($AquaTextFieldSearch$8, label, c));
	updatePromptLabel(label, c);
	return label;
}

void AquaTextFieldSearch::updatePromptLabel($JLabel* label, $JTextComponent* text) {
	$init(AquaTextFieldSearch);
	if ($SwingUtilities::isEventDispatchThread()) {
		updatePromptLabelOnEDT(label, text);
	} else {
		$SwingUtilities::invokeLater($$new($AquaTextFieldSearch$9, label, text));
	}
}

void AquaTextFieldSearch::updatePromptLabelOnEDT($JLabel* label, $JTextComponent* text) {
	$init(AquaTextFieldSearch);
	$useLocalCurrentObjectStackCache();
	$var($String, promptText, " "_s);
	bool var$0 = !$nc(text)->hasFocus();
	if (var$0 && ""_s->equals($(text->getText()))) {
		$var($Object, prompt, text->getClientProperty(AquaTextFieldSearch::PROMPT_KEY));
		if (prompt != nullptr) {
			$assign(promptText, $of(prompt)->toString());
		}
	}
	$nc(label)->setText(promptText);
}

$JButton* AquaTextFieldSearch::getCancelButton($JTextComponent* c) {
	$init(AquaTextFieldSearch);
	$useLocalCurrentObjectStackCache();
	$var($JButton, b, createButton(c, $(getCancelIcon())));
	$nc(b)->setName("cancel"_s);
	$var($Object, cancelAction, $nc(c)->getClientProperty(AquaTextFieldSearch::CANCEL_ACTION_KEY));
	if ($instanceOf($ActionListener, cancelAction)) {
		b->addActionListener($cast($ActionListener, cancelAction));
	}
	b->addActionListener($$new($AquaTextFieldSearch$10, "cancel"_s, c));
	$nc($(c->getDocument()))->addDocumentListener($$new($AquaTextFieldSearch$11, b, c));
	updateCancelIcon(b, c);
	return b;
}

void AquaTextFieldSearch::updateCancelIcon($JButton* button, $JTextComponent* text) {
	$init(AquaTextFieldSearch);
	if ($SwingUtilities::isEventDispatchThread()) {
		updateCancelIconOnEDT(button, text);
	} else {
		$SwingUtilities::invokeLater($$new($AquaTextFieldSearch$12, button, text));
	}
}

void AquaTextFieldSearch::updateCancelIconOnEDT($JButton* button, $JTextComponent* text) {
	$init(AquaTextFieldSearch);
	$nc(button)->setVisible(!""_s->equals($($nc(text)->getText())));
}

void clinit$AquaTextFieldSearch($Class* class$) {
	$assignStatic(AquaTextFieldSearch::VARIANT_KEY, "JTextField.variant"_s);
	$assignStatic(AquaTextFieldSearch::SEARCH_VARIANT_VALUE, "search"_s);
	$assignStatic(AquaTextFieldSearch::FIND_POPUP_KEY, "JTextField.Search.FindPopup"_s);
	$assignStatic(AquaTextFieldSearch::FIND_ACTION_KEY, "JTextField.Search.FindAction"_s);
	$assignStatic(AquaTextFieldSearch::CANCEL_ACTION_KEY, "JTextField.Search.CancelAction"_s);
	$assignStatic(AquaTextFieldSearch::PROMPT_KEY, "JTextField.Search.Prompt"_s);
	$assignStatic(AquaTextFieldSearch::SEARCH_FIELD_PROPERTY_LISTENER, $new($AquaTextFieldSearch$SearchFieldPropertyListener));
	$load($AquaTextFieldSearch$SearchFieldBorder);
	$assignStatic(AquaTextFieldSearch::instance, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaTextFieldSearch$SearchFieldBorder::class$));
}

AquaTextFieldSearch::AquaTextFieldSearch() {
}

$Class* AquaTextFieldSearch::load$($String* name, bool initialize) {
	$loadClass(AquaTextFieldSearch, name, initialize, &_AquaTextFieldSearch_ClassInfo_, clinit$AquaTextFieldSearch, allocate$AquaTextFieldSearch);
	return class$;
}

$Class* AquaTextFieldSearch::class$ = nullptr;

		} // laf
	} // apple
} // com