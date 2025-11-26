#include <sun/swing/plaf/DesktopProperty.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Frame.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Runnable.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults$ActiveValue.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/plaf/DesktopProperty$1.h>
#include <sun/swing/plaf/DesktopProperty$WeakPCL.h>
#include <jcpp.h>

#undef DESKTOP_PROPERTY_UPDATE_PENDING_KEY
#undef TRUE

using $FrameArray = $Array<::java::awt::Frame>;
using $WindowArray = $Array<::java::awt::Window>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Frame = ::java::awt::Frame;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$ActiveValue = ::javax::swing::UIDefaults$ActiveValue;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIManager = ::javax::swing::UIManager;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $AppContext = ::sun::awt::AppContext;
using $DesktopProperty$1 = ::sun::swing::plaf::DesktopProperty$1;
using $DesktopProperty$WeakPCL = ::sun::swing::plaf::DesktopProperty$WeakPCL;

namespace sun {
	namespace swing {
		namespace plaf {

$FieldInfo _DesktopProperty_FieldInfo_[] = {
	{"DESKTOP_PROPERTY_UPDATE_PENDING_KEY", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DesktopProperty, DESKTOP_PROPERTY_UPDATE_PENDING_KEY)},
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Lsun/swing/plaf/DesktopProperty;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DesktopProperty, queue)},
	{"pcl", "Lsun/swing/plaf/DesktopProperty$WeakPCL;", nullptr, $PRIVATE, $field(DesktopProperty, pcl)},
	{"key", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DesktopProperty, key)},
	{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(DesktopProperty, value)},
	{"fallback", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DesktopProperty, fallback)},
	{}
};

$MethodInfo _DesktopProperty_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(DesktopProperty::*)($String*,Object$*)>(&DesktopProperty::init$))},
	{"configureValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"flushUnreferencedProperties", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&DesktopProperty::flushUnreferencedProperties))},
	{"getDefaultValue", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getKey", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getValueFromDesktop", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"invalidate", "(Ljavax/swing/LookAndFeel;)V", nullptr, $PUBLIC},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"isUpdatePending", "()Z", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<bool(*)()>(&DesktopProperty::isUpdatePending))},
	{"setUpdatePending", "(Z)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)(bool)>(&DesktopProperty::setUpdatePending))},
	{"updateAllUIs", "()V", nullptr, $PROTECTED},
	{"updateUI", "()V", nullptr, $PROTECTED},
	{"updateWindowUI", "(Ljava/awt/Window;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Window*)>(&DesktopProperty::updateWindowUI))},
	{}
};

$InnerClassInfo _DesktopProperty_InnerClassesInfo_[] = {
	{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.swing.plaf.DesktopProperty$WeakPCL", "sun.swing.plaf.DesktopProperty", "WeakPCL", $PRIVATE | $STATIC},
	{"sun.swing.plaf.DesktopProperty$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DesktopProperty_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.plaf.DesktopProperty",
	"java.lang.Object",
	"javax.swing.UIDefaults$ActiveValue",
	_DesktopProperty_FieldInfo_,
	_DesktopProperty_MethodInfo_,
	nullptr,
	nullptr,
	_DesktopProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.swing.plaf.DesktopProperty$WeakPCL,sun.swing.plaf.DesktopProperty$1"
};

$Object* allocate$DesktopProperty($Class* clazz) {
	return $of($alloc(DesktopProperty));
}

$StringBuilder* DesktopProperty::DESKTOP_PROPERTY_UPDATE_PENDING_KEY = nullptr;
$ReferenceQueue* DesktopProperty::queue = nullptr;

void DesktopProperty::flushUnreferencedProperties() {
	$init(DesktopProperty);
	$var($DesktopProperty$WeakPCL, pcl, nullptr);
	while (($assign(pcl, $cast($DesktopProperty$WeakPCL, $nc(DesktopProperty::queue)->poll()))) != nullptr) {
		$nc(pcl)->dispose();
	}
}

void DesktopProperty::setUpdatePending(bool update) {
	$load(DesktopProperty);
	$synchronized(class$) {
		$init(DesktopProperty);
		$useLocalCurrentObjectStackCache();
		$nc($($AppContext::getAppContext()))->put(DesktopProperty::DESKTOP_PROPERTY_UPDATE_PENDING_KEY, $($Boolean::valueOf(update)));
	}
}

bool DesktopProperty::isUpdatePending() {
	$load(DesktopProperty);
	$synchronized(class$) {
		$init(DesktopProperty);
		$useLocalCurrentObjectStackCache();
		$init($Boolean);
		return $nc($Boolean::TRUE)->equals($($nc($($AppContext::getAppContext()))->get(DesktopProperty::DESKTOP_PROPERTY_UPDATE_PENDING_KEY)));
	}
}

void DesktopProperty::updateAllUIs() {
	$useLocalCurrentObjectStackCache();
	$var($FrameArray, appFrames, $Frame::getFrames());
	{
		$var($FrameArray, arr$, appFrames);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Frame, appFrame, arr$->get(i$));
			{
				updateWindowUI(appFrame);
			}
		}
	}
}

void DesktopProperty::updateWindowUI($Window* window) {
	$init(DesktopProperty);
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::updateComponentTreeUI(window);
	$var($WindowArray, ownedWins, $nc(window)->getOwnedWindows());
	{
		$var($WindowArray, arr$, ownedWins);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Window, ownedWin, arr$->get(i$));
			{
				updateWindowUI(ownedWin);
			}
		}
	}
}

void DesktopProperty::init$($String* key, Object$* fallback) {
	$set(this, key, key);
	$set(this, fallback, fallback);
	flushUnreferencedProperties();
}

$Object* DesktopProperty::createValue($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	if (this->value == nullptr) {
		$set(this, value, configureValue($(getValueFromDesktop())));
		if (this->value == nullptr) {
			$set(this, value, configureValue($(getDefaultValue())));
		}
	}
	return $of(this->value);
}

$Object* DesktopProperty::getValueFromDesktop() {
	$useLocalCurrentObjectStackCache();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	if (this->pcl == nullptr) {
		$var($String, var$0, getKey());
		$set(this, pcl, $new($DesktopProperty$WeakPCL, this, var$0, $($UIManager::getLookAndFeel())));
		$nc(toolkit)->addPropertyChangeListener($(getKey()), this->pcl);
	}
	return $of($nc(toolkit)->getDesktopProperty($(getKey())));
}

$Object* DesktopProperty::getDefaultValue() {
	return $of(this->fallback);
}

void DesktopProperty::invalidate($LookAndFeel* laf) {
	invalidate();
}

void DesktopProperty::invalidate() {
	$set(this, value, nullptr);
}

void DesktopProperty::updateUI() {
	if (!isUpdatePending()) {
		setUpdatePending(true);
		$var($Runnable, uiUpdater, $new($DesktopProperty$1, this));
		$SwingUtilities::invokeLater(uiUpdater);
	}
}

$Object* DesktopProperty::configureValue(Object$* value$renamed) {
	$var($Object, value, value$renamed);
	if (value != nullptr) {
		if ($instanceOf($Color, value)) {
			return $of($new($ColorUIResource, $cast($Color, value)));
		} else if ($instanceOf($Font, value)) {
			return $of($new($FontUIResource, $cast($Font, value)));
		} else if ($instanceOf($UIDefaults$LazyValue, value)) {
			$assign(value, $nc(($cast($UIDefaults$LazyValue, value)))->createValue(nullptr));
		} else if ($instanceOf($UIDefaults$ActiveValue, value)) {
			$assign(value, $nc(($cast($UIDefaults$ActiveValue, value)))->createValue(nullptr));
		}
	}
	return $of(value);
}

$String* DesktopProperty::getKey() {
	return this->key;
}

void clinit$DesktopProperty($Class* class$) {
	$assignStatic(DesktopProperty::DESKTOP_PROPERTY_UPDATE_PENDING_KEY, $new($StringBuilder, "DesktopPropertyUpdatePending"_s));
	$assignStatic(DesktopProperty::queue, $new($ReferenceQueue));
}

DesktopProperty::DesktopProperty() {
}

$Class* DesktopProperty::load$($String* name, bool initialize) {
	$loadClass(DesktopProperty, name, initialize, &_DesktopProperty_ClassInfo_, clinit$DesktopProperty, allocate$DesktopProperty);
	return class$;
}

$Class* DesktopProperty::class$ = nullptr;

		} // plaf
	} // swing
} // sun