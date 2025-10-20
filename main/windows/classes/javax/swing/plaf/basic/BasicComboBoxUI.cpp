#include <javax/swing/plaf/basic/BasicComboBoxUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox$KeySelectionManager.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicArrowButton.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor$UIResource.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>
#include <javax/swing/plaf/basic/BasicComboBoxRenderer$UIResource.h>
#include <javax/swing/plaf/basic/BasicComboBoxRenderer.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$Actions.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$DefaultKeySelectionManager.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$Handler.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef COMBO_UI_LIST_CELL_RENDERER_KEY
#undef DOWN
#undef DOWN_2
#undef END
#undef ENTER
#undef HIDE
#undef HIDE_POPUP_KEY
#undef HOME
#undef IS_TABLE_CELL_EDITOR
#undef MAX_VALUE
#undef OTHER
#undef PAGE_DOWN
#undef PAGE_UP
#undef SOUTH
#undef TOGGLE
#undef TOGGLE_2
#undef TRUE
#undef UP
#undef UP_2
#undef VK_DOWN
#undef VK_KP_DOWN
#undef VK_KP_UP
#undef VK_UP
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT

using $ComponentArray = $Array<::java::awt::Component>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusListener = ::java::awt::event::FocusListener;
using $ItemListener = ::java::awt::event::ItemListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $KeyListener = ::java::awt::event::KeyListener;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $StringBuffer = ::java::lang::StringBuffer;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $InputMap = ::javax::swing::InputMap;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComboBox$KeySelectionManager = ::javax::swing::JComboBox$KeySelectionManager;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $JPanel = ::javax::swing::JPanel;
using $KeyStroke = ::javax::swing::KeyStroke;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ListModel = ::javax::swing::ListModel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicArrowButton = ::javax::swing::plaf::basic::BasicArrowButton;
using $BasicComboBoxEditor = ::javax::swing::plaf::basic::BasicComboBoxEditor;
using $BasicComboBoxEditor$UIResource = ::javax::swing::plaf::basic::BasicComboBoxEditor$UIResource;
using $BasicComboBoxRenderer = ::javax::swing::plaf::basic::BasicComboBoxRenderer;
using $BasicComboBoxRenderer$UIResource = ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource;
using $BasicComboBoxUI$Actions = ::javax::swing::plaf::basic::BasicComboBoxUI$Actions;
using $BasicComboBoxUI$DefaultKeySelectionManager = ::javax::swing::plaf::basic::BasicComboBoxUI$DefaultKeySelectionManager;
using $BasicComboBoxUI$Handler = ::javax::swing::plaf::basic::BasicComboBoxUI$Handler;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $AppContext = ::sun::awt::AppContext;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboBoxUI_FieldInfo_[] = {
	{"comboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/lang/Object;>;", $PROTECTED, $field(BasicComboBoxUI, comboBox)},
	{"hasFocus", "Z", nullptr, $PROTECTED, $field(BasicComboBoxUI, hasFocus)},
	{"isTableCellEditor", "Z", nullptr, $PRIVATE, $field(BasicComboBoxUI, isTableCellEditor$)},
	{"IS_TABLE_CELL_EDITOR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicComboBoxUI, IS_TABLE_CELL_EDITOR)},
	{"listBox", "Ljavax/swing/JList;", "Ljavax/swing/JList<Ljava/lang/Object;>;", $PROTECTED, $field(BasicComboBoxUI, listBox)},
	{"currentValuePane", "Ljavax/swing/CellRendererPane;", nullptr, $PROTECTED, $field(BasicComboBoxUI, currentValuePane)},
	{"popup", "Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $PROTECTED, $field(BasicComboBoxUI, popup)},
	{"editor", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(BasicComboBoxUI, editor)},
	{"arrowButton", "Ljavax/swing/JButton;", nullptr, $PROTECTED, $field(BasicComboBoxUI, arrowButton)},
	{"keyListener", "Ljava/awt/event/KeyListener;", nullptr, $PROTECTED, $field(BasicComboBoxUI, keyListener)},
	{"focusListener", "Ljava/awt/event/FocusListener;", nullptr, $PROTECTED, $field(BasicComboBoxUI, focusListener)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $field(BasicComboBoxUI, propertyChangeListener)},
	{"itemListener", "Ljava/awt/event/ItemListener;", nullptr, $PROTECTED, $field(BasicComboBoxUI, itemListener)},
	{"popupMouseListener", "Ljava/awt/event/MouseListener;", nullptr, $PROTECTED, $field(BasicComboBoxUI, popupMouseListener)},
	{"popupMouseMotionListener", "Ljava/awt/event/MouseMotionListener;", nullptr, $PROTECTED, $field(BasicComboBoxUI, popupMouseMotionListener)},
	{"popupKeyListener", "Ljava/awt/event/KeyListener;", nullptr, $PROTECTED, $field(BasicComboBoxUI, popupKeyListener)},
	{"listDataListener", "Ljavax/swing/event/ListDataListener;", nullptr, $PROTECTED, $field(BasicComboBoxUI, listDataListener)},
	{"handler", "Ljavax/swing/plaf/basic/BasicComboBoxUI$Handler;", nullptr, $PRIVATE, $field(BasicComboBoxUI, handler)},
	{"timeFactor", "J", nullptr, $PRIVATE, $field(BasicComboBoxUI, timeFactor)},
	{"lastTime", "J", nullptr, $PRIVATE, $field(BasicComboBoxUI, lastTime)},
	{"time", "J", nullptr, $PRIVATE, $field(BasicComboBoxUI, time)},
	{"keySelectionManager", "Ljavax/swing/JComboBox$KeySelectionManager;", nullptr, 0, $field(BasicComboBoxUI, keySelectionManager)},
	{"isMinimumSizeDirty", "Z", nullptr, $PROTECTED, $field(BasicComboBoxUI, isMinimumSizeDirty)},
	{"cachedMinimumSize", "Ljava/awt/Dimension;", nullptr, $PROTECTED, $field(BasicComboBoxUI, cachedMinimumSize)},
	{"isDisplaySizeDirty", "Z", nullptr, $PRIVATE, $field(BasicComboBoxUI, isDisplaySizeDirty)},
	{"cachedDisplaySize", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(BasicComboBoxUI, cachedDisplaySize)},
	{"COMBO_UI_LIST_CELL_RENDERER_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicComboBoxUI, COMBO_UI_LIST_CELL_RENDERER_KEY)},
	{"HIDE_POPUP_KEY", "Ljava/lang/StringBuffer;", nullptr, $STATIC | $FINAL, $staticField(BasicComboBoxUI, HIDE_POPUP_KEY)},
	{"sameBaseline", "Z", nullptr, $PRIVATE, $field(BasicComboBoxUI, sameBaseline)},
	{"squareButton", "Z", nullptr, $PROTECTED, $field(BasicComboBoxUI, squareButton)},
	{"padding", "Ljava/awt/Insets;", nullptr, $PROTECTED, $field(BasicComboBoxUI, padding)},
	{}
};

$MethodInfo _BasicComboBoxUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicComboBoxUI::*)()>(&BasicComboBoxUI::init$))},
	{"addEditor", "()V", nullptr, $PUBLIC},
	{"configureArrowButton", "()V", nullptr, $PUBLIC},
	{"configureEditor", "()V", nullptr, $PROTECTED},
	{"createArrowButton", "()Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createEditor", "()Ljavax/swing/ComboBoxEditor;", nullptr, $PROTECTED},
	{"createFocusListener", "()Ljava/awt/event/FocusListener;", nullptr, $PROTECTED},
	{"createItemListener", "()Ljava/awt/event/ItemListener;", nullptr, $PROTECTED},
	{"createKeyListener", "()Ljava/awt/event/KeyListener;", nullptr, $PROTECTED},
	{"createLayoutManager", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createListDataListener", "()Ljavax/swing/event/ListDataListener;", nullptr, $PROTECTED},
	{"createPopup", "()Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createRenderer", "()Ljavax/swing/ListCellRenderer;", "()Ljavax/swing/ListCellRenderer<Ljava/lang/Object;>;", $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicComboBoxUI::createUI))},
	{"getAccessibleChild", "(Ljavax/swing/JComponent;I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getDefaultListCellRenderer", "()Ljavax/swing/ListCellRenderer;", "()Ljavax/swing/ListCellRenderer<Ljava/lang/Object;>;", $PRIVATE | $STATIC, $method(static_cast<$ListCellRenderer*(*)()>(&BasicComboBoxUI::getDefaultListCellRenderer))},
	{"getDefaultSize", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getDisplaySize", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicComboBoxUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicComboBoxUI$Handler*(BasicComboBoxUI::*)()>(&BasicComboBoxUI::getHandler))},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PROTECTED},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSizeForComponent", "(Ljava/awt/Component;)Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isFocusTraversable", "(Ljavax/swing/JComboBox;)Z", "(Ljavax/swing/JComboBox<*>;)Z", $PUBLIC},
	{"isNavigationKey", "(I)Z", nullptr, $PROTECTED},
	{"isNavigationKey", "(II)Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicComboBoxUI::*)(int32_t,int32_t)>(&BasicComboBoxUI::isNavigationKey))},
	{"isPopupVisible", "(Ljavax/swing/JComboBox;)Z", "(Ljavax/swing/JComboBox<*>;)Z", $PUBLIC},
	{"isTableCellEditor", "()Z", nullptr, 0},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicComboBoxUI::loadActionMap))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintCurrentValue", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Z)V", nullptr, $PUBLIC},
	{"paintCurrentValueBackground", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Z)V", nullptr, $PUBLIC},
	{"rectangleForCurrentValue", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"removeEditor", "()V", nullptr, $PUBLIC},
	{"repaintCurrentValue", "()V", nullptr, 0},
	{"selectNextPossibleValue", "()V", nullptr, $PROTECTED},
	{"selectPreviousPossibleValue", "()V", nullptr, $PROTECTED},
	{"setPopupVisible", "(Ljavax/swing/JComboBox;Z)V", "(Ljavax/swing/JComboBox<*>;Z)V", $PUBLIC},
	{"toggleOpenClose", "()V", nullptr, $PROTECTED},
	{"unconfigureArrowButton", "()V", nullptr, $PUBLIC},
	{"unconfigureEditor", "()V", nullptr, $PROTECTED},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateToolTipTextForChildren", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicComboBoxUI::*)()>(&BasicComboBoxUI::updateToolTipTextForChildren))},
	{}
};

$InnerClassInfo _BasicComboBoxUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboBoxUI$DefaultKeySelectionManager", "javax.swing.plaf.basic.BasicComboBoxUI", "DefaultKeySelectionManager", 0},
	{"javax.swing.plaf.basic.BasicComboBoxUI$Handler", "javax.swing.plaf.basic.BasicComboBoxUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicComboBoxUI$Actions", "javax.swing.plaf.basic.BasicComboBoxUI", "Actions", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager", "javax.swing.plaf.basic.BasicComboBoxUI", "ComboBoxLayoutManager", $PUBLIC},
	{"javax.swing.plaf.basic.BasicComboBoxUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "PropertyChangeHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicComboBoxUI$ItemHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "ItemHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicComboBoxUI$ListDataHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "ListDataHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicComboBoxUI$FocusHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "FocusHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicComboBoxUI$KeyHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "KeyHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicComboBoxUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboBoxUI",
	"javax.swing.plaf.ComboBoxUI",
	nullptr,
	_BasicComboBoxUI_FieldInfo_,
	_BasicComboBoxUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboBoxUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboBoxUI$DefaultKeySelectionManager,javax.swing.plaf.basic.BasicComboBoxUI$Handler,javax.swing.plaf.basic.BasicComboBoxUI$Actions,javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager,javax.swing.plaf.basic.BasicComboBoxUI$PropertyChangeHandler,javax.swing.plaf.basic.BasicComboBoxUI$ItemHandler,javax.swing.plaf.basic.BasicComboBoxUI$ListDataHandler,javax.swing.plaf.basic.BasicComboBoxUI$FocusHandler,javax.swing.plaf.basic.BasicComboBoxUI$KeyHandler"
};

$Object* allocate$BasicComboBoxUI($Class* clazz) {
	return $of($alloc(BasicComboBoxUI));
}

$String* BasicComboBoxUI::IS_TABLE_CELL_EDITOR = nullptr;
$Object* BasicComboBoxUI::COMBO_UI_LIST_CELL_RENDERER_KEY = nullptr;
$StringBuffer* BasicComboBoxUI::HIDE_POPUP_KEY = nullptr;

void BasicComboBoxUI::init$() {
	$ComboBoxUI::init$();
	this->hasFocus = false;
	this->isTableCellEditor$ = false;
	$set(this, currentValuePane, $new($CellRendererPane));
	this->timeFactor = 1000;
	this->lastTime = 0;
	this->time = 0;
	this->isMinimumSizeDirty = true;
	$set(this, cachedMinimumSize, $new($Dimension, 0, 0));
	this->isDisplaySizeDirty = true;
	$set(this, cachedDisplaySize, $new($Dimension, 0, 0));
	this->squareButton = true;
}

$ListCellRenderer* BasicComboBoxUI::getDefaultListCellRenderer() {
	$init(BasicComboBoxUI);
	$useLocalCurrentObjectStackCache();
	$var($ListCellRenderer, renderer, $cast($ListCellRenderer, $nc($($AppContext::getAppContext()))->get(BasicComboBoxUI::COMBO_UI_LIST_CELL_RENDERER_KEY)));
	if (renderer == nullptr) {
		$assign(renderer, $new($DefaultListCellRenderer));
		$nc($($AppContext::getAppContext()))->put(BasicComboBoxUI::COMBO_UI_LIST_CELL_RENDERER_KEY, $$new($DefaultListCellRenderer));
	}
	return renderer;
}

void BasicComboBoxUI::loadActionMap($LazyActionMap* map) {
	$init(BasicComboBoxUI);
	$useLocalCurrentObjectStackCache();
	$init($BasicComboBoxUI$Actions);
	$nc(map)->put($$new($BasicComboBoxUI$Actions, $BasicComboBoxUI$Actions::HIDE));
	map->put($$new($BasicComboBoxUI$Actions, $BasicComboBoxUI$Actions::PAGE_DOWN));
	map->put($$new($BasicComboBoxUI$Actions, $BasicComboBoxUI$Actions::PAGE_UP));
	map->put($$new($BasicComboBoxUI$Actions, $BasicComboBoxUI$Actions::HOME));
	map->put($$new($BasicComboBoxUI$Actions, $BasicComboBoxUI$Actions::END));
	map->put($$new($BasicComboBoxUI$Actions, $BasicComboBoxUI$Actions::DOWN));
	map->put($$new($BasicComboBoxUI$Actions, $BasicComboBoxUI$Actions::DOWN_2));
	map->put($$new($BasicComboBoxUI$Actions, $BasicComboBoxUI$Actions::TOGGLE));
	map->put($$new($BasicComboBoxUI$Actions, $BasicComboBoxUI$Actions::TOGGLE_2));
	map->put($$new($BasicComboBoxUI$Actions, $BasicComboBoxUI$Actions::UP));
	map->put($$new($BasicComboBoxUI$Actions, $BasicComboBoxUI$Actions::UP_2));
	map->put($$new($BasicComboBoxUI$Actions, $BasicComboBoxUI$Actions::ENTER));
}

$ComponentUI* BasicComboBoxUI::createUI($JComponent* c) {
	$init(BasicComboBoxUI);
	return $new(BasicComboBoxUI);
}

void BasicComboBoxUI::installUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	this->isMinimumSizeDirty = true;
	$var($JComboBox, tmp, $cast($JComboBox, c));
	$set(this, comboBox, tmp);
	installDefaults();
	$set(this, popup, createPopup());
	$set(this, listBox, $nc(this->popup)->getList());
	$var($Boolean, inTable, $cast($Boolean, $nc(c)->getClientProperty(BasicComboBoxUI::IS_TABLE_CELL_EDITOR)));
	if (inTable != nullptr) {
		$init($Boolean);
		this->isTableCellEditor$ = inTable->equals($Boolean::TRUE) ? true : false;
	}
	bool var$0 = $nc(this->comboBox)->getRenderer() == nullptr;
	if (var$0 || $instanceOf($UIResource, $($nc(this->comboBox)->getRenderer()))) {
		$nc(this->comboBox)->setRenderer($(createRenderer()));
	}
	bool var$1 = $nc(this->comboBox)->getEditor() == nullptr;
	if (var$1 || $instanceOf($UIResource, $($nc(this->comboBox)->getEditor()))) {
		$nc(this->comboBox)->setEditor($(createEditor()));
	}
	installListeners();
	installComponents();
	$nc(this->comboBox)->setLayout($(createLayoutManager()));
	$nc(this->comboBox)->setRequestFocusEnabled(true);
	installKeyboardActions();
	$nc(this->comboBox)->putClientProperty("doNotCancelPopup"_s, BasicComboBoxUI::HIDE_POPUP_KEY);
	if (this->keySelectionManager == nullptr || $instanceOf($UIResource, this->keySelectionManager)) {
		$set(this, keySelectionManager, $new($BasicComboBoxUI$DefaultKeySelectionManager, this));
	}
	$nc(this->comboBox)->setKeySelectionManager(this->keySelectionManager);
}

void BasicComboBoxUI::uninstallUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	setPopupVisible(this->comboBox, false);
	$nc(this->popup)->uninstallingUI();
	uninstallKeyboardActions();
	$nc(this->comboBox)->setLayout(nullptr);
	uninstallComponents();
	uninstallListeners();
	uninstallDefaults();
	bool var$0 = $nc(this->comboBox)->getRenderer() == nullptr;
	if (var$0 || $instanceOf($UIResource, $($nc(this->comboBox)->getRenderer()))) {
		$nc(this->comboBox)->setRenderer(nullptr);
	}
	$var($ComboBoxEditor, comboBoxEditor, $nc(this->comboBox)->getEditor());
	if ($instanceOf($UIResource, comboBoxEditor)) {
		if ($nc($($nc(comboBoxEditor)->getEditorComponent()))->hasFocus()) {
			$nc(this->comboBox)->requestFocusInWindow();
		}
		$nc(this->comboBox)->setEditor(nullptr);
	}
	if ($instanceOf($UIResource, this->keySelectionManager)) {
		$nc(this->comboBox)->setKeySelectionManager(nullptr);
	}
	$set(this, handler, nullptr);
	$set(this, keyListener, nullptr);
	$set(this, focusListener, nullptr);
	$set(this, listDataListener, nullptr);
	$set(this, propertyChangeListener, nullptr);
	$set(this, popup, nullptr);
	$set(this, listBox, nullptr);
	$set(this, comboBox, nullptr);
}

void BasicComboBoxUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	$LookAndFeel::installColorsAndFont(this->comboBox, "ComboBox.background"_s, "ComboBox.foreground"_s, "ComboBox.font"_s);
	$LookAndFeel::installBorder(this->comboBox, "ComboBox.border"_s);
	$init($Boolean);
	$LookAndFeel::installProperty(this->comboBox, "opaque"_s, $Boolean::TRUE);
	$var($Long, l, $cast($Long, $UIManager::get("ComboBox.timeFactor"_s)));
	this->timeFactor = l == nullptr ? (int64_t)1000 : $nc(l)->longValue();
	$var($Boolean, b, $cast($Boolean, $UIManager::get("ComboBox.squareButton"_s)));
	this->squareButton = b == nullptr ? true : $nc(b)->booleanValue();
	$set(this, padding, $UIManager::getInsets("ComboBox.padding"_s));
}

void BasicComboBoxUI::installListeners() {
	if (($assignField(this, itemListener, createItemListener())) != nullptr) {
		$nc(this->comboBox)->addItemListener(this->itemListener);
	}
	if (($assignField(this, propertyChangeListener, createPropertyChangeListener())) != nullptr) {
		$nc(this->comboBox)->addPropertyChangeListener(this->propertyChangeListener);
	}
	if (($assignField(this, keyListener, createKeyListener())) != nullptr) {
		$nc(this->comboBox)->addKeyListener(this->keyListener);
	}
	if (($assignField(this, focusListener, createFocusListener())) != nullptr) {
		$nc(this->comboBox)->addFocusListener(this->focusListener);
	}
	if (($assignField(this, popupMouseListener, $nc(this->popup)->getMouseListener())) != nullptr) {
		$nc(this->comboBox)->addMouseListener(this->popupMouseListener);
	}
	if (($assignField(this, popupMouseMotionListener, $nc(this->popup)->getMouseMotionListener())) != nullptr) {
		$nc(this->comboBox)->addMouseMotionListener(this->popupMouseMotionListener);
	}
	if (($assignField(this, popupKeyListener, $nc(this->popup)->getKeyListener())) != nullptr) {
		$nc(this->comboBox)->addKeyListener(this->popupKeyListener);
	}
	if ($nc(this->comboBox)->getModel() != nullptr) {
		if (($assignField(this, listDataListener, createListDataListener())) != nullptr) {
			$nc($($nc(this->comboBox)->getModel()))->addListDataListener(this->listDataListener);
		}
	}
}

void BasicComboBoxUI::uninstallDefaults() {
	$LookAndFeel::installColorsAndFont(this->comboBox, "ComboBox.background"_s, "ComboBox.foreground"_s, "ComboBox.font"_s);
	$LookAndFeel::uninstallBorder(this->comboBox);
}

void BasicComboBoxUI::uninstallListeners() {
	if (this->keyListener != nullptr) {
		$nc(this->comboBox)->removeKeyListener(this->keyListener);
	}
	if (this->itemListener != nullptr) {
		$nc(this->comboBox)->removeItemListener(this->itemListener);
	}
	if (this->propertyChangeListener != nullptr) {
		$nc(this->comboBox)->removePropertyChangeListener(this->propertyChangeListener);
	}
	if (this->focusListener != nullptr) {
		$nc(this->comboBox)->removeFocusListener(this->focusListener);
	}
	if (this->popupMouseListener != nullptr) {
		$nc(this->comboBox)->removeMouseListener(this->popupMouseListener);
	}
	if (this->popupMouseMotionListener != nullptr) {
		$nc(this->comboBox)->removeMouseMotionListener(this->popupMouseMotionListener);
	}
	if (this->popupKeyListener != nullptr) {
		$nc(this->comboBox)->removeKeyListener(this->popupKeyListener);
	}
	if ($nc(this->comboBox)->getModel() != nullptr) {
		if (this->listDataListener != nullptr) {
			$nc($($nc(this->comboBox)->getModel()))->removeListDataListener(this->listDataListener);
		}
	}
}

$ComboPopup* BasicComboBoxUI::createPopup() {
	return $new($BasicComboPopup, this->comboBox);
}

$KeyListener* BasicComboBoxUI::createKeyListener() {
	return getHandler();
}

$FocusListener* BasicComboBoxUI::createFocusListener() {
	return getHandler();
}

$ListDataListener* BasicComboBoxUI::createListDataListener() {
	return getHandler();
}

$ItemListener* BasicComboBoxUI::createItemListener() {
	return nullptr;
}

$PropertyChangeListener* BasicComboBoxUI::createPropertyChangeListener() {
	return getHandler();
}

$LayoutManager* BasicComboBoxUI::createLayoutManager() {
	return getHandler();
}

$ListCellRenderer* BasicComboBoxUI::createRenderer() {
	return $new($BasicComboBoxRenderer$UIResource);
}

$ComboBoxEditor* BasicComboBoxUI::createEditor() {
	return $new($BasicComboBoxEditor$UIResource);
}

$BasicComboBoxUI$Handler* BasicComboBoxUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicComboBoxUI$Handler, this));
	}
	return this->handler;
}

void BasicComboBoxUI::updateToolTipTextForChildren() {
	$useLocalCurrentObjectStackCache();
	$var($ComponentArray, children, $nc(this->comboBox)->getComponents());
	for (int32_t i = 0; i < $nc(children)->length; ++i) {
		if ($instanceOf($JComponent, children->get(i))) {
			$nc(($cast($JComponent, children->get(i))))->setToolTipText($($nc(this->comboBox)->getToolTipText()));
		}
	}
}

void BasicComboBoxUI::installComponents() {
	$set(this, arrowButton, createArrowButton());
	if (this->arrowButton != nullptr) {
		$nc(this->comboBox)->add(static_cast<$Component*>(this->arrowButton));
		configureArrowButton();
	}
	if ($nc(this->comboBox)->isEditable()) {
		addEditor();
	}
	$nc(this->comboBox)->add(static_cast<$Component*>(this->currentValuePane));
}

void BasicComboBoxUI::uninstallComponents() {
	if (this->arrowButton != nullptr) {
		unconfigureArrowButton();
	}
	if (this->editor != nullptr) {
		unconfigureEditor();
	}
	$nc(this->comboBox)->removeAll();
	$set(this, arrowButton, nullptr);
}

void BasicComboBoxUI::addEditor() {
	removeEditor();
	$set(this, editor, $nc($($nc(this->comboBox)->getEditor()))->getEditorComponent());
	if (this->editor != nullptr) {
		configureEditor();
		$nc(this->comboBox)->add(this->editor);
		if ($nc(this->comboBox)->isFocusOwner()) {
			$nc(this->editor)->requestFocusInWindow();
		}
	}
}

void BasicComboBoxUI::removeEditor() {
	if (this->editor != nullptr) {
		unconfigureEditor();
		$nc(this->comboBox)->remove(this->editor);
		$set(this, editor, nullptr);
	}
}

void BasicComboBoxUI::configureEditor() {
	$useLocalCurrentObjectStackCache();
	$nc(this->editor)->setEnabled($nc(this->comboBox)->isEnabled());
	$nc(this->editor)->setFocusable($nc(this->comboBox)->isFocusable());
	$nc(this->editor)->setFont($($nc(this->comboBox)->getFont()));
	if (this->focusListener != nullptr) {
		$nc(this->editor)->addFocusListener(this->focusListener);
	}
	$nc(this->editor)->addFocusListener($(getHandler()));
	$nc($($nc(this->comboBox)->getEditor()))->addActionListener($(getHandler()));
	if ($instanceOf($JComponent, this->editor)) {
		$nc(($cast($JComponent, this->editor)))->putClientProperty("doNotCancelPopup"_s, BasicComboBoxUI::HIDE_POPUP_KEY);
		$nc(($cast($JComponent, this->editor)))->setInheritsPopupMenu(true);
	}
	$var($ComboBoxEditor, var$0, $nc(this->comboBox)->getEditor());
	$nc(this->comboBox)->configureEditor(var$0, $($nc(this->comboBox)->getSelectedItem()));
	$nc(this->editor)->addPropertyChangeListener(this->propertyChangeListener);
}

void BasicComboBoxUI::unconfigureEditor() {
	$useLocalCurrentObjectStackCache();
	if (this->focusListener != nullptr) {
		$nc(this->editor)->removeFocusListener(this->focusListener);
	}
	$nc(this->editor)->removePropertyChangeListener(this->propertyChangeListener);
	$nc(this->editor)->removeFocusListener($(getHandler()));
	$nc($($nc(this->comboBox)->getEditor()))->removeActionListener($(getHandler()));
}

void BasicComboBoxUI::configureArrowButton() {
	$useLocalCurrentObjectStackCache();
	if (this->arrowButton != nullptr) {
		$nc(this->arrowButton)->setEnabled($nc(this->comboBox)->isEnabled());
		$nc(this->arrowButton)->setFocusable($nc(this->comboBox)->isFocusable());
		$nc(this->arrowButton)->setRequestFocusEnabled(false);
		$nc(this->arrowButton)->addMouseListener($($nc(this->popup)->getMouseListener()));
		$nc(this->arrowButton)->addMouseMotionListener($($nc(this->popup)->getMouseMotionListener()));
		$nc(this->arrowButton)->resetKeyboardActions();
		$nc(this->arrowButton)->putClientProperty("doNotCancelPopup"_s, BasicComboBoxUI::HIDE_POPUP_KEY);
		$nc(this->arrowButton)->setInheritsPopupMenu(true);
	}
}

void BasicComboBoxUI::unconfigureArrowButton() {
	$useLocalCurrentObjectStackCache();
	if (this->arrowButton != nullptr) {
		$nc(this->arrowButton)->removeMouseListener($($nc(this->popup)->getMouseListener()));
		$nc(this->arrowButton)->removeMouseMotionListener($($nc(this->popup)->getMouseMotionListener()));
	}
}

$JButton* BasicComboBoxUI::createArrowButton() {
	$useLocalCurrentObjectStackCache();
	$var($Color, var$0, $UIManager::getColor("ComboBox.buttonBackground"_s));
	$var($Color, var$1, $UIManager::getColor("ComboBox.buttonShadow"_s));
	$var($Color, var$2, $UIManager::getColor("ComboBox.buttonDarkShadow"_s));
	$var($JButton, button, $new($BasicArrowButton, $BasicArrowButton::SOUTH, var$0, var$1, var$2, $($UIManager::getColor("ComboBox.buttonHighlight"_s))));
	button->setName("ComboBox.arrowButton"_s);
	return button;
}

bool BasicComboBoxUI::isPopupVisible($JComboBox* c) {
	return this->popup != nullptr && $nc(this->popup)->isVisible();
}

void BasicComboBoxUI::setPopupVisible($JComboBox* c, bool v) {
	if (this->popup != nullptr) {
		if (v) {
			$nc(this->popup)->show();
		} else {
			$nc(this->popup)->hide();
		}
	}
}

bool BasicComboBoxUI::isFocusTraversable($JComboBox* c) {
	return !$nc(this->comboBox)->isEditable();
}

void BasicComboBoxUI::paint($Graphics* g, $JComponent* c) {
	this->hasFocus = $nc(this->comboBox)->hasFocus();
	if (!$nc(this->comboBox)->isEditable()) {
		$var($Rectangle, r, rectangleForCurrentValue());
		paintCurrentValueBackground(g, r, this->hasFocus);
		paintCurrentValue(g, r, this->hasFocus);
	}
	$nc(this->currentValuePane)->removeAll();
}

$Dimension* BasicComboBoxUI::getPreferredSize($JComponent* c) {
	return getMinimumSize(c);
}

$Dimension* BasicComboBoxUI::getMinimumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	if (!this->isMinimumSizeDirty) {
		return $new($Dimension, this->cachedMinimumSize);
	}
	$var($Dimension, size, getDisplaySize());
	$var($Insets, insets, getInsets());
	int32_t buttonHeight = $nc(size)->height;
	int32_t buttonWidth = this->squareButton ? buttonHeight : $nc($($nc(this->arrowButton)->getPreferredSize()))->width;
	size->height += $nc(insets)->top + insets->bottom;
	size->width += insets->left + insets->right + buttonWidth;
	$nc(this->cachedMinimumSize)->setSize(size->width, size->height);
	this->isMinimumSizeDirty = false;
	return $new($Dimension, size);
}

$Dimension* BasicComboBoxUI::getMaximumSize($JComponent* c) {
	return $new($Dimension, $Short::MAX_VALUE, $Short::MAX_VALUE);
}

int32_t BasicComboBoxUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$ComboBoxUI::getBaseline(c, width, height);
	int32_t baseline = -1;
	getDisplaySize();
	if (this->sameBaseline) {
		$var($Insets, insets, $nc(c)->getInsets());
		height = $Math::max(height - $nc(insets)->top - insets->bottom, 0);
		if (!$nc(this->comboBox)->isEditable()) {
			$var($ListCellRenderer, renderer, $nc(this->comboBox)->getRenderer());
			if (renderer == nullptr) {
				$assign(renderer, $new($DefaultListCellRenderer));
			}
			$var($Object, value, nullptr);
			$var($Object, prototypeValue, $nc(this->comboBox)->getPrototypeDisplayValue());
			if (prototypeValue != nullptr) {
				$assign(value, prototypeValue);
			} else if ($nc($($nc(this->comboBox)->getModel()))->getSize() > 0) {
				$assign(value, $nc($($nc(this->comboBox)->getModel()))->getElementAt(0));
			}
			$var($Component, component, $nc(renderer)->getListCellRendererComponent(this->listBox, value, -1, false, false));
			if ($instanceOf($JLabel, component)) {
				$var($JLabel, label, $cast($JLabel, component));
				$var($String, text, $nc(label)->getText());
				if ((text == nullptr) || $nc(text)->isEmpty()) {
					label->setText(" "_s);
				}
			}
			if ($instanceOf($JComponent, component)) {
				$nc(component)->setFont($($nc(this->comboBox)->getFont()));
			}
			baseline = $nc(component)->getBaseline(width, height);
		} else {
			baseline = $nc(this->editor)->getBaseline(width, height);
		}
		if (baseline > 0) {
			baseline += $nc(insets)->top;
		}
	}
	return baseline;
}

$Component$BaselineResizeBehavior* BasicComboBoxUI::getBaselineResizeBehavior($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$ComboBoxUI::getBaselineResizeBehavior(c);
	getDisplaySize();
	if ($nc(this->comboBox)->isEditable()) {
		return $nc(this->editor)->getBaselineResizeBehavior();
	} else if (this->sameBaseline) {
		$var($ListCellRenderer, renderer, $nc(this->comboBox)->getRenderer());
		if (renderer == nullptr) {
			$assign(renderer, $new($DefaultListCellRenderer));
		}
		$var($Object, value, nullptr);
		$var($Object, prototypeValue, $nc(this->comboBox)->getPrototypeDisplayValue());
		if (prototypeValue != nullptr) {
			$assign(value, prototypeValue);
		} else if ($nc($($nc(this->comboBox)->getModel()))->getSize() > 0) {
			$assign(value, $nc($($nc(this->comboBox)->getModel()))->getElementAt(0));
		}
		if (value != nullptr) {
			$var($Component, component, $nc(renderer)->getListCellRendererComponent(this->listBox, value, -1, false, false));
			return $nc(component)->getBaselineResizeBehavior();
		}
	}
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::OTHER;
}

int32_t BasicComboBoxUI::getAccessibleChildrenCount($JComponent* c) {
	if ($nc(this->comboBox)->isEditable()) {
		return 2;
	} else {
		return 1;
	}
}

$Accessible* BasicComboBoxUI::getAccessibleChild($JComponent* c, int32_t i) {
	$useLocalCurrentObjectStackCache();
	switch (i) {
	case 0:
		{
			if ($instanceOf($Accessible, this->popup)) {
				$var($AccessibleContext, ac, $nc(($cast($Accessible, this->popup)))->getAccessibleContext());
				$nc(ac)->setAccessibleParent(this->comboBox);
				return $cast($Accessible, this->popup);
			}
			break;
		}
	case 1:
		{
			if ($nc(this->comboBox)->isEditable() && ($instanceOf($Accessible, this->editor))) {
				$var($AccessibleContext, ac, $nc(($cast($Accessible, this->editor)))->getAccessibleContext());
				$nc(ac)->setAccessibleParent(this->comboBox);
				return $cast($Accessible, this->editor);
			}
			break;
		}
	}
	return nullptr;
}

bool BasicComboBoxUI::isNavigationKey(int32_t keyCode) {
	return keyCode == $KeyEvent::VK_UP || keyCode == $KeyEvent::VK_DOWN || keyCode == $KeyEvent::VK_KP_UP || keyCode == $KeyEvent::VK_KP_DOWN;
}

bool BasicComboBoxUI::isNavigationKey(int32_t keyCode, int32_t modifiers) {
	$useLocalCurrentObjectStackCache();
	$var($InputMap, inputMap, $nc(this->comboBox)->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$var($KeyStroke, key, $KeyStroke::getKeyStroke(keyCode, modifiers));
	if (inputMap != nullptr && inputMap->get(key) != nullptr) {
		return true;
	}
	return false;
}

void BasicComboBoxUI::selectNextPossibleValue() {
	int32_t si = 0;
	if ($nc(this->comboBox)->isPopupVisible()) {
		si = $nc(this->listBox)->getSelectedIndex();
	} else {
		si = $nc(this->comboBox)->getSelectedIndex();
	}
	if (si < $nc($($nc(this->comboBox)->getModel()))->getSize() - 1) {
		$nc(this->listBox)->setSelectedIndex(si + 1);
		$nc(this->listBox)->ensureIndexIsVisible(si + 1);
		if (!this->isTableCellEditor$) {
			bool var$0 = $UIManager::getBoolean("ComboBox.noActionOnKeyNavigation"_s);
			if (!(var$0 && $nc(this->comboBox)->isPopupVisible())) {
				$nc(this->comboBox)->setSelectedIndex(si + 1);
			}
		}
		$nc(this->comboBox)->repaint();
	}
}

void BasicComboBoxUI::selectPreviousPossibleValue() {
	int32_t si = 0;
	if ($nc(this->comboBox)->isPopupVisible()) {
		si = $nc(this->listBox)->getSelectedIndex();
	} else {
		si = $nc(this->comboBox)->getSelectedIndex();
	}
	if (si > 0) {
		$nc(this->listBox)->setSelectedIndex(si - 1);
		$nc(this->listBox)->ensureIndexIsVisible(si - 1);
		if (!this->isTableCellEditor$) {
			bool var$0 = $UIManager::getBoolean("ComboBox.noActionOnKeyNavigation"_s);
			if (!(var$0 && $nc(this->comboBox)->isPopupVisible())) {
				$nc(this->comboBox)->setSelectedIndex(si - 1);
			}
		}
		$nc(this->comboBox)->repaint();
	}
}

void BasicComboBoxUI::toggleOpenClose() {
	setPopupVisible(this->comboBox, !isPopupVisible(this->comboBox));
}

$Rectangle* BasicComboBoxUI::rectangleForCurrentValue() {
	int32_t width = $nc(this->comboBox)->getWidth();
	int32_t height = $nc(this->comboBox)->getHeight();
	$var($Insets, insets, getInsets());
	int32_t buttonSize = height - ($nc(insets)->top + insets->bottom);
	if (this->arrowButton != nullptr) {
		buttonSize = $nc(this->arrowButton)->getWidth();
	}
	if ($BasicGraphicsUtils::isLeftToRight(this->comboBox)) {
		return $new($Rectangle, insets->left, insets->top, width - (insets->left + insets->right + buttonSize), height - (insets->top + insets->bottom));
	} else {
		return $new($Rectangle, insets->left + buttonSize, insets->top, width - (insets->left + insets->right + buttonSize), height - (insets->top + insets->bottom));
	}
}

$Insets* BasicComboBoxUI::getInsets() {
	return $nc(this->comboBox)->getInsets();
}

void BasicComboBoxUI::paintCurrentValue($Graphics* g, $Rectangle* bounds, bool hasFocus) {
	$useLocalCurrentObjectStackCache();
	$var($ListCellRenderer, renderer, $nc(this->comboBox)->getRenderer());
	$var($Component, c, nullptr);
	if (hasFocus && !isPopupVisible(this->comboBox)) {
		$assign(c, $nc(renderer)->getListCellRendererComponent(this->listBox, $($nc(this->comboBox)->getSelectedItem()), -1, true, false));
	} else {
		$assign(c, $nc(renderer)->getListCellRendererComponent(this->listBox, $($nc(this->comboBox)->getSelectedItem()), -1, false, false));
		$nc(c)->setBackground($($UIManager::getColor("ComboBox.background"_s)));
	}
	$nc(c)->setFont($($nc(this->comboBox)->getFont()));
	if (hasFocus && !isPopupVisible(this->comboBox)) {
		c->setForeground($($nc(this->listBox)->getSelectionForeground()));
		c->setBackground($($nc(this->listBox)->getSelectionBackground()));
	} else if ($nc(this->comboBox)->isEnabled()) {
		c->setForeground($($nc(this->comboBox)->getForeground()));
		c->setBackground($($nc(this->comboBox)->getBackground()));
	} else {
		c->setForeground($($DefaultLookup::getColor(this->comboBox, this, "ComboBox.disabledForeground"_s, nullptr)));
		c->setBackground($($DefaultLookup::getColor(this->comboBox, this, "ComboBox.disabledBackground"_s, nullptr)));
	}
	bool shouldValidate = false;
	if ($instanceOf($JPanel, c)) {
		shouldValidate = true;
	}
	int32_t x = $nc(bounds)->x;
	int32_t y = bounds->y;
	int32_t w = bounds->width;
	int32_t h = bounds->height;
	if (this->padding != nullptr) {
		x = bounds->x + $nc(this->padding)->left;
		y = bounds->y + $nc(this->padding)->top;
		w = bounds->width - ($nc(this->padding)->left + $nc(this->padding)->right);
		h = bounds->height - ($nc(this->padding)->top + $nc(this->padding)->bottom);
	}
	$nc(this->currentValuePane)->paintComponent(g, c, this->comboBox, x, y, w, h, shouldValidate);
}

void BasicComboBoxUI::paintCurrentValueBackground($Graphics* g, $Rectangle* bounds, bool hasFocus) {
	$useLocalCurrentObjectStackCache();
	$var($Color, t, $nc(g)->getColor());
	if ($nc(this->comboBox)->isEnabled()) {
		g->setColor($($DefaultLookup::getColor(this->comboBox, this, "ComboBox.background"_s, nullptr)));
	} else {
		g->setColor($($DefaultLookup::getColor(this->comboBox, this, "ComboBox.disabledBackground"_s, nullptr)));
	}
	g->fillRect($nc(bounds)->x, bounds->y, bounds->width, bounds->height);
	g->setColor(t);
}

void BasicComboBoxUI::repaintCurrentValue() {
	$var($Rectangle, r, rectangleForCurrentValue());
	$nc(this->comboBox)->repaint($nc(r)->x, r->y, r->width, r->height);
}

$Dimension* BasicComboBoxUI::getDefaultSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, getSizeForComponent($($nc($(getDefaultListCellRenderer()))->getListCellRendererComponent(this->listBox, " "_s, -1, false, false))));
	return $new($Dimension, $nc(d)->width, d->height);
}

$Dimension* BasicComboBoxUI::getDisplaySize() {
	$useLocalCurrentObjectStackCache();
	if (!this->isDisplaySizeDirty) {
		return $new($Dimension, this->cachedDisplaySize);
	}
	$var($Dimension, result, $new($Dimension));
	$var($ListCellRenderer, renderer, $nc(this->comboBox)->getRenderer());
	if (renderer == nullptr) {
		$assign(renderer, $new($DefaultListCellRenderer));
	}
	this->sameBaseline = true;
	$var($Object, prototypeValue, $nc(this->comboBox)->getPrototypeDisplayValue());
	if (prototypeValue != nullptr) {
		$assign(result, getSizeForComponent($($nc(renderer)->getListCellRendererComponent(this->listBox, prototypeValue, -1, false, false))));
	} else {
		$var($ComboBoxModel, model, $nc(this->comboBox)->getModel());
		int32_t modelSize = $nc(model)->getSize();
		int32_t baseline = -1;
		$var($Dimension, d, nullptr);
		$var($Component, cpn, nullptr);
		if (modelSize > 0) {
			for (int32_t i = 0; i < modelSize; ++i) {
				$var($Object, value, model->getElementAt(i));
				$var($Component, c, $nc(renderer)->getListCellRendererComponent(this->listBox, value, -1, false, false));
				$assign(d, getSizeForComponent(c));
				if (this->sameBaseline && value != nullptr && (!($instanceOf($String, value)) || !""_s->equals(value))) {
					int32_t newBaseline = $nc(c)->getBaseline($nc(d)->width, d->height);
					if (newBaseline == -1) {
						this->sameBaseline = false;
					} else if (baseline == -1) {
						baseline = newBaseline;
					} else if (baseline != newBaseline) {
						this->sameBaseline = false;
					}
				}
				result->width = $Math::max(result->width, $nc(d)->width);
				result->height = $Math::max(result->height, $nc(d)->height);
			}
		} else {
			$assign(result, getDefaultSize());
			if ($nc(this->comboBox)->isEditable()) {
				$nc(result)->width = 100;
			}
		}
	}
	if ($nc(this->comboBox)->isEditable()) {
		$var($Dimension, d, $nc(this->editor)->getPreferredSize());
		result->width = $Math::max(result->width, $nc(d)->width);
		result->height = $Math::max(result->height, $nc(d)->height);
	}
	if (this->padding != nullptr) {
		result->width += $nc(this->padding)->left + $nc(this->padding)->right;
		result->height += $nc(this->padding)->top + $nc(this->padding)->bottom;
	}
	$nc(this->cachedDisplaySize)->setSize(result->width, result->height);
	this->isDisplaySizeDirty = false;
	return result;
}

$Dimension* BasicComboBoxUI::getSizeForComponent($Component* comp) {
	$useLocalCurrentObjectStackCache();
	$nc(this->currentValuePane)->add(comp);
	$nc(comp)->setFont($($nc(this->comboBox)->getFont()));
	$var($Dimension, d, comp->getPreferredSize());
	$nc(this->currentValuePane)->remove(comp);
	return d;
}

void BasicComboBoxUI::installKeyboardActions() {
	$var($InputMap, km, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$SwingUtilities::replaceUIInputMap(this->comboBox, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, km);
	$LazyActionMap::installLazyActionMap(this->comboBox, BasicComboBoxUI::class$, "ComboBox.actionMap"_s);
}

$InputMap* BasicComboBoxUI::getInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT) {
		return $cast($InputMap, $DefaultLookup::get(this->comboBox, this, "ComboBox.ancestorInputMap"_s));
	}
	return nullptr;
}

bool BasicComboBoxUI::isTableCellEditor() {
	return this->isTableCellEditor$;
}

void BasicComboBoxUI::uninstallKeyboardActions() {
	$SwingUtilities::replaceUIInputMap(this->comboBox, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, nullptr);
	$SwingUtilities::replaceUIActionMap(this->comboBox, nullptr);
}

void clinit$BasicComboBoxUI($Class* class$) {
	$assignStatic(BasicComboBoxUI::IS_TABLE_CELL_EDITOR, "JComboBox.isTableCellEditor"_s);
	$assignStatic(BasicComboBoxUI::COMBO_UI_LIST_CELL_RENDERER_KEY, $new($StringBuffer, "DefaultListCellRendererKey"_s));
	$assignStatic(BasicComboBoxUI::HIDE_POPUP_KEY, $new($StringBuffer, "HidePopupKey"_s));
}

BasicComboBoxUI::BasicComboBoxUI() {
}

$Class* BasicComboBoxUI::load$($String* name, bool initialize) {
	$loadClass(BasicComboBoxUI, name, initialize, &_BasicComboBoxUI_ClassInfo_, clinit$BasicComboBoxUI, allocate$BasicComboBoxUI);
	return class$;
}

$Class* BasicComboBoxUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax