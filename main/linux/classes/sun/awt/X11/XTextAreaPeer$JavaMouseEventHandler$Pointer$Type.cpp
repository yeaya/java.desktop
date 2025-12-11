#include <sun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer$Type.h>

#include <java/lang/Enum.h>
#include <sun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer.h>
#include <sun/awt/X11/XTextAreaPeer$JavaMouseEventHandler.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <jcpp.h>

#undef BAR
#undef BUTTON
#undef NONE
#undef TEXT

using $XTextAreaPeer$JavaMouseEventHandler$Pointer$TypeArray = $Array<::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextAreaPeer$JavaMouseEventHandler$Pointer$Type_FieldInfo_[] = {
	{"NONE", "Lsun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type, NONE)},
	{"TEXT", "Lsun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type, TEXT)},
	{"BAR", "Lsun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type, BAR)},
	{"BUTTON", "Lsun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type, BUTTON)},
	{"$VALUES", "[Lsun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type, $VALUES)},
	{}
};

$MethodInfo _XTextAreaPeer$JavaMouseEventHandler$Pointer$Type_MethodInfo_[] = {
	{"$values", "()[Lsun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$XTextAreaPeer$JavaMouseEventHandler$Pointer$TypeArray*(*)()>(&XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::*)($String*,int32_t)>(&XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XTextAreaPeer$JavaMouseEventHandler$Pointer$Type*(*)($String*)>(&XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::valueOf))},
	{"values", "()[Lsun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$XTextAreaPeer$JavaMouseEventHandler$Pointer$TypeArray*(*)()>(&XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::values))},
	{}
};

$InnerClassInfo _XTextAreaPeer$JavaMouseEventHandler$Pointer$Type_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler", "sun.awt.X11.XTextAreaPeer", "JavaMouseEventHandler", $PRIVATE | $STATIC | $FINAL},
	{"sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler$Pointer", "sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler", "Pointer", $PRIVATE | $STATIC | $FINAL},
	{"sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler$Pointer$Type", "sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler$Pointer", "Type", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _XTextAreaPeer$JavaMouseEventHandler$Pointer$Type_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler$Pointer$Type",
	"java.lang.Enum",
	nullptr,
	_XTextAreaPeer$JavaMouseEventHandler$Pointer$Type_FieldInfo_,
	_XTextAreaPeer$JavaMouseEventHandler$Pointer$Type_MethodInfo_,
	"Ljava/lang/Enum<Lsun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer$Type;>;",
	nullptr,
	_XTextAreaPeer$JavaMouseEventHandler$Pointer$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextAreaPeer"
};

$Object* allocate$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type($Class* clazz) {
	return $of($alloc(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type));
}

XTextAreaPeer$JavaMouseEventHandler$Pointer$Type* XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::NONE = nullptr;
XTextAreaPeer$JavaMouseEventHandler$Pointer$Type* XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::TEXT = nullptr;
XTextAreaPeer$JavaMouseEventHandler$Pointer$Type* XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::BAR = nullptr;
XTextAreaPeer$JavaMouseEventHandler$Pointer$Type* XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::BUTTON = nullptr;
$XTextAreaPeer$JavaMouseEventHandler$Pointer$TypeArray* XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::$VALUES = nullptr;

$XTextAreaPeer$JavaMouseEventHandler$Pointer$TypeArray* XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::$values() {
	$init(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type);
	return $new($XTextAreaPeer$JavaMouseEventHandler$Pointer$TypeArray, {
		XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::NONE,
		XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::TEXT,
		XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::BAR,
		XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::BUTTON
	});
}

$XTextAreaPeer$JavaMouseEventHandler$Pointer$TypeArray* XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::values() {
	$init(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type);
	return $cast($XTextAreaPeer$JavaMouseEventHandler$Pointer$TypeArray, XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::$VALUES->clone());
}

XTextAreaPeer$JavaMouseEventHandler$Pointer$Type* XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::valueOf($String* name) {
	$init(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type);
	return $cast(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type, $Enum::valueOf(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::class$, name));
}

void XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type($Class* class$) {
	$assignStatic(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::NONE, $new(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type, "NONE"_s, 0));
	$assignStatic(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::TEXT, $new(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type, "TEXT"_s, 1));
	$assignStatic(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::BAR, $new(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type, "BAR"_s, 2));
	$assignStatic(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::BUTTON, $new(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type, "BUTTON"_s, 3));
	$assignStatic(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::$VALUES, XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::$values());
}

XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type() {
}

$Class* XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::load$($String* name, bool initialize) {
	$loadClass(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type, name, initialize, &_XTextAreaPeer$JavaMouseEventHandler$Pointer$Type_ClassInfo_, clinit$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type, allocate$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type);
	return class$;
}

$Class* XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::class$ = nullptr;

		} // X11
	} // awt
} // sun