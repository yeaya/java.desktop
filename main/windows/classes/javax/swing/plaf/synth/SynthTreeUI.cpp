#include <javax/swing/plaf/synth/SynthTreeUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Math.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree$DropLocation.h>
#include <javax/swing/JTree.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TreeUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthIcon.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthTreeUI$ExpandedIconWrapper.h>
#include <javax/swing/plaf/synth/SynthTreeUI$SynthTreeCellEditor.h>
#include <javax/swing/plaf/synth/SynthTreeUI$SynthTreeCellRenderer.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <javax/swing/tree/AbstractLayoutCache.h>
#include <javax/swing/tree/DefaultTreeCellEditor.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <javax/swing/tree/TreeCellEditor.h>
#include <javax/swing/tree/TreeCellRenderer.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreePath.h>
#include <javax/swing/tree/TreeSelectionModel.h>
#include <jcpp.h>

#undef ENABLED
#undef FOCUS
#undef FOCUSED
#undef FOREGROUND
#undef SELECTED
#undef SHOWS_ROOT_HANDLES_PROPERTY
#undef TEXT_BACKGROUND
#undef TEXT_FOREGROUND
#undef TREE_CELL
#undef TRUE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $EventObject = ::java::util::EventObject;
using $Hashtable = ::java::util::Hashtable;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JTree = ::javax::swing::JTree;
using $JTree$DropLocation = ::javax::swing::JTree$DropLocation;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $TransferHandler = ::javax::swing::TransferHandler;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TreeUI = ::javax::swing::plaf::TreeUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthIcon = ::javax::swing::plaf::synth::SynthIcon;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthTreeUI$ExpandedIconWrapper = ::javax::swing::plaf::synth::SynthTreeUI$ExpandedIconWrapper;
using $SynthTreeUI$SynthTreeCellEditor = ::javax::swing::plaf::synth::SynthTreeUI$SynthTreeCellEditor;
using $SynthTreeUI$SynthTreeCellRenderer = ::javax::swing::plaf::synth::SynthTreeUI$SynthTreeCellRenderer;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $AbstractLayoutCache = ::javax::swing::tree::AbstractLayoutCache;
using $DefaultTreeCellEditor = ::javax::swing::tree::DefaultTreeCellEditor;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;
using $TreeCellEditor = ::javax::swing::tree::TreeCellEditor;
using $TreeCellRenderer = ::javax::swing::tree::TreeCellRenderer;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreePath = ::javax::swing::tree::TreePath;
using $TreeSelectionModel = ::javax::swing::tree::TreeSelectionModel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTreeUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthTreeUI, style)},
	{"cellStyle", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthTreeUI, cellStyle)},
	{"paintContext", "Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $field(SynthTreeUI, paintContext)},
	{"drawHorizontalLines", "Z", nullptr, $PRIVATE, $field(SynthTreeUI, drawHorizontalLines)},
	{"drawVerticalLines", "Z", nullptr, $PRIVATE, $field(SynthTreeUI, drawVerticalLines)},
	{"linesStyle", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(SynthTreeUI, linesStyle)},
	{"padding", "I", nullptr, $PRIVATE, $field(SynthTreeUI, padding)},
	{"useTreeColors", "Z", nullptr, $PRIVATE, $field(SynthTreeUI, useTreeColors)},
	{"expandedIconWrapper", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(SynthTreeUI, expandedIconWrapper)},
	{}
};

$MethodInfo _SynthTreeUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthTreeUI::*)()>(&SynthTreeUI::init$))},
	{"access$000", "(Ljavax/swing/plaf/synth/SynthTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(SynthTreeUI*)>(&SynthTreeUI::access$000))},
	{"access$100", "(Ljavax/swing/plaf/synth/SynthTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(SynthTreeUI*)>(&SynthTreeUI::access$100))},
	{"access$200", "(Ljavax/swing/plaf/synth/SynthTreeUI;)Ljavax/swing/Icon;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Icon*(*)(SynthTreeUI*)>(&SynthTreeUI::access$200))},
	{"access$300", "(Ljavax/swing/plaf/synth/SynthTreeUI;)Ljavax/swing/Icon;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Icon*(*)(SynthTreeUI*)>(&SynthTreeUI::access$300))},
	{"access$400", "(Ljavax/swing/plaf/synth/SynthTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(SynthTreeUI*)>(&SynthTreeUI::access$400))},
	{"access$500", "(Ljavax/swing/plaf/synth/SynthTreeUI;)Ljavax/swing/Icon;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Icon*(*)(SynthTreeUI*)>(&SynthTreeUI::access$500))},
	{"access$600", "(Ljavax/swing/plaf/synth/SynthTreeUI;)Ljavax/swing/Icon;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Icon*(*)(SynthTreeUI*)>(&SynthTreeUI::access$600))},
	{"access$700", "(Ljavax/swing/plaf/synth/SynthTreeUI;)Ljavax/swing/JTree;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTree*(*)(SynthTreeUI*)>(&SynthTreeUI::access$700))},
	{"access$800", "(Ljavax/swing/plaf/synth/SynthTreeUI;)Ljavax/swing/Icon;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Icon*(*)(SynthTreeUI*)>(&SynthTreeUI::access$800))},
	{"access$900", "(Ljavax/swing/plaf/synth/SynthTreeUI;)Ljavax/swing/Icon;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Icon*(*)(SynthTreeUI*)>(&SynthTreeUI::access$900))},
	{"configureRenderer", "(Ljavax/swing/plaf/synth/SynthContext;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTreeUI::*)($SynthContext*)>(&SynthTreeUI::configureRenderer))},
	{"createDefaultCellEditor", "()Ljavax/swing/tree/TreeCellEditor;", nullptr, $PROTECTED},
	{"createDefaultCellRenderer", "()Ljavax/swing/tree/TreeCellRenderer;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthTreeUI::createUI))},
	{"drawCentered", "(Ljava/awt/Component;Ljava/awt/Graphics;Ljavax/swing/Icon;II)V", nullptr, $PROTECTED},
	{"findCenteredX", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthTreeUI::*)(int32_t,int32_t)>(&SynthTreeUI::findCenteredX))},
	{"getComponentState", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthTreeUI::*)($JComponent*,$Region*)>(&SynthTreeUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthTreeUI::*)($JComponent*,int32_t)>(&SynthTreeUI::getContext))},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthTreeUI::*)($JComponent*,$Region*)>(&SynthTreeUI::getContext))},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthTreeUI::*)($JComponent*,$Region*,int32_t)>(&SynthTreeUI::getContext))},
	{"getExpandedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getRowX", "(II)I", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintDropLine", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintExpandControl", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Insets;Ljava/awt/Rectangle;Ljavax/swing/tree/TreePath;IZZZ)V", nullptr, $PROTECTED},
	{"paintHorizontalLine", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;III)V", nullptr, $PROTECTED},
	{"paintHorizontalPartOfLeg", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Insets;Ljava/awt/Rectangle;Ljavax/swing/tree/TreePath;IZZZ)V", nullptr, $PROTECTED},
	{"paintRow", "(Ljavax/swing/tree/TreeCellRenderer;Ljavax/swing/tree/DefaultTreeCellRenderer;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Insets;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljavax/swing/tree/TreePath;IZZZ)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTreeUI::*)($TreeCellRenderer*,$DefaultTreeCellRenderer*,$SynthContext*,$SynthContext*,$Graphics*,$Rectangle*,$Insets*,$Rectangle*,$Rectangle*,$TreePath*,int32_t,bool,bool,bool)>(&SynthTreeUI::paintRow))},
	{"paintVerticalLine", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;III)V", nullptr, $PROTECTED},
	{"paintVerticalPartOfLeg", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Insets;Ljavax/swing/tree/TreePath;)V", nullptr, $PROTECTED},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"repaintDropLocation", "(Ljavax/swing/JTree$DropLocation;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTreeUI::*)($JTree$DropLocation*)>(&SynthTreeUI::repaintDropLocation))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JTree;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTreeUI::*)($JTree*)>(&SynthTreeUI::updateStyle))},
	{}
};

$InnerClassInfo _SynthTreeUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTreeUI$ExpandedIconWrapper", "javax.swing.plaf.synth.SynthTreeUI", "ExpandedIconWrapper", $PRIVATE},
	{"javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellEditor", "javax.swing.plaf.synth.SynthTreeUI", "SynthTreeCellEditor", $PRIVATE | $STATIC},
	{"javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellRenderer", "javax.swing.plaf.synth.SynthTreeUI", "SynthTreeCellRenderer", $PRIVATE},
	{}
};

$ClassInfo _SynthTreeUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthTreeUI",
	"javax.swing.plaf.basic.BasicTreeUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthTreeUI_FieldInfo_,
	_SynthTreeUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthTreeUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTreeUI$ExpandedIconWrapper,javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellEditor,javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellEditor$1,javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellRenderer"
};

$Object* allocate$SynthTreeUI($Class* clazz) {
	return $of($alloc(SynthTreeUI));
}

int32_t SynthTreeUI::hashCode() {
	 return this->$BasicTreeUI::hashCode();
}

bool SynthTreeUI::equals(Object$* arg0) {
	 return this->$BasicTreeUI::equals(arg0);
}

$Object* SynthTreeUI::clone() {
	 return this->$BasicTreeUI::clone();
}

$String* SynthTreeUI::toString() {
	 return this->$BasicTreeUI::toString();
}

void SynthTreeUI::finalize() {
	this->$BasicTreeUI::finalize();
}

$Icon* SynthTreeUI::access$900(SynthTreeUI* x0) {
	$init(SynthTreeUI);
	return $nc(x0)->expandedIcon;
}

$Icon* SynthTreeUI::access$800(SynthTreeUI* x0) {
	$init(SynthTreeUI);
	return $nc(x0)->expandedIcon;
}

$JTree* SynthTreeUI::access$700(SynthTreeUI* x0) {
	$init(SynthTreeUI);
	return $nc(x0)->tree;
}

$Icon* SynthTreeUI::access$600(SynthTreeUI* x0) {
	$init(SynthTreeUI);
	return $nc(x0)->expandedIcon;
}

$Icon* SynthTreeUI::access$500(SynthTreeUI* x0) {
	$init(SynthTreeUI);
	return $nc(x0)->expandedIcon;
}

$JTree* SynthTreeUI::access$400(SynthTreeUI* x0) {
	$init(SynthTreeUI);
	return $nc(x0)->tree;
}

$Icon* SynthTreeUI::access$300(SynthTreeUI* x0) {
	$init(SynthTreeUI);
	return $nc(x0)->expandedIcon;
}

$Icon* SynthTreeUI::access$200(SynthTreeUI* x0) {
	$init(SynthTreeUI);
	return $nc(x0)->expandedIcon;
}

$JTree* SynthTreeUI::access$100(SynthTreeUI* x0) {
	$init(SynthTreeUI);
	return $nc(x0)->tree;
}

$JTree* SynthTreeUI::access$000(SynthTreeUI* x0) {
	$init(SynthTreeUI);
	return $nc(x0)->tree;
}

void SynthTreeUI::init$() {
	$BasicTreeUI::init$();
	$set(this, expandedIconWrapper, $new($SynthTreeUI$ExpandedIconWrapper, this));
}

$ComponentUI* SynthTreeUI::createUI($JComponent* x) {
	$init(SynthTreeUI);
	return $new(SynthTreeUI);
}

$Icon* SynthTreeUI::getExpandedIcon() {
	return this->expandedIconWrapper;
}

void SynthTreeUI::installDefaults() {
	updateStyle(this->tree);
}

void SynthTreeUI::updateStyle($JTree* tree) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(static_cast<$JComponent*>(tree), $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		$var($Object, value, nullptr);
		setExpandedIcon($($nc(this->style)->getIcon(context, "Tree.expandedIcon"_s)));
		setCollapsedIcon($($nc(this->style)->getIcon(context, "Tree.collapsedIcon"_s)));
		setLeftChildIndent($nc(this->style)->getInt(context, "Tree.leftChildIndent"_s, 0));
		setRightChildIndent($nc(this->style)->getInt(context, "Tree.rightChildIndent"_s, 0));
		this->drawHorizontalLines = $nc(this->style)->getBoolean(context, "Tree.drawHorizontalLines"_s, true);
		this->drawVerticalLines = $nc(this->style)->getBoolean(context, "Tree.drawVerticalLines"_s, true);
		$set(this, linesStyle, $nc(this->style)->get(context, "Tree.linesStyle"_s));
		$assign(value, $nc(this->style)->get(context, "Tree.rowHeight"_s));
		if (value != nullptr) {
			$LookAndFeel::installProperty(tree, "rowHeight"_s, value);
		}
		$assign(value, $nc(this->style)->get(context, "Tree.scrollsOnExpand"_s));
		$init($Boolean);
		$LookAndFeel::installProperty(tree, "scrollsOnExpand"_s, value != nullptr ? value : $of($Boolean::TRUE));
		this->padding = $nc(this->style)->getInt(context, "Tree.padding"_s, 0);
		bool var$0 = $nc(tree)->isLargeModel();
		this->largeModel = (var$0 && tree->getRowHeight() > 0);
		this->useTreeColors = $nc(this->style)->getBoolean(context, "Tree.rendererUseTreeColors"_s, true);
		$var($Boolean, showsRootHandles, $Boolean::valueOf($nc(this->style)->getBoolean(context, "Tree.showsRootHandles"_s, $nc($Boolean::TRUE)->booleanValue())));
		$LookAndFeel::installProperty(tree, $JTree::SHOWS_ROOT_HANDLES_PROPERTY, showsRootHandles);
		if (oldStyle != nullptr) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
	$init($Region);
	$assign(context, getContext(tree, $Region::TREE_CELL, $SynthConstants::ENABLED));
	$set(this, cellStyle, $SynthLookAndFeel::updateStyle(context, this));
}

void SynthTreeUI::installListeners() {
	$BasicTreeUI::installListeners();
	$nc(this->tree)->addPropertyChangeListener(this);
}

$SynthContext* SynthTreeUI::getContext($JComponent* c) {
	return getContext(c, $SynthLookAndFeel::getComponentState(c));
}

$SynthContext* SynthTreeUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

$SynthContext* SynthTreeUI::getContext($JComponent* c, $Region* region) {
	return getContext(c, region, getComponentState(c, region));
}

$SynthContext* SynthTreeUI::getContext($JComponent* c, $Region* region, int32_t state) {
	return $SynthContext::getContext(c, region, this->cellStyle, state);
}

int32_t SynthTreeUI::getComponentState($JComponent* c, $Region* region) {
	return $SynthConstants::ENABLED | $SynthConstants::SELECTED;
}

$TreeCellEditor* SynthTreeUI::createDefaultCellEditor() {
	$useLocalCurrentObjectStackCache();
	$var($TreeCellRenderer, renderer, $nc(this->tree)->getCellRenderer());
	$var($DefaultTreeCellEditor, editor, nullptr);
	if (renderer != nullptr && ($instanceOf($DefaultTreeCellRenderer, renderer))) {
		$assign(editor, $new($SynthTreeUI$SynthTreeCellEditor, this->tree, $cast($DefaultTreeCellRenderer, renderer)));
	} else {
		$assign(editor, $new($SynthTreeUI$SynthTreeCellEditor, this->tree, nullptr));
	}
	return editor;
}

$TreeCellRenderer* SynthTreeUI::createDefaultCellRenderer() {
	return $new($SynthTreeUI$SynthTreeCellRenderer, this);
}

void SynthTreeUI::uninstallDefaults() {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(static_cast<$JComponent*>(this->tree), $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	$init($Region);
	$assign(context, getContext(this->tree, $Region::TREE_CELL, $SynthConstants::ENABLED));
	$nc(this->cellStyle)->uninstallDefaults(context);
	$set(this, cellStyle, nullptr);
	if ($instanceOf($UIResource, $($nc(this->tree)->getTransferHandler()))) {
		$nc(this->tree)->setTransferHandler(nullptr);
	}
}

void SynthTreeUI::uninstallListeners() {
	$BasicTreeUI::uninstallListeners();
	$nc(this->tree)->removePropertyChangeListener(this);
}

void SynthTreeUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintTreeBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthTreeUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintTreeBorder(context, g, x, y, w, h);
}

void SynthTreeUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthTreeUI::paint($SynthContext* context, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, paintContext, context);
	updateLeadSelectionRow();
	$var($Rectangle, paintBounds, $nc(g)->getClipBounds());
	$var($Insets, insets, $nc(this->tree)->getInsets());
	$var($TreePath, initialPath, getClosestPathForLocation(this->tree, 0, $nc(paintBounds)->y));
	$var($Enumeration, paintingEnumerator, $nc(this->treeState)->getVisiblePathsFrom(initialPath));
	int32_t row = $nc(this->treeState)->getRowForPath(initialPath);
	int32_t endY = $nc(paintBounds)->y + paintBounds->height;
	$var($TreeModel, treeModel, $nc(this->tree)->getModel());
	$init($Region);
	$var($SynthContext, cellContext, getContext(static_cast<$JComponent*>(this->tree), $Region::TREE_CELL));
	$nc(this->drawingCache)->clear();
	$init($ColorType);
	setHashColor($($nc($($nc(context)->getStyle()))->getColor(context, $ColorType::FOREGROUND)));
	if (paintingEnumerator != nullptr) {
		bool done = false;
		bool isExpanded = false;
		bool hasBeenExpanded = false;
		bool isLeaf = false;
		$var($Rectangle, rowBounds, $new($Rectangle, 0, 0, $nc(this->tree)->getWidth(), 0));
		$var($Rectangle, bounds, nullptr);
		$var($TreePath, path, nullptr);
		$var($TreeCellRenderer, renderer, $nc(this->tree)->getCellRenderer());
		$var($DefaultTreeCellRenderer, dtcr, ($instanceOf($DefaultTreeCellRenderer, renderer)) ? $cast($DefaultTreeCellRenderer, renderer) : ($DefaultTreeCellRenderer*)nullptr);
		configureRenderer(cellContext);
		while (!done && paintingEnumerator->hasMoreElements()) {
			$assign(path, $cast($TreePath, paintingEnumerator->nextElement()));
			$assign(bounds, getPathBounds(this->tree, path));
			if ((path != nullptr) && (bounds != nullptr)) {
				isLeaf = $nc(treeModel)->isLeaf($(path->getLastPathComponent()));
				if (isLeaf) {
					isExpanded = (hasBeenExpanded = false);
				} else {
					isExpanded = $nc(this->treeState)->getExpandedState(path);
					hasBeenExpanded = $nc(this->tree)->hasBeenExpanded(path);
				}
				rowBounds->y = bounds->y;
				rowBounds->height = bounds->height;
				paintRow(renderer, dtcr, context, cellContext, g, paintBounds, insets, bounds, rowBounds, path, row, isExpanded, hasBeenExpanded, isLeaf);
				if ((bounds->y + bounds->height) >= endY) {
					done = true;
				}
			} else {
				done = true;
			}
			++row;
		}
		bool rootVisible = $nc(this->tree)->isRootVisible();
		$var($TreePath, parentPath, initialPath);
		$assign(parentPath, $nc(parentPath)->getParentPath());
		while (parentPath != nullptr) {
			paintVerticalPartOfLeg(g, paintBounds, insets, parentPath);
			$init($Boolean);
			$nc(this->drawingCache)->put(parentPath, $Boolean::TRUE);
			$assign(parentPath, parentPath->getParentPath());
		}
		done = false;
		$assign(paintingEnumerator, $nc(this->treeState)->getVisiblePathsFrom(initialPath));
		while (!done && $nc(paintingEnumerator)->hasMoreElements()) {
			$assign(path, $cast($TreePath, paintingEnumerator->nextElement()));
			$assign(bounds, getPathBounds(this->tree, path));
			if ((path != nullptr) && (bounds != nullptr)) {
				isLeaf = $nc(treeModel)->isLeaf($(path->getLastPathComponent()));
				if (isLeaf) {
					isExpanded = (hasBeenExpanded = false);
				} else {
					isExpanded = $nc(this->treeState)->getExpandedState(path);
					hasBeenExpanded = $nc(this->tree)->hasBeenExpanded(path);
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
				if ((bounds->y + bounds->height) >= endY) {
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
	$set(this, paintContext, nullptr);
}

void SynthTreeUI::configureRenderer($SynthContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($TreeCellRenderer, renderer, $nc(this->tree)->getCellRenderer());
	if ($instanceOf($DefaultTreeCellRenderer, renderer)) {
		$var($DefaultTreeCellRenderer, r, $cast($DefaultTreeCellRenderer, renderer));
		$var($SynthStyle, style, $nc(context)->getStyle());
		context->setComponentState($SynthConstants::ENABLED | $SynthConstants::SELECTED);
		$var($Color, color, $nc(r)->getTextSelectionColor());
		if (color == nullptr || ($instanceOf($UIResource, color))) {
			$init($ColorType);
			r->setTextSelectionColor($($nc(style)->getColor(context, $ColorType::TEXT_FOREGROUND)));
		}
		$assign(color, r->getBackgroundSelectionColor());
		if (color == nullptr || ($instanceOf($UIResource, color))) {
			$init($ColorType);
			r->setBackgroundSelectionColor($($nc(style)->getColor(context, $ColorType::TEXT_BACKGROUND)));
		}
		context->setComponentState($SynthConstants::ENABLED);
		$assign(color, r->getTextNonSelectionColor());
		if (color == nullptr || $instanceOf($UIResource, color)) {
			$init($ColorType);
			r->setTextNonSelectionColor($($nc(style)->getColorForState(context, $ColorType::TEXT_FOREGROUND)));
		}
		$assign(color, r->getBackgroundNonSelectionColor());
		if (color == nullptr || $instanceOf($UIResource, color)) {
			$init($ColorType);
			r->setBackgroundNonSelectionColor($($nc(style)->getColorForState(context, $ColorType::TEXT_BACKGROUND)));
		}
	}
}

void SynthTreeUI::paintHorizontalPartOfLeg($Graphics* g, $Rectangle* clipBounds, $Insets* insets, $Rectangle* bounds, $TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf) {
	if (this->drawHorizontalLines) {
		$BasicTreeUI::paintHorizontalPartOfLeg(g, clipBounds, insets, bounds, path, row, isExpanded, hasBeenExpanded, isLeaf);
	}
}

void SynthTreeUI::paintHorizontalLine($Graphics* g, $JComponent* c, int32_t y, int32_t left, int32_t right) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc($($nc(this->paintContext)->getStyle()))->getGraphicsUtils(this->paintContext)))->drawLine(this->paintContext, "Tree.horizontalLine"_s, g, left, y, right, y, this->linesStyle);
}

void SynthTreeUI::paintVerticalPartOfLeg($Graphics* g, $Rectangle* clipBounds, $Insets* insets, $TreePath* path) {
	if (this->drawVerticalLines) {
		$BasicTreeUI::paintVerticalPartOfLeg(g, clipBounds, insets, path);
	}
}

void SynthTreeUI::paintVerticalLine($Graphics* g, $JComponent* c, int32_t x, int32_t top, int32_t bottom) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc($($nc(this->paintContext)->getStyle()))->getGraphicsUtils(this->paintContext)))->drawLine(this->paintContext, "Tree.verticalLine"_s, g, x, top, x, bottom, this->linesStyle);
}

void SynthTreeUI::paintRow($TreeCellRenderer* renderer, $DefaultTreeCellRenderer* dtcr, $SynthContext* treeContext, $SynthContext* cellContext, $Graphics* g, $Rectangle* clipBounds, $Insets* insets, $Rectangle* bounds, $Rectangle* rowBounds, $TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf) {
	$useLocalCurrentObjectStackCache();
	bool selected = $nc(this->tree)->isRowSelected(row);
	$var($JTree$DropLocation, dropLocation, $nc(this->tree)->getDropLocation());
	bool var$0 = dropLocation != nullptr && dropLocation->getChildIndex() == -1;
	bool isDrop = var$0 && path == dropLocation->getPath();
	int32_t state = $SynthConstants::ENABLED;
	if (selected || isDrop) {
		state |= $SynthConstants::SELECTED;
	}
	bool var$1 = $nc(this->tree)->isFocusOwner();
	if (var$1 && row == getLeadSelectionRow()) {
		state |= $SynthConstants::FOCUSED;
	}
	$nc(cellContext)->setComponentState(state);
	if (dtcr != nullptr && ($instanceOf($UIResource, $(dtcr->getBorderSelectionColor())))) {
		$init($ColorType);
		dtcr->setBorderSelectionColor($($nc(this->style)->getColor(cellContext, $ColorType::FOCUS)));
	}
	$SynthLookAndFeel::updateSubregion(cellContext, g, rowBounds);
	$nc($(cellContext->getPainter()))->paintTreeCellBackground(cellContext, g, $nc(rowBounds)->x, rowBounds->y, rowBounds->width, rowBounds->height);
	$nc($(cellContext->getPainter()))->paintTreeCellBorder(cellContext, g, $nc(rowBounds)->x, rowBounds->y, rowBounds->width, rowBounds->height);
	if (this->editingComponent != nullptr && this->editingRow == row) {
		return;
	}
	int32_t leadIndex = 0;
	if ($nc(this->tree)->hasFocus()) {
		leadIndex = getLeadSelectionRow();
	} else {
		leadIndex = -1;
	}
	$var($Component, component, $nc(renderer)->getTreeCellRendererComponent(this->tree, $($nc(path)->getLastPathComponent()), selected, isExpanded, isLeaf, row, (leadIndex == row)));
	$nc(this->rendererPane)->paintComponent(g, component, this->tree, $nc(bounds)->x, bounds->y, bounds->width, bounds->height, true);
}

int32_t SynthTreeUI::findCenteredX(int32_t x, int32_t iconWidth) {
	return $nc($($nc(this->tree)->getComponentOrientation()))->isLeftToRight() ? x - $cast(int32_t, $Math::ceil(iconWidth / 2.0)) : x - $cast(int32_t, $Math::floor(iconWidth / 2.0));
}

void SynthTreeUI::paintExpandControl($Graphics* g, $Rectangle* clipBounds, $Insets* insets, $Rectangle* bounds, $TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf) {
	bool isSelected = $nc($($nc(this->tree)->getSelectionModel()))->isPathSelected(path);
	int32_t state = $nc(this->paintContext)->getComponentState();
	if (isSelected) {
		$nc(this->paintContext)->setComponentState(state | $SynthConstants::SELECTED);
	}
	$BasicTreeUI::paintExpandControl(g, clipBounds, insets, bounds, path, row, isExpanded, hasBeenExpanded, isLeaf);
	$nc(this->paintContext)->setComponentState(state);
}

void SynthTreeUI::drawCentered($Component* c, $Graphics* graphics, $Icon* icon, int32_t x, int32_t y) {
	int32_t w = $SynthGraphicsUtils::getIconWidth(icon, this->paintContext);
	int32_t h = $SynthGraphicsUtils::getIconHeight(icon, this->paintContext);
	$SynthGraphicsUtils::paintIcon(icon, this->paintContext, graphics, findCenteredX(x, w), y - h / 2, w, h);
}

void SynthTreeUI::propertyChange($PropertyChangeEvent* event) {
	$useLocalCurrentObjectStackCache();
	if ($SynthLookAndFeel::shouldUpdateStyle(event)) {
		updateStyle($cast($JTree, $($nc(event)->getSource())));
	}
	if ("dropLocation"_s == $nc(event)->getPropertyName()) {
		$var($JTree$DropLocation, oldValue, $cast($JTree$DropLocation, event->getOldValue()));
		repaintDropLocation(oldValue);
		repaintDropLocation($($nc(this->tree)->getDropLocation()));
	}
}

void SynthTreeUI::paintDropLine($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($JTree$DropLocation, loc, $nc(this->tree)->getDropLocation());
	if (!isDropLine(loc)) {
		return;
	}
	$var($Color, c, $cast($Color, $nc(this->style)->get(this->paintContext, "Tree.dropLineColor"_s)));
	if (c != nullptr) {
		$nc(g)->setColor(c);
		$var($Rectangle, rect, getDropLineRect(loc));
		g->fillRect($nc(rect)->x, rect->y, rect->width, rect->height);
	}
}

void SynthTreeUI::repaintDropLocation($JTree$DropLocation* loc) {
	$useLocalCurrentObjectStackCache();
	if (loc == nullptr) {
		return;
	}
	$var($Rectangle, r, nullptr);
	if (isDropLine(loc)) {
		$assign(r, getDropLineRect(loc));
	} else {
		$assign(r, $nc(this->tree)->getPathBounds($($nc(loc)->getPath())));
		if (r != nullptr) {
			r->x = 0;
			r->width = $nc(this->tree)->getWidth();
		}
	}
	if (r != nullptr) {
		$nc(this->tree)->repaint(r);
	}
}

int32_t SynthTreeUI::getRowX(int32_t row, int32_t depth) {
	return $BasicTreeUI::getRowX(row, depth) + this->padding;
}

SynthTreeUI::SynthTreeUI() {
}

$Class* SynthTreeUI::load$($String* name, bool initialize) {
	$loadClass(SynthTreeUI, name, initialize, &_SynthTreeUI_ClassInfo_, allocate$SynthTreeUI);
	return class$;
}

$Class* SynthTreeUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax