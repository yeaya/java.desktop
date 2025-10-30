#include <java/awt/Toolkit.h>

#include <java/awt/AWTError.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/AWTPermission.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dialog$ModalExclusionType.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dimension.h>
#include <java/awt/Event.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/JobAttributes.h>
#include <java/awt/PageAttributes.h>
#include <java/awt/Point.h>
#include <java/awt/PrintJob.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Toolkit$1.h>
#include <java/awt/Toolkit$2.h>
#include <java/awt/Toolkit$3.h>
#include <java/awt/Toolkit$4.h>
#include <java/awt/Toolkit$DesktopPropertyChangeSupport.h>
#include <java/awt/Toolkit$SelectiveAWTEventListener.h>
#include <java/awt/Toolkit$ToolkitEventMulticaster.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/event/AWTEventListener.h>
#include <java/awt/event/AWTEventListenerProxy.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/im/InputMethodHighlight.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageProducer.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeSupport.h>
#include <java/io/File.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/EventListener.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/MissingResourceException.h>
#include <java/util/Properties.h>
#include <java/util/ResourceBundle.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Set.h>
#include <java/util/WeakHashMap.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/accessibility/AccessibilityProvider.h>
#include <sun/awt/AWTAccessor$ToolkitAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AWTPermissions.h>
#include <sun/awt/HeadlessToolkit.h>
#include <sun/awt/PlatformGraphicsInfo.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef ALL_AWT_EVENTS_PERMISSION
#undef CHECK_AWT_EVENTQUEUE_PERMISSION
#undef CTRL_DOWN_MASK
#undef CTRL_MASK
#undef DEFAULT_CURSOR
#undef LONG_BITS
#undef NORMAL
#undef VK_CAPS_LOCK
#undef VK_KANA_LOCK
#undef VK_NUM_LOCK
#undef VK_SCROLL_LOCK

using $AWTEventListenerArray = $Array<::java::awt::event::AWTEventListener>;
using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $AWTError = ::java::awt::AWTError;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $AWTPermission = ::java::awt::AWTPermission;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dialog$ModalExclusionType = ::java::awt::Dialog$ModalExclusionType;
using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $Dimension = ::java::awt::Dimension;
using $Event = ::java::awt::Event;
using $EventQueue = ::java::awt::EventQueue;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Frame = ::java::awt::Frame;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $JobAttributes = ::java::awt::JobAttributes;
using $PageAttributes = ::java::awt::PageAttributes;
using $Point = ::java::awt::Point;
using $PrintJob = ::java::awt::PrintJob;
using $RenderingHints = ::java::awt::RenderingHints;
using $Toolkit$1 = ::java::awt::Toolkit$1;
using $Toolkit$2 = ::java::awt::Toolkit$2;
using $Toolkit$3 = ::java::awt::Toolkit$3;
using $Toolkit$4 = ::java::awt::Toolkit$4;
using $Toolkit$DesktopPropertyChangeSupport = ::java::awt::Toolkit$DesktopPropertyChangeSupport;
using $Toolkit$SelectiveAWTEventListener = ::java::awt::Toolkit$SelectiveAWTEventListener;
using $Toolkit$ToolkitEventMulticaster = ::java::awt::Toolkit$ToolkitEventMulticaster;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
using $DragSource = ::java::awt::dnd::DragSource;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $AWTEventListenerProxy = ::java::awt::event::AWTEventListenerProxy;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $InputMethodHighlight = ::java::awt::im::InputMethodHighlight;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $File = ::java::io::File;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Constructor = ::java::lang::reflect::Constructor;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $EventListener = ::java::util::EventListener;
using $EventListenerProxy = ::java::util::EventListenerProxy;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $MissingResourceException = ::java::util::MissingResourceException;
using $Properties = ::java::util::Properties;
using $ResourceBundle = ::java::util::ResourceBundle;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Set = ::java::util::Set;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $AccessibilityProvider = ::javax::accessibility::AccessibilityProvider;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ToolkitAccessor = ::sun::awt::AWTAccessor$ToolkitAccessor;
using $AWTPermissions = ::sun::awt::AWTPermissions;
using $HeadlessToolkit = ::sun::awt::HeadlessToolkit;
using $PlatformGraphicsInfo = ::sun::awt::PlatformGraphicsInfo;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace java {
	namespace awt {

class Toolkit$$Lambda$trim : public $Function {
	$class(Toolkit$$Lambda$trim, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($String, inst$)->trim());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Toolkit$$Lambda$trim>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Toolkit$$Lambda$trim::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Toolkit$$Lambda$trim::*)()>(&Toolkit$$Lambda$trim::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Toolkit$$Lambda$trim::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.Toolkit$$Lambda$trim",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Toolkit$$Lambda$trim::load$($String* name, bool initialize) {
	$loadClass(Toolkit$$Lambda$trim, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Toolkit$$Lambda$trim::class$ = nullptr;

class Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1 : public $PrivilegedAction {
	$class(Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($ClassLoader* cl, $Set* names, $Map* providers) {
		$set(this, cl, cl);
		$set(this, names, names);
		$set(this, providers, providers);
	}
	virtual $Object* run() override {
		 return $of(Toolkit::lambda$loadAssistiveTechnologies$0(cl, names, providers));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1>());
	}
	$ClassLoader* cl = nullptr;
	$Set* names = nullptr;
	$Map* providers = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1::fieldInfos[4] = {
	{"cl", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1, cl)},
	{"names", "Ljava/util/Set;", nullptr, $PUBLIC, $field(Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1, names)},
	{"providers", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1, providers)},
	{}
};
$MethodInfo Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/ClassLoader;Ljava/util/Set;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(static_cast<void(Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1::*)($ClassLoader*,$Set*,$Map*)>(&Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1::load$($String* name, bool initialize) {
	$loadClass(Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1::class$ = nullptr;

class Toolkit$$Lambda$lambda$loadAssistiveTechnologies$1$2 : public $Predicate {
	$class(Toolkit$$Lambda$lambda$loadAssistiveTechnologies$1$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Map* providers) {
		$set(this, providers, providers);
	}
	virtual bool test(Object$* n) override {
		 return Toolkit::lambda$loadAssistiveTechnologies$1(providers, $cast($String, n));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Toolkit$$Lambda$lambda$loadAssistiveTechnologies$1$2>());
	}
	$Map* providers = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Toolkit$$Lambda$lambda$loadAssistiveTechnologies$1$2::fieldInfos[2] = {
	{"providers", "Ljava/util/Map;", nullptr, $PUBLIC, $field(Toolkit$$Lambda$lambda$loadAssistiveTechnologies$1$2, providers)},
	{}
};
$MethodInfo Toolkit$$Lambda$lambda$loadAssistiveTechnologies$1$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;)V", nullptr, $PUBLIC, $method(static_cast<void(Toolkit$$Lambda$lambda$loadAssistiveTechnologies$1$2::*)($Map*)>(&Toolkit$$Lambda$lambda$loadAssistiveTechnologies$1$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Toolkit$$Lambda$lambda$loadAssistiveTechnologies$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.Toolkit$$Lambda$lambda$loadAssistiveTechnologies$1$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Toolkit$$Lambda$lambda$loadAssistiveTechnologies$1$2::load$($String* name, bool initialize) {
	$loadClass(Toolkit$$Lambda$lambda$loadAssistiveTechnologies$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Toolkit$$Lambda$lambda$loadAssistiveTechnologies$1$2::class$ = nullptr;

class Toolkit$$Lambda$fallbackToLoadClassForAT$3 : public $Consumer {
	$class(Toolkit$$Lambda$fallbackToLoadClassForAT$3, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* atName) override {
		Toolkit::fallbackToLoadClassForAT($cast($String, atName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Toolkit$$Lambda$fallbackToLoadClassForAT$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Toolkit$$Lambda$fallbackToLoadClassForAT$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Toolkit$$Lambda$fallbackToLoadClassForAT$3::*)()>(&Toolkit$$Lambda$fallbackToLoadClassForAT$3::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Toolkit$$Lambda$fallbackToLoadClassForAT$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.Toolkit$$Lambda$fallbackToLoadClassForAT$3",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* Toolkit$$Lambda$fallbackToLoadClassForAT$3::load$($String* name, bool initialize) {
	$loadClass(Toolkit$$Lambda$fallbackToLoadClassForAT$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Toolkit$$Lambda$fallbackToLoadClassForAT$3::class$ = nullptr;

$CompoundAttribute _Toolkit_MethodAnnotations_getFontList25[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Toolkit_MethodAnnotations_getFontMetrics26[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute Toolkit_Attribute_var$0[] = {
	{"since", 's', "10"},
	{}
};

$CompoundAttribute _Toolkit_MethodAnnotations_getMenuShortcutKeyMask31[] = {
	{"Ljava/lang/Deprecated;", Toolkit_Attribute_var$0},
	{}
};

$FieldInfo _Toolkit_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Toolkit, $assertionsDisabled)},
	{"toolkit", "Ljava/awt/Toolkit;", nullptr, $PRIVATE | $STATIC, $staticField(Toolkit, toolkit)},
	{"atNames", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Toolkit, atNames)},
	{"resources", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(Toolkit, resources)},
	{"platformResources", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(Toolkit, platformResources)},
	{"loaded", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Toolkit, loaded)},
	{"desktopProperties", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PROTECTED | $FINAL, $field(Toolkit, desktopProperties)},
	{"desktopPropsSupport", "Ljava/beans/PropertyChangeSupport;", nullptr, $PROTECTED | $FINAL, $field(Toolkit, desktopPropsSupport)},
	{"LONG_BITS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Toolkit, LONG_BITS)},
	{"calls", "[I", nullptr, $PRIVATE, $field(Toolkit, calls)},
	{"enabledOnToolkitMask", "J", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Toolkit, enabledOnToolkitMask)},
	{"eventListener", "Ljava/awt/event/AWTEventListener;", nullptr, $PRIVATE, $field(Toolkit, eventListener)},
	{"listener2SelectiveListener", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Ljava/awt/event/AWTEventListener;Ljava/awt/Toolkit$SelectiveAWTEventListener;>;", $PRIVATE, $field(Toolkit, listener2SelectiveListener)},
	{}
};

$MethodInfo _Toolkit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Toolkit::*)()>(&Toolkit::init$))},
	{"addAWTEventListener", "(Ljava/awt/event/AWTEventListener;J)V", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"areExtraMouseButtonsEnabled", "()Z", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"beep", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"checkImage", "(Ljava/awt/Image;IILjava/awt/image/ImageObserver;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"countAWTEventListeners", "(J)I", nullptr, $SYNCHRONIZED},
	{"createCustomCursor", "(Ljava/awt/Image;Ljava/awt/Point;Ljava/lang/String;)Ljava/awt/Cursor;", nullptr, $PUBLIC, nullptr, "java.lang.IndexOutOfBoundsException,java.awt.HeadlessException"},
	{"createDragGestureRecognizer", "(Ljava/lang/Class;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)Ljava/awt/dnd/DragGestureRecognizer;", "<T:Ljava/awt/dnd/DragGestureRecognizer;>(Ljava/lang/Class<TT;>;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)TT;", $PUBLIC},
	{"createImage", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT},
	{"createImage", "(Ljava/net/URL;)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT},
	{"createImage", "(Ljava/awt/image/ImageProducer;)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT},
	{"createImage", "([B)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createImage", "([BII)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT},
	{"createPropertyChangeSupport", "(Ljava/awt/Toolkit;)Ljava/beans/PropertyChangeSupport;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$PropertyChangeSupport*(*)(Toolkit*)>(&Toolkit::createPropertyChangeSupport))},
	{"deProxyAWTEventListener", "(Ljava/awt/event/AWTEventListener;)Ljava/awt/event/AWTEventListener;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$AWTEventListener*(*)($AWTEventListener*)>(&Toolkit::deProxyAWTEventListener))},
	{"enabledOnToolkit", "(J)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int64_t)>(&Toolkit::enabledOnToolkit))},
	{"fallbackToLoadClassForAT", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&Toolkit::fallbackToLoadClassForAT))},
	{"getAWTEventListeners", "()[Ljava/awt/event/AWTEventListener;", nullptr, $PUBLIC},
	{"getAWTEventListeners", "(J)[Ljava/awt/event/AWTEventListener;", nullptr, $PUBLIC},
	{"getBestCursorSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.HeadlessException"},
	{"getDefaultToolkit", "()Ljava/awt/Toolkit;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<Toolkit*(*)()>(&Toolkit::getDefaultToolkit))},
	{"getDesktopProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<$Object*(Toolkit::*)($String*)>(&Toolkit::getDesktopProperty))},
	{"getEventQueue", "()Ljava/awt/EventQueue;", nullptr, $STATIC, $method(static_cast<$EventQueue*(*)()>(&Toolkit::getEventQueue))},
	{"getFontList", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _Toolkit_MethodAnnotations_getFontList25},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _Toolkit_MethodAnnotations_getFontMetrics26},
	{"getImage", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT},
	{"getImage", "(Ljava/net/URL;)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLockingKeyState", "(I)Z", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"getMaximumCursorColors", "()I", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getMenuShortcutKeyMask", "()I", nullptr, $PUBLIC | $DEPRECATED, nullptr, "java.awt.HeadlessException", nullptr, _Toolkit_MethodAnnotations_getMenuShortcutKeyMask31},
	{"getMenuShortcutKeyMaskEx", "()I", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getNativeContainer", "(Ljava/awt/Component;)Ljava/awt/Container;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Container*(*)($Component*)>(&Toolkit::getNativeContainer))},
	{"getPrintJob", "(Ljava/awt/Frame;Ljava/lang/String;Ljava/util/Properties;)Ljava/awt/PrintJob;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrintJob", "(Ljava/awt/Frame;Ljava/lang/String;Ljava/awt/JobAttributes;Ljava/awt/PageAttributes;)Ljava/awt/PrintJob;", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&Toolkit::getProperty))},
	{"getPropertyChangeListeners", "()[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC},
	{"getPropertyChangeListeners", "(Ljava/lang/String;)[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC},
	{"getScreenInsets", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/Insets;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getScreenResolution", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.HeadlessException"},
	{"getScreenSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.HeadlessException"},
	{"getSystemClipboard", "()Ljava/awt/datatransfer/Clipboard;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.HeadlessException"},
	{"getSystemEventQueue", "()Ljava/awt/EventQueue;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$EventQueue*(Toolkit::*)()>(&Toolkit::getSystemEventQueue))},
	{"getSystemEventQueueImpl", "()Ljava/awt/EventQueue;", nullptr, $PROTECTED | $ABSTRACT},
	{"getSystemSelection", "()Ljava/awt/datatransfer/Clipboard;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"initAssistiveTechnologies", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Toolkit::initAssistiveTechnologies))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Toolkit::initIDs))},
	{"initStatic", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Toolkit::initStatic))},
	{"initializeDesktopProperties", "()V", nullptr, $PROTECTED},
	{"isAlwaysOnTopSupported", "()Z", nullptr, $PUBLIC},
	{"isDynamicLayoutActive", "()Z", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"isDynamicLayoutSet", "()Z", nullptr, $PROTECTED, nullptr, "java.awt.HeadlessException"},
	{"isFrameStateSupported", "(I)Z", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"isModalExclusionTypeSupported", "(Ljava/awt/Dialog$ModalExclusionType;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isModalityTypeSupported", "(Ljava/awt/Dialog$ModalityType;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"lambda$loadAssistiveTechnologies$0", "(Ljava/lang/ClassLoader;Ljava/util/Set;Ljava/util/Map;)Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)($ClassLoader*,$Set*,$Map*)>(&Toolkit::lambda$loadAssistiveTechnologies$0))},
	{"lambda$loadAssistiveTechnologies$1", "(Ljava/util/Map;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Map*,$String*)>(&Toolkit::lambda$loadAssistiveTechnologies$1))},
	{"lazilyLoadDesktopProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"loadAssistiveTechnologies", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Toolkit::loadAssistiveTechnologies))},
	{"loadLibraries", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Toolkit::loadLibraries))},
	{"loadSystemColors", "([I)V", nullptr, $PROTECTED, nullptr, "java.awt.HeadlessException"},
	{"mapInputMethodHighlight", "(Ljava/awt/im/InputMethodHighlight;)Ljava/util/Map;", "(Ljava/awt/im/InputMethodHighlight;)Ljava/util/Map<Ljava/awt/font/TextAttribute;*>;", $PUBLIC | $ABSTRACT, nullptr, "java.awt.HeadlessException"},
	{"newAWTError", "(Ljava/lang/Throwable;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Throwable*,$String*)>(&Toolkit::newAWTError))},
	{"notifyAWTEventListeners", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{"prepareImage", "(Ljava/awt/Image;IILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeAWTEventListener", "(Ljava/awt/event/AWTEventListener;)V", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"setDesktopProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(Toolkit::*)($String*,Object$*)>(&Toolkit::setDesktopProperty))},
	{"setDynamicLayout", "(Z)V", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"setLockingKeyState", "(IZ)V", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"setPlatformResources", "(Ljava/util/ResourceBundle;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ResourceBundle*)>(&Toolkit::setPlatformResources))},
	{"sync", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

#define _METHOD_INDEX_initIDs 47

$InnerClassInfo _Toolkit_InnerClassesInfo_[] = {
	{"java.awt.Toolkit$DesktopPropertyChangeSupport", "java.awt.Toolkit", "DesktopPropertyChangeSupport", $PRIVATE | $STATIC},
	{"java.awt.Toolkit$SelectiveAWTEventListener", "java.awt.Toolkit", "SelectiveAWTEventListener", $PRIVATE},
	{"java.awt.Toolkit$ToolkitEventMulticaster", "java.awt.Toolkit", "ToolkitEventMulticaster", $PRIVATE | $STATIC},
	{"java.awt.Toolkit$4", nullptr, nullptr, 0},
	{"java.awt.Toolkit$3", nullptr, nullptr, 0},
	{"java.awt.Toolkit$2", nullptr, nullptr, 0},
	{"java.awt.Toolkit$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Toolkit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.Toolkit",
	"java.lang.Object",
	nullptr,
	_Toolkit_FieldInfo_,
	_Toolkit_MethodInfo_,
	nullptr,
	nullptr,
	_Toolkit_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Toolkit$DesktopPropertyChangeSupport,java.awt.Toolkit$DesktopPropertyChangeSupport$1,java.awt.Toolkit$SelectiveAWTEventListener,java.awt.Toolkit$ToolkitEventMulticaster,java.awt.Toolkit$4,java.awt.Toolkit$3,java.awt.Toolkit$2,java.awt.Toolkit$1"
};

$Object* allocate$Toolkit($Class* clazz) {
	return $of($alloc(Toolkit));
}

bool Toolkit::$assertionsDisabled = false;
Toolkit* Toolkit::toolkit = nullptr;
$String* Toolkit::atNames = nullptr;
$ResourceBundle* Toolkit::resources = nullptr;
$ResourceBundle* Toolkit::platformResources = nullptr;
bool Toolkit::loaded = false;
$volatile(int64_t) Toolkit::enabledOnToolkitMask = 0;

void Toolkit::init$() {
	$set(this, desktopProperties, $new($HashMap));
	$set(this, desktopPropsSupport, Toolkit::createPropertyChangeSupport(this));
	$set(this, calls, $new($ints, Toolkit::LONG_BITS));
	$set(this, eventListener, nullptr);
	$set(this, listener2SelectiveListener, $new($WeakHashMap));
}

void Toolkit::loadSystemColors($ints* systemColors) {
	$GraphicsEnvironment::checkHeadless();
}

void Toolkit::setDynamicLayout(bool dynamic) {
	$GraphicsEnvironment::checkHeadless();
	if (this != getDefaultToolkit()) {
		$nc($(getDefaultToolkit()))->setDynamicLayout(dynamic);
	}
}

bool Toolkit::isDynamicLayoutSet() {
	$GraphicsEnvironment::checkHeadless();
	if (this != Toolkit::getDefaultToolkit()) {
		return $nc($(Toolkit::getDefaultToolkit()))->isDynamicLayoutSet();
	} else {
		return false;
	}
}

bool Toolkit::isDynamicLayoutActive() {
	$GraphicsEnvironment::checkHeadless();
	if (this != Toolkit::getDefaultToolkit()) {
		return $nc($(Toolkit::getDefaultToolkit()))->isDynamicLayoutActive();
	} else {
		return false;
	}
}

$Insets* Toolkit::getScreenInsets($GraphicsConfiguration* gc) {
	$GraphicsEnvironment::checkHeadless();
	if (this != Toolkit::getDefaultToolkit()) {
		return $nc($(Toolkit::getDefaultToolkit()))->getScreenInsets(gc);
	} else {
		return $new($Insets, 0, 0, 0, 0);
	}
}

void Toolkit::initAssistiveTechnologies() {
	$init(Toolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($File);
	$var($String, sep, $File::separator);
	$var($Properties, properties, $new($Properties));
	$assignStatic(Toolkit::atNames, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Toolkit$1, sep, properties)))));
}

void Toolkit::newAWTError($Throwable* e, $String* s) {
	$init(Toolkit);
	$var($AWTError, newAWTError, $new($AWTError, s));
	newAWTError->initCause(e);
	$throw(newAWTError);
}

void Toolkit::fallbackToLoadClassForAT($String* atName) {
	$init(Toolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$Class* c = $Class::forName(atName, false, $($ClassLoader::getSystemClassLoader()));
		$nc($($nc(c)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0));
	} catch ($ClassNotFoundException& e) {
		newAWTError(e, $$str({"Assistive Technology not found: "_s, atName}));
	} catch ($InstantiationException& e) {
		newAWTError(e, $$str({"Could not instantiate Assistive Technology: "_s, atName}));
	} catch ($IllegalAccessException& e) {
		newAWTError(e, $$str({"Could not access Assistive Technology: "_s, atName}));
	} catch ($Exception& e) {
		newAWTError(e, $$str({"Error trying to install Assistive Technology: "_s, atName}));
	}
}

void Toolkit::loadAssistiveTechnologies() {
	$init(Toolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (Toolkit::atNames != nullptr && !$nc(Toolkit::atNames)->isBlank()) {
		$var($ClassLoader, cl, $ClassLoader::getSystemClassLoader());
		$var($Set, names, $cast($Set, $nc($($nc($($Arrays::stream($($nc(Toolkit::atNames)->split(","_s)))))->map(static_cast<$Function*>($$new(Toolkit$$Lambda$trim)))))->collect($($Collectors::toSet()))));
		$var($Map, providers, $new($HashMap));
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1, cl, names, providers)));
		$nc($($nc($($nc(names)->stream()))->filter(static_cast<$Predicate*>($$new(Toolkit$$Lambda$lambda$loadAssistiveTechnologies$1$2, providers)))))->forEach(static_cast<$Consumer*>($$new(Toolkit$$Lambda$fallbackToLoadClassForAT$3)));
	}
}

Toolkit* Toolkit::getDefaultToolkit() {
	$load(Toolkit);
	$synchronized(class$) {
		$init(Toolkit);
		if (Toolkit::toolkit == nullptr) {
			$assignStatic(Toolkit::toolkit, $PlatformGraphicsInfo::createToolkit());
			if ($GraphicsEnvironment::isHeadless() && !($instanceOf($HeadlessToolkit, Toolkit::toolkit))) {
				$assignStatic(Toolkit::toolkit, $new($HeadlessToolkit, Toolkit::toolkit));
			}
			if (!$GraphicsEnvironment::isHeadless()) {
				loadAssistiveTechnologies();
			}
		}
		return Toolkit::toolkit;
	}
}

$Image* Toolkit::createImage($bytes* imagedata) {
	return createImage(imagedata, 0, $nc(imagedata)->length);
}

$PrintJob* Toolkit::getPrintJob($Frame* frame, $String* jobtitle, $JobAttributes* jobAttributes, $PageAttributes* pageAttributes) {
	if (this != Toolkit::getDefaultToolkit()) {
		return $nc($(Toolkit::getDefaultToolkit()))->getPrintJob(frame, jobtitle, jobAttributes, pageAttributes);
	} else {
		return getPrintJob(frame, jobtitle, nullptr);
	}
}

$Clipboard* Toolkit::getSystemSelection() {
	$GraphicsEnvironment::checkHeadless();
	if (this != Toolkit::getDefaultToolkit()) {
		return $nc($(Toolkit::getDefaultToolkit()))->getSystemSelection();
	} else {
		$GraphicsEnvironment::checkHeadless();
		return nullptr;
	}
}

int32_t Toolkit::getMenuShortcutKeyMask() {
	$GraphicsEnvironment::checkHeadless();
	return $Event::CTRL_MASK;
}

int32_t Toolkit::getMenuShortcutKeyMaskEx() {
	$GraphicsEnvironment::checkHeadless();
	return $InputEvent::CTRL_DOWN_MASK;
}

bool Toolkit::getLockingKeyState(int32_t keyCode) {
	$GraphicsEnvironment::checkHeadless();
	if (!(keyCode == $KeyEvent::VK_CAPS_LOCK || keyCode == $KeyEvent::VK_NUM_LOCK || keyCode == $KeyEvent::VK_SCROLL_LOCK || keyCode == $KeyEvent::VK_KANA_LOCK)) {
		$throwNew($IllegalArgumentException, "invalid key for Toolkit.getLockingKeyState"_s);
	}
	$throwNew($UnsupportedOperationException, "Toolkit.getLockingKeyState"_s);
	$shouldNotReachHere();
}

void Toolkit::setLockingKeyState(int32_t keyCode, bool on) {
	$GraphicsEnvironment::checkHeadless();
	if (!(keyCode == $KeyEvent::VK_CAPS_LOCK || keyCode == $KeyEvent::VK_NUM_LOCK || keyCode == $KeyEvent::VK_SCROLL_LOCK || keyCode == $KeyEvent::VK_KANA_LOCK)) {
		$throwNew($IllegalArgumentException, "invalid key for Toolkit.setLockingKeyState"_s);
	}
	$throwNew($UnsupportedOperationException, "Toolkit.setLockingKeyState"_s);
}

$Container* Toolkit::getNativeContainer($Component* c) {
	$init(Toolkit);
	return $nc(c)->getNativeContainer();
}

$Cursor* Toolkit::createCustomCursor($Image* cursor, $Point* hotSpot, $String* name) {
	if (this != Toolkit::getDefaultToolkit()) {
		return $nc($(Toolkit::getDefaultToolkit()))->createCustomCursor(cursor, hotSpot, name);
	} else {
		return $new($Cursor, $Cursor::DEFAULT_CURSOR);
	}
}

$Dimension* Toolkit::getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight) {
	$GraphicsEnvironment::checkHeadless();
	if (this != Toolkit::getDefaultToolkit()) {
		return $nc($(Toolkit::getDefaultToolkit()))->getBestCursorSize(preferredWidth, preferredHeight);
	} else {
		return $new($Dimension, 0, 0);
	}
}

int32_t Toolkit::getMaximumCursorColors() {
	$GraphicsEnvironment::checkHeadless();
	if (this != Toolkit::getDefaultToolkit()) {
		return $nc($(Toolkit::getDefaultToolkit()))->getMaximumCursorColors();
	} else {
		return 0;
	}
}

bool Toolkit::isFrameStateSupported(int32_t state) {
	$GraphicsEnvironment::checkHeadless();
	if (this != Toolkit::getDefaultToolkit()) {
		return $nc($(Toolkit::getDefaultToolkit()))->isFrameStateSupported(state);
	} else {
		return (state == $Frame::NORMAL);
	}
}

void Toolkit::setPlatformResources($ResourceBundle* bundle) {
	$init(Toolkit);
	$assignStatic(Toolkit::platformResources, bundle);
}

void Toolkit::initIDs() {
	$init(Toolkit);
	$prepareNativeStatic(Toolkit, initIDs, void);
	$invokeNativeStatic(Toolkit, initIDs);
	$finishNativeStatic();
}

void Toolkit::loadLibraries() {
	$init(Toolkit);
	$beforeCallerSensitive();
	if (!Toolkit::loaded) {
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Toolkit$2)));
		Toolkit::loaded = true;
	}
}

void Toolkit::initStatic() {
	$init(Toolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$AWTAccessor::setToolkitAccessor($$new($Toolkit$3));
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Toolkit$4)));
	loadLibraries();
	initAssistiveTechnologies();
	initIDs();
}

$String* Toolkit::getProperty($String* key, $String* defaultValue) {
	$init(Toolkit);
	if (Toolkit::platformResources != nullptr) {
		try {
			return $nc(Toolkit::platformResources)->getString(key);
		} catch ($MissingResourceException& e) {
		}
	}
	if (Toolkit::resources != nullptr) {
		try {
			return $nc(Toolkit::resources)->getString(key);
		} catch ($MissingResourceException& e) {
		}
	}
	return defaultValue;
}

$EventQueue* Toolkit::getSystemEventQueue() {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$init($AWTPermissions);
		security->checkPermission($AWTPermissions::CHECK_AWT_EVENTQUEUE_PERMISSION);
	}
	return getSystemEventQueueImpl();
}

$EventQueue* Toolkit::getEventQueue() {
	$init(Toolkit);
	return $nc($(getDefaultToolkit()))->getSystemEventQueueImpl();
}

$DragGestureRecognizer* Toolkit::createDragGestureRecognizer($Class* abstractRecognizerClass, $DragSource* ds, $Component* c, int32_t srcActions, $DragGestureListener* dgl) {
	return nullptr;
}

$Object* Toolkit::getDesktopProperty($String* propertyName) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ($instanceOf($HeadlessToolkit, this)) {
			return $of($nc($($nc(($cast($HeadlessToolkit, this)))->getUnderlyingToolkit()))->getDesktopProperty(propertyName));
		}
		if ($nc(this->desktopProperties)->isEmpty()) {
			initializeDesktopProperties();
		}
		$var($Object, value, nullptr);
		if ($nc(propertyName)->equals("awt.dynamicLayoutSupported"_s)) {
			return $of($nc($(getDefaultToolkit()))->lazilyLoadDesktopProperty(propertyName));
		}
		$assign(value, $nc(this->desktopProperties)->get(propertyName));
		if (value == nullptr) {
			$assign(value, lazilyLoadDesktopProperty(propertyName));
			if (value != nullptr) {
				setDesktopProperty(propertyName, value);
			}
		}
		if ($instanceOf($RenderingHints, value)) {
			$assign(value, $nc(($cast($RenderingHints, value)))->clone());
		}
		return $of(value);
	}
}

void Toolkit::setDesktopProperty($String* name, Object$* newValue) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($HeadlessToolkit, this)) {
		$nc($($nc(($cast($HeadlessToolkit, this)))->getUnderlyingToolkit()))->setDesktopProperty(name, newValue);
		return;
	}
	$var($Object, oldValue, nullptr);
	$synchronized(this) {
		$assign(oldValue, $nc(this->desktopProperties)->get(name));
		$nc(this->desktopProperties)->put(name, newValue);
	}
	if (oldValue != nullptr || newValue != nullptr) {
		$nc(this->desktopPropsSupport)->firePropertyChange(name, oldValue, newValue);
	}
}

$Object* Toolkit::lazilyLoadDesktopProperty($String* name) {
	return $of(nullptr);
}

void Toolkit::initializeDesktopProperties() {
}

void Toolkit::addPropertyChangeListener($String* name, $PropertyChangeListener* pcl) {
	$nc(this->desktopPropsSupport)->addPropertyChangeListener(name, pcl);
}

void Toolkit::removePropertyChangeListener($String* name, $PropertyChangeListener* pcl) {
	$nc(this->desktopPropsSupport)->removePropertyChangeListener(name, pcl);
}

$PropertyChangeListenerArray* Toolkit::getPropertyChangeListeners() {
	return $nc(this->desktopPropsSupport)->getPropertyChangeListeners();
}

$PropertyChangeListenerArray* Toolkit::getPropertyChangeListeners($String* propertyName) {
	return $nc(this->desktopPropsSupport)->getPropertyChangeListeners(propertyName);
}

bool Toolkit::isAlwaysOnTopSupported() {
	return true;
}

$AWTEventListener* Toolkit::deProxyAWTEventListener($AWTEventListener* l) {
	$init(Toolkit);
	$var($AWTEventListener, localL, l);
	if (localL == nullptr) {
		return nullptr;
	}
	if ($instanceOf($AWTEventListenerProxy, l)) {
		$assign(localL, $cast($AWTEventListener, $nc(($cast($AWTEventListenerProxy, l)))->getListener()));
	}
	return localL;
}

void Toolkit::addAWTEventListener($AWTEventListener* listener, int64_t eventMask) {
	$useLocalCurrentObjectStackCache();
	$var($AWTEventListener, localL, deProxyAWTEventListener(listener));
	if (localL == nullptr) {
		return;
	}
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$init($AWTPermissions);
		security->checkPermission($AWTPermissions::ALL_AWT_EVENTS_PERMISSION);
	}
	$synchronized(this) {
		$var($Toolkit$SelectiveAWTEventListener, selectiveListener, $cast($Toolkit$SelectiveAWTEventListener, $nc(this->listener2SelectiveListener)->get(localL)));
		if (selectiveListener == nullptr) {
			$assign(selectiveListener, $new($Toolkit$SelectiveAWTEventListener, this, localL, eventMask));
			$nc(this->listener2SelectiveListener)->put(localL, selectiveListener);
			$set(this, eventListener, $Toolkit$ToolkitEventMulticaster::add(this->eventListener, selectiveListener));
		}
		$nc(selectiveListener)->orEventMasks(eventMask);
		Toolkit::enabledOnToolkitMask |= eventMask;
		int64_t mask = eventMask;
		for (int32_t i = 0; i < Toolkit::LONG_BITS; ++i) {
			if (mask == 0) {
				break;
			}
			if (((int64_t)(mask & (uint64_t)(int64_t)1)) != 0) {
				++(*$nc(this->calls))[i];
			}
			$usrAssign(mask, 1);
		}
	}
}

void Toolkit::removeAWTEventListener($AWTEventListener* listener) {
	$useLocalCurrentObjectStackCache();
	$var($AWTEventListener, localL, deProxyAWTEventListener(listener));
	if (listener == nullptr) {
		return;
	}
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$init($AWTPermissions);
		security->checkPermission($AWTPermissions::ALL_AWT_EVENTS_PERMISSION);
	}
	$synchronized(this) {
		$var($Toolkit$SelectiveAWTEventListener, selectiveListener, $cast($Toolkit$SelectiveAWTEventListener, $nc(this->listener2SelectiveListener)->get(localL)));
		if (selectiveListener != nullptr) {
			$nc(this->listener2SelectiveListener)->remove(localL);
			$var($ints, listenerCalls, selectiveListener->getCalls());
			for (int32_t i = 0; i < Toolkit::LONG_BITS; ++i) {
				(*$nc(this->calls))[i] -= $nc(listenerCalls)->get(i);
				if (!Toolkit::$assertionsDisabled && !($nc(this->calls)->get(i) >= 0)) {
					$throwNew($AssertionError, $of("Negative Listeners count"_s));
				}
				if ($nc(this->calls)->get(i) == 0) {
					Toolkit::enabledOnToolkitMask &= (uint64_t)~($sl((int64_t)1, i));
				}
			}
		}
		$set(this, eventListener, $Toolkit$ToolkitEventMulticaster::remove(this->eventListener, (selectiveListener == nullptr) ? localL : static_cast<$AWTEventListener*>(selectiveListener)));
	}
}

bool Toolkit::enabledOnToolkit(int64_t eventMask) {
	$init(Toolkit);
	return ((int64_t)(Toolkit::enabledOnToolkitMask & (uint64_t)eventMask)) != 0;
}

int32_t Toolkit::countAWTEventListeners(int64_t eventMask) {
	$synchronized(this) {
		int32_t ci = 0;
		for (; eventMask != 0; $usrAssign(eventMask, 1), ++ci) {
		}
		--ci;
		return $nc(this->calls)->get(ci);
	}
}

$AWTEventListenerArray* Toolkit::getAWTEventListeners() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$init($AWTPermissions);
		security->checkPermission($AWTPermissions::ALL_AWT_EVENTS_PERMISSION);
	}
	$synchronized(this) {
		$load($AWTEventListener);
		$var($EventListenerArray, la, $Toolkit$ToolkitEventMulticaster::getListeners(this->eventListener, $AWTEventListener::class$));
		$var($AWTEventListenerArray, ret, $new($AWTEventListenerArray, $nc(la)->length));
		for (int32_t i = 0; i < la->length; ++i) {
			$var($Toolkit$SelectiveAWTEventListener, sael, $cast($Toolkit$SelectiveAWTEventListener, la->get(i)));
			$var($AWTEventListener, tempL, $nc(sael)->getListener());
			ret->set(i, $$new($AWTEventListenerProxy, sael->getEventMask(), tempL));
		}
		return ret;
	}
}

$AWTEventListenerArray* Toolkit::getAWTEventListeners(int64_t eventMask) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$init($AWTPermissions);
		security->checkPermission($AWTPermissions::ALL_AWT_EVENTS_PERMISSION);
	}
	$synchronized(this) {
		$load($AWTEventListener);
		$var($EventListenerArray, la, $Toolkit$ToolkitEventMulticaster::getListeners(this->eventListener, $AWTEventListener::class$));
		$var($List, list, $new($ArrayList, $nc(la)->length));
		for (int32_t i = 0; i < $nc(la)->length; ++i) {
			$var($Toolkit$SelectiveAWTEventListener, sael, $cast($Toolkit$SelectiveAWTEventListener, la->get(i)));
			if (((int64_t)($nc(sael)->getEventMask() & (uint64_t)eventMask)) == eventMask) {
				int64_t var$0 = sael->getEventMask();
				list->add($$new($AWTEventListenerProxy, var$0, $(sael->getListener())));
			}
		}
		return $fcast($AWTEventListenerArray, list->toArray($$new($AWTEventListenerArray, 0)));
	}
}

void Toolkit::notifyAWTEventListeners($AWTEvent* theEvent) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($HeadlessToolkit, this)) {
		$nc($($nc(($cast($HeadlessToolkit, this)))->getUnderlyingToolkit()))->notifyAWTEventListeners(theEvent);
		return;
	}
	$var($AWTEventListener, eventListener, this->eventListener);
	if (eventListener != nullptr) {
		eventListener->eventDispatched(theEvent);
	}
}

$PropertyChangeSupport* Toolkit::createPropertyChangeSupport(Toolkit* toolkit) {
	$init(Toolkit);
	if ($instanceOf($SunToolkit, toolkit) || $instanceOf($HeadlessToolkit, toolkit)) {
		return $new($Toolkit$DesktopPropertyChangeSupport, toolkit);
	} else {
		return $new($PropertyChangeSupport, toolkit);
	}
}

bool Toolkit::areExtraMouseButtonsEnabled() {
	$GraphicsEnvironment::checkHeadless();
	return $nc($(Toolkit::getDefaultToolkit()))->areExtraMouseButtonsEnabled();
}

bool Toolkit::lambda$loadAssistiveTechnologies$1($Map* providers, $String* n) {
	$init(Toolkit);
	return !$nc(providers)->containsKey(n);
}

$Void* Toolkit::lambda$loadAssistiveTechnologies$0($ClassLoader* cl, $Set* names, $Map* providers) {
	$init(Toolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		{
			$load($AccessibilityProvider);
			$var($Iterator, i$, $nc($($ServiceLoader::load($AccessibilityProvider::class$, cl)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($AccessibilityProvider, p, $cast($AccessibilityProvider, i$->next()));
				{
					$var($String, name, $nc(p)->getName());
					bool var$0 = $nc(names)->contains(name);
					if (var$0 && !$nc(providers)->containsKey(name)) {
						p->activate();
						providers->put(name, p);
					}
				}
			}
		}
	} catch ($ServiceConfigurationError& e) {
		newAWTError(e, "Could not load or activate service provider"_s);
	} catch ($Exception& e) {
		newAWTError(e, "Could not load or activate service provider"_s);
	}
	return nullptr;
}

void clinit$Toolkit($Class* class$) {
	Toolkit::$assertionsDisabled = !Toolkit::class$->desiredAssertionStatus();
	Toolkit::loaded = false;
	{
		Toolkit::initStatic();
	}
}

Toolkit::Toolkit() {
}

$Class* Toolkit::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Toolkit$$Lambda$trim::classInfo$.name)) {
			return Toolkit$$Lambda$trim::load$(name, initialize);
		}
		if (name->equals(Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1::classInfo$.name)) {
			return Toolkit$$Lambda$lambda$loadAssistiveTechnologies$0$1::load$(name, initialize);
		}
		if (name->equals(Toolkit$$Lambda$lambda$loadAssistiveTechnologies$1$2::classInfo$.name)) {
			return Toolkit$$Lambda$lambda$loadAssistiveTechnologies$1$2::load$(name, initialize);
		}
		if (name->equals(Toolkit$$Lambda$fallbackToLoadClassForAT$3::classInfo$.name)) {
			return Toolkit$$Lambda$fallbackToLoadClassForAT$3::load$(name, initialize);
		}
	}
	$loadClass(Toolkit, name, initialize, &_Toolkit_ClassInfo_, clinit$Toolkit, allocate$Toolkit);
	return class$;
}

$Class* Toolkit::class$ = nullptr;

	} // awt
} // java