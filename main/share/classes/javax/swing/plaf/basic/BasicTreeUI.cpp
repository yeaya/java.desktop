#include <javax/swing/plaf/basic/BasicTreeUI.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Stroke.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/util/Enumeration.h>
#include <java/util/EventObject.h>
#include <java/util/Hashtable.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/Icon.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JTree$DropLocation.h>
#include <javax/swing/JTree.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/CellEditorListener.h>
#include <javax/swing/event/TreeExpansionListener.h>
#include <javax/swing/event/TreeModelListener.h>
#include <javax/swing/event/TreeSelectionListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TreeUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Actions.h>
#include <javax/swing/plaf/basic/BasicTreeUI$ComponentHandler.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTreeUI$MouseInputHandler.h>
#include <javax/swing/plaf/basic/BasicTreeUI$NodeDimensionsHandler.h>
#include <javax/swing/plaf/basic/BasicTreeUI$TreeTransferHandler.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <javax/swing/tree/AbstractLayoutCache$NodeDimensions.h>
#include <javax/swing/tree/AbstractLayoutCache.h>
#include <javax/swing/tree/DefaultTreeCellEditor.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <javax/swing/tree/FixedHeightLayoutCache.h>
#include <javax/swing/tree/TreeCellEditor.h>
#include <javax/swing/tree/TreeCellRenderer.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreePath.h>
#include <javax/swing/tree/TreeSelectionModel.h>
#include <javax/swing/tree/VariableHeightLayoutCache.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef ADD_TO_SELECTION
#undef BASELINE_COMPONENT_KEY
#undef CANCEL_EDITING
#undef CAP_BUTT
#undef CLEAR_SELECTION
#undef COLLAPSE
#undef CONSTANT_ASCENT
#undef EXPAND
#undef EXTEND_TO
#undef JOIN_ROUND
#undef MAX_VALUE
#undef MOVE_SELECTION_TO
#undef MOVE_SELECTION_TO_PARENT
#undef SCROLL_DOWN_CHANGE_LEAD
#undef SCROLL_DOWN_CHANGE_SELECTION
#undef SCROLL_DOWN_EXTEND_SELECTION
#undef SCROLL_LEFT
#undef SCROLL_LEFT_CHANGE_LEAD
#undef SCROLL_LEFT_EXTEND_SELECTION
#undef SCROLL_RIGHT
#undef SCROLL_RIGHT_CHANGE_LEAD
#undef SCROLL_RIGHT_EXTEND_SELECTION
#undef SCROLL_UP_CHANGE_LEAD
#undef SCROLL_UP_CHANGE_SELECTION
#undef SCROLL_UP_EXTEND_SELECTION
#undef SELECT_ALL
#undef SELECT_CHILD
#undef SELECT_CHILD_CHANGE_LEAD
#undef SELECT_FIRST
#undef SELECT_FIRST_CHANGE_LEAD
#undef SELECT_FIRST_EXTEND_SELECTION
#undef SELECT_LAST
#undef SELECT_LAST_CHANGE_LEAD
#undef SELECT_LAST_EXTEND_SELECTION
#undef SELECT_NEXT
#undef SELECT_NEXT_CHANGE_LEAD
#undef SELECT_NEXT_EXTEND_SELECTION
#undef SELECT_PARENT
#undef SELECT_PARENT_CHANGE_LEAD
#undef SELECT_PREVIOUS
#undef SELECT_PREVIOUS_CHANGE_LEAD
#undef SELECT_PREVIOUS_EXTEND_SELECTION
#undef SHARED_ACTION
#undef SHOWS_ROOT_HANDLES_PROPERTY
#undef SINGLE_TREE_SELECTION
#undef START_EDITING
#undef TOGGLE
#undef TOGGLE_AND_ANCHOR
#undef TRUE
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#undef WHEN_FOCUSED

using $AWTEvent = ::java::awt::AWTEvent;
using $BasicStroke = ::java::awt::BasicStroke;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Stroke = ::java::awt::Stroke;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $FocusListener = ::java::awt::event::FocusListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyListener = ::java::awt::event::KeyListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Enumeration = ::java::util::Enumeration;
using $EventObject = ::java::util::EventObject;
using $Hashtable = ::java::util::Hashtable;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $Icon = ::javax::swing::Icon;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextField = ::javax::swing::JTextField;
using $JTree = ::javax::swing::JTree;
using $JTree$DropLocation = ::javax::swing::JTree$DropLocation;
using $JViewport = ::javax::swing::JViewport;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $CellEditorListener = ::javax::swing::event::CellEditorListener;
using $TreeExpansionListener = ::javax::swing::event::TreeExpansionListener;
using $TreeModelListener = ::javax::swing::event::TreeModelListener;
using $TreeSelectionListener = ::javax::swing::event::TreeSelectionListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TreeUI = ::javax::swing::plaf::TreeUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicTreeUI$Actions = ::javax::swing::plaf::basic::BasicTreeUI$Actions;
using $BasicTreeUI$ComponentHandler = ::javax::swing::plaf::basic::BasicTreeUI$ComponentHandler;
using $BasicTreeUI$Handler = ::javax::swing::plaf::basic::BasicTreeUI$Handler;
using $BasicTreeUI$MouseInputHandler = ::javax::swing::plaf::basic::BasicTreeUI$MouseInputHandler;
using $BasicTreeUI$NodeDimensionsHandler = ::javax::swing::plaf::basic::BasicTreeUI$NodeDimensionsHandler;
using $BasicTreeUI$TreeTransferHandler = ::javax::swing::plaf::basic::BasicTreeUI$TreeTransferHandler;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $AbstractLayoutCache = ::javax::swing::tree::AbstractLayoutCache;
using $AbstractLayoutCache$NodeDimensions = ::javax::swing::tree::AbstractLayoutCache$NodeDimensions;
using $DefaultTreeCellEditor = ::javax::swing::tree::DefaultTreeCellEditor;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;
using $FixedHeightLayoutCache = ::javax::swing::tree::FixedHeightLayoutCache;
using $TreeCellEditor = ::javax::swing::tree::TreeCellEditor;
using $TreeCellRenderer = ::javax::swing::tree::TreeCellRenderer;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreePath = ::javax::swing::tree::TreePath;
using $TreeSelectionModel = ::javax::swing::tree::TreeSelectionModel;
using $VariableHeightLayoutCache = ::javax::swing::tree::VariableHeightLayoutCache;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI_FieldInfo_[] = {
	{"BASELINE_COMPONENT_KEY", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI, BASELINE_COMPONENT_KEY)},
	{"SHARED_ACTION", "Ljavax/swing/plaf/basic/BasicTreeUI$Actions;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI, SHARED_ACTION)},
	{"collapsedIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED | $TRANSIENT, $field(BasicTreeUI, collapsedIcon)},
	{"expandedIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED | $TRANSIENT, $field(BasicTreeUI, expandedIcon)},
	{"hashColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(BasicTreeUI, hashColor)},
	{"leftChildIndent", "I", nullptr, $PROTECTED, $field(BasicTreeUI, leftChildIndent)},
	{"rightChildIndent", "I", nullptr, $PROTECTED, $field(BasicTreeUI, rightChildIndent)},
	{"totalChildIndent", "I", nullptr, $PROTECTED, $field(BasicTreeUI, totalChildIndent)},
	{"preferredMinSize", "Ljava/awt/Dimension;", nullptr, $PROTECTED, $field(BasicTreeUI, preferredMinSize)},
	{"lastSelectedRow", "I", nullptr, $PROTECTED, $field(BasicTreeUI, lastSelectedRow)},
	{"tree", "Ljavax/swing/JTree;", nullptr, $PROTECTED, $field(BasicTreeUI, tree)},
	{"currentCellRenderer", "Ljavax/swing/tree/TreeCellRenderer;", nullptr, $PROTECTED | $TRANSIENT, $field(BasicTreeUI, currentCellRenderer)},
	{"createdRenderer", "Z", nullptr, $PROTECTED, $field(BasicTreeUI, createdRenderer)},
	{"cellEditor", "Ljavax/swing/tree/TreeCellEditor;", nullptr, $PROTECTED | $TRANSIENT, $field(BasicTreeUI, cellEditor)},
	{"createdCellEditor", "Z", nullptr, $PROTECTED, $field(BasicTreeUI, createdCellEditor)},
	{"stopEditingInCompleteEditing", "Z", nullptr, $PROTECTED, $field(BasicTreeUI, stopEditingInCompleteEditing)},
	{"rendererPane", "Ljavax/swing/CellRendererPane;", nullptr, $PROTECTED, $field(BasicTreeUI, rendererPane)},
	{"preferredSize", "Ljava/awt/Dimension;", nullptr, $PROTECTED, $field(BasicTreeUI, preferredSize)},
	{"validCachedPreferredSize", "Z", nullptr, $PROTECTED, $field(BasicTreeUI, validCachedPreferredSize)},
	{"treeState", "Ljavax/swing/tree/AbstractLayoutCache;", nullptr, $PROTECTED, $field(BasicTreeUI, treeState)},
	{"drawingCache", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/swing/tree/TreePath;Ljava/lang/Boolean;>;", $PROTECTED, $field(BasicTreeUI, drawingCache)},
	{"largeModel", "Z", nullptr, $PROTECTED, $field(BasicTreeUI, largeModel)},
	{"nodeDimensions", "Ljavax/swing/tree/AbstractLayoutCache$NodeDimensions;", nullptr, $PROTECTED, $field(BasicTreeUI, nodeDimensions)},
	{"treeModel", "Ljavax/swing/tree/TreeModel;", nullptr, $PROTECTED, $field(BasicTreeUI, treeModel)},
	{"treeSelectionModel", "Ljavax/swing/tree/TreeSelectionModel;", nullptr, $PROTECTED, $field(BasicTreeUI, treeSelectionModel)},
	{"depthOffset", "I", nullptr, $PROTECTED, $field(BasicTreeUI, depthOffset)},
	{"editingComponent", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(BasicTreeUI, editingComponent)},
	{"editingPath", "Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED, $field(BasicTreeUI, editingPath)},
	{"editingRow", "I", nullptr, $PROTECTED, $field(BasicTreeUI, editingRow)},
	{"editorHasDifferentSize", "Z", nullptr, $PROTECTED, $field(BasicTreeUI, editorHasDifferentSize)},
	{"leadRow", "I", nullptr, $PRIVATE, $field(BasicTreeUI, leadRow)},
	{"ignoreLAChange", "Z", nullptr, $PRIVATE, $field(BasicTreeUI, ignoreLAChange)},
	{"leftToRight", "Z", nullptr, $PRIVATE, $field(BasicTreeUI, leftToRight)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(BasicTreeUI, propertyChangeListener)},
	{"selectionModelPropertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(BasicTreeUI, selectionModelPropertyChangeListener)},
	{"mouseListener", "Ljava/awt/event/MouseListener;", nullptr, $PRIVATE, $field(BasicTreeUI, mouseListener)},
	{"focusListener", "Ljava/awt/event/FocusListener;", nullptr, $PRIVATE, $field(BasicTreeUI, focusListener)},
	{"keyListener", "Ljava/awt/event/KeyListener;", nullptr, $PRIVATE, $field(BasicTreeUI, keyListener)},
	{"componentListener", "Ljava/awt/event/ComponentListener;", nullptr, $PRIVATE, $field(BasicTreeUI, componentListener)},
	{"cellEditorListener", "Ljavax/swing/event/CellEditorListener;", nullptr, $PRIVATE, $field(BasicTreeUI, cellEditorListener)},
	{"treeSelectionListener", "Ljavax/swing/event/TreeSelectionListener;", nullptr, $PRIVATE, $field(BasicTreeUI, treeSelectionListener)},
	{"treeModelListener", "Ljavax/swing/event/TreeModelListener;", nullptr, $PRIVATE, $field(BasicTreeUI, treeModelListener)},
	{"treeExpansionListener", "Ljavax/swing/event/TreeExpansionListener;", nullptr, $PRIVATE, $field(BasicTreeUI, treeExpansionListener)},
	{"paintLines", "Z", nullptr, $PRIVATE, $field(BasicTreeUI, paintLines)},
	{"lineTypeDashed", "Z", nullptr, $PRIVATE, $field(BasicTreeUI, lineTypeDashed)},
	{"timeFactor", "J", nullptr, $PRIVATE, $field(BasicTreeUI, timeFactor)},
	{"handler", "Ljavax/swing/plaf/basic/BasicTreeUI$Handler;", nullptr, $PRIVATE, $field(BasicTreeUI, handler)},
	{"releaseEvent", "Ljava/awt/event/MouseEvent;", nullptr, $PRIVATE, $field(BasicTreeUI, releaseEvent)},
	{"defaultTransferHandler", "Ljavax/swing/TransferHandler;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI, defaultTransferHandler)},
	{}
};

$MethodInfo _BasicTreeUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI::*)()>(&BasicTreeUI::init$))},
	{"cancelEditing", "(Ljavax/swing/JTree;)V", nullptr, $PUBLIC},
	{"checkForClickInExpandControl", "(Ljavax/swing/tree/TreePath;II)V", nullptr, $PROTECTED},
	{"completeEditing", "()V", nullptr, $PROTECTED},
	{"completeEditing", "(ZZZ)V", nullptr, $PROTECTED},
	{"completeUIInstall", "()V", nullptr, $PROTECTED},
	{"completeUIUninstall", "()V", nullptr, $PROTECTED},
	{"configureLayoutCache", "()V", nullptr, $PROTECTED},
	{"createCellEditorListener", "()Ljavax/swing/event/CellEditorListener;", nullptr, $PROTECTED},
	{"createCellRendererPane", "()Ljavax/swing/CellRendererPane;", nullptr, $PROTECTED},
	{"createComponentListener", "()Ljava/awt/event/ComponentListener;", nullptr, $PROTECTED},
	{"createDefaultCellEditor", "()Ljavax/swing/tree/TreeCellEditor;", nullptr, $PROTECTED},
	{"createDefaultCellRenderer", "()Ljavax/swing/tree/TreeCellRenderer;", nullptr, $PROTECTED},
	{"createFocusListener", "()Ljava/awt/event/FocusListener;", nullptr, $PROTECTED},
	{"createKeyListener", "()Ljava/awt/event/KeyListener;", nullptr, $PROTECTED},
	{"createLayoutCache", "()Ljavax/swing/tree/AbstractLayoutCache;", nullptr, $PROTECTED},
	{"createMouseListener", "()Ljava/awt/event/MouseListener;", nullptr, $PROTECTED},
	{"createNodeDimensions", "()Ljavax/swing/tree/AbstractLayoutCache$NodeDimensions;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createSelectionModelPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createTreeExpansionListener", "()Ljavax/swing/event/TreeExpansionListener;", nullptr, $PROTECTED},
	{"createTreeModelListener", "()Ljavax/swing/event/TreeModelListener;", nullptr, $PROTECTED},
	{"createTreeSelectionListener", "()Ljavax/swing/event/TreeSelectionListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicTreeUI::createUI))},
	{"drawCentered", "(Ljava/awt/Component;Ljava/awt/Graphics;Ljavax/swing/Icon;II)V", nullptr, $PROTECTED},
	{"drawDashedHorizontalLine", "(Ljava/awt/Graphics;III)V", nullptr, $PROTECTED},
	{"drawDashedLine", "(Ljava/awt/Graphics;IIIZ)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI::*)($Graphics*,int32_t,int32_t,int32_t,bool)>(&BasicTreeUI::drawDashedLine))},
	{"drawDashedVerticalLine", "(Ljava/awt/Graphics;III)V", nullptr, $PROTECTED},
	{"ensureRowsAreVisible", "(II)V", nullptr, $PROTECTED},
	{"extendSelection", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI::*)($TreePath*)>(&BasicTreeUI::extendSelection))},
	{"findCenteredX", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicTreeUI::*)(int32_t,int32_t)>(&BasicTreeUI::findCenteredX))},
	{"getAnchorSelectionPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PRIVATE, $method(static_cast<$TreePath*(BasicTreeUI::*)()>(&BasicTreeUI::getAnchorSelectionPath))},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getCellEditor", "()Ljavax/swing/tree/TreeCellEditor;", nullptr, $PROTECTED},
	{"getCellRenderer", "()Ljavax/swing/tree/TreeCellRenderer;", nullptr, $PROTECTED},
	{"getClosestPathForLocation", "(Ljavax/swing/JTree;II)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getCollapsedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getDropLineRect", "(Ljavax/swing/JTree$DropLocation;)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"getEditingPath", "(Ljavax/swing/JTree;)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getExpandedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicTreeUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicTreeUI$Handler*(BasicTreeUI::*)()>(&BasicTreeUI::getHandler))},
	{"getHashColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getHorizontalLegBuffer", "()I", nullptr, $PROTECTED},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0},
	{"getLastChildPath", "(Ljavax/swing/tree/TreePath;)Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED},
	{"getLeadSelectionPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PRIVATE, $method(static_cast<$TreePath*(BasicTreeUI::*)()>(&BasicTreeUI::getLeadSelectionPath))},
	{"getLeadSelectionRow", "()I", nullptr, $PROTECTED},
	{"getLeftChildIndent", "()I", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getModel", "()Ljavax/swing/tree/TreeModel;", nullptr, $PROTECTED},
	{"getPathBounds", "(Ljavax/swing/JTree;Ljavax/swing/tree/TreePath;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getPathBounds", "(Ljavax/swing/tree/TreePath;Ljava/awt/Insets;Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(BasicTreeUI::*)($TreePath*,$Insets*,$Rectangle*)>(&BasicTreeUI::getPathBounds))},
	{"getPathForRow", "(Ljavax/swing/JTree;I)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getPreferredMinSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;Z)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getRepaintPathBounds", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(BasicTreeUI::*)($Rectangle*)>(&BasicTreeUI::getRepaintPathBounds))},
	{"getRightChildIndent", "()I", nullptr, $PUBLIC},
	{"getRowCount", "(Ljavax/swing/JTree;)I", nullptr, $PUBLIC},
	{"getRowForPath", "(Ljavax/swing/JTree;Ljavax/swing/tree/TreePath;)I", nullptr, $PUBLIC},
	{"getRowHeight", "()I", nullptr, $PROTECTED},
	{"getRowX", "(II)I", nullptr, $PROTECTED},
	{"getSelectionModel", "()Ljavax/swing/tree/TreeSelectionModel;", nullptr, $PROTECTED},
	{"getShowsRootHandles", "()Z", nullptr, $PROTECTED},
	{"getVerticalLegBuffer", "()I", nullptr, $PROTECTED},
	{"handleExpandControlClick", "(Ljavax/swing/tree/TreePath;II)V", nullptr, $PROTECTED},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isDropLine", "(Ljavax/swing/JTree$DropLocation;)Z", nullptr, $PROTECTED},
	{"isEditable", "()Z", nullptr, $PROTECTED},
	{"isEditing", "(Ljavax/swing/JTree;)Z", nullptr, $PUBLIC},
	{"isLargeModel", "()Z", nullptr, $PROTECTED},
	{"isLeaf", "(I)Z", nullptr, $PROTECTED},
	{"isLocationInExpandControl", "(Ljavax/swing/tree/TreePath;II)Z", nullptr, $PROTECTED},
	{"isMultiSelectEvent", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PROTECTED},
	{"isRootVisible", "()Z", nullptr, $PROTECTED},
	{"isToggleEvent", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PROTECTED},
	{"isToggleSelectionEvent", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PROTECTED},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicTreeUI::loadActionMap))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintDropLine", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintExpandControl", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Insets;Ljava/awt/Rectangle;Ljavax/swing/tree/TreePath;IZZZ)V", nullptr, $PROTECTED},
	{"paintHorizontalLine", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;III)V", nullptr, $PROTECTED},
	{"paintHorizontalPartOfLeg", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Insets;Ljava/awt/Rectangle;Ljavax/swing/tree/TreePath;IZZZ)V", nullptr, $PROTECTED},
	{"paintRow", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Insets;Ljava/awt/Rectangle;Ljavax/swing/tree/TreePath;IZZZ)V", nullptr, $PROTECTED},
	{"paintVerticalLine", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;III)V", nullptr, $PROTECTED},
	{"paintVerticalPartOfLeg", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Insets;Ljavax/swing/tree/TreePath;)V", nullptr, $PROTECTED},
	{"pathWasCollapsed", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PROTECTED},
	{"pathWasExpanded", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PROTECTED},
	{"prepareForUIInstall", "()V", nullptr, $PROTECTED},
	{"prepareForUIUninstall", "()V", nullptr, $PROTECTED},
	{"redoTheLayout", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI::*)()>(&BasicTreeUI::redoTheLayout))},
	{"repaintPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI::*)($TreePath*)>(&BasicTreeUI::repaintPath))},
	{"selectPathForEvent", "(Ljavax/swing/tree/TreePath;Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED},
	{"setAnchorSelectionPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI::*)($TreePath*)>(&BasicTreeUI::setAnchorSelectionPath))},
	{"setCellEditor", "(Ljavax/swing/tree/TreeCellEditor;)V", nullptr, $PROTECTED},
	{"setCellRenderer", "(Ljavax/swing/tree/TreeCellRenderer;)V", nullptr, $PROTECTED},
	{"setCollapsedIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC},
	{"setEditable", "(Z)V", nullptr, $PROTECTED},
	{"setExpandedIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC},
	{"setHashColor", "(Ljava/awt/Color;)V", nullptr, $PROTECTED},
	{"setLargeModel", "(Z)V", nullptr, $PROTECTED},
	{"setLeadSelectionPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI::*)($TreePath*)>(&BasicTreeUI::setLeadSelectionPath))},
	{"setLeadSelectionPath", "(Ljavax/swing/tree/TreePath;Z)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI::*)($TreePath*,bool)>(&BasicTreeUI::setLeadSelectionPath))},
	{"setLeftChildIndent", "(I)V", nullptr, $PUBLIC},
	{"setModel", "(Ljavax/swing/tree/TreeModel;)V", nullptr, $PROTECTED},
	{"setPreferredMinSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"setRightChildIndent", "(I)V", nullptr, $PUBLIC},
	{"setRootVisible", "(Z)V", nullptr, $PROTECTED},
	{"setRowHeight", "(I)V", nullptr, $PROTECTED},
	{"setSelectionModel", "(Ljavax/swing/tree/TreeSelectionModel;)V", nullptr, $PROTECTED},
	{"setShowsRootHandles", "(Z)V", nullptr, $PROTECTED},
	{"shouldPaintExpandControl", "(Ljavax/swing/tree/TreePath;IZZZ)Z", nullptr, $PROTECTED},
	{"startEditing", "(Ljavax/swing/tree/TreePath;Ljava/awt/event/MouseEvent;)Z", nullptr, $PROTECTED},
	{"startEditingAtPath", "(Ljavax/swing/JTree;Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"startEditingOnRelease", "(Ljavax/swing/tree/TreePath;Ljava/awt/event/MouseEvent;Ljava/awt/event/MouseEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicTreeUI::*)($TreePath*,$MouseEvent*,$MouseEvent*)>(&BasicTreeUI::startEditingOnRelease))},
	{"stopEditing", "(Ljavax/swing/JTree;)Z", nullptr, $PUBLIC},
	{"toggleExpandState", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PROTECTED},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateCachedPreferredSize", "()V", nullptr, $PROTECTED},
	{"updateCellEditor", "()V", nullptr, $PROTECTED},
	{"updateDepthOffset", "()V", nullptr, $PROTECTED},
	{"updateExpandedDescendants", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PROTECTED},
	{"updateLayoutCacheExpandedNodes", "()V", nullptr, $PROTECTED},
	{"updateLayoutCacheExpandedNodesIfNecessary", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI::*)()>(&BasicTreeUI::updateLayoutCacheExpandedNodesIfNecessary))},
	{"updateLeadSelectionRow", "()V", nullptr, $PROTECTED},
	{"updateRenderer", "()V", nullptr, $PROTECTED},
	{"updateSize", "()V", nullptr, $PROTECTED},
	{"updateSize0", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI::*)()>(&BasicTreeUI::updateSize0))},
	{}
};

$InnerClassInfo _BasicTreeUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$Actions", "javax.swing.plaf.basic.BasicTreeUI", "Actions", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicTreeUI$Handler", "javax.swing.plaf.basic.BasicTreeUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicTreeUI$TreeTransferHandler", "javax.swing.plaf.basic.BasicTreeUI", "TreeTransferHandler", $STATIC},
	{"javax.swing.plaf.basic.BasicTreeUI$MouseInputHandler", "javax.swing.plaf.basic.BasicTreeUI", "MouseInputHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$TreeCancelEditingAction", "javax.swing.plaf.basic.BasicTreeUI", "TreeCancelEditingAction", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$TreeToggleAction", "javax.swing.plaf.basic.BasicTreeUI", "TreeToggleAction", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$TreeHomeAction", "javax.swing.plaf.basic.BasicTreeUI", "TreeHomeAction", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$TreeIncrementAction", "javax.swing.plaf.basic.BasicTreeUI", "TreeIncrementAction", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$TreePageAction", "javax.swing.plaf.basic.BasicTreeUI", "TreePageAction", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$TreeTraverseAction", "javax.swing.plaf.basic.BasicTreeUI", "TreeTraverseAction", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$SelectionModelPropertyChangeHandler", "javax.swing.plaf.basic.BasicTreeUI", "SelectionModelPropertyChangeHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicTreeUI", "PropertyChangeHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$MouseHandler", "javax.swing.plaf.basic.BasicTreeUI", "MouseHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$NodeDimensionsHandler", "javax.swing.plaf.basic.BasicTreeUI", "NodeDimensionsHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$FocusHandler", "javax.swing.plaf.basic.BasicTreeUI", "FocusHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$KeyHandler", "javax.swing.plaf.basic.BasicTreeUI", "KeyHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$CellEditorHandler", "javax.swing.plaf.basic.BasicTreeUI", "CellEditorHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$TreeSelectionHandler", "javax.swing.plaf.basic.BasicTreeUI", "TreeSelectionHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$TreeModelHandler", "javax.swing.plaf.basic.BasicTreeUI", "TreeModelHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$ComponentHandler", "javax.swing.plaf.basic.BasicTreeUI", "ComponentHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTreeUI$TreeExpansionHandler", "javax.swing.plaf.basic.BasicTreeUI", "TreeExpansionHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI",
	"javax.swing.plaf.TreeUI",
	nullptr,
	_BasicTreeUI_FieldInfo_,
	_BasicTreeUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI$Actions,javax.swing.plaf.basic.BasicTreeUI$Actions$1,javax.swing.plaf.basic.BasicTreeUI$Handler,javax.swing.plaf.basic.BasicTreeUI$TreeTransferHandler,javax.swing.plaf.basic.BasicTreeUI$MouseInputHandler,javax.swing.plaf.basic.BasicTreeUI$TreeCancelEditingAction,javax.swing.plaf.basic.BasicTreeUI$TreeToggleAction,javax.swing.plaf.basic.BasicTreeUI$TreeHomeAction,javax.swing.plaf.basic.BasicTreeUI$TreeIncrementAction,javax.swing.plaf.basic.BasicTreeUI$TreePageAction,javax.swing.plaf.basic.BasicTreeUI$TreeTraverseAction,javax.swing.plaf.basic.BasicTreeUI$SelectionModelPropertyChangeHandler,javax.swing.plaf.basic.BasicTreeUI$PropertyChangeHandler,javax.swing.plaf.basic.BasicTreeUI$MouseHandler,javax.swing.plaf.basic.BasicTreeUI$NodeDimensionsHandler,javax.swing.plaf.basic.BasicTreeUI$FocusHandler,javax.swing.plaf.basic.BasicTreeUI$KeyHandler,javax.swing.plaf.basic.BasicTreeUI$CellEditorHandler,javax.swing.plaf.basic.BasicTreeUI$TreeSelectionHandler,javax.swing.plaf.basic.BasicTreeUI$TreeModelHandler,javax.swing.plaf.basic.BasicTreeUI$ComponentHandler,javax.swing.plaf.basic.BasicTreeUI$TreeExpansionHandler"
};

$Object* allocate$BasicTreeUI($Class* clazz) {
	return $of($alloc(BasicTreeUI));
}

$StringBuilder* BasicTreeUI::BASELINE_COMPONENT_KEY = nullptr;
$BasicTreeUI$Actions* BasicTreeUI::SHARED_ACTION = nullptr;
$TransferHandler* BasicTreeUI::defaultTransferHandler = nullptr;

$ComponentUI* BasicTreeUI::createUI($JComponent* x) {
	$init(BasicTreeUI);
	return $new(BasicTreeUI);
}

void BasicTreeUI::loadActionMap($LazyActionMap* map) {
	$init(BasicTreeUI);
	$useLocalCurrentObjectStackCache();
	$init($BasicTreeUI$Actions);
	$nc(map)->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_PREVIOUS));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_PREVIOUS_CHANGE_LEAD));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_PREVIOUS_EXTEND_SELECTION));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_NEXT));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_NEXT_CHANGE_LEAD));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_NEXT_EXTEND_SELECTION));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_CHILD));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_CHILD_CHANGE_LEAD));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_PARENT));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_PARENT_CHANGE_LEAD));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SCROLL_UP_CHANGE_SELECTION));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SCROLL_UP_CHANGE_LEAD));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SCROLL_UP_EXTEND_SELECTION));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SCROLL_DOWN_CHANGE_SELECTION));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SCROLL_DOWN_EXTEND_SELECTION));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SCROLL_DOWN_CHANGE_LEAD));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_FIRST));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_FIRST_CHANGE_LEAD));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_FIRST_EXTEND_SELECTION));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_LAST));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_LAST_CHANGE_LEAD));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_LAST_EXTEND_SELECTION));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::TOGGLE));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::CANCEL_EDITING));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::START_EDITING));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SELECT_ALL));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::CLEAR_SELECTION));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SCROLL_LEFT));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SCROLL_RIGHT));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SCROLL_LEFT_EXTEND_SELECTION));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SCROLL_RIGHT_EXTEND_SELECTION));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SCROLL_RIGHT_CHANGE_LEAD));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::SCROLL_LEFT_CHANGE_LEAD));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::EXPAND));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::COLLAPSE));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::MOVE_SELECTION_TO_PARENT));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::ADD_TO_SELECTION));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::TOGGLE_AND_ANCHOR));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::EXTEND_TO));
	map->put($$new($BasicTreeUI$Actions, $BasicTreeUI$Actions::MOVE_SELECTION_TO));
	map->put($($TransferHandler::getCutAction()));
	map->put($($TransferHandler::getCopyAction()));
	map->put($($TransferHandler::getPasteAction()));
}

void BasicTreeUI::init$() {
	$TreeUI::init$();
	this->paintLines = true;
	this->timeFactor = 1000;
}

$Color* BasicTreeUI::getHashColor() {
	return this->hashColor;
}

void BasicTreeUI::setHashColor($Color* color) {
	$set(this, hashColor, color);
}

void BasicTreeUI::setLeftChildIndent(int32_t newAmount) {
	this->leftChildIndent = newAmount;
	this->totalChildIndent = this->leftChildIndent + this->rightChildIndent;
	if (this->treeState != nullptr) {
		$nc(this->treeState)->invalidateSizes();
	}
	updateSize();
}

int32_t BasicTreeUI::getLeftChildIndent() {
	return this->leftChildIndent;
}

void BasicTreeUI::setRightChildIndent(int32_t newAmount) {
	this->rightChildIndent = newAmount;
	this->totalChildIndent = this->leftChildIndent + this->rightChildIndent;
	if (this->treeState != nullptr) {
		$nc(this->treeState)->invalidateSizes();
	}
	updateSize();
}

int32_t BasicTreeUI::getRightChildIndent() {
	return this->rightChildIndent;
}

void BasicTreeUI::setExpandedIcon($Icon* newG) {
	$set(this, expandedIcon, newG);
}

$Icon* BasicTreeUI::getExpandedIcon() {
	return this->expandedIcon;
}

void BasicTreeUI::setCollapsedIcon($Icon* newG) {
	$set(this, collapsedIcon, newG);
}

$Icon* BasicTreeUI::getCollapsedIcon() {
	return this->collapsedIcon;
}

void BasicTreeUI::setLargeModel(bool largeModel) {
	if (getRowHeight() < 1) {
		largeModel = false;
	}
	if (this->largeModel != largeModel) {
		completeEditing();
		this->largeModel = largeModel;
		$set(this, treeState, createLayoutCache());
		configureLayoutCache();
		updateLayoutCacheExpandedNodesIfNecessary();
		updateSize();
	}
}

bool BasicTreeUI::isLargeModel() {
	return this->largeModel;
}

void BasicTreeUI::setRowHeight(int32_t rowHeight) {
	completeEditing();
	if (this->treeState != nullptr) {
		setLargeModel($nc(this->tree)->isLargeModel());
		$nc(this->treeState)->setRowHeight(rowHeight);
		updateSize();
	}
}

int32_t BasicTreeUI::getRowHeight() {
	return (this->tree == nullptr) ? -1 : $nc(this->tree)->getRowHeight();
}

void BasicTreeUI::setCellRenderer($TreeCellRenderer* tcr) {
	completeEditing();
	updateRenderer();
	if (this->treeState != nullptr) {
		$nc(this->treeState)->invalidateSizes();
		updateSize();
	}
}

$TreeCellRenderer* BasicTreeUI::getCellRenderer() {
	return this->currentCellRenderer;
}

void BasicTreeUI::setModel($TreeModel* model) {
	completeEditing();
	if (this->treeModel != nullptr && this->treeModelListener != nullptr) {
		$nc(this->treeModel)->removeTreeModelListener(this->treeModelListener);
	}
	$set(this, treeModel, model);
	if (this->treeModel != nullptr) {
		if (this->treeModelListener != nullptr) {
			$nc(this->treeModel)->addTreeModelListener(this->treeModelListener);
		}
	}
	if (this->treeState != nullptr) {
		$nc(this->treeState)->setModel(model);
		updateLayoutCacheExpandedNodesIfNecessary();
		updateSize();
	}
}

$TreeModel* BasicTreeUI::getModel() {
	return this->treeModel;
}

void BasicTreeUI::setRootVisible(bool newValue) {
	completeEditing();
	updateDepthOffset();
	if (this->treeState != nullptr) {
		$nc(this->treeState)->setRootVisible(newValue);
		$nc(this->treeState)->invalidateSizes();
		updateSize();
	}
}

bool BasicTreeUI::isRootVisible() {
	return (this->tree != nullptr) ? $nc(this->tree)->isRootVisible() : false;
}

void BasicTreeUI::setShowsRootHandles(bool newValue) {
	completeEditing();
	updateDepthOffset();
	if (this->treeState != nullptr) {
		$nc(this->treeState)->invalidateSizes();
		updateSize();
	}
}

bool BasicTreeUI::getShowsRootHandles() {
	return (this->tree != nullptr) ? $nc(this->tree)->getShowsRootHandles() : false;
}

void BasicTreeUI::setCellEditor($TreeCellEditor* editor) {
	updateCellEditor();
}

$TreeCellEditor* BasicTreeUI::getCellEditor() {
	return (this->tree != nullptr) ? $nc(this->tree)->getCellEditor() : ($TreeCellEditor*)nullptr;
}

void BasicTreeUI::setEditable(bool newValue) {
	updateCellEditor();
}

bool BasicTreeUI::isEditable() {
	return (this->tree != nullptr) ? $nc(this->tree)->isEditable() : false;
}

void BasicTreeUI::setSelectionModel($TreeSelectionModel* newLSM) {
	completeEditing();
	if (this->selectionModelPropertyChangeListener != nullptr && this->treeSelectionModel != nullptr) {
		$nc(this->treeSelectionModel)->removePropertyChangeListener(this->selectionModelPropertyChangeListener);
	}
	if (this->treeSelectionListener != nullptr && this->treeSelectionModel != nullptr) {
		$nc(this->treeSelectionModel)->removeTreeSelectionListener(this->treeSelectionListener);
	}
	$set(this, treeSelectionModel, newLSM);
	if (this->treeSelectionModel != nullptr) {
		if (this->selectionModelPropertyChangeListener != nullptr) {
			$nc(this->treeSelectionModel)->addPropertyChangeListener(this->selectionModelPropertyChangeListener);
		}
		if (this->treeSelectionListener != nullptr) {
			$nc(this->treeSelectionModel)->addTreeSelectionListener(this->treeSelectionListener);
		}
		if (this->treeState != nullptr) {
			$nc(this->treeState)->setSelectionModel(this->treeSelectionModel);
		}
	} else if (this->treeState != nullptr) {
		$nc(this->treeState)->setSelectionModel(nullptr);
	}
	if (this->tree != nullptr) {
		$nc(this->tree)->repaint();
	}
}

$TreeSelectionModel* BasicTreeUI::getSelectionModel() {
	return this->treeSelectionModel;
}

$Rectangle* BasicTreeUI::getPathBounds($JTree* tree, $TreePath* path) {
	$useLocalCurrentObjectStackCache();
	if (tree != nullptr && this->treeState != nullptr) {
		$var($TreePath, var$0, path);
		$var($Insets, var$1, tree->getInsets());
		return getPathBounds(var$0, var$1, $$new($Rectangle));
	}
	return nullptr;
}

$Rectangle* BasicTreeUI::getPathBounds($TreePath* path, $Insets* insets, $Rectangle* bounds$renamed) {
	$var($Rectangle, bounds, bounds$renamed);
	$assign(bounds, $nc(this->treeState)->getBounds(path, bounds));
	if (bounds != nullptr) {
		if (this->leftToRight) {
			bounds->x += $nc(insets)->left;
		} else {
			bounds->x = $nc(this->tree)->getWidth() - (bounds->x + bounds->width) - $nc(insets)->right;
		}
		bounds->y += $nc(insets)->top;
	}
	return bounds;
}

$TreePath* BasicTreeUI::getPathForRow($JTree* tree, int32_t row) {
	return (this->treeState != nullptr) ? $nc(this->treeState)->getPathForRow(row) : ($TreePath*)nullptr;
}

int32_t BasicTreeUI::getRowForPath($JTree* tree, $TreePath* path) {
	return (this->treeState != nullptr) ? $nc(this->treeState)->getRowForPath(path) : -1;
}

int32_t BasicTreeUI::getRowCount($JTree* tree) {
	return (this->treeState != nullptr) ? $nc(this->treeState)->getRowCount() : 0;
}

$TreePath* BasicTreeUI::getClosestPathForLocation($JTree* tree, int32_t x, int32_t y) {
	if (tree != nullptr && this->treeState != nullptr) {
		y -= $nc($(tree->getInsets()))->top;
		return $nc(this->treeState)->getPathClosestTo(x, y);
	}
	return nullptr;
}

bool BasicTreeUI::isEditing($JTree* tree) {
	return (this->editingComponent != nullptr);
}

bool BasicTreeUI::stopEditing($JTree* tree) {
	if (this->editingComponent != nullptr && $nc(this->cellEditor)->stopCellEditing()) {
		completeEditing(false, false, true);
		return true;
	}
	return false;
}

void BasicTreeUI::cancelEditing($JTree* tree) {
	if (this->editingComponent != nullptr) {
		completeEditing(false, true, false);
	}
}

void BasicTreeUI::startEditingAtPath($JTree* tree, $TreePath* path) {
	$nc(tree)->scrollPathToVisible(path);
	if (path != nullptr && tree->isVisible(path)) {
		startEditing(path, nullptr);
	}
}

$TreePath* BasicTreeUI::getEditingPath($JTree* tree) {
	return this->editingPath;
}

void BasicTreeUI::installUI($JComponent* c) {
	if (c == nullptr) {
		$throwNew($NullPointerException, "null component passed to BasicTreeUI.installUI()"_s);
	}
	$set(this, tree, $cast($JTree, c));
	prepareForUIInstall();
	installDefaults();
	installKeyboardActions();
	installComponents();
	installListeners();
	completeUIInstall();
}

void BasicTreeUI::prepareForUIInstall() {
	$set(this, drawingCache, $new($Hashtable, 7));
	this->leftToRight = $BasicGraphicsUtils::isLeftToRight(this->tree);
	this->stopEditingInCompleteEditing = true;
	this->lastSelectedRow = -1;
	this->leadRow = -1;
	$set(this, preferredSize, $new($Dimension));
	this->largeModel = $nc(this->tree)->isLargeModel();
	if (getRowHeight() <= 0) {
		this->largeModel = false;
	}
	setModel($($nc(this->tree)->getModel()));
}

void BasicTreeUI::completeUIInstall() {
	this->setShowsRootHandles($nc(this->tree)->getShowsRootHandles());
	updateRenderer();
	updateDepthOffset();
	setSelectionModel($($nc(this->tree)->getSelectionModel()));
	$set(this, treeState, createLayoutCache());
	configureLayoutCache();
	updateSize();
}

void BasicTreeUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(this->tree)->getBackground() == nullptr;
	if (var$0 || $instanceOf($UIResource, $($nc(this->tree)->getBackground()))) {
		$nc(this->tree)->setBackground($($UIManager::getColor("Tree.background"_s)));
	}
	bool var$1 = getHashColor() == nullptr;
	if (var$1 || $instanceOf($UIResource, $(getHashColor()))) {
		setHashColor($($UIManager::getColor("Tree.hash"_s)));
	}
	bool var$2 = $nc(this->tree)->getFont() == nullptr;
	if (var$2 || $instanceOf($UIResource, $($nc(this->tree)->getFont()))) {
		$nc(this->tree)->setFont($($UIManager::getFont("Tree.font"_s)));
	}
	setExpandedIcon($cast($Icon, $($UIManager::get("Tree.expandedIcon"_s))));
	setCollapsedIcon($cast($Icon, $($UIManager::get("Tree.collapsedIcon"_s))));
	setLeftChildIndent($nc(($cast($Integer, $($UIManager::get("Tree.leftChildIndent"_s)))))->intValue());
	setRightChildIndent($nc(($cast($Integer, $($UIManager::get("Tree.rightChildIndent"_s)))))->intValue());
	$LookAndFeel::installProperty(this->tree, "rowHeight"_s, $($UIManager::get("Tree.rowHeight"_s)));
	bool var$3 = $nc(this->tree)->isLargeModel();
	this->largeModel = (var$3 && $nc(this->tree)->getRowHeight() > 0);
	$var($Object, scrollsOnExpand, $UIManager::get("Tree.scrollsOnExpand"_s));
	if (scrollsOnExpand != nullptr) {
		$LookAndFeel::installProperty(this->tree, "scrollsOnExpand"_s, scrollsOnExpand);
	}
	this->paintLines = $UIManager::getBoolean("Tree.paintLines"_s);
	this->lineTypeDashed = $UIManager::getBoolean("Tree.lineTypeDashed"_s);
	$var($Long, l, $cast($Long, $UIManager::get("Tree.timeFactor"_s)));
	this->timeFactor = (l != nullptr) ? $nc(l)->longValue() : (int64_t)1000;
	$var($Object, showsRootHandles, $UIManager::get("Tree.showsRootHandles"_s));
	if (showsRootHandles != nullptr) {
		$LookAndFeel::installProperty(this->tree, $JTree::SHOWS_ROOT_HANDLES_PROPERTY, showsRootHandles);
	}
}

void BasicTreeUI::installListeners() {
	$useLocalCurrentObjectStackCache();
	if (($set(this, propertyChangeListener, createPropertyChangeListener())) != nullptr) {
		$nc(this->tree)->addPropertyChangeListener(this->propertyChangeListener);
	}
	if (($set(this, mouseListener, createMouseListener())) != nullptr) {
		$nc(this->tree)->addMouseListener(this->mouseListener);
		if ($instanceOf($MouseMotionListener, this->mouseListener)) {
			$nc(this->tree)->addMouseMotionListener($cast($MouseMotionListener, this->mouseListener));
		}
	}
	if (($set(this, focusListener, createFocusListener())) != nullptr) {
		$nc(this->tree)->addFocusListener(this->focusListener);
	}
	if (($set(this, keyListener, createKeyListener())) != nullptr) {
		$nc(this->tree)->addKeyListener(this->keyListener);
	}
	if (($set(this, treeExpansionListener, createTreeExpansionListener())) != nullptr) {
		$nc(this->tree)->addTreeExpansionListener(this->treeExpansionListener);
	}
	if (($set(this, treeModelListener, createTreeModelListener())) != nullptr && this->treeModel != nullptr) {
		$nc(this->treeModel)->addTreeModelListener(this->treeModelListener);
	}
	if (($set(this, selectionModelPropertyChangeListener, createSelectionModelPropertyChangeListener())) != nullptr && this->treeSelectionModel != nullptr) {
		$nc(this->treeSelectionModel)->addPropertyChangeListener(this->selectionModelPropertyChangeListener);
	}
	if (($set(this, treeSelectionListener, createTreeSelectionListener())) != nullptr && this->treeSelectionModel != nullptr) {
		$nc(this->treeSelectionModel)->addTreeSelectionListener(this->treeSelectionListener);
	}
	$var($TransferHandler, th, $nc(this->tree)->getTransferHandler());
	if (th == nullptr || $instanceOf($UIResource, th)) {
		$nc(this->tree)->setTransferHandler(BasicTreeUI::defaultTransferHandler);
		if ($instanceOf($UIResource, $($nc(this->tree)->getDropTarget()))) {
			$nc(this->tree)->setDropTarget(nullptr);
		}
	}
	$init($Boolean);
	$LookAndFeel::installProperty(this->tree, "opaque"_s, $Boolean::TRUE);
}

void BasicTreeUI::installKeyboardActions() {
	$var($InputMap, km, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$SwingUtilities::replaceUIInputMap(this->tree, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, km);
	$assign(km, getInputMap($JComponent::WHEN_FOCUSED));
	$SwingUtilities::replaceUIInputMap(this->tree, $JComponent::WHEN_FOCUSED, km);
	$LazyActionMap::installLazyActionMap(this->tree, BasicTreeUI::class$, "Tree.actionMap"_s);
}

$InputMap* BasicTreeUI::getInputMap(int32_t condition) {
	$useLocalCurrentObjectStackCache();
	if (condition == $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT) {
		return $cast($InputMap, $DefaultLookup::get(this->tree, this, "Tree.ancestorInputMap"_s));
	} else if (condition == $JComponent::WHEN_FOCUSED) {
		$var($InputMap, keyMap, $cast($InputMap, $DefaultLookup::get(this->tree, this, "Tree.focusInputMap"_s)));
		$var($InputMap, rtlKeyMap, nullptr);
		bool var$0 = $nc($($nc(this->tree)->getComponentOrientation()))->isLeftToRight();
		if (var$0 || (($assign(rtlKeyMap, $cast($InputMap, $DefaultLookup::get(this->tree, this, "Tree.focusInputMap.RightToLeft"_s)))) == nullptr)) {
			return keyMap;
		} else {
			$nc(rtlKeyMap)->setParent(keyMap);
			return rtlKeyMap;
		}
	}
	return nullptr;
}

void BasicTreeUI::installComponents() {
	if (($set(this, rendererPane, createCellRendererPane())) != nullptr) {
		$nc(this->tree)->add(static_cast<$Component*>(this->rendererPane));
	}
}

$AbstractLayoutCache$NodeDimensions* BasicTreeUI::createNodeDimensions() {
	return $new($BasicTreeUI$NodeDimensionsHandler, this);
}

$PropertyChangeListener* BasicTreeUI::createPropertyChangeListener() {
	return getHandler();
}

$BasicTreeUI$Handler* BasicTreeUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicTreeUI$Handler, this));
	}
	return this->handler;
}

$MouseListener* BasicTreeUI::createMouseListener() {
	return getHandler();
}

$FocusListener* BasicTreeUI::createFocusListener() {
	return getHandler();
}

$KeyListener* BasicTreeUI::createKeyListener() {
	return getHandler();
}

$PropertyChangeListener* BasicTreeUI::createSelectionModelPropertyChangeListener() {
	return getHandler();
}

$TreeSelectionListener* BasicTreeUI::createTreeSelectionListener() {
	return getHandler();
}

$CellEditorListener* BasicTreeUI::createCellEditorListener() {
	return getHandler();
}

$ComponentListener* BasicTreeUI::createComponentListener() {
	return $new($BasicTreeUI$ComponentHandler, this);
}

$TreeExpansionListener* BasicTreeUI::createTreeExpansionListener() {
	return getHandler();
}

$AbstractLayoutCache* BasicTreeUI::createLayoutCache() {
	bool var$0 = isLargeModel();
	if (var$0 && getRowHeight() > 0) {
		return $new($FixedHeightLayoutCache);
	}
	return $new($VariableHeightLayoutCache);
}

$CellRendererPane* BasicTreeUI::createCellRendererPane() {
	return $new($CellRendererPane);
}

$TreeCellEditor* BasicTreeUI::createDefaultCellEditor() {
	if (this->currentCellRenderer != nullptr && ($instanceOf($DefaultTreeCellRenderer, this->currentCellRenderer))) {
		$var($DefaultTreeCellEditor, editor, $new($DefaultTreeCellEditor, this->tree, $cast($DefaultTreeCellRenderer, this->currentCellRenderer)));
		return editor;
	}
	return $new($DefaultTreeCellEditor, this->tree, nullptr);
}

$TreeCellRenderer* BasicTreeUI::createDefaultCellRenderer() {
	return $new($DefaultTreeCellRenderer);
}

$TreeModelListener* BasicTreeUI::createTreeModelListener() {
	return getHandler();
}

void BasicTreeUI::uninstallUI($JComponent* c) {
	completeEditing();
	prepareForUIUninstall();
	uninstallDefaults();
	uninstallListeners();
	uninstallKeyboardActions();
	uninstallComponents();
	completeUIUninstall();
}

void BasicTreeUI::prepareForUIUninstall() {
}

void BasicTreeUI::completeUIUninstall() {
	if (this->createdRenderer) {
		$nc(this->tree)->setCellRenderer(nullptr);
	}
	if (this->createdCellEditor) {
		$nc(this->tree)->setCellEditor(nullptr);
	}
	$set(this, cellEditor, nullptr);
	$set(this, currentCellRenderer, nullptr);
	$set(this, rendererPane, nullptr);
	$set(this, componentListener, nullptr);
	$set(this, propertyChangeListener, nullptr);
	$set(this, mouseListener, nullptr);
	$set(this, focusListener, nullptr);
	$set(this, keyListener, nullptr);
	setSelectionModel(nullptr);
	$set(this, treeState, nullptr);
	$set(this, drawingCache, nullptr);
	$set(this, selectionModelPropertyChangeListener, nullptr);
	$set(this, tree, nullptr);
	$set(this, treeModel, nullptr);
	$set(this, treeSelectionModel, nullptr);
	$set(this, treeSelectionListener, nullptr);
	$set(this, treeExpansionListener, nullptr);
}

void BasicTreeUI::uninstallDefaults() {
	if ($instanceOf($UIResource, $($nc(this->tree)->getTransferHandler()))) {
		$nc(this->tree)->setTransferHandler(nullptr);
	}
}

void BasicTreeUI::uninstallListeners() {
	if (this->componentListener != nullptr) {
		$nc(this->tree)->removeComponentListener(this->componentListener);
	}
	if (this->propertyChangeListener != nullptr) {
		$nc(this->tree)->removePropertyChangeListener(this->propertyChangeListener);
	}
	if (this->mouseListener != nullptr) {
		$nc(this->tree)->removeMouseListener(this->mouseListener);
		if ($instanceOf($MouseMotionListener, this->mouseListener)) {
			$nc(this->tree)->removeMouseMotionListener($cast($MouseMotionListener, this->mouseListener));
		}
	}
	if (this->focusListener != nullptr) {
		$nc(this->tree)->removeFocusListener(this->focusListener);
	}
	if (this->keyListener != nullptr) {
		$nc(this->tree)->removeKeyListener(this->keyListener);
	}
	if (this->treeExpansionListener != nullptr) {
		$nc(this->tree)->removeTreeExpansionListener(this->treeExpansionListener);
	}
	if (this->treeModel != nullptr && this->treeModelListener != nullptr) {
		$nc(this->treeModel)->removeTreeModelListener(this->treeModelListener);
	}
	if (this->selectionModelPropertyChangeListener != nullptr && this->treeSelectionModel != nullptr) {
		$nc(this->treeSelectionModel)->removePropertyChangeListener(this->selectionModelPropertyChangeListener);
	}
	if (this->treeSelectionListener != nullptr && this->treeSelectionModel != nullptr) {
		$nc(this->treeSelectionModel)->removeTreeSelectionListener(this->treeSelectionListener);
	}
	$set(this, handler, nullptr);
}

void BasicTreeUI::uninstallKeyboardActions() {
	$SwingUtilities::replaceUIActionMap(this->tree, nullptr);
	$SwingUtilities::replaceUIInputMap(this->tree, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, nullptr);
	$SwingUtilities::replaceUIInputMap(this->tree, $JComponent::WHEN_FOCUSED, nullptr);
}

void BasicTreeUI::uninstallComponents() {
	if (this->rendererPane != nullptr) {
		$nc(this->tree)->remove(static_cast<$Component*>(this->rendererPane));
	}
}

void BasicTreeUI::redoTheLayout() {
	if (this->treeState != nullptr) {
		$nc(this->treeState)->invalidateSizes();
	}
}

int32_t BasicTreeUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$TreeUI::getBaseline(c, width, height);
	$var($UIDefaults, lafDefaults, $UIManager::getLookAndFeelDefaults());
	$var($Component, renderer, $cast($Component, $nc(lafDefaults)->get(BasicTreeUI::BASELINE_COMPONENT_KEY)));
	if (renderer == nullptr) {
		$var($TreeCellRenderer, tcr, createDefaultCellRenderer());
		$assign(renderer, $nc(tcr)->getTreeCellRendererComponent(this->tree, "a"_s, false, false, false, -1, false));
		lafDefaults->put(BasicTreeUI::BASELINE_COMPONENT_KEY, renderer);
	}
	int32_t rowHeight = $nc(this->tree)->getRowHeight();
	int32_t baseline = 0;
	if (rowHeight > 0) {
		baseline = $nc(renderer)->getBaseline($Integer::MAX_VALUE, rowHeight);
	} else {
		$var($Dimension, pref, $nc(renderer)->getPreferredSize());
		baseline = renderer->getBaseline($nc(pref)->width, pref->height);
	}
	return baseline + $nc($($nc(this->tree)->getInsets()))->top;
}

$Component$BaselineResizeBehavior* BasicTreeUI::getBaselineResizeBehavior($JComponent* c) {
	$TreeUI::getBaselineResizeBehavior(c);
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::CONSTANT_ASCENT;
}

void BasicTreeUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	if (!$equals(this->tree, c)) {
		$throwNew($InternalError, "incorrect component"_s);
	}
	if (this->treeState == nullptr) {
		return;
	}
	$var($Rectangle, paintBounds, $nc(g)->getClipBounds());
	$var($Insets, insets, $nc(this->tree)->getInsets());
	$var($TreePath, initialPath, getClosestPathForLocation(this->tree, 0, $nc(paintBounds)->y));
	$var($Enumeration, paintingEnumerator, $nc(this->treeState)->getVisiblePathsFrom(initialPath));
	int32_t row = $nc(this->treeState)->getRowForPath(initialPath);
	int32_t endY = $nc(paintBounds)->y + paintBounds->height;
	$nc(this->drawingCache)->clear();
	if (initialPath != nullptr && paintingEnumerator != nullptr) {
		$var($TreePath, parentPath, initialPath);
		$assign(parentPath, parentPath->getParentPath());
		while (parentPath != nullptr) {
			paintVerticalPartOfLeg(g, paintBounds, insets, parentPath);
			$init($Boolean);
			$nc(this->drawingCache)->put(parentPath, $Boolean::TRUE);
			$assign(parentPath, parentPath->getParentPath());
		}
		bool done = false;
		bool isExpanded = false;
		bool hasBeenExpanded = false;
		bool isLeaf = false;
		$var($Rectangle, boundsBuffer, $new($Rectangle));
		$var($Rectangle, bounds, nullptr);
		$var($TreePath, path, nullptr);
		bool rootVisible = isRootVisible();
		while (!done && paintingEnumerator->hasMoreElements()) {
			$assign(path, $cast($TreePath, paintingEnumerator->nextElement()));
			if (path != nullptr) {
				isLeaf = $nc(this->treeModel)->isLeaf($(path->getLastPathComponent()));
				if (isLeaf) {
					isExpanded = (hasBeenExpanded = false);
				} else {
					isExpanded = $nc(this->treeState)->getExpandedState(path);
					hasBeenExpanded = $nc(this->tree)->hasBeenExpanded(path);
				}
				$assign(bounds, getPathBounds(path, insets, boundsBuffer));
				if (bounds == nullptr) {
					return;
				}
				$assign(parentPath, path->getParentPath());
				if (parentPath != nullptr) {
					if ($nc(this->drawingCache)->get(parentPath) == nullptr) {
						paintVerticalPartOfLeg(g, paintBounds, insets, parentPath);
						$init($Boolean);
						$nc(this->drawingCache)->put(parentPath, $Boolean::TRUE);
					}
					paintHorizontalPartOfLeg(g, paintBounds, insets, bounds, path, row, isExpanded, hasBeenExpanded, isLeaf);
				} else if (rootVisible && row == 0) {
					paintHorizontalPartOfLeg(g, paintBounds, insets, bounds, path, row, isExpanded, hasBeenExpanded, isLeaf);
				}
				if (shouldPaintExpandControl(path, row, isExpanded, hasBeenExpanded, isLeaf)) {
					paintExpandControl(g, paintBounds, insets, bounds, path, row, isExpanded, hasBeenExpanded, isLeaf);
				}
				paintRow(g, paintBounds, insets, bounds, path, row, isExpanded, hasBeenExpanded, isLeaf);
				if (($nc(bounds)->y + bounds->height) >= endY) {
					done = true;
				}
			} else {
				done = true;
			}
			++row;
		}
	}
	paintDropLine(g);
	$nc(this->rendererPane)->removeAll();
	$nc(this->drawingCache)->clear();
}

bool BasicTreeUI::isDropLine($JTree$DropLocation* loc) {
	bool var$0 = loc != nullptr && loc->getPath() != nullptr;
	return var$0 && loc->getChildIndex() != -1;
}

void BasicTreeUI::paintDropLine($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($JTree$DropLocation, loc, $nc(this->tree)->getDropLocation());
	if (!isDropLine(loc)) {
		return;
	}
	$var($Color, c, $UIManager::getColor("Tree.dropLineColor"_s));
	if (c != nullptr) {
		$nc(g)->setColor(c);
		$var($Rectangle, rect, getDropLineRect(loc));
		g->fillRect($nc(rect)->x, rect->y, rect->width, rect->height);
	}
}

$Rectangle* BasicTreeUI::getDropLineRect($JTree$DropLocation* loc) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, rect, nullptr);
	$var($TreePath, path, $nc(loc)->getPath());
	int32_t index = loc->getChildIndex();
	bool ltr = this->leftToRight;
	$var($Insets, insets, $nc(this->tree)->getInsets());
	if ($nc(this->tree)->getRowCount() == 0) {
		$assign(rect, $new($Rectangle, $nc(insets)->left, insets->top, $nc(this->tree)->getWidth() - insets->left - insets->right, 0));
	} else {
		$var($TreeModel, model, getModel());
		$var($Object, root, $nc(model)->getRoot());
		bool var$0 = $equals($nc(path)->getLastPathComponent(), root);
		if (var$0 && index >= model->getChildCount(root)) {
			$assign(rect, $nc(this->tree)->getRowBounds($nc(this->tree)->getRowCount() - 1));
			$nc(rect)->y = rect->y + rect->height;
			$var($Rectangle, xRect, nullptr);
			if (!$nc(this->tree)->isRootVisible()) {
				$assign(xRect, $nc(this->tree)->getRowBounds(0));
			} else if (model->getChildCount(root) == 0) {
				$assign(xRect, $nc(this->tree)->getRowBounds(0));
				$nc(xRect)->x += this->totalChildIndent;
				xRect->width -= this->totalChildIndent + this->totalChildIndent;
			} else {
				$var($TreePath, lastChildPath, path->pathByAddingChild($(model->getChild(root, model->getChildCount(root) - 1))));
				$assign(xRect, $nc(this->tree)->getPathBounds(lastChildPath));
			}
			rect->x = $nc(xRect)->x;
			rect->width = xRect->width;
		} else if (index >= model->getChildCount($(path->getLastPathComponent()))) {
			$assign(rect, $nc(this->tree)->getPathBounds($(path->pathByAddingChild($(model->getChild($(path->getLastPathComponent()), index - 1))))));
			$nc(rect)->y = rect->y + rect->height;
		} else {
			$assign(rect, $nc(this->tree)->getPathBounds($(path->pathByAddingChild($(model->getChild($(path->getLastPathComponent()), index))))));
		}
	}
	if ($nc(rect)->y != 0) {
		--rect->y;
	}
	if (!ltr) {
		$nc(rect)->x = rect->x + rect->width - 100;
	}
	$nc(rect)->width = 100;
	rect->height = 2;
	return rect;
}

void BasicTreeUI::paintHorizontalPartOfLeg($Graphics* g, $Rectangle* clipBounds, $Insets* insets, $Rectangle* bounds, $TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf) {
	$useLocalCurrentObjectStackCache();
	if (!this->paintLines) {
		return;
	}
	int32_t depth = $nc(path)->getPathCount() - 1;
	bool var$0 = (depth == 0 || (depth == 1 && !isRootVisible()));
	if (var$0 && !getShowsRootHandles()) {
		return;
	}
	int32_t clipLeft = $nc(clipBounds)->x;
	int32_t clipRight = clipBounds->x + clipBounds->width;
	int32_t clipTop = clipBounds->y;
	int32_t clipBottom = clipBounds->y + clipBounds->height;
	int32_t lineY = $nc(bounds)->y + bounds->height / 2;
	if (this->leftToRight) {
		int32_t leftX = bounds->x - getRightChildIndent();
		int32_t nodeX = bounds->x - getHorizontalLegBuffer();
		if (lineY >= clipTop && lineY < clipBottom && nodeX >= clipLeft && leftX < clipRight && leftX < nodeX) {
			$nc(g)->setColor($(getHashColor()));
			paintHorizontalLine(g, this->tree, lineY, leftX, nodeX - 1);
		}
	} else {
		int32_t nodeX = bounds->x + bounds->width + getHorizontalLegBuffer();
		int32_t rightX = bounds->x + bounds->width + getRightChildIndent();
		if (lineY >= clipTop && lineY < clipBottom && rightX >= clipLeft && nodeX < clipRight && nodeX < rightX) {
			$nc(g)->setColor($(getHashColor()));
			paintHorizontalLine(g, this->tree, lineY, nodeX, rightX - 1);
		}
	}
}

void BasicTreeUI::paintVerticalPartOfLeg($Graphics* g, $Rectangle* clipBounds, $Insets* insets, $TreePath* path) {
	$useLocalCurrentObjectStackCache();
	if (!this->paintLines) {
		return;
	}
	int32_t depth = $nc(path)->getPathCount() - 1;
	bool var$0 = depth == 0 && !getShowsRootHandles();
	if (var$0 && !isRootVisible()) {
		return;
	}
	int32_t lineX = getRowX(-1, depth + 1);
	if (this->leftToRight) {
		lineX = lineX - getRightChildIndent() + $nc(insets)->left;
	} else {
		int32_t var$1 = $nc(this->tree)->getWidth() - lineX - $nc(insets)->right;
		lineX = var$1 + getRightChildIndent() - 1;
	}
	int32_t clipLeft = $nc(clipBounds)->x;
	int32_t clipRight = clipBounds->x + (clipBounds->width - 1);
	if (lineX >= clipLeft && lineX <= clipRight) {
		int32_t clipTop = clipBounds->y;
		int32_t clipBottom = clipBounds->y + clipBounds->height;
		$var($Rectangle, parentBounds, getPathBounds(this->tree, path));
		$var($Rectangle, lastChildBounds, getPathBounds(this->tree, $(getLastChildPath(path))));
		if (lastChildBounds == nullptr) {
			return;
		}
		int32_t top = 0;
		if (parentBounds == nullptr) {
			top = $Math::max($nc(insets)->top + getVerticalLegBuffer(), clipTop);
		} else {
			top = $Math::max($nc(parentBounds)->y + parentBounds->height + getVerticalLegBuffer(), clipTop);
		}
		if (depth == 0 && !isRootVisible()) {
			$var($TreeModel, model, getModel());
			if (model != nullptr) {
				$var($Object, root, model->getRoot());
				if (model->getChildCount(root) > 0) {
					$assign(parentBounds, getPathBounds(this->tree, $(path->pathByAddingChild($(model->getChild(root, 0))))));
					if (parentBounds != nullptr) {
						top = $Math::max($nc(insets)->top + getVerticalLegBuffer(), parentBounds->y + parentBounds->height / 2);
					}
				}
			}
		}
		int32_t bottom = $Math::min($nc(lastChildBounds)->y + (lastChildBounds->height / 2), clipBottom);
		if (top <= bottom) {
			$nc(g)->setColor($(getHashColor()));
			paintVerticalLine(g, this->tree, lineX, top, bottom);
		}
	}
}

void BasicTreeUI::paintExpandControl($Graphics* g, $Rectangle* clipBounds, $Insets* insets, $Rectangle* bounds, $TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, $nc(path)->getLastPathComponent());
	if (!isLeaf && (!hasBeenExpanded || $nc(this->treeModel)->getChildCount(value) > 0)) {
		int32_t middleXOfKnob = 0;
		if (this->leftToRight) {
			middleXOfKnob = $nc(bounds)->x - getRightChildIndent() + 1;
		} else {
			middleXOfKnob = $nc(bounds)->x + bounds->width + getRightChildIndent() - 1;
		}
		int32_t middleYOfKnob = $nc(bounds)->y + (bounds->height / 2);
		if (isExpanded) {
			$var($Icon, expandedIcon, getExpandedIcon());
			if (expandedIcon != nullptr) {
				drawCentered(this->tree, g, expandedIcon, middleXOfKnob, middleYOfKnob);
			}
		} else {
			$var($Icon, collapsedIcon, getCollapsedIcon());
			if (collapsedIcon != nullptr) {
				drawCentered(this->tree, g, collapsedIcon, middleXOfKnob, middleYOfKnob);
			}
		}
	}
}

void BasicTreeUI::paintRow($Graphics* g, $Rectangle* clipBounds, $Insets* insets, $Rectangle* bounds, $TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf) {
	$useLocalCurrentObjectStackCache();
	if (this->editingComponent != nullptr && this->editingRow == row) {
		return;
	}
	int32_t leadIndex = 0;
	if ($nc(this->tree)->hasFocus()) {
		leadIndex = getLeadSelectionRow();
	} else {
		leadIndex = -1;
	}
	$var($Component, component, nullptr);
	$var($JTree, var$0, this->tree);
	$var($Object, var$1, $nc(path)->getLastPathComponent());
	$assign(component, $nc(this->currentCellRenderer)->getTreeCellRendererComponent(var$0, var$1, $nc(this->tree)->isRowSelected(row), isExpanded, isLeaf, row, (leadIndex == row)));
	$nc(this->rendererPane)->paintComponent(g, component, this->tree, $nc(bounds)->x, bounds->y, bounds->width, bounds->height, true);
}

bool BasicTreeUI::shouldPaintExpandControl($TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf) {
	if (isLeaf) {
		return false;
	}
	int32_t depth = $nc(path)->getPathCount() - 1;
	bool var$0 = (depth == 0 || (depth == 1 && !isRootVisible()));
	if (var$0 && !getShowsRootHandles()) {
		return false;
	}
	return true;
}

void BasicTreeUI::paintVerticalLine($Graphics* g, $JComponent* c, int32_t x, int32_t top, int32_t bottom) {
	if (this->lineTypeDashed) {
		drawDashedVerticalLine(g, x, top, bottom);
	} else {
		$nc(g)->drawLine(x, top, x, bottom);
	}
}

void BasicTreeUI::paintHorizontalLine($Graphics* g, $JComponent* c, int32_t y, int32_t left, int32_t right) {
	if (this->lineTypeDashed) {
		drawDashedHorizontalLine(g, y, left, right);
	} else {
		$nc(g)->drawLine(left, y, right, y);
	}
}

int32_t BasicTreeUI::getVerticalLegBuffer() {
	return 0;
}

int32_t BasicTreeUI::getHorizontalLegBuffer() {
	return 0;
}

int32_t BasicTreeUI::findCenteredX(int32_t x, int32_t iconWidth) {
	return this->leftToRight ? x - $cast(int32_t, $Math::ceil(iconWidth / 2.0)) : x - $cast(int32_t, $Math::floor(iconWidth / 2.0));
}

void BasicTreeUI::drawCentered($Component* c, $Graphics* graphics, $Icon* icon, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($Component, var$0, c);
	$var($Graphics, var$1, graphics);
	int32_t var$2 = findCenteredX(x, icon->getIconWidth());
	$nc(icon)->paintIcon(var$0, var$1, var$2, y - icon->getIconHeight() / 2);
}

void BasicTreeUI::drawDashedHorizontalLine($Graphics* g, int32_t y, int32_t x1, int32_t x2) {
	drawDashedLine(g, y, x1, x2, false);
}

void BasicTreeUI::drawDashedVerticalLine($Graphics* g, int32_t x, int32_t y1, int32_t y2) {
	drawDashedLine(g, x, y1, y2, true);
}

void BasicTreeUI::drawDashedLine($Graphics* g, int32_t v, int32_t v1, int32_t v2, bool isVertical) {
	$useLocalCurrentObjectStackCache();
	if (v1 >= v2) {
		return;
	}
	v1 += (v1 % 2);
	$var($Graphics2D, g2d, $cast($Graphics2D, g));
	$var($Stroke, oldStroke, $nc(g2d)->getStroke());
	$var($BasicStroke, dashedStroke, $new($BasicStroke, (float)1, $BasicStroke::CAP_BUTT, $BasicStroke::JOIN_ROUND, (float)0, $$new($floats, {(float)1}), (float)0));
	g2d->setStroke(dashedStroke);
	if (isVertical) {
		g2d->drawLine(v, v1, v, v2);
	} else {
		g2d->drawLine(v1, v, v2, v);
	}
	g2d->setStroke(oldStroke);
}

int32_t BasicTreeUI::getRowX(int32_t row, int32_t depth) {
	return this->totalChildIndent * (depth + this->depthOffset);
}

void BasicTreeUI::updateLayoutCacheExpandedNodes() {
	$useLocalCurrentObjectStackCache();
	if (this->treeModel != nullptr && $nc(this->treeModel)->getRoot() != nullptr) {
		updateExpandedDescendants($$new($TreePath, $($nc(this->treeModel)->getRoot())));
	}
}

void BasicTreeUI::updateLayoutCacheExpandedNodesIfNecessary() {
	$useLocalCurrentObjectStackCache();
	if (this->treeModel != nullptr && $nc(this->treeModel)->getRoot() != nullptr) {
		$var($TreePath, rootPath, $new($TreePath, $($nc(this->treeModel)->getRoot())));
		if ($nc(this->tree)->isExpanded(rootPath)) {
			updateLayoutCacheExpandedNodes();
		} else {
			$nc(this->treeState)->setExpandedState(rootPath, false);
		}
	}
}

void BasicTreeUI::updateExpandedDescendants($TreePath* path$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($TreePath, path, path$renamed);
	completeEditing();
	if (this->treeState != nullptr) {
		$nc(this->treeState)->setExpandedState(path, true);
		$var($Enumeration, descendants, $nc(this->tree)->getExpandedDescendants(path));
		if (descendants != nullptr) {
			while (descendants->hasMoreElements()) {
				$assign(path, $cast($TreePath, descendants->nextElement()));
				$nc(this->treeState)->setExpandedState(path, true);
			}
		}
		updateLeadSelectionRow();
		updateSize();
	}
}

$TreePath* BasicTreeUI::getLastChildPath($TreePath* parent) {
	$useLocalCurrentObjectStackCache();
	if (this->treeModel != nullptr) {
		int32_t childCount = $nc(this->treeModel)->getChildCount($($nc(parent)->getLastPathComponent()));
		if (childCount > 0) {
			return $nc(parent)->pathByAddingChild($($nc(this->treeModel)->getChild($(parent->getLastPathComponent()), childCount - 1)));
		}
	}
	return nullptr;
}

void BasicTreeUI::updateDepthOffset() {
	if (isRootVisible()) {
		if (getShowsRootHandles()) {
			this->depthOffset = 1;
		} else {
			this->depthOffset = 0;
		}
	} else if (!getShowsRootHandles()) {
		this->depthOffset = -1;
	} else {
		this->depthOffset = 0;
	}
}

void BasicTreeUI::updateCellEditor() {
	$var($TreeCellEditor, newEditor, nullptr);
	completeEditing();
	if (this->tree == nullptr) {
		$assign(newEditor, nullptr);
	} else if ($nc(this->tree)->isEditable()) {
		$assign(newEditor, $nc(this->tree)->getCellEditor());
		if (newEditor == nullptr) {
			$assign(newEditor, createDefaultCellEditor());
			if (newEditor != nullptr) {
				$nc(this->tree)->setCellEditor(newEditor);
				this->createdCellEditor = true;
			}
		}
	} else {
		$assign(newEditor, nullptr);
	}
	if (newEditor != this->cellEditor) {
		if (this->cellEditor != nullptr && this->cellEditorListener != nullptr) {
			$nc(this->cellEditor)->removeCellEditorListener(this->cellEditorListener);
		}
		$set(this, cellEditor, newEditor);
		if (this->cellEditorListener == nullptr) {
			$set(this, cellEditorListener, createCellEditorListener());
		}
		if (newEditor != nullptr && this->cellEditorListener != nullptr) {
			newEditor->addCellEditorListener(this->cellEditorListener);
		}
		this->createdCellEditor = false;
	}
}

void BasicTreeUI::updateRenderer() {
	$useLocalCurrentObjectStackCache();
	if (this->tree != nullptr) {
		$var($TreeCellRenderer, newCellRenderer, nullptr);
		$assign(newCellRenderer, $nc(this->tree)->getCellRenderer());
		if (newCellRenderer == nullptr) {
			$nc(this->tree)->setCellRenderer($(createDefaultCellRenderer()));
			this->createdRenderer = true;
		} else {
			this->createdRenderer = false;
			$set(this, currentCellRenderer, newCellRenderer);
			if (this->createdCellEditor) {
				$nc(this->tree)->setCellEditor(nullptr);
			}
		}
	} else {
		this->createdRenderer = false;
		$set(this, currentCellRenderer, nullptr);
	}
	updateCellEditor();
}

void BasicTreeUI::configureLayoutCache() {
	$useLocalCurrentObjectStackCache();
	if (this->treeState != nullptr && this->tree != nullptr) {
		if (this->nodeDimensions == nullptr) {
			$set(this, nodeDimensions, createNodeDimensions());
		}
		$nc(this->treeState)->setNodeDimensions(this->nodeDimensions);
		$nc(this->treeState)->setRootVisible($nc(this->tree)->isRootVisible());
		$nc(this->treeState)->setRowHeight($nc(this->tree)->getRowHeight());
		$nc(this->treeState)->setSelectionModel($(getSelectionModel()));
		if ($nc(this->treeState)->getModel() != $nc(this->tree)->getModel()) {
			$nc(this->treeState)->setModel($($nc(this->tree)->getModel()));
		}
		updateLayoutCacheExpandedNodesIfNecessary();
		if (isLargeModel()) {
			if (this->componentListener == nullptr) {
				$set(this, componentListener, createComponentListener());
				if (this->componentListener != nullptr) {
					$nc(this->tree)->addComponentListener(this->componentListener);
				}
			}
		} else if (this->componentListener != nullptr) {
			$nc(this->tree)->removeComponentListener(this->componentListener);
			$set(this, componentListener, nullptr);
		}
	} else if (this->componentListener != nullptr) {
		$nc(this->tree)->removeComponentListener(this->componentListener);
		$set(this, componentListener, nullptr);
	}
}

void BasicTreeUI::updateSize() {
	this->validCachedPreferredSize = false;
	$nc(this->tree)->treeDidChange();
}

void BasicTreeUI::updateSize0() {
	this->validCachedPreferredSize = false;
	$nc(this->tree)->revalidate();
}

void BasicTreeUI::updateCachedPreferredSize() {
	$useLocalCurrentObjectStackCache();
	if (this->treeState != nullptr) {
		$var($Insets, i, $nc(this->tree)->getInsets());
		if (isLargeModel()) {
			$var($Rectangle, visRect, $nc(this->tree)->getVisibleRect());
			if ($nc(visRect)->x == 0 && visRect->y == 0 && visRect->width == 0 && visRect->height == 0 && $nc(this->tree)->getVisibleRowCount() > 0) {
				visRect->width = 1;
				int32_t var$0 = $nc(this->tree)->getRowHeight();
				visRect->height = var$0 * $nc(this->tree)->getVisibleRowCount();
			} else {
				visRect->x -= $nc(i)->left;
				visRect->y -= i->top;
			}
			$var($Component, component, $SwingUtilities::getUnwrappedParent(this->tree));
			if ($instanceOf($JViewport, component)) {
				$assign(component, $nc(component)->getParent());
				if ($instanceOf($JScrollPane, component)) {
					$var($JScrollPane, pane, $cast($JScrollPane, component));
					$var($JScrollBar, bar, pane->getHorizontalScrollBar());
					if ((bar != nullptr) && bar->isVisible()) {
						int32_t height = bar->getHeight();
						$nc(visRect)->y -= height;
						visRect->height += height;
					}
				}
			}
			$nc(this->preferredSize)->width = $nc(this->treeState)->getPreferredWidth(visRect);
		} else {
			$nc(this->preferredSize)->width = $nc(this->treeState)->getPreferredWidth(nullptr);
		}
		$nc(this->preferredSize)->height = $nc(this->treeState)->getPreferredHeight();
		$nc(this->preferredSize)->width += $nc(i)->left + i->right;
		$nc(this->preferredSize)->height += i->top + i->bottom;
	}
	this->validCachedPreferredSize = true;
}

void BasicTreeUI::pathWasExpanded($TreePath* path) {
	if (this->tree != nullptr) {
		$nc(this->tree)->fireTreeExpanded(path);
	}
}

void BasicTreeUI::pathWasCollapsed($TreePath* path) {
	if (this->tree != nullptr) {
		$nc(this->tree)->fireTreeCollapsed(path);
	}
}

void BasicTreeUI::ensureRowsAreVisible(int32_t beginRow, int32_t endRow) {
	$useLocalCurrentObjectStackCache();
	if (this->tree != nullptr && beginRow >= 0 && endRow < getRowCount(this->tree)) {
		bool scrollVert = $DefaultLookup::getBoolean(this->tree, this, "Tree.scrollsHorizontallyAndVertically"_s, false);
		if (beginRow == endRow) {
			$var($Rectangle, scrollBounds, getPathBounds(this->tree, $(getPathForRow(this->tree, beginRow))));
			if (scrollBounds != nullptr) {
				if (!scrollVert) {
					scrollBounds->x = $nc($($nc(this->tree)->getVisibleRect()))->x;
					scrollBounds->width = 1;
				}
				$nc(this->tree)->scrollRectToVisible(scrollBounds);
			}
		} else {
			$var($Rectangle, beginRect, getPathBounds(this->tree, $(getPathForRow(this->tree, beginRow))));
			if (beginRect != nullptr) {
				$var($Rectangle, visRect, $nc(this->tree)->getVisibleRect());
				$var($Rectangle, testRect, beginRect);
				int32_t beginY = beginRect->y;
				int32_t maxY = beginY + $nc(visRect)->height;
				for (int32_t counter = beginRow + 1; counter <= endRow; ++counter) {
					$assign(testRect, getPathBounds(this->tree, $(getPathForRow(this->tree, counter))));
					if (testRect == nullptr) {
						return;
					}
					if (($nc(testRect)->y + testRect->height) > maxY) {
						counter = endRow;
					}
				}
				$nc(this->tree)->scrollRectToVisible($$new($Rectangle, visRect->x, beginY, 1, $nc(testRect)->y + testRect->height - beginY));
			}
		}
	}
}

void BasicTreeUI::setPreferredMinSize($Dimension* newSize) {
	$set(this, preferredMinSize, newSize);
}

$Dimension* BasicTreeUI::getPreferredMinSize() {
	if (this->preferredMinSize == nullptr) {
		return nullptr;
	}
	return $new($Dimension, this->preferredMinSize);
}

$Dimension* BasicTreeUI::getPreferredSize($JComponent* c) {
	return getPreferredSize(c, true);
}

$Dimension* BasicTreeUI::getPreferredSize($JComponent* c, bool checkConsistency) {
	$var($Dimension, pSize, this->getPreferredMinSize());
	if (!this->validCachedPreferredSize) {
		updateCachedPreferredSize();
	}
	if (this->tree != nullptr) {
		if (pSize != nullptr) {
			int32_t var$0 = $Math::max(pSize->width, $nc(this->preferredSize)->width);
			return $new($Dimension, var$0, $Math::max(pSize->height, $nc(this->preferredSize)->height));
		}
		return $new($Dimension, $nc(this->preferredSize)->width, $nc(this->preferredSize)->height);
	} else if (pSize != nullptr) {
		return pSize;
	} else {
		return $new($Dimension, 0, 0);
	}
}

$Dimension* BasicTreeUI::getMinimumSize($JComponent* c) {
	if (this->getPreferredMinSize() != nullptr) {
		return this->getPreferredMinSize();
	}
	return $new($Dimension, 0, 0);
}

$Dimension* BasicTreeUI::getMaximumSize($JComponent* c) {
	if (this->tree != nullptr) {
		return getPreferredSize(this->tree);
	}
	if (this->getPreferredMinSize() != nullptr) {
		return this->getPreferredMinSize();
	}
	return $new($Dimension, 0, 0);
}

void BasicTreeUI::completeEditing() {
	if ($nc(this->tree)->getInvokesStopCellEditing() && this->stopEditingInCompleteEditing && this->editingComponent != nullptr) {
		$nc(this->cellEditor)->stopCellEditing();
	}
	completeEditing(false, true, false);
}

void BasicTreeUI::completeEditing(bool messageStop, bool messageCancel, bool messageTree) {
	$useLocalCurrentObjectStackCache();
	if (this->stopEditingInCompleteEditing && this->editingComponent != nullptr) {
		$var($Component, oldComponent, this->editingComponent);
		$var($TreePath, oldPath, this->editingPath);
		$var($TreeCellEditor, oldEditor, this->cellEditor);
		$var($Object, newValue, $nc(oldEditor)->getCellEditorValue());
		$var($Rectangle, editingBounds, getPathBounds(this->tree, this->editingPath));
		bool var$0 = this->tree != nullptr;
		if (var$0) {
			bool var$1 = $nc(this->tree)->hasFocus();
			var$0 = (var$1 || $SwingUtilities::findFocusOwner(this->editingComponent) != nullptr);
		}
		bool requestFocus = (var$0);
		$set(this, editingComponent, nullptr);
		$set(this, editingPath, nullptr);
		if (messageStop) {
			oldEditor->stopCellEditing();
		} else if (messageCancel) {
			oldEditor->cancelCellEditing();
		}
		$nc(this->tree)->remove(oldComponent);
		if (this->editorHasDifferentSize) {
			$nc(this->treeState)->invalidatePathBounds(oldPath);
			updateSize();
		} else if (editingBounds != nullptr) {
			editingBounds->x = 0;
			editingBounds->width = $nc($($nc(this->tree)->getSize()))->width;
			$nc(this->tree)->repaint(editingBounds);
		}
		if (requestFocus) {
			$nc(this->tree)->requestFocus();
		}
		if (messageTree) {
			$nc(this->treeModel)->valueForPathChanged(oldPath, newValue);
		}
	}
}

bool BasicTreeUI::startEditingOnRelease($TreePath* path, $MouseEvent* event, $MouseEvent* releaseEvent) {
	$set(this, releaseEvent, releaseEvent);
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = startEditing(path, event);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, releaseEvent, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool BasicTreeUI::startEditing($TreePath* path, $MouseEvent* event) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = isEditing(this->tree);
	bool var$0 = var$1 && $nc(this->tree)->getInvokesStopCellEditing();
	if (var$0 && !stopEditing(this->tree)) {
		return false;
	}
	completeEditing();
	if (this->cellEditor != nullptr && $nc(this->tree)->isPathEditable(path)) {
		int32_t row = getRowForPath(this->tree, path);
		if ($nc(this->cellEditor)->isCellEditable(event)) {
			$var($JTree, var$2, this->tree);
			$var($Object, var$3, $nc(path)->getLastPathComponent());
			bool var$4 = $nc(this->tree)->isPathSelected(path);
			bool var$5 = $nc(this->tree)->isExpanded(path);
			$set(this, editingComponent, $nc(this->cellEditor)->getTreeCellEditorComponent(var$2, var$3, var$4, var$5, $nc(this->treeModel)->isLeaf($(path->getLastPathComponent())), row));
			$var($Rectangle, nodeBounds, getPathBounds(this->tree, path));
			if (nodeBounds == nullptr) {
				return false;
			}
			this->editingRow = row;
			$var($Dimension, editorSize, $nc(this->editingComponent)->getPreferredSize());
			if ($nc(editorSize)->height != $nc(nodeBounds)->height && getRowHeight() > 0) {
				editorSize->height = getRowHeight();
			}
			if ($nc(editorSize)->width != $nc(nodeBounds)->width || $nc(editorSize)->height != $nc(nodeBounds)->height) {
				this->editorHasDifferentSize = true;
				$nc(this->treeState)->invalidatePathBounds(path);
				updateSize();
				$assign(nodeBounds, getPathBounds(this->tree, path));
				if (nodeBounds == nullptr) {
					return false;
				}
			} else {
				this->editorHasDifferentSize = false;
			}
			$nc(this->tree)->add(this->editingComponent);
			$nc(this->editingComponent)->setBounds($nc(nodeBounds)->x, nodeBounds->y, nodeBounds->width, nodeBounds->height);
			$set(this, editingPath, path);
			$nc($($AWTAccessor::getComponentAccessor()))->revalidateSynchronously(this->editingComponent);
			$nc(this->editingComponent)->repaint();
			if ($nc(this->cellEditor)->shouldSelectCell(event)) {
				this->stopEditingInCompleteEditing = false;
				$nc(this->tree)->setSelectionRow(row);
				this->stopEditingInCompleteEditing = true;
			}
			$var($Component, focusedComponent, $SwingUtilities2::compositeRequestFocus(this->editingComponent));
			bool selectAll = true;
			if (event != nullptr) {
				int32_t var$6 = event->getX();
				$var($Point, componentPoint, $SwingUtilities::convertPoint(this->tree, $$new($Point, var$6, event->getY()), this->editingComponent));
				$var($Component, activeComponent, $SwingUtilities::getDeepestComponentAt(this->editingComponent, $nc(componentPoint)->x, componentPoint->y));
				if (activeComponent != nullptr) {
					$var($BasicTreeUI$MouseInputHandler, handler, $new($BasicTreeUI$MouseInputHandler, this, this->tree, activeComponent, event, focusedComponent));
					if (this->releaseEvent != nullptr) {
						handler->mouseReleased(this->releaseEvent);
					}
					selectAll = false;
				}
			}
			if (selectAll && $instanceOf($JTextField, focusedComponent)) {
				$nc(($cast($JTextField, focusedComponent)))->selectAll();
			}
			return true;
		} else {
			$set(this, editingComponent, nullptr);
		}
	}
	return false;
}

void BasicTreeUI::checkForClickInExpandControl($TreePath* path, int32_t mouseX, int32_t mouseY) {
	if (isLocationInExpandControl(path, mouseX, mouseY)) {
		handleExpandControlClick(path, mouseX, mouseY);
	}
}

bool BasicTreeUI::isLocationInExpandControl($TreePath* path, int32_t mouseX, int32_t mouseY) {
	$useLocalCurrentObjectStackCache();
	if (path != nullptr && !$nc(this->treeModel)->isLeaf($(path->getLastPathComponent()))) {
		int32_t boxWidth = 0;
		$var($Insets, i, $nc(this->tree)->getInsets());
		if (getExpandedIcon() != nullptr) {
			boxWidth = $nc($(getExpandedIcon()))->getIconWidth();
		} else {
			boxWidth = 8;
		}
		int32_t var$0 = $nc(this->tree)->getRowForPath(path);
		int32_t boxLeftX = getRowX(var$0, path->getPathCount() - 1);
		if (this->leftToRight) {
			boxLeftX = boxLeftX + $nc(i)->left - getRightChildIndent() + 1;
		} else {
			int32_t var$1 = $nc(this->tree)->getWidth() - boxLeftX - $nc(i)->right;
			boxLeftX = var$1 + getRightChildIndent() - 1;
		}
		boxLeftX = findCenteredX(boxLeftX, boxWidth);
		return (mouseX >= boxLeftX && mouseX < (boxLeftX + boxWidth));
	}
	return false;
}

void BasicTreeUI::handleExpandControlClick($TreePath* path, int32_t mouseX, int32_t mouseY) {
	toggleExpandState(path);
}

void BasicTreeUI::toggleExpandState($TreePath* path) {
	if (!$nc(this->tree)->isExpanded(path)) {
		int32_t row = getRowForPath(this->tree, path);
		$nc(this->tree)->expandPath(path);
		updateSize();
		if (row != -1) {
			if ($nc(this->tree)->getScrollsOnExpand()) {
				ensureRowsAreVisible(row, row + $nc(this->treeState)->getVisibleChildCount(path));
			} else {
				ensureRowsAreVisible(row, row);
			}
		}
	} else {
		$nc(this->tree)->collapsePath(path);
		updateSize();
	}
}

bool BasicTreeUI::isToggleSelectionEvent($MouseEvent* event) {
	bool var$0 = $SwingUtilities::isLeftMouseButton(event);
	return (var$0 && $BasicGraphicsUtils::isMenuShortcutKeyDown(event));
}

bool BasicTreeUI::isMultiSelectEvent($MouseEvent* event) {
	bool var$0 = $SwingUtilities::isLeftMouseButton(event);
	return (var$0 && $nc(event)->isShiftDown());
}

bool BasicTreeUI::isToggleEvent($MouseEvent* event) {
	if (!$SwingUtilities::isLeftMouseButton(event)) {
		return false;
	}
	int32_t clickCount = $nc(this->tree)->getToggleClickCount();
	if (clickCount <= 0) {
		return false;
	}
	return (($mod($nc(event)->getClickCount(), clickCount)) == 0);
}

void BasicTreeUI::selectPathForEvent($TreePath* path, $MouseEvent* event) {
	$useLocalCurrentObjectStackCache();
	if (isMultiSelectEvent(event)) {
		$var($TreePath, anchor, getAnchorSelectionPath());
		int32_t anchorRow = (anchor == nullptr) ? -1 : getRowForPath(this->tree, anchor);
		if (anchorRow == -1 || $nc($($nc(this->tree)->getSelectionModel()))->getSelectionMode() == $TreeSelectionModel::SINGLE_TREE_SELECTION) {
			$nc(this->tree)->setSelectionPath(path);
		} else {
			int32_t row = getRowForPath(this->tree, path);
			$var($TreePath, lastAnchorPath, anchor);
			if (isToggleSelectionEvent(event)) {
				if ($nc(this->tree)->isRowSelected(anchorRow)) {
					$nc(this->tree)->addSelectionInterval(anchorRow, row);
				} else {
					$nc(this->tree)->removeSelectionInterval(anchorRow, row);
					$nc(this->tree)->addSelectionInterval(row, row);
				}
			} else if (row < anchorRow) {
				$nc(this->tree)->setSelectionInterval(row, anchorRow);
			} else {
				$nc(this->tree)->setSelectionInterval(anchorRow, row);
			}
			this->lastSelectedRow = row;
			setAnchorSelectionPath(lastAnchorPath);
			setLeadSelectionPath(path);
		}
	} else if (isToggleSelectionEvent(event)) {
		if ($nc(this->tree)->isPathSelected(path)) {
			$nc(this->tree)->removeSelectionPath(path);
		} else {
			$nc(this->tree)->addSelectionPath(path);
		}
		this->lastSelectedRow = getRowForPath(this->tree, path);
		setAnchorSelectionPath(path);
		setLeadSelectionPath(path);
	} else if ($SwingUtilities::isLeftMouseButton(event)) {
		$nc(this->tree)->setSelectionPath(path);
		if (isToggleEvent(event)) {
			toggleExpandState(path);
		}
	}
}

bool BasicTreeUI::isLeaf(int32_t row) {
	$useLocalCurrentObjectStackCache();
	$var($TreePath, path, getPathForRow(this->tree, row));
	if (path != nullptr) {
		return $nc(this->treeModel)->isLeaf($(path->getLastPathComponent()));
	}
	return true;
}

void BasicTreeUI::setAnchorSelectionPath($TreePath* newPath) {
	this->ignoreLAChange = true;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->tree)->setAnchorSelectionPath(newPath);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->ignoreLAChange = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$TreePath* BasicTreeUI::getAnchorSelectionPath() {
	return $nc(this->tree)->getAnchorSelectionPath();
}

void BasicTreeUI::setLeadSelectionPath($TreePath* newPath) {
	setLeadSelectionPath(newPath, false);
}

void BasicTreeUI::setLeadSelectionPath($TreePath* newPath, bool repaint) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, bounds, repaint ? getPathBounds(this->tree, $(getLeadSelectionPath())) : ($Rectangle*)nullptr);
	this->ignoreLAChange = true;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->tree)->setLeadSelectionPath(newPath);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->ignoreLAChange = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	this->leadRow = getRowForPath(this->tree, newPath);
	if (repaint) {
		if (bounds != nullptr) {
			$nc(this->tree)->repaint($(getRepaintPathBounds(bounds)));
		}
		$assign(bounds, getPathBounds(this->tree, newPath));
		if (bounds != nullptr) {
			$nc(this->tree)->repaint($(getRepaintPathBounds(bounds)));
		}
	}
}

$Rectangle* BasicTreeUI::getRepaintPathBounds($Rectangle* bounds) {
	if ($UIManager::getBoolean("Tree.repaintWholeRow"_s)) {
		$nc(bounds)->x = 0;
		bounds->width = $nc(this->tree)->getWidth();
	}
	return bounds;
}

$TreePath* BasicTreeUI::getLeadSelectionPath() {
	return $nc(this->tree)->getLeadSelectionPath();
}

void BasicTreeUI::updateLeadSelectionRow() {
	this->leadRow = getRowForPath(this->tree, $(getLeadSelectionPath()));
}

int32_t BasicTreeUI::getLeadSelectionRow() {
	return this->leadRow;
}

void BasicTreeUI::extendSelection($TreePath* newLead) {
	$var($TreePath, aPath, getAnchorSelectionPath());
	int32_t aRow = (aPath == nullptr) ? -1 : getRowForPath(this->tree, aPath);
	int32_t newIndex = getRowForPath(this->tree, newLead);
	if (aRow == -1) {
		$nc(this->tree)->setSelectionRow(newIndex);
	} else {
		if (aRow < newIndex) {
			$nc(this->tree)->setSelectionInterval(aRow, newIndex);
		} else {
			$nc(this->tree)->setSelectionInterval(newIndex, aRow);
		}
		setAnchorSelectionPath(aPath);
		setLeadSelectionPath(newLead);
	}
}

void BasicTreeUI::repaintPath($TreePath* path) {
	if (path != nullptr) {
		$var($Rectangle, bounds, getPathBounds(this->tree, path));
		if (bounds != nullptr) {
			$nc(this->tree)->repaint(bounds->x, bounds->y, bounds->width, bounds->height);
		}
	}
}

void clinit$BasicTreeUI($Class* class$) {
	$assignStatic(BasicTreeUI::BASELINE_COMPONENT_KEY, $new($StringBuilder, "Tree.baselineComponent"_s));
	$assignStatic(BasicTreeUI::SHARED_ACTION, $new($BasicTreeUI$Actions));
	$assignStatic(BasicTreeUI::defaultTransferHandler, $new($BasicTreeUI$TreeTransferHandler));
}

BasicTreeUI::BasicTreeUI() {
}

$Class* BasicTreeUI::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI, name, initialize, &_BasicTreeUI_ClassInfo_, clinit$BasicTreeUI, allocate$BasicTreeUI);
	return class$;
}

$Class* BasicTreeUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax