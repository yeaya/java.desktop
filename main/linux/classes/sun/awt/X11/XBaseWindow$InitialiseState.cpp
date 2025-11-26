#include <sun/awt/X11/XBaseWindow$InitialiseState.h>

#include <java/lang/Enum.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <jcpp.h>

#undef FAILED_INITIALISATION
#undef INITIALISED
#undef INITIALISING

using $XBaseWindow$InitialiseStateArray = $Array<::sun::awt::X11::XBaseWindow$InitialiseState>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XBaseWindow$InitialiseState_FieldInfo_[] = {
	{"INITIALISING", "Lsun/awt/X11/XBaseWindow$InitialiseState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XBaseWindow$InitialiseState, INITIALISING)},
	{"INITIALISED", "Lsun/awt/X11/XBaseWindow$InitialiseState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XBaseWindow$InitialiseState, INITIALISED)},
	{"FAILED_INITIALISATION", "Lsun/awt/X11/XBaseWindow$InitialiseState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XBaseWindow$InitialiseState, FAILED_INITIALISATION)},
	{"$VALUES", "[Lsun/awt/X11/XBaseWindow$InitialiseState;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(XBaseWindow$InitialiseState, $VALUES)},
	{}
};

$MethodInfo _XBaseWindow$InitialiseState_MethodInfo_[] = {
	{"$values", "()[Lsun/awt/X11/XBaseWindow$InitialiseState;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$XBaseWindow$InitialiseStateArray*(*)()>(&XBaseWindow$InitialiseState::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(XBaseWindow$InitialiseState::*)($String*,int32_t)>(&XBaseWindow$InitialiseState::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/awt/X11/XBaseWindow$InitialiseState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XBaseWindow$InitialiseState*(*)($String*)>(&XBaseWindow$InitialiseState::valueOf))},
	{"values", "()[Lsun/awt/X11/XBaseWindow$InitialiseState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$XBaseWindow$InitialiseStateArray*(*)()>(&XBaseWindow$InitialiseState::values))},
	{}
};

$InnerClassInfo _XBaseWindow$InitialiseState_InnerClassesInfo_[] = {
	{"sun.awt.X11.XBaseWindow$InitialiseState", "sun.awt.X11.XBaseWindow", "InitialiseState", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _XBaseWindow$InitialiseState_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.awt.X11.XBaseWindow$InitialiseState",
	"java.lang.Enum",
	nullptr,
	_XBaseWindow$InitialiseState_FieldInfo_,
	_XBaseWindow$InitialiseState_MethodInfo_,
	"Ljava/lang/Enum<Lsun/awt/X11/XBaseWindow$InitialiseState;>;",
	nullptr,
	_XBaseWindow$InitialiseState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XBaseWindow"
};

$Object* allocate$XBaseWindow$InitialiseState($Class* clazz) {
	return $of($alloc(XBaseWindow$InitialiseState));
}

XBaseWindow$InitialiseState* XBaseWindow$InitialiseState::INITIALISING = nullptr;
XBaseWindow$InitialiseState* XBaseWindow$InitialiseState::INITIALISED = nullptr;
XBaseWindow$InitialiseState* XBaseWindow$InitialiseState::FAILED_INITIALISATION = nullptr;
$XBaseWindow$InitialiseStateArray* XBaseWindow$InitialiseState::$VALUES = nullptr;

$XBaseWindow$InitialiseStateArray* XBaseWindow$InitialiseState::$values() {
	$init(XBaseWindow$InitialiseState);
	return $new($XBaseWindow$InitialiseStateArray, {
		XBaseWindow$InitialiseState::INITIALISING,
		XBaseWindow$InitialiseState::INITIALISED,
		XBaseWindow$InitialiseState::FAILED_INITIALISATION
	});
}

$XBaseWindow$InitialiseStateArray* XBaseWindow$InitialiseState::values() {
	$init(XBaseWindow$InitialiseState);
	return $cast($XBaseWindow$InitialiseStateArray, XBaseWindow$InitialiseState::$VALUES->clone());
}

XBaseWindow$InitialiseState* XBaseWindow$InitialiseState::valueOf($String* name) {
	$init(XBaseWindow$InitialiseState);
	return $cast(XBaseWindow$InitialiseState, $Enum::valueOf(XBaseWindow$InitialiseState::class$, name));
}

void XBaseWindow$InitialiseState::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$XBaseWindow$InitialiseState($Class* class$) {
	$assignStatic(XBaseWindow$InitialiseState::INITIALISING, $new(XBaseWindow$InitialiseState, "INITIALISING"_s, 0));
	$assignStatic(XBaseWindow$InitialiseState::INITIALISED, $new(XBaseWindow$InitialiseState, "INITIALISED"_s, 1));
	$assignStatic(XBaseWindow$InitialiseState::FAILED_INITIALISATION, $new(XBaseWindow$InitialiseState, "FAILED_INITIALISATION"_s, 2));
	$assignStatic(XBaseWindow$InitialiseState::$VALUES, XBaseWindow$InitialiseState::$values());
}

XBaseWindow$InitialiseState::XBaseWindow$InitialiseState() {
}

$Class* XBaseWindow$InitialiseState::load$($String* name, bool initialize) {
	$loadClass(XBaseWindow$InitialiseState, name, initialize, &_XBaseWindow$InitialiseState_ClassInfo_, clinit$XBaseWindow$InitialiseState, allocate$XBaseWindow$InitialiseState);
	return class$;
}

$Class* XBaseWindow$InitialiseState::class$ = nullptr;

		} // X11
	} // awt
} // sun