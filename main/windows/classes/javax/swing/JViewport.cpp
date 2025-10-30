#include <javax/swing/JViewport.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Composite.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/Math.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JViewport$1.h>
#include <javax/swing/JViewport$AccessibleJViewport.h>
#include <javax/swing/JViewport$BackingStoreMultiResolutionImage.h>
#include <javax/swing/JViewport$ViewListener.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/ViewportLayout.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ViewportUI.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BACKINGSTORE_SCROLL_MODE
#undef BLIT_SCROLL_MODE
#undef SHARED_INSTANCE
#undef SIMPLE_SCROLL_MODE

using $ComponentArray = $Array<::java::awt::Component>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Composite = ::java::awt::Composite;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ActionListener = ::java::awt::event::ActionListener;
using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $AbstractMultiResolutionImage = ::java::awt::image::AbstractMultiResolutionImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $EventListener = ::java::util::EventListener;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JViewport$1 = ::javax::swing::JViewport$1;
using $JViewport$AccessibleJViewport = ::javax::swing::JViewport$AccessibleJViewport;
using $JViewport$BackingStoreMultiResolutionImage = ::javax::swing::JViewport$BackingStoreMultiResolutionImage;
using $JViewport$ViewListener = ::javax::swing::JViewport$ViewListener;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $UIManager = ::javax::swing::UIManager;
using $ViewportLayout = ::javax::swing::ViewportLayout;
using $Border = ::javax::swing::border::Border;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ViewportUI = ::javax::swing::plaf::ViewportUI;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

$CompoundAttribute _JViewport_FieldAnnotations_backingStore[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _JViewport_MethodAnnotations_getExtentSize16[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$NamedAttribute JViewport_Attribute_var$0[] = {
	{"expert", 'Z', "true"},
	{}
};

$CompoundAttribute _JViewport_MethodAnnotations_getInsets18[] = {
	{"Ljava/beans/BeanProperty;", JViewport_Attribute_var$0},
	{}
};

$CompoundAttribute _JViewport_MethodAnnotations_isBackingStoreEnabled27[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _JViewport_MethodAnnotations_setBackingStoreEnabled44[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$Attribute JViewport_Attribute_var$2[] = {
	{'s', "JViewport.BLIT_SCROLL_MODE"},
	{'s', "JViewport.BACKINGSTORE_SCROLL_MODE"},
	{'s', "JViewport.SIMPLE_SCROLL_MODE"},
	{'-'}
};

$NamedAttribute JViewport_Attribute_var$1[] = {
	{"bound", 'Z', "false"},
	{"enumerationValues", '[', JViewport_Attribute_var$2},
	{"description", 's', "Method of moving contents for incremental scrolls."},
	{}
};

$CompoundAttribute _JViewport_MethodAnnotations_setScrollMode47[] = {
	{"Ljava/beans/BeanProperty;", JViewport_Attribute_var$1},
	{}
};

$NamedAttribute JViewport_Attribute_var$3[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
	{}
};

$CompoundAttribute _JViewport_MethodAnnotations_setUI48[] = {
	{"Ljava/beans/BeanProperty;", JViewport_Attribute_var$3},
	{}
};

$FieldInfo _JViewport_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JViewport, uiClassID)},
	{"EnableWindowBlit", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(JViewport, EnableWindowBlit)},
	{"isViewSizeSet", "Z", nullptr, $PROTECTED, $field(JViewport, isViewSizeSet)},
	{"lastPaintPosition", "Ljava/awt/Point;", nullptr, $PROTECTED, $field(JViewport, lastPaintPosition)},
	{"backingStore", "Z", nullptr, $PROTECTED | $DEPRECATED, $field(JViewport, backingStore), _JViewport_FieldAnnotations_backingStore},
	{"backingStoreImage", "Ljava/awt/Image;", nullptr, $PROTECTED | $TRANSIENT, $field(JViewport, backingStoreImage)},
	{"scrollUnderway", "Z", nullptr, $PROTECTED, $field(JViewport, scrollUnderway)},
	{"viewListener", "Ljava/awt/event/ComponentListener;", nullptr, $PRIVATE, $field(JViewport, viewListener)},
	{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PRIVATE | $TRANSIENT, $field(JViewport, changeEvent)},
	{"BLIT_SCROLL_MODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JViewport, BLIT_SCROLL_MODE)},
	{"BACKINGSTORE_SCROLL_MODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JViewport, BACKINGSTORE_SCROLL_MODE)},
	{"SIMPLE_SCROLL_MODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JViewport, SIMPLE_SCROLL_MODE)},
	{"scrollMode", "I", nullptr, $PRIVATE, $field(JViewport, scrollMode)},
	{"repaintAll", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(JViewport, repaintAll)},
	{"waitingForRepaint", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(JViewport, waitingForRepaint)},
	{"repaintTimer", "Ljavax/swing/Timer;", nullptr, $PRIVATE | $TRANSIENT, $field(JViewport, repaintTimer)},
	{"inBlitPaint", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(JViewport, inBlitPaint)},
	{"hasHadValidView", "Z", nullptr, $PRIVATE, $field(JViewport, hasHadValidView)},
	{"viewChanged", "Z", nullptr, $PRIVATE, $field(JViewport, viewChanged)},
	{}
};

$MethodInfo _JViewport_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JViewport::*)()>(&JViewport::init$))},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED},
	{"blitDoubleBuffered", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;IIIIIIIIII)V", nullptr, $PRIVATE, $method(static_cast<void(JViewport::*)($JComponent*,$Graphics*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&JViewport::blitDoubleBuffered))},
	{"canUseWindowBlitter", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(JViewport::*)()>(&JViewport::canUseWindowBlitter))},
	{"computeBlit", "(IILjava/awt/Point;Ljava/awt/Point;Ljava/awt/Dimension;Ljava/awt/Rectangle;)Z", nullptr, $PROTECTED},
	{"createLayoutManager", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createRepaintTimer", "()Ljavax/swing/Timer;", nullptr, $PRIVATE, $method(static_cast<$Timer*(JViewport::*)()>(&JViewport::createRepaintTimer))},
	{"createScaledImage", "(IIII)Ljava/awt/Image;", nullptr, $PRIVATE, $method(static_cast<$Image*(JViewport::*)(int32_t,int32_t,int32_t,int32_t)>(&JViewport::createScaledImage))},
	{"createViewListener", "()Ljavax/swing/JViewport$ViewListener;", nullptr, $PROTECTED},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"fireStateChanged", "()V", nullptr, $PROTECTED},
	{"flushViewDirtyRegion", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(JViewport::*)($Graphics*,$Rectangle*)>(&JViewport::flushViewDirtyRegion))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getBackingStoreGraphics", "(Ljava/awt/Graphics;)Ljava/awt/Graphics;", nullptr, $PRIVATE, $method(static_cast<$Graphics*(JViewport::*)($Graphics*)>(&JViewport::getBackingStoreGraphics))},
	{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC},
	{"getExtentSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JViewport_MethodAnnotations_getExtentSize16},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $FINAL},
	{"getInsets", "(Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC | $FINAL, nullptr, nullptr, nullptr, _JViewport_MethodAnnotations_getInsets18},
	{"getScrollMode", "()I", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/ViewportUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getView", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getViewLocation", "()Ljava/awt/Point;", nullptr, $PRIVATE, $method(static_cast<$Point*(JViewport::*)()>(&JViewport::getViewLocation))},
	{"getViewPosition", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getViewRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getViewSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"isBackingStoreEnabled", "()Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JViewport_MethodAnnotations_isBackingStoreEnabled27},
	{"isBlitting", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(JViewport::*)()>(&JViewport::isBlitting))},
	{"isFPScale", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(JViewport::*)()>(&JViewport::isFPScale))},
	{"isOptimizedDrawingEnabled", "()Z", nullptr, $PUBLIC},
	{"isPaintingOrigin", "()Z", nullptr, $PROTECTED},
	{"needsRepaintAfterBlit", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(JViewport::*)()>(&JViewport::needsRepaintAfterBlit))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintViaBackingStore", "(Ljava/awt/Graphics;)V", nullptr, $PRIVATE, $method(static_cast<void(JViewport::*)($Graphics*)>(&JViewport::paintViaBackingStore))},
	{"paintViaBackingStore", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(JViewport::*)($Graphics*,$Rectangle*)>(&JViewport::paintViaBackingStore))},
	{"paintView", "(Ljava/awt/Graphics;)V", nullptr, $PRIVATE, $method(static_cast<void(JViewport::*)($Graphics*)>(&JViewport::paintView))},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"positionAdjustment", "(III)I", nullptr, $PRIVATE, $method(static_cast<int32_t(JViewport::*)(int32_t,int32_t,int32_t)>(&JViewport::positionAdjustment))},
	{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"repaint", "(JIIII)V", nullptr, $PUBLIC},
	{"reshape", "(IIII)V", nullptr, $PUBLIC},
	{"scrollRectToVisible", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setBackingStoreEnabled", "(Z)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JViewport_MethodAnnotations_setBackingStoreEnabled44},
	{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC | $FINAL},
	{"setExtentSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"setScrollMode", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JViewport_MethodAnnotations_setScrollMode47},
	{"setUI", "(Ljavax/swing/plaf/ViewportUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JViewport_MethodAnnotations_setUI48},
	{"setView", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setViewPosition", "(Ljava/awt/Point;)V", nullptr, $PUBLIC},
	{"setViewSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toViewCoordinates", "(Ljava/awt/Dimension;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"toViewCoordinates", "(Ljava/awt/Point;)Ljava/awt/Point;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"validateView", "()V", nullptr, $PRIVATE, $method(static_cast<void(JViewport::*)()>(&JViewport::validateView))},
	{"windowBlitPaint", "(Ljava/awt/Graphics;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JViewport::*)($Graphics*)>(&JViewport::windowBlitPaint))},
	{}
};

$InnerClassInfo _JViewport_InnerClassesInfo_[] = {
	{"javax.swing.JViewport$AccessibleJViewport", "javax.swing.JViewport", "AccessibleJViewport", $PROTECTED},
	{"javax.swing.JViewport$ViewListener", "javax.swing.JViewport", "ViewListener", $PROTECTED},
	{"javax.swing.JViewport$BackingStoreMultiResolutionImage", "javax.swing.JViewport", "BackingStoreMultiResolutionImage", $STATIC},
	{"javax.swing.JViewport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JViewport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JViewport",
	"javax.swing.JComponent",
	"javax.accessibility.Accessible",
	_JViewport_FieldInfo_,
	_JViewport_MethodInfo_,
	nullptr,
	nullptr,
	_JViewport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.JViewport$AccessibleJViewport,javax.swing.JViewport$ViewListener,javax.swing.JViewport$BackingStoreMultiResolutionImage,javax.swing.JViewport$1"
};

$Object* allocate$JViewport($Class* clazz) {
	return $of($alloc(JViewport));
}

$String* JViewport::toString() {
	 return this->$JComponent::toString();
}

int32_t JViewport::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JViewport::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JViewport::clone() {
	 return this->$JComponent::clone();
}

void JViewport::finalize() {
	this->$JComponent::finalize();
}

$String* JViewport::uiClassID = nullptr;
$Object* JViewport::EnableWindowBlit = nullptr;

void JViewport::init$() {
	$JComponent::init$();
	this->isViewSizeSet = false;
	$set(this, lastPaintPosition, nullptr);
	this->backingStore = false;
	$set(this, backingStoreImage, nullptr);
	this->scrollUnderway = false;
	$set(this, viewListener, nullptr);
	$set(this, changeEvent, nullptr);
	this->scrollMode = JViewport::BLIT_SCROLL_MODE;
	setLayout($(createLayoutManager()));
	updateUI();
	setInheritsPopupMenu(true);
}

$ComponentUI* JViewport::getUI() {
	return $cast($ViewportUI, this->ui);
}

void JViewport::setUI($ViewportUI* ui) {
	$JComponent::setUI(ui);
}

void JViewport::updateUI() {
	setUI($cast($ViewportUI, $($UIManager::getUI(this))));
}

$String* JViewport::getUIClassID() {
	return JViewport::uiClassID;
}

void JViewport::addImpl($Component* child, Object$* constraints, int32_t index) {
	setView(child);
}

void JViewport::remove($Component* child) {
	$nc(child)->removeComponentListener(this->viewListener);
	$JComponent::remove(child);
}

void JViewport::scrollRectToVisible($Rectangle* contentRect) {
	$useLocalCurrentObjectStackCache();
	$var($Component, view, getView());
	if (view == nullptr) {
		return;
	} else {
		if (!$nc(view)->isValid()) {
			validateView();
		}
		int32_t dx = 0;
		int32_t dy = 0;
		dx = positionAdjustment(getWidth(), $nc(contentRect)->width, contentRect->x);
		dy = positionAdjustment(getHeight(), $nc(contentRect)->height, contentRect->y);
		if (dx != 0 || dy != 0) {
			$var($Point, viewPosition, getViewPosition());
			$var($Dimension, viewSize, $nc(view)->getSize());
			int32_t startX = $nc(viewPosition)->x;
			int32_t startY = viewPosition->y;
			$var($Dimension, extent, getExtentSize());
			viewPosition->x -= dx;
			viewPosition->y -= dy;
			if (view->isValid()) {
				if ($nc($($nc($(getParent()))->getComponentOrientation()))->isLeftToRight()) {
					if (viewPosition->x + $nc(extent)->width > $nc(viewSize)->width) {
						viewPosition->x = $Math::max(0, viewSize->width - extent->width);
					} else if (viewPosition->x < 0) {
						viewPosition->x = 0;
					}
				} else if ($nc(extent)->width > $nc(viewSize)->width) {
					viewPosition->x = viewSize->width - extent->width;
				} else {
					viewPosition->x = $Math::max(0, $Math::min(viewSize->width - extent->width, viewPosition->x));
				}
				if (viewPosition->y + $nc(extent)->height > $nc(viewSize)->height) {
					viewPosition->y = $Math::max(0, viewSize->height - extent->height);
				} else if (viewPosition->y < 0) {
					viewPosition->y = 0;
				}
			}
			if (viewPosition->x != startX || viewPosition->y != startY) {
				setViewPosition(viewPosition);
				this->scrollUnderway = false;
			}
		}
	}
}

void JViewport::validateView() {
	$useLocalCurrentObjectStackCache();
	$var($Component, validateRoot, $SwingUtilities::getValidateRoot(this, false));
	if (validateRoot == nullptr) {
		return;
	}
	$nc(validateRoot)->validate();
	$var($RepaintManager, rm, $RepaintManager::currentManager(static_cast<$JComponent*>(this)));
	if (rm != nullptr) {
		rm->removeInvalidComponent($cast($JComponent, validateRoot));
	}
}

int32_t JViewport::positionAdjustment(int32_t parentWidth, int32_t childWidth, int32_t childAt) {
	if (childAt >= 0 && childWidth + childAt <= parentWidth) {
		return 0;
	}
	if (childAt <= 0 && childWidth + childAt >= parentWidth) {
		return 0;
	}
	if (childAt > 0 && childWidth <= parentWidth) {
		return -childAt + parentWidth - childWidth;
	}
	if (childAt >= 0 && childWidth >= parentWidth) {
		return -childAt;
	}
	if (childAt <= 0 && childWidth <= parentWidth) {
		return -childAt;
	}
	if (childAt < 0 && childWidth >= parentWidth) {
		return -childAt + parentWidth - childWidth;
	}
	return 0;
}

void JViewport::setBorder($Border* border) {
	if (border != nullptr) {
		$throwNew($IllegalArgumentException, "JViewport.setBorder() not supported"_s);
	}
}

$Insets* JViewport::getInsets() {
	return $new($Insets, 0, 0, 0, 0);
}

$Insets* JViewport::getInsets($Insets* insets) {
	$nc(insets)->left = (insets->top = (insets->right = (insets->bottom = 0)));
	return insets;
}

$Graphics* JViewport::getBackingStoreGraphics($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, bsg, $nc(this->backingStoreImage)->getGraphics());
	$nc(bsg)->setColor($($nc(g)->getColor()));
	bsg->setFont($($nc(g)->getFont()));
	bsg->setClip($($nc(g)->getClipBounds()));
	return bsg;
}

void JViewport::paintViaBackingStore($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, bsg, getBackingStoreGraphics(g));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$JComponent::paint(bsg);
			$nc(g)->drawImage(this->backingStoreImage, 0, 0, this);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(bsg)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JViewport::paintViaBackingStore($Graphics* g, $Rectangle* oClip) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, bsg, getBackingStoreGraphics(g));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$JComponent::paint(bsg);
			$nc(g)->setClip(oClip);
			g->drawImage(this->backingStoreImage, 0, 0, this);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(bsg)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool JViewport::isOptimizedDrawingEnabled() {
	return false;
}

bool JViewport::isPaintingOrigin() {
	return this->scrollMode == JViewport::BACKINGSTORE_SCROLL_MODE;
}

$Point* JViewport::getViewLocation() {
	$var($Component, view, getView());
	if (view != nullptr) {
		return view->getLocation();
	} else {
		return $new($Point, 0, 0);
	}
}

void JViewport::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	int32_t width = getWidth();
	int32_t height = getHeight();
	if ((width <= 0) || (height <= 0)) {
		return;
	}
	if (this->inBlitPaint) {
		$JComponent::paint(g);
		return;
	}
	if (this->repaintAll) {
		this->repaintAll = false;
		$var($Rectangle, clipB, $nc(g)->getClipBounds());
		bool var$0 = $nc(clipB)->width < getWidth();
		if (var$0 || $nc(clipB)->height < getHeight()) {
			this->waitingForRepaint = true;
			if (this->repaintTimer == nullptr) {
				$set(this, repaintTimer, createRepaintTimer());
			}
			$nc(this->repaintTimer)->stop();
			$nc(this->repaintTimer)->start();
		} else {
			if (this->repaintTimer != nullptr) {
				$nc(this->repaintTimer)->stop();
			}
			this->waitingForRepaint = false;
		}
	} else if (this->waitingForRepaint) {
		$var($Rectangle, clipB, $nc(g)->getClipBounds());
		bool var$1 = $nc(clipB)->width >= getWidth();
		if (var$1 && clipB->height >= getHeight()) {
			this->waitingForRepaint = false;
			$nc(this->repaintTimer)->stop();
		}
	}
	bool var$2 = !this->backingStore || isBlitting();
	if (var$2 || getView() == nullptr) {
		$JComponent::paint(g);
		$set(this, lastPaintPosition, getViewLocation());
		return;
	}
	$var($Rectangle, viewBounds, $nc($(getView()))->getBounds());
	if (!isOpaque()) {
		$nc(g)->clipRect(0, 0, $nc(viewBounds)->width, viewBounds->height);
	}
	bool recreateBackingStoreImage = (this->backingStoreImage == nullptr);
	int32_t scaledWidth = width;
	int32_t scaledHeight = height;
	if ($instanceOf($Graphics2D, g)) {
		double sw = (double)width;
		double sh = (double)height;
		$var($Graphics2D, g2d, $cast($Graphics2D, g));
		$var($AffineTransform, tx, $nc(g2d)->getTransform());
		int32_t type = $nc(tx)->getType();
		if (((int32_t)(type & (uint32_t)~(1 | 64))) == 0) {
		} else if (((int32_t)(type & (uint32_t)~((1 | 64) | 6))) == 0) {
			sw = $Math::abs(width * tx->getScaleX());
			sh = $Math::abs(height * tx->getScaleY());
		} else {
			int32_t var$3 = width;
			double var$5 = tx->getScaleX();
			double var$4 = $Math::hypot(var$5, tx->getShearY());
			sw = $Math::abs(var$3 * var$4);
			int32_t var$6 = height;
			double var$8 = tx->getShearX();
			double var$7 = $Math::hypot(var$8, tx->getScaleY());
			sh = $Math::abs(var$6 * var$7);
		}
		scaledWidth = $cast(int32_t, $Math::ceil(sw));
		scaledHeight = $cast(int32_t, $Math::ceil(sh));
		if (!recreateBackingStoreImage) {
			if ($instanceOf($JViewport$BackingStoreMultiResolutionImage, this->backingStoreImage)) {
				$var($JViewport$BackingStoreMultiResolutionImage, mrImage, $cast($JViewport$BackingStoreMultiResolutionImage, this->backingStoreImage));
				recreateBackingStoreImage = ($nc(mrImage)->scaledWidth != scaledWidth || $nc(mrImage)->scaledHeight != scaledHeight);
			} else {
				recreateBackingStoreImage = (width != scaledWidth || height != scaledHeight);
			}
		}
	}
	if (recreateBackingStoreImage) {
		$set(this, backingStoreImage, createScaledImage(width, height, scaledWidth, scaledHeight));
		$var($Rectangle, clip, $nc(g)->getClipBounds());
		if ($nc(clip)->width != width || $nc(clip)->height != height) {
			if (!isOpaque()) {
				int32_t var$9 = $Math::min($nc(viewBounds)->width, width);
				g->setClip(0, 0, var$9, $Math::min($nc(viewBounds)->height, height));
			} else {
				g->setClip(0, 0, width, height);
			}
			paintViaBackingStore(g, clip);
		} else {
			paintViaBackingStore(g);
		}
	} else if (!this->scrollUnderway || $nc(this->lastPaintPosition)->equals($(getViewLocation()))) {
		paintViaBackingStore(g);
	} else {
		$var($Point, blitFrom, $new($Point));
		$var($Point, blitTo, $new($Point));
		$var($Dimension, blitSize, $new($Dimension));
		$var($Rectangle, blitPaint, $new($Rectangle));
		$var($Point, newLocation, getViewLocation());
		int32_t dx = $nc(newLocation)->x - $nc(this->lastPaintPosition)->x;
		int32_t dy = newLocation->y - $nc(this->lastPaintPosition)->y;
		bool canBlit = computeBlit(dx, dy, blitFrom, blitTo, blitSize, blitPaint);
		if (!canBlit) {
			paintViaBackingStore(g);
		} else {
			int32_t bdx = blitTo->x - blitFrom->x;
			int32_t bdy = blitTo->y - blitFrom->y;
			$var($Rectangle, clip, $nc(g)->getClipBounds());
			g->setClip(0, 0, width, height);
			$var($Graphics, bsg, getBackingStoreGraphics(g));
			{
				$var($Throwable, var$10, nullptr);
				try {
					$nc(bsg)->copyArea(blitFrom->x, blitFrom->y, blitSize->width, blitSize->height, bdx, bdy);
					g->setClip($nc(clip)->x, clip->y, clip->width, clip->height);
					$var($Rectangle, r, $nc(viewBounds)->intersection(blitPaint));
					bsg->setClip(r);
					$JComponent::paint(bsg);
					g->drawImage(this->backingStoreImage, 0, 0, this);
				} catch ($Throwable& var$11) {
					$assign(var$10, var$11);
				} /*finally*/ {
					$nc(bsg)->dispose();
				}
				if (var$10 != nullptr) {
					$throw(var$10);
				}
			}
		}
	}
	$set(this, lastPaintPosition, getViewLocation());
	this->scrollUnderway = false;
}

$Image* JViewport::createScaledImage(int32_t width, int32_t height, int32_t scaledWidth, int32_t scaledHeight) {
	if (scaledWidth == width && scaledHeight == height) {
		return createImage(width, height);
	}
	$var($Image, rvImage, createImage(scaledWidth, scaledHeight));
	return $new($JViewport$BackingStoreMultiResolutionImage, width, height, scaledWidth, scaledHeight, rvImage);
}

void JViewport::reshape(int32_t x, int32_t y, int32_t w, int32_t h) {
	bool var$0 = (getWidth() != w);
	bool sizeChanged = var$0 || (getHeight() != h);
	if (sizeChanged) {
		$set(this, backingStoreImage, nullptr);
	}
	$JComponent::reshape(x, y, w, h);
	if (sizeChanged || this->viewChanged) {
		this->viewChanged = false;
		fireStateChanged();
	}
}

void JViewport::setScrollMode(int32_t mode) {
	this->scrollMode = mode;
	this->backingStore = mode == JViewport::BACKINGSTORE_SCROLL_MODE;
}

int32_t JViewport::getScrollMode() {
	return this->scrollMode;
}

bool JViewport::isBackingStoreEnabled() {
	return this->scrollMode == JViewport::BACKINGSTORE_SCROLL_MODE;
}

void JViewport::setBackingStoreEnabled(bool enabled) {
	if (enabled) {
		setScrollMode(JViewport::BACKINGSTORE_SCROLL_MODE);
	} else {
		setScrollMode(JViewport::BLIT_SCROLL_MODE);
	}
}

bool JViewport::isBlitting() {
	$var($Component, view, getView());
	bool var$0 = (this->scrollMode == JViewport::BLIT_SCROLL_MODE) && ($instanceOf($JComponent, view)) && $nc(view)->isOpaque();
	return var$0 && !isFPScale();
}

bool JViewport::isFPScale() {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsConfiguration, gc, getGraphicsConfiguration());
	if (gc != nullptr) {
		return $SwingUtilities2::isFloatingPointScale($(gc->getDefaultTransform()));
	}
	return false;
}

$Component* JViewport::getView() {
	return (getComponentCount() > 0) ? getComponent(0) : ($Component*)nullptr;
}

void JViewport::setView($Component* view) {
	$useLocalCurrentObjectStackCache();
	int32_t n = getComponentCount();
	for (int32_t i = n - 1; i >= 0; --i) {
		remove($(getComponent(i)));
	}
	this->isViewSizeSet = false;
	if (view != nullptr) {
		$JComponent::addImpl(view, nullptr, -1);
		$set(this, viewListener, createViewListener());
		view->addComponentListener(this->viewListener);
	}
	if (this->hasHadValidView) {
		fireStateChanged();
	} else if (view != nullptr) {
		this->hasHadValidView = true;
	}
	this->viewChanged = true;
	revalidate();
	repaint();
}

$Dimension* JViewport::getViewSize() {
	$var($Component, view, getView());
	if (view == nullptr) {
		return $new($Dimension, 0, 0);
	} else if (this->isViewSizeSet) {
		return $nc(view)->getSize();
	} else {
		return $nc(view)->getPreferredSize();
	}
}

void JViewport::setViewSize($Dimension* newSize) {
	$useLocalCurrentObjectStackCache();
	$var($Component, view, getView());
	if (view != nullptr) {
		$var($Dimension, oldSize, view->getSize());
		if (!$nc(newSize)->equals(oldSize)) {
			this->scrollUnderway = false;
			view->setSize(newSize);
			this->isViewSizeSet = true;
			fireStateChanged();
		}
	}
}

$Point* JViewport::getViewPosition() {
	$useLocalCurrentObjectStackCache();
	$var($Component, view, getView());
	if (view != nullptr) {
		$var($Point, p, view->getLocation());
		$nc(p)->x = -p->x;
		p->y = -p->y;
		return p;
	} else {
		return $new($Point, 0, 0);
	}
}

void JViewport::setViewPosition($Point* p) {
	$useLocalCurrentObjectStackCache();
	$var($Component, view, getView());
	if (view == nullptr) {
		return;
	}
	int32_t oldX = 0;
	int32_t oldY = 0;
	int32_t x = $nc(p)->x;
	int32_t y = p->y;
	if ($instanceOf($JComponent, view)) {
		$var($JComponent, c, $cast($JComponent, view));
		oldX = $nc(c)->getX();
		oldY = c->getY();
	} else {
		$var($Rectangle, r, $nc(view)->getBounds());
		oldX = $nc(r)->x;
		oldY = r->y;
	}
	int32_t newX = -x;
	int32_t newY = -y;
	if ((oldX != newX) || (oldY != newY)) {
		bool var$0 = !this->waitingForRepaint && isBlitting();
		if (var$0 && canUseWindowBlitter()) {
			$var($RepaintManager, rm, $RepaintManager::currentManager(static_cast<$JComponent*>(this)));
			$var($JComponent, jview, $cast($JComponent, view));
			$var($Rectangle, dirty, $nc(rm)->getDirtyRegion(jview));
			if (dirty == nullptr || !$nc(dirty)->contains($($nc(jview)->getVisibleRect()))) {
				rm->beginPaint();
				{
					$var($Throwable, var$1, nullptr);
					try {
						$var($Graphics, g, $JComponent::safelyGetGraphics(this));
						flushViewDirtyRegion(g, dirty);
						$nc(view)->setLocation(newX, newY);
						int32_t var$2 = getWidth();
						int32_t var$3 = getHeight();
						$var($Rectangle, r, $new($Rectangle, 0, 0, var$2, $Math::min(var$3, $nc(jview)->getHeight())));
						$nc(g)->setClip(r);
						bool var$4 = windowBlitPaint(g);
						this->repaintAll = (var$4 && needsRepaintAfterBlit());
						g->dispose();
						rm->notifyRepaintPerformed(this, r->x, r->y, r->width, r->height);
						rm->markCompletelyClean($cast($JComponent, $(getParent())));
						rm->markCompletelyClean(this);
						rm->markCompletelyClean(jview);
					} catch ($Throwable& var$5) {
						$assign(var$1, var$5);
					} /*finally*/ {
						rm->endPaint();
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			} else {
				$nc(view)->setLocation(newX, newY);
				this->repaintAll = false;
			}
		} else {
			this->scrollUnderway = true;
			$nc(view)->setLocation(newX, newY);
			this->repaintAll = false;
		}
		revalidate();
		fireStateChanged();
	}
}

$Rectangle* JViewport::getViewRect() {
	$useLocalCurrentObjectStackCache();
	$var($Point, var$0, getViewPosition());
	return $new($Rectangle, var$0, $(getExtentSize()));
}

bool JViewport::computeBlit(int32_t dx, int32_t dy, $Point* blitFrom, $Point* blitTo, $Dimension* blitSize, $Rectangle* blitPaint) {
	int32_t dxAbs = $Math::abs(dx);
	int32_t dyAbs = $Math::abs(dy);
	$var($Dimension, extentSize, getExtentSize());
	if ((dx == 0) && (dy != 0) && (dyAbs < $nc(extentSize)->height)) {
		if (dy < 0) {
			$nc(blitFrom)->y = -dy;
			$nc(blitTo)->y = 0;
			$nc(blitPaint)->y = extentSize->height + dy;
		} else {
			$nc(blitFrom)->y = 0;
			$nc(blitTo)->y = dy;
			$nc(blitPaint)->y = 0;
		}
		$nc(blitPaint)->x = ($nc(blitFrom)->x = ($nc(blitTo)->x = 0));
		$nc(blitSize)->width = extentSize->width;
		blitSize->height = extentSize->height - dyAbs;
		blitPaint->width = extentSize->width;
		blitPaint->height = dyAbs;
		return true;
	} else if ((dy == 0) && (dx != 0) && (dxAbs < extentSize->width)) {
		if (dx < 0) {
			$nc(blitFrom)->x = -dx;
			$nc(blitTo)->x = 0;
			$nc(blitPaint)->x = extentSize->width + dx;
		} else {
			$nc(blitFrom)->x = 0;
			$nc(blitTo)->x = dx;
			$nc(blitPaint)->x = 0;
		}
		$nc(blitPaint)->y = ($nc(blitFrom)->y = ($nc(blitTo)->y = 0));
		$nc(blitSize)->width = extentSize->width - dxAbs;
		blitSize->height = extentSize->height;
		blitPaint->width = dxAbs;
		blitPaint->height = extentSize->height;
		return true;
	} else {
		return false;
	}
}

$Dimension* JViewport::getExtentSize() {
	return getSize();
}

$Dimension* JViewport::toViewCoordinates($Dimension* size) {
	return $new($Dimension, size);
}

$Point* JViewport::toViewCoordinates($Point* p) {
	return $new($Point, p);
}

void JViewport::setExtentSize($Dimension* newExtent) {
	$var($Dimension, oldExtent, getExtentSize());
	if (!$nc(newExtent)->equals(oldExtent)) {
		setSize(newExtent);
		fireStateChanged();
	}
}

$JViewport$ViewListener* JViewport::createViewListener() {
	return $new($JViewport$ViewListener, this);
}

$LayoutManager* JViewport::createLayoutManager() {
	$init($ViewportLayout);
	return $ViewportLayout::SHARED_INSTANCE;
}

void JViewport::addChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->add($ChangeListener::class$, l);
}

void JViewport::removeChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->remove($ChangeListener::class$, l);
}

$ChangeListenerArray* JViewport::getChangeListeners() {
	$load($ChangeListener);
	return $fcast($ChangeListenerArray, $nc(this->listenerList)->getListeners($ChangeListener::class$));
}

void JViewport::fireStateChanged() {
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

void JViewport::repaint(int64_t tm, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Container, parent, getParent());
	if (parent != nullptr) {
		int64_t var$0 = tm;
		int32_t var$1 = x + getX();
		parent->repaint(var$0, var$1, y + getY(), w, h);
	} else {
		$JComponent::repaint(tm, x, y, w, h);
	}
}

$String* JViewport::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, isViewSizeSetString, this->isViewSizeSet ? "true"_s : "false"_s);
	$var($String, lastPaintPositionString, this->lastPaintPosition != nullptr ? $nc(this->lastPaintPosition)->toString() : ""_s);
	$var($String, scrollUnderwayString, this->scrollUnderway ? "true"_s : "false"_s);
	return $str({$($JComponent::paramString()), ",isViewSizeSet="_s, isViewSizeSetString, ",lastPaintPosition="_s, lastPaintPositionString, ",scrollUnderway="_s, scrollUnderwayString});
}

void JViewport::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	$JComponent::firePropertyChange(propertyName, oldValue, newValue);
	if ($nc(propertyName)->equals(JViewport::EnableWindowBlit)) {
		if (newValue != nullptr) {
			setScrollMode(JViewport::BLIT_SCROLL_MODE);
		} else {
			setScrollMode(JViewport::SIMPLE_SCROLL_MODE);
		}
	}
}

bool JViewport::needsRepaintAfterBlit() {
	$useLocalCurrentObjectStackCache();
	$var($Component, heavyParent, getParent());
	while (heavyParent != nullptr && heavyParent->isLightweight()) {
		$assign(heavyParent, heavyParent->getParent());
	}
	if (heavyParent != nullptr) {
		$var($ComponentPeer, peer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(heavyParent));
		bool var$0 = peer != nullptr && peer->canDetermineObscurity();
		if (var$0 && !peer->isObscured()) {
			return false;
		}
	}
	return true;
}

$Timer* JViewport::createRepaintTimer() {
	$useLocalCurrentObjectStackCache();
	$var($Timer, timer, $new($Timer, 300, $$new($JViewport$1, this)));
	timer->setRepeats(false);
	return timer;
}

void JViewport::flushViewDirtyRegion($Graphics* g, $Rectangle* dirty) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, view, $cast($JComponent, getView()));
	if (dirty != nullptr && dirty->width > 0 && dirty->height > 0) {
		dirty->x += $nc(view)->getX();
		dirty->y += view->getY();
		$var($Rectangle, clip, $nc(g)->getClipBounds());
		if (clip == nullptr) {
			int32_t var$0 = getWidth();
			g->setClip(0, 0, var$0, getHeight());
		}
		g->clipRect(dirty->x, dirty->y, dirty->width, dirty->height);
		$assign(clip, g->getClipBounds());
		if ($nc(clip)->width > 0 && clip->height > 0) {
			paintView(g);
		}
	}
}

bool JViewport::windowBlitPaint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	int32_t width = getWidth();
	int32_t height = getHeight();
	if ((width == 0) || (height == 0)) {
		return false;
	}
	bool retValue = false;
	$var($RepaintManager, rm, $RepaintManager::currentManager(static_cast<$JComponent*>(this)));
	$var($JComponent, view, $cast($JComponent, getView()));
	if (this->lastPaintPosition == nullptr || $nc(this->lastPaintPosition)->equals($(getViewLocation()))) {
		paintView(g);
		retValue = false;
	} else {
		$var($Point, blitFrom, $new($Point));
		$var($Point, blitTo, $new($Point));
		$var($Dimension, blitSize, $new($Dimension));
		$var($Rectangle, blitPaint, $new($Rectangle));
		$var($Point, newLocation, getViewLocation());
		int32_t dx = $nc(newLocation)->x - $nc(this->lastPaintPosition)->x;
		int32_t dy = newLocation->y - $nc(this->lastPaintPosition)->y;
		bool canBlit = computeBlit(dx, dy, blitFrom, blitTo, blitSize, blitPaint);
		if (!canBlit) {
			paintView(g);
			retValue = false;
		} else {
			$var($Rectangle, r, $nc($($nc(view)->getBounds()))->intersection(blitPaint));
			$nc(r)->x -= view->getX();
			r->y -= view->getY();
			blitDoubleBuffered(view, g, r->x, r->y, r->width, r->height, blitFrom->x, blitFrom->y, blitTo->x, blitTo->y, blitSize->width, blitSize->height);
			retValue = true;
		}
	}
	$set(this, lastPaintPosition, getViewLocation());
	return retValue;
}

void JViewport::blitDoubleBuffered($JComponent* view, $Graphics* g, int32_t clipX, int32_t clipY, int32_t clipW, int32_t clipH, int32_t blitFromX, int32_t blitFromY, int32_t blitToX, int32_t blitToY, int32_t blitW, int32_t blitH) {
	$useLocalCurrentObjectStackCache();
	$var($RepaintManager, rm, $RepaintManager::currentManager(static_cast<$JComponent*>(this)));
	int32_t bdx = blitToX - blitFromX;
	int32_t bdy = blitToY - blitFromY;
	$var($Composite, oldComposite, nullptr);
	if ($instanceOf($Graphics2D, g)) {
		$var($Graphics2D, g2d, $cast($Graphics2D, g));
		$assign(oldComposite, $nc(g2d)->getComposite());
		$init($AlphaComposite);
		g2d->setComposite($AlphaComposite::Src);
	}
	$nc(rm)->copyArea(this, g, blitFromX, blitFromY, blitW, blitH, bdx, bdy, false);
	if (oldComposite != nullptr) {
		$nc(($cast($Graphics2D, g)))->setComposite(oldComposite);
	}
	int32_t x = $nc(view)->getX();
	int32_t y = view->getY();
	$nc(g)->translate(x, y);
	g->setClip(clipX, clipY, clipW, clipH);
	view->paintForceDoubleBuffered(g);
	g->translate(-x, -y);
}

void JViewport::paintView($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, clip, $nc(g)->getClipBounds());
	$var($JComponent, view, $cast($JComponent, getView()));
	int32_t var$0 = $nc(view)->getWidth();
	if (var$0 >= getWidth()) {
		int32_t x = view->getX();
		int32_t y = view->getY();
		g->translate(x, y);
		g->setClip($nc(clip)->x - x, clip->y - y, clip->width, clip->height);
		view->paintForceDoubleBuffered(g);
		g->translate(-x, -y);
		g->setClip($nc(clip)->x, clip->y, clip->width, clip->height);
	} else {
		{
			$var($Throwable, var$1, nullptr);
			try {
				this->inBlitPaint = true;
				paintForceDoubleBuffered(g);
			} catch ($Throwable& var$2) {
				$assign(var$1, var$2);
			} /*finally*/ {
				this->inBlitPaint = false;
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	}
}

bool JViewport::canUseWindowBlitter() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !isShowing();
	if (!var$0) {
		bool var$1 = !($instanceOf($JComponent, $(getParent())));
		var$0 = (var$1 && !($instanceOf($JComponent, $(getView()))));
	}
	if (var$0) {
		return false;
	}
	if (isPainting()) {
		return false;
	}
	$var($Rectangle, dirtyRegion, $nc($($RepaintManager::currentManager(static_cast<$JComponent*>(this))))->getDirtyRegion($cast($JComponent, $(getParent()))));
	if (dirtyRegion != nullptr && dirtyRegion->width > 0 && dirtyRegion->height > 0) {
		return false;
	}
	int32_t var$2 = getWidth();
	$var($Rectangle, clip, $new($Rectangle, 0, 0, var$2, getHeight()));
	$var($Rectangle, oldClip, $new($Rectangle));
	$var($Rectangle, tmp2, nullptr);
	$var($Container, parent, nullptr);
	$var($Component, lastParent, nullptr);
	int32_t x = 0;
	int32_t y = 0;
	int32_t w = 0;
	int32_t h = 0;
	for ($assign(parent, this); parent != nullptr && isLightweightComponent(parent); $assign(parent, parent->getParent())) {
		x = $nc(parent)->getX();
		y = parent->getY();
		w = parent->getWidth();
		h = parent->getHeight();
		oldClip->setBounds(clip);
		$SwingUtilities::computeIntersection(0, 0, w, h, clip);
		if (!clip->equals(oldClip)) {
			return false;
		}
		if (lastParent != nullptr && $instanceOf($JComponent, parent) && !$nc(($cast($JComponent, parent)))->isOptimizedDrawingEnabled()) {
			$var($ComponentArray, comps, parent->getComponents());
			int32_t index = 0;
			for (int32_t i = $nc(comps)->length - 1; i >= 0; --i) {
				if (comps->get(i) == lastParent) {
					index = i - 1;
					break;
				}
			}
			while (index >= 0) {
				$assign(tmp2, $nc(comps->get(index))->getBounds(tmp2));
				if ($nc(tmp2)->intersects(clip)) {
					return false;
				}
				--index;
			}
		}
		clip->x += x;
		clip->y += y;
		$assign(lastParent, parent);
	}
	if (parent == nullptr) {
		return false;
	}
	return true;
}

$AccessibleContext* JViewport::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JViewport$AccessibleJViewport, this));
	}
	return this->accessibleContext;
}

void clinit$JViewport($Class* class$) {
	$assignStatic(JViewport::uiClassID, "ViewportUI"_s);
	$assignStatic(JViewport::EnableWindowBlit, "EnableWindowBlit"_s);
}

JViewport::JViewport() {
}

$Class* JViewport::load$($String* name, bool initialize) {
	$loadClass(JViewport, name, initialize, &_JViewport_ClassInfo_, clinit$JViewport, allocate$JViewport);
	return class$;
}

$Class* JViewport::class$ = nullptr;

	} // swing
} // javax