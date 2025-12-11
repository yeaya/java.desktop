#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>

#include <java/awt/Canvas.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Math.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SplitPaneUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI$1.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI$Actions.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI$BasicHorizontalLayoutManager.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI$KeyboardDownRightHandler.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI$KeyboardEndHandler.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI$KeyboardHomeHandler.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI$KeyboardResizeToggleHandler.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI$KeyboardUpLeftHandler.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef BACKWARD_TRAVERSAL_KEYS
#undef DIVIDER
#undef FOCUS_OUT_BACKWARD
#undef FOCUS_OUT_FORWARD
#undef FORWARD_TRAVERSAL_KEYS
#undef HORIZONTAL_SPLIT
#undef KEYBOARD_DIVIDER_MOVE_OFFSET
#undef NEGATIVE_INCREMENT
#undef NON_CONTINUOUS_DIVIDER
#undef POSITIVE_INCREMENT
#undef SELECT_MAX
#undef SELECT_MIN
#undef SHIFT_MASK
#undef START_RESIZE
#undef TOGGLE_FOCUS
#undef TRUE
#undef VERTICAL_SPLIT
#undef VK_TAB
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT

using $Canvas = ::java::awt::Canvas;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Rectangle = ::java::awt::Rectangle;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusListener = ::java::awt::event::FocusListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SplitPaneUI = ::javax::swing::plaf::SplitPaneUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneUI$1 = ::javax::swing::plaf::basic::BasicSplitPaneUI$1;
using $BasicSplitPaneUI$Actions = ::javax::swing::plaf::basic::BasicSplitPaneUI$Actions;
using $BasicSplitPaneUI$BasicHorizontalLayoutManager = ::javax::swing::plaf::basic::BasicSplitPaneUI$BasicHorizontalLayoutManager;
using $BasicSplitPaneUI$Handler = ::javax::swing::plaf::basic::BasicSplitPaneUI$Handler;
using $BasicSplitPaneUI$KeyboardDownRightHandler = ::javax::swing::plaf::basic::BasicSplitPaneUI$KeyboardDownRightHandler;
using $BasicSplitPaneUI$KeyboardEndHandler = ::javax::swing::plaf::basic::BasicSplitPaneUI$KeyboardEndHandler;
using $BasicSplitPaneUI$KeyboardHomeHandler = ::javax::swing::plaf::basic::BasicSplitPaneUI$KeyboardHomeHandler;
using $BasicSplitPaneUI$KeyboardResizeToggleHandler = ::javax::swing::plaf::basic::BasicSplitPaneUI$KeyboardResizeToggleHandler;
using $BasicSplitPaneUI$KeyboardUpLeftHandler = ::javax::swing::plaf::basic::BasicSplitPaneUI$KeyboardUpLeftHandler;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$CompoundAttribute _BasicSplitPaneUI_FieldAnnotations_upKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_FieldAnnotations_downKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_FieldAnnotations_leftKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_FieldAnnotations_rightKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_FieldAnnotations_homeKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_FieldAnnotations_endKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_FieldAnnotations_dividerResizeToggleKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_FieldAnnotations_keyboardUpLeftListener[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_FieldAnnotations_keyboardDownRightListener[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_FieldAnnotations_keyboardHomeListener[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_FieldAnnotations_keyboardEndListener[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_FieldAnnotations_keyboardResizeToggleListener[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_MethodAnnotations_createKeyboardDownRightListener5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_MethodAnnotations_createKeyboardEndListener6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_MethodAnnotations_createKeyboardHomeListener7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_MethodAnnotations_createKeyboardResizeToggleListener8[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_MethodAnnotations_createKeyboardUpLeftListener9[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicSplitPaneUI_MethodAnnotations_getDividerBorderSize16[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _BasicSplitPaneUI_FieldInfo_[] = {
	{"NON_CONTINUOUS_DIVIDER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(BasicSplitPaneUI, NON_CONTINUOUS_DIVIDER)},
	{"KEYBOARD_DIVIDER_MOVE_OFFSET", "I", nullptr, $PROTECTED | $STATIC, $staticField(BasicSplitPaneUI, KEYBOARD_DIVIDER_MOVE_OFFSET)},
	{"splitPane", "Ljavax/swing/JSplitPane;", nullptr, $PROTECTED, $field(BasicSplitPaneUI, splitPane)},
	{"layoutManager", "Ljavax/swing/plaf/basic/BasicSplitPaneUI$BasicHorizontalLayoutManager;", nullptr, $PROTECTED, $field(BasicSplitPaneUI, layoutManager)},
	{"divider", "Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $PROTECTED, $field(BasicSplitPaneUI, divider)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $field(BasicSplitPaneUI, propertyChangeListener)},
	{"focusListener", "Ljava/awt/event/FocusListener;", nullptr, $PROTECTED, $field(BasicSplitPaneUI, focusListener)},
	{"handler", "Ljavax/swing/plaf/basic/BasicSplitPaneUI$Handler;", nullptr, $PRIVATE, $field(BasicSplitPaneUI, handler)},
	{"managingFocusForwardTraversalKeys", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/swing/KeyStroke;>;", $PRIVATE, $field(BasicSplitPaneUI, managingFocusForwardTraversalKeys)},
	{"managingFocusBackwardTraversalKeys", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/swing/KeyStroke;>;", $PRIVATE, $field(BasicSplitPaneUI, managingFocusBackwardTraversalKeys)},
	{"dividerSize", "I", nullptr, $PROTECTED, $field(BasicSplitPaneUI, dividerSize)},
	{"nonContinuousLayoutDivider", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(BasicSplitPaneUI, nonContinuousLayoutDivider)},
	{"draggingHW", "Z", nullptr, $PROTECTED, $field(BasicSplitPaneUI, draggingHW)},
	{"beginDragDividerLocation", "I", nullptr, $PROTECTED, $field(BasicSplitPaneUI, beginDragDividerLocation)},
	{"upKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicSplitPaneUI, upKey), _BasicSplitPaneUI_FieldAnnotations_upKey},
	{"downKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicSplitPaneUI, downKey), _BasicSplitPaneUI_FieldAnnotations_downKey},
	{"leftKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicSplitPaneUI, leftKey), _BasicSplitPaneUI_FieldAnnotations_leftKey},
	{"rightKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicSplitPaneUI, rightKey), _BasicSplitPaneUI_FieldAnnotations_rightKey},
	{"homeKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicSplitPaneUI, homeKey), _BasicSplitPaneUI_FieldAnnotations_homeKey},
	{"endKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicSplitPaneUI, endKey), _BasicSplitPaneUI_FieldAnnotations_endKey},
	{"dividerResizeToggleKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicSplitPaneUI, dividerResizeToggleKey), _BasicSplitPaneUI_FieldAnnotations_dividerResizeToggleKey},
	{"keyboardUpLeftListener", "Ljava/awt/event/ActionListener;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicSplitPaneUI, keyboardUpLeftListener), _BasicSplitPaneUI_FieldAnnotations_keyboardUpLeftListener},
	{"keyboardDownRightListener", "Ljava/awt/event/ActionListener;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicSplitPaneUI, keyboardDownRightListener), _BasicSplitPaneUI_FieldAnnotations_keyboardDownRightListener},
	{"keyboardHomeListener", "Ljava/awt/event/ActionListener;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicSplitPaneUI, keyboardHomeListener), _BasicSplitPaneUI_FieldAnnotations_keyboardHomeListener},
	{"keyboardEndListener", "Ljava/awt/event/ActionListener;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicSplitPaneUI, keyboardEndListener), _BasicSplitPaneUI_FieldAnnotations_keyboardEndListener},
	{"keyboardResizeToggleListener", "Ljava/awt/event/ActionListener;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicSplitPaneUI, keyboardResizeToggleListener), _BasicSplitPaneUI_FieldAnnotations_keyboardResizeToggleListener},
	{"orientation", "I", nullptr, $PRIVATE, $field(BasicSplitPaneUI, orientation)},
	{"lastDragLocation", "I", nullptr, $PRIVATE, $field(BasicSplitPaneUI, lastDragLocation)},
	{"continuousLayout", "Z", nullptr, $PRIVATE, $field(BasicSplitPaneUI, continuousLayout)},
	{"dividerKeyboardResize", "Z", nullptr, $PRIVATE, $field(BasicSplitPaneUI, dividerKeyboardResize)},
	{"dividerLocationIsSet", "Z", nullptr, $PRIVATE, $field(BasicSplitPaneUI, dividerLocationIsSet)},
	{"dividerDraggingColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(BasicSplitPaneUI, dividerDraggingColor)},
	{"rememberPaneSizes", "Z", nullptr, $PRIVATE, $field(BasicSplitPaneUI, rememberPaneSizes)},
	{"keepHidden", "Z", nullptr, $PRIVATE, $field(BasicSplitPaneUI, keepHidden)},
	{"painted", "Z", nullptr, 0, $field(BasicSplitPaneUI, painted)},
	{"ignoreDividerLocationChange", "Z", nullptr, 0, $field(BasicSplitPaneUI, ignoreDividerLocationChange)},
	{}
};

$MethodInfo _BasicSplitPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicSplitPaneUI::*)()>(&BasicSplitPaneUI::init$))},
	{"addHeavyweightDivider", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicSplitPaneUI::*)()>(&BasicSplitPaneUI::addHeavyweightDivider))},
	{"createDefaultDivider", "()Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $PUBLIC},
	{"createDefaultNonContinuousLayoutDivider", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"createFocusListener", "()Ljava/awt/event/FocusListener;", nullptr, $PROTECTED},
	{"createKeyboardDownRightListener", "()Ljava/awt/event/ActionListener;", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _BasicSplitPaneUI_MethodAnnotations_createKeyboardDownRightListener5},
	{"createKeyboardEndListener", "()Ljava/awt/event/ActionListener;", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _BasicSplitPaneUI_MethodAnnotations_createKeyboardEndListener6},
	{"createKeyboardHomeListener", "()Ljava/awt/event/ActionListener;", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _BasicSplitPaneUI_MethodAnnotations_createKeyboardHomeListener7},
	{"createKeyboardResizeToggleListener", "()Ljava/awt/event/ActionListener;", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _BasicSplitPaneUI_MethodAnnotations_createKeyboardResizeToggleListener8},
	{"createKeyboardUpLeftListener", "()Ljava/awt/event/ActionListener;", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _BasicSplitPaneUI_MethodAnnotations_createKeyboardUpLeftListener9},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicSplitPaneUI::createUI))},
	{"dragDividerTo", "(I)V", nullptr, $PROTECTED},
	{"finishDraggingTo", "(I)V", nullptr, $PROTECTED},
	{"finishedPaintingChildren", "(Ljavax/swing/JSplitPane;Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"getDivider", "()Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $PUBLIC},
	{"getDividerBorderSize", "()I", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _BasicSplitPaneUI_MethodAnnotations_getDividerBorderSize16},
	{"getDividerLocation", "(Ljavax/swing/JSplitPane;)I", nullptr, $PUBLIC},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicSplitPaneUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicSplitPaneUI$Handler*(BasicSplitPaneUI::*)()>(&BasicSplitPaneUI::getHandler))},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0},
	{"getInsets", "(Ljavax/swing/JComponent;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getKeepHidden", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicSplitPaneUI::*)()>(&BasicSplitPaneUI::getKeepHidden))},
	{"getKeyboardMoveIncrement", "()I", nullptr, 0},
	{"getLastDragLocation", "()I", nullptr, $PUBLIC},
	{"getMaximumDividerLocation", "(Ljavax/swing/JSplitPane;)I", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumDividerLocation", "(Ljavax/swing/JSplitPane;)I", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getNonContinuousLayoutDivider", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getOrientation", "()I", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSplitPane", "()Ljavax/swing/JSplitPane;", nullptr, $PUBLIC},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isContinuousLayout", "()Z", nullptr, $PUBLIC},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicSplitPaneUI::loadActionMap))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"resetLayoutManager", "()V", nullptr, $PROTECTED},
	{"resetToPreferredSizes", "(Ljavax/swing/JSplitPane;)V", nullptr, $PUBLIC},
	{"setContinuousLayout", "(Z)V", nullptr, $PUBLIC},
	{"setDividerLocation", "(Ljavax/swing/JSplitPane;I)V", nullptr, $PUBLIC},
	{"setKeepHidden", "(Z)V", nullptr, 0},
	{"setLastDragLocation", "(I)V", nullptr, $PUBLIC},
	{"setNonContinuousLayoutDivider", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"setNonContinuousLayoutDivider", "(Ljava/awt/Component;Z)V", nullptr, $PROTECTED},
	{"setOrientation", "(I)V", nullptr, $PUBLIC},
	{"startDragging", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSplitPaneUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneUI$Actions", "javax.swing.plaf.basic.BasicSplitPaneUI", "Actions", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicSplitPaneUI$Handler", "javax.swing.plaf.basic.BasicSplitPaneUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicSplitPaneUI$BasicVerticalLayoutManager", "javax.swing.plaf.basic.BasicSplitPaneUI", "BasicVerticalLayoutManager", $PUBLIC},
	{"javax.swing.plaf.basic.BasicSplitPaneUI$BasicHorizontalLayoutManager", "javax.swing.plaf.basic.BasicSplitPaneUI", "BasicHorizontalLayoutManager", $PUBLIC},
	{"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardResizeToggleHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "KeyboardResizeToggleHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardEndHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "KeyboardEndHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardHomeHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "KeyboardHomeHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardDownRightHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "KeyboardDownRightHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardUpLeftHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "KeyboardUpLeftHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicSplitPaneUI$FocusHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "FocusHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicSplitPaneUI$PropertyHandler", "javax.swing.plaf.basic.BasicSplitPaneUI", "PropertyHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicSplitPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicSplitPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneUI",
	"javax.swing.plaf.SplitPaneUI",
	nullptr,
	_BasicSplitPaneUI_FieldInfo_,
	_BasicSplitPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSplitPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneUI$Actions,javax.swing.plaf.basic.BasicSplitPaneUI$Handler,javax.swing.plaf.basic.BasicSplitPaneUI$BasicVerticalLayoutManager,javax.swing.plaf.basic.BasicSplitPaneUI$BasicHorizontalLayoutManager,javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardResizeToggleHandler,javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardEndHandler,javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardHomeHandler,javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardDownRightHandler,javax.swing.plaf.basic.BasicSplitPaneUI$KeyboardUpLeftHandler,javax.swing.plaf.basic.BasicSplitPaneUI$FocusHandler,javax.swing.plaf.basic.BasicSplitPaneUI$PropertyHandler,javax.swing.plaf.basic.BasicSplitPaneUI$1"
};

$Object* allocate$BasicSplitPaneUI($Class* clazz) {
	return $of($alloc(BasicSplitPaneUI));
}

$String* BasicSplitPaneUI::NON_CONTINUOUS_DIVIDER = nullptr;
int32_t BasicSplitPaneUI::KEYBOARD_DIVIDER_MOVE_OFFSET = 0;

void BasicSplitPaneUI::init$() {
	$SplitPaneUI::init$();
	this->keepHidden = false;
}

$ComponentUI* BasicSplitPaneUI::createUI($JComponent* x) {
	$init(BasicSplitPaneUI);
	return $new(BasicSplitPaneUI);
}

void BasicSplitPaneUI::loadActionMap($LazyActionMap* map) {
	$init(BasicSplitPaneUI);
	$useLocalCurrentObjectStackCache();
	$init($BasicSplitPaneUI$Actions);
	$nc(map)->put($$new($BasicSplitPaneUI$Actions, $BasicSplitPaneUI$Actions::NEGATIVE_INCREMENT));
	map->put($$new($BasicSplitPaneUI$Actions, $BasicSplitPaneUI$Actions::POSITIVE_INCREMENT));
	map->put($$new($BasicSplitPaneUI$Actions, $BasicSplitPaneUI$Actions::SELECT_MIN));
	map->put($$new($BasicSplitPaneUI$Actions, $BasicSplitPaneUI$Actions::SELECT_MAX));
	map->put($$new($BasicSplitPaneUI$Actions, $BasicSplitPaneUI$Actions::START_RESIZE));
	map->put($$new($BasicSplitPaneUI$Actions, $BasicSplitPaneUI$Actions::TOGGLE_FOCUS));
	map->put($$new($BasicSplitPaneUI$Actions, $BasicSplitPaneUI$Actions::FOCUS_OUT_FORWARD));
	map->put($$new($BasicSplitPaneUI$Actions, $BasicSplitPaneUI$Actions::FOCUS_OUT_BACKWARD));
}

void BasicSplitPaneUI::installUI($JComponent* c) {
	$set(this, splitPane, $cast($JSplitPane, c));
	this->dividerLocationIsSet = false;
	this->dividerKeyboardResize = false;
	this->keepHidden = false;
	installDefaults();
	installListeners();
	installKeyboardActions();
	setLastDragLocation(-1);
}

void BasicSplitPaneUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	$LookAndFeel::installBorder(this->splitPane, "SplitPane.border"_s);
	$LookAndFeel::installColors(this->splitPane, "SplitPane.background"_s, "SplitPane.foreground"_s);
	$init($Boolean);
	$LookAndFeel::installProperty(this->splitPane, "opaque"_s, $Boolean::TRUE);
	if (this->divider == nullptr) {
		$set(this, divider, createDefaultDivider());
	}
	$nc(this->divider)->setBasicSplitPaneUI(this);
	$var($Border, b, $nc(this->divider)->getBorder());
	if (b == nullptr || !($instanceOf($UIResource, b))) {
		$nc(this->divider)->setBorder($($UIManager::getBorder("SplitPaneDivider.border"_s)));
	}
	$set(this, dividerDraggingColor, $UIManager::getColor("SplitPaneDivider.draggingColor"_s));
	setOrientation($nc(this->splitPane)->getOrientation());
	$var($Integer, temp, $cast($Integer, $UIManager::get("SplitPane.dividerSize"_s)));
	$LookAndFeel::installProperty(this->splitPane, "dividerSize"_s, $($Integer::valueOf(temp == nullptr ? 10 : $nc(temp)->intValue())));
	$nc(this->divider)->setDividerSize($nc(this->splitPane)->getDividerSize());
	this->dividerSize = $nc(this->divider)->getDividerSize();
	$nc(this->splitPane)->add(static_cast<$Component*>(this->divider), $of($JSplitPane::DIVIDER));
	setContinuousLayout($nc(this->splitPane)->isContinuousLayout());
	resetLayoutManager();
	if (this->nonContinuousLayoutDivider == nullptr) {
		setNonContinuousLayoutDivider($(createDefaultNonContinuousLayoutDivider()), true);
	} else {
		setNonContinuousLayoutDivider(this->nonContinuousLayoutDivider, true);
	}
	if (this->managingFocusForwardTraversalKeys == nullptr) {
		$set(this, managingFocusForwardTraversalKeys, $new($HashSet));
		$nc(this->managingFocusForwardTraversalKeys)->add($($KeyStroke::getKeyStroke($KeyEvent::VK_TAB, 0)));
	}
	$nc(this->splitPane)->setFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, this->managingFocusForwardTraversalKeys);
	if (this->managingFocusBackwardTraversalKeys == nullptr) {
		$set(this, managingFocusBackwardTraversalKeys, $new($HashSet));
		$nc(this->managingFocusBackwardTraversalKeys)->add($($KeyStroke::getKeyStroke($KeyEvent::VK_TAB, $InputEvent::SHIFT_MASK)));
	}
	$nc(this->splitPane)->setFocusTraversalKeys($KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS, this->managingFocusBackwardTraversalKeys);
}

void BasicSplitPaneUI::installListeners() {
	if (($set(this, propertyChangeListener, createPropertyChangeListener())) != nullptr) {
		$nc(this->splitPane)->addPropertyChangeListener(this->propertyChangeListener);
	}
	if (($set(this, focusListener, createFocusListener())) != nullptr) {
		$nc(this->splitPane)->addFocusListener(this->focusListener);
	}
}

void BasicSplitPaneUI::installKeyboardActions() {
	$var($InputMap, km, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$SwingUtilities::replaceUIInputMap(this->splitPane, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, km);
	$LazyActionMap::installLazyActionMap(this->splitPane, BasicSplitPaneUI::class$, "SplitPane.actionMap"_s);
}

$InputMap* BasicSplitPaneUI::getInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT) {
		return $cast($InputMap, $DefaultLookup::get(this->splitPane, this, "SplitPane.ancestorInputMap"_s));
	}
	return nullptr;
}

void BasicSplitPaneUI::uninstallUI($JComponent* c) {
	uninstallKeyboardActions();
	uninstallListeners();
	uninstallDefaults();
	this->dividerLocationIsSet = false;
	this->dividerKeyboardResize = false;
	$set(this, splitPane, nullptr);
}

void BasicSplitPaneUI::uninstallDefaults() {
	if ($equals($nc(this->splitPane)->getLayout(), this->layoutManager)) {
		$nc(this->splitPane)->setLayout(nullptr);
	}
	if (this->nonContinuousLayoutDivider != nullptr) {
		$nc(this->splitPane)->remove(this->nonContinuousLayoutDivider);
	}
	$LookAndFeel::uninstallBorder(this->splitPane);
	$var($Border, b, $nc(this->divider)->getBorder());
	if ($instanceOf($UIResource, b)) {
		$nc(this->divider)->setBorder(nullptr);
	}
	$nc(this->splitPane)->remove(static_cast<$Component*>(this->divider));
	$nc(this->divider)->setBasicSplitPaneUI(nullptr);
	$set(this, layoutManager, nullptr);
	$set(this, divider, nullptr);
	$set(this, nonContinuousLayoutDivider, nullptr);
	setNonContinuousLayoutDivider(nullptr);
	$nc(this->splitPane)->setFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, nullptr);
	$nc(this->splitPane)->setFocusTraversalKeys($KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS, nullptr);
}

void BasicSplitPaneUI::uninstallListeners() {
	if (this->propertyChangeListener != nullptr) {
		$nc(this->splitPane)->removePropertyChangeListener(this->propertyChangeListener);
		$set(this, propertyChangeListener, nullptr);
	}
	if (this->focusListener != nullptr) {
		$nc(this->splitPane)->removeFocusListener(this->focusListener);
		$set(this, focusListener, nullptr);
	}
	$set(this, keyboardUpLeftListener, nullptr);
	$set(this, keyboardDownRightListener, nullptr);
	$set(this, keyboardHomeListener, nullptr);
	$set(this, keyboardEndListener, nullptr);
	$set(this, keyboardResizeToggleListener, nullptr);
	$set(this, handler, nullptr);
}

void BasicSplitPaneUI::uninstallKeyboardActions() {
	$SwingUtilities::replaceUIActionMap(this->splitPane, nullptr);
	$SwingUtilities::replaceUIInputMap(this->splitPane, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, nullptr);
}

$PropertyChangeListener* BasicSplitPaneUI::createPropertyChangeListener() {
	return getHandler();
}

$BasicSplitPaneUI$Handler* BasicSplitPaneUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicSplitPaneUI$Handler, this));
	}
	return this->handler;
}

$FocusListener* BasicSplitPaneUI::createFocusListener() {
	return getHandler();
}

$ActionListener* BasicSplitPaneUI::createKeyboardUpLeftListener() {
	return $new($BasicSplitPaneUI$KeyboardUpLeftHandler, this);
}

$ActionListener* BasicSplitPaneUI::createKeyboardDownRightListener() {
	return $new($BasicSplitPaneUI$KeyboardDownRightHandler, this);
}

$ActionListener* BasicSplitPaneUI::createKeyboardHomeListener() {
	return $new($BasicSplitPaneUI$KeyboardHomeHandler, this);
}

$ActionListener* BasicSplitPaneUI::createKeyboardEndListener() {
	return $new($BasicSplitPaneUI$KeyboardEndHandler, this);
}

$ActionListener* BasicSplitPaneUI::createKeyboardResizeToggleListener() {
	return $new($BasicSplitPaneUI$KeyboardResizeToggleHandler, this);
}

int32_t BasicSplitPaneUI::getOrientation() {
	return this->orientation;
}

void BasicSplitPaneUI::setOrientation(int32_t orientation) {
	this->orientation = orientation;
}

bool BasicSplitPaneUI::isContinuousLayout() {
	return this->continuousLayout;
}

void BasicSplitPaneUI::setContinuousLayout(bool b) {
	this->continuousLayout = b;
}

int32_t BasicSplitPaneUI::getLastDragLocation() {
	return this->lastDragLocation;
}

void BasicSplitPaneUI::setLastDragLocation(int32_t l) {
	this->lastDragLocation = l;
}

int32_t BasicSplitPaneUI::getKeyboardMoveIncrement() {
	return 3;
}

$BasicSplitPaneDivider* BasicSplitPaneUI::getDivider() {
	return this->divider;
}

$Component* BasicSplitPaneUI::createDefaultNonContinuousLayoutDivider() {
	return $new($BasicSplitPaneUI$1, this);
}

void BasicSplitPaneUI::setNonContinuousLayoutDivider($Component* newDivider) {
	setNonContinuousLayoutDivider(newDivider, true);
}

void BasicSplitPaneUI::setNonContinuousLayoutDivider($Component* newDivider, bool rememberSizes) {
	this->rememberPaneSizes = rememberSizes;
	if (this->nonContinuousLayoutDivider != nullptr && this->splitPane != nullptr) {
		$nc(this->splitPane)->remove(this->nonContinuousLayoutDivider);
	}
	$set(this, nonContinuousLayoutDivider, newDivider);
}

void BasicSplitPaneUI::addHeavyweightDivider() {
	$useLocalCurrentObjectStackCache();
	if (this->nonContinuousLayoutDivider != nullptr && this->splitPane != nullptr) {
		$var($Component, leftC, $nc(this->splitPane)->getLeftComponent());
		$var($Component, rightC, $nc(this->splitPane)->getRightComponent());
		int32_t lastLocation = $nc(this->splitPane)->getDividerLocation();
		if (leftC != nullptr) {
			$nc(this->splitPane)->setLeftComponent(nullptr);
		}
		if (rightC != nullptr) {
			$nc(this->splitPane)->setRightComponent(nullptr);
		}
		$nc(this->splitPane)->remove(static_cast<$Component*>(this->divider));
		$nc(this->splitPane)->add(this->nonContinuousLayoutDivider, BasicSplitPaneUI::NON_CONTINUOUS_DIVIDER, $nc(this->splitPane)->getComponentCount());
		$nc(this->splitPane)->setLeftComponent(leftC);
		$nc(this->splitPane)->setRightComponent(rightC);
		$nc(this->splitPane)->add(static_cast<$Component*>(this->divider), $of($JSplitPane::DIVIDER));
		if (this->rememberPaneSizes) {
			$nc(this->splitPane)->setDividerLocation(lastLocation);
		}
	}
}

$Component* BasicSplitPaneUI::getNonContinuousLayoutDivider() {
	return this->nonContinuousLayoutDivider;
}

$JSplitPane* BasicSplitPaneUI::getSplitPane() {
	return this->splitPane;
}

$BasicSplitPaneDivider* BasicSplitPaneUI::createDefaultDivider() {
	return $new($BasicSplitPaneDivider, this);
}

void BasicSplitPaneUI::resetToPreferredSizes($JSplitPane* jc) {
	if (this->splitPane != nullptr) {
		$nc(this->layoutManager)->resetToPreferredSizes();
		$nc(this->splitPane)->revalidate();
		$nc(this->splitPane)->repaint();
	}
}

void BasicSplitPaneUI::setDividerLocation($JSplitPane* jc, int32_t location) {
	if (!this->ignoreDividerLocationChange) {
		this->dividerLocationIsSet = true;
		$nc(this->splitPane)->revalidate();
		$nc(this->splitPane)->repaint();
		if (this->keepHidden) {
			$var($Insets, insets, $nc(this->splitPane)->getInsets());
			int32_t orientation = $nc(this->splitPane)->getOrientation();
			bool var$1 = orientation == $JSplitPane::VERTICAL_SPLIT && location != $nc(insets)->top;
			if (var$1) {
				int32_t var$2 = location;
				int32_t var$4 = $nc(this->splitPane)->getHeight();
				int32_t var$3 = var$4 - $nc(this->divider)->getHeight() - insets->top;
				var$1 = var$2 != var$3;
			}
			bool var$0 = (var$1);
			if (!var$0) {
				bool var$5 = orientation == $JSplitPane::HORIZONTAL_SPLIT && location != $nc(insets)->left;
				if (var$5) {
					int32_t var$6 = location;
					int32_t var$8 = $nc(this->splitPane)->getWidth();
					int32_t var$7 = var$8 - $nc(this->divider)->getWidth() - insets->left;
					var$5 = var$6 != var$7;
				}
				var$0 = (var$5);
			}
			if (var$0) {
				setKeepHidden(false);
			}
		}
	} else {
		this->ignoreDividerLocationChange = false;
	}
}

int32_t BasicSplitPaneUI::getDividerLocation($JSplitPane* jc) {
	$useLocalCurrentObjectStackCache();
	if (this->orientation == $JSplitPane::HORIZONTAL_SPLIT) {
		return $nc($($nc(this->divider)->getLocation()))->x;
	}
	return $nc($($nc(this->divider)->getLocation()))->y;
}

int32_t BasicSplitPaneUI::getMinimumDividerLocation($JSplitPane* jc) {
	$useLocalCurrentObjectStackCache();
	int32_t minLoc = 0;
	$var($Component, leftC, $nc(this->splitPane)->getLeftComponent());
	if ((leftC != nullptr) && (leftC->isVisible())) {
		$var($Insets, insets, $nc(this->splitPane)->getInsets());
		$var($Dimension, minSize, leftC->getMinimumSize());
		if (this->orientation == $JSplitPane::HORIZONTAL_SPLIT) {
			minLoc = $nc(minSize)->width;
		} else {
			minLoc = $nc(minSize)->height;
		}
		if (insets != nullptr) {
			if (this->orientation == $JSplitPane::HORIZONTAL_SPLIT) {
				minLoc += insets->left;
			} else {
				minLoc += insets->top;
			}
		}
	}
	return minLoc;
}

int32_t BasicSplitPaneUI::getMaximumDividerLocation($JSplitPane* jc) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, splitPaneSize, $nc(this->splitPane)->getSize());
	int32_t maxLoc = 0;
	$var($Component, rightC, $nc(this->splitPane)->getRightComponent());
	if (rightC != nullptr) {
		$var($Insets, insets, $nc(this->splitPane)->getInsets());
		$var($Dimension, minSize, $new($Dimension, 0, 0));
		if (rightC->isVisible()) {
			$assign(minSize, rightC->getMinimumSize());
		}
		if (this->orientation == $JSplitPane::HORIZONTAL_SPLIT) {
			maxLoc = $nc(splitPaneSize)->width - minSize->width;
		} else {
			maxLoc = $nc(splitPaneSize)->height - minSize->height;
		}
		maxLoc -= this->dividerSize;
		if (insets != nullptr) {
			if (this->orientation == $JSplitPane::HORIZONTAL_SPLIT) {
				maxLoc -= insets->right;
			} else {
				maxLoc -= insets->top;
			}
		}
	}
	return $Math::max(getMinimumDividerLocation(this->splitPane), maxLoc);
}

void BasicSplitPaneUI::finishedPaintingChildren($JSplitPane* sp, $Graphics* g) {
	bool var$0 = sp == this->splitPane && getLastDragLocation() != -1;
	if (var$0 && !isContinuousLayout() && !this->draggingHW) {
		$var($Dimension, size, $nc(this->splitPane)->getSize());
		$nc(g)->setColor(this->dividerDraggingColor);
		if (this->orientation == $JSplitPane::HORIZONTAL_SPLIT) {
			g->fillRect(getLastDragLocation(), 0, this->dividerSize - 1, $nc(size)->height - 1);
		} else {
			g->fillRect(0, this->lastDragLocation, $nc(size)->width - 1, this->dividerSize - 1);
		}
	}
}

void BasicSplitPaneUI::paint($Graphics* g, $JComponent* jc) {
	if (!this->painted && $nc(this->splitPane)->getDividerLocation() < 0) {
		this->ignoreDividerLocationChange = true;
		$nc(this->splitPane)->setDividerLocation(getDividerLocation(this->splitPane));
	}
	this->painted = true;
}

$Dimension* BasicSplitPaneUI::getPreferredSize($JComponent* jc) {
	if (this->splitPane != nullptr) {
		return $nc(this->layoutManager)->preferredLayoutSize(this->splitPane);
	}
	return $new($Dimension, 0, 0);
}

$Dimension* BasicSplitPaneUI::getMinimumSize($JComponent* jc) {
	if (this->splitPane != nullptr) {
		return $nc(this->layoutManager)->minimumLayoutSize(this->splitPane);
	}
	return $new($Dimension, 0, 0);
}

$Dimension* BasicSplitPaneUI::getMaximumSize($JComponent* jc) {
	if (this->splitPane != nullptr) {
		return $nc(this->layoutManager)->maximumLayoutSize(this->splitPane);
	}
	return $new($Dimension, 0, 0);
}

$Insets* BasicSplitPaneUI::getInsets($JComponent* jc) {
	return nullptr;
}

void BasicSplitPaneUI::resetLayoutManager() {
	if (this->orientation == $JSplitPane::HORIZONTAL_SPLIT) {
		$set(this, layoutManager, $new($BasicSplitPaneUI$BasicHorizontalLayoutManager, this, 0));
	} else {
		$set(this, layoutManager, $new($BasicSplitPaneUI$BasicHorizontalLayoutManager, this, 1));
	}
	$nc(this->splitPane)->setLayout(this->layoutManager);
	$nc(this->layoutManager)->updateComponents();
	$nc(this->splitPane)->revalidate();
	$nc(this->splitPane)->repaint();
}

void BasicSplitPaneUI::setKeepHidden(bool keepHidden) {
	this->keepHidden = keepHidden;
}

bool BasicSplitPaneUI::getKeepHidden() {
	return this->keepHidden;
}

void BasicSplitPaneUI::startDragging() {
	$useLocalCurrentObjectStackCache();
	$var($Component, leftC, $nc(this->splitPane)->getLeftComponent());
	$var($Component, rightC, $nc(this->splitPane)->getRightComponent());
	$var($ComponentPeer, cPeer, nullptr);
	this->beginDragDividerLocation = getDividerLocation(this->splitPane);
	this->draggingHW = false;
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	if (leftC != nullptr && ($assign(cPeer, $nc(acc)->getPeer(leftC))) != nullptr && !($instanceOf($LightweightPeer, cPeer))) {
		this->draggingHW = true;
	} else if (rightC != nullptr && ($assign(cPeer, acc->getPeer(rightC))) != nullptr && !($instanceOf($LightweightPeer, cPeer))) {
		this->draggingHW = true;
	}
	if (this->orientation == $JSplitPane::HORIZONTAL_SPLIT) {
		setLastDragLocation($nc($($nc(this->divider)->getBounds()))->x);
		this->dividerSize = $nc($($nc(this->divider)->getSize()))->width;
		if (!isContinuousLayout() && this->draggingHW) {
			int32_t var$0 = getLastDragLocation();
			int32_t var$1 = this->dividerSize;
			$nc(this->nonContinuousLayoutDivider)->setBounds(var$0, 0, var$1, $nc(this->splitPane)->getHeight());
			addHeavyweightDivider();
		}
	} else {
		setLastDragLocation($nc($($nc(this->divider)->getBounds()))->y);
		this->dividerSize = $nc($($nc(this->divider)->getSize()))->height;
		if (!isContinuousLayout() && this->draggingHW) {
			int32_t var$2 = getLastDragLocation();
			$nc(this->nonContinuousLayoutDivider)->setBounds(0, var$2, $nc(this->splitPane)->getWidth(), this->dividerSize);
			addHeavyweightDivider();
		}
	}
}

void BasicSplitPaneUI::dragDividerTo(int32_t location) {
	if (getLastDragLocation() != location) {
		if (isContinuousLayout()) {
			$nc(this->splitPane)->setDividerLocation(location);
			setLastDragLocation(location);
		} else {
			int32_t lastLoc = getLastDragLocation();
			setLastDragLocation(location);
			if (this->orientation == $JSplitPane::HORIZONTAL_SPLIT) {
				if (this->draggingHW) {
					$nc(this->nonContinuousLayoutDivider)->setLocation(getLastDragLocation(), 0);
				} else {
					int32_t splitHeight = $nc(this->splitPane)->getHeight();
					$nc(this->splitPane)->repaint(lastLoc, 0, this->dividerSize, splitHeight);
					$nc(this->splitPane)->repaint(location, 0, this->dividerSize, splitHeight);
				}
			} else if (this->draggingHW) {
				$nc(this->nonContinuousLayoutDivider)->setLocation(0, getLastDragLocation());
			} else {
				int32_t splitWidth = $nc(this->splitPane)->getWidth();
				$nc(this->splitPane)->repaint(0, lastLoc, splitWidth, this->dividerSize);
				$nc(this->splitPane)->repaint(0, location, splitWidth, this->dividerSize);
			}
		}
	}
}

void BasicSplitPaneUI::finishDraggingTo(int32_t location) {
	$useLocalCurrentObjectStackCache();
	dragDividerTo(location);
	setLastDragLocation(-1);
	if (!isContinuousLayout()) {
		$var($Component, leftC, $nc(this->splitPane)->getLeftComponent());
		$var($Rectangle, leftBounds, $nc(leftC)->getBounds());
		if (this->draggingHW) {
			if (this->orientation == $JSplitPane::HORIZONTAL_SPLIT) {
				$nc(this->nonContinuousLayoutDivider)->setLocation(-this->dividerSize, 0);
			} else {
				$nc(this->nonContinuousLayoutDivider)->setLocation(0, -this->dividerSize);
			}
			$nc(this->splitPane)->remove(this->nonContinuousLayoutDivider);
		}
		$nc(this->splitPane)->setDividerLocation(location);
	}
}

int32_t BasicSplitPaneUI::getDividerBorderSize() {
	return 1;
}

void clinit$BasicSplitPaneUI($Class* class$) {
	$assignStatic(BasicSplitPaneUI::NON_CONTINUOUS_DIVIDER, "nonContinuousDivider"_s);
	BasicSplitPaneUI::KEYBOARD_DIVIDER_MOVE_OFFSET = 3;
}

BasicSplitPaneUI::BasicSplitPaneUI() {
}

$Class* BasicSplitPaneUI::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneUI, name, initialize, &_BasicSplitPaneUI_ClassInfo_, clinit$BasicSplitPaneUI, allocate$BasicSplitPaneUI);
	return class$;
}

$Class* BasicSplitPaneUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax