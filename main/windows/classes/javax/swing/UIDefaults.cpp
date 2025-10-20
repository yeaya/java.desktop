#include <javax/swing/UIDefaults.h>

#include <java/awt/Color.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/String.h>
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
#include <java/util/AbstractMap.h>
#include <java/util/Enumeration.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <java/util/Vector.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults$1.h>
#include <javax/swing/UIDefaults$ActiveValue.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults$TextAndMnemonicHashMap.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/SwingPropertyChangeSupport.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <sun/swing/SwingAccessor$UIDefaultsAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

#undef PENDING

using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $Enumeration = ::java::util::Enumeration;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Vector = ::java::util::Vector;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults$1 = ::javax::swing::UIDefaults$1;
using $UIDefaults$ActiveValue = ::javax::swing::UIDefaults$ActiveValue;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIDefaults$TextAndMnemonicHashMap = ::javax::swing::UIDefaults$TextAndMnemonicHashMap;
using $Border = ::javax::swing::border::Border;
using $SwingPropertyChangeSupport = ::javax::swing::event::SwingPropertyChangeSupport;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$UIDefaultsAccessor = ::sun::swing::SwingAccessor$UIDefaultsAccessor;

namespace javax {
	namespace swing {

class UIDefaults$$Lambda$addInternalBundle : public $SwingAccessor$UIDefaultsAccessor {
	$class(UIDefaults$$Lambda$addInternalBundle, $NO_CLASS_INIT, $SwingAccessor$UIDefaultsAccessor)
public:
	void init$() {
	}
	virtual void addInternalBundle(UIDefaults* inst$, $String* bundleName) override {
		$nc(inst$)->addInternalBundle(bundleName);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<UIDefaults$$Lambda$addInternalBundle>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo UIDefaults$$Lambda$addInternalBundle::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UIDefaults$$Lambda$addInternalBundle::*)()>(&UIDefaults$$Lambda$addInternalBundle::init$))},
	{"addInternalBundle", "(Ljavax/swing/UIDefaults;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo UIDefaults$$Lambda$addInternalBundle::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.UIDefaults$$Lambda$addInternalBundle",
	"java.lang.Object",
	"sun.swing.SwingAccessor$UIDefaultsAccessor",
	nullptr,
	methodInfos
};
$Class* UIDefaults$$Lambda$addInternalBundle::load$($String* name, bool initialize) {
	$loadClass(UIDefaults$$Lambda$addInternalBundle, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* UIDefaults$$Lambda$addInternalBundle::class$ = nullptr;

$FieldInfo _UIDefaults_FieldInfo_[] = {
	{"PENDING", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UIDefaults, PENDING)},
	{"changeSupport", "Ljavax/swing/event/SwingPropertyChangeSupport;", nullptr, $PRIVATE, $field(UIDefaults, changeSupport)},
	{"resourceBundles", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/String;>;", $PRIVATE, $field(UIDefaults, resourceBundles)},
	{"defaultLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(UIDefaults, defaultLocale)},
	{"resourceCache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Locale;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;>;", $PRIVATE, $field(UIDefaults, resourceCache)},
	{}
};

$MethodInfo _UIDefaults_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UIDefaults::*)()>(&UIDefaults::init$))},
	{"<init>", "(IF)V", nullptr, $PUBLIC, $method(static_cast<void(UIDefaults::*)(int32_t,float)>(&UIDefaults::init$))},
	{"<init>", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(UIDefaults::*)($ObjectArray*)>(&UIDefaults::init$))},
	{"addInternalBundle", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(UIDefaults::*)($String*)>(&UIDefaults::addInternalBundle))},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addResourceBundle", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBoolean", "(Ljava/lang/Object;Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{"getBorder", "(Ljava/lang/Object;)Ljavax/swing/border/Border;", nullptr, $PUBLIC},
	{"getBorder", "(Ljava/lang/Object;Ljava/util/Locale;)Ljavax/swing/border/Border;", nullptr, $PUBLIC},
	{"getColor", "(Ljava/lang/Object;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getColor", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getDefaultLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDimension", "(Ljava/lang/Object;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getDimension", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getFont", "(Ljava/lang/Object;)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFont", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFromHashtable", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(UIDefaults::*)(Object$*)>(&UIDefaults::getFromHashtable))},
	{"getFromResourceBundle", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(UIDefaults::*)(Object$*,$Locale*)>(&UIDefaults::getFromResourceBundle))},
	{"getIcon", "(Ljava/lang/Object;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getIcon", "(Ljava/lang/Object;Ljava/util/Locale;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getInsets", "(Ljava/lang/Object;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getInsets", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getInt", "(Ljava/lang/Object;Ljava/util/Locale;)I", nullptr, $PUBLIC},
	{"getPropertyChangeListeners", "()[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getResourceCache", "(Ljava/util/Locale;)Ljava/util/Map;", "(Ljava/util/Locale;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $method(static_cast<$Map*(UIDefaults::*)($Locale*)>(&UIDefaults::getResourceCache))},
	{"getString", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getString", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC},
	{"getUIClass", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class<+Ljavax/swing/plaf/ComponentUI;>;", $PUBLIC},
	{"getUIClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<+Ljavax/swing/plaf/ComponentUI;>;", $PUBLIC},
	{"getUIError", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"isDesktopResourceBundle", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&UIDefaults::isDesktopResourceBundle))},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"putDefaults", "([Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeResourceBundle", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setDefaultLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _UIDefaults_InnerClassesInfo_[] = {
	{"javax.swing.UIDefaults$TextAndMnemonicHashMap", "javax.swing.UIDefaults", "TextAndMnemonicHashMap", $PRIVATE | $STATIC},
	{"javax.swing.UIDefaults$LazyInputMap", "javax.swing.UIDefaults", "LazyInputMap", $PUBLIC | $STATIC},
	{"javax.swing.UIDefaults$ProxyLazyValue", "javax.swing.UIDefaults", "ProxyLazyValue", $PUBLIC | $STATIC},
	{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.UIDefaults$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UIDefaults_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.UIDefaults",
	"java.util.Hashtable",
	nullptr,
	_UIDefaults_FieldInfo_,
	_UIDefaults_MethodInfo_,
	"Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/Object;>;",
	nullptr,
	_UIDefaults_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.UIDefaults$TextAndMnemonicHashMap,javax.swing.UIDefaults$LazyInputMap,javax.swing.UIDefaults$ProxyLazyValue,javax.swing.UIDefaults$ProxyLazyValue$1,javax.swing.UIDefaults$ActiveValue,javax.swing.UIDefaults$LazyValue,javax.swing.UIDefaults$1"
};

$Object* allocate$UIDefaults($Class* clazz) {
	return $of($alloc(UIDefaults));
}

$Object* UIDefaults::PENDING = nullptr;

void UIDefaults::init$() {
	UIDefaults::init$(700, 0.75f);
}

void UIDefaults::init$(int32_t initialCapacity, float loadFactor) {
	$Hashtable::init$(initialCapacity, loadFactor);
	$set(this, defaultLocale, $Locale::getDefault());
	$set(this, resourceCache, $new($HashMap));
}

void UIDefaults::init$($ObjectArray* keyValueList) {
	$Hashtable::init$($nc(keyValueList)->length / 2);
	$set(this, defaultLocale, $Locale::getDefault());
	for (int32_t i = 0; i < $nc(keyValueList)->length; i += 2) {
		$Hashtable::put(keyValueList->get(i), keyValueList->get(i + 1));
	}
}

$Object* UIDefaults::get(Object$* key) {
	$var($Object, value, getFromHashtable(key));
	return $of((value != nullptr) ? value : getFromResourceBundle(key, nullptr));
}

$Object* UIDefaults::getFromHashtable(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, $Hashtable::get(key));
	if ((!$equals(value, UIDefaults::PENDING)) && !($instanceOf($UIDefaults$ActiveValue, value)) && !($instanceOf($UIDefaults$LazyValue, value))) {
		return $of(value);
	}
	$synchronized(this) {
		$assign(value, $Hashtable::get(key));
		if ($equals(value, UIDefaults::PENDING)) {
			do {
				try {
					$of(this)->wait();
				} catch ($InterruptedException&) {
					$catch();
				}
				$assign(value, $Hashtable::get(key));
			} while ($equals(value, UIDefaults::PENDING));
			return $of(value);
		} else if ($instanceOf($UIDefaults$LazyValue, value)) {
			$Hashtable::put(key, UIDefaults::PENDING);
		} else if (!($instanceOf($UIDefaults$ActiveValue, value))) {
			return $of(value);
		}
	}
	if ($instanceOf($UIDefaults$LazyValue, value)) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				$assign(value, $nc(($cast($UIDefaults$LazyValue, value)))->createValue(this));
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$synchronized(this) {
					if (value == nullptr) {
						$Hashtable::remove(key);
					} else {
						$Hashtable::put(key, value);
					}
					$of(this)->notifyAll();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		$assign(value, $nc(($cast($UIDefaults$ActiveValue, value)))->createValue(this));
	}
	return $of(value);
}

$Object* UIDefaults::get(Object$* key, $Locale* l) {
	$var($Object, value, getFromHashtable(key));
	return $of((value != nullptr) ? value : getFromResourceBundle(key, l));
}

$Object* UIDefaults::getFromResourceBundle(Object$* key, $Locale* l$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, l, l$renamed);
	if (this->resourceBundles == nullptr || $nc(this->resourceBundles)->isEmpty() || !($instanceOf($String, key))) {
		return $of(nullptr);
	}
	if (l == nullptr) {
		if (this->defaultLocale == nullptr) {
			return $of(nullptr);
		} else {
			$assign(l, this->defaultLocale);
		}
	}
	$synchronized(this) {
		return $of($nc($(getResourceCache(l)))->get(key));
	}
}

$Map* UIDefaults::getResourceCache($Locale* l) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Map, values, $cast($Map, $nc(this->resourceCache)->get(l)));
	if (values == nullptr) {
		$assign(values, $new($UIDefaults$TextAndMnemonicHashMap));
		for (int32_t i = $nc(this->resourceBundles)->size() - 1; i >= 0; --i) {
			$var($String, bundleName, $cast($String, $nc(this->resourceBundles)->get(i)));
			try {
				$var($ResourceBundle, b, nullptr);
				if (isDesktopResourceBundle(bundleName)) {
					$assign(b, $ResourceBundle::getBundle(bundleName, l, $(UIDefaults::class$->getModule())));
				} else {
					$assign(b, $ResourceBundle::getBundle(bundleName, l, $($ClassLoader::getSystemClassLoader())));
				}
				$var($Enumeration, keys, $nc(b)->getKeys());
				while ($nc(keys)->hasMoreElements()) {
					$var($String, key, $cast($String, keys->nextElement()));
					if (values->get(key) == nullptr) {
						$var($Object, value, b->getObject(key));
						values->put(key, value);
					}
				}
			} catch ($MissingResourceException&) {
				$catch();
			}
		}
		$nc(this->resourceCache)->put(l, values);
	}
	return values;
}

bool UIDefaults::isDesktopResourceBundle($String* baseName) {
	$init(UIDefaults);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Module, thisModule, UIDefaults::class$->getModule());
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($UIDefaults$1, thisModule, baseName)))))))->booleanValue();
}

$Object* UIDefaults::put(Object$* key, Object$* value) {
	$var($Object, oldValue, (value == nullptr) ? $Hashtable::remove(key) : $Hashtable::put(key, value));
	if ($instanceOf($String, key)) {
		firePropertyChange($cast($String, key), oldValue, value);
	}
	return $of(oldValue);
}

void UIDefaults::putDefaults($ObjectArray* keyValueList) {
	$useLocalCurrentObjectStackCache();
	{
		int32_t i = 0;
		int32_t max = $nc(keyValueList)->length;
		for (; i < max; i += 2) {
			$var($Object0, value, keyValueList->get(i + 1));
			if (value == nullptr) {
				$Hashtable::remove(keyValueList->get(i));
			} else {
				$Hashtable::put(keyValueList->get(i), value);
			}
		}
	}
	firePropertyChange("UIDefaults"_s, nullptr, nullptr);
}

$Font* UIDefaults::getFont(Object$* key) {
	$var($Object, value, get(key));
	return ($instanceOf($Font, value)) ? $cast($Font, value) : ($Font*)nullptr;
}

$Font* UIDefaults::getFont(Object$* key, $Locale* l) {
	$var($Object, value, get(key, l));
	return ($instanceOf($Font, value)) ? $cast($Font, value) : ($Font*)nullptr;
}

$Color* UIDefaults::getColor(Object$* key) {
	$var($Object, value, get(key));
	return ($instanceOf($Color, value)) ? $cast($Color, value) : ($Color*)nullptr;
}

$Color* UIDefaults::getColor(Object$* key, $Locale* l) {
	$var($Object, value, get(key, l));
	return ($instanceOf($Color, value)) ? $cast($Color, value) : ($Color*)nullptr;
}

$Icon* UIDefaults::getIcon(Object$* key) {
	$var($Object, value, get(key));
	return ($instanceOf($Icon, value)) ? $cast($Icon, value) : ($Icon*)nullptr;
}

$Icon* UIDefaults::getIcon(Object$* key, $Locale* l) {
	$var($Object, value, get(key, l));
	return ($instanceOf($Icon, value)) ? $cast($Icon, value) : ($Icon*)nullptr;
}

$Border* UIDefaults::getBorder(Object$* key) {
	$var($Object, value, get(key));
	return ($instanceOf($Border, value)) ? $cast($Border, value) : ($Border*)nullptr;
}

$Border* UIDefaults::getBorder(Object$* key, $Locale* l) {
	$var($Object, value, get(key, l));
	return ($instanceOf($Border, value)) ? $cast($Border, value) : ($Border*)nullptr;
}

$String* UIDefaults::getString(Object$* key) {
	$var($Object, value, get(key));
	return ($instanceOf($String, value)) ? $cast($String, value) : ($String*)nullptr;
}

$String* UIDefaults::getString(Object$* key, $Locale* l) {
	$var($Object, value, get(key, l));
	return ($instanceOf($String, value)) ? $cast($String, value) : ($String*)nullptr;
}

int32_t UIDefaults::getInt(Object$* key) {
	$var($Object, value, get(key));
	return ($instanceOf($Integer, value)) ? $nc(($cast($Integer, value)))->intValue() : 0;
}

int32_t UIDefaults::getInt(Object$* key, $Locale* l) {
	$var($Object, value, get(key, l));
	return ($instanceOf($Integer, value)) ? $nc(($cast($Integer, value)))->intValue() : 0;
}

bool UIDefaults::getBoolean(Object$* key) {
	$var($Object, value, get(key));
	return ($instanceOf($Boolean, value)) ? $nc(($cast($Boolean, value)))->booleanValue() : false;
}

bool UIDefaults::getBoolean(Object$* key, $Locale* l) {
	$var($Object, value, get(key, l));
	return ($instanceOf($Boolean, value)) ? $nc(($cast($Boolean, value)))->booleanValue() : false;
}

$Insets* UIDefaults::getInsets(Object$* key) {
	$var($Object, value, get(key));
	return ($instanceOf($Insets, value)) ? $cast($Insets, value) : ($Insets*)nullptr;
}

$Insets* UIDefaults::getInsets(Object$* key, $Locale* l) {
	$var($Object, value, get(key, l));
	return ($instanceOf($Insets, value)) ? $cast($Insets, value) : ($Insets*)nullptr;
}

$Dimension* UIDefaults::getDimension(Object$* key) {
	$var($Object, value, get(key));
	return ($instanceOf($Dimension, value)) ? $cast($Dimension, value) : ($Dimension*)nullptr;
}

$Dimension* UIDefaults::getDimension(Object$* key, $Locale* l) {
	$var($Object, value, get(key, l));
	return ($instanceOf($Dimension, value)) ? $cast($Dimension, value) : ($Dimension*)nullptr;
}

$Class* UIDefaults::getUIClass($String* uiClassID, $ClassLoader* uiClassLoader) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, className, $cast($String, get(uiClassID)));
		if (className != nullptr) {
			$ReflectUtil::checkPackageAccess(className);
			$Class* cls = $cast($Class, get(className));
			if (cls == nullptr) {
				if (uiClassLoader == nullptr) {
					cls = $SwingUtilities::loadSystemClass(className);
				} else {
					cls = $nc(uiClassLoader)->loadClass(className);
				}
				if (cls != nullptr) {
					put(className, cls);
				}
			}
			$Class* tmp = cls;
			return tmp;
		}
	} catch ($ClassNotFoundException&) {
		$var($Exception, e, $catch());
		return nullptr;
	} catch ($ClassCastException&) {
		$var($Exception, e, $catch());
		return nullptr;
	}
	return nullptr;
}

$Class* UIDefaults::getUIClass($String* uiClassID) {
	return getUIClass(uiClassID, nullptr);
}

void UIDefaults::getUIError($String* msg) {
	try {
		$throwNew($Error, msg);
	} catch ($Throwable&) {
		$var($Throwable, e, $catch());
		e->printStackTrace();
	}
}

$ComponentUI* UIDefaults::getUI($JComponent* target) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Object, cl, get("ClassLoader"_s));
	$var($ClassLoader, uiClassLoader, (cl != nullptr) ? $cast($ClassLoader, cl) : $nc($of(target))->getClass()->getClassLoader());
	$Class* uiClass = getUIClass($(target->getUIClassID()), uiClassLoader);
	$var($Object, uiObject, nullptr);
	if (uiClass == nullptr) {
		getUIError($$str({"no ComponentUI class for: "_s, target}));
	} else {
		try {
			$var($Method, m, $cast($Method, get(uiClass)));
			if (m == nullptr) {
				$assign(m, $nc(uiClass)->getMethod("createUI"_s, $$new($ClassArray, {$JComponent::class$})));
				put(uiClass, m);
			}
			$load($ComponentUI);
			if ($nc(uiClass)->getModule() == $ComponentUI::class$->getModule()) {
				$assign(uiObject, $nc(m)->invoke(nullptr, $$new($ObjectArray, {$of(target)})));
			} else {
				$assign(uiObject, $MethodUtil::invoke(m, nullptr, $$new($ObjectArray, {$of(target)})));
			}
		} catch ($NoSuchMethodException&) {
			$var($NoSuchMethodException, e, $catch());
			getUIError($$str({"static createUI() method not found in "_s, uiClass}));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$var($StringWriter, w, $new($StringWriter));
			$var($PrintWriter, pw, $new($PrintWriter, static_cast<$Writer*>(w)));
			e->printStackTrace(pw);
			pw->flush();
			getUIError($$str({"createUI() failed for "_s, target, "\n"_s, w}));
		}
	}
	return $cast($ComponentUI, uiObject);
}

void UIDefaults::addPropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this) {
		if (this->changeSupport == nullptr) {
			$set(this, changeSupport, $new($SwingPropertyChangeSupport, this));
		}
		$nc(this->changeSupport)->addPropertyChangeListener(listener);
	}
}

void UIDefaults::removePropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this) {
		if (this->changeSupport != nullptr) {
			$nc(this->changeSupport)->removePropertyChangeListener(listener);
		}
	}
}

$PropertyChangeListenerArray* UIDefaults::getPropertyChangeListeners() {
	$synchronized(this) {
		if (this->changeSupport == nullptr) {
			return $new($PropertyChangeListenerArray, 0);
		}
		return $nc(this->changeSupport)->getPropertyChangeListeners();
	}
}

void UIDefaults::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	if (this->changeSupport != nullptr) {
		$nc(this->changeSupport)->firePropertyChange(propertyName, oldValue, newValue);
	}
}

void UIDefaults::addResourceBundle($String* bundleName) {
	$synchronized(this) {
		if (bundleName == nullptr) {
			return;
		}
		if (isDesktopResourceBundle(bundleName)) {
			return;
		}
		addInternalBundle(bundleName);
	}
}

void UIDefaults::addInternalBundle($String* bundleName) {
	$synchronized(this) {
		if (bundleName == nullptr) {
			return;
		}
		if (this->resourceBundles == nullptr) {
			$set(this, resourceBundles, $new($Vector, 5));
		}
		if (!$nc(this->resourceBundles)->contains(bundleName)) {
			$nc(this->resourceBundles)->add(bundleName);
			$nc(this->resourceCache)->clear();
		}
	}
}

void UIDefaults::removeResourceBundle($String* bundleName) {
	$synchronized(this) {
		if (this->resourceBundles != nullptr) {
			$nc(this->resourceBundles)->remove($of(bundleName));
		}
		$nc(this->resourceCache)->clear();
	}
}

void UIDefaults::setDefaultLocale($Locale* l) {
	$set(this, defaultLocale, l);
}

$Locale* UIDefaults::getDefaultLocale() {
	return this->defaultLocale;
}

void clinit$UIDefaults($Class* class$) {
	$assignStatic(UIDefaults::PENDING, $new($Object));
	{
		$SwingAccessor::setUIDefaultsAccessor(static_cast<$SwingAccessor$UIDefaultsAccessor*>($$new(UIDefaults$$Lambda$addInternalBundle)));
	}
}

UIDefaults::UIDefaults() {
}

$Class* UIDefaults::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(UIDefaults$$Lambda$addInternalBundle::classInfo$.name)) {
			return UIDefaults$$Lambda$addInternalBundle::load$(name, initialize);
		}
	}
	$loadClass(UIDefaults, name, initialize, &_UIDefaults_ClassInfo_, clinit$UIDefaults, allocate$UIDefaults);
	return class$;
}

$Class* UIDefaults::class$ = nullptr;

	} // swing
} // javax