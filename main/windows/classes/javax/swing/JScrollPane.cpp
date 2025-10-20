#include <javax/swing/JScrollPane.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Attribute.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane$AccessibleJScrollPane.h>
#include <javax/swing/JScrollPane$ScrollBar.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/ScrollPaneConstants.h>
#include <javax/swing/ScrollPaneLayout$UIResource.h>
#include <javax/swing/ScrollPaneLayout.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollPaneUI.h>
#include <jcpp.h>

#undef COLUMN_HEADER
#undef HORIZONTAL
#undef HORIZONTAL_SCROLLBAR
#undef HORIZONTAL_SCROLLBAR_ALWAYS
#undef HORIZONTAL_SCROLLBAR_AS_NEEDED
#undef HORIZONTAL_SCROLLBAR_NEVER
#undef LOWER_LEADING_CORNER
#undef LOWER_LEFT_CORNER
#undef LOWER_RIGHT_CORNER
#undef LOWER_TRAILING_CORNER
#undef MAX_VALUE
#undef ROW_HEADER
#undef UPPER_LEADING_CORNER
#undef UPPER_LEFT_CORNER
#undef UPPER_RIGHT_CORNER
#undef UPPER_TRAILING_CORNER
#undef VERTICAL
#undef VERTICAL_SCROLLBAR
#undef VERTICAL_SCROLLBAR_ALWAYS
#undef VERTICAL_SCROLLBAR_AS_NEEDED
#undef VERTICAL_SCROLLBAR_NEVER
#undef VIEWPORT

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane$AccessibleJScrollPane = ::javax::swing::JScrollPane$AccessibleJScrollPane;
using $JScrollPane$ScrollBar = ::javax::swing::JScrollPane$ScrollBar;
using $JViewport = ::javax::swing::JViewport;
using $ScrollPaneConstants = ::javax::swing::ScrollPaneConstants;
using $ScrollPaneLayout = ::javax::swing::ScrollPaneLayout;
using $ScrollPaneLayout$UIResource = ::javax::swing::ScrollPaneLayout$UIResource;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollPaneUI = ::javax::swing::plaf::ScrollPaneUI;

namespace javax {
	namespace swing {

$NamedAttribute JScrollPane_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A specialized container that manages a viewport, optional scrollbars and headers"},
	{}
};

$NamedAttribute JScrollPane_Attribute_var$1[] = {
	{"delegate", 's', "getViewport"},
	{}
};
$CompoundAttribute _JScrollPane_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JScrollPane_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JScrollPane_Attribute_var$1},
	{}
};

$NamedAttribute JScrollPane_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_getAccessibleContext7[] = {
	{"Ljava/beans/BeanProperty;", JScrollPane_Attribute_var$2},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_getColumnHeader8[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_getHorizontalScrollBar10[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_getRowHeader12[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$NamedAttribute JScrollPane_Attribute_var$3[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_getUI13[] = {
	{"Ljava/beans/BeanProperty;", JScrollPane_Attribute_var$3},
	{}
};

$NamedAttribute JScrollPane_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_getUIClassID14[] = {
	{"Ljava/beans/BeanProperty;", JScrollPane_Attribute_var$4},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_getVerticalScrollBar15[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$NamedAttribute JScrollPane_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_getViewportBorderBounds19[] = {
	{"Ljava/beans/BeanProperty;", JScrollPane_Attribute_var$5},
	{}
};

$NamedAttribute JScrollPane_Attribute_var$6[] = {
	{"hidden", 'Z', "true"},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_isValidateRoot20[] = {
	{"Ljava/beans/BeanProperty;", JScrollPane_Attribute_var$6},
	{}
};

$NamedAttribute JScrollPane_Attribute_var$7[] = {
	{"description", 's', "Flag for enabling/disabling mouse wheel scrolling"},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_isWheelScrollingEnabled21[] = {
	{"Ljava/beans/BeanProperty;", JScrollPane_Attribute_var$7},
	{}
};

$NamedAttribute JScrollPane_Attribute_var$8[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The column header child for this scrollpane"},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_setColumnHeader23[] = {
	{"Ljava/beans/BeanProperty;", JScrollPane_Attribute_var$8},
	{}
};

$NamedAttribute JScrollPane_Attribute_var$9[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "The horizontal scrollbar."},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_setHorizontalScrollBar27[] = {
	{"Ljava/beans/BeanProperty;", JScrollPane_Attribute_var$9},
	{}
};

$Attribute JScrollPane_Attribute_var$11[] = {
	{'s', "ScrollPaneConstants.HORIZONTAL_SCROLLBAR_AS_NEEDED"},
	{'s', "ScrollPaneConstants.HORIZONTAL_SCROLLBAR_NEVER"},
	{'s', "ScrollPaneConstants.HORIZONTAL_SCROLLBAR_ALWAYS"},
	{'-'}
};

$NamedAttribute JScrollPane_Attribute_var$10[] = {
	{"preferred", 'Z', "true"},
	{"enumerationValues", '[', JScrollPane_Attribute_var$11},
	{"description", 's', "The scrollpane scrollbar policy"},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_setHorizontalScrollBarPolicy28[] = {
	{"Ljava/beans/BeanProperty;", JScrollPane_Attribute_var$10},
	{}
};

$NamedAttribute JScrollPane_Attribute_var$12[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "The row header child for this scrollpane"},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_setRowHeader30[] = {
	{"Ljava/beans/BeanProperty;", JScrollPane_Attribute_var$12},
	{}
};

$NamedAttribute JScrollPane_Attribute_var$13[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "The vertical scrollbar."},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_setVerticalScrollBar33[] = {
	{"Ljava/beans/BeanProperty;", JScrollPane_Attribute_var$13},
	{}
};

$Attribute JScrollPane_Attribute_var$15[] = {
	{'s', "ScrollPaneConstants.VERTICAL_SCROLLBAR_AS_NEEDED"},
	{'s', "ScrollPaneConstants.VERTICAL_SCROLLBAR_NEVER"},
	{'s', "ScrollPaneConstants.VERTICAL_SCROLLBAR_ALWAYS"},
	{'-'}
};

$NamedAttribute JScrollPane_Attribute_var$14[] = {
	{"preferred", 'Z', "true"},
	{"enumerationValues", '[', JScrollPane_Attribute_var$15},
	{"description", 's', "The scrollpane vertical scrollbar policy"},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_setVerticalScrollBarPolicy34[] = {
	{"Ljava/beans/BeanProperty;", JScrollPane_Attribute_var$14},
	{}
};

$NamedAttribute JScrollPane_Attribute_var$16[] = {
	{"expert", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The viewport child for this scrollpane"},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_setViewport35[] = {
	{"Ljava/beans/BeanProperty;", JScrollPane_Attribute_var$16},
	{}
};

$NamedAttribute JScrollPane_Attribute_var$17[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The border around the viewport."},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_setViewportBorder36[] = {
	{"Ljava/beans/BeanProperty;", JScrollPane_Attribute_var$17},
	{}
};

$NamedAttribute JScrollPane_Attribute_var$18[] = {
	{"description", 's', "Flag for enabling/disabling mouse wheel scrolling"},
	{}
};

$CompoundAttribute _JScrollPane_MethodAnnotations_setWheelScrollingEnabled38[] = {
	{"Ljava/beans/BeanProperty;", JScrollPane_Attribute_var$18},
	{}
};


$FieldInfo _JScrollPane_FieldInfo_[] = {
	{"viewportBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE, $field(JScrollPane, viewportBorder)},
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JScrollPane, uiClassID)},
	{"verticalScrollBarPolicy", "I", nullptr, $PROTECTED, $field(JScrollPane, verticalScrollBarPolicy)},
	{"horizontalScrollBarPolicy", "I", nullptr, $PROTECTED, $field(JScrollPane, horizontalScrollBarPolicy)},
	{"viewport", "Ljavax/swing/JViewport;", nullptr, $PROTECTED, $field(JScrollPane, viewport)},
	{"verticalScrollBar", "Ljavax/swing/JScrollBar;", nullptr, $PROTECTED, $field(JScrollPane, verticalScrollBar)},
	{"horizontalScrollBar", "Ljavax/swing/JScrollBar;", nullptr, $PROTECTED, $field(JScrollPane, horizontalScrollBar)},
	{"rowHeader", "Ljavax/swing/JViewport;", nullptr, $PROTECTED, $field(JScrollPane, rowHeader)},
	{"columnHeader", "Ljavax/swing/JViewport;", nullptr, $PROTECTED, $field(JScrollPane, columnHeader)},
	{"lowerLeft", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(JScrollPane, lowerLeft)},
	{"lowerRight", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(JScrollPane, lowerRight)},
	{"upperLeft", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(JScrollPane, upperLeft)},
	{"upperRight", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(JScrollPane, upperRight)},
	{"wheelScrollState", "Z", nullptr, $PRIVATE, $field(JScrollPane, wheelScrollState)},
	{}
};

$MethodInfo _JScrollPane_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Component;II)V", nullptr, $PUBLIC, $method(static_cast<void(JScrollPane::*)($Component*,int32_t,int32_t)>(&JScrollPane::init$))},
	{"<init>", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(static_cast<void(JScrollPane::*)($Component*)>(&JScrollPane::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(JScrollPane::*)(int32_t,int32_t)>(&JScrollPane::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JScrollPane::*)()>(&JScrollPane::init$))},
	{"createHorizontalScrollBar", "()Ljavax/swing/JScrollBar;", nullptr, $PUBLIC},
	{"createVerticalScrollBar", "()Ljavax/swing/JScrollBar;", nullptr, $PUBLIC},
	{"createViewport", "()Ljavax/swing/JViewport;", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_getAccessibleContext7},
	{"getColumnHeader", "()Ljavax/swing/JViewport;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_getColumnHeader8},
	{"getCorner", "(Ljava/lang/String;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getHorizontalScrollBar", "()Ljavax/swing/JScrollBar;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_getHorizontalScrollBar10},
	{"getHorizontalScrollBarPolicy", "()I", nullptr, $PUBLIC},
	{"getRowHeader", "()Ljavax/swing/JViewport;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_getRowHeader12},
	{"getUI", "()Ljavax/swing/plaf/ScrollPaneUI;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_getUI13},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_getUIClassID14},
	{"getVerticalScrollBar", "()Ljavax/swing/JScrollBar;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_getVerticalScrollBar15},
	{"getVerticalScrollBarPolicy", "()I", nullptr, $PUBLIC},
	{"getViewport", "()Ljavax/swing/JViewport;", nullptr, $PUBLIC},
	{"getViewportBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC},
	{"getViewportBorderBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_getViewportBorderBounds19},
	{"isValidateRoot", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_isValidateRoot20},
	{"isWheelScrollingEnabled", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_isWheelScrollingEnabled21},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"setColumnHeader", "(Ljavax/swing/JViewport;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_setColumnHeader23},
	{"setColumnHeaderView", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setComponentOrientation", "(Ljava/awt/ComponentOrientation;)V", nullptr, $PUBLIC},
	{"setCorner", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setHorizontalScrollBar", "(Ljavax/swing/JScrollBar;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_setHorizontalScrollBar27},
	{"setHorizontalScrollBarPolicy", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_setHorizontalScrollBarPolicy28},
	{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC},
	{"setRowHeader", "(Ljavax/swing/JViewport;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_setRowHeader30},
	{"setRowHeaderView", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setUI", "(Ljavax/swing/plaf/ScrollPaneUI;)V", nullptr, $PUBLIC},
	{"setVerticalScrollBar", "(Ljavax/swing/JScrollBar;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_setVerticalScrollBar33},
	{"setVerticalScrollBarPolicy", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_setVerticalScrollBarPolicy34},
	{"setViewport", "(Ljavax/swing/JViewport;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_setViewport35},
	{"setViewportBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_setViewportBorder36},
	{"setViewportView", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setWheelScrollingEnabled", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JScrollPane_MethodAnnotations_setWheelScrollingEnabled38},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JScrollPane::*)($ObjectOutputStream*)>(&JScrollPane::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JScrollPane_InnerClassesInfo_[] = {
	{"javax.swing.JScrollPane$AccessibleJScrollPane", "javax.swing.JScrollPane", "AccessibleJScrollPane", $PROTECTED},
	{"javax.swing.JScrollPane$ScrollBar", "javax.swing.JScrollPane", "ScrollBar", $PROTECTED},
	{}
};

$ClassInfo _JScrollPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JScrollPane",
	"javax.swing.JComponent",
	"javax.swing.ScrollPaneConstants,javax.accessibility.Accessible",
	_JScrollPane_FieldInfo_,
	_JScrollPane_MethodInfo_,
	nullptr,
	nullptr,
	_JScrollPane_InnerClassesInfo_,
	_JScrollPane_Annotations_,
	nullptr,
	"javax.swing.JScrollPane$AccessibleJScrollPane,javax.swing.JScrollPane$ScrollBar"
};

$Object* allocate$JScrollPane($Class* clazz) {
	return $of($alloc(JScrollPane));
}

$String* JScrollPane::toString() {
	 return this->$JComponent::toString();
}

int32_t JScrollPane::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JScrollPane::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JScrollPane::clone() {
	 return this->$JComponent::clone();
}

void JScrollPane::finalize() {
	this->$JComponent::finalize();
}


$String* JScrollPane::uiClassID = nullptr;

void JScrollPane::init$($Component* view, int32_t vsbPolicy, int32_t hsbPolicy) {
	$useLocalCurrentObjectStackCache();
	$JComponent::init$();
	this->verticalScrollBarPolicy = $ScrollPaneConstants::VERTICAL_SCROLLBAR_AS_NEEDED;
	this->horizontalScrollBarPolicy = $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED;
	this->wheelScrollState = true;
	setLayout($$new($ScrollPaneLayout$UIResource));
	setVerticalScrollBarPolicy(vsbPolicy);
	setHorizontalScrollBarPolicy(hsbPolicy);
	setViewport($(createViewport()));
	setVerticalScrollBar($(createVerticalScrollBar()));
	setHorizontalScrollBar($(createHorizontalScrollBar()));
	if (view != nullptr) {
		setViewportView(view);
	}
	setUIProperty("opaque"_s, $($Boolean::valueOf(true)));
	updateUI();
	if (!$nc($(this->getComponentOrientation()))->isLeftToRight()) {
		$nc(this->viewport)->setViewPosition($$new($Point, $Integer::MAX_VALUE, 0));
	}
}

void JScrollPane::init$($Component* view) {
	JScrollPane::init$(view, $ScrollPaneConstants::VERTICAL_SCROLLBAR_AS_NEEDED, $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED);
}

void JScrollPane::init$(int32_t vsbPolicy, int32_t hsbPolicy) {
	JScrollPane::init$(nullptr, vsbPolicy, hsbPolicy);
}

void JScrollPane::init$() {
	JScrollPane::init$(nullptr, $ScrollPaneConstants::VERTICAL_SCROLLBAR_AS_NEEDED, $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED);
}

$ComponentUI* JScrollPane::getUI() {
	return $cast($ScrollPaneUI, this->ui);
}

void JScrollPane::setUI($ScrollPaneUI* ui) {
	$JComponent::setUI(ui);
}

void JScrollPane::updateUI() {
	setUI($cast($ScrollPaneUI, $($UIManager::getUI(this))));
}

$String* JScrollPane::getUIClassID() {
	return JScrollPane::uiClassID;
}

void JScrollPane::setLayout($LayoutManager* layout) {
	if ($instanceOf($ScrollPaneLayout, layout)) {
		$JComponent::setLayout(layout);
		$nc(($cast($ScrollPaneLayout, layout)))->syncWithScrollPane(this);
	} else if (layout == nullptr) {
		$JComponent::setLayout(layout);
	} else {
		$var($String, s, "layout of JScrollPane must be a ScrollPaneLayout"_s);
		$throwNew($ClassCastException, s);
	}
}

bool JScrollPane::isValidateRoot() {
	return true;
}

int32_t JScrollPane::getVerticalScrollBarPolicy() {
	return this->verticalScrollBarPolicy;
}

void JScrollPane::setVerticalScrollBarPolicy(int32_t policy) {
	switch (policy) {
	case $ScrollPaneConstants::VERTICAL_SCROLLBAR_AS_NEEDED:
		{}
	case $ScrollPaneConstants::VERTICAL_SCROLLBAR_NEVER:
		{}
	case $ScrollPaneConstants::VERTICAL_SCROLLBAR_ALWAYS:
		{
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "invalid verticalScrollBarPolicy"_s);
		}
	}
	int32_t old = this->verticalScrollBarPolicy;
	this->verticalScrollBarPolicy = policy;
	firePropertyChange("verticalScrollBarPolicy"_s, old, policy);
	revalidate();
	repaint();
}

int32_t JScrollPane::getHorizontalScrollBarPolicy() {
	return this->horizontalScrollBarPolicy;
}

void JScrollPane::setHorizontalScrollBarPolicy(int32_t policy) {
	switch (policy) {
	case $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED:
		{}
	case $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_NEVER:
		{}
	case $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_ALWAYS:
		{
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "invalid horizontalScrollBarPolicy"_s);
		}
	}
	int32_t old = this->horizontalScrollBarPolicy;
	this->horizontalScrollBarPolicy = policy;
	firePropertyChange("horizontalScrollBarPolicy"_s, old, policy);
	revalidate();
	repaint();
}

$Border* JScrollPane::getViewportBorder() {
	return this->viewportBorder;
}

void JScrollPane::setViewportBorder($Border* viewportBorder) {
	$var($Border, oldValue, this->viewportBorder);
	$set(this, viewportBorder, viewportBorder);
	firePropertyChange("viewportBorder"_s, $of(oldValue), $of(viewportBorder));
}

$Rectangle* JScrollPane::getViewportBorderBounds() {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, borderR, $new($Rectangle, $(getSize())));
	$var($Insets, insets, getInsets());
	borderR->x = $nc(insets)->left;
	borderR->y = insets->top;
	borderR->width -= insets->left + insets->right;
	borderR->height -= insets->top + insets->bottom;
	bool leftToRight = $SwingUtilities::isLeftToRight(this);
	$var($JViewport, colHead, getColumnHeader());
	if ((colHead != nullptr) && (colHead->isVisible())) {
		int32_t colHeadHeight = colHead->getHeight();
		borderR->y += colHeadHeight;
		borderR->height -= colHeadHeight;
	}
	$var($JViewport, rowHead, getRowHeader());
	if ((rowHead != nullptr) && (rowHead->isVisible())) {
		int32_t rowHeadWidth = rowHead->getWidth();
		if (leftToRight) {
			borderR->x += rowHeadWidth;
		}
		borderR->width -= rowHeadWidth;
	}
	$var($JScrollBar, vsb, getVerticalScrollBar());
	if ((vsb != nullptr) && (vsb->isVisible())) {
		int32_t vsbWidth = vsb->getWidth();
		if (!leftToRight) {
			borderR->x += vsbWidth;
		}
		borderR->width -= vsbWidth;
	}
	$var($JScrollBar, hsb, getHorizontalScrollBar());
	if ((hsb != nullptr) && (hsb->isVisible())) {
		borderR->height -= hsb->getHeight();
	}
	return borderR;
}

$JScrollBar* JScrollPane::createHorizontalScrollBar() {
	return $new($JScrollPane$ScrollBar, this, $JScrollBar::HORIZONTAL);
}

$JScrollBar* JScrollPane::getHorizontalScrollBar() {
	return this->horizontalScrollBar;
}

void JScrollPane::setHorizontalScrollBar($JScrollBar* horizontalScrollBar) {
	$var($JScrollBar, old, getHorizontalScrollBar());
	$set(this, horizontalScrollBar, horizontalScrollBar);
	if (horizontalScrollBar != nullptr) {
		$init($ScrollPaneConstants);
		add(static_cast<$Component*>(horizontalScrollBar), $of($ScrollPaneConstants::HORIZONTAL_SCROLLBAR));
	} else if (old != nullptr) {
		remove(static_cast<$Component*>(old));
	}
	firePropertyChange("horizontalScrollBar"_s, $of(old), $of(horizontalScrollBar));
	revalidate();
	repaint();
}

$JScrollBar* JScrollPane::createVerticalScrollBar() {
	return $new($JScrollPane$ScrollBar, this, $JScrollBar::VERTICAL);
}

$JScrollBar* JScrollPane::getVerticalScrollBar() {
	return this->verticalScrollBar;
}

void JScrollPane::setVerticalScrollBar($JScrollBar* verticalScrollBar) {
	$var($JScrollBar, old, getVerticalScrollBar());
	$set(this, verticalScrollBar, verticalScrollBar);
	$init($ScrollPaneConstants);
	add(static_cast<$Component*>(verticalScrollBar), $of($ScrollPaneConstants::VERTICAL_SCROLLBAR));
	firePropertyChange("verticalScrollBar"_s, $of(old), $of(verticalScrollBar));
	revalidate();
	repaint();
}

$JViewport* JScrollPane::createViewport() {
	return $new($JViewport);
}

$JViewport* JScrollPane::getViewport() {
	return this->viewport;
}

void JScrollPane::setViewport($JViewport* viewport) {
	$var($JViewport, old, getViewport());
	$set(this, viewport, viewport);
	if (viewport != nullptr) {
		$init($ScrollPaneConstants);
		add(static_cast<$Component*>(viewport), $of($ScrollPaneConstants::VIEWPORT));
	} else if (old != nullptr) {
		remove(static_cast<$Component*>(old));
	}
	firePropertyChange("viewport"_s, $of(old), $of(viewport));
	if (this->accessibleContext != nullptr) {
		$nc(($cast($JScrollPane$AccessibleJScrollPane, this->accessibleContext)))->resetViewPort();
	}
	revalidate();
	repaint();
}

void JScrollPane::setViewportView($Component* view) {
	$useLocalCurrentObjectStackCache();
	if (getViewport() == nullptr) {
		setViewport($(createViewport()));
	}
	$nc($(getViewport()))->setView(view);
}

$JViewport* JScrollPane::getRowHeader() {
	return this->rowHeader;
}

void JScrollPane::setRowHeader($JViewport* rowHeader) {
	$var($JViewport, old, getRowHeader());
	$set(this, rowHeader, rowHeader);
	if (rowHeader != nullptr) {
		$init($ScrollPaneConstants);
		add(static_cast<$Component*>(rowHeader), $of($ScrollPaneConstants::ROW_HEADER));
	} else if (old != nullptr) {
		remove(static_cast<$Component*>(old));
	}
	firePropertyChange("rowHeader"_s, $of(old), $of(rowHeader));
	revalidate();
	repaint();
}

void JScrollPane::setRowHeaderView($Component* view) {
	$useLocalCurrentObjectStackCache();
	if (getRowHeader() == nullptr) {
		setRowHeader($(createViewport()));
	}
	$nc($(getRowHeader()))->setView(view);
}

$JViewport* JScrollPane::getColumnHeader() {
	return this->columnHeader;
}

void JScrollPane::setColumnHeader($JViewport* columnHeader) {
	$var($JViewport, old, getColumnHeader());
	$set(this, columnHeader, columnHeader);
	if (columnHeader != nullptr) {
		$init($ScrollPaneConstants);
		add(static_cast<$Component*>(columnHeader), $of($ScrollPaneConstants::COLUMN_HEADER));
	} else if (old != nullptr) {
		remove(static_cast<$Component*>(old));
	}
	firePropertyChange("columnHeader"_s, $of(old), $of(columnHeader));
	revalidate();
	repaint();
}

void JScrollPane::setColumnHeaderView($Component* view) {
	$useLocalCurrentObjectStackCache();
	if (getColumnHeader() == nullptr) {
		setColumnHeader($(createViewport()));
	}
	$nc($(getColumnHeader()))->setView(view);
}

$Component* JScrollPane::getCorner($String* key$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, key, key$renamed);
	bool isLeftToRight = $nc($(getComponentOrientation()))->isLeftToRight();
	$init($ScrollPaneConstants);
	if ($nc(key)->equals($ScrollPaneConstants::LOWER_LEADING_CORNER)) {
		$assign(key, isLeftToRight ? $ScrollPaneConstants::LOWER_LEFT_CORNER : $ScrollPaneConstants::LOWER_RIGHT_CORNER);
	} else {
		if (key->equals($ScrollPaneConstants::LOWER_TRAILING_CORNER)) {
			$assign(key, isLeftToRight ? $ScrollPaneConstants::LOWER_RIGHT_CORNER : $ScrollPaneConstants::LOWER_LEFT_CORNER);
		} else {
			if (key->equals($ScrollPaneConstants::UPPER_LEADING_CORNER)) {
				$assign(key, isLeftToRight ? $ScrollPaneConstants::UPPER_LEFT_CORNER : $ScrollPaneConstants::UPPER_RIGHT_CORNER);
			} else {
				if (key->equals($ScrollPaneConstants::UPPER_TRAILING_CORNER)) {
					$assign(key, isLeftToRight ? $ScrollPaneConstants::UPPER_RIGHT_CORNER : $ScrollPaneConstants::UPPER_LEFT_CORNER);
				}
			}
		}
	}
	if ($nc(key)->equals($ScrollPaneConstants::LOWER_LEFT_CORNER)) {
		return this->lowerLeft;
	} else {
		if (key->equals($ScrollPaneConstants::LOWER_RIGHT_CORNER)) {
			return this->lowerRight;
		} else {
			if (key->equals($ScrollPaneConstants::UPPER_LEFT_CORNER)) {
				return this->upperLeft;
			} else {
				if (key->equals($ScrollPaneConstants::UPPER_RIGHT_CORNER)) {
					return this->upperRight;
				} else {
					return nullptr;
				}
			}
		}
	}
}

void JScrollPane::setCorner($String* key$renamed, $Component* corner) {
	$useLocalCurrentObjectStackCache();
	$var($String, key, key$renamed);
	$var($Component, old, nullptr);
	bool isLeftToRight = $nc($(getComponentOrientation()))->isLeftToRight();
	$init($ScrollPaneConstants);
	if ($nc(key)->equals($ScrollPaneConstants::LOWER_LEADING_CORNER)) {
		$assign(key, isLeftToRight ? $ScrollPaneConstants::LOWER_LEFT_CORNER : $ScrollPaneConstants::LOWER_RIGHT_CORNER);
	} else {
		if (key->equals($ScrollPaneConstants::LOWER_TRAILING_CORNER)) {
			$assign(key, isLeftToRight ? $ScrollPaneConstants::LOWER_RIGHT_CORNER : $ScrollPaneConstants::LOWER_LEFT_CORNER);
		} else {
			if (key->equals($ScrollPaneConstants::UPPER_LEADING_CORNER)) {
				$assign(key, isLeftToRight ? $ScrollPaneConstants::UPPER_LEFT_CORNER : $ScrollPaneConstants::UPPER_RIGHT_CORNER);
			} else {
				if (key->equals($ScrollPaneConstants::UPPER_TRAILING_CORNER)) {
					$assign(key, isLeftToRight ? $ScrollPaneConstants::UPPER_RIGHT_CORNER : $ScrollPaneConstants::UPPER_LEFT_CORNER);
				}
			}
		}
	}
	if ($nc(key)->equals($ScrollPaneConstants::LOWER_LEFT_CORNER)) {
		$assign(old, this->lowerLeft);
		$set(this, lowerLeft, corner);
	} else {
		if (key->equals($ScrollPaneConstants::LOWER_RIGHT_CORNER)) {
			$assign(old, this->lowerRight);
			$set(this, lowerRight, corner);
		} else {
			if (key->equals($ScrollPaneConstants::UPPER_LEFT_CORNER)) {
				$assign(old, this->upperLeft);
				$set(this, upperLeft, corner);
			} else {
				if (key->equals($ScrollPaneConstants::UPPER_RIGHT_CORNER)) {
					$assign(old, this->upperRight);
					$set(this, upperRight, corner);
				} else {
					$throwNew($IllegalArgumentException, "invalid corner key"_s);
				}
			}
		}
	}
	if (old != nullptr) {
		remove(old);
	}
	if (corner != nullptr) {
		add(corner, $of(key));
	}
	firePropertyChange(key, $of(old), $of(corner));
	revalidate();
	repaint();
}

void JScrollPane::setComponentOrientation($ComponentOrientation* co) {
	$JComponent::setComponentOrientation(co);
	if (this->verticalScrollBar != nullptr) {
		$nc(this->verticalScrollBar)->setComponentOrientation(co);
	}
	if (this->horizontalScrollBar != nullptr) {
		$nc(this->horizontalScrollBar)->setComponentOrientation(co);
	}
}

bool JScrollPane::isWheelScrollingEnabled() {
	return this->wheelScrollState;
}

void JScrollPane::setWheelScrollingEnabled(bool handleWheel) {
	bool old = this->wheelScrollState;
	this->wheelScrollState = handleWheel;
	firePropertyChange("wheelScrollingEnabled"_s, old, handleWheel);
}

void JScrollPane::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JScrollPane::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JScrollPane::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, viewportBorderString, this->viewportBorder != nullptr ? $nc($of(this->viewportBorder))->toString() : ""_s);
	$var($String, viewportString, this->viewport != nullptr ? $nc(this->viewport)->toString() : ""_s);
	$var($String, verticalScrollBarPolicyString, nullptr);
	if (this->verticalScrollBarPolicy == $ScrollPaneConstants::VERTICAL_SCROLLBAR_AS_NEEDED) {
		$assign(verticalScrollBarPolicyString, "VERTICAL_SCROLLBAR_AS_NEEDED"_s);
	} else if (this->verticalScrollBarPolicy == $ScrollPaneConstants::VERTICAL_SCROLLBAR_NEVER) {
		$assign(verticalScrollBarPolicyString, "VERTICAL_SCROLLBAR_NEVER"_s);
	} else if (this->verticalScrollBarPolicy == $ScrollPaneConstants::VERTICAL_SCROLLBAR_ALWAYS) {
		$assign(verticalScrollBarPolicyString, "VERTICAL_SCROLLBAR_ALWAYS"_s);
	} else {
		$assign(verticalScrollBarPolicyString, ""_s);
	}
	$var($String, horizontalScrollBarPolicyString, nullptr);
	if (this->horizontalScrollBarPolicy == $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED) {
		$assign(horizontalScrollBarPolicyString, "HORIZONTAL_SCROLLBAR_AS_NEEDED"_s);
	} else if (this->horizontalScrollBarPolicy == $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_NEVER) {
		$assign(horizontalScrollBarPolicyString, "HORIZONTAL_SCROLLBAR_NEVER"_s);
	} else if (this->horizontalScrollBarPolicy == $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_ALWAYS) {
		$assign(horizontalScrollBarPolicyString, "HORIZONTAL_SCROLLBAR_ALWAYS"_s);
	} else {
		$assign(horizontalScrollBarPolicyString, ""_s);
	}
	$var($String, horizontalScrollBarString, this->horizontalScrollBar != nullptr ? $nc(this->horizontalScrollBar)->toString() : ""_s);
	$var($String, verticalScrollBarString, this->verticalScrollBar != nullptr ? $nc(this->verticalScrollBar)->toString() : ""_s);
	$var($String, columnHeaderString, this->columnHeader != nullptr ? $nc(this->columnHeader)->toString() : ""_s);
	$var($String, rowHeaderString, this->rowHeader != nullptr ? $nc(this->rowHeader)->toString() : ""_s);
	$var($String, lowerLeftString, this->lowerLeft != nullptr ? $nc(this->lowerLeft)->toString() : ""_s);
	$var($String, lowerRightString, this->lowerRight != nullptr ? $nc(this->lowerRight)->toString() : ""_s);
	$var($String, upperLeftString, this->upperLeft != nullptr ? $nc(this->upperLeft)->toString() : ""_s);
	$var($String, upperRightString, this->upperRight != nullptr ? $nc(this->upperRight)->toString() : ""_s);
	return $str({$($JComponent::paramString()), ",columnHeader="_s, columnHeaderString, ",horizontalScrollBar="_s, horizontalScrollBarString, ",horizontalScrollBarPolicy="_s, horizontalScrollBarPolicyString, ",lowerLeft="_s, lowerLeftString, ",lowerRight="_s, lowerRightString, ",rowHeader="_s, rowHeaderString, ",upperLeft="_s, upperLeftString, ",upperRight="_s, 
	upperRightString, ",verticalScrollBar="_s, verticalScrollBarString, ",verticalScrollBarPolicy="_s, verticalScrollBarPolicyString, ",viewport="_s, viewportString, ",viewportBorder="_s, viewportBorderString});
}

$AccessibleContext* JScrollPane::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JScrollPane$AccessibleJScrollPane, this));
	}
	return this->accessibleContext;
}

JScrollPane::JScrollPane() {
}

void clinit$JScrollPane($Class* class$) {
	$assignStatic(JScrollPane::uiClassID, "ScrollPaneUI"_s);
}

$Class* JScrollPane::load$($String* name, bool initialize) {
	$loadClass(JScrollPane, name, initialize, &_JScrollPane_ClassInfo_, clinit$JScrollPane, allocate$JScrollPane);
	return class$;
}

$Class* JScrollPane::class$ = nullptr;

	} // swing
} // javax