#include <sun/awt/X11/XWindowAttributesData.h>

#include <java/util/List.h>
#include <jcpp.h>

#undef AWT_DECOR_ALL
#undef AWT_DECOR_BORDER
#undef AWT_DECOR_MAXIMIZE
#undef AWT_DECOR_MENU
#undef AWT_DECOR_MINIMIZE
#undef AWT_DECOR_NONE
#undef AWT_DECOR_RESIZEH
#undef AWT_DECOR_TITLE
#undef AWT_FULLY_OBSCURED
#undef AWT_PARTIALLY_OBSCURED
#undef AWT_UNKNOWN_OBSCURITY
#undef AWT_UNOBSCURED
#undef ICONIC
#undef MAXIMIZED
#undef NORMAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWindowAttributesData_FieldInfo_[] = {
	{"NORMAL", "I", nullptr, $STATIC, $staticField(XWindowAttributesData, NORMAL)},
	{"ICONIC", "I", nullptr, $STATIC, $staticField(XWindowAttributesData, ICONIC)},
	{"MAXIMIZED", "I", nullptr, $STATIC, $staticField(XWindowAttributesData, MAXIMIZED)},
	{"AWT_DECOR_NONE", "I", nullptr, $STATIC, $staticField(XWindowAttributesData, AWT_DECOR_NONE)},
	{"AWT_DECOR_ALL", "I", nullptr, $STATIC, $staticField(XWindowAttributesData, AWT_DECOR_ALL)},
	{"AWT_DECOR_BORDER", "I", nullptr, $STATIC, $staticField(XWindowAttributesData, AWT_DECOR_BORDER)},
	{"AWT_DECOR_RESIZEH", "I", nullptr, $STATIC, $staticField(XWindowAttributesData, AWT_DECOR_RESIZEH)},
	{"AWT_DECOR_TITLE", "I", nullptr, $STATIC, $staticField(XWindowAttributesData, AWT_DECOR_TITLE)},
	{"AWT_DECOR_MENU", "I", nullptr, $STATIC, $staticField(XWindowAttributesData, AWT_DECOR_MENU)},
	{"AWT_DECOR_MINIMIZE", "I", nullptr, $STATIC, $staticField(XWindowAttributesData, AWT_DECOR_MINIMIZE)},
	{"AWT_DECOR_MAXIMIZE", "I", nullptr, $STATIC, $staticField(XWindowAttributesData, AWT_DECOR_MAXIMIZE)},
	{"AWT_UNOBSCURED", "I", nullptr, $STATIC, $staticField(XWindowAttributesData, AWT_UNOBSCURED)},
	{"AWT_PARTIALLY_OBSCURED", "I", nullptr, $STATIC, $staticField(XWindowAttributesData, AWT_PARTIALLY_OBSCURED)},
	{"AWT_FULLY_OBSCURED", "I", nullptr, $STATIC, $staticField(XWindowAttributesData, AWT_FULLY_OBSCURED)},
	{"AWT_UNKNOWN_OBSCURITY", "I", nullptr, $STATIC, $staticField(XWindowAttributesData, AWT_UNKNOWN_OBSCURITY)},
	{"nativeDecor", "Z", nullptr, 0, $field(XWindowAttributesData, nativeDecor)},
	{"initialFocus", "Z", nullptr, 0, $field(XWindowAttributesData, initialFocus)},
	{"isResizable", "Z", nullptr, 0, $field(XWindowAttributesData, isResizable)},
	{"initialState", "I", nullptr, 0, $field(XWindowAttributesData, initialState)},
	{"initialResizability", "Z", nullptr, 0, $field(XWindowAttributesData, initialResizability)},
	{"visibilityState", "I", nullptr, 0, $field(XWindowAttributesData, visibilityState)},
	{"title", "Ljava/lang/String;", nullptr, 0, $field(XWindowAttributesData, title)},
	{"icons", "Ljava/util/List;", "Ljava/util/List<Lsun/awt/IconInfo;>;", 0, $field(XWindowAttributesData, icons)},
	{"iconsInherited", "Z", nullptr, 0, $field(XWindowAttributesData, iconsInherited)},
	{"decorations", "I", nullptr, 0, $field(XWindowAttributesData, decorations)},
	{"functions", "I", nullptr, 0, $field(XWindowAttributesData, functions)},
	{}
};

$MethodInfo _XWindowAttributesData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XWindowAttributesData::*)()>(&XWindowAttributesData::init$))},
	{}
};

$ClassInfo _XWindowAttributesData_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XWindowAttributesData",
	"java.lang.Object",
	nullptr,
	_XWindowAttributesData_FieldInfo_,
	_XWindowAttributesData_MethodInfo_
};

$Object* allocate$XWindowAttributesData($Class* clazz) {
	return $of($alloc(XWindowAttributesData));
}

int32_t XWindowAttributesData::NORMAL = 0;
int32_t XWindowAttributesData::ICONIC = 0;
int32_t XWindowAttributesData::MAXIMIZED = 0;
int32_t XWindowAttributesData::AWT_DECOR_NONE = 0;
int32_t XWindowAttributesData::AWT_DECOR_ALL = 0;
int32_t XWindowAttributesData::AWT_DECOR_BORDER = 0;
int32_t XWindowAttributesData::AWT_DECOR_RESIZEH = 0;
int32_t XWindowAttributesData::AWT_DECOR_TITLE = 0;
int32_t XWindowAttributesData::AWT_DECOR_MENU = 0;
int32_t XWindowAttributesData::AWT_DECOR_MINIMIZE = 0;
int32_t XWindowAttributesData::AWT_DECOR_MAXIMIZE = 0;
int32_t XWindowAttributesData::AWT_UNOBSCURED = 0;
int32_t XWindowAttributesData::AWT_PARTIALLY_OBSCURED = 0;
int32_t XWindowAttributesData::AWT_FULLY_OBSCURED = 0;
int32_t XWindowAttributesData::AWT_UNKNOWN_OBSCURITY = 0;

void XWindowAttributesData::init$() {
	this->nativeDecor = false;
	this->initialFocus = false;
	this->isResizable = false;
	this->initialState = XWindowAttributesData::NORMAL;
	this->visibilityState = XWindowAttributesData::AWT_UNKNOWN_OBSCURITY;
	$set(this, title, nullptr);
	$set(this, icons, nullptr);
	this->iconsInherited = true;
	this->decorations = 0;
	this->functions = 0;
	this->initialResizability = true;
}

void clinit$XWindowAttributesData($Class* class$) {
	XWindowAttributesData::NORMAL = 0;
	XWindowAttributesData::ICONIC = 1;
	XWindowAttributesData::MAXIMIZED = 2;
	XWindowAttributesData::AWT_DECOR_NONE = 0;
	XWindowAttributesData::AWT_DECOR_ALL = 1;
	XWindowAttributesData::AWT_DECOR_BORDER = 2;
	XWindowAttributesData::AWT_DECOR_RESIZEH = 4;
	XWindowAttributesData::AWT_DECOR_TITLE = 8;
	XWindowAttributesData::AWT_DECOR_MENU = 16;
	XWindowAttributesData::AWT_DECOR_MINIMIZE = 32;
	XWindowAttributesData::AWT_DECOR_MAXIMIZE = 64;
	XWindowAttributesData::AWT_UNOBSCURED = 0;
	XWindowAttributesData::AWT_PARTIALLY_OBSCURED = 1;
	XWindowAttributesData::AWT_FULLY_OBSCURED = 2;
	XWindowAttributesData::AWT_UNKNOWN_OBSCURITY = 3;
}

XWindowAttributesData::XWindowAttributesData() {
}

$Class* XWindowAttributesData::load$($String* name, bool initialize) {
	$loadClass(XWindowAttributesData, name, initialize, &_XWindowAttributesData_ClassInfo_, clinit$XWindowAttributesData, allocate$XWindowAttributesData);
	return class$;
}

$Class* XWindowAttributesData::class$ = nullptr;

		} // X11
	} // awt
} // sun