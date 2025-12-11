#include <com/apple/laf/AquaTreeUI.h>

#include <apple/laf/JRSUIConstants$Direction.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIState$AnimationFrameState.h>
#include <apple/laf/JRSUIState.h>
#include <apple/laf/JRSUIStateFactory.h>
#include <apple/laf/JRSUIUtils$Tree.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaTreeUI$FocusHandler.h>
#include <com/apple/laf/AquaTreeUI$KeyboardExpandCollapseAction.h>
#include <com/apple/laf/AquaTreeUI$LineListener.h>
#include <com/apple/laf/AquaTreeUI$MacPropertyChangeHandler.h>
#include <com/apple/laf/AquaTreeUI$TreeArrowMouseInputHandler.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TreeUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicTreeUI$FocusHandler.h>
#include <javax/swing/plaf/basic/BasicTreeUI$PropertyChangeHandler.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <javax/swing/tree/AbstractLayoutCache.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

#undef ACTIVE
#undef DISABLED
#undef DOWN
#undef HORIZ_LINE_STYLE
#undef HORIZ_STYLE_STRING
#undef LEFT
#undef LEG_LINE_STYLE
#undef LEG_LINE_STYLE_STRING
#undef LINE_STYLE
#undef NONE
#undef NO_LINE_STYLE
#undef NO_STYLE_STRING
#undef PRESSED
#undef RIGHT

using $JRSUIConstants$Direction = ::apple::laf::JRSUIConstants$Direction;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIState = ::apple::laf::JRSUIState;
using $JRSUIState$AnimationFrameState = ::apple::laf::JRSUIState$AnimationFrameState;
using $JRSUIStateFactory = ::apple::laf::JRSUIStateFactory;
using $JRSUIUtils$Tree = ::apple::laf::JRSUIUtils$Tree;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaTreeUI$FocusHandler = ::com::apple::laf::AquaTreeUI$FocusHandler;
using $AquaTreeUI$KeyboardExpandCollapseAction = ::com::apple::laf::AquaTreeUI$KeyboardExpandCollapseAction;
using $AquaTreeUI$LineListener = ::com::apple::laf::AquaTreeUI$LineListener;
using $AquaTreeUI$MacPropertyChangeHandler = ::com::apple::laf::AquaTreeUI$MacPropertyChangeHandler;
using $AquaTreeUI$TreeArrowMouseInputHandler = ::com::apple::laf::AquaTreeUI$TreeArrowMouseInputHandler;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $FocusListener = ::java::awt::event::FocusListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TreeUI = ::javax::swing::plaf::TreeUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $BasicTreeUI$FocusHandler = ::javax::swing::plaf::basic::BasicTreeUI$FocusHandler;
using $BasicTreeUI$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicTreeUI$PropertyChangeHandler;
using $AbstractLayoutCache = ::javax::swing::tree::AbstractLayoutCache;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreePath = ::javax::swing::tree::TreePath;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTreeUI_FieldInfo_[] = {
	{"LINE_STYLE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaTreeUI, LINE_STYLE)},
	{"LEG_LINE_STYLE_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaTreeUI, LEG_LINE_STYLE_STRING)},
	{"HORIZ_STYLE_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaTreeUI, HORIZ_STYLE_STRING)},
	{"NO_STYLE_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaTreeUI, NO_STYLE_STRING)},
	{"LEG_LINE_STYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaTreeUI, LEG_LINE_STYLE)},
	{"HORIZ_LINE_STYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaTreeUI, HORIZ_LINE_STYLE)},
	{"NO_LINE_STYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaTreeUI, NO_LINE_STYLE)},
	{"lineStyle", "I", nullptr, $PRIVATE, $field(AquaTreeUI, lineStyle)},
	{"lineStyleListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $FINAL, $field(AquaTreeUI, lineStyleListener)},
	{"fTrackingPath", "Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED, $field(AquaTreeUI, fTrackingPath)},
	{"fIsPressed", "Z", nullptr, $PROTECTED, $field(AquaTreeUI, fIsPressed)},
	{"fIsInBounds", "Z", nullptr, $PROTECTED, $field(AquaTreeUI, fIsInBounds)},
	{"fAnimationFrame", "I", nullptr, $PROTECTED, $field(AquaTreeUI, fAnimationFrame)},
	{"fMouseHandler", "Lcom/apple/laf/AquaTreeUI$TreeArrowMouseInputHandler;", nullptr, $PROTECTED, $field(AquaTreeUI, fMouseHandler)},
	{"painter", "Lcom/apple/laf/AquaPainter;", "Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState$AnimationFrameState;>;", $PROTECTED | $FINAL, $field(AquaTreeUI, painter)},
	{}
};

$MethodInfo _AquaTreeUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaTreeUI::*)()>(&AquaTreeUI::init$))},
	{"access$000", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$000))},
	{"access$100", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$100))},
	{"access$1000", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$1000))},
	{"access$1100", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/tree/TreeModel;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$TreeModel*(*)(AquaTreeUI*)>(&AquaTreeUI::access$1100))},
	{"access$1200", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/tree/AbstractLayoutCache;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$AbstractLayoutCache*(*)(AquaTreeUI*)>(&AquaTreeUI::access$1200))},
	{"access$1300", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$1300))},
	{"access$1400", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/tree/AbstractLayoutCache;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$AbstractLayoutCache*(*)(AquaTreeUI*)>(&AquaTreeUI::access$1400))},
	{"access$1500", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$1500))},
	{"access$1600", "(Lcom/apple/laf/AquaTreeUI;Ljavax/swing/tree/TreePath;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(AquaTreeUI*,$TreePath*)>(&AquaTreeUI::access$1600))},
	{"access$1700", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$1700))},
	{"access$1800", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$1800))},
	{"access$1900", "(Lcom/apple/laf/AquaTreeUI;)Z", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(AquaTreeUI*)>(&AquaTreeUI::access$1900))},
	{"access$200", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$200))},
	{"access$2000", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$2000))},
	{"access$2100", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$2100))},
	{"access$2200", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$2200))},
	{"access$2300", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$2300))},
	{"access$2400", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$2400))},
	{"access$2500", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$2500))},
	{"access$2600", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$2600))},
	{"access$2700", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$2700))},
	{"access$2800", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$2800))},
	{"access$2900", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$2900))},
	{"access$300", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$300))},
	{"access$3000", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$3000))},
	{"access$3100", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$3100))},
	{"access$3200", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$3200))},
	{"access$400", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$400))},
	{"access$500", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$500))},
	{"access$600", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$600))},
	{"access$700", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$700))},
	{"access$800", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$800))},
	{"access$900", "(Lcom/apple/laf/AquaTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(AquaTreeUI*)>(&AquaTreeUI::access$900))},
	{"collapseAllNodes", "(Ljavax/swing/tree/TreePath;I)V", nullptr, 0},
	{"collapseNode", "(IZ)V", nullptr, 0},
	{"createFocusListener", "()Ljava/awt/event/FocusListener;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaTreeUI::createUI))},
	{"decodeLineStyle", "(Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"expandAllNodes", "(Ljavax/swing/tree/TreePath;I)V", nullptr, 0},
	{"expandNode", "(IZ)V", nullptr, 0},
	{"getClosestPathForLocation", "(Ljavax/swing/JTree;II)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getCollapsedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getDirection", "(ZZ)Lapple/laf/JRSUIConstants$Direction;", nullptr, $PROTECTED},
	{"getPathArrowBounds", "(Ljavax/swing/tree/TreePath;)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"getRowForPath", "(Ljavax/swing/tree/TreePath;)I", nullptr, $PROTECTED},
	{"getState", "(Ljavax/swing/tree/TreePath;)Lapple/laf/JRSUIConstants$State;", nullptr, $PROTECTED},
	{"handleExpandControlClick", "(Ljavax/swing/tree/TreePath;II)V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isToggleSelectionEvent", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintExpandControl", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Insets;Ljava/awt/Rectangle;Ljavax/swing/tree/TreePath;IZZZ)V", nullptr, $PROTECTED},
	{"paintHorizontalPartOfLeg", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Insets;Ljava/awt/Rectangle;Ljavax/swing/tree/TreePath;IZZZ)V", nullptr, $PROTECTED},
	{"paintHorizontalSeparators", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"paintVerticalPartOfLeg", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Insets;Ljavax/swing/tree/TreePath;)V", nullptr, $PROTECTED},
	{"setupPainter", "(Lapple/laf/JRSUIConstants$State;ZZ)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTreeUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTreeUI$KeyboardExpandCollapseAction", "com.apple.laf.AquaTreeUI", "KeyboardExpandCollapseAction", 0},
	{"com.apple.laf.AquaTreeUI$TreeArrowMouseInputHandler", "com.apple.laf.AquaTreeUI", "TreeArrowMouseInputHandler", 0},
	{"com.apple.laf.AquaTreeUI$MacPropertyChangeHandler", "com.apple.laf.AquaTreeUI", "MacPropertyChangeHandler", $PUBLIC},
	{"com.apple.laf.AquaTreeUI$FocusHandler", "com.apple.laf.AquaTreeUI", "FocusHandler", 0},
	{"com.apple.laf.AquaTreeUI$LineListener", "com.apple.laf.AquaTreeUI", "LineListener", 0},
	{}
};

$ClassInfo _AquaTreeUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTreeUI",
	"javax.swing.plaf.basic.BasicTreeUI",
	nullptr,
	_AquaTreeUI_FieldInfo_,
	_AquaTreeUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTreeUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTreeUI$KeyboardExpandCollapseAction,com.apple.laf.AquaTreeUI$TreeArrowMouseInputHandler,com.apple.laf.AquaTreeUI$MacPropertyChangeHandler,com.apple.laf.AquaTreeUI$FocusHandler,com.apple.laf.AquaTreeUI$LineListener"
};

$Object* allocate$AquaTreeUI($Class* clazz) {
	return $of($alloc(AquaTreeUI));
}

$String* AquaTreeUI::LINE_STYLE = nullptr;
$String* AquaTreeUI::LEG_LINE_STYLE_STRING = nullptr;
$String* AquaTreeUI::HORIZ_STYLE_STRING = nullptr;
$String* AquaTreeUI::NO_STYLE_STRING = nullptr;

$JTree* AquaTreeUI::access$3200(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$3100(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$3000(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$2900(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$2800(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$2700(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$2600(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$2500(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$2400(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$2300(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$2200(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$2100(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$2000(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

bool AquaTreeUI::access$1900(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->isRootVisible();
}

$JTree* AquaTreeUI::access$1800(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$1700(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

void AquaTreeUI::access$1600(AquaTreeUI* x0, $TreePath* x1) {
	$init(AquaTreeUI);
	$nc(x0)->toggleExpandState(x1);
}

$JTree* AquaTreeUI::access$1500(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$AbstractLayoutCache* AquaTreeUI::access$1400(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->treeState;
}

$JTree* AquaTreeUI::access$1300(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$AbstractLayoutCache* AquaTreeUI::access$1200(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->treeState;
}

$TreeModel* AquaTreeUI::access$1100(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->treeModel;
}

$JTree* AquaTreeUI::access$1000(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$900(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$800(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$700(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$600(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$500(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$400(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$300(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$200(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$100(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$JTree* AquaTreeUI::access$000(AquaTreeUI* x0) {
	$init(AquaTreeUI);
	return $nc(x0)->tree;
}

$ComponentUI* AquaTreeUI::createUI($JComponent* c) {
	$init(AquaTreeUI);
	return $new(AquaTreeUI);
}

void AquaTreeUI::init$() {
	$BasicTreeUI::init$();
	this->lineStyle = AquaTreeUI::HORIZ_LINE_STYLE;
	$set(this, lineStyleListener, $new($AquaTreeUI$LineListener, this));
	this->fIsPressed = false;
	this->fIsInBounds = false;
	this->fAnimationFrame = -1;
	$set(this, painter, $AquaPainter::create($($JRSUIStateFactory::getDisclosureTriangle())));
}

void AquaTreeUI::installUI($JComponent* c) {
	$BasicTreeUI::installUI(c);
	$var($Object, lineStyleFlag, $nc(c)->getClientProperty(AquaTreeUI::LINE_STYLE));
	decodeLineStyle(lineStyleFlag);
	c->addPropertyChangeListener(this->lineStyleListener);
}

void AquaTreeUI::uninstallUI($JComponent* c) {
	$nc(c)->removePropertyChangeListener(this->lineStyleListener);
	$BasicTreeUI::uninstallUI(c);
}

$FocusListener* AquaTreeUI::createFocusListener() {
	return $new($AquaTreeUI$FocusHandler, this);
}

void AquaTreeUI::decodeLineStyle(Object$* lineStyleFlag) {
	if (lineStyleFlag == nullptr || $nc(AquaTreeUI::NO_STYLE_STRING)->equals(lineStyleFlag)) {
		this->lineStyle = AquaTreeUI::NO_LINE_STYLE;
		return;
	}
	if ($nc(AquaTreeUI::LEG_LINE_STYLE_STRING)->equals(lineStyleFlag)) {
		this->lineStyle = AquaTreeUI::LEG_LINE_STYLE;
	} else if ($nc(AquaTreeUI::HORIZ_STYLE_STRING)->equals(lineStyleFlag)) {
		this->lineStyle = AquaTreeUI::HORIZ_LINE_STYLE;
	}
}

$TreePath* AquaTreeUI::getClosestPathForLocation($JTree* treeLocal, int32_t x, int32_t y) {
	if (treeLocal == nullptr || this->treeState == nullptr) {
		return nullptr;
	}
	$var($Insets, i, $nc(treeLocal)->getInsets());
	if (i == nullptr) {
		$assign(i, $new($Insets, 0, 0, 0, 0));
	}
	return $nc(this->treeState)->getPathClosestTo(x - $nc(i)->left, y - i->top);
}

void AquaTreeUI::paint($Graphics* g, $JComponent* c) {
	$BasicTreeUI::paint(g, c);
	if (this->lineStyle == AquaTreeUI::HORIZ_LINE_STYLE && !this->largeModel) {
		paintHorizontalSeparators(g, c);
	}
}

void AquaTreeUI::paintHorizontalSeparators($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor($($UIManager::getColor("Tree.line"_s)));
	$var($Rectangle, clipBounds, g->getClipBounds());
	int32_t beginRow = getRowForPath(this->tree, $(getClosestPathForLocation(this->tree, 0, $nc(clipBounds)->y)));
	int32_t endRow = getRowForPath(this->tree, $(getClosestPathForLocation(this->tree, 0, $nc(clipBounds)->y + clipBounds->height - 1)));
	if (beginRow <= -1 || endRow <= -1) {
		return;
	}
	for (int32_t i = beginRow; i <= endRow; ++i) {
		$var($TreePath, path, getPathForRow(this->tree, i));
		if (path != nullptr && path->getPathCount() == 2) {
			$var($Rectangle, rowBounds, getPathBounds(this->tree, $(getPathForRow(this->tree, i))));
			if (rowBounds != nullptr) {
				g->drawLine($nc(clipBounds)->x, rowBounds->y, clipBounds->x + clipBounds->width, rowBounds->y);
			}
		}
	}
}

void AquaTreeUI::paintVerticalPartOfLeg($Graphics* g, $Rectangle* clipBounds, $Insets* insets, $TreePath* path) {
	if (this->lineStyle == AquaTreeUI::LEG_LINE_STYLE) {
		$BasicTreeUI::paintVerticalPartOfLeg(g, clipBounds, insets, path);
	}
}

void AquaTreeUI::paintHorizontalPartOfLeg($Graphics* g, $Rectangle* clipBounds, $Insets* insets, $Rectangle* bounds, $TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf) {
	if (this->lineStyle == AquaTreeUI::LEG_LINE_STYLE) {
		$BasicTreeUI::paintHorizontalPartOfLeg(g, clipBounds, insets, bounds, path, row, isExpanded, hasBeenExpanded, isLeaf);
	}
}

void AquaTreeUI::paintExpandControl($Graphics* g, $Rectangle* clipBounds, $Insets* insets, $Rectangle* bounds, $TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, $nc(path)->getLastPathComponent());
	if (isLeaf || (hasBeenExpanded && $nc(this->treeModel)->getChildCount(value) <= 0)) {
		return;
	}
	bool isLeftToRight = $AquaUtils::isLeftToRight(this->tree);
	$var($JRSUIConstants$State, state, getState(path));
	$init($JRSUIConstants$State);
	if (this->fAnimationFrame == -1 && state != $JRSUIConstants$State::PRESSED) {
		$BasicTreeUI::paintExpandControl(g, clipBounds, insets, bounds, path, row, isExpanded, hasBeenExpanded, isLeaf);
		return;
	}
	$var($Icon, icon, isExpanded ? getExpandedIcon() : getCollapsedIcon());
	if (!($instanceOf($UIResource, icon))) {
		$BasicTreeUI::paintExpandControl(g, clipBounds, insets, bounds, path, row, isExpanded, hasBeenExpanded, isLeaf);
		return;
	}
	int32_t middleXOfKnob = 0;
	if (isLeftToRight) {
		middleXOfKnob = $nc(bounds)->x - (getRightChildIndent() - 1);
	} else {
		middleXOfKnob = $nc(clipBounds)->x + clipBounds->width / 2;
	}
	int32_t middleYOfKnob = $nc(bounds)->y + (bounds->height / 2);
	int32_t x = middleXOfKnob - $nc(icon)->getIconWidth() / 2;
	int32_t y = middleYOfKnob - icon->getIconHeight() / 2;
	int32_t height = icon->getIconHeight();
	int32_t width = 20;
	setupPainter(state, isExpanded, isLeftToRight);
	$nc(this->painter)->paint(g, this->tree, x, y, width, height);
}

$Icon* AquaTreeUI::getCollapsedIcon() {
	$var($Icon, icon, $BasicTreeUI::getCollapsedIcon());
	if ($AquaUtils::isLeftToRight(this->tree)) {
		return icon;
	}
	if (!($instanceOf($UIResource, icon))) {
		return icon;
	}
	return $UIManager::getIcon("Tree.rightToLeftCollapsedIcon"_s);
}

void AquaTreeUI::setupPainter($JRSUIConstants$State* state$renamed, bool isExpanded, bool leftToRight) {
	$useLocalCurrentObjectStackCache();
	$var($JRSUIConstants$State, state, state$renamed);
	$init($JRSUIConstants$State);
	if (!this->fIsInBounds && state == $JRSUIConstants$State::PRESSED) {
		$assign(state, $JRSUIConstants$State::ACTIVE);
	}
	$nc(($cast($JRSUIState$AnimationFrameState, $nc(this->painter)->state)))->set(state);
	if ($JRSUIUtils$Tree::useLegacyTreeKnobs()) {
		if (this->fAnimationFrame == -1) {
			$init($JRSUIConstants$Direction);
			$nc(($cast($JRSUIState$AnimationFrameState, $nc(this->painter)->state)))->set(isExpanded ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Direction::DOWN) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Direction::RIGHT));
		} else {
			$init($JRSUIConstants$Direction);
			$nc(($cast($JRSUIState$AnimationFrameState, $nc(this->painter)->state)))->set($JRSUIConstants$Direction::NONE);
			$nc(($cast($JRSUIState$AnimationFrameState, $nc(this->painter)->state)))->setAnimationFrame(this->fAnimationFrame - 1);
		}
	} else {
		$nc(($cast($JRSUIState$AnimationFrameState, $nc(this->painter)->state)))->set($(getDirection(isExpanded, leftToRight)));
		$nc(($cast($JRSUIState$AnimationFrameState, $nc(this->painter)->state)))->setAnimationFrame(this->fAnimationFrame);
	}
}

$JRSUIConstants$Direction* AquaTreeUI::getDirection(bool isExpanded, bool isLeftToRight) {
	if (isExpanded && (this->fAnimationFrame == -1)) {
		$init($JRSUIConstants$Direction);
		return $JRSUIConstants$Direction::DOWN;
	}
	$init($JRSUIConstants$Direction);
	return isLeftToRight ? $JRSUIConstants$Direction::RIGHT : $JRSUIConstants$Direction::LEFT;
}

$JRSUIConstants$State* AquaTreeUI::getState($TreePath* path) {
	if (!$nc(this->tree)->isEnabled()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::DISABLED;
	}
	if (this->fIsPressed) {
		if ($nc(this->fTrackingPath)->equals(path)) {
			$init($JRSUIConstants$State);
			return $JRSUIConstants$State::PRESSED;
		}
	}
	$init($JRSUIConstants$State);
	return $JRSUIConstants$State::ACTIVE;
}

void AquaTreeUI::handleExpandControlClick($TreePath* path, int32_t mouseX, int32_t mouseY) {
	$set(this, fMouseHandler, $new($AquaTreeUI$TreeArrowMouseInputHandler, this, path));
}

bool AquaTreeUI::isToggleSelectionEvent($MouseEvent* event) {
	bool var$0 = $SwingUtilities::isLeftMouseButton(event);
	return var$0 && $nc(event)->isMetaDown();
}

$PropertyChangeListener* AquaTreeUI::createPropertyChangeListener() {
	return $new($AquaTreeUI$MacPropertyChangeHandler, this);
}

int32_t AquaTreeUI::getRowForPath($TreePath* path) {
	return $nc(this->treeState)->getRowForPath(path);
}

$Rectangle* AquaTreeUI::getPathArrowBounds($TreePath* path) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, bounds, getPathBounds(this->tree, path));
	$var($Insets, i, $nc(this->tree)->getInsets());
	if (getExpandedIcon() != nullptr) {
		$nc(bounds)->width = $nc($(getExpandedIcon()))->getIconWidth();
	} else {
		$nc(bounds)->width = 8;
	}
	int32_t boxLeftX = (i != nullptr) ? $nc(i)->left : 0;
	if ($AquaUtils::isLeftToRight(this->tree)) {
		int32_t var$0 = (($nc(path)->getPathCount() + this->depthOffset - 2) * this->totalChildIndent);
		boxLeftX += (var$0 + getLeftChildIndent()) - $nc(bounds)->width / 2;
	} else {
		int32_t var$2 = $nc(this->tree)->getWidth() - 1;
		int32_t var$1 = var$2 - (($nc(path)->getPathCount() - 2 + this->depthOffset) * this->totalChildIndent);
		boxLeftX += var$1 - getLeftChildIndent() - $nc(bounds)->width / 2;
	}
	$nc(bounds)->x = boxLeftX;
	return bounds;
}

void AquaTreeUI::installKeyboardActions() {
	$useLocalCurrentObjectStackCache();
	$BasicTreeUI::installKeyboardActions();
	$nc($($nc(this->tree)->getActionMap()))->put("aquaExpandNode"_s, $$new($AquaTreeUI$KeyboardExpandCollapseAction, this, true, false));
	$nc($($nc(this->tree)->getActionMap()))->put("aquaCollapseNode"_s, $$new($AquaTreeUI$KeyboardExpandCollapseAction, this, false, false));
	$nc($($nc(this->tree)->getActionMap()))->put("aquaFullyExpandNode"_s, $$new($AquaTreeUI$KeyboardExpandCollapseAction, this, true, true));
	$nc($($nc(this->tree)->getActionMap()))->put("aquaFullyCollapseNode"_s, $$new($AquaTreeUI$KeyboardExpandCollapseAction, this, false, true));
}

void AquaTreeUI::expandNode(int32_t row, bool recursive) {
	$var($TreePath, path, getPathForRow(this->tree, row));
	if (path == nullptr) {
		return;
	}
	$nc(this->tree)->expandPath(path);
	if (!recursive) {
		return;
	}
	expandAllNodes(path, row + 1);
}

void AquaTreeUI::expandAllNodes($TreePath* parent, int32_t initialRow) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = initialRow; true; ++i) {
		$var($TreePath, path, getPathForRow(this->tree, i));
		if (!$nc(parent)->isDescendant(path)) {
			return;
		}
		$nc(this->tree)->expandPath(path);
	}
}

void AquaTreeUI::collapseNode(int32_t row, bool recursive) {
	$var($TreePath, path, getPathForRow(this->tree, row));
	if (path == nullptr) {
		return;
	}
	if (recursive) {
		collapseAllNodes(path, row + 1);
	}
	$nc(this->tree)->collapsePath(path);
}

void AquaTreeUI::collapseAllNodes($TreePath* parent, int32_t initialRow) {
	$useLocalCurrentObjectStackCache();
	int32_t lastRow = -1;
	for (int32_t i = initialRow; lastRow == -1; ++i) {
		$var($TreePath, path, getPathForRow(this->tree, i));
		if (!$nc(parent)->isDescendant(path)) {
			lastRow = i - 1;
		}
	}
	for (int32_t i = lastRow; i >= initialRow; --i) {
		$var($TreePath, path, getPathForRow(this->tree, i));
		$nc(this->tree)->collapsePath(path);
	}
}

AquaTreeUI::AquaTreeUI() {
}

void clinit$AquaTreeUI($Class* class$) {
	$assignStatic(AquaTreeUI::LINE_STYLE, "JTree.lineStyle"_s);
	$assignStatic(AquaTreeUI::LEG_LINE_STYLE_STRING, "Angled"_s);
	$assignStatic(AquaTreeUI::HORIZ_STYLE_STRING, "Horizontal"_s);
	$assignStatic(AquaTreeUI::NO_STYLE_STRING, "None"_s);
}

$Class* AquaTreeUI::load$($String* name, bool initialize) {
	$loadClass(AquaTreeUI, name, initialize, &_AquaTreeUI_ClassInfo_, clinit$AquaTreeUI, allocate$AquaTreeUI);
	return class$;
}

$Class* AquaTreeUI::class$ = nullptr;

		} // laf
	} // apple
} // com