#include <java/awt/event/MouseEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/Point.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent$1.h>
#include <java/awt/event/NativeLibLoader.h>
#include <java/io/ObjectInputStream.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef ALT_DOWN_MASK
#undef ALT_GRAPH_DOWN_MASK
#undef ALT_GRAPH_MASK
#undef ALT_MASK
#undef BUTTON1
#undef BUTTON1_DOWN_MASK
#undef BUTTON1_MASK
#undef BUTTON2
#undef BUTTON2_DOWN_MASK
#undef BUTTON2_MASK
#undef BUTTON3
#undef BUTTON3_DOWN_MASK
#undef BUTTON3_MASK
#undef CTRL_DOWN_MASK
#undef CTRL_MASK
#undef JDK_1_3_MODIFIERS
#undef META_DOWN_MASK
#undef META_MASK
#undef MOUSE_CLICKED
#undef MOUSE_DRAGGED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_FIRST
#undef MOUSE_LAST
#undef MOUSE_MOVED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef MOUSE_WHEEL
#undef NOBUTTON
#undef SHIFT_DOWN_MASK
#undef SHIFT_MASK

using $Component = ::java::awt::Component;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $Point = ::java::awt::Point;
using $Toolkit = ::java::awt::Toolkit;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent$1 = ::java::awt::event::MouseEvent$1;
using $NativeLibLoader = ::java::awt::event::NativeLibLoader;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace java {
	namespace awt {
		namespace event {

$FieldInfo _MouseEvent_FieldInfo_[] = {
	{"MOUSE_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MouseEvent, MOUSE_FIRST)},
	{"MOUSE_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MouseEvent, MOUSE_LAST)},
	{"MOUSE_CLICKED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MouseEvent, MOUSE_CLICKED)},
	{"MOUSE_PRESSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MouseEvent, MOUSE_PRESSED)},
	{"MOUSE_RELEASED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MouseEvent, MOUSE_RELEASED)},
	{"MOUSE_MOVED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MouseEvent, MOUSE_MOVED)},
	{"MOUSE_ENTERED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MouseEvent, MOUSE_ENTERED)},
	{"MOUSE_EXITED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MouseEvent, MOUSE_EXITED)},
	{"MOUSE_DRAGGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MouseEvent, MOUSE_DRAGGED)},
	{"MOUSE_WHEEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MouseEvent, MOUSE_WHEEL)},
	{"NOBUTTON", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MouseEvent, NOBUTTON)},
	{"BUTTON1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MouseEvent, BUTTON1)},
	{"BUTTON2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MouseEvent, BUTTON2)},
	{"BUTTON3", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MouseEvent, BUTTON3)},
	{"x", "I", nullptr, 0, $field(MouseEvent, x)},
	{"y", "I", nullptr, 0, $field(MouseEvent, y)},
	{"xAbs", "I", nullptr, $PRIVATE, $field(MouseEvent, xAbs)},
	{"yAbs", "I", nullptr, $PRIVATE, $field(MouseEvent, yAbs)},
	{"clickCount", "I", nullptr, 0, $field(MouseEvent, clickCount)},
	{"causedByTouchEvent", "Z", nullptr, $PRIVATE, $field(MouseEvent, causedByTouchEvent)},
	{"button", "I", nullptr, 0, $field(MouseEvent, button)},
	{"popupTrigger", "Z", nullptr, 0, $field(MouseEvent, popupTrigger)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MouseEvent, serialVersionUID)},
	{"cachedNumberOfButtons", "I", nullptr, $PRIVATE | $STATIC, $staticField(MouseEvent, cachedNumberOfButtons)},
	{"shouldExcludeButtonFromExtModifiers", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(MouseEvent, shouldExcludeButtonFromExtModifiers)},
	{}
};

$MethodInfo _MouseEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;IJIIIIZI)V", nullptr, $PUBLIC, $method(static_cast<void(MouseEvent::*)($Component*,int32_t,int64_t,int32_t,int32_t,int32_t,int32_t,bool,int32_t)>(&MouseEvent::init$))},
	{"<init>", "(Ljava/awt/Component;IJIIIIZ)V", nullptr, $PUBLIC, $method(static_cast<void(MouseEvent::*)($Component*,int32_t,int64_t,int32_t,int32_t,int32_t,int32_t,bool)>(&MouseEvent::init$))},
	{"<init>", "(Ljava/awt/Component;IJIIIIIIZI)V", nullptr, $PUBLIC, $method(static_cast<void(MouseEvent::*)($Component*,int32_t,int64_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,bool,int32_t)>(&MouseEvent::init$))},
	{"getButton", "()I", nullptr, $PUBLIC},
	{"getClickCount", "()I", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getModifiersEx", "()I", nullptr, $PUBLIC},
	{"getMouseModifiersText", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&MouseEvent::getMouseModifiersText))},
	{"getPoint", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getX", "()I", nullptr, $PUBLIC},
	{"getXOnScreen", "()I", nullptr, $PUBLIC},
	{"getY", "()I", nullptr, $PUBLIC},
	{"getYOnScreen", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&MouseEvent::initIDs))},
	{"isPopupTrigger", "()Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MouseEvent::*)($ObjectInputStream*)>(&MouseEvent::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setNewModifiers", "()V", nullptr, $PRIVATE, $method(static_cast<void(MouseEvent::*)()>(&MouseEvent::setNewModifiers))},
	{"setOldModifiers", "()V", nullptr, $PRIVATE, $method(static_cast<void(MouseEvent::*)()>(&MouseEvent::setOldModifiers))},
	{"translatePoint", "(II)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

#define _METHOD_INDEX_initIDs 13

$InnerClassInfo _MouseEvent_InnerClassesInfo_[] = {
	{"java.awt.event.MouseEvent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MouseEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.event.MouseEvent",
	"java.awt.event.InputEvent",
	nullptr,
	_MouseEvent_FieldInfo_,
	_MouseEvent_MethodInfo_,
	nullptr,
	nullptr,
	_MouseEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.event.MouseEvent$1"
};

$Object* allocate$MouseEvent($Class* clazz) {
	return $of($alloc(MouseEvent));
}

int32_t MouseEvent::cachedNumberOfButtons = 0;

void MouseEvent::initIDs() {
	$init(MouseEvent);
	$prepareNativeStatic(MouseEvent, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$Point* MouseEvent::getLocationOnScreen() {
	return $new($Point, this->xAbs, this->yAbs);
}

int32_t MouseEvent::getXOnScreen() {
	return this->xAbs;
}

int32_t MouseEvent::getYOnScreen() {
	return this->yAbs;
}

void MouseEvent::init$($Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t x, int32_t y, int32_t clickCount, bool popupTrigger, int32_t button) {
	MouseEvent::init$(source, id, when, modifiers, x, y, 0, 0, clickCount, popupTrigger, button);
	$var($Point, eventLocationOnScreen, $new($Point, 0, 0));
	try {
		$assign(eventLocationOnScreen, $nc(source)->getLocationOnScreen());
		this->xAbs = $nc(eventLocationOnScreen)->x + x;
		this->yAbs = eventLocationOnScreen->y + y;
	} catch ($IllegalComponentStateException& e) {
		this->xAbs = 0;
		this->yAbs = 0;
	}
}

void MouseEvent::init$($Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t x, int32_t y, int32_t clickCount, bool popupTrigger) {
	MouseEvent::init$(source, id, when, modifiers, x, y, clickCount, popupTrigger, MouseEvent::NOBUTTON);
}

int32_t MouseEvent::getModifiersEx() {
	int32_t tmpModifiers = this->modifiers;
	if (this->shouldExcludeButtonFromExtModifiers) {
		tmpModifiers &= (uint32_t)~($InputEvent::getMaskForButton(getButton()));
	}
	return (int32_t)(tmpModifiers & (uint32_t)~$InputEvent::JDK_1_3_MODIFIERS);
}

void MouseEvent::init$($Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t x, int32_t y, int32_t xAbs, int32_t yAbs, int32_t clickCount, bool popupTrigger, int32_t button) {
	$useLocalCurrentObjectStackCache();
	$InputEvent::init$(source, id, when, modifiers);
	this->popupTrigger = false;
	this->shouldExcludeButtonFromExtModifiers = false;
	this->x = x;
	this->y = y;
	this->xAbs = xAbs;
	this->yAbs = yAbs;
	this->clickCount = clickCount;
	this->popupTrigger = popupTrigger;
	if (button < MouseEvent::NOBUTTON) {
		$throwNew($IllegalArgumentException, $$str({"Invalid button value :"_s, $$str(button)}));
	}
	if (button > MouseEvent::BUTTON3) {
		if (!$nc($($Toolkit::getDefaultToolkit()))->areExtraMouseButtonsEnabled()) {
			$throwNew($IllegalArgumentException, $$str({"Extra mouse events are disabled "_s, $$str(button)}));
		} else if (button > MouseEvent::cachedNumberOfButtons) {
			$throwNew($IllegalArgumentException, $$str({"Nonexistent button "_s, $$str(button)}));
		}
		if (getModifiersEx() != 0) {
			if (id == MouseEvent::MOUSE_RELEASED || id == MouseEvent::MOUSE_CLICKED) {
				this->shouldExcludeButtonFromExtModifiers = true;
			}
		}
	}
	this->button = button;
	bool var$0 = (getModifiers() != 0);
	if (var$0 && (getModifiersEx() == 0)) {
		setNewModifiers();
	} else {
		bool var$2 = (getModifiers() == 0);
		if (var$2 && (getModifiersEx() != 0 || button != MouseEvent::NOBUTTON) && (button <= MouseEvent::BUTTON3)) {
			setOldModifiers();
		}
	}
}

int32_t MouseEvent::getX() {
	return this->x;
}

int32_t MouseEvent::getY() {
	return this->y;
}

$Point* MouseEvent::getPoint() {
	int32_t x = 0;
	int32_t y = 0;
	$synchronized(this) {
		x = this->x;
		y = this->y;
	}
	return $new($Point, x, y);
}

void MouseEvent::translatePoint(int32_t x, int32_t y) {
	$synchronized(this) {
		this->x += x;
		this->y += y;
	}
}

int32_t MouseEvent::getClickCount() {
	return this->clickCount;
}

int32_t MouseEvent::getButton() {
	return this->button;
}

bool MouseEvent::isPopupTrigger() {
	return this->popupTrigger;
}

$String* MouseEvent::getMouseModifiersText(int32_t modifiers) {
	$init(MouseEvent);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::ALT_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.alt"_s, "Alt"_s)));
		buf->append("+"_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::META_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.meta"_s, "Meta"_s)));
		buf->append("+"_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::CTRL_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.control"_s, "Ctrl"_s)));
		buf->append("+"_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::SHIFT_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.shift"_s, "Shift"_s)));
		buf->append("+"_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::ALT_GRAPH_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.altGraph"_s, "Alt Graph"_s)));
		buf->append("+"_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::BUTTON1_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.button1"_s, "Button1"_s)));
		buf->append("+"_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::BUTTON2_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.button2"_s, "Button2"_s)));
		buf->append("+"_s);
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::BUTTON3_MASK)) != 0) {
		buf->append($($Toolkit::getProperty("AWT.button3"_s, "Button3"_s)));
		buf->append("+"_s);
	}
	int32_t mask = 0;
	for (int32_t i = 1; i <= MouseEvent::cachedNumberOfButtons; ++i) {
		mask = $InputEvent::getMaskForButton(i);
		if (((int32_t)(modifiers & (uint32_t)mask)) != 0 && buf->indexOf($($Toolkit::getProperty($$str({"AWT.button"_s, $$str(i)}), $$str({"Button"_s, $$str(i)})))) == -1) {
			buf->append($($Toolkit::getProperty($$str({"AWT.button"_s, $$str(i)}), $$str({"Button"_s, $$str(i)}))));
			buf->append("+"_s);
		}
	}
	if (buf->length() > 0) {
		buf->setLength(buf->length() - 1);
	}
	return buf->toString();
}

$String* MouseEvent::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, str, $new($StringBuilder, 80));
	switch (this->id) {
	case MouseEvent::MOUSE_PRESSED:
		{
			str->append("MOUSE_PRESSED"_s);
			break;
		}
	case MouseEvent::MOUSE_RELEASED:
		{
			str->append("MOUSE_RELEASED"_s);
			break;
		}
	case MouseEvent::MOUSE_CLICKED:
		{
			str->append("MOUSE_CLICKED"_s);
			break;
		}
	case MouseEvent::MOUSE_ENTERED:
		{
			str->append("MOUSE_ENTERED"_s);
			break;
		}
	case MouseEvent::MOUSE_EXITED:
		{
			str->append("MOUSE_EXITED"_s);
			break;
		}
	case MouseEvent::MOUSE_MOVED:
		{
			str->append("MOUSE_MOVED"_s);
			break;
		}
	case MouseEvent::MOUSE_DRAGGED:
		{
			str->append("MOUSE_DRAGGED"_s);
			break;
		}
	case MouseEvent::MOUSE_WHEEL:
		{
			str->append("MOUSE_WHEEL"_s);
			break;
		}
	default:
		{
			str->append("unknown type"_s);
		}
	}
	str->append(",("_s)->append(this->x)->append(","_s)->append(this->y)->append(")"_s);
	str->append(",absolute("_s)->append(this->xAbs)->append(","_s)->append(this->yAbs)->append(")"_s);
	if (this->id != MouseEvent::MOUSE_DRAGGED && this->id != MouseEvent::MOUSE_MOVED) {
		str->append(",button="_s)->append(getButton());
	}
	if (getModifiers() != 0) {
		str->append(",modifiers="_s)->append($(getMouseModifiersText(this->modifiers)));
	}
	if (getModifiersEx() != 0) {
		str->append(",extModifiers="_s)->append($(getModifiersExText(getModifiersEx())));
	}
	str->append(",clickCount="_s)->append(this->clickCount);
	return str->toString();
}

void MouseEvent::setNewModifiers() {
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::BUTTON1_MASK)) != 0) {
		this->modifiers |= $InputEvent::BUTTON1_DOWN_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::BUTTON2_MASK)) != 0) {
		this->modifiers |= $InputEvent::BUTTON2_DOWN_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::BUTTON3_MASK)) != 0) {
		this->modifiers |= $InputEvent::BUTTON3_DOWN_MASK;
	}
	if (this->id == MouseEvent::MOUSE_PRESSED || this->id == MouseEvent::MOUSE_RELEASED || this->id == MouseEvent::MOUSE_CLICKED) {
		if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::BUTTON1_MASK)) != 0) {
			this->button = MouseEvent::BUTTON1;
			this->modifiers &= (uint32_t)((int32_t)(~$InputEvent::BUTTON2_MASK & (uint32_t)~$InputEvent::BUTTON3_MASK));
			if (this->id != MouseEvent::MOUSE_PRESSED) {
				this->modifiers &= (uint32_t)~$InputEvent::BUTTON1_DOWN_MASK;
			}
		} else if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::BUTTON2_MASK)) != 0) {
			this->button = MouseEvent::BUTTON2;
			this->modifiers &= (uint32_t)((int32_t)(~$InputEvent::BUTTON1_MASK & (uint32_t)~$InputEvent::BUTTON3_MASK));
			if (this->id != MouseEvent::MOUSE_PRESSED) {
				this->modifiers &= (uint32_t)~$InputEvent::BUTTON2_DOWN_MASK;
			}
		} else if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::BUTTON3_MASK)) != 0) {
			this->button = MouseEvent::BUTTON3;
			this->modifiers &= (uint32_t)((int32_t)(~$InputEvent::BUTTON1_MASK & (uint32_t)~$InputEvent::BUTTON2_MASK));
			if (this->id != MouseEvent::MOUSE_PRESSED) {
				this->modifiers &= (uint32_t)~$InputEvent::BUTTON3_DOWN_MASK;
			}
		}
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::ALT_MASK)) != 0) {
		this->modifiers |= $InputEvent::ALT_DOWN_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::META_MASK)) != 0) {
		this->modifiers |= $InputEvent::META_DOWN_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::SHIFT_MASK)) != 0) {
		this->modifiers |= $InputEvent::SHIFT_DOWN_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::CTRL_MASK)) != 0) {
		this->modifiers |= $InputEvent::CTRL_DOWN_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::ALT_GRAPH_MASK)) != 0) {
		this->modifiers |= $InputEvent::ALT_GRAPH_DOWN_MASK;
	}
}

void MouseEvent::setOldModifiers() {
	if (this->id == MouseEvent::MOUSE_PRESSED || this->id == MouseEvent::MOUSE_RELEASED || this->id == MouseEvent::MOUSE_CLICKED) {
		switch (this->button) {
		case MouseEvent::BUTTON1:
			{
				this->modifiers |= $InputEvent::BUTTON1_MASK;
				break;
			}
		case MouseEvent::BUTTON2:
			{
				this->modifiers |= $InputEvent::BUTTON2_MASK;
				break;
			}
		case MouseEvent::BUTTON3:
			{
				this->modifiers |= $InputEvent::BUTTON3_MASK;
				break;
			}
		}
	} else {
		if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::BUTTON1_DOWN_MASK)) != 0) {
			this->modifiers |= $InputEvent::BUTTON1_MASK;
		}
		if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::BUTTON2_DOWN_MASK)) != 0) {
			this->modifiers |= $InputEvent::BUTTON2_MASK;
		}
		if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::BUTTON3_DOWN_MASK)) != 0) {
			this->modifiers |= $InputEvent::BUTTON3_MASK;
		}
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::ALT_DOWN_MASK)) != 0) {
		this->modifiers |= $InputEvent::ALT_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::META_DOWN_MASK)) != 0) {
		this->modifiers |= $InputEvent::META_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::SHIFT_DOWN_MASK)) != 0) {
		this->modifiers |= $InputEvent::SHIFT_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::CTRL_DOWN_MASK)) != 0) {
		this->modifiers |= $InputEvent::CTRL_MASK;
	}
	if (((int32_t)(this->modifiers & (uint32_t)$InputEvent::ALT_GRAPH_DOWN_MASK)) != 0) {
		this->modifiers |= $InputEvent::ALT_GRAPH_MASK;
	}
}

void MouseEvent::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	bool var$0 = getModifiers() != 0;
	if (var$0 && getModifiersEx() == 0) {
		setNewModifiers();
	}
}

void clinit$MouseEvent($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$NativeLibLoader::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			MouseEvent::initIDs();
		}
		$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
		if ($instanceOf($SunToolkit, tk)) {
			MouseEvent::cachedNumberOfButtons = $nc(($cast($SunToolkit, tk)))->getNumberOfButtons();
		} else {
			MouseEvent::cachedNumberOfButtons = 3;
		}
		$AWTAccessor::setMouseEventAccessor($$new($MouseEvent$1));
	}
}

MouseEvent::MouseEvent() {
}

$Class* MouseEvent::load$($String* name, bool initialize) {
	$loadClass(MouseEvent, name, initialize, &_MouseEvent_ClassInfo_, clinit$MouseEvent, allocate$MouseEvent);
	return class$;
}

$Class* MouseEvent::class$ = nullptr;

		} // event
	} // awt
} // java