#include <javax/swing/RepaintManager.h>

#include <com/sun/java/swing/SwingUtilities3.h>
#include <java/applet/Applet.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Image.h>
#include <java/awt/Panel.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Transparency.h>
#include <java/awt/Window.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/VolatileImage.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <javax/swing/BufferStrategyPaintManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/RepaintManager$1.h>
#include <javax/swing/RepaintManager$2.h>
#include <javax/swing/RepaintManager$3.h>
#include <javax/swing/RepaintManager$4.h>
#include <javax/swing/RepaintManager$DisplayChangedHandler.h>
#include <javax/swing/RepaintManager$DoubleBufferInfo.h>
#include <javax/swing/RepaintManager$PaintManager.h>
#include <javax/swing/RepaintManager$ProcessingRunnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jdk/internal/access/JavaSecurityAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$WindowAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/swing/SwingAccessor$RepaintManagerAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2$RepaintListener.h>
#include <jcpp.h>

#undef BUFFER_STRATEGY_NOT_SPECIFIED
#undef BUFFER_STRATEGY_SPECIFIED_OFF
#undef BUFFER_STRATEGY_SPECIFIED_ON
#undef BUFFER_STRATEGY_TYPE
#undef HANDLE_TOP_LEVEL_PAINT
#undef ICONIFIED
#undef MAX_VALUE
#undef OPAQUE
#undef TRANSLUCENT
#undef VOLATILE_LOOP_MAX

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $SwingUtilities3 = ::com::sun::java::swing::SwingUtilities3;
using $Applet = ::java::applet::Applet;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Image = ::java::awt::Image;
using $Panel = ::java::awt::Panel;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Transparency = ::java::awt::Transparency;
using $Window = ::java::awt::Window;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Runnable = ::java::lang::Runnable;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $BufferStrategyPaintManager = ::javax::swing::BufferStrategyPaintManager;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $RepaintManager$1 = ::javax::swing::RepaintManager$1;
using $RepaintManager$2 = ::javax::swing::RepaintManager$2;
using $RepaintManager$3 = ::javax::swing::RepaintManager$3;
using $RepaintManager$4 = ::javax::swing::RepaintManager$4;
using $RepaintManager$DisplayChangedHandler = ::javax::swing::RepaintManager$DisplayChangedHandler;
using $RepaintManager$DoubleBufferInfo = ::javax::swing::RepaintManager$DoubleBufferInfo;
using $RepaintManager$PaintManager = ::javax::swing::RepaintManager$PaintManager;
using $RepaintManager$ProcessingRunnable = ::javax::swing::RepaintManager$ProcessingRunnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JavaSecurityAccess = ::jdk::internal::access::JavaSecurityAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$WindowAccessor = ::sun::awt::AWTAccessor$WindowAccessor;
using $AppContext = ::sun::awt::AppContext;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$RepaintManagerAccessor = ::sun::swing::SwingAccessor$RepaintManagerAccessor;
using $SwingUtilities2$RepaintListener = ::sun::swing::SwingUtilities2$RepaintListener;

namespace javax {
	namespace swing {

$NamedAttribute RepaintManager_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _RepaintManager_MethodAnnotations_addDirtyRegion5[] = {
	{"Ljava/lang/Deprecated;", RepaintManager_Attribute_var$0},
	{}
};

$FieldInfo _RepaintManager_FieldInfo_[] = {
	{"HANDLE_TOP_LEVEL_PAINT", "Z", nullptr, $STATIC | $FINAL, $staticField(RepaintManager, HANDLE_TOP_LEVEL_PAINT)},
	{"BUFFER_STRATEGY_NOT_SPECIFIED", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RepaintManager, BUFFER_STRATEGY_NOT_SPECIFIED)},
	{"BUFFER_STRATEGY_SPECIFIED_ON", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RepaintManager, BUFFER_STRATEGY_SPECIFIED_ON)},
	{"BUFFER_STRATEGY_SPECIFIED_OFF", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RepaintManager, BUFFER_STRATEGY_SPECIFIED_OFF)},
	{"BUFFER_STRATEGY_TYPE", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RepaintManager, BUFFER_STRATEGY_TYPE)},
	{"volatileMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/GraphicsConfiguration;Ljava/awt/image/VolatileImage;>;", $PRIVATE, $field(RepaintManager, volatileMap)},
	{"hwDirtyComponents", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/Container;Ljava/awt/Rectangle;>;", $PRIVATE, $field(RepaintManager, hwDirtyComponents)},
	{"dirtyComponents", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/Component;Ljava/awt/Rectangle;>;", $PRIVATE, $field(RepaintManager, dirtyComponents)},
	{"tmpDirtyComponents", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/Component;Ljava/awt/Rectangle;>;", $PRIVATE, $field(RepaintManager, tmpDirtyComponents)},
	{"invalidComponents", "Ljava/util/List;", "Ljava/util/List<Ljava/awt/Component;>;", $PRIVATE, $field(RepaintManager, invalidComponents)},
	{"runnableList", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Runnable;>;", $PRIVATE, $field(RepaintManager, runnableList)},
	{"doubleBufferingEnabled", "Z", nullptr, 0, $field(RepaintManager, doubleBufferingEnabled)},
	{"doubleBufferMaxSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(RepaintManager, doubleBufferMaxSize)},
	{"isCustomMaxBufferSizeSet", "Z", nullptr, $PRIVATE, $field(RepaintManager, isCustomMaxBufferSizeSet)},
	{"standardDoubleBuffer", "Ljavax/swing/RepaintManager$DoubleBufferInfo;", nullptr, 0, $field(RepaintManager, standardDoubleBuffer)},
	{"paintManager", "Ljavax/swing/RepaintManager$PaintManager;", nullptr, $PRIVATE, $field(RepaintManager, paintManager)},
	{"repaintManagerKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RepaintManager, repaintManagerKey)},
	{"volatileImageBufferEnabled", "Z", nullptr, $STATIC, $staticField(RepaintManager, volatileImageBufferEnabled)},
	{"volatileBufferType", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RepaintManager, volatileBufferType)},
	{"nativeDoubleBuffering", "Z", nullptr, $PRIVATE | $STATIC, $staticField(RepaintManager, nativeDoubleBuffering)},
	{"VOLATILE_LOOP_MAX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RepaintManager, VOLATILE_LOOP_MAX)},
	{"paintDepth", "I", nullptr, $PRIVATE, $field(RepaintManager, paintDepth)},
	{"bufferStrategyType", "S", nullptr, $PRIVATE, $field(RepaintManager, bufferStrategyType)},
	{"painting", "Z", nullptr, $PRIVATE, $field(RepaintManager, painting)},
	{"repaintRoot", "Ljavax/swing/JComponent;", nullptr, $PRIVATE, $field(RepaintManager, repaintRoot)},
	{"paintThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(RepaintManager, paintThread)},
	{"processingRunnable", "Ljavax/swing/RepaintManager$ProcessingRunnable;", nullptr, $PRIVATE | $FINAL, $field(RepaintManager, processingRunnable)},
	{"javaSecurityAccess", "Ljdk/internal/access/JavaSecurityAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RepaintManager, javaSecurityAccess)},
	{"displayChangedHandler", "Lsun/awt/DisplayChangedListener;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RepaintManager, displayChangedHandler)},
	{"tmp", "Ljava/awt/Rectangle;", nullptr, 0, $field(RepaintManager, tmp)},
	{"repaintListeners", "Ljava/util/List;", "Ljava/util/List<Lsun/swing/SwingUtilities2$RepaintListener;>;", $PRIVATE, $field(RepaintManager, repaintListeners)},
	{}
};

$MethodInfo _RepaintManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RepaintManager::*)()>(&RepaintManager::init$))},
	{"<init>", "(S)V", nullptr, $PRIVATE, $method(static_cast<void(RepaintManager::*)(int16_t)>(&RepaintManager::init$))},
	{"_getOffscreenBuffer", "(Ljava/awt/Component;II)Ljava/awt/Image;", nullptr, $PRIVATE, $method(static_cast<$Image*(RepaintManager::*)($Component*,int32_t,int32_t)>(&RepaintManager::_getOffscreenBuffer))},
	{"addDirtyRegion", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC},
	{"addDirtyRegion", "(Ljava/awt/Window;IIII)V", nullptr, $PUBLIC},
	{"addDirtyRegion", "(Ljava/applet/Applet;IIII)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _RepaintManager_MethodAnnotations_addDirtyRegion5},
	{"addDirtyRegion0", "(Ljava/awt/Container;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(RepaintManager::*)($Container*,int32_t,int32_t,int32_t,int32_t)>(&RepaintManager::addDirtyRegion0))},
	{"addInvalidComponent", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addRepaintListener", "(Lsun/swing/SwingUtilities2$RepaintListener;)V", nullptr, $PRIVATE, $method(static_cast<void(RepaintManager::*)($SwingUtilities2$RepaintListener*)>(&RepaintManager::addRepaintListener))},
	{"adjustRoots", "(Ljavax/swing/JComponent;Ljava/util/List;I)V", "(Ljavax/swing/JComponent;Ljava/util/List<Ljava/awt/Component;>;I)V", $PRIVATE, $method(static_cast<void(RepaintManager::*)($JComponent*,$List*,int32_t)>(&RepaintManager::adjustRoots))},
	{"beginPaint", "()V", nullptr, 0},
	{"clearImages", "()V", nullptr, $PRIVATE, $method(static_cast<void(RepaintManager::*)()>(&RepaintManager::clearImages))},
	{"clearImages", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(RepaintManager::*)(int32_t,int32_t)>(&RepaintManager::clearImages))},
	{"collectDirtyComponents", "(Ljava/util/Map;Ljava/awt/Component;Ljava/util/List;)V", "(Ljava/util/Map<Ljava/awt/Component;Ljava/awt/Rectangle;>;Ljava/awt/Component;Ljava/util/List<Ljava/awt/Component;>;)V", 0},
	{"copyArea", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;IIIIIIZ)V", nullptr, 0},
	{"currentManager", "(Ljava/awt/Component;)Ljavax/swing/RepaintManager;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RepaintManager*(*)($Component*)>(&RepaintManager::currentManager))},
	{"currentManager", "(Lsun/awt/AppContext;)Ljavax/swing/RepaintManager;", nullptr, $STATIC, $method(static_cast<RepaintManager*(*)($AppContext*)>(&RepaintManager::currentManager))},
	{"currentManager", "(Ljavax/swing/JComponent;)Ljavax/swing/RepaintManager;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RepaintManager*(*)($JComponent*)>(&RepaintManager::currentManager))},
	{"displayChanged", "()V", nullptr, $PRIVATE, $method(static_cast<void(RepaintManager::*)()>(&RepaintManager::displayChanged))},
	{"doubleBufferingChanged", "(Ljavax/swing/JRootPane;)V", nullptr, 0},
	{"endPaint", "()V", nullptr, 0},
	{"extendDirtyRegion", "(Ljava/awt/Component;IIII)Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<bool(RepaintManager::*)($Component*,int32_t,int32_t,int32_t,int32_t)>(&RepaintManager::extendDirtyRegion))},
	{"getDelegate", "(Ljava/awt/Component;)Ljavax/swing/RepaintManager;", nullptr, $PRIVATE, $method(static_cast<RepaintManager*(RepaintManager::*)($Component*)>(&RepaintManager::getDelegate))},
	{"getDirtyRegion", "(Ljavax/swing/JComponent;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getDoubleBufferMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getOffscreenBuffer", "(Ljava/awt/Component;II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getPaintManager", "()Ljavax/swing/RepaintManager$PaintManager;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$RepaintManager$PaintManager*(RepaintManager::*)()>(&RepaintManager::getPaintManager))},
	{"getVolatileOffscreenBuffer", "(Ljava/awt/Component;II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"isCompletelyDirty", "(Ljavax/swing/JComponent;)Z", nullptr, $PUBLIC},
	{"isDoubleBufferingEnabled", "()Z", nullptr, $PUBLIC},
	{"isPainting", "()Z", nullptr, 0},
	{"isPaintingThread", "()Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<bool(RepaintManager::*)()>(&RepaintManager::isPaintingThread))},
	{"markCompletelyClean", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"markCompletelyDirty", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"nativeAddDirtyRegion", "(Lsun/awt/AppContext;Ljava/awt/Container;IIII)V", nullptr, 0},
	{"nativeQueueSurfaceDataRunnable", "(Lsun/awt/AppContext;Ljava/awt/Component;Ljava/lang/Runnable;)V", nullptr, 0},
	{"notifyRepaintPerformed", "(Ljavax/swing/JComponent;IIII)V", nullptr, 0},
	{"paint", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;Ljava/awt/Graphics;IIII)V", nullptr, 0},
	{"paintDirtyRegions", "()V", nullptr, $PUBLIC},
	{"paintDirtyRegions", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/awt/Component;Ljava/awt/Rectangle;>;)V", $PRIVATE, $method(static_cast<void(RepaintManager::*)($Map*)>(&RepaintManager::paintDirtyRegions))},
	{"prePaintDirtyRegions", "()V", nullptr, $PRIVATE, $method(static_cast<void(RepaintManager::*)()>(&RepaintManager::prePaintDirtyRegions))},
	{"removeInvalidComponent", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeRepaintListener", "(Lsun/swing/SwingUtilities2$RepaintListener;)V", nullptr, $PRIVATE, $method(static_cast<void(RepaintManager::*)($SwingUtilities2$RepaintListener*)>(&RepaintManager::removeRepaintListener))},
	{"resetDoubleBuffer", "()V", nullptr, 0},
	{"resetVolatileDoubleBuffer", "(Ljava/awt/GraphicsConfiguration;)V", nullptr, 0},
	{"scheduleHeavyWeightPaints", "()V", nullptr, 0},
	{"scheduleProcessingRunnable", "(Lsun/awt/AppContext;)V", nullptr, $PRIVATE, $method(static_cast<void(RepaintManager::*)($AppContext*)>(&RepaintManager::scheduleProcessingRunnable))},
	{"setCurrentManager", "(Ljavax/swing/RepaintManager;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(RepaintManager*)>(&RepaintManager::setCurrentManager))},
	{"setDoubleBufferMaximumSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"setDoubleBufferingEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setPaintManager", "(Ljavax/swing/RepaintManager$PaintManager;)V", nullptr, 0},
	{"show", "(Ljava/awt/Container;IIII)Z", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"updateWindows", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/awt/Component;Ljava/awt/Rectangle;>;)V", $PRIVATE, $method(static_cast<void(RepaintManager::*)($Map*)>(&RepaintManager::updateWindows))},
	{"useVolatileDoubleBuffer", "()Z", nullptr, 0},
	{"validateInvalidComponents", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RepaintManager_InnerClassesInfo_[] = {
	{"javax.swing.RepaintManager$ProcessingRunnable", "javax.swing.RepaintManager", "ProcessingRunnable", $PRIVATE | $FINAL},
	{"javax.swing.RepaintManager$DisplayChangedRunnable", "javax.swing.RepaintManager", "DisplayChangedRunnable", $PRIVATE | $STATIC | $FINAL},
	{"javax.swing.RepaintManager$DisplayChangedHandler", "javax.swing.RepaintManager", "DisplayChangedHandler", $PRIVATE | $STATIC | $FINAL},
	{"javax.swing.RepaintManager$DoubleBufferInfo", "javax.swing.RepaintManager", "DoubleBufferInfo", $PRIVATE},
	{"javax.swing.RepaintManager$PaintManager", "javax.swing.RepaintManager", "PaintManager", $STATIC},
	{"javax.swing.RepaintManager$4", nullptr, nullptr, 0},
	{"javax.swing.RepaintManager$3", nullptr, nullptr, 0},
	{"javax.swing.RepaintManager$2", nullptr, nullptr, 0},
	{"javax.swing.RepaintManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RepaintManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.RepaintManager",
	"java.lang.Object",
	nullptr,
	_RepaintManager_FieldInfo_,
	_RepaintManager_MethodInfo_,
	nullptr,
	nullptr,
	_RepaintManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.RepaintManager$ProcessingRunnable,javax.swing.RepaintManager$DisplayChangedRunnable,javax.swing.RepaintManager$DisplayChangedHandler,javax.swing.RepaintManager$DoubleBufferInfo,javax.swing.RepaintManager$PaintManager,javax.swing.RepaintManager$4,javax.swing.RepaintManager$3,javax.swing.RepaintManager$2,javax.swing.RepaintManager$2$1,javax.swing.RepaintManager$1"
};

$Object* allocate$RepaintManager($Class* clazz) {
	return $of($alloc(RepaintManager));
}

bool RepaintManager::HANDLE_TOP_LEVEL_PAINT = false;
int16_t RepaintManager::BUFFER_STRATEGY_TYPE = 0;
$Object* RepaintManager::repaintManagerKey = nullptr;
bool RepaintManager::volatileImageBufferEnabled = false;
int32_t RepaintManager::volatileBufferType = 0;
bool RepaintManager::nativeDoubleBuffering = false;
$JavaSecurityAccess* RepaintManager::javaSecurityAccess = nullptr;
$DisplayChangedListener* RepaintManager::displayChangedHandler = nullptr;

RepaintManager* RepaintManager::currentManager($Component* c) {
	$init(RepaintManager);
	return currentManager($($AppContext::getAppContext()));
}

RepaintManager* RepaintManager::currentManager($AppContext* appContext) {
	$init(RepaintManager);
	$var(RepaintManager, rm, $cast(RepaintManager, $nc(appContext)->get(RepaintManager::repaintManagerKey)));
	if (rm == nullptr) {
		$assign(rm, $new(RepaintManager, RepaintManager::BUFFER_STRATEGY_TYPE));
		appContext->put(RepaintManager::repaintManagerKey, rm);
	}
	return rm;
}

RepaintManager* RepaintManager::currentManager($JComponent* c) {
	$init(RepaintManager);
	return currentManager(static_cast<$Component*>(c));
}

void RepaintManager::setCurrentManager(RepaintManager* aRepaintManager) {
	$init(RepaintManager);
	if (aRepaintManager != nullptr) {
		$SwingUtilities::appContextPut(RepaintManager::repaintManagerKey, aRepaintManager);
	} else {
		$SwingUtilities::appContextRemove(RepaintManager::repaintManagerKey);
	}
}

void RepaintManager::init$() {
	RepaintManager::init$(RepaintManager::BUFFER_STRATEGY_SPECIFIED_OFF);
}

void RepaintManager::init$(int16_t bufferStrategyType) {
	$set(this, volatileMap, $new($HashMap, 1));
	this->doubleBufferingEnabled = true;
	this->isCustomMaxBufferSizeSet = false;
	this->paintDepth = 0;
	$set(this, tmp, $new($Rectangle));
	$set(this, repaintListeners, $new($ArrayList, 1));
	this->doubleBufferingEnabled = !RepaintManager::nativeDoubleBuffering;
	$synchronized(this) {
		$set(this, dirtyComponents, $new($IdentityHashMap));
		$set(this, tmpDirtyComponents, $new($IdentityHashMap));
		this->bufferStrategyType = bufferStrategyType;
		$set(this, hwDirtyComponents, $new($IdentityHashMap));
	}
	$set(this, processingRunnable, $new($RepaintManager$ProcessingRunnable, this));
}

void RepaintManager::displayChanged() {
	if (this->isCustomMaxBufferSizeSet) {
		clearImages();
	} else {
		setDoubleBufferMaximumSize(nullptr);
	}
}

void RepaintManager::addInvalidComponent($JComponent* invalidComponent) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var(RepaintManager, delegate, getDelegate(invalidComponent));
		if (delegate != nullptr) {
			delegate->addInvalidComponent(invalidComponent);
			return;
		}
		$var($Component, validateRoot, $SwingUtilities::getValidateRoot(invalidComponent, true));
		if (validateRoot == nullptr) {
			return;
		}
		if (this->invalidComponents == nullptr) {
			$set(this, invalidComponents, $new($ArrayList));
		} else {
			int32_t n = $nc(this->invalidComponents)->size();
			for (int32_t i = 0; i < n; ++i) {
				if ($equals(validateRoot, $nc(this->invalidComponents)->get(i))) {
					return;
				}
			}
		}
		$nc(this->invalidComponents)->add(validateRoot);
		scheduleProcessingRunnable($($SunToolkit::targetToAppContext(invalidComponent)));
	}
}

void RepaintManager::removeInvalidComponent($JComponent* component) {
	$synchronized(this) {
		$var(RepaintManager, delegate, getDelegate(component));
		if (delegate != nullptr) {
			delegate->removeInvalidComponent(component);
			return;
		}
		if (this->invalidComponents != nullptr) {
			int32_t index = $nc(this->invalidComponents)->indexOf(component);
			if (index != -1) {
				$nc(this->invalidComponents)->remove(index);
			}
		}
	}
}

void RepaintManager::addDirtyRegion0($Container* c, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if ((w <= 0) || (h <= 0) || (c == nullptr)) {
		return;
	}
	bool var$0 = ($nc(c)->getWidth() <= 0);
	if (var$0 || ($nc(c)->getHeight() <= 0)) {
		return;
	}
	if (extendDirtyRegion(c, x, y, w, h)) {
		return;
	}
	$var($Component, root, nullptr);
	{
		$var($Container, p, c);
		for (; p != nullptr; $assign(p, $nc(p)->getParent())) {
			bool var$1 = !p->isVisible();
			if (var$1 || !p->isDisplayable()) {
				return;
			}
			if (($instanceOf($Window, p)) || ($instanceOf($Applet, p))) {
				if ($instanceOf($Frame, p) && ((int32_t)($nc(($cast($Frame, p)))->getExtendedState() & (uint32_t)$Frame::ICONIFIED)) == $Frame::ICONIFIED) {
					return;
				}
				$assign(root, p);
				break;
			}
		}
	}
	if (root == nullptr) {
		return;
	}
	$synchronized(this) {
		if (extendDirtyRegion(c, x, y, w, h)) {
			return;
		}
		$nc(this->dirtyComponents)->put(c, $$new($Rectangle, x, y, w, h));
	}
	scheduleProcessingRunnable($($SunToolkit::targetToAppContext(c)));
}

void RepaintManager::addDirtyRegion($JComponent* c, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var(RepaintManager, delegate, getDelegate(c));
	if (delegate != nullptr) {
		delegate->addDirtyRegion(c, x, y, w, h);
		return;
	}
	addDirtyRegion0(c, x, y, w, h);
}

void RepaintManager::addDirtyRegion($Window* window, int32_t x, int32_t y, int32_t w, int32_t h) {
	addDirtyRegion0(window, x, y, w, h);
}

void RepaintManager::addDirtyRegion($Applet* applet, int32_t x, int32_t y, int32_t w, int32_t h) {
	addDirtyRegion0(applet, x, y, w, h);
}

void RepaintManager::scheduleHeavyWeightPaints() {
	$useLocalCurrentObjectStackCache();
	$var($Map, hws, nullptr);
	$synchronized(this) {
		if ($nc(this->hwDirtyComponents)->size() == 0) {
			return;
		}
		$assign(hws, this->hwDirtyComponents);
		$set(this, hwDirtyComponents, $new($IdentityHashMap));
	}
	{
		$var($Iterator, i$, $nc($($nc(hws)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Container, hw, $cast($Container, i$->next()));
			{
				$var($Rectangle, dirty, $cast($Rectangle, hws->get(hw)));
				if ($instanceOf($Window, hw)) {
					addDirtyRegion($cast($Window, hw), $nc(dirty)->x, dirty->y, dirty->width, dirty->height);
				} else if ($instanceOf($Applet, hw)) {
					addDirtyRegion($cast($Applet, hw), $nc(dirty)->x, dirty->y, dirty->width, dirty->height);
				} else {
					addDirtyRegion0(hw, $nc(dirty)->x, dirty->y, dirty->width, dirty->height);
				}
			}
		}
	}
}

void RepaintManager::nativeAddDirtyRegion($AppContext* appContext, $Container* c, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (w > 0 && h > 0) {
		$synchronized(this) {
			$var($Rectangle, dirty, $cast($Rectangle, $nc(this->hwDirtyComponents)->get(c)));
			if (dirty == nullptr) {
				$nc(this->hwDirtyComponents)->put(c, $$new($Rectangle, x, y, w, h));
			} else {
				$nc(this->hwDirtyComponents)->put(c, $($SwingUtilities::computeUnion(x, y, w, h, dirty)));
			}
		}
		scheduleProcessingRunnable(appContext);
	}
}

void RepaintManager::nativeQueueSurfaceDataRunnable($AppContext* appContext, $Component* c, $Runnable* r) {
	$synchronized(this) {
		if (this->runnableList == nullptr) {
			$set(this, runnableList, $new($LinkedList));
		}
		$nc(this->runnableList)->add($$new($RepaintManager$2, this, c, r));
	}
	scheduleProcessingRunnable(appContext);
}

bool RepaintManager::extendDirtyRegion($Component* c, int32_t x, int32_t y, int32_t w, int32_t h) {
	$synchronized(this) {
		$var($Rectangle, r, $cast($Rectangle, $nc(this->dirtyComponents)->get(c)));
		if (r != nullptr) {
			$SwingUtilities::computeUnion(x, y, w, h, r);
			return true;
		}
		return false;
	}
}

$Rectangle* RepaintManager::getDirtyRegion($JComponent* aComponent) {
	$useLocalCurrentObjectStackCache();
	$var(RepaintManager, delegate, getDelegate(aComponent));
	if (delegate != nullptr) {
		return delegate->getDirtyRegion(aComponent);
	}
	$var($Rectangle, r, nullptr);
	$synchronized(this) {
		$assign(r, $cast($Rectangle, $nc(this->dirtyComponents)->get(aComponent)));
	}
	if (r == nullptr) {
		return $new($Rectangle, 0, 0, 0, 0);
	} else {
		return $new($Rectangle, r);
	}
}

void RepaintManager::markCompletelyDirty($JComponent* aComponent) {
	$var(RepaintManager, delegate, getDelegate(aComponent));
	if (delegate != nullptr) {
		delegate->markCompletelyDirty(aComponent);
		return;
	}
	addDirtyRegion(aComponent, 0, 0, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

void RepaintManager::markCompletelyClean($JComponent* aComponent) {
	$var(RepaintManager, delegate, getDelegate(aComponent));
	if (delegate != nullptr) {
		delegate->markCompletelyClean(aComponent);
		return;
	}
	$synchronized(this) {
		$nc(this->dirtyComponents)->remove(aComponent);
	}
}

bool RepaintManager::isCompletelyDirty($JComponent* aComponent) {
	$useLocalCurrentObjectStackCache();
	$var(RepaintManager, delegate, getDelegate(aComponent));
	if (delegate != nullptr) {
		return delegate->isCompletelyDirty(aComponent);
	}
	$var($Rectangle, r, nullptr);
	$assign(r, getDirtyRegion(aComponent));
	if ($nc(r)->width == $Integer::MAX_VALUE && r->height == $Integer::MAX_VALUE) {
		return true;
	} else {
		return false;
	}
}

void RepaintManager::validateInvalidComponents() {
	$useLocalCurrentObjectStackCache();
	$var($List, ic, nullptr);
	$synchronized(this) {
		if (this->invalidComponents == nullptr) {
			return;
		}
		$assign(ic, this->invalidComponents);
		$set(this, invalidComponents, nullptr);
	}
	int32_t n = $nc(ic)->size();
	for (int32_t i = 0; i < n; ++i) {
		$var($Component, c, $cast($Component, ic->get(i)));
		$var($AccessControlContext, stack, $AccessController::getContext());
		$var($AccessControlContext, acc, $nc($($AWTAccessor::getComponentAccessor()))->getAccessControlContext(c));
		$nc(RepaintManager::javaSecurityAccess)->doIntersectionPrivilege($$new($RepaintManager$3, this, c), stack, acc);
	}
}

void RepaintManager::prePaintDirtyRegions() {
	$useLocalCurrentObjectStackCache();
	$var($Map, dirtyComponents, nullptr);
	$var($List, runnableList, nullptr);
	$synchronized(this) {
		$assign(dirtyComponents, this->dirtyComponents);
		$assign(runnableList, this->runnableList);
		$set(this, runnableList, nullptr);
	}
	if (runnableList != nullptr) {
		{
			$var($Iterator, i$, runnableList->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Runnable, runnable, $cast($Runnable, i$->next()));
				{
					$nc(runnable)->run();
				}
			}
		}
	}
	paintDirtyRegions();
	if ($nc(dirtyComponents)->size() > 0) {
		paintDirtyRegions(dirtyComponents);
	}
}

void RepaintManager::updateWindows($Map* dirtyComponents) {
	$useLocalCurrentObjectStackCache();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	if (!($instanceOf($SunToolkit, toolkit) && $nc(($cast($SunToolkit, toolkit)))->needUpdateWindow())) {
		return;
	}
	$var($Set, windows, $new($HashSet));
	$var($Set, dirtyComps, $nc(dirtyComponents)->keySet());
	{
		$var($Iterator, it, $nc(dirtyComps)->iterator());
		for (; $nc(it)->hasNext();) {
			$var($Component, dirty, $cast($Component, it->next()));
			$var($Window, window, $instanceOf($Window, dirty) ? $cast($Window, dirty) : $SwingUtilities::getWindowAncestor(dirty));
			if (window != nullptr && !window->isOpaque()) {
				windows->add(window);
			}
		}
	}
	{
		$var($Iterator, i$, windows->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Window, window, $cast($Window, i$->next()));
			{
				$nc($($AWTAccessor::getWindowAccessor()))->updateWindow(window);
			}
		}
	}
}

bool RepaintManager::isPainting() {
	return this->painting;
}

void RepaintManager::paintDirtyRegions() {
	$synchronized(this) {
		$var($Map, tmp, this->tmpDirtyComponents);
		$set(this, tmpDirtyComponents, this->dirtyComponents);
		$set(this, dirtyComponents, tmp);
		$nc(this->dirtyComponents)->clear();
	}
	paintDirtyRegions(this->tmpDirtyComponents);
}

void RepaintManager::paintDirtyRegions($Map* tmpDirtyComponents) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tmpDirtyComponents)->isEmpty()) {
		return;
	}
	$var($List, roots, $new($ArrayList, $nc(tmpDirtyComponents)->size()));
	{
		$var($Iterator, i$, $nc($($nc(tmpDirtyComponents)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Component, dirty, $cast($Component, i$->next()));
			{
				collectDirtyComponents(tmpDirtyComponents, dirty, roots);
			}
		}
	}
	$var($AtomicInteger, count, $new($AtomicInteger, roots->size()));
	this->painting = true;
	{
		$var($Throwable, var$0, nullptr);
		try {
			for (int32_t j = 0; j < count->get(); ++j) {
				int32_t i = j;
				$var($Component, dirtyComponent, $cast($Component, roots->get(j)));
				$var($AccessControlContext, stack, $AccessController::getContext());
				$var($AccessControlContext, acc, $nc($($AWTAccessor::getComponentAccessor()))->getAccessControlContext(dirtyComponent));
				$nc(RepaintManager::javaSecurityAccess)->doIntersectionPrivilege($$new($RepaintManager$4, this, tmpDirtyComponents, dirtyComponent, roots, i, count), stack, acc);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->painting = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	updateWindows(tmpDirtyComponents);
	tmpDirtyComponents->clear();
}

void RepaintManager::adjustRoots($JComponent* root, $List* roots, int32_t index) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = $nc(roots)->size() - 1; i >= index; --i) {
		$var($Component, c, $cast($Component, roots->get(i)));
		for (;;) {
			if ($equals(c, root) || c == nullptr || !($instanceOf($JComponent, c))) {
				break;
			}
			$assign(c, $nc(c)->getParent());
		}
		if ($equals(c, root)) {
			roots->remove(i);
		}
	}
}

void RepaintManager::collectDirtyComponents($Map* dirtyComponents, $Component* dirtyComponent, $List* roots) {
	$useLocalCurrentObjectStackCache();
	int32_t dx = 0;
	int32_t dy = 0;
	int32_t rootDx = 0;
	int32_t rootDy = 0;
	$var($Component, component, nullptr);
	$var($Component, rootDirtyComponent, nullptr);
	$var($Component, parent, nullptr);
	$var($Rectangle, cBounds, nullptr);
	$assign(component, ($assign(rootDirtyComponent, dirtyComponent)));
	int32_t x = $nc(dirtyComponent)->getX();
	int32_t y = dirtyComponent->getY();
	int32_t w = dirtyComponent->getWidth();
	int32_t h = dirtyComponent->getHeight();
	dx = (rootDx = 0);
	dy = (rootDy = 0);
	$nc(this->tmp)->setBounds($cast($Rectangle, $($nc(dirtyComponents)->get(dirtyComponent))));
	$SwingUtilities::computeIntersection(0, 0, w, h, this->tmp);
	if ($nc(this->tmp)->isEmpty()) {
		return;
	}
	for (;;) {
		if (!($instanceOf($JComponent, component))) {
			break;
		}
		$assign(parent, $nc(component)->getParent());
		if (parent == nullptr) {
			break;
		}
		$assign(component, parent);
		dx += x;
		dy += y;
		$nc(this->tmp)->setLocation($nc(this->tmp)->x + x, $nc(this->tmp)->y + y);
		x = component->getX();
		y = component->getY();
		w = component->getWidth();
		h = component->getHeight();
		$set(this, tmp, $SwingUtilities::computeIntersection(0, 0, w, h, this->tmp));
		if ($nc(this->tmp)->isEmpty()) {
			return;
		}
		if ($nc(dirtyComponents)->get(component) != nullptr) {
			$assign(rootDirtyComponent, component);
			rootDx = dx;
			rootDy = dy;
		}
	}
	if (dirtyComponent != rootDirtyComponent) {
		$var($Rectangle, r, nullptr);
		$nc(this->tmp)->setLocation($nc(this->tmp)->x + rootDx - dx, $nc(this->tmp)->y + rootDy - dy);
		$assign(r, $cast($Rectangle, $nc(dirtyComponents)->get(rootDirtyComponent)));
		$SwingUtilities::computeUnion($nc(this->tmp)->x, $nc(this->tmp)->y, $nc(this->tmp)->width, $nc(this->tmp)->height, r);
	}
	if (!$nc(roots)->contains(rootDirtyComponent)) {
		roots->add(rootDirtyComponent);
	}
}

$String* RepaintManager::toString() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($StringBuilder, sb, $new($StringBuilder));
		if (this->dirtyComponents != nullptr) {
			sb->append($$str({""_s, this->dirtyComponents}));
		}
		return sb->toString();
	}
}

$Image* RepaintManager::getOffscreenBuffer($Component* c, int32_t proposedWidth, int32_t proposedHeight) {
	$var(RepaintManager, delegate, getDelegate(c));
	if (delegate != nullptr) {
		return delegate->getOffscreenBuffer(c, proposedWidth, proposedHeight);
	}
	return _getOffscreenBuffer(c, proposedWidth, proposedHeight);
}

$Image* RepaintManager::getVolatileOffscreenBuffer($Component* c, int32_t proposedWidth, int32_t proposedHeight) {
	$useLocalCurrentObjectStackCache();
	$var(RepaintManager, delegate, getDelegate(c));
	if (delegate != nullptr) {
		return delegate->getVolatileOffscreenBuffer(c, proposedWidth, proposedHeight);
	}
	$var($Window, w, ($instanceOf($Window, c)) ? $cast($Window, c) : $SwingUtilities::getWindowAncestor(c));
	if (!$nc(w)->isOpaque()) {
		$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
		if (($instanceOf($SunToolkit, tk)) && ($nc(($cast($SunToolkit, tk)))->needUpdateWindow())) {
			return nullptr;
		}
	}
	$var($GraphicsConfiguration, config, $nc(c)->getGraphicsConfiguration());
	if (config == nullptr) {
		$assign(config, $nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration());
	}
	$var($Dimension, maxSize, getDoubleBufferMaximumSize());
	int32_t width = proposedWidth < 1 ? 1 : (proposedWidth > $nc(maxSize)->width ? $nc(maxSize)->width : proposedWidth);
	int32_t height = proposedHeight < 1 ? 1 : (proposedHeight > maxSize->height ? maxSize->height : proposedHeight);
	$var($VolatileImage, image, $cast($VolatileImage, $nc(this->volatileMap)->get(config)));
	bool var$0 = image == nullptr || $nc(image)->getWidth() < width;
	if (var$0 || $nc(image)->getHeight() < height) {
		if (image != nullptr) {
			image->flush();
		}
		$assign(image, $nc(config)->createCompatibleVolatileImage(width, height, RepaintManager::volatileBufferType));
		$nc(this->volatileMap)->put(config, image);
	}
	return image;
}

$Image* RepaintManager::_getOffscreenBuffer($Component* c, int32_t proposedWidth, int32_t proposedHeight) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, maxSize, getDoubleBufferMaximumSize());
	$var($RepaintManager$DoubleBufferInfo, doubleBuffer, nullptr);
	int32_t width = 0;
	int32_t height = 0;
	$var($Window, w, ($instanceOf($Window, c)) ? $cast($Window, c) : $SwingUtilities::getWindowAncestor(c));
	if (!$nc(w)->isOpaque()) {
		$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
		if (($instanceOf($SunToolkit, tk)) && ($nc(($cast($SunToolkit, tk)))->needUpdateWindow())) {
			return nullptr;
		}
	}
	if (this->standardDoubleBuffer == nullptr) {
		$set(this, standardDoubleBuffer, $new($RepaintManager$DoubleBufferInfo, this));
	}
	$assign(doubleBuffer, this->standardDoubleBuffer);
	width = proposedWidth < 1 ? 1 : (proposedWidth > $nc(maxSize)->width ? $nc(maxSize)->width : proposedWidth);
	height = proposedHeight < 1 ? 1 : (proposedHeight > maxSize->height ? maxSize->height : proposedHeight);
	if ($nc(doubleBuffer)->needsReset || ($nc(doubleBuffer)->image != nullptr && ($nc(doubleBuffer->size)->width < width || $nc($nc(doubleBuffer)->size)->height < height))) {
		doubleBuffer->needsReset = false;
		if (doubleBuffer->image != nullptr) {
			$nc(doubleBuffer->image)->flush();
			$set(doubleBuffer, image, nullptr);
		}
		width = $Math::max($nc(doubleBuffer->size)->width, width);
		height = $Math::max($nc(doubleBuffer->size)->height, height);
	}
	$var($Image, result, $nc(doubleBuffer)->image);
	if (doubleBuffer->image == nullptr) {
		$assign(result, $nc(c)->createImage(width, height));
		$set(doubleBuffer, size, $new($Dimension, width, height));
		if ($instanceOf($JComponent, c)) {
			$nc(($cast($JComponent, c)))->setCreatedDoubleBuffer(true);
			$set(doubleBuffer, image, result);
		}
	}
	return result;
}

void RepaintManager::setDoubleBufferMaximumSize($Dimension* d) {
	$set(this, doubleBufferMaxSize, d);
	if (this->doubleBufferMaxSize == nullptr) {
		this->isCustomMaxBufferSizeSet = false;
		clearImages();
	} else {
		this->isCustomMaxBufferSizeSet = true;
		clearImages($nc(d)->width, d->height);
	}
}

void RepaintManager::clearImages() {
	clearImages(0, 0);
}

void RepaintManager::clearImages(int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (this->standardDoubleBuffer != nullptr && $nc(this->standardDoubleBuffer)->image != nullptr) {
		bool var$0 = $nc($nc(this->standardDoubleBuffer)->image)->getWidth(nullptr) > width;
		if (var$0 || $nc($nc(this->standardDoubleBuffer)->image)->getHeight(nullptr) > height) {
			$nc($nc(this->standardDoubleBuffer)->image)->flush();
			$set($nc(this->standardDoubleBuffer), image, nullptr);
		}
	}
	$var($Iterator, gcs, $nc($($nc(this->volatileMap)->keySet()))->iterator());
	while ($nc(gcs)->hasNext()) {
		$var($GraphicsConfiguration, gc, $cast($GraphicsConfiguration, gcs->next()));
		$var($VolatileImage, image, $cast($VolatileImage, $nc(this->volatileMap)->get(gc)));
		bool var$1 = $nc(image)->getWidth() > width;
		if (var$1 || $nc(image)->getHeight() > height) {
			image->flush();
			gcs->remove();
		}
	}
}

$Dimension* RepaintManager::getDoubleBufferMaximumSize() {
	$useLocalCurrentObjectStackCache();
	if (this->doubleBufferMaxSize == nullptr) {
		try {
			$var($Rectangle, virtualBounds, $new($Rectangle));
			$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
			{
				$var($GraphicsDeviceArray, arr$, $nc(ge)->getScreenDevices());
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($GraphicsDevice, gd, arr$->get(i$));
					{
						$var($GraphicsConfiguration, gc, $nc(gd)->getDefaultConfiguration());
						$assign(virtualBounds, $nc(virtualBounds)->union$($($nc(gc)->getBounds())));
					}
				}
			}
			$set(this, doubleBufferMaxSize, $new($Dimension, $nc(virtualBounds)->width, virtualBounds->height));
		} catch ($HeadlessException& e) {
			$set(this, doubleBufferMaxSize, $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE));
		}
	}
	return this->doubleBufferMaxSize;
}

void RepaintManager::setDoubleBufferingEnabled(bool aFlag) {
	$useLocalCurrentObjectStackCache();
	this->doubleBufferingEnabled = aFlag;
	$var($RepaintManager$PaintManager, paintManager, getPaintManager());
	$load($RepaintManager$PaintManager);
	if (!aFlag && $nc($of(paintManager))->getClass() != $RepaintManager$PaintManager::class$) {
		setPaintManager($$new($RepaintManager$PaintManager));
	}
}

bool RepaintManager::isDoubleBufferingEnabled() {
	return this->doubleBufferingEnabled;
}

void RepaintManager::resetDoubleBuffer() {
	if (this->standardDoubleBuffer != nullptr) {
		$nc(this->standardDoubleBuffer)->needsReset = true;
	}
}

void RepaintManager::resetVolatileDoubleBuffer($GraphicsConfiguration* gc) {
	$var($Image, image, $cast($Image, $nc(this->volatileMap)->remove(gc)));
	if (image != nullptr) {
		image->flush();
	}
}

bool RepaintManager::useVolatileDoubleBuffer() {
	return RepaintManager::volatileImageBufferEnabled;
}

bool RepaintManager::isPaintingThread() {
	$synchronized(this) {
		return ($Thread::currentThread() == this->paintThread);
	}
}

void RepaintManager::paint($JComponent* paintingComponent, $JComponent* bufferComponent, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($RepaintManager$PaintManager, paintManager, getPaintManager());
	if (!isPaintingThread()) {
		$load($RepaintManager$PaintManager);
		if ($nc($of(paintManager))->getClass() != $RepaintManager$PaintManager::class$) {
			$assign(paintManager, $new($RepaintManager$PaintManager));
			$set(paintManager, repaintManager, this);
		}
	}
	if (!$nc(paintManager)->paint(paintingComponent, bufferComponent, g, x, y, w, h)) {
		$nc(g)->setClip(x, y, w, h);
		$nc(paintingComponent)->paintToOffscreen(g, x, y, w, h, x + w, y + h);
	}
}

void RepaintManager::copyArea($JComponent* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t deltaX, int32_t deltaY, bool clip) {
	$nc($(getPaintManager()))->copyArea(c, g, x, y, w, h, deltaX, deltaY, clip);
}

void RepaintManager::addRepaintListener($SwingUtilities2$RepaintListener* l) {
	$nc(this->repaintListeners)->add(l);
}

void RepaintManager::removeRepaintListener($SwingUtilities2$RepaintListener* l) {
	$nc(this->repaintListeners)->remove($of(l));
}

void RepaintManager::notifyRepaintPerformed($JComponent* c, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->repaintListeners)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SwingUtilities2$RepaintListener, l, $cast($SwingUtilities2$RepaintListener, i$->next()));
			{
				$nc(l)->repaintPerformed(c, x, y, w, h);
			}
		}
	}
}

void RepaintManager::beginPaint() {
	$useLocalCurrentObjectStackCache();
	bool multiThreadedPaint = false;
	int32_t paintDepth = 0;
	$var($Thread, currentThread, $Thread::currentThread());
	$synchronized(this) {
		paintDepth = this->paintDepth;
		if (this->paintThread == nullptr || currentThread == this->paintThread) {
			$set(this, paintThread, currentThread);
			++this->paintDepth;
		} else {
			multiThreadedPaint = true;
		}
	}
	if (!multiThreadedPaint && paintDepth == 0) {
		$nc($(getPaintManager()))->beginPaint();
	}
}

void RepaintManager::endPaint() {
	if (isPaintingThread()) {
		$var($RepaintManager$PaintManager, paintManager, nullptr);
		$synchronized(this) {
			if (--this->paintDepth == 0) {
				$assign(paintManager, getPaintManager());
			}
		}
		if (paintManager != nullptr) {
			paintManager->endPaint();
			$synchronized(this) {
				$set(this, paintThread, nullptr);
			}
		}
	}
}

bool RepaintManager::show($Container* c, int32_t x, int32_t y, int32_t w, int32_t h) {
	return $nc($(getPaintManager()))->show(c, x, y, w, h);
}

void RepaintManager::doubleBufferingChanged($JRootPane* rootPane) {
	$nc($(getPaintManager()))->doubleBufferingChanged(rootPane);
}

void RepaintManager::setPaintManager($RepaintManager$PaintManager* paintManager$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($RepaintManager$PaintManager, paintManager, paintManager$renamed);
	if (paintManager == nullptr) {
		$assign(paintManager, $new($RepaintManager$PaintManager));
	}
	$var($RepaintManager$PaintManager, oldPaintManager, nullptr);
	$synchronized(this) {
		$assign(oldPaintManager, this->paintManager);
		$set(this, paintManager, paintManager);
		$set($nc(paintManager), repaintManager, this);
	}
	if (oldPaintManager != nullptr) {
		oldPaintManager->dispose();
	}
}

$RepaintManager$PaintManager* RepaintManager::getPaintManager() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->paintManager == nullptr) {
			$var($RepaintManager$PaintManager, paintManager, nullptr);
			if (this->doubleBufferingEnabled && !RepaintManager::nativeDoubleBuffering) {
				{
					$var($Toolkit, tk, nullptr)
					switch (this->bufferStrategyType) {
					case RepaintManager::BUFFER_STRATEGY_NOT_SPECIFIED:
						{
							$assign(tk, $Toolkit::getDefaultToolkit());
							if ($instanceOf($SunToolkit, tk)) {
								$var($SunToolkit, stk, $cast($SunToolkit, tk));
								if ($nc(stk)->useBufferPerWindow()) {
									$assign(paintManager, $new($BufferStrategyPaintManager));
								}
							}
							break;
						}
					case RepaintManager::BUFFER_STRATEGY_SPECIFIED_ON:
						{
							$assign(paintManager, $new($BufferStrategyPaintManager));
							break;
						}
					default:
						{
							break;
						}
					}
				}
			}
			setPaintManager(paintManager);
		}
		return this->paintManager;
	}
}

void RepaintManager::scheduleProcessingRunnable($AppContext* context) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->processingRunnable)->markPending()) {
		$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
		if ($instanceOf($SunToolkit, tk)) {
			$nc($($SunToolkit::getSystemEventQueueImplPP(context)))->postEvent($$new($InvocationEvent, $($Toolkit::getDefaultToolkit()), this->processingRunnable));
		} else {
			$nc($($nc($($Toolkit::getDefaultToolkit()))->getSystemEventQueue()))->postEvent($$new($InvocationEvent, $($Toolkit::getDefaultToolkit()), this->processingRunnable));
		}
	}
}

RepaintManager* RepaintManager::getDelegate($Component* c) {
	$var(RepaintManager, delegate, $SwingUtilities3::getDelegateRepaintManager(c));
	if (this == delegate) {
		$assign(delegate, nullptr);
	}
	return delegate;
}

void clinit$RepaintManager($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(RepaintManager::repaintManagerKey, RepaintManager::class$);
	RepaintManager::volatileImageBufferEnabled = true;
	$assignStatic(RepaintManager::javaSecurityAccess, $SharedSecrets::getJavaSecurityAccess());
	$assignStatic(RepaintManager::displayChangedHandler, $new($RepaintManager$DisplayChangedHandler));
	{
		$SwingAccessor::setRepaintManagerAccessor($$new($RepaintManager$1));
		bool t1 = "true"_s->equals($($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.volatileImageBufferEnabled"_s, "true"_s)))));
		RepaintManager::volatileImageBufferEnabled = t1;
		bool headless = $GraphicsEnvironment::isHeadless();
		if (RepaintManager::volatileImageBufferEnabled && headless) {
			RepaintManager::volatileImageBufferEnabled = false;
		}
		bool t2 = "true"_s->equals($($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "awt.nativeDoubleBuffering"_s)))));
		RepaintManager::nativeDoubleBuffering = t2;
		$var($String, bs, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.bufferPerWindow"_s)))));
		if (headless) {
			RepaintManager::BUFFER_STRATEGY_TYPE = RepaintManager::BUFFER_STRATEGY_SPECIFIED_OFF;
		} else if (bs == nullptr) {
			RepaintManager::BUFFER_STRATEGY_TYPE = RepaintManager::BUFFER_STRATEGY_NOT_SPECIFIED;
		} else if ("true"_s->equals(bs)) {
			RepaintManager::BUFFER_STRATEGY_TYPE = RepaintManager::BUFFER_STRATEGY_SPECIFIED_ON;
		} else {
			RepaintManager::BUFFER_STRATEGY_TYPE = RepaintManager::BUFFER_STRATEGY_SPECIFIED_OFF;
		}
		bool t3 = "true"_s->equals($($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.handleTopLevelPaint"_s, "true"_s)))));
		RepaintManager::HANDLE_TOP_LEVEL_PAINT = t3;
		$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
		if ($instanceOf($SunGraphicsEnvironment, ge)) {
			$nc(($cast($SunGraphicsEnvironment, ge)))->addDisplayChangedListener(RepaintManager::displayChangedHandler);
		}
		$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
		if (($instanceOf($SunToolkit, tk)) && $nc(($cast($SunToolkit, tk)))->isSwingBackbufferTranslucencySupported()) {
			RepaintManager::volatileBufferType = $Transparency::TRANSLUCENT;
		} else {
			RepaintManager::volatileBufferType = $Transparency::OPAQUE;
		}
	}
}

RepaintManager::RepaintManager() {
}

$Class* RepaintManager::load$($String* name, bool initialize) {
	$loadClass(RepaintManager, name, initialize, &_RepaintManager_ClassInfo_, clinit$RepaintManager, allocate$RepaintManager);
	return class$;
}

$Class* RepaintManager::class$ = nullptr;

	} // swing
} // javax