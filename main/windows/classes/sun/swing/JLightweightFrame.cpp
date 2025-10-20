#include <sun/swing/JLightweightFrame.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Font.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/MouseInfo.h>
#include <java/awt/Point.h>
#include <java/awt/PointerInfo.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/dnd/peer/DragSourceContextPeer.h>
#include <java/awt/event/ContainerListener.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/InternalFrameFocusTraversalPolicy.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/LayoutFocusTraversalPolicy.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/SortingFocusTraversalPolicy.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/LightweightFrame.h>
#include <sun/awt/OverrideNativeWindowHandle.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/swing/JLightweightFrame$1.h>
#include <sun/swing/JLightweightFrame$2.h>
#include <sun/swing/JLightweightFrame$3.h>
#include <sun/swing/JLightweightFrame$4.h>
#include <sun/swing/LightweightContent.h>
#include <sun/swing/SwingAccessor$JLightweightFrameAccessor.h>
#include <sun/swing/SwingAccessor$RepaintManagerAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2$RepaintListener.h>
#include <jcpp.h>

#undef CENTER
#undef TYPE_INT_ARGB_PRE

using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Font = ::java::awt::Font;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $MouseInfo = ::java::awt::MouseInfo;
using $Point = ::java::awt::Point;
using $PointerInfo = ::java::awt::PointerInfo;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
using $DragSource = ::java::awt::dnd::DragSource;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $DragSourceContextPeer = ::java::awt::dnd::peer::DragSourceContextPeer;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $InternalFrameFocusTraversalPolicy = ::javax::swing::InternalFrameFocusTraversalPolicy;
using $JComponent = ::javax::swing::JComponent;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JPanel = ::javax::swing::JPanel;
using $JRootPane = ::javax::swing::JRootPane;
using $LayoutFocusTraversalPolicy = ::javax::swing::LayoutFocusTraversalPolicy;
using $RepaintManager = ::javax::swing::RepaintManager;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SortingFocusTraversalPolicy = ::javax::swing::SortingFocusTraversalPolicy;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $LightweightFrame = ::sun::awt::LightweightFrame;
using $OverrideNativeWindowHandle = ::sun::awt::OverrideNativeWindowHandle;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $JLightweightFrame$1 = ::sun::swing::JLightweightFrame$1;
using $JLightweightFrame$2 = ::sun::swing::JLightweightFrame$2;
using $JLightweightFrame$3 = ::sun::swing::JLightweightFrame$3;
using $JLightweightFrame$4 = ::sun::swing::JLightweightFrame$4;
using $LightweightContent = ::sun::swing::LightweightContent;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$JLightweightFrameAccessor = ::sun::swing::SwingAccessor$JLightweightFrameAccessor;
using $SwingAccessor$RepaintManagerAccessor = ::sun::swing::SwingAccessor$RepaintManagerAccessor;
using $SwingUtilities2$RepaintListener = ::sun::swing::SwingUtilities2$RepaintListener;

namespace sun {
	namespace swing {

class JLightweightFrame$$Lambda$lambda$new$0 : public $SwingUtilities2$RepaintListener {
	$class(JLightweightFrame$$Lambda$lambda$new$0, $NO_CLASS_INIT, $SwingUtilities2$RepaintListener)
public:
	void init$(JLightweightFrame* inst) {
		$set(this, inst$, inst);
	}
	virtual void repaintPerformed($JComponent* c, int32_t x, int32_t y, int32_t w, int32_t h) override {
		$nc(inst$)->lambda$new$0(c, x, y, w, h);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JLightweightFrame$$Lambda$lambda$new$0>());
	}
	JLightweightFrame* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JLightweightFrame$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JLightweightFrame$$Lambda$lambda$new$0, inst$)},
	{}
};
$MethodInfo JLightweightFrame$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Lsun/swing/JLightweightFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(JLightweightFrame$$Lambda$lambda$new$0::*)(JLightweightFrame*)>(&JLightweightFrame$$Lambda$lambda$new$0::init$))},
	{"repaintPerformed", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JLightweightFrame$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.swing.JLightweightFrame$$Lambda$lambda$new$0",
	"java.lang.Object",
	"sun.swing.SwingUtilities2$RepaintListener",
	fieldInfos,
	methodInfos
};
$Class* JLightweightFrame$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(JLightweightFrame$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JLightweightFrame$$Lambda$lambda$new$0::class$ = nullptr;

$FieldInfo _JLightweightFrame_FieldInfo_[] = {
	{"rootPane", "Ljavax/swing/JRootPane;", nullptr, $PRIVATE | $FINAL, $field(JLightweightFrame, rootPane)},
	{"content", "Lsun/swing/LightweightContent;", nullptr, $PRIVATE, $field(JLightweightFrame, content)},
	{"component", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(JLightweightFrame, component)},
	{"contentPane", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(JLightweightFrame, contentPane)},
	{"bbImage", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $field(JLightweightFrame, bbImage)},
	{"scaleFactorX", "D", nullptr, $PRIVATE | $VOLATILE, $field(JLightweightFrame, scaleFactorX)},
	{"scaleFactorY", "D", nullptr, $PRIVATE | $VOLATILE, $field(JLightweightFrame, scaleFactorY)},
	{"copyBufferEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(JLightweightFrame, copyBufferEnabled)},
	{"copyBuffer", "[I", nullptr, $PRIVATE, $field(JLightweightFrame, copyBuffer)},
	{"layoutSizeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(JLightweightFrame, layoutSizeListener)},
	{"repaintListener", "Lsun/swing/SwingUtilities2$RepaintListener;", nullptr, $PRIVATE, $field(JLightweightFrame, repaintListener)},
	{}
};

$MethodInfo _JLightweightFrame_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JLightweightFrame::*)()>(&JLightweightFrame::init$))},
	{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"createDragGestureRecognizer", "(Ljava/lang/Class;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)Ljava/awt/dnd/DragGestureRecognizer;", "<T:Ljava/awt/dnd/DragGestureRecognizer;>(Ljava/lang/Class<TT;>;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)TT;", $PUBLIC},
	{"createDragSourceContextPeer", "(Ljava/awt/dnd/DragGestureEvent;)Ljava/awt/dnd/peer/DragSourceContextPeer;", nullptr, $PUBLIC, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getContentPane", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getGlassPane", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getLayeredPane", "()Ljavax/swing/JLayeredPane;", nullptr, $PUBLIC},
	{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PUBLIC},
	{"getScaleFactor", "()I", nullptr, $PUBLIC},
	{"getScaleFactorX", "()D", nullptr, $PUBLIC},
	{"getScaleFactorY", "()D", nullptr, $PUBLIC},
	{"grabFocus", "()V", nullptr, $PUBLIC},
	{"initInterior", "()V", nullptr, $PRIVATE, $method(static_cast<void(JLightweightFrame::*)()>(&JLightweightFrame::initInterior))},
	{"lambda$new$0", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(JLightweightFrame::*)($JComponent*,int32_t,int32_t,int32_t,int32_t)>(&JLightweightFrame::lambda$new$0))},
	{"notifyDisplayChanged", "(I)V", nullptr, $PUBLIC},
	{"notifyDisplayChanged", "(DD)V", nullptr, $PUBLIC},
	{"notifyImageUpdated", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(JLightweightFrame::*)(int32_t,int32_t,int32_t,int32_t)>(&JLightweightFrame::notifyImageUpdated))},
	{"overrideNativeWindowHandle", "(JLjava/lang/Runnable;)V", nullptr, $PUBLIC, $method(static_cast<void(JLightweightFrame::*)(int64_t,$Runnable*)>(&JLightweightFrame::overrideNativeWindowHandle))},
	{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"reshape", "(IIII)V", nullptr, $PUBLIC},
	{"resizeBuffer", "(IIDD)V", nullptr, $PRIVATE, $method(static_cast<void(JLightweightFrame::*)(int32_t,int32_t,double,double)>(&JLightweightFrame::resizeBuffer))},
	{"setContent", "(Lsun/swing/LightweightContent;)V", nullptr, $PUBLIC, $method(static_cast<void(JLightweightFrame::*)($LightweightContent*)>(&JLightweightFrame::setContent))},
	{"setContentPane", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"setGlassPane", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setLayeredPane", "(Ljavax/swing/JLayeredPane;)V", nullptr, $PUBLIC},
	{"syncCopyBuffer", "(ZIIIIDD)V", nullptr, $PRIVATE, $method(static_cast<void(JLightweightFrame::*)(bool,int32_t,int32_t,int32_t,int32_t,double,double)>(&JLightweightFrame::syncCopyBuffer))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"ungrabFocus", "()V", nullptr, $PUBLIC},
	{"updateClientCursor", "()V", nullptr, $PRIVATE, $method(static_cast<void(JLightweightFrame::*)()>(&JLightweightFrame::updateClientCursor))},
	{}
};

$InnerClassInfo _JLightweightFrame_InnerClassesInfo_[] = {
	{"sun.swing.JLightweightFrame$4", nullptr, nullptr, 0},
	{"sun.swing.JLightweightFrame$3", nullptr, nullptr, 0},
	{"sun.swing.JLightweightFrame$2", nullptr, nullptr, 0},
	{"sun.swing.JLightweightFrame$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JLightweightFrame_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.swing.JLightweightFrame",
	"sun.awt.LightweightFrame",
	"javax.swing.RootPaneContainer",
	_JLightweightFrame_FieldInfo_,
	_JLightweightFrame_MethodInfo_,
	nullptr,
	nullptr,
	_JLightweightFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.swing.JLightweightFrame$4,sun.swing.JLightweightFrame$3,sun.swing.JLightweightFrame$3$1,sun.swing.JLightweightFrame$2,sun.swing.JLightweightFrame$1"
};

$Object* allocate$JLightweightFrame($Class* clazz) {
	return $of($alloc(JLightweightFrame));
}

$String* JLightweightFrame::toString() {
	 return this->$LightweightFrame::toString();
}

int32_t JLightweightFrame::hashCode() {
	 return this->$LightweightFrame::hashCode();
}

bool JLightweightFrame::equals(Object$* arg0) {
	 return this->$LightweightFrame::equals(arg0);
}

$Object* JLightweightFrame::clone() {
	 return this->$LightweightFrame::clone();
}

void JLightweightFrame::finalize() {
	this->$LightweightFrame::finalize();
}


bool JLightweightFrame::copyBufferEnabled = false;

void JLightweightFrame::init$() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$LightweightFrame::init$();
	$set(this, rootPane, $new($JRootPane));
	$var($AffineTransform, defaultTransform, $nc($(getGraphicsConfiguration()))->getDefaultTransform());
	this->scaleFactorX = $nc(defaultTransform)->getScaleX();
	this->scaleFactorY = defaultTransform->getScaleY();
	JLightweightFrame::copyBufferEnabled = "true"_s->equals($($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.jlf.copyBufferEnabled"_s, "true"_s)))));
	$init($BorderLayout);
	add(static_cast<$Component*>(this->rootPane), $of($BorderLayout::CENTER));
	setFocusTraversalPolicy($$new($LayoutFocusTraversalPolicy));
	if ($nc($(getGraphicsConfiguration()))->isTranslucencyCapable()) {
		setBackground($$new($Color, 0, 0, 0, 0));
	}
	$set(this, layoutSizeListener, $new($JLightweightFrame$2, this));
	$set(this, repaintListener, static_cast<$SwingUtilities2$RepaintListener*>($new(JLightweightFrame$$Lambda$lambda$new$0, this)));
	$nc($($SwingAccessor::getRepaintManagerAccessor()))->addRepaintListener($($RepaintManager::currentManager(static_cast<$Component*>(this))), this->repaintListener);
}

void JLightweightFrame::dispose() {
	$useLocalCurrentObjectStackCache();
	$nc($($SwingAccessor::getRepaintManagerAccessor()))->removeRepaintListener($($RepaintManager::currentManager(static_cast<$Component*>(this))), this->repaintListener);
	$LightweightFrame::dispose();
}

void JLightweightFrame::setContent($LightweightContent* content) {
	if (content == nullptr) {
		$init($System);
		$nc($System::err)->println("JLightweightFrame.setContent: content may not be null!"_s);
		return;
	}
	$set(this, content, content);
	$set(this, component, $nc(content)->getComponent());
	$var($Dimension, d, $nc(this->component)->getPreferredSize());
	content->preferredSizeChanged($nc(d)->width, d->height);
	$assign(d, $nc(this->component)->getMaximumSize());
	content->maximumSizeChanged($nc(d)->width, d->height);
	$assign(d, $nc(this->component)->getMinimumSize());
	content->minimumSizeChanged($nc(d)->width, d->height);
	initInterior();
}

$Graphics* JLightweightFrame::getGraphics() {
	$useLocalCurrentObjectStackCache();
	if (this->bbImage == nullptr) {
		return nullptr;
	}
	$var($Graphics2D, g, $nc(this->bbImage)->createGraphics());
	$nc(g)->setBackground($(getBackground()));
	g->setColor($(getForeground()));
	g->setFont($(getFont()));
	g->scale(this->scaleFactorX, this->scaleFactorY);
	return g;
}

void JLightweightFrame::grabFocus() {
	if (this->content != nullptr) {
		$nc(this->content)->focusGrabbed();
	}
}

void JLightweightFrame::ungrabFocus() {
	if (this->content != nullptr) {
		$nc(this->content)->focusUngrabbed();
	}
}

int32_t JLightweightFrame::getScaleFactor() {
	return $cast(int32_t, this->scaleFactorX);
}

double JLightweightFrame::getScaleFactorX() {
	return this->scaleFactorX;
}

double JLightweightFrame::getScaleFactorY() {
	return this->scaleFactorY;
}

void JLightweightFrame::notifyDisplayChanged(int32_t scaleFactor) {
	notifyDisplayChanged((double)scaleFactor, (double)scaleFactor);
}

void JLightweightFrame::notifyDisplayChanged(double scaleFactorX, double scaleFactorY) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $Double::compare(scaleFactorX, this->scaleFactorX) != 0;
	if (var$0 || $Double::compare(scaleFactorY, this->scaleFactorY) != 0) {
		if (!JLightweightFrame::copyBufferEnabled) {
			$nc(this->content)->paintLock();
		}
		{
			$var($Throwable, var$1, nullptr);
			try {
				if (this->bbImage != nullptr) {
					int32_t var$2 = getWidth();
					resizeBuffer(var$2, getHeight(), scaleFactorX, scaleFactorY);
				}
			} catch ($Throwable&) {
				$assign(var$1, $catch());
			} /*finally*/ {
				if (!JLightweightFrame::copyBufferEnabled) {
					$nc(this->content)->paintUnlock();
				}
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
		this->scaleFactorX = scaleFactorX;
		this->scaleFactorY = scaleFactorY;
		if (isVisible()) {
			$var($Object, peer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this));
			if ($instanceOf($DisplayChangedListener, peer)) {
				$nc(($cast($DisplayChangedListener, peer)))->displayChanged();
			}
			repaint();
		}
	}
}

void JLightweightFrame::addNotify() {
	$useLocalCurrentObjectStackCache();
	$LightweightFrame::addNotify();
	$var($Object, peer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this));
	if ($instanceOf($DisplayChangedListener, peer)) {
		$nc(($cast($DisplayChangedListener, peer)))->displayChanged();
	}
}

void JLightweightFrame::syncCopyBuffer(bool reset, int32_t x, int32_t y, int32_t w, int32_t h, double scaleX, double scaleY) {
	$useLocalCurrentObjectStackCache();
	$nc(this->content)->paintLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($ints, srcBuffer, $nc(($cast($DataBufferInt, $($nc($($nc(this->bbImage)->getRaster()))->getDataBuffer()))))->getData());
			if (reset) {
				$set(this, copyBuffer, $new($ints, $nc(srcBuffer)->length));
			}
			int32_t linestride = $nc(this->bbImage)->getWidth();
			int32_t startX = $cast(int32_t, $Math::floor(x * scaleX));
			int32_t startY = $cast(int32_t, $Math::floor(y * scaleY));
			int32_t width = $cast(int32_t, $Math::ceil((x + w) * scaleX)) - startX;
			int32_t height = $cast(int32_t, $Math::ceil((y + h) * scaleY)) - startY;
			if (startX + width > linestride) {
				width = linestride - startX;
			}
			if (startY + height > $nc(this->bbImage)->getHeight()) {
				height = $nc(this->bbImage)->getHeight() - startY;
			}
			for (int32_t i = 0; i < height; ++i) {
				int32_t from = (startY + i) * linestride + startX;
				$System::arraycopy(srcBuffer, from, this->copyBuffer, from, width);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->content)->paintUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JLightweightFrame::notifyImageUpdated(int32_t x, int32_t y, int32_t width, int32_t height) {
	if (JLightweightFrame::copyBufferEnabled) {
		syncCopyBuffer(false, x, y, width, height, this->scaleFactorX, this->scaleFactorY);
	}
	$nc(this->content)->imageUpdated(x, y, width, height);
}

void JLightweightFrame::initInterior() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$set(this, contentPane, $new($JLightweightFrame$3, this));
	$nc(this->contentPane)->setLayout($$new($BorderLayout));
	$nc(this->contentPane)->add(this->component);
	if ("true"_s->equals($($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.jlf.contentPaneTransparent"_s, "false"_s)))))) {
		$nc(this->contentPane)->setOpaque(false);
	}
	setContentPane(this->contentPane);
	$nc(this->contentPane)->addContainerListener($$new($JLightweightFrame$4, this));
}

void JLightweightFrame::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	$LightweightFrame::reshape(x, y, width, height);
	if (width == 0 || height == 0) {
		return;
	}
	if (!JLightweightFrame::copyBufferEnabled) {
		$nc(this->content)->paintLock();
	}
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			bool createBB = (this->bbImage == nullptr);
			int32_t newW = width;
			int32_t newH = height;
			if (this->bbImage != nullptr) {
				int32_t imgWidth = (int32_t)$Math::round($nc(this->bbImage)->getWidth() / this->scaleFactorX);
				int32_t imgHeight = (int32_t)$Math::round($nc(this->bbImage)->getHeight() / this->scaleFactorY);
				if (width != imgWidth || height != imgHeight) {
					createBB = true;
					if (this->bbImage != nullptr) {
						int32_t oldW = imgWidth;
						int32_t oldH = imgHeight;
						if ((oldW >= newW) && (oldH >= newH)) {
							createBB = false;
						} else {
							if (oldW >= newW) {
								newW = oldW;
							} else {
								newW = $Math::max($cast(int32_t, (oldW * 1.2)), width);
							}
							if (oldH >= newH) {
								newH = oldH;
							} else {
								newH = $Math::max($cast(int32_t, (oldH * 1.2)), height);
							}
						}
					}
				}
			}
			if (createBB) {
				resizeBuffer(newW, newH, this->scaleFactorX, this->scaleFactorY);
				return$1 = true;
				goto $finally;
			}
			$nc(this->content)->imageReshaped(0, 0, width, height);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			if (!JLightweightFrame::copyBufferEnabled) {
				$nc(this->content)->paintUnlock();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void JLightweightFrame::resizeBuffer(int32_t width, int32_t height, double newScaleFactorX, double newScaleFactorY) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = (int32_t)$Math::round(width * newScaleFactorX);
	$set(this, bbImage, $new($BufferedImage, var$0, (int32_t)$Math::round(height * newScaleFactorY), $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($ints, pixels, $nc(($cast($DataBufferInt, $($nc($($nc(this->bbImage)->getRaster()))->getDataBuffer()))))->getData());
	if (JLightweightFrame::copyBufferEnabled) {
		syncCopyBuffer(true, 0, 0, width, height, newScaleFactorX, newScaleFactorY);
		$assign(pixels, this->copyBuffer);
	}
	$nc(this->content)->imageBufferReset(pixels, 0, 0, width, height, $nc(this->bbImage)->getWidth(), newScaleFactorX, newScaleFactorY);
}

$JRootPane* JLightweightFrame::getRootPane() {
	return this->rootPane;
}

void JLightweightFrame::setContentPane($Container* contentPane) {
	$nc($(getRootPane()))->setContentPane(contentPane);
}

$Container* JLightweightFrame::getContentPane() {
	return $nc($(getRootPane()))->getContentPane();
}

void JLightweightFrame::setLayeredPane($JLayeredPane* layeredPane) {
	$nc($(getRootPane()))->setLayeredPane(layeredPane);
}

$JLayeredPane* JLightweightFrame::getLayeredPane() {
	return $nc($(getRootPane()))->getLayeredPane();
}

void JLightweightFrame::setGlassPane($Component* glassPane) {
	$nc($(getRootPane()))->setGlassPane(glassPane);
}

$Component* JLightweightFrame::getGlassPane() {
	return $nc($(getRootPane()))->getGlassPane();
}

void JLightweightFrame::updateClientCursor() {
	$useLocalCurrentObjectStackCache();
	$var($PointerInfo, pointerInfo, $MouseInfo::getPointerInfo());
	if (pointerInfo == nullptr) {
		return;
	}
	$var($Point, p, $nc(pointerInfo)->getLocation());
	$SwingUtilities::convertPointFromScreen(p, this);
	$var($Component, target, $SwingUtilities::getDeepestComponentAt(this, $nc(p)->x, p->y));
	if (target != nullptr) {
		$nc(this->content)->setCursor($(target->getCursor()));
	}
}

void JLightweightFrame::overrideNativeWindowHandle(int64_t handle, $Runnable* closeWindow) {
	$useLocalCurrentObjectStackCache();
	$var($Object, peer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this));
	if ($instanceOf($OverrideNativeWindowHandle, peer)) {
		$nc(($cast($OverrideNativeWindowHandle, peer)))->overrideWindowHandle(handle);
	}
	if (closeWindow != nullptr) {
		closeWindow->run();
	}
}

$DragGestureRecognizer* JLightweightFrame::createDragGestureRecognizer($Class* abstractRecognizerClass, $DragSource* ds, $Component* c, int32_t srcActions, $DragGestureListener* dgl) {
	return this->content == nullptr ? ($DragGestureRecognizer*)nullptr : $nc(this->content)->createDragGestureRecognizer(abstractRecognizerClass, ds, c, srcActions, dgl);
}

$DragSourceContextPeer* JLightweightFrame::createDragSourceContextPeer($DragGestureEvent* dge) {
	return this->content == nullptr ? ($DragSourceContextPeer*)nullptr : $nc(this->content)->createDragSourceContextPeer(dge);
}

void JLightweightFrame::addDropTarget($DropTarget* dt) {
	if (this->content == nullptr) {
		return;
	}
	$nc(this->content)->addDropTarget(dt);
}

void JLightweightFrame::removeDropTarget($DropTarget* dt) {
	if (this->content == nullptr) {
		return;
	}
	$nc(this->content)->removeDropTarget(dt);
}

void JLightweightFrame::lambda$new$0($JComponent* c, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Window, jlf, $SwingUtilities::getWindowAncestor(c));
	if (!$equals(jlf, this)) {
		return;
	}
	$var($Point, p, $SwingUtilities::convertPoint(c, x, y, jlf));
	int32_t var$0 = (int32_t)$Math::round($nc(this->bbImage)->getWidth() / this->scaleFactorX);
	$var($Rectangle, r, $$new($Rectangle, $nc(p)->x, p->y, w, h)->intersection($$new($Rectangle, 0, 0, var$0, (int32_t)$Math::round($nc(this->bbImage)->getHeight() / this->scaleFactorY))));
	if (!$nc(r)->isEmpty()) {
		notifyImageUpdated(r->x, r->y, r->width, r->height);
	}
}

void clinit$JLightweightFrame($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$SwingAccessor::setJLightweightFrameAccessor($$new($JLightweightFrame$1));
		JLightweightFrame::copyBufferEnabled = "true"_s->equals($($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.jlf.copyBufferEnabled"_s, "true"_s)))));
	}
}

JLightweightFrame::JLightweightFrame() {
}

$Class* JLightweightFrame::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JLightweightFrame$$Lambda$lambda$new$0::classInfo$.name)) {
			return JLightweightFrame$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$loadClass(JLightweightFrame, name, initialize, &_JLightweightFrame_ClassInfo_, clinit$JLightweightFrame, allocate$JLightweightFrame);
	return class$;
}

$Class* JLightweightFrame::class$ = nullptr;

	} // swing
} // sun