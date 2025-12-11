#include <sun/lwawt/macosx/CMenuItem.h>

#include <java/awt/Font.h>
#include <java/awt/Image.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem.h>
#include <java/awt/MenuShortcut.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <sun/awt/SunToolkit.h>
#include <sun/lwawt/LWToolkit.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeActionGet.h>
#include <sun/lwawt/macosx/CImage$Creator.h>
#include <sun/lwawt/macosx/CImage.h>
#include <sun/lwawt/macosx/CMenuComponent.h>
#include <sun/lwawt/macosx/CMenuItem$1.h>
#include <jcpp.h>

#undef CHAR_UNDEFINED
#undef META_MASK
#undef SHIFT_MASK
#undef VK_UNDEFINED

using $Font = ::java::awt::Font;
using $Image = ::java::awt::Image;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuItem = ::java::awt::MenuItem;
using $MenuShortcut = ::java::awt::MenuShortcut;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $SunToolkit = ::sun::awt::SunToolkit;
using $LWToolkit = ::sun::lwawt::LWToolkit;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CFRetainedResource$CFNativeActionGet = ::sun::lwawt::macosx::CFRetainedResource$CFNativeActionGet;
using $CImage = ::sun::lwawt::macosx::CImage;
using $CImage$Creator = ::sun::lwawt::macosx::CImage$Creator;
using $CMenuComponent = ::sun::lwawt::macosx::CMenuComponent;
using $CMenuItem$1 = ::sun::lwawt::macosx::CMenuItem$1;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CMenuItem$$Lambda$lambda$createModel$0 : public $CFRetainedResource$CFNativeActionGet {
	$class(CMenuItem$$Lambda$lambda$createModel$0, $NO_CLASS_INIT, $CFRetainedResource$CFNativeActionGet)
public:
	void init$(CMenuItem* inst) {
		$set(this, inst$, inst);
	}
	virtual int64_t run(int64_t ptr) override {
		 return $nc(inst$)->lambda$createModel$0(ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CMenuItem$$Lambda$lambda$createModel$0>());
	}
	CMenuItem* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CMenuItem$$Lambda$lambda$createModel$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CMenuItem$$Lambda$lambda$createModel$0, inst$)},
	{}
};
$MethodInfo CMenuItem$$Lambda$lambda$createModel$0::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CMenuItem;)V", nullptr, $PUBLIC, $method(static_cast<void(CMenuItem$$Lambda$lambda$createModel$0::*)(CMenuItem*)>(&CMenuItem$$Lambda$lambda$createModel$0::init$))},
	{"run", "(J)J", nullptr, $PUBLIC},
	{}
};
$ClassInfo CMenuItem$$Lambda$lambda$createModel$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CMenuItem$$Lambda$lambda$createModel$0",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeActionGet",
	fieldInfos,
	methodInfos
};
$Class* CMenuItem$$Lambda$lambda$createModel$0::load$($String* name, bool initialize) {
	$loadClass(CMenuItem$$Lambda$lambda$createModel$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CMenuItem$$Lambda$lambda$createModel$0::class$ = nullptr;

class CMenuItem$$Lambda$lambda$setLabel$1$1 : public $CFRetainedResource$CFNativeAction {
	$class(CMenuItem$$Lambda$lambda$setLabel$1$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CMenuItem* inst, $String* finalLabel, char16_t finalKeyChar, int32_t finalKeyCode, int32_t finalKeyMask) {
		$set(this, inst$, inst);
		$set(this, finalLabel, finalLabel);
		this->finalKeyChar = finalKeyChar;
		this->finalKeyCode = finalKeyCode;
		this->finalKeyMask = finalKeyMask;
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$setLabel$1(finalLabel, finalKeyChar, finalKeyCode, finalKeyMask, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CMenuItem$$Lambda$lambda$setLabel$1$1>());
	}
	CMenuItem* inst$ = nullptr;
	$String* finalLabel = nullptr;
	char16_t finalKeyChar = 0;
	int32_t finalKeyCode = 0;
	int32_t finalKeyMask = 0;
	static $FieldInfo fieldInfos[6];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CMenuItem$$Lambda$lambda$setLabel$1$1::fieldInfos[6] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CMenuItem$$Lambda$lambda$setLabel$1$1, inst$)},
	{"finalLabel", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CMenuItem$$Lambda$lambda$setLabel$1$1, finalLabel)},
	{"finalKeyChar", "C", nullptr, $PUBLIC, $field(CMenuItem$$Lambda$lambda$setLabel$1$1, finalKeyChar)},
	{"finalKeyCode", "I", nullptr, $PUBLIC, $field(CMenuItem$$Lambda$lambda$setLabel$1$1, finalKeyCode)},
	{"finalKeyMask", "I", nullptr, $PUBLIC, $field(CMenuItem$$Lambda$lambda$setLabel$1$1, finalKeyMask)},
	{}
};
$MethodInfo CMenuItem$$Lambda$lambda$setLabel$1$1::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CMenuItem;Ljava/lang/String;CII)V", nullptr, $PUBLIC, $method(static_cast<void(CMenuItem$$Lambda$lambda$setLabel$1$1::*)(CMenuItem*,$String*,char16_t,int32_t,int32_t)>(&CMenuItem$$Lambda$lambda$setLabel$1$1::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CMenuItem$$Lambda$lambda$setLabel$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CMenuItem$$Lambda$lambda$setLabel$1$1",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CMenuItem$$Lambda$lambda$setLabel$1$1::load$($String* name, bool initialize) {
	$loadClass(CMenuItem$$Lambda$lambda$setLabel$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CMenuItem$$Lambda$lambda$setLabel$1$1::class$ = nullptr;

class CMenuItem$$Lambda$lambda$setImage$3$2 : public $CFRetainedResource$CFNativeAction {
	$class(CMenuItem$$Lambda$lambda$setImage$3$2, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CMenuItem* inst, $CImage* cimg) {
		$set(this, inst$, inst);
		$set(this, cimg, cimg);
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$setImage$3(cimg, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CMenuItem$$Lambda$lambda$setImage$3$2>());
	}
	CMenuItem* inst$ = nullptr;
	$CImage* cimg = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CMenuItem$$Lambda$lambda$setImage$3$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CMenuItem$$Lambda$lambda$setImage$3$2, inst$)},
	{"cimg", "Lsun/lwawt/macosx/CImage;", nullptr, $PUBLIC, $field(CMenuItem$$Lambda$lambda$setImage$3$2, cimg)},
	{}
};
$MethodInfo CMenuItem$$Lambda$lambda$setImage$3$2::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CMenuItem;Lsun/lwawt/macosx/CImage;)V", nullptr, $PUBLIC, $method(static_cast<void(CMenuItem$$Lambda$lambda$setImage$3$2::*)(CMenuItem*,$CImage*)>(&CMenuItem$$Lambda$lambda$setImage$3$2::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CMenuItem$$Lambda$lambda$setImage$3$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CMenuItem$$Lambda$lambda$setImage$3$2",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CMenuItem$$Lambda$lambda$setImage$3$2::load$($String* name, bool initialize) {
	$loadClass(CMenuItem$$Lambda$lambda$setImage$3$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CMenuItem$$Lambda$lambda$setImage$3$2::class$ = nullptr;

class CMenuItem$$Lambda$lambda$setToolTipText$4$3 : public $CFRetainedResource$CFNativeAction {
	$class(CMenuItem$$Lambda$lambda$setToolTipText$4$3, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CMenuItem* inst, $String* text) {
		$set(this, inst$, inst);
		$set(this, text, text);
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$setToolTipText$4(text, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CMenuItem$$Lambda$lambda$setToolTipText$4$3>());
	}
	CMenuItem* inst$ = nullptr;
	$String* text = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CMenuItem$$Lambda$lambda$setToolTipText$4$3::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CMenuItem$$Lambda$lambda$setToolTipText$4$3, inst$)},
	{"text", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CMenuItem$$Lambda$lambda$setToolTipText$4$3, text)},
	{}
};
$MethodInfo CMenuItem$$Lambda$lambda$setToolTipText$4$3::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CMenuItem;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CMenuItem$$Lambda$lambda$setToolTipText$4$3::*)(CMenuItem*,$String*)>(&CMenuItem$$Lambda$lambda$setToolTipText$4$3::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CMenuItem$$Lambda$lambda$setToolTipText$4$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CMenuItem$$Lambda$lambda$setToolTipText$4$3",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CMenuItem$$Lambda$lambda$setToolTipText$4$3::load$($String* name, bool initialize) {
	$loadClass(CMenuItem$$Lambda$lambda$setToolTipText$4$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CMenuItem$$Lambda$lambda$setToolTipText$4$3::class$ = nullptr;

class CMenuItem$$Lambda$lambda$setEnabled$5$4 : public $CFRetainedResource$CFNativeAction {
	$class(CMenuItem$$Lambda$lambda$setEnabled$5$4, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CMenuItem* inst, bool finalB) {
		$set(this, inst$, inst);
		this->finalB = finalB;
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$setEnabled$5(finalB, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CMenuItem$$Lambda$lambda$setEnabled$5$4>());
	}
	CMenuItem* inst$ = nullptr;
	bool finalB = false;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CMenuItem$$Lambda$lambda$setEnabled$5$4::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CMenuItem$$Lambda$lambda$setEnabled$5$4, inst$)},
	{"finalB", "Z", nullptr, $PUBLIC, $field(CMenuItem$$Lambda$lambda$setEnabled$5$4, finalB)},
	{}
};
$MethodInfo CMenuItem$$Lambda$lambda$setEnabled$5$4::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CMenuItem;Z)V", nullptr, $PUBLIC, $method(static_cast<void(CMenuItem$$Lambda$lambda$setEnabled$5$4::*)(CMenuItem*,bool)>(&CMenuItem$$Lambda$lambda$setEnabled$5$4::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CMenuItem$$Lambda$lambda$setEnabled$5$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CMenuItem$$Lambda$lambda$setEnabled$5$4",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CMenuItem$$Lambda$lambda$setEnabled$5$4::load$($String* name, bool initialize) {
	$loadClass(CMenuItem$$Lambda$lambda$setEnabled$5$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CMenuItem$$Lambda$lambda$setEnabled$5$4::class$ = nullptr;

class CMenuItem$$Lambda$lambda$setImage$2$5 : public $CFRetainedResource$CFNativeAction {
	$class(CMenuItem$$Lambda$lambda$setImage$2$5, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CMenuItem* inst, int64_t ptr) {
		$set(this, inst$, inst);
		this->ptr = ptr;
	}
	virtual void run(int64_t imgPtr) override {
		$nc(inst$)->lambda$setImage$2(ptr, imgPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CMenuItem$$Lambda$lambda$setImage$2$5>());
	}
	CMenuItem* inst$ = nullptr;
	int64_t ptr = 0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CMenuItem$$Lambda$lambda$setImage$2$5::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CMenuItem$$Lambda$lambda$setImage$2$5, inst$)},
	{"ptr", "J", nullptr, $PUBLIC, $field(CMenuItem$$Lambda$lambda$setImage$2$5, ptr)},
	{}
};
$MethodInfo CMenuItem$$Lambda$lambda$setImage$2$5::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CMenuItem;J)V", nullptr, $PUBLIC, $method(static_cast<void(CMenuItem$$Lambda$lambda$setImage$2$5::*)(CMenuItem*,int64_t)>(&CMenuItem$$Lambda$lambda$setImage$2$5::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CMenuItem$$Lambda$lambda$setImage$2$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CMenuItem$$Lambda$lambda$setImage$2$5",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CMenuItem$$Lambda$lambda$setImage$2$5::load$($String* name, bool initialize) {
	$loadClass(CMenuItem$$Lambda$lambda$setImage$2$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CMenuItem$$Lambda$lambda$setImage$2$5::class$ = nullptr;

$FieldInfo _CMenuItem_FieldInfo_[] = {
	{"enabled", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(CMenuItem, enabled)},
	{}
};

$MethodInfo _CMenuItem_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/MenuItem;)V", nullptr, $PUBLIC, $method(static_cast<void(CMenuItem::*)($MenuItem*)>(&CMenuItem::init$))},
	{"createModel", "()J", nullptr, 0},
	{"handleAction", "(JI)V", nullptr, 0},
	{"initialize", "(Ljava/awt/MenuItem;)V", nullptr, $PROTECTED},
	{"isEnabled", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(CMenuItem::*)()>(&CMenuItem::isEnabled))},
	{"isSeparator", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(CMenuItem::*)()>(&CMenuItem::isSeparator))},
	{"lambda$createModel$0", "(J)J", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<int64_t(CMenuItem::*)(int64_t)>(&CMenuItem::lambda$createModel$0))},
	{"lambda$setEnabled$5", "(ZJ)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CMenuItem::*)(bool,int64_t)>(&CMenuItem::lambda$setEnabled$5))},
	{"lambda$setImage$2", "(JJ)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CMenuItem::*)(int64_t,int64_t)>(&CMenuItem::lambda$setImage$2))},
	{"lambda$setImage$3", "(Lsun/lwawt/macosx/CImage;J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CMenuItem::*)($CImage*,int64_t)>(&CMenuItem::lambda$setImage$3))},
	{"lambda$setLabel$1", "(Ljava/lang/String;CIIJ)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CMenuItem::*)($String*,char16_t,int32_t,int32_t,int64_t)>(&CMenuItem::lambda$setLabel$1))},
	{"lambda$setToolTipText$4", "(Ljava/lang/String;J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CMenuItem::*)($String*,int64_t)>(&CMenuItem::lambda$setToolTipText$4))},
	{"nativeCreate", "(JZ)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(CMenuItem::*)(int64_t,bool)>(&CMenuItem::nativeCreate))},
	{"nativeSetEnabled", "(JZ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CMenuItem::*)(int64_t,bool)>(&CMenuItem::nativeSetEnabled))},
	{"nativeSetImage", "(JJ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CMenuItem::*)(int64_t,int64_t)>(&CMenuItem::nativeSetImage))},
	{"nativeSetLabel", "(JLjava/lang/String;CII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CMenuItem::*)(int64_t,$String*,char16_t,int32_t,int32_t)>(&CMenuItem::nativeSetLabel))},
	{"nativeSetTooltip", "(JLjava/lang/String;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CMenuItem::*)(int64_t,$String*)>(&CMenuItem::nativeSetTooltip))},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $FINAL},
	{"setImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(CMenuItem::*)($Image*)>(&CMenuItem::setImage))},
	{"setLabel", "(Ljava/lang/String;CII)V", nullptr, $PUBLIC},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setToolTipText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(CMenuItem::*)($String*)>(&CMenuItem::setToolTipText))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_nativeCreate 17
#define _METHOD_INDEX_nativeSetEnabled 18
#define _METHOD_INDEX_nativeSetImage 19
#define _METHOD_INDEX_nativeSetLabel 20
#define _METHOD_INDEX_nativeSetTooltip 21

$InnerClassInfo _CMenuItem_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CMenuItem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CMenuItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CMenuItem",
	"sun.lwawt.macosx.CMenuComponent",
	"java.awt.peer.MenuItemPeer",
	_CMenuItem_FieldInfo_,
	_CMenuItem_MethodInfo_,
	nullptr,
	nullptr,
	_CMenuItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CMenuItem$1"
};

$Object* allocate$CMenuItem($Class* clazz) {
	return $of($alloc(CMenuItem));
}

void CMenuItem::dispose() {
	this->$CMenuComponent::dispose();
}

void CMenuItem::setFont($Font* f) {
	this->$CMenuComponent::setFont(f);
}

void CMenuItem::finalize() {
	this->$CMenuComponent::finalize();
}

int32_t CMenuItem::hashCode() {
	 return this->$CMenuComponent::hashCode();
}

bool CMenuItem::equals(Object$* arg0) {
	 return this->$CMenuComponent::equals(arg0);
}

$Object* CMenuItem::clone() {
	 return this->$CMenuComponent::clone();
}

$String* CMenuItem::toString() {
	 return this->$CMenuComponent::toString();
}

void CMenuItem::init$($MenuItem* target) {
	$CMenuComponent::init$(target);
	$set(this, enabled, $new($AtomicBoolean, true));
	initialize(target);
}

void CMenuItem::initialize($MenuItem* target) {
	if (!isSeparator()) {
		setLabel($($nc(target)->getLabel()));
		setEnabled($nc(target)->isEnabled());
	}
}

bool CMenuItem::isSeparator() {
	$useLocalCurrentObjectStackCache();
	$var($String, label, $nc(($cast($MenuItem, $(getTarget()))))->getLabel());
	return (label != nullptr && label->equals("-"_s));
}

int64_t CMenuItem::createModel() {
	$useLocalCurrentObjectStackCache();
	$var($CMenuComponent, parent, $cast($CMenuComponent, $LWToolkit::targetToPeer($($nc($(getTarget()))->getParent()))));
	return $nc(parent)->executeGet(static_cast<$CFRetainedResource$CFNativeActionGet*>($$new(CMenuItem$$Lambda$lambda$createModel$0, this)));
}

void CMenuItem::setLabel($String* label$renamed, char16_t keyChar, int32_t keyCode, int32_t modifiers) {
	$useLocalCurrentObjectStackCache();
	$var($String, label, label$renamed);
	int32_t keyMask = modifiers;
	if (keyCode == $KeyEvent::VK_UNDEFINED) {
		$var($MenuShortcut, shortcut, $nc(($cast($MenuItem, $(getTarget()))))->getShortcut());
		if (shortcut != nullptr) {
			keyCode = shortcut->getKey();
			keyMask |= $InputEvent::META_MASK;
			if (shortcut->usesShiftModifier()) {
				keyMask |= $InputEvent::SHIFT_MASK;
			}
		}
	}
	if (label == nullptr) {
		$assign(label, ""_s);
	}
	if (keyChar == $KeyEvent::CHAR_UNDEFINED) {
		keyChar = (char16_t)0;
	}
	$var($String, finalLabel, label);
	char16_t finalKeyChar = keyChar;
	int32_t finalKeyCode = keyCode;
	int32_t finalKeyMask = keyMask;
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CMenuItem$$Lambda$lambda$setLabel$1$1, this, finalLabel, finalKeyChar, finalKeyCode, finalKeyMask)));
}

void CMenuItem::setLabel($String* label) {
	setLabel(label, (char16_t)0, $KeyEvent::VK_UNDEFINED, 0);
}

void CMenuItem::setImage($Image* img) {
	$useLocalCurrentObjectStackCache();
	$var($CImage, cimg, $nc($($CImage::getCreator()))->createFromImage(img));
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CMenuItem$$Lambda$lambda$setImage$3$2, this, cimg)));
}

void CMenuItem::setToolTipText($String* text) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CMenuItem$$Lambda$lambda$setToolTipText$4$3, this, text)));
}

bool CMenuItem::isEnabled() {
	return $nc(this->enabled)->get();
}

void CMenuItem::setEnabled(bool b) {
	$useLocalCurrentObjectStackCache();
	$var($Object, parent, $LWToolkit::targetToPeer($($nc($(getTarget()))->getParent())));
	if ($instanceOf(CMenuItem, parent)) {
		b &= $nc(($cast(CMenuItem, parent)))->isEnabled();
	}
	if ($nc(this->enabled)->compareAndSet(!b, b)) {
		bool finalB = b;
		execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CMenuItem$$Lambda$lambda$setEnabled$5$4, this, finalB)));
	}
}

int64_t CMenuItem::nativeCreate(int64_t parentMenu, bool isSeparator) {
	int64_t $ret = 0;
	$prepareNative(CMenuItem, nativeCreate, int64_t, int64_t parentMenu, bool isSeparator);
	$ret = $invokeNative(parentMenu, isSeparator);
	$finishNative();
	return $ret;
}

void CMenuItem::nativeSetLabel(int64_t modelPtr, $String* label, char16_t keyChar, int32_t keyCode, int32_t modifiers) {
	$prepareNative(CMenuItem, nativeSetLabel, void, int64_t modelPtr, $String* label, char16_t keyChar, int32_t keyCode, int32_t modifiers);
	$invokeNative(modelPtr, label, keyChar, keyCode, modifiers);
	$finishNative();
}

void CMenuItem::nativeSetImage(int64_t modelPtr, int64_t image) {
	$prepareNative(CMenuItem, nativeSetImage, void, int64_t modelPtr, int64_t image);
	$invokeNative(modelPtr, image);
	$finishNative();
}

void CMenuItem::nativeSetTooltip(int64_t modelPtr, $String* text) {
	$prepareNative(CMenuItem, nativeSetTooltip, void, int64_t modelPtr, $String* text);
	$invokeNative(modelPtr, text);
	$finishNative();
}

void CMenuItem::nativeSetEnabled(int64_t modelPtr, bool b) {
	$prepareNative(CMenuItem, nativeSetEnabled, void, int64_t modelPtr, bool b);
	$invokeNative(modelPtr, b);
	$finishNative();
}

void CMenuItem::handleAction(int64_t when, int32_t modifiers) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of(getTarget()));
	$SunToolkit::executeOnEventHandlerThread(var$0, $$new($CMenuItem$1, this, when, modifiers));
}

void CMenuItem::lambda$setEnabled$5(bool finalB, int64_t ptr) {
	nativeSetEnabled(ptr, finalB);
}

void CMenuItem::lambda$setToolTipText$4($String* text, int64_t ptr) {
	nativeSetTooltip(ptr, text);
}

void CMenuItem::lambda$setImage$3($CImage* cimg, int64_t ptr) {
	if (cimg == nullptr) {
		nativeSetImage(ptr, 0);
	} else {
		$nc(cimg)->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CMenuItem$$Lambda$lambda$setImage$2$5, this, ptr)));
	}
}

void CMenuItem::lambda$setImage$2(int64_t ptr, int64_t imgPtr) {
	nativeSetImage(ptr, imgPtr);
}

void CMenuItem::lambda$setLabel$1($String* finalLabel, char16_t finalKeyChar, int32_t finalKeyCode, int32_t finalKeyMask, int64_t ptr) {
	nativeSetLabel(ptr, finalLabel, finalKeyChar, finalKeyCode, finalKeyMask);
}

int64_t CMenuItem::lambda$createModel$0(int64_t ptr) {
	return nativeCreate(ptr, isSeparator());
}

CMenuItem::CMenuItem() {
}

$Class* CMenuItem::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CMenuItem$$Lambda$lambda$createModel$0::classInfo$.name)) {
			return CMenuItem$$Lambda$lambda$createModel$0::load$(name, initialize);
		}
		if (name->equals(CMenuItem$$Lambda$lambda$setLabel$1$1::classInfo$.name)) {
			return CMenuItem$$Lambda$lambda$setLabel$1$1::load$(name, initialize);
		}
		if (name->equals(CMenuItem$$Lambda$lambda$setImage$3$2::classInfo$.name)) {
			return CMenuItem$$Lambda$lambda$setImage$3$2::load$(name, initialize);
		}
		if (name->equals(CMenuItem$$Lambda$lambda$setToolTipText$4$3::classInfo$.name)) {
			return CMenuItem$$Lambda$lambda$setToolTipText$4$3::load$(name, initialize);
		}
		if (name->equals(CMenuItem$$Lambda$lambda$setEnabled$5$4::classInfo$.name)) {
			return CMenuItem$$Lambda$lambda$setEnabled$5$4::load$(name, initialize);
		}
		if (name->equals(CMenuItem$$Lambda$lambda$setImage$2$5::classInfo$.name)) {
			return CMenuItem$$Lambda$lambda$setImage$2$5::load$(name, initialize);
		}
	}
	$loadClass(CMenuItem, name, initialize, &_CMenuItem_ClassInfo_, allocate$CMenuItem);
	return class$;
}

$Class* CMenuItem::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun