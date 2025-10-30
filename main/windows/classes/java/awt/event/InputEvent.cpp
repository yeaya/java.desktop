#include <java/awt/event/InputEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTPermission.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent$1.h>
#include <java/awt/event/NativeLibLoader.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/Arrays.h>
#include <sun/awt/AWTAccessor$InputEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AWTPermissions.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACCESS_CLIPBOARD_PERMISSION
#undef ALT_DOWN_MASK
#undef ALT_GRAPH_DOWN_MASK
#undef ALT_GRAPH_MASK
#undef ALT_MASK
#undef BUTTON1_DOWN_MASK
#undef BUTTON1_MASK
#undef BUTTON2_DOWN_MASK
#undef BUTTON2_MASK
#undef BUTTON3_DOWN_MASK
#undef BUTTON3_MASK
#undef BUTTON_DOWN_MASK
#undef CTRL_DOWN_MASK
#undef CTRL_MASK
#undef FINE
#undef FIRST_HIGH_BIT
#undef HIGH_MODIFIERS
#undef JDK_1_3_MODIFIERS
#undef META_DOWN_MASK
#undef META_MASK
#undef SHIFT_DOWN_MASK
#undef SHIFT_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $AWTPermission = ::java::awt::AWTPermission;
using $Component = ::java::awt::Component;
using $Event = ::java::awt::Event;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent$1 = ::java::awt::event::InputEvent$1;
using $NativeLibLoader = ::java::awt::event::NativeLibLoader;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Arrays = ::java::util::Arrays;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$InputEventAccessor = ::sun::awt::AWTAccessor$InputEventAccessor;
using $AWTPermissions = ::sun::awt::AWTPermissions;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {
		namespace event {

$NamedAttribute InputEvent_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _InputEvent_FieldAnnotations_SHIFT_MASK[] = {
	{"Ljava/lang/Deprecated;", InputEvent_Attribute_var$0},
	{}
};

$NamedAttribute InputEvent_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _InputEvent_FieldAnnotations_CTRL_MASK[] = {
	{"Ljava/lang/Deprecated;", InputEvent_Attribute_var$1},
	{}
};

$NamedAttribute InputEvent_Attribute_var$2[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _InputEvent_FieldAnnotations_META_MASK[] = {
	{"Ljava/lang/Deprecated;", InputEvent_Attribute_var$2},
	{}
};

$NamedAttribute InputEvent_Attribute_var$3[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _InputEvent_FieldAnnotations_ALT_MASK[] = {
	{"Ljava/lang/Deprecated;", InputEvent_Attribute_var$3},
	{}
};

$NamedAttribute InputEvent_Attribute_var$4[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _InputEvent_FieldAnnotations_ALT_GRAPH_MASK[] = {
	{"Ljava/lang/Deprecated;", InputEvent_Attribute_var$4},
	{}
};

$NamedAttribute InputEvent_Attribute_var$5[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _InputEvent_FieldAnnotations_BUTTON1_MASK[] = {
	{"Ljava/lang/Deprecated;", InputEvent_Attribute_var$5},
	{}
};

$NamedAttribute InputEvent_Attribute_var$6[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _InputEvent_FieldAnnotations_BUTTON2_MASK[] = {
	{"Ljava/lang/Deprecated;", InputEvent_Attribute_var$6},
	{}
};

$NamedAttribute InputEvent_Attribute_var$7[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _InputEvent_FieldAnnotations_BUTTON3_MASK[] = {
	{"Ljava/lang/Deprecated;", InputEvent_Attribute_var$7},
	{}
};

$NamedAttribute InputEvent_Attribute_var$8[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _InputEvent_MethodAnnotations_getModifiers5[] = {
	{"Ljava/lang/Deprecated;", InputEvent_Attribute_var$8},
	{}
};

$FieldInfo _InputEvent_FieldInfo_[] = {
	{"logger", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputEvent, logger)},
	{"SHIFT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(InputEvent, SHIFT_MASK), _InputEvent_FieldAnnotations_SHIFT_MASK},
	{"CTRL_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(InputEvent, CTRL_MASK), _InputEvent_FieldAnnotations_CTRL_MASK},
	{"META_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(InputEvent, META_MASK), _InputEvent_FieldAnnotations_META_MASK},
	{"ALT_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(InputEvent, ALT_MASK), _InputEvent_FieldAnnotations_ALT_MASK},
	{"ALT_GRAPH_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(InputEvent, ALT_GRAPH_MASK), _InputEvent_FieldAnnotations_ALT_GRAPH_MASK},
	{"BUTTON1_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(InputEvent, BUTTON1_MASK), _InputEvent_FieldAnnotations_BUTTON1_MASK},
	{"BUTTON2_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(InputEvent, BUTTON2_MASK), _InputEvent_FieldAnnotations_BUTTON2_MASK},
	{"BUTTON3_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(InputEvent, BUTTON3_MASK), _InputEvent_FieldAnnotations_BUTTON3_MASK},
	{"SHIFT_DOWN_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputEvent, SHIFT_DOWN_MASK)},
	{"CTRL_DOWN_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputEvent, CTRL_DOWN_MASK)},
	{"META_DOWN_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputEvent, META_DOWN_MASK)},
	{"ALT_DOWN_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputEvent, ALT_DOWN_MASK)},
	{"BUTTON1_DOWN_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputEvent, BUTTON1_DOWN_MASK)},
	{"BUTTON2_DOWN_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputEvent, BUTTON2_DOWN_MASK)},
	{"BUTTON3_DOWN_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputEvent, BUTTON3_DOWN_MASK)},
	{"ALT_GRAPH_DOWN_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InputEvent, ALT_GRAPH_DOWN_MASK)},
	{"BUTTON_DOWN_MASK", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputEvent, BUTTON_DOWN_MASK)},
	{"FIRST_HIGH_BIT", "I", nullptr, $STATIC | $FINAL, $constField(InputEvent, FIRST_HIGH_BIT)},
	{"JDK_1_3_MODIFIERS", "I", nullptr, $STATIC | $FINAL, $constField(InputEvent, JDK_1_3_MODIFIERS)},
	{"HIGH_MODIFIERS", "I", nullptr, $STATIC | $FINAL, $constField(InputEvent, HIGH_MODIFIERS)},
	{"when", "J", nullptr, 0, $field(InputEvent, when)},
	{"modifiers", "I", nullptr, 0, $field(InputEvent, modifiers)},
	{"canAccessSystemClipboard", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(InputEvent, canAccessSystemClipboard$)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InputEvent, serialVersionUID)},
	{}
};

$MethodInfo _InputEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;IJI)V", nullptr, 0, $method(static_cast<void(InputEvent::*)($Component*,int32_t,int64_t,int32_t)>(&InputEvent::init$))},
	{"canAccessSystemClipboard", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(InputEvent::*)()>(&InputEvent::canAccessSystemClipboard))},
	{"consume", "()V", nullptr, $PUBLIC},
	{"getButtonDownMasks", "()[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)()>(&InputEvent::getButtonDownMasks))},
	{"getMaskForButton", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&InputEvent::getMaskForButton))},
	{"getModifiers", "()I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _InputEvent_MethodAnnotations_getModifiers5},
	{"getModifiersEx", "()I", nullptr, $PUBLIC},
	{"getModifiersExText", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&InputEvent::getModifiersExText))},
	{"getWhen", "()J", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&InputEvent::initIDs))},
	{"isAltDown", "()Z", nullptr, $PUBLIC},
	{"isAltGraphDown", "()Z", nullptr, $PUBLIC},
	{"isConsumed", "()Z", nullptr, $PUBLIC},
	{"isControlDown", "()Z", nullptr, $PUBLIC},
	{"isMetaDown", "()Z", nullptr, $PUBLIC},
	{"isShiftDown", "()Z", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 9

$InnerClassInfo _InputEvent_InnerClassesInfo_[] = {
	{"java.awt.event.InputEvent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InputEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.event.InputEvent",
	"java.awt.event.ComponentEvent",
	nullptr,
	_InputEvent_FieldInfo_,
	_InputEvent_MethodInfo_,
	nullptr,
	nullptr,
	_InputEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.event.InputEvent$1"
};

$Object* allocate$InputEvent($Class* clazz) {
	return $of($alloc(InputEvent));
}

$PlatformLogger* InputEvent::logger = nullptr;
$ints* InputEvent::BUTTON_DOWN_MASK = nullptr;

$ints* InputEvent::getButtonDownMasks() {
	$init(InputEvent);
	return $Arrays::copyOf(InputEvent::BUTTON_DOWN_MASK, $nc(InputEvent::BUTTON_DOWN_MASK)->length);
}

int32_t InputEvent::getMaskForButton(int32_t button) {
	$init(InputEvent);
	$useLocalCurrentObjectStackCache();
	if (button <= 0 || button > $nc(InputEvent::BUTTON_DOWN_MASK)->length) {
		$throwNew($IllegalArgumentException, $$str({"button doesn\'t exist "_s, $$str(button)}));
	}
	return $nc(InputEvent::BUTTON_DOWN_MASK)->get(button - 1);
}

void InputEvent::initIDs() {
	$init(InputEvent);
	$prepareNativeStatic(InputEvent, initIDs, void);
	$invokeNativeStatic(InputEvent, initIDs);
	$finishNativeStatic();
}

void InputEvent::init$($Component* source, int32_t id, int64_t when, int32_t modifiers) {
	$ComponentEvent::init$(source, id);
	this->when = when;
	this->modifiers = modifiers;
	this->canAccessSystemClipboard$ = canAccessSystemClipboard();
}

bool InputEvent::canAccessSystemClipboard() {
	bool b = false;
	if (!$GraphicsEnvironment::isHeadless()) {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			try {
				$init($AWTPermissions);
				sm->checkPermission($AWTPermissions::ACCESS_CLIPBOARD_PERMISSION);
				b = true;
			} catch ($SecurityException& se) {
				$init($PlatformLogger$Level);
				if ($nc(InputEvent::logger)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc(InputEvent::logger)->fine("InputEvent.canAccessSystemClipboard() got SecurityException "_s, static_cast<$Throwable*>(se));
				}
			}
		} else {
			b = true;
		}
	}
	return b;
}

bool InputEvent::isShiftDown() {
	return ((int32_t)(this->modifiers & (uint32_t)InputEvent::SHIFT_DOWN_MASK)) != 0;
}

bool InputEvent::isControlDown() {
	return ((int32_t)(this->modifiers & (uint32_t)InputEvent::CTRL_DOWN_MASK)) != 0;
}

bool InputEvent::isMetaDown() {
	return ((int32_t)(this->modifiers & (uint32_t)InputEvent::META_DOWN_MASK)) != 0;
}

bool InputEvent::isAltDown() {
	return ((int32_t)(this->modifiers & (uint32_t)InputEvent::ALT_DOWN_MASK)) != 0;
}

bool InputEvent::isAltGraphDown() {
	return ((int32_t)(this->modifiers & (uint32_t)InputEvent::ALT_GRAPH_DOWN_MASK)) != 0;
}

int64_t InputEvent::getWhen() {
	return this->when;
}

int32_t InputEvent::getModifiers() {
	return (int32_t)(this->modifiers & (uint32_t)(InputEvent::JDK_1_3_MODIFIERS | InputEvent::HIGH_MODIFIERS));
}

int32_t InputEvent::getModifiersEx() {
	return (int32_t)(this->modifiers & (uint32_t)~InputEvent::JDK_1_3_MODIFIERS);
}

void InputEvent::consume() {
	this->consumed = true;
}

bool InputEvent::isConsumed() {
	return this->consumed;
}

$String* InputEvent::getModifiersExText(int32_t modifiers) {
	$init(InputEvent);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	if (((int32_t)(modifiers & (uint32_t)InputEvent::META_DOWN_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.meta"_s, "Meta"_s)));
		buf->append("+"_s);
	}
	if (((int32_t)(modifiers & (uint32_t)InputEvent::CTRL_DOWN_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.control"_s, "Ctrl"_s)));
		buf->append("+"_s);
	}
	if (((int32_t)(modifiers & (uint32_t)InputEvent::ALT_DOWN_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.alt"_s, "Alt"_s)));
		buf->append("+"_s);
	}
	if (((int32_t)(modifiers & (uint32_t)InputEvent::SHIFT_DOWN_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.shift"_s, "Shift"_s)));
		buf->append("+"_s);
	}
	if (((int32_t)(modifiers & (uint32_t)InputEvent::ALT_GRAPH_DOWN_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.altGraph"_s, "Alt Graph"_s)));
		buf->append("+"_s);
	}
	int32_t buttonNumber = 1;
	{
		$var($ints, arr$, InputEvent::BUTTON_DOWN_MASK);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t mask = arr$->get(i$);
			{
				if (((int32_t)(modifiers & (uint32_t)mask)) != 0) {
					buf->append($($Toolkit::getProperty($$str({"AWT.button"_s, $$str(buttonNumber)}), $$str({"Button"_s, $$str(buttonNumber)}))));
					buf->append("+"_s);
				}
				++buttonNumber;
			}
		}
	}
	if (buf->length() > 0) {
		buf->setLength(buf->length() - 1);
	}
	return buf->toString();
}

void clinit$InputEvent($Class* class$) {
	$assignStatic(InputEvent::logger, $PlatformLogger::getLogger("java.awt.event.InputEvent"_s));
	$assignStatic(InputEvent::BUTTON_DOWN_MASK, $new($ints, {
		InputEvent::BUTTON1_DOWN_MASK,
		InputEvent::BUTTON2_DOWN_MASK,
		InputEvent::BUTTON3_DOWN_MASK,
		1 << 14,
		1 << 15,
		1 << 16,
		1 << 17,
		1 << 18,
		1 << 19,
		1 << 20,
		1 << 21,
		1 << 22,
		1 << 23,
		1 << 24,
		1 << 25,
		1 << 26,
		1 << 27,
		1 << 28,
		1 << 29,
		1 << 30
	}));
	{
		$NativeLibLoader::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			InputEvent::initIDs();
		}
		$AWTAccessor::setInputEventAccessor($$new($InputEvent$1));
	}
}

InputEvent::InputEvent() {
}

$Class* InputEvent::load$($String* name, bool initialize) {
	$loadClass(InputEvent, name, initialize, &_InputEvent_ClassInfo_, clinit$InputEvent, allocate$InputEvent);
	return class$;
}

$Class* InputEvent::class$ = nullptr;

		} // event
	} // awt
} // java