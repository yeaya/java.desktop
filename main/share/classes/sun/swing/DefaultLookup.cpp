#include <sun/swing/DefaultLookup.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Insets.h>
#include <java/lang/Number.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Locale.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef DEFAULT_LOOKUP_KEY

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $StringBuffer = ::java::lang::StringBuffer;
using $Locale = ::java::util::Locale;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $AppContext = ::sun::awt::AppContext;

namespace sun {
	namespace swing {

$FieldInfo _DefaultLookup_FieldInfo_[] = {
	{"DEFAULT_LOOKUP_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultLookup, DEFAULT_LOOKUP_KEY)},
	{"currentDefaultThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(DefaultLookup, currentDefaultThread)},
	{"currentDefaultLookup", "Lsun/swing/DefaultLookup;", nullptr, $PRIVATE | $STATIC, $staticField(DefaultLookup, currentDefaultLookup)},
	{"isLookupSet", "Z", nullptr, $PRIVATE | $STATIC, $staticField(DefaultLookup, isLookupSet)},
	{}
};

$MethodInfo _DefaultLookup_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultLookup::*)()>(&DefaultLookup::init$))},
	{"get", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/ComponentUI;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($JComponent*,$ComponentUI*,$String*)>(&DefaultLookup::get))},
	{"getBoolean", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/ComponentUI;Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JComponent*,$ComponentUI*,$String*,bool)>(&DefaultLookup::getBoolean))},
	{"getBoolean", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/ComponentUI;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JComponent*,$ComponentUI*,$String*)>(&DefaultLookup::getBoolean))},
	{"getBorder", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/ComponentUI;Ljava/lang/String;Ljavax/swing/border/Border;)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)($JComponent*,$ComponentUI*,$String*,$Border*)>(&DefaultLookup::getBorder))},
	{"getBorder", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/ComponentUI;Ljava/lang/String;)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)($JComponent*,$ComponentUI*,$String*)>(&DefaultLookup::getBorder))},
	{"getColor", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/ComponentUI;Ljava/lang/String;Ljava/awt/Color;)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Color*(*)($JComponent*,$ComponentUI*,$String*,$Color*)>(&DefaultLookup::getColor))},
	{"getColor", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/ComponentUI;Ljava/lang/String;)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Color*(*)($JComponent*,$ComponentUI*,$String*)>(&DefaultLookup::getColor))},
	{"getDefault", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/ComponentUI;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getIcon", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/ComponentUI;Ljava/lang/String;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)($JComponent*,$ComponentUI*,$String*,$Icon*)>(&DefaultLookup::getIcon))},
	{"getIcon", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/ComponentUI;Ljava/lang/String;)Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)($JComponent*,$ComponentUI*,$String*)>(&DefaultLookup::getIcon))},
	{"getInsets", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/ComponentUI;Ljava/lang/String;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Insets*(*)($JComponent*,$ComponentUI*,$String*,$Insets*)>(&DefaultLookup::getInsets))},
	{"getInsets", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/ComponentUI;Ljava/lang/String;)Ljava/awt/Insets;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Insets*(*)($JComponent*,$ComponentUI*,$String*)>(&DefaultLookup::getInsets))},
	{"getInt", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/ComponentUI;Ljava/lang/String;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($JComponent*,$ComponentUI*,$String*,int32_t)>(&DefaultLookup::getInt))},
	{"getInt", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/ComponentUI;Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($JComponent*,$ComponentUI*,$String*)>(&DefaultLookup::getInt))},
	{"setDefaultLookup", "(Lsun/swing/DefaultLookup;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(DefaultLookup*)>(&DefaultLookup::setDefaultLookup))},
	{}
};

$ClassInfo _DefaultLookup_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.DefaultLookup",
	"java.lang.Object",
	nullptr,
	_DefaultLookup_FieldInfo_,
	_DefaultLookup_MethodInfo_
};

$Object* allocate$DefaultLookup($Class* clazz) {
	return $of($alloc(DefaultLookup));
}

$Object* DefaultLookup::DEFAULT_LOOKUP_KEY = nullptr;
$Thread* DefaultLookup::currentDefaultThread = nullptr;
DefaultLookup* DefaultLookup::currentDefaultLookup = nullptr;
bool DefaultLookup::isLookupSet = false;

void DefaultLookup::init$() {
}

void DefaultLookup::setDefaultLookup(DefaultLookup* lookup$renamed) {
	$init(DefaultLookup);
	$useLocalCurrentObjectStackCache();
	$var(DefaultLookup, lookup, lookup$renamed);
	$synchronized(DefaultLookup::class$) {
		if (!DefaultLookup::isLookupSet && lookup == nullptr) {
			return;
		} else if (lookup == nullptr) {
			$assign(lookup, $new(DefaultLookup));
		}
		DefaultLookup::isLookupSet = true;
		$nc($($AppContext::getAppContext()))->put(DefaultLookup::DEFAULT_LOOKUP_KEY, lookup);
		$assignStatic(DefaultLookup::currentDefaultThread, $Thread::currentThread());
		$assignStatic(DefaultLookup::currentDefaultLookup, lookup);
	}
}

$Object* DefaultLookup::get($JComponent* c, $ComponentUI* ui, $String* key) {
	$init(DefaultLookup);
	$useLocalCurrentObjectStackCache();
	bool lookupSet = false;
	$synchronized(DefaultLookup::class$) {
		lookupSet = DefaultLookup::isLookupSet;
	}
	if (!lookupSet) {
		return $of($UIManager::get(key, $($nc(c)->getLocale())));
	}
	$var($Thread, thisThread, $Thread::currentThread());
	$var(DefaultLookup, lookup, nullptr);
	$synchronized(DefaultLookup::class$) {
		if (thisThread == DefaultLookup::currentDefaultThread) {
			$assign(lookup, DefaultLookup::currentDefaultLookup);
		} else {
			$assign(lookup, $cast(DefaultLookup, $nc($($AppContext::getAppContext()))->get(DefaultLookup::DEFAULT_LOOKUP_KEY)));
			if (lookup == nullptr) {
				$assign(lookup, $new(DefaultLookup));
				$nc($($AppContext::getAppContext()))->put(DefaultLookup::DEFAULT_LOOKUP_KEY, lookup);
			}
			$assignStatic(DefaultLookup::currentDefaultThread, thisThread);
			$assignStatic(DefaultLookup::currentDefaultLookup, lookup);
		}
	}
	return $of($nc(lookup)->getDefault(c, ui, key));
}

int32_t DefaultLookup::getInt($JComponent* c, $ComponentUI* ui, $String* key, int32_t defaultValue) {
	$init(DefaultLookup);
	$var($Object, iValue, get(c, ui, key));
	if (iValue == nullptr || !($instanceOf($Number, iValue))) {
		return defaultValue;
	}
	return $nc(($cast($Number, iValue)))->intValue();
}

int32_t DefaultLookup::getInt($JComponent* c, $ComponentUI* ui, $String* key) {
	$init(DefaultLookup);
	return getInt(c, ui, key, -1);
}

$Insets* DefaultLookup::getInsets($JComponent* c, $ComponentUI* ui, $String* key, $Insets* defaultValue) {
	$init(DefaultLookup);
	$var($Object, iValue, get(c, ui, key));
	if (iValue == nullptr || !($instanceOf($Insets, iValue))) {
		return defaultValue;
	}
	return $cast($Insets, iValue);
}

$Insets* DefaultLookup::getInsets($JComponent* c, $ComponentUI* ui, $String* key) {
	$init(DefaultLookup);
	return getInsets(c, ui, key, nullptr);
}

bool DefaultLookup::getBoolean($JComponent* c, $ComponentUI* ui, $String* key, bool defaultValue) {
	$init(DefaultLookup);
	$var($Object, iValue, get(c, ui, key));
	if (iValue == nullptr || !($instanceOf($Boolean, iValue))) {
		return defaultValue;
	}
	return $nc(($cast($Boolean, iValue)))->booleanValue();
}

bool DefaultLookup::getBoolean($JComponent* c, $ComponentUI* ui, $String* key) {
	$init(DefaultLookup);
	return getBoolean(c, ui, key, false);
}

$Color* DefaultLookup::getColor($JComponent* c, $ComponentUI* ui, $String* key, $Color* defaultValue) {
	$init(DefaultLookup);
	$var($Object, iValue, get(c, ui, key));
	if (iValue == nullptr || !($instanceOf($Color, iValue))) {
		return defaultValue;
	}
	return $cast($Color, iValue);
}

$Color* DefaultLookup::getColor($JComponent* c, $ComponentUI* ui, $String* key) {
	$init(DefaultLookup);
	return getColor(c, ui, key, nullptr);
}

$Icon* DefaultLookup::getIcon($JComponent* c, $ComponentUI* ui, $String* key, $Icon* defaultValue) {
	$init(DefaultLookup);
	$var($Object, iValue, get(c, ui, key));
	if (iValue == nullptr || !($instanceOf($Icon, iValue))) {
		return defaultValue;
	}
	return $cast($Icon, iValue);
}

$Icon* DefaultLookup::getIcon($JComponent* c, $ComponentUI* ui, $String* key) {
	$init(DefaultLookup);
	return getIcon(c, ui, key, nullptr);
}

$Border* DefaultLookup::getBorder($JComponent* c, $ComponentUI* ui, $String* key, $Border* defaultValue) {
	$init(DefaultLookup);
	$var($Object, iValue, get(c, ui, key));
	if (iValue == nullptr || !($instanceOf($Border, iValue))) {
		return defaultValue;
	}
	return $cast($Border, iValue);
}

$Border* DefaultLookup::getBorder($JComponent* c, $ComponentUI* ui, $String* key) {
	$init(DefaultLookup);
	return getBorder(c, ui, key, nullptr);
}

$Object* DefaultLookup::getDefault($JComponent* c, $ComponentUI* ui, $String* key) {
	return $of($UIManager::get(key, $($nc(c)->getLocale())));
}

void clinit$DefaultLookup($Class* class$) {
	$assignStatic(DefaultLookup::DEFAULT_LOOKUP_KEY, $new($StringBuffer, "DefaultLookup"_s));
}

DefaultLookup::DefaultLookup() {
}

$Class* DefaultLookup::load$($String* name, bool initialize) {
	$loadClass(DefaultLookup, name, initialize, &_DefaultLookup_ClassInfo_, clinit$DefaultLookup, allocate$DefaultLookup);
	return class$;
}

$Class* DefaultLookup::class$ = nullptr;

	} // swing
} // sun